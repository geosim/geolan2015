// (C) Copyright 2002-2012 by Autodesk, Inc. 
//
// Permission to use, copy, modify, and distribute this software in
// object code form for any purpose and without fee is hereby granted, 
// provided that the above copyright notice appears in all copies and 
// that both that copyright notice and the limited warranty and
// restricted rights notice below appear in all supporting 
// documentation.
//
// AUTODESK PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
// AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC. 
// DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
// UNINTERRUPTED OR ERROR FREE.
//
// Use, duplication, or disclosure by the U.S. Government is subject to 
// restrictions set forth in FAR 52.227-19 (Commercial Computer
// Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
// (Rights in Technical Data and Computer Software), as applicable.
//

//-----------------------------------------------------------------------------
//----- acrxEntryPoint.cpp
//-----------------------------------------------------------------------------
#include "StdAfx.h"
#include "resource.h"

#include "..\gs_def.h" // definizioni globali

#include "gs_msgit.h"     // MESSAGGI di STAMPA "ITALIANO"
#include "gs_errit.h"     // MESSAGGI di ERRORE "ITALIANO"


//-----------------------------------------------------------------------------
#define szRDS _RXST("gs")


//-----------------------------------------------------------------------------
//  LOCAL FUNCTION FORWARD DECLARATIONS
//-----------------------------------------------------------------------------


int gs_traduction(void);
int gs_error_msg(void);


//-----------------------------------------------------------------------------
//  TYPEDEFS
//-----------------------------------------------------------------------------


/* Lisp Function Table */
typedef struct 
{
   TCHAR *name;
   int   (*fptr)();
} ftblent;

ftblent exfun[] = 
{
   {_T("gs_traduction"),           gs_traduction},
   {_T("gs_error_msg"),            gs_error_msg}
};


/*********************************************************/
/*.doc gs_traduction                            <external>
/*+
  Questa funzione Lisp ritorna un messaggio corrispondente al
  codice in input.
  Parametri:
  Code         Codice numerico intero
-*/
/*********************************************************/
int gs_traduction(void)
{
   resbuf *arg = acedGetArgs();
   int    code;
   TCHAR  tmp[60];

   acedRetStr(GS_EMPTYSTR);
   if (arg == NULL || arg->restype != RTSHORT) return RTERROR;
   code = arg->resval.rint;

   if (code >= 0 && code < ELEMENTS(GS_LANGUAGE))
      acedRetStr(GS_LANGUAGE[code]); 
   else
   {
	   swprintf(tmp, 60, GS_LANGUAGE[132], code); // "\nGEOsim: messaggio sconosciuto %d.\n"
      acedRetStr(tmp);
   }

   return RTNORM;
}


/*********************************************************/
/*.doc gs_error_msg                              <external>
/*+
  Questa funzione Lisp ritorna un messaggio di errore 
  corrispondente al codice in input.
  Parametri:
  Code         Codice numerico intero
-*/
/*********************************************************/
int gs_error_msg()
{
   resbuf *arg = acedGetArgs();
   int    code;
   TCHAR   tmp[60];
  
   acedRetStr(GS_EMPTYSTR);
   if (arg == NULL || arg->restype != RTSHORT) return RTERROR;
   code = arg->resval.rint;

   if (code >= 0 && code < ELEMENTS(GS_ERR_MSG)) 
      acedRetStr(GS_ERR_MSG[code]); 
   else
   {
      swprintf(tmp, 60, GS_LANGUAGE[134], code); // "\nGEOsim: errore sconosciuto %d.\n"
      acedRetStr(tmp);
   }

  return RTNORM;
}


/*************************************************************************/
/*.doc funcLoad(internal) */
/*
    This function is called to define all function names in the ADS
    function table.  Each named function will be callable from lisp or
    invokable from another ADS application.
*/
/*************************************************************************/
int funcLoad()
{
   int i;

   for (i = 0; i < ELEMENTS(exfun); i++) 
      if (!acedDefun(exfun[i].name, i)) return RTERROR;
    
   return RTNORM;
}


