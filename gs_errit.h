/**********************************************************
Name: GS_ERRIT.H

Module description: File contenente le traduzioni degli errori di GEOSIM in italiano
            
Author: Roberto Poltini & De Sole Paolo & Carlio Paolo & Deprati Paola

(c) Copyright 1995-2007 by IREN ACQUA GAS SPA

              
Notes and restrictions on use: 

-  Mantenere la corrispondenza tra gli elementi del vettore GS_ERR_MSG e le 
   definizioni dichiarate in GS_ERROR.H

**********************************************************/

///////////////////////////////////////////////////////////////////////////////
// LUNGHEZZA MASSIMA PER CIASCUN MESSAGGIO = 150 CARATTERI                   //
///////////////////////////////////////////////////////////////////////////////

static TCHAR *GS_ERR_MSG[]=  
{
   _T("eGSNoError"),                                                     //   0
   _T("*Errore* Apertura file fallita"),  	                            //   1
   _T("*Errore* Path non valida: controllare il percorso e/o le macchine in rete"), //   2
   _T("*Errore* Scrittura file fallita"), 	                            //   3
   _T("*Errore* Chiusura file fallita"),		                            //   4
   _T("*Errore* Lettura file fallita"), 		                            //   5
   _T("*Errore* Cancellazione fallita"),                                 //   6
   _T("*Errore* Variabile non definita"),		                            //   7
   _T("*Errore* Memoria esaurita"),				                            //   8
   _T("*Errore* Path non esistente"),			                            //   9
   _T("*Errore* Problema sconosciuto"),                                  //  10
   _T("*Errore* Proprietà UDL per la connessione ai database non trovata"), //  11
   _T("*Errore* Operazione DDE fallita"),                                //  12
   _T("*Errore* Connessione database fallita"),                          //  13
   _T("*Errore* Sconnessione database fallita"),                         //  14
   _T("*Errore* Inizializzazione istruzione SQL fallita"),               //  15
   _T("*Errore* Compilazione istruzione SQL fallita"),                   //  16
   _T("*Errore* Inizializzazione cursore SQL fallita"),                  //  17
   _T("*Errore* Classe in sola lettura"),                                //  18
   _T("*Errore* Inizializzazione parametri non riuscita"),               //  19
   _T("*Errore* Esecuzione istruzione SQL fallita"),                     //  20
   _T("*Errore* Associazione file fallita"),                             //  21
   _T("*Errore* Istruzione SQL non supportata"),           	             //  22
   _T("*Errore* Non esistono nodi a cui connettersi"),                   //  23
   _T("*Errore* Chiusura cursore SQL fallita"),                          //  24
   _T("*Errore* Lettura struttura tabella fallita"),                     //  25
   _T("*Errore* Lettura riga fallita"),		                            //  26
   _T("*Errore* Valori di default mancanti"),                            //  27
   _T("*Errore* Collegamento al DB del Link Path Template non riuscito"), //  28
   _T("*Errore* Trovata entità GEOsim non sovrapponibile"),              //  29
   _T("*Errore* Posizionamento su riga fallito"),                        //  30
   _T("*Errore* Riga corrente inesistente"),                             //  31
   _T("*Errore* Cancellazione riga fallita"),                            //  32
   _T("*Errore* Aggiornamento riga fallito"),                            //  33
   _T("*Errore* Formato di esportazione dati non valido"),               //  34
   _T("*Errore* Esportazione struttura tabella fallita"),                //  35
   _T("*Errore* Copia righe fallita"),  		                            //  36
   _T("*Errore* Inserimento riga fallito"),                              //  37
   _T("*Errore* Database management system sconosciuto"),                //  38
   _T("*Errore* Tipo campo sconosciuto (a livello di SQL)"),             //  39
   _T("*Errore* Gestore licenze non disponibile"),         	             //  40
   _T("*Errore* Aggiornamento struttura tabella fallito"),               //  41
   _T("*Errore* File di Script errato"), 								          //  42
   _T("*Errore* Violazione delle regole di integrità dei dati"),         //  43

   _T("*Errore* Chiave di collegamento con tabella secondaria non valido"), //  44
   _T("*Errore* Nome tabella dati oggetto non valido"),                  //  45
   _T("*Errore* Superato il numero di licenze disponibili"),             //  46
   _T("*Errore* Cancellazione indice fallita"),			                   //  47

   _T("*Errore* Codice progetto non valido"),                            //  48
   _T("*Errore* Nome progetto non valido"),	                            //  49

   _T("*Errore* Lista scorretta"),    			                            //  50
   _T("*Errore* Tipo di argomento non valido"),                          //  51

   _T("*Errore* Operazione non permessa"),                               //  52
   _T("*Errore* Login non valida"),				                            //  53
   _T("*Errore* Password non valida"),			                            //  54
   _T("*Errore* Operazione non possibile"),                              //  55
   _T("*Errore* Utente non valido"),			                            //  56
   _T("*Errore* File delle password danneggiato"),                       //  57
                                                                     
   _T("*Errore* Sezione non trovata"),	                                  //  58
   _T("*Errore* <Entry> non trovata"),                                   //  59
   _T("*Errore* Buffer non sufficiente"),	                               //  60
                                                                     
   _T("*Errore* Argomento non valido"), 		                            //  61
   _T("*Errore* Classe non trovata"),     	                            //  62
   _T("*Errore* Codice classe non valido"),                              //  63
   _T("*Errore* Nome classe non valido"),                                //  64
   _T("*Errore* Tipo classe non valido"),	                               //  65
   _T("*Errore* Livello di visibilità/abilitazione non valida"),         //  66
   _T("*Errore* Stringa troppo lunga"), 	                               //  67
   _T("*Errore* Variabile non allocata"),                                //  68
   _T("*Errore* Rinominazione tabella fallita"),                         //  69
   _T("*Errore* Esecuzione istruzione interna SQL fallita"),             //  70
   _T("*Errore* Esecuzione istruzione nativa SQL fallita"),              //  71
   _T("*Errore* Tipo di Categoria non valido"),                          //  72
   _T("*Errore* Nome attributo non valido"),                             //  73
   _T("*Errore* Sbilanciamento parentesi LISP"),                         //  74
   _T("*Errore* Argomento/i LISP non valido/i"),                         //  75
   _T("*Errore* Variabile LISP non valida"),                             //  76
   _T("*Errore* Lista LISP corrente errata"),                            //  77
   _T("*Errore* Espressione non valida in LISP"),                        //  78
   _T("*Errore* Stringa LISP non valida"),	                            //  79
   _T("*Errore* Tipo di variabile LISP non valido"),                     //  80
   _T("*Errore* Il LISP si attendeva una stringa"),                      //  81
   _T("*Errore* Il LISP attendeva un numero"),                           //  82
   _T("*Errore* Connessioni non valide"),		                            //  83
   _T("*Errore* Etichetta attributo non valida"),                        //  84
   _T("*Errore* Gruppo non valido"),			                            //  85
   _T("*Errore* Griglia non valida"),			                            //  86
   _T("*Errore* Colore non valido"),      	                            //  87
   _T("*Errore* Riempimento non valido"),		                            //  88
   _T("*Errore* Tipo linea non valido"),		                            //  89
   _T("*Errore* Stile testo non valido"),		                            //  90
   _T("*Errore* Layer non valido"),                                      //  91
   _T("*Errore* Blocco non valido"),                                     //  92
   _T("*Errore* Larghezza non valida"),                                  //  93
   _T("*Errore* Scala non valida"), 	                                  //  94
   _T("*Errore* Altezza testo non valida"),                              //  95
   _T("*Errore* Spessore non valido"), 		                            //  96
   _T("*Errore* Attributo visibile non valido"),                         //  97
   _T("*Errore* Sistema coordinate non valido"),                         //  98
   _T("*Errore* Attributo chiave non valido"),                           //  99
   _T("*Errore* Attributo calcolato non valido"),                        // 100
   _T("*Errore* Validità attributi non soddisfatta"),                    // 101
   _T("*Errore* Funzione LISP non valida"),                              // 102
   _T("*Errore* Definizione di attributo non valido"),                   // 103
   _T("*Errore* Opzione non valida per l'entità in questione"),          // 104
   _T("*Errore* Comando AutoCAD non valido"),                            // 105
   _T("*Errore* Finestra DCL abortita"),		                            // 106
   _T("*Errore* Nessun progetto corrente"),	                            // 107
   _T("*Errore* Applicazione non valida"),		                         // 108
   _T("*Errore* EED non valida (entità sconosciuta)"),                   // 109
   _T("*Errore* Codice tabella secondaria non valido"),                  // 110
   _T("*Errore* Tipo di tabella secondaria non valido"),                 // 111
   _T("*Errore* Nome di tabella non valido"),	                         // 112
   _T("*Errore* Nome Host non valido"),		                            // 113
   _T("*Errore* Sistema operativo non valido"),                          // 114
   _T("*Errore* Nome sessione non valido"),	                            // 115
   _T("*Errore* Tipo sessione non valido"),	                            // 116
   _T("*Errore* Stato sessione non valido"),                             // 117
   _T("*Errore* Non esistono link a cui connettersi"),                   // 118
   _T("*Errore* Codice sessione non valido"),                            // 119
   _T("*Errore* Operazione di ANNULLA non riuscita"),                    // 120
   _T("*Errore* Scelta LISP non valida"),		                            // 121
   _T("*Errore* Oggetto grafico non valido"),                            // 122
   _T("*Errore* Inizializzazione ASI fallita"),	                         // 123
   _T("*Errore* Nessuna sessione corrente"),	                            // 124
   _T("*Errore* Gruppo duplicato"),                                      // 125
   _T("*Errore* Progetto in uso"),                                       // 126
   _T("*Errore* Classe in uso"),                                         // 127
   _T("*Errore* Tabella secondaria in uso"),                             // 128
   _T("*Errore* Trovate sessioni di lavoro"),                            // 129
   _T("*Errore* Bloccato"),                                              // 130
   _T("*Errore* Inizializzazione ASE fallita"),                          // 131
   _T("*Errore* Link Path Template non valido"),                         // 132
   _T("*Errore* Link Set non valido"),                                   // 133
   _T("*Errore* Link non valido"),                                       // 134
   _T("*Errore* Link già esistente"),                                    // 135
   _T("*Errore* Alias già esistente"),                                   // 136
   _T("*Errore* Host non valido"),                                       // 137
   _T("*Errore* inizializzazione ALIAS di rete fallita"),                // 138
   _T("*Errore* Tipo attributo non valido"),                             // 139
   _T("*Errore* Lunghezza attributo non valida"),                        // 140
   _T("*Errore* Decimali attributo non validi"),                         // 141
   _T("*Errore* Valore attributo non valido"),                           // 142
   _T("*Errore* Path già esistente"),                                    // 143
   _T("*Errore* Operazione di \"Activate\" su DWG non possibile"),       // 144
   _T("*Errore* Operazione di \"Attach\" su DWG non possibile"),         // 145
   _T("*Errore* Impossibile caricare la lista dei disegni"),             // 146
   _T("*Errore* Impossibile la selezione dalla lista dei DWG"),          // 147
   _T("*Errore* Impossibile salvare l'entità nel disegno"),              // 148
   _T("*Errore* Impossibile ridimensionare la lista dei disegni"),       // 149
   _T("*Errore* Non copiato"),                                           // 150
   _T("*Errore* Entità bloccata da un altra sessione di lavoro"),        // 151 
   _T("*Errore* Tipo di data non valido"),                               // 152
   _T("*Errore* Anno non valido"),                                       // 153
   _T("*Errore* Mese non valido"),                                       // 154
   _T("*Errore* Giorno non valido"),                                     // 155
   _T("*Errore* Impossibile caricare la Query spaziale definita"),       // 156
   _T("*Errore* Tipo logico non valido"),                                // 157
   _T("*Errore* Operazione di \"Deactivate\" su DWG non possibile"),     // 158
   _T("*Errore* Operazione di \"Detach\" su DWG non possibile"),         // 159
   _T("*Errore* Tabella secondaria non esistente"),                      // 160
   _T("*Errore* Esecuzione comando fallita"),                            // 161
   _T("*Errore* Lista delle sottoclassi non valida"),                    // 162
   _T("*Errore* Impossibole leggere il driver del Dbase dell'utilizzatore"), // 163
   _T("*Errore* Istruzione SQL non valida"),                             // 164
   _T("*Errore* Inpossibile caricare i valori"),                         // 165
   _T("*Errore* Impossibile aprire/creare la tabella delle entità GEOsim cancellate"), // 166
   _T("*Errore* Gruppo di selezione non valido"),                        // 167
   _T("*Errore* Impossibile caricare la/e variabile/i di sistema"),      // 168
   _T("*Errore* Impossibile copiare l'entità"),                          // 169
   _T("*Errore* Funzione di calcolo grafico non valida"),                // 170
   _T("*Errore* Comando non valido"),                                    // 171
   _T("*Errore* Cartella del DWG non valido"),                           // 172
   _T("*Errore* Elevazione non valida"),                                 // 173
   _T("*Errore* Rotazione non valida"),                                  // 174
   _T("*Errore* Blocco di riferimento non valido"),                      // 175
   _T("*Errore* Blocco dell'entità non valido"),                         // 176
   _T("*Errore* Cursore SQL non valido"),                                // 177
   _T("*Errore* Entità estratta parzialmente"),                          // 178
   _T("*Errore* Classe da copiare non valida"),                          // 179
   _T("*Errore* Membro di un Gruppo"),                                   // 180
   _T("*Errore* File non esistente"),                                    // 181
   _T("*Errore* Stringa nulla"),                                         // 182
   _T("*Errore* Obbligatorità attributi non soddisfatta"),               // 183
   _T("*Errore* I comandi di GEOsim non sono disponibili nello spazio carta"), // 184
   _T("*Errore* Oggetto\\i non bloccati"),                               // 185
   _T("*Errore* Trovata un'altra sessione di lavoro che blocca l'operazione"), // 186
   _T("*Errore* Comando utente non valido"),                             // 187
   _T("*Errore* Classe bloccata"),                                       // 188
   _T("*Errore* Tipo campo sconosciuto (a livello di driver)"),          // 189
   _T("*Errore* Estrazione fallita"),                                    // 190
   _T("*Errore* Estrazione non possibile in una sessione precedentemente congelata\n o in un disegno esistente"), // 191
   _T("*Errore* Impossibile impostare la condizione di estrazione"),     // 192
   _T("*Errore* Utente di AutoCAD Map non valido"),                      // 193
   _T("*Errore* File bloccato"),                                         // 194
   _T("*Errore* Linguaggio AutoCAD non supportato"),                     // 195
   _T("*Errore* Layer bloccato"),                                        // 196
   _T("*Errore* Condizione spaziale non valida"),                        // 197
   _T("*Errore* Classe non estratta nella sessione di lavoro attiva"),   // 198
   _T("*Errore* Set di visibilità non valido"),                          // 199
   _T("*Errore* Impossibile caricare il Set di visibilità"),             // 200
   _T("*Errore* Attributi non compatibili"),                             // 201
   _T("*Errore* Operazione non possibile per riferimenti ad oggetti che non saranno salvati"), // 202
   _T("*Errore* Tipo di topologia non valido"),                          // 203
   _T("*Errore* Attributo calcolato da un attributo calcolato"),         // 204
   _T("*Errore* Divisione per zero in LISP"),                            // 205
   _T("*Errore* Trovato oggetto appartenente a GEOsim"),                 // 206
   _T("*Errore* Trovato oggetto non appartenente a GEOsim"),             // 207
   _T("*Errore* Impossibile avviare la pulizia del disegno"),            // 208
   _T("*Errore* Impossibile attivare la pulizia del disegno"),           // 209
   _T("*Errore* Catalogo non valido"),                                   // 210
   _T("*Errore* Schema non valido"),                                     // 211
   _T("*Errore* Variable di AutoCAD MAP non valida"),                    // 212
   _T("*Errore* Indice non creato"),                                     // 213
   _T("*Errore* Cancellazione tabella fallita"),                         // 214
   _T("*Errore* Apertura schema fallita"),                               // 215
   _T("*Errore* Tabella non creata"),                                    // 216
   _T("*Errore* Tabella non esistente"),                                 // 217
   _T("*Errore* Tabella già esistente"),                                 // 218
   _T("*Errore* Il Progetto deve essere vuoto"),                         // 219
   _T("*Errore* Sessione in modalità sola lettura"),                     // 220
   _T("*Errore* Separatore decimale uguale al separatore di lista"),     // 221
   _T("*Errore* File dei tematismi non trovato"),                        // 222
   _T("*Errore* Stile di quotatura non valido"),                         // 223
   _T("*Errore* Risorsa grafica già esistente"),                         // 224
   _T("*Errore* Attributo per la segmentazione dinamica non valido"),    // 225
   _T("*Errore* Punto iniziale non valido"),                             // 226
   _T("*Errore* Punto finale non valido"),                               // 227
   _T("*Errore* Sessione di lavoro in uso"),                             // 228
   _T("*Errore* Nome della tabella secondaria non valido"),              // 229
   _T("*Errore* Descrizione della tabella secondaria non valida"),       // 230
   _T("*Errore* nome del campo della tabella dati oggetto non valido"),  // 231
   _T("*Errore* Nome del set di classi non valido"),                     // 232
   _T("*Errore* Codice del set di classi non valido"),                   // 233
   _T("*Errore* Ora non valida"),                                        // 234
   _T("*Errore* Classe membro di un gruppo non ancora estratta"),        // 235
   _T("*Errore* Descrizione classe non valido"),                         // 236
   _T("*Errore* Versione non valida"),                                   // 237   
};                              

///////////////////////////////////////////////////////////////////////////////
//  I seguenti codici errore sono disponibili:
// 
///////////////////////////////////////////////////////////////////////////////