/*************************************************************************/
/*.doc funcUnload(internal) */
/*  
    This function is called to undefine all function names in the ADS
    function table.  Each named function will be removed from the
    AutoLISP hash table.
*/
/*************************************************************************/
int funcUnload()
{
   int i;

   for (i = 0; i < ELEMENTS(exfun); i++) 
      acedUndef(exfun[i].name,i);
    
    return RTNORM;
}


/*************************************************************************/
/*.doc doFunc  (internal) */
/*
    This function is called to invoke the function which has the
    registerd function code that is obtained from  ads_getfuncode.  The
    function will return RTERROR if the function code is invalid, or
    RSERR if the invoked function fails to return RTNORM.  The value
    RSRSLT will be returned if the function code is valid and the
    invoked subroutine returns RTNORM.
*/
/*************************************************************************/
int doFunc()
{
   int    val;
   int    rc;

   acedRetVoid();
   if ((val = acedGetFunCode()) < 0 || val > ELEMENTS(exfun))
        return RTERROR;
    rc = (*exfun[val].fptr)();

    return ((rc == RTNORM) ? RSRSLT : RSERR);
}


//-----------------------------------------------------------------------------
//----- ObjectARX EntryPoint
class CgeolanApp : public AcRxArxApp {

public:
	CgeolanApp () : AcRxArxApp () {}

	virtual AcRx::AppRetCode On_kInitAppMsg (void *pkt) {
		// TODO: Load dependencies here

		// You *must* call On_kInitAppMsg here
		AcRx::AppRetCode retCode =AcRxArxApp::On_kInitAppMsg (pkt) ;
		
      if (acrxRegisterAppNotMDIAware(pkt) == false) retCode = AcRx::kRetError;
		
      acutPrintf(GS_LANGUAGE[135]); // "\nCaricamento lingua italiana GEOsim.\n"

      return (retCode) ;
	}

	virtual AcRx::AppRetCode On_kUnloadAppMsg (void *pkt) {
      acutPrintf(GS_LANGUAGE[136]); // "\nScaricamento traduzioni GEOsim.\n"      

		// You *must* call On_kUnloadAppMsg here
		AcRx::AppRetCode retCode =AcRxArxApp::On_kUnloadAppMsg (pkt) ;

		// TODO: Unload dependencies here

		return (retCode) ;
	}

	virtual void RegisterServerComponents () {
	}

	virtual AcRx::AppRetCode On_kInvkSubrMsg (void *pkt)
   {
      doFunc();

		return AcRx::kRetOK;
   }

	virtual AcRx::AppRetCode On_kLoadDwgMsg (void *pkt)
   {
		AcRx::AppRetCode retCode =AcRxArxApp::On_kLoadDwgMsg(pkt);
      funcLoad();

		return (retCode) ;
   }

	virtual AcRx::AppRetCode On_kUnloadDwgMsg (void *pkt)
   {
		AcRx::AppRetCode retCode =AcRxArxApp::On_kUnloadDwgMsg(pkt);
      funcUnload();

		return (retCode) ;
   }

	// The ACED_ARXCOMMAND_ENTRY_AUTO macro can be applied to any static member 
	// function of the CgeolanApp class.
	// The function should take no arguments and return nothing.
	//
	// NOTE: ACED_ARXCOMMAND_ENTRY_AUTO has overloads where you can provide resourceid and
	// have arguments to define context and command mechanism.
	
	// ACED_ARXCOMMAND_ENTRY_AUTO(classname, group, globCmd, locCmd, cmdFlags, UIContext)
	// ACED_ARXCOMMAND_ENTRYBYID_AUTO(classname, group, globCmd, locCmdId, cmdFlags, UIContext)
	// only differs that it creates a localized name using a string in the resource file
	//   locCmdId - resource ID for localized command

	// Modal Command with localized name
	// ACED_ARXCOMMAND_ENTRY_AUTO(CgeolanApp, gsMyGroup, MyCommand, MyCommandLocal, ACRX_CMD_MODAL)
	static void gsMyGroupMyCommand () {
		// Put your command code here

	}

	// Modal Command with pickfirst selection
	// ACED_ARXCOMMAND_ENTRY_AUTO(CgeolanApp, gsMyGroup, MyPickFirst, MyPickFirstLocal, ACRX_CMD_MODAL | ACRX_CMD_USEPICKSET)
	static void gsMyGroupMyPickFirst () {
		ads_name result ;
		int iRet =acedSSGet (ACRX_T("_I"), NULL, NULL, NULL, result) ;
		if ( iRet == RTNORM )
		{
			// There are selected entities
			// Put your command using pickfirst set code here
		}
		else
		{
			// There are no selected entities
			// Put your command code here
		}
	}

	// Application Session Command with localized name
	// ACED_ARXCOMMAND_ENTRY_AUTO(CgeolanApp, gsMyGroup, MySessionCmd, MySessionCmdLocal, ACRX_CMD_MODAL | ACRX_CMD_SESSION)
	static void gsMyGroupMySessionCmd () {
		// Put your command code here
	}

	// The ACED_ADSFUNCTION_ENTRY_AUTO / ACED_ADSCOMMAND_ENTRY_AUTO macros can be applied to any static member 
	// function of the CgeolanApp class.
	// The function may or may not take arguments and have to return RTNORM, RTERROR, RTCAN, RTFAIL, RTREJ to AutoCAD, but use
	// acedRetNil, acedRetT, acedRetVoid, acedRetInt, acedRetReal, acedRetStr, acedRetPoint, acedRetName, acedRetList, acedRetVal to return
	// a value to the Lisp interpreter.
	//
	// NOTE: ACED_ADSFUNCTION_ENTRY_AUTO / ACED_ADSCOMMAND_ENTRY_AUTO has overloads where you can provide resourceid.
	
	//- ACED_ADSFUNCTION_ENTRY_AUTO(classname, name, regFunc) - this example
	//- ACED_ADSSYMBOL_ENTRYBYID_AUTO(classname, name, nameId, regFunc) - only differs that it creates a localized name using a string in the resource file
	//- ACED_ADSCOMMAND_ENTRY_AUTO(classname, name, regFunc) - a Lisp command (prefix C:)
	//- ACED_ADSCOMMAND_ENTRYBYID_AUTO(classname, name, nameId, regFunc) - only differs that it creates a localized name using a string in the resource file

	// Lisp Function is similar to ARX Command but it creates a lisp 
	// callable function. Many return types are supported not just string
	// or integer.
	// ACED_ADSFUNCTION_ENTRY_AUTO(CgeolanApp, MyLispFunction, false)
	static int ads_MyLispFunction () {
		//struct resbuf *args =acedGetArgs () ;
		
		// Put your command code here

		//acutRelRb (args) ;
		
		// Return a value to the AutoCAD Lisp Interpreter
		// acedRetNil, acedRetT, acedRetVoid, acedRetInt, acedRetReal, acedRetStr, acedRetPoint, acedRetName, acedRetList, acedRetVal

		return (RTNORM) ;
	}
	
} ;

//-----------------------------------------------------------------------------
IMPLEMENT_ARX_ENTRYPOINT(CgeolanApp)

ACED_ARXCOMMAND_ENTRY_AUTO(CgeolanApp, gsMyGroup, MyCommand, MyCommandLocal, ACRX_CMD_MODAL, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CgeolanApp, gsMyGroup, MyPickFirst, MyPickFirstLocal, ACRX_CMD_MODAL | ACRX_CMD_USEPICKSET, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CgeolanApp, gsMyGroup, MySessionCmd, MySessionCmdLocal, ACRX_CMD_MODAL | ACRX_CMD_SESSION, NULL)
ACED_ADSSYMBOL_ENTRY_AUTO(CgeolanApp, MyLispFunction, false)

