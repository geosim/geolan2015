
///////////////////////////////////////////////////////////////////////////////
// FILE CONTENENTE LA DEFINIZIONE DEI MESSAGGI DI STAMPA IN LINGUA ITALIANA  //
// LUNGHEZZA MASSIMA PER CIASCUN MESSAGGIO = 150 CARATTERI                   //
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// La traduzione 130 è riservata per il numero della versione di GEOsim
///////////////////////////////////////////////////////////////////////////////


static TCHAR *GS_LANGUAGE[]=
{
   _T("\nE' stato impostato il gruppo di selezione <ssfilter>."),            //   0
   _T("\nSpecificare punto iniziale: "),                                     //   1
   _T("Sinistra"),                                                           //   2
   _T("Giustificato Stile Testo"),                                           //   3
   _T("[Giustificato/Stile/<Testo>]: "),                                     //   4
   _T("Giustificato"),                                                       //   5
   _T("Proporzionale adaTta Ce Mezzo Destra AS AC AD MS MC MD BS BC BD Sinistra"), //   6
   _T("[Proporzionale/adaTta/Centro/Mezzo/Destra/AS/AC/AD/MS/MC/MD/BS/BC/BD/<Sinistra>]: "), //  7
   _T("Proporzionale"),                                                      //   8
   _T("adaTta"),                                                             //   9
   _T("\nSecondo punto: "),                                                  //  10
   _T("Stile"),                                                              //  11
   _T("\nNome dello stile (o ?) <%s>: "),                                    //  12     
   _T("\nIl nome dello stile testo è sconosciuto o non valido."),            //  13
   _T("Testo"),                                                              //  14
   _T("\nTesto: "),                                                          //  15
   _T("\nAltezza testo <%f>: "),                                             //  16
   _T("\n Il valore deve essere diverso da zero."),                          //  17
   _T("\n Il valore deve essere maggiore di zero."),                         //  18
   _T("\nAngolo di rotazione <%f>: "),                                       //  19
   _T("\nPunto di inserimento: "),                                           //  20
   _T("\nFattore di scala X <%f>: "),                                        //  21
   _T("\nFattore di scala per Y (standard=X): "),                            //  22
   _T("DALAYER"),                                                            //  23
   _T("DABLOCCO"),                                                           //  24
   _T("Default"),                                                            //  25
   _T("Nuovo modello"),                                                      //  26
   _T("Cancellare il/i modello/i selezionati ?"),                            //  27
   _T("\nSelezione entità non valida."),                                     //  28
   _T("\nSelezionare entità a cui connettersi: "),                           //  29
   _T("\naltro punto/<Conferma punto di connessione>: "),                    //  30
   _T("\nSelezionare un punto: "),                                           //  31
	_T("Nessuna"),                          							              //  32
	_T("\n%ld entità GEOsim appartenenti a gruppo."),                         //  33
	_T("Scala ottimizzata 1:"),					                                //  34
	_T("\n%ld entità GEOsim estratte parzialmente."),             	           //  35
   _T("Scala 1:"),                                                           //  36
	_T("ORIENTAMENTO VERTICALE"),                           	                 //  37
   _T("Rotazione: 0/90"),                                                    //  38
	_T("\nInserisci il primo angolo\n"),                                      //  39
   _T("\nInserisci il secondo angolo\n"),                                    //  40
   _T("Dimensioni area plottaggio troppo grandi\n"),                         //  41
	_T("Error loading %s \n"),                                                //  42
	_T("area non valida"),                                                    //  43
	_T("Occorre selezionare un foglio"),                                      //  44
	_T("non esistono elementi per la legenda"),                               //  45
	_T("altezza e/o base cartiglio non valida"),                              //  46
	_T("Interlinea non valida"),                                              //  47
	_T("Pollici"),                                                            //  48
	_T("Piedi"),                                                              //  49
	_T("Yarde"),                                                              //  50
	_T("Miglia"),                                                             //  51
	_T("\nCollegamento tra grafica e database non più valido per l'entità: %ld.\n"), //  52
	_T("Si consiglia di creare delle copie di backup dei disegni. Confermare l'operazione."), // 53  (max len = 150)
	_T("on"),                                                                 //  54
	_T("off"),                                                                //  55
	_T("\nCambio tabella dati oggetto (da <%s> a <%s>)...\n"),                //  56
	_T("Legenda"),                                                            //  57
	_T("\nLa tecnologia di accesso ai dati di GEOsim non è supportata da questa connessione OLE-DB;\nverrà utilizzata una tecnologia alternativa che potrebbe essere molto più lenta.\n"), // 58
	_T("Successivo"),                                                         //  59
	_T("Precedente"),                                                         //  60
	_T("Cancella"),                                                           //  61
	_T("Si desidera riposizionare gli attributi visibili in modo automatico ?"), //  62
	_T("\nControllo progetto <%s>..."),                                       //  63
	_T("Versione"),                                                           //  64
	_T("\n*Attenzione* La classe <%s> non è compatibile con la versione attuale di GEOsim."), //  65
	_T("\n*Attenzione* La classe <%s> non necessita di essere convertita."),  //  66
	_T("Nessuna connessione"),                                                //  67
	_T("Polilinea"),                                                          //  68
	_T("Alcune classi di entità non sono state estratte perchè bloccate da altre sessioni di lavoro."), //  69
	_T("%ld oggetti grafici elaborati"),                                      //  70
	_T("\nCollegamento non più valido per l'entità: %ld.\n"),                 //  71
	_T("Nel progetto <"),                                                     //  72
	_T("\nAlcune entità con dati estesi errati saranno cancellate."),         //  73
	_T("\nLarghezza buffer <"),                                               //  74
	_T("\nSfogliare gli oggetti "),                                           //  75
	_T("\nIl comando non è stato eseguito su %d oggetto(i) perchè bloccato(i) da un'altro utente."), //  76
	_T("\nEliminato(i) %d oggetto(i) perchè appartenente(i) ad una classe simulazione."), //  77
	_T("*Errore* Obbligatorità attributo non soddisfatta."),                  //  78  
	_T("\nRicerca cella (livello %ld - passo %ld)..."),                       //  79
   _T("Inizio salvataggio..."),                                              //  80
   _T("Salvataggio completato"),                                             //  81
   _T("Errori nel salvataggio"),                                             //  82
   _T("\nSalvataggio cella..."),                                             //  83
	_T("Alcune entità di GEOsim non saranno salvate"),                        //  84
	_T("L'entità non ha collegamenti all'interno della classe gruppo"),       //  85
	_T("\nDati oggetto corretti per una entità: Tabella %s.\n"),              //  86
	_T("\nPremere <Invio>"),                                                  //  87
	_T("raggio"),                                                             //  88
	_T("Oggetto grafico non valido nel punto "),                              //  89
	_T("\nModificare il cerchio: "),                                          //  90
	_T("\nModificare la finestra: "),                                         //  91
	_T("\nCalcolo estensioni disegno <%s>..."),                               //  92
	_T("\nDigitare un'opzione "),                                             //  93
	_T("Somma a"),                                                            //  94
	_T("Sottrai a"),                                                          //  95
	_T("\nSeleziona oggetto: "),                                              //  96
	_T("Sostituisci a"),                                                      //  97
	_T("Msg. di Err. Validaz."),                                              //  98
   _T("Si è verificato un errore in fase di estrazione; possibile DWG rovinato."), // 99
	_T("Esistente"),                                                          // 100
	_T("Nuova Esistente"),                                                    // 101
   _T("\nEntità iniziale [Nuova/<Esistente>]: "),                            // 102
   _T("Nuova"),                                                              // 103
   _T("\nComando: "),                                                        // 104
   _T("\nDigitare i valori di attributo: "),                                 // 105
   _T("Riferimento tabella di geometria"),                                   // 106
   _T("\nPunto non valido."),                                                // 107
   _T("\nEntità finale [Nuova/<Esistente>]: "),                              // 108
   _T("\nPunto di inserimento della scheda: "),                              // 109
	_T("\nInizio filtro..."),					                                   // 110
	_T("\nTerminato.\n"),						                                   // 111
	_T("\nCreazione tabelle temporanee..."),                                  // 112
	_T("\n\nEntità classe <%s>:\n"),   						                       // 113
	_T("100%% elaborato."),		      									              // 114
	_T("Creazione legenda QGIS"),                                             // 115
	_T("\nEsecuzione query SQL:"),		   		                             // 116
	_T("\n%ld oggetti grafici filtrati."),			                             // 117
	_T("\n%ld entità rimosse dal salvataggio."),                              // 118
	_T("Default calcolato"),                                  		           // 119
	_T("\nCaricamento GEOsim.\n1995-2015 IREN ACQUA GAS S.p.A."),             // 120
	_T("\nInizio salvataggio grafica classe <%s>..."),             	        // 121
   _T("Controllo topologico nodi isolati"),                                  // 122
	_T("\nInizio salvataggio..."),	                                         // 123
	_T("\n%ld entità GEOsim cancellate."),										        // 124
	_T("\n%ld entità GEOsim aggiornate."),											     // 125
	_T("\n%ld entità GEOsim inserite."),				                          // 126
   _T("*Errore* Utente non riconosciuto"),                                   // 127
   _T("Nome utente: "),                                                      // 128
   _T("Password: "),                                                         // 129
   _T("2015.0.i."),                                                          // 130 Versione (max 20)
   _T("ORIENTAMENTO ORIZZONTALE"),                                           // 131
   _T("\nGEOsim: messaggio sconosciuto %d.\n"),                              // 132
   _T("\nErrore GEOsim:"),                                                   // 133
   _T("\nGEOsim: errore sconosciuto %d.\n"),                                 // 134
   _T("\n\nCaricamento lingua italiana GEOsim."),                            // 135
   _T("\nFattore di aggregazione corretto per l'entità: %ld.\n"),            // 136
	_T("\nConferma password: "),						                             // 137
	_T("\nNome: "),	                     				   		              // 138
	_T("\nCartella: "),								        	                       // 139
	_T("\nDisegno chiave: "),	    	         	    	           	           // 140
	_T("\nSistema di coordinate <?>: "),	                        	        // 141
	_T("[<Utente>/Superutente]: "),                                           // 142
	_T("Utente Superutente"),                                                 // 143
	_T("\nVecchia password: "),                                               // 144
	_T("\nNuova password: "),                                                 // 145
	_T("\nLista utenti : "),                                                  // 146
  	_T("\nNome progetto <?>: "),                                              // 147
	_T("\nLista progetti:"),                                                  // 148
   _T("\nNome utente <?>: "),                                                // 149
   _T("[Nome/Sistema coordinate/Disegno chiave/<Uscire>]: "),                // 150
   // le prossime quattro riferite al messaggio 150                     
   _T("Nome"),                                                               // 151
   _T("Sistema"),                                                            // 152
   _T("Disegno"),                                                            // 153
   _T("Uscire"),                                                             // 154
   // le prossime due riferite al messaggio 143                         
   _T("Superutente"),                                                        // 155
   _T("> sono state trovate le seguenti sessioni di lavoro"),                // 156
   _T("\nNuovo nome: "),                                                     // 157
   _T("\nNuovo sistema di coordinate <?>: "),                                // 158
   _T("\nNuovo disegno chiave: "),                                           // 159
   _T("Nome Sistema Disegno Uscire"),                                        // 160
   _T("\nSistemi di coordinate:\n"),                                         // 161
   _T("\nPremi un tasto per continuare."),                                   // 162
   _T("\nConfermare."),                                                      // 163
   _T("Si No"),                                                              // 164 
   _T("Si"),                                                                 // 165
   _T("No"),                                                                 // 166
   _T("DOS"),                                                                // 167
   _T("WINDOWS"),                                                            // 168
   _T("WINDOWS NT/2000"),                                                    // 169
   _T("UNIX"),                                                               // 170
   _T("> (attiva), creata il "),                                             // 171
   _T("Alcune classi non sono state salvate. Ripetere il salvataggio ?"),    // 172
   _T("Comandi Progetti Uscire"),                                            // 173
   _T("[Comandi/Progetti/<Uscire>]: "),                                      // 174
   _T("Comandi"),                                                            // 175
   _T("\nNome comando <?>: "),                                               // 176
   _T("\nLista comandi:"),                                                   // 177
   _T("\nComando non presente !"),                                           // 178
   _T("Abilitazione Disabilitazione"),                                       // 179
   _T("[Abilitazione/Disabilitazione]: "),                                   // 180
   _T("Abilitazione"),                                                       // 181 
   _T("> (in attesa di estrazione)"),                                        // 182
   _T("\n(stato attuale Abilitato)"),                                        // 183
   _T("\n(stato attuale Disabilitato)"),                                     // 184
   _T("> (in salvataggio)"),                                                 // 185   
   _T("\n(stato attuale Invisibile)"),                                       // 186
   _T("\n(stato attuale Solalettura)"),                                      // 187
   _T("\n(stato attuale Modificabile)"),                                     // 188
   _T("Invisibile Solalettura Modificabile"),                                // 189
   _T("[Invisibile/Solalettura/Modificabile]: "),                            // 190
   _T("\nProgetto non presente !"),                                          // 191
   _T("Invisibile"),                                                         // 192
   _T("Solalettura"),                                                        // 193
   _T("Modificabile"),                                                       // 194
   _T("\nNome classe <?>: "),                                                // 195
   _T("\nLista classi:"),                                                    // 196
   _T("Progetti Classi"),                                                    // 197
   _T("[Progetti/Classi]: "),                                                // 198 
   _T("Classi"),                                                             // 199                                       
   _T("Abilitazione:"),                                                      // 200
   _T("\nClasse non presente !"),                                            // 201
   _T("\tAbilitato"),                                                        // 202
   _T("\tDisabilitato"),                                                     // 203
   _T("\tInvisibile"),                                                       // 204
   _T("\tSola Lettura"),                                                     // 205
   _T("\tModificabile"),                                                     // 206
   _T("u"),                                                                  // 207
   _T("U"),                                                                  // 208
   _T("Riferimento tabella di geometria etichette"),                         // 209
   _T("\nSelezionare entità: "),                                             // 210
   _T("\nL'entità e' già stata selezionata."),                               // 211
   _T("\nSono state selezionate solo %d entità della classe %s (il gruppo ne deve contenere %d)."), // 212
   _T("Alcune proprietà grafica sono ereditate dal piano %s."),              // 213
   _T("Creare il modello di questo piano ?"),                                // 214
   _T("Entità"),                                                             // 215 (al singolare)
   _T("Riferimento tabella di raggruppamento etichette"),                    // 216
   _T("\nNon disponibile in questa versione...\n"),                          // 217
   _T("\n(<.> termina inserimento spaghetti): "),                            // 218
   _T("gradi"),                                                              // 219
   _T("\n*Annulla*\n"),                                                      // 220
   _T("radianti"),                                                           // 221
   _T("*Errore* Lunghezza attributo non valida."),                           // 222
   _T("*Errore* Tipo attributo non valido."),                                // 223
   _T("*Errore* Valore attributo non valido."),                              // 224
   _T("*Errore* Assegnazione fallita."),                                     // 225
   _T("gons"),                                                               // 226
   _T("\nOggetti grafici elaborati %ld, scartati %ld."),                     // 227
   _T("Opzione non consentita perchè la classe rilevata è priva di database."), // 228
   _T("Colore riempimento"),                                                 // 229
   _T("Classe: "),                                                           // 230
   _T("Piano riempimento"),                                                  // 231
   _T("Punto di modifica ignorato"),                                         // 232 "Change point ignored"
   _T("senso orario"),                                                       // 233
   _T("Esportazione dati"),                                                  // 234
   _T("[Giustificato/Stile/<Continua>]: "),                                  // 235
   _T("Giustificato Stile Continua"),                                        // 236
   _T("inizio/fine"),                                                        // 237
   _T("Centro"),                                                             // 238
   _T("Mezzo"),                                                              // 239
   _T("Destra"),                                                             // 240
   _T("AS"),                                                                 // 241
   _T("AC"),                                                                 // 242
   _T("AD"),                                                                 // 243
   _T("MS"),                                                                 // 244
   _T("MC"),                                                                 // 245
   _T("MD"),                                                                 // 246
   _T("BS"),                                                                 // 247
   _T("BC"),                                                                 // 248
   _T("BD"),                                                                 // 249
   _T("Continua"),                                                           // 250
   _T("Nessuna entità <%s>."),                                               // 251
   _T("\nEntità numero %ld : Conferma/[1..%ld]/Esci/<Successivo>: "),        // 252
   _T("Conferma Successivo Esci"),                                           // 253
   _T("\nNumero entità non valido."),                                        // 254
   _T("Esci"),                                                               // 255
   _T("Conferma"),                                                           // 256
   _T("senso antiorario"),                                                   // 257
   _T("Unità di misura delle rotazioni"),                                    // 258
   _T("\n*Errore* Nessuna entità selezionata."),                             // 259
   _T("\nNessun oggetto modificato."),                                       // 260
   _T("\nSalvataggio oggetti modificati terminato."),                        // 261
   _T("\nEntità GEOsim non completamente a video."),                         // 262
   _T("La cancellazione della sessione di lavoro ha rilevato alcune\nclassi di entità bloccate da altre sessioni.\nProcedere comunque al loro sblocco ?\nClassi di entità bloccate:"), // 263
   _T("\nLe seguenti classi non sono state estratte:"),                      // 264
   _T("\nRaggio: "),                                                         // 265
   _T("Alcune classi non sono state estratte. Ripetere l'estrazione ?"),     // 266
   _T("\nAlcune entità con collegamento tra grafica e database non più valido saranno cancellate."), // 267
   _T("\nLe seguenti classi di entità non sono state estratte perchè bloccate da altre sessioni di lavoro:"), // 268
   _T("Si vuole ricevere un avviso dalle altre sessioni di lavoro ?"),       // 269
   _T("\nCancellazione backup classe <%s>..."),                              // 270
   _T("Attributo di relazione"),                                             // 271
   _T("\nRipristino backup classe <%s>..."),                                 // 272
   _T("Messaggio GEOsim: La sessione n°.%ld ha sbloccato la classe <%s>."),  // 273 (max 255 caratteri)
   _T("\nLettura collegamenti a gruppi..."),                                 // 274
   _T("Ordine di visualizzazione"),                                          // 275
   _T("Messaggio GEOsim: La sessione n°.%ld ha terminato il salvataggio."),  // 276
	_T("\n%ld schede secondarie GEOsim cancellate."),								  // 277
	_T("\n%ld schede secondarie GEOsim aggiornate."),								  // 278
	_T("\n%ld schede secondarie GEOsim inserite."),				                 // 279
   _T("crescente"),                                                          // 280
   // inizio per caricamento funzioni GSL                               
   _T("\nCaricamento file GEOsim Lisp "),                                    // 281
   _T("\nFallito.\n"),                                                       // 282
   _T("decrescente"),                                                        // 283
   // fine per caricamento funzioni GSL
   _T("Entità Spaziale"),                                                    // 284
   _T("\nSelezione per [Entità/Spaziale] <Entità>: "),                       // 285
   _T("Spaziale"),                                                           // 286
   _T("*Errore* Valore non valido."),                                        // 287
   _T("\nL'alias <%s> avente path <%s>, è stato scartato perchè già presente in lista."), // 288
   _T("Messaggio GEOsim: La classe <%s> non è più in uso esclusivo."),       // 289
   _T("Prefisso grafico"),                                                   // 290
   _T("Suffisso grafico"),                                                   // 291
   _T("Maschera input dati"),                                                // 292
   _T("Dimensioni insufficienti o orientamento foglio errato."),             // 293
   _T("Dati Identificativi Tabella secondaria"),                             // 294
   _T("Valore non valido"),                                                  // 295
   _T("aaaa-mm-gg"),                                                         // 296
   _T("Classe"),                                                             // 297
   _T("esterna"),                                                            // 298
   _T("\nPremere ESC per qualche secondo per interrompere...\n"),            // 299
   _T("hh:mm:ss"),                                                           // 300
   _T("\nCaricamento tematismi GEOsim...\n"),                                // 301
   _T("\nLa scheda %ld nella tabella <%s> non soddisfa la funzione di validità."), // 302
   _T("\nLa scheda %ld nella tabella <%s> non soddisfa la funzione di calcolo."), // 303
   _T("GEOsim"),                                                             // 304
   _T("\nAlcune schede non soddisfano la funzione di validità."),            // 305
   _T("\nAlcune schede non soddisfano la funzione di calcolo."),             // 306
   _T("Alcune schede non soddisfano la regola di obbligatorietà, assegnare il valore di default ?"), // 307
   _T("\nEntità elaborate %ld, scartate %ld."),                              // 308
   _T("Tabella secondaria: "),                                               // 309
	_T("%ld entità GEOsim elaborate."),                                       // 310
	_T("\nRiallineamento banca dati..."),									           // 311
	_T("\nCaricamento tematismi utente..."),              			           // 312
	_T("Attributo per la distanza reale (inizio)"),            			        // 313
	_T("Copia valori di database..."),      					                    // 314
	_T("\nSelezionare entità destinazione: "),         		                 // 315
   _T("Inverso di: "),                                                       // 316
   _T("FOGLIO A4"),                                                          // 317                                                    
   _T("FOGLIO A3"),                                                          // 318
   _T("FOGLIO A2"),                                                          // 319
   _T("FOGLIO A1"),                                                          // 320
   _T("FOGLIO A0"),                                                          // 321
   _T("AREA DI PLOTTAGGIO:"),                                                // 322
   _T("UNITA' DI MISURA: MM"),                                               // 323
   _T("Analisi oggetti grafici sottoclasse <%s>"),                           // 324
   _T("Attributo per la distanza reale (fine)"),                             // 325
   _T("Progetto"),                                                           // 326
	_T("\nLe seguenti classi non sono state salvate correttamente:"),         // 327
   _T("SOLIDO"),                                                             // 328
	_T("\n*Attenzione* Parametro non valido per la funzione "),               // 329
   _T("\nLettura definizione classe avente codice "),                        // 330
   _T("Attributo per la distanza nominale (inizio)"),                        // 331
   _T("\nPreparazione sottoclasse "),                                        // 332
   _T("Modifica password"),                                                  // 333  descriz.funzionalità
   _T("Creazione sessione di lavoro"),                                       // 334  descriz.funzionalità
   _T("Cancellazione sessione di lavoro"),                                   // 335  descriz.funzionalità
   _T("Congelamento sessione di lavoro"),                                    // 336  descriz.funzionalità
   _T("Scongelamento/recupero sessione di lavoro"),                          // 337  descriz.funzionalità
   _T("Salvataggio sessione di lavoro"),                                     // 338  descriz.funzionalità
   _T("Inserimento entità"),                                                 // 339  descriz.funzionalità
   _T("Modifica entità"),                                                    // 340  descriz.funzionalità
   _T("Aggregazione entità"),                                                // 341  descriz.funzionalità
   _T("Cancellazione entità"),                                               // 342  descriz.funzionalità
   _T("Interrogazione entità"),                                              // 343  descriz.funzionalità
   _T("Importazione entità"),                                                // 344  descriz.funzionalità
   _T("Filtro entità"),                                                      // 345  descriz.funzionalità
   _T("\nCreazione classe"),                                                 // 346
   _T("\nCreazione sottoclasse"),                                            // 347
   _T("\nReindicizzazione"),                                                 // 348
   _T("\nPrimo angolo: "),                                                   // 349
   _T("\nSecondo angolo: "),                                                 // 350
   _T("\nPrimo punto: "),                                                    // 351
   _T("\nPunto seguente: "),                                                 // 352
   _T("\nCentro: "),                                                         // 353
   _T("punto intermedio"),                                                   // 354
   _T("punto di inserimento"),                                               // 355
   _T("\nCancellazione classe"),                                             // 356
   _T("\nCancellazione sottoclasse"),                                        // 357
   _T("Confermare la scelta"),                                               // 358
   _T("Confermare Civico "),                                                 // 359
   _T("Attendere..."),                                                       // 360
   _T("Condizione: "),                                                       // 361
   _T("Classe Principale: "),                                                // 362
   _T("Via scelta: "),                                                       // 363
   _T("Cancellare la clausola ORDER BY ed impostarla a parte..."),           // 364
   _T("Nessun elemento soddisfa la condizione..."),                          // 365
   _T("Impostare prima la Via..."),                                          // 366
   _T("SQL non definibile per questa classe !"),                             // 367
   _T("Attributo per la distanza nominale (fine)"),                          // 368
   _T("*Attenzione* Possibile perdita di dati (tipi/dimensioni differenti). Confermare l'operazione."), // 369
   _T("*Errore* Impostazione gruppo fallita..."),                            // 370
   _T("Impossibile la scelta * con altri campi..."),                         // 371
   _T("Impossibile ordinare su un campo non selezionato..."),                // 372
   _T(" Solo Via "),                                                         // 373
   _T("Nessun campo selezionato"),                                           // 374
   _T("\n%ld entità filtrate."),                                             // 375
   _T("La modifica apportata richiede il riallineamento della banca dati che potrebbe impiegare molto tempo. Confermare la modifica."), // 376
   _T("\nVisualizzate %ld scheda/e attributi."),                             // 377
   _T("vertice di polilinea"),                                               // 378
   _T("qualsiasi punto"),                                                    // 379
   _T("centroide"),                                                          // 380
   _T("\nRichiede distanza numerica"),                                       // 381      "\nRequires numeric distance"
   _T("Lista di scelta"),                                                    // 382
   _T("Modello dei dati di GEOsim"),                                         // 383
   _T("Nessuna sovrapposizione"),                                            // 384
   _T("Cancellazione collegamenti ASE..."),                                  // 385
   _T("\nRichiede angolo numerico valido"),                                  // 386      "\nRequires valid numeric angle"
   _T("Inserimento collegamenti ASE..."),                                    // 387
   _T("\nErrore di licenza."),                                               // 388
   _T(" o secondo punto."),                                                  // 389      " or second point."
   _T("%ld schede secondarie elaborate."),                                   // 390      
   _T("> (in estrazione)"),                                                  // 391
   _T("\nConfermarne la cancellazione."),                                    // 392
   _T("di tua proprietà che sono rimaste in sospeso:"),                      // 393
   _T("\nAggiornamento dati classe"),                                        // 394
   _T("Controllo tabella <public.geometry_columns>"),                        // 395      
   _T("\nNuovo stile o INVIO per non modificare: "),                         // 396      "\nNew style or RETURN for no change: "
   _T("\nNuova altezza <%s>: "),                                             // 397      "\nNew height <%s>: "
   _T("\nNuovo angolo di rotazione <%s>: "),                                 // 398      "\nNew rotation angle <%s>: "
   _T("\nNuovo testo <"),                                                    // 399      "\nNew text <"
   _T("\nStile <%s> non definito - usare il comando STILE"),                 // 400      "\nStile %s not defined - use STYLE command"
   _T("\nImmettere il punto di inserimento del testo: "),                    // 401      "\nEnter text insertion point: "
   _T("Attributo per l'offset reale"),                                       // 402
   _T("\nLe definizioni dei seguenti blocchi sono state scritte in %s:"),    // 403
   _T("%ld record copiati."),                                                // 404
   _T("\nUnione curve di livello..."),                                       // 405
   _T("\nCurvatura curve di livello..."),                                    // 406
   _T("Caricamento valore <%s> della griglia in memoria"),                   // 407
   _T("%ld celle elaborate."),                                               // 408
   _T("\nInizio analisi dati da tabella secondaria..."),                     // 409
   _T("Sincronizzazione tabella secondaria <%s>"),                           // 410
   _T("Messaggio GEOsim: La sessione n°.%ld è stata cancellata."),           // 411
   _T("\nComando interrotto, usare un comando di GEOsim."),                  // 412
   _T("Sincronizzazione topologia..."),                                      // 413
   _T("\nCollegamento tra scheda secondaria e principale non più valido.\n"), // 414
   _T("\nCollegamento tra scheda secondaria e principale non più valido per la scheda secondaria: %ld.\n"), // 415      
   _T("%ld righe elaborate."),                                               // 416
   _T("\nRighe elaborate %ld, scartate %ld."),                               // 417
   _T("Validità attributo <%s> non soddisfatta."),                           // 418
   _T("rosso"),                                                              // 419      "red"
   _T("giallo"),                                                             // 420      "yellow"
   _T("verde"),                                                              // 421      "green"
   _T("ciano"),                                                              // 422      "cyan"
   _T("blu"),                                                                // 423      "blue"
   _T("magenta"),                                                            // 424      "magenta"
   _T("bianco"),                                                             // 425      "white"
   _T("\nInizio trasferimento dati da tabella secondaria..."),               // 426      
   _T("'Accensione' blocchi attrib. visibili"),                              // 427  descriz.funzionalità
   _T("Scala tipolinea"),                                                    // 428
   _T("La sessione non era stata congelata, AutoCAD Map aveva generato un file di disegno da ripristinare ?"), // 429
   _T("\n%ld entità GEOsim con obbligatorietà attributi non soddisfatta."),  // 430
   _T("\n%ld entità GEOsim con validità attributi non soddisfatta."),        // 431
   _T("\n%ld entità GEOsim con calcolo attributi non valido."),              // 432
   _T("\nInterrogazione dinamica disabilitata."),                            // 433
   _T("\nEscluse dall'operazione %ld entità su %ld in quanto non modificabili."), // 434
   _T("\nInterrogazione dinamica abilitata."),                               // 435
	_T("\nSelezionare entità origine: "),            	                       // 436
   _T("\nStile testo: <%s>"),                                                // 437
   _T("Link non presente..."),                                               // 438 
   _T("\nL'alias <%s> avente path <%s>, pur non avendo riferimento in GEOsim, è stato considerato per WINDOWS."), // 439  
   _T("\nE' necessario rigenerare la grafica..."),                           // 440
   _T("Caricamento topologia"),                                              // 441
   _T("Fase %d/%d..."),                                                      // 442
   _T("BUFFER INTERCETTA"),                                                  // 443
   _T("GEOsim - Scegliere una data"),                                        // 444
   _T("\nConversione progetto <%s> fallita."),                               // 445
   _T("\nEliminati %ld Link Path Template dal disegno."),                    // 446
   _T("\nEliminati %ld tabella/e dati oggetto dal disegno."),                // 447
   _T("Rotazione: ved. preview"),                                            // 448
   _T("Plotted MM=Drawing Units"),                                           // 449
	_T("\nEliminati %ld elemento/i dal disegno."),                            // 450
	_T("giorni"),                                                             // 451
   _T("\nComando non disponibile."),                                         // 452
   _T("prominenza"),                                                         // 453
   _T("Controllo sovrapposizione attributi"),                                // 454
   _T("\nAttributi spenti:\n"),                                              // 455
   _T("Modellazione per scolamento acquee"),                                 // 456
   _T("Passo %ld..."),                                                       // 457
   _T("\nCorrette %ld celle...\n"),                                          // 458
   _T("Determinazione flussi di scolo"),                                     // 459
   _T("Aggiornamento griglia"),                                              // 460
   _T("Conteggio celle a monte"),                                            // 461
   _T("<Oggetti grafici AutoCAD Map>"),                                      // 462
   _T("\nCancellazione entità gruppi..."),                                   // 463
   _T("Scala riempimento"),                                                  // 464
   _T("Rotazione riempimento (gradi)"),                                      // 465
   _T("Stile quotatura"),                                                    // 466
   _T("Scala"),                                                              // 467
   _T("Blocco corrente: "),                                                  // 468
   _T("WINDOWS XP"),                                                         // 469
   _T("WINDOWS VISTA"),                                                      // 470
   _T("giorno"),                                                             // 471
   _T("Si desidera impostare anche la scala del tipolinea ?"),               // 472
   _T("ora"),                                                                // 473
   _T("Interprete GEOsim Lisp versione 2007.1 (21/02/2007)"),                // 474
   _T("Spezza solo geometria"),                                              // 475
   _T("Dividi entità"),                                                      // 476
   _T("Calcolato"),                                                          // 477
   _T("\nCreazione backup dati geometrici..."),                              // 478
   _T("\nCancellazione backup dati geometrici..."),                          // 479
   _T("\nRipristino backup dati geometrici..."),                             // 480
   _T("Visualizzazione oggetti"),                                            // 481
   _T("Ricerca oggetti grafici"),                                            // 482
   _T("Larghezza"),                                                          // 483
   _T("ore"),                                                                // 484
   _T("minuto"),                                                             // 485
   _T("minuti"),                                                             // 486
   _T("secondo"),                                                            // 487
   _T("secondi"),                                                            // 488
   _T(" al termine."),                                                       // 489
   _T("Circa "),                                                             // 490
   _T("\n%ld entità GEOsim elaborate.\n"),                                   // 491
   _T("Creazione layers QGIS"),                                              // 492
   _T("GEOsim - Carica il file delle regole per la visita topologica"),      // 493
   _T("Creazione viste SQL"),                                                // 494
 	_T("\n%ld oggetti grafici GEOsim cancellati."),                           // 495
	_T("\n%ld oggetti grafici GEOsim aggiornati."),                           // 496
	_T("\n%ld oggetti grafici GEOsim inseriti."),                             // 497
 	_T("\n%ld blocchi etichette GEOsim cancellati."),                         // 498
	_T("\n%ld blocchi etichette GEOsim aggiornati."),                         // 499
	_T("\n%ld blocchi etichette GEOsim inseriti."),                           // 500
   _T("Acquamarina"),                                                        // 501
   _T("Amaranto"),                                                           // 502
   _T("Ambra"),                                                              // 503
   _T("Ametista"),                                                           // 504
   _T("Arancione"),                                                          // 505
   _T("Arancione fiamma"),                                                   // 506
   _T("Ardesia"),                                                            // 507
   _T("Argento"),                                                            // 508
   _T("Asparago"),                                                           // 509
   _T("Avorio"),                                                             // 510
   _T("Azzurro"),                                                            // 511
   _T("Azzurro fiordaliso"),                                                 // 512
   _T("Azzurro Savoia"),                                                     // 513
   _T("Beige"),                                                              // 514
   _T("Beige-oliva chiaro"),                                                 // 515
   _T("Bianco"),                                                             // 516
   _T("Bianco antico"),                                                      // 517
   _T("Bianco di titanio"),                                                  // 518
   _T("Bianco di zinco"),                                                    // 519
   _T("Biscotto"),                                                           // 520
   _T("Bistro"),                                                             // 521
   _T("Blu"),                                                                // 522
   _T("Blu acciaio"),                                                        // 523
   _T("\nTrovato Host sconosciuto: <%s> nel riferimento: %s"),               // 524
   _T("\nIl drive <%c%c> del path <%s> non ha un alias di riferimento."),    // 525
   _T("\n*Attenzione* Confermando questa operazione, GEOsim potrebbe generare dei"), // 526
   _T("\nmalfunzionamenti e non sarà più possibile salvare i dati della eventuale"), // 527
   _T("\nsessione di lavoro corrente !!!"),                                  // 528
   _T("\nConfermare l'operazione."),                                         // 529
   _T("Nodo"),                                                               // 530
   _T("Griglia"),                                                            // 531
   _T("Ricerca etichette"),                                                  // 532
   _T("Gruppo"),                                                             // 533
   _T("Spaghetti"),                                                          // 534
   _T("Superficie"),                                                         // 535
   _T("Simulazione"),                                                        // 536
   _T("Sottoclasse"),                                                        // 537
   _T("Tab.Secondaria"),                                                     // 538
   _T("Blu alice"),                                                          // 539
   _T("Selezione classi da estrarre"),                                       // 540  descriz.funzionalità
   _T("Uscita sessione di lavoro"),                                          // 541  descriz.funzionalità
	_T("Inserimento entità secondaria"),                                      // 542  descriz.funzionalità
   _T("Modifica entità secondaria"),                                         // 543  descriz.funzionalità
   _T("Cancellazione entità secondaria"),                                    // 544  descriz.funzionalità
   _T("Interrogazione entità secondaria"),                                   // 545  descriz.funzionalità
   _T("Editazione attrib. visibili"),                                        // 546  descriz.funzionalità
   _T("'Spegnimento' blocchi attrib. visibili"),                             // 547  descriz.funzionalità
   _T("Modifica tabella definizione attributi"),                             // 548  descriz.funzionalità
	_T("Blu Bondi"),                                                          // 549
   _T("Blu Cadetto"),                                                        // 550
   _T("Blu ceruleo"),                                                        // 551
   _T("Blu di Persia"),                                                      // 552
   _T("Blu di Prussia"),                                                     // 553
   _T("Blu Dodger"),                                                         // 554
   _T("Blu elettrico"),                                                      // 555
   _T("Blu Klein"),                                                          // 556
   _T("L'entità della classe <%s> (codice %d, sottocodice %d)"),             // 557
   _T(" il "),                                                               // 558
   _T("\nSincronizzazione link tabella secondaria <%s>:\n"),                 // 559
   _T(". Disegno di provenienza: "),                                         // 560
   _T(" non è bloccata da un'altra sessione di lavoro."),                    // 561
   _T("\nIl comando è stato eseguito correttamente su %ld oggetti grafici."), // 562
   _T("\nTrovata/e entità non modificabile/i."),                             // 563
   _T("Blu marino"),                                                         // 564
   _T("Base del cartiglio non valida\n"),                                    // 565
   _T("Altezza del cartiglio non valida\n"),                                 // 566              
   _T("Altezza testo non valida"),                                           // 567
   _T("Altezza testo superiore all'interlinea\n"),                           // 568
   _T("Spazio blocco non valido"),                                           // 569
   _T("Spazio blocco superiore all'interlinea\n"),                           // 570
   _T("Scala blocco non valida"),                                            // 571
   _T("Base cartiglio troppo grande\n"),                                     // 572
   _T("Altezza cartiglio troppo grande\n"),                                  // 573
   _T("Spazio insufficiente per la legenda\n"),                              // 574
   _T("INTERSEZIONE"),                                                       // 575
   _T("INTERNO"),                                                            // 576
   _T("POLIGONO"),                                                           // 577
   _T("CERCHIO"),                                                            // 578
   _T("FINESTRA"),                                                           // 579
   _T("TUTTO"),                                                              // 580
   _T("INTERCETTA"),                                                         // 581
   _T("INTERSEZIONE ESTREMI ESCLUSI"),                                       // 582
   _T("Blu notte"),                                                          // 583 
   _T("Blu oltremare"),                                                      // 584
   _T("Blu reale"),                                                          // 585
   _T("Bordeaux"),                                                           // 586
   _T("Bronzo"),                                                             // 587
   _T("Bronzo antico"),                                                      // 588
   _T("Camoscio"),                                                           // 589
   _T("Carbone"),                                                            // 590
   _T("nessuno (entità nuova)"),                                             // 591
   _T(" dalla sessione n°."),                                                // 592
   _T("L'entità della classe <%s> (codice %ld)"),                            // 593
   _T("\nConversione"),                                                      // 594
   _T("Carminio"),                                                           // 595
   _T("Carta da zucchero"),                                                  // 596
   _T("\nLe operazioni effettuate fino ad ora non saranno più annullabili."), // 597
   _T("\nTrovata entità GEOsim non sovrapponibile."),                        // 598
   _T("WINDOWS 95/98"),                                                      // 599
   _T("\nEntità priva di punti di connessione validi."),                     // 600
   _T("Salvataggio dati grafici classe %s (%s)"),                            // 601
   _T("Nome riempimento [?/Solido] <"),                                      // 602
   _T("?"),                                                                  // 603
   _T("Solido"),                                                             // 604
   _T("\nFattore di scala <%f>: "),                                          // 605
   _T("\nRiempimenti:\n"),                                                   // 606
   _T("Trovate sessioni di lavoro..."),                                      // 607
   _T("etichette"),                                                          // 608
   _T("Tutto"),                                                              // 609 opz. copia
   _T("Attributi"),                                                          // 610 opz. copia
   _T("oggetti Principali"),                                                 // 611 opz. copia
   _T("\nControllo dati classe <%s> fallita."),                              // 612
   _T("Tipo errore:"),                                                       // 613
   _T("Codice errore:"),                                                     // 614
   _T("Messaggio:"),                                                         // 615
   _T("Nessuna derivata presente"),                                          // 616
   _T("Castagno"),                                                           // 617
   _T("\nLa path dell'alias <%s> non è valida (2 caratteri, es.'C:'...).\nVerificare anche gli alias di AutoCAD Map..."), // 618
   _T("\nL'alias <%s> non è valida (ammessi solo caratteri alfanumerici + '_')."), // 619
   _T(" è stata bloccata "),                                                 // 620
   _T("\nNessun nuovo oggetto."),		                                      // 621
   _T("\nSalvataggio nuovi oggetti terminato."),								     // 622
   _T("Semplice"),                                                           // 623
   _T("Codice"),                                                             // 624
   _T("Sottocodice"),                                                        // 625
   _T("Categoria"),                                                          // 626
   _T("Tipo"),                                                               // 627
   _T("Nome"),                                                               // 628
   _T("Colore"),                                                             // 629
   _T("Riempimento"),                                                        // 630
   _T("Tipo linea"),                                                         // 631
   _T("Stile testo"),                                                        // 632
   _T("Piano"),                                                              // 633
   _T("Castagno scuro"),                                    					  // 634
   _T("\nLa path <%s> avente alias <%s>, è stata scartata perchè già presente in lista."), // 635
   _T("\nL'operazione è fallita. Ripristinare manualmente \ni files di backup della classe (vedi manuale)."), // 636
   _T("\nModifica struttura tabella classe <%s>..."),                        // 637
   _T("\nModifica caratteristiche degli attributi della classe <%s>..."),    // 638
   _T("\nModifica valori di default degli attributi della classe <%s>..."),  // 639
   _T("\nCalcolo valori attributi tabella classe <%s>..."),                  // 640
   _T("\nVerifica validità valori attributi tabella classe <%s>..."),        // 641
   _T("\nVerifica obbligatorietà valori attributi tabella classe <%s>..."),  // 642
   _T("\nCreazione backup classe <%s>..."),                                  // 643
   _T("Salvare le modifiche della sessione"),                                // 644
   _T("GEOsim - Seleziona file"),                                            // 645
   _T("\nModificare il poligono:"),                                          // 646
   _T("\nPrimo punto o C per cancellare: "),                                 // 647
   _T("\nPunto seguente o C per cancellare: "),                              // 648
   _T("C"),                                                                  // 649
   _T("\nModificare l'intercettazione:"),                                    // 650
   _T("Inserire valore parametro <%s>: "),                                   // 651
   _T("Gestione set di visibiltà"),                                          // 652  descriz.funzionalità
   _T("\nNascoste %ld scheda/e attributi."),                                 // 653
   _T("Posizione"),                                                          // 654
   _T("SQL"),                                                                // 655
   _T("Castano chiaro"),                                                     // 656
   _T("Sensore"),                                                            // 657
   _T("geometria"),                                                          // 658
   _T("Catrame"),                                                            // 659
   _T("\nVerifica disegni delle classi di entità della sessione <%s>..."),   // 660
   _T("Disegni sbloccati."),                                                 // 661
   _T("Catrame scuro"),                                                      // 662
   _T("Errore nel caricamento set..."),                                      // 663
   _T("Celadon"),                                                            // 664
   _T("Progetto inesistente..."),                                            // 665
   _T("Nessun set di visibilità selezionato..."),                            // 666
   _T("Errore nella cancellazione di un set..."),                            // 667
   _T("Nessun nome set di visibilità inserito..."),                          // 668
   _T("Nome set di visibilità esistente..."),                                // 669
   _T("Celeste"),                                                            // 670
   _T("Nessuna classe selezionata..."),                                      // 671
   _T("Selezione classe non valida..."),                                     // 672
   _T("Classe non trovata..."),                                              // 673  
   _T("Errore nel salvataggio del set di visibilità..."),                    // 674
   _T("Errore nel deselezionare attributi..."),                              // 675
   _T("Nessun attributo selezionato..."),                                    // 676
   _T("Errore nella selezione attributi.."),                                 // 677
   _T("On"),                                                                 // 678
   _T("Off"),                                                                // 679
   _T("Errore nella creazione di un nuovo set..."),                          // 680
   _T("Attivazione del set di visibilità"),                                  // 681
   _T("Blocchi di attributi visibili elaborati: "),                          // 682
   _T("\nTrovati %ld blocchi di attributi spenti."),                         // 683
   _T("Ceruleo"),                                                            // 684
   _T("Ceruleo scuro"),                                                      // 685
   _T("Chartreuse"),                                                         // 686
   _T("Classe <%s> non creata."),                                            // 687
   _T("Ciano"),                                                              // 688
   _T("Ciliegia"),                                                           // 689
   _T("Cioccolato"),                                                         // 690
   _T("\nConfigurare gli alias dei nodi di rete.\n"),                        // 691
   _T("Creazione topologia rete per classe <%s>"),                           // 692
   _T("\n*Attenzione* La classe deve essere interamente estratta altrimenti la topologia\nsarà parziale e potrà creare dei malfunzionamenti."), // 693
   _T("Cobalto"),                                                            // 694
   _T("\nElaborazione classe: <%s>\n"),                                      // 695
   _T("\nCopia tabella secondaria <%s>..."),                                 // 696
   _T("Conchiglia"),                                                         // 697
   _T("\n%ld collegamenti elaborati."),                                      // 698
   _T("\n%ld nuovi nodi inseriti."),                                         // 699
   _T("\nTopologia non valida nei seguenti punti:"),                         // 700
   _T("Sottoclasse <%s>"),                                                   // 701
   _T("\nEntità da aggiungere al gruppo: "),                                 // 702
   _T("\nProcesso di pulizia completato"),                                   // 703
   _T("\nOggetti corti isolati "),                                           // 704
   _T("\nOggetti corti "),                                                   // 705
   _T("\nSegmenti corti interni "),                                          // 706
   _T("\nIncroci da spezzare "),                                             // 707
   _T("\nOggetti da estendere al segmento più vicino "),                     // 708
   _T("\nOggetti da estendere al vertice più vicino "),                      // 709
   _T("\nOggetti duplicati "),                                               // 710
   _T("\nNodi da raggruppare "),                                             // 711
   _T("\nPseudo nodi da eliminare "),                                        // 712
   _T("\nAppendici di oggetti da eliminare "),                               // 713
   _T("Nome blocco"),                                                        // 714
   _T("Larghezza linea"),                                                    // 715
   _T("Elevazione"),                                                         // 716
   _T("Rotazione (gradi)"),                                                  // 717
   _T("Altezza testo"),                                                      // 718
   _T("Spessore"),                                                           // 719
   _T("Cartella disegni"),                                                   // 720
   _T("geometria - passo 2"),                                                // 721
   _T("Sistema coordinate"),                                                 // 722
   _T("File blocchi rif."),                                                  // 723
   _T("Blocco riferimento"),                                                 // 724
   _T("File funz. grafiche"),                                                // 725
   _T("Funzione grafica"),                                                   // 726
   _T("Riferimento tabella"),                                                // 727
   _T("Connessione UDL"),                                                    // 728
   _T("Attributo chiave"),                                                   // 729
   _T("Ultimo codice"),                                                      // 730
   _T("Punto di origine"),                                                   // 731
   _T("Dim.X della cella"),                                                  // 732
   _T("Dim.Y della cella"),                                                  // 733
   _T("Numero celle asse X"),                                                // 734
   _T("Numero celle asse Y"),                                                // 735
   _T("Connessione con"),                                                    // 736
   _T("Modalità"),                                                           // 737
   _T("Classe composta da"),                                                 // 738
   _T("N. entità"),                                                          // 739
   _T("Nome attributo"),                                                     // 740 (max len = 20)
   _T("Tipo attibuto"),                                                      // 741 (max len = 20)
   _T("Lunghezza"),                                                          // 742 (max len = 20)
   _T("Decimali"),                                                           // 743 (max len = 20)
   _T("Visibile"),                                                           // 744 (max len = 20)
   _T("Obbligatorio"),                                                       // 745 (max len = 20)
   _T("File funz. calcolo"),                                                 // 746 (max len = 20)
   _T("Funzione calcolo"),                                                   // 747 (max len = 20)
   _T("File funz. validità"),                                                // 748 (max len = 20)
   _T("Funzione validità"),                                                  // 749 (max len = 20)
   _T("Valore di default"),                                                  // 750 (max len = 20)
   _T("Dati Identificativi Classe"),                                         // 751
   _T("Caratteristiche Grafiche"),                                           // 752
   _T("Collegamento a Database"),                                            // 753
   _T("Caratteristiche Griglia"),                                            // 754
   _T("Lista delle Connessioni"),                                            // 755
   _T("Composizione della Classe"),                                          // 756
   _T("Composizione Tabella"),                                               // 757
   _T("Selezionare la cartella."),                                           // 758
   _T("Sfoglia per cartelle"),                                               // 759
   _T("Aggiornamento collegamenti grafica\\database..."),                    // 760
	_T("\n%ld collegamenti inseriti."),                                       // 761
	_T("\n%ld collegamenti modificati."),                                     // 762
	_T("\n%ld collegamenti cancellati."),                                     // 763
   _T("\nEliminato(i) %d oggetto(i) perchè appartenente a GEOsim."),         // 764
   _T("Visibile in tooltip"),                                                // 765 (max len = 20)
   _T("Collegamento a Grafica"),                                             // 766
   _T("Etichetta attributo"),                                                // 767
   _T("Alcuni oggetti non saranno salvati, si vuole annullare il salvataggio ?"), // 768
   _T("Corallo"),                                                            // 769
   _T("\n%ld entità GEOsim bloccata/e da un'altro utente."),                 // 770
   _T("Crema"),                                                              // 771
   _T("Cremisi"),                                                            // 772
   _T("Denim"),                                                              // 773
   _T("Sì"),                                                                 // 774
   _T("No"),                                                                 // 775
   _T("Denim chiaro"),                                                       // 776
   _T("Eliotropo"),                                                          // 777
   _T("Ecru"),                                                               // 778
   _T("Fiore di granturco"),                                                 // 779
   _T("Foglia di tè"),                                                       // 780
   _T("Fucsia"),                                                             // 781
   _T("Fucsia Bordesto Lillato"),                                            // 782
   _T("Fulvo"),                                                              // 783
   _T("Gainsboro"),                                                          // 784
   _T("Giada"),                                                              // 785
   _T("Giallo"),                                                             // 786
   _T("Giallo Napoli"),                                                      // 787
   _T("\nMancata corrispondenza fra poligoni ed etichette"),                 // 788
   _T("\nImpossibile creare la topologia: controllare il disegno"),          // 789
   _T("Proprietà UDL"),                                                      // 790 (max len = 20)
   _T("\nLettura definizione secondaria avente codice "),                    // 791
   _T("La conversione delle classi prevede che queste NON siano usate da nessun altro utente. Confermare l'operazione."), // 792 (max len = 150)
   _T("Tabella di backup già esistente. Sovrascrivere la tabella ?"),        // 793
   _T("Descrizione"),                                                        // 794 (max len = 20)
   _T("Codice GEOsim univoco per l'entità"),                                 // 795
   _T("Valore del testo da visualizzare"),                                   // 796
   _T("Giallo pastello"),                                                    // 797  
   _T("Vero"),                                                               // 798
   _T("Falso"),                                                              // 799
   _T("*Errore* Piano non valido."),                                         // 800
   _T("*Errore* Blocco non valido."),                                        // 801
   _T("*Errore* Stile testo non valido."),                                   // 802
   _T("*Errore* Scala non valida."),                                         // 803
   _T("*Errore* Tipo linea non valida."),                                    // 804
   _T("*Errore* Larghezza non valida."),                                     // 805
   _T("*Errore* Colore non valido."),                                        // 806
   _T("*Errore* Altezza testo non valida."),                                 // 807
   _T("*Errore* Riempimento non valido."),                                   // 808
   _T("Stesto"),                                                             // 809
	_T("Htesto"),                                                             // 810
   _T("Largh."),                                                             // 811
   _T("Tlinea"),                                                             // 812
   _T("Riemp."),                                                             // 813
   _T("Punto inserimento"),                                                  // 814
   _T("DimX simboli"),                                                       // 815
   _T("DimY simboli"),                                                       // 816
   _T("Offset simboli"),                                                     // 817
   _T("Dim. etichette"),                                                     // 818
   _T("Offset etichette"),                                                   // 819 
   _T("Giallo scuolabus"),                                                   // 820
   _T("Impostazione Legenda"),                                               // 821
   _T("Glicine"),                                                            // 822
   _T("\nNessuna legenda impostata"),                                        // 823
   _T("N.Int: "),                                                            // 824
   _T("Scala"),                                                              // 825
   _T("Blocco"),                                                             // 826
   _T("Attributo : "),                                                       // 827
   _T("Evidenziazione : "),                                                  // 828
   _T("Tipologia : "),                                                       // 829
   _T("N° Intervalli : "),                                                   // 830
   _T("Continua"),                                                           // 831
   _T("Discreta"),                                                           // 832
   _T("Tutte le proprietà"),                                                 // 833
   _T("Int."),                                                               // 834
   _T("Valore"),                                                             // 835
   _T("Descr."),                                                             // 836
	_T("Sottoclasse : "),				                                         // 837
	_T("Intervallo n°: "),																	  // 838
	_T("Grano"),                                                              // 839
   _T("Granata"),                                                            // 840
   _T("Grigio 5%"),                                                          // 841
   _T("Grigio 10%"),                                                         // 842
   _T("Grigio 20%"),                                                         // 843
   _T("Grigio 30%"),                                                         // 844
   _T("True"),                                                               // 845
   _T("Si sta tentando di variare i valori di un attributo visibile, database e grafica saranno disallineati. Continuare ?"), // 846
   _T("Grigio 40%"),                                                         // 847
   _T("\n\nControllo topologico per entità modificate...\n"),                // 848
   _T("\n\nControllo topologico per entità cancellate...\n"),                // 849
   _T("Verifica modificabilità e blocco delle entità"),                      // 850
   _T("Creazione topologia"),                                                // 851  descriz.funzionalità
   _T("Funzione cambio dim. testi e attrib. visibili"),                      // 852  descriz.funzionalità
   _T("Funzione creaz. file DWF per WHIP!"),                                 // 853  descriz.funzionalità
   _T("\nEliminato(i) %d oggetto(i) perchè appartenente(i) alla stessa classe di GEOsim."),   // 854
   _T("\nEliminato(i) %d oggetto(i) perchè non compatibile(i) graficamente."),                // 855
   _T("\nIl LPT %s non può essere utilizzato."),                                              // 856
   _T("\nImpossibile ottenere i limiti dell'area da plottare"),                               // 857
   _T("\nImpossibile ottenere le impostazioni per le unità di misura dell'area da plottare"), // 858
   _T("\nImpossibile ottenere le impostazioni di layout dell'area da plottare"),              // 859
   _T("\nImpossibile ottenere le impostazioni per il cartiglio e la legenda"),                // 860
   _T("\nImpossibile ottenere le impostazioni per la scala"),                                 // 861
   _T("Grigio 50%"),                                                         // 862
   _T("Grigio 60%"),                                                         // 863
   _T("Grigio 70%"),                                                         // 864
   _T("Grigio 75%"),                                                         // 865
   _T("Grigio 80%"),                                                         // 866
   _T("Grigio asparago"),                                                    // 867
   _T("Grigio ardesia scuro"),                                               // 868
   _T("Grigio ardesia chiaro"),                                              // 869
   _T("Grigio cenere"),                                                      // 870
   _T("Grigio rosso chiaro"),                                                // 871
   _T("Grigio tè verde"),                                                    // 872
   _T("Incarnato prugna"),                                                   // 873
   _T("Indaco"),                                                             // 874
   _T("Indaco elettrico"),                                                   // 875
   _T("Indaco scuro"),                                                       // 876
   _T("International Klein Blue"),                                           // 877
   _T("Kaki"),                                                               // 878
   _T("Kaki chiaro"),                                                        // 879
   _T("Kaki scuro"),                                                         // 880
   _T("Lampone"),                                                            // 881
   _T("Lavanda"),                                                            // 882
   _T("Lavanda pallido"),                                                    // 883
   _T("Lavanda rosata"),                                                     // 884
   _T("Limone"),                                                             // 885
   _T("Limone crema"),                                                       // 886
   _T("Lilla"),                                                              // 887
   _T("Lime"),                                                               // 888
   _T("Lino"),                                                               // 889
   _T("Magenta"),                                                            // 890
   _T("Magenta chiaro"),                                                     // 891
   _T("Magnolia"),                                                           // 892
   _T("Malva"),                                                              // 893
   _T("Malva chiaro"),                                                       // 894
   _T("Mandarino"),                                                          // 895
   _T("Marrone"),                                                            // 896
   _T("Marrone chiaro"),                                                     // 897
   _T("Marrone pastello"),                                                   // 898
   _T("Marrone-rosso"),                                                      // 899
   _T("Marrone sabbia chiaro"),                                              // 900
   _T("Marrone scuro"),                                                      // 901
   _T("Melanzana"),                                                          // 902
   _T("Mogano"),                                                             // 903
   _T("Nero"),                                                               // 904
   _T("Ocra"),                                                               // 905
   _T("Orchidea"),                                                           // 906
   _T("Oliva chiaro"),                                                       // 907
   _T("Oro"),                                                                // 908
   _T("Oro vecchio"),                                                        // 909
   _T("Oro vivo"),                                                           // 910
   _T("Oro vivo smorto"),                                                    // 911
   _T("Ottone antico"),                                                      // 912
   _T("Papaia"),                                                             // 913
   _T("Pervinca"),                                                           // 914
   _T("Pesca"),                                                              // 915
   _T("Pesca scuro"),                                                        // 916
   _T("Pesca-arancio"),                                                      // 917
   _T("Pesca-giallo"),                                                       // 918
   _T("Platino"),                                                            // 919
   _T("Porpora"),                                                            // 920
   _T("Prugna"),                                                             // 921
   _T("Rame"),                                                               // 922
   _T("Rosa"),                                                               // 923
   _T("Rosa arancio"),                                                       // 924
   _T("Rosa Mountbatten"),                                                   // 925
   _T("Rosa pallido"),                                                       // 926
   _T("Rosa pastello"),                                                      // 927
   _T("Rosso sangue"),                                                       // 928
   _T("Rosa scuro"),                                                         // 929
   _T("Rosa shocking"),                                                      // 930
   _T("Rosa medio"),                                                         // 931
   _T("Rosa vivo"),                                                          // 932
   _T("Rosso"),                                                              // 933
   _T("Rosso aragosta"),                                                     // 934
   _T("Rosso cardinale"),                                                    // 935
   _T("Rosso fragola"),                                                      // 936
   _T("Rosso mattone"),                                                      // 937
   _T("Rosso mattone chiaro"),                                               // 938
   _T("Rosso rosa"),                                                         // 939
   _T("Rosso pompeiano"),                                                    // 940
   _T("Rosso Tiziano"),                                                      // 941
   _T("Rosso veneziano"),                                                    // 942
   _T("Rosso violetto chiaro"),                                              // 943
   _T("Rosso violaceo"),                                                     // 944
   _T("Rosso fuoco"),                                                        // 945
   _T("Rosso pomodoro"),                                                     // 946
   _T("Rubino"),                                                             // 947
   _T("Sabbia"),                                                             // 948
   _T("Salmone"),                                                            // 949
   _T("Salmone scuro"),                                                      // 950
   _T("Scarlatto"),                                                          // 951
   _T("Scarlatto scuro"),                                                    // 952
   _T("Seppia"),                                                             // 953
   _T("Terra di Siena"),                                                     // 954
   _T("Terra di Siena bruciata"),                                            // 955
   _T("Tè verde"),                                                           // 956
   _T("Tè verde scuro"),                                                     // 957
   _T("Turchese"),                                                           // 958
   _T("Turchese chiaro"),                                                    // 959
   _T("Turchese pallido"),                                                   // 960
   _T("Turchese scuro"),                                                     // 961
   _T("Uovo di pettirosso"),                                                 // 962
   _T("Uovo di pettirosso chiaro"),                                          // 963
   _T("Verde"),                                                              // 964
   _T("Verde caraibi"),                                                      // 965
   _T("Verde foresta"),                                                      // 966
   _T("Verde chiaro"),                                                       // 967
   _T("Verde-giallo"),                                                       // 968
   _T("Verde mare chiaro"),                                                  // 969
   _T("Verde marino"),                                                       // 970
   _T("Verde marino medio"),                                                 // 971
   _T("Verde menta"),                                                        // 972
   _T("Verde menta chiaro"),                                                 // 973
   _T("Verde muschio"),                                                      // 974
   _T("Verde oliva"),                                                        // 975
   _T("Verde olivastro"),                                                    // 976
   _T("Verde oliva-giallo"),                                                 // 977
   _T("Verde oliva scuro"),                                                  // 978
   _T("Verde pastello chiaro"),                                              // 979
   _T("Verde pastello"),                                                     // 980
   _T("Verde pastello scuro"),                                               // 981
   _T("Verde pino"),                                                         // 982
   _T("Verde primavera"),                                                    // 983
   _T("Verde primavera scuro"),                                              // 984
   _T("Verde scuro"),                                                        // 985
   _T("Verde smeraldo"),                                                     // 986
   _T("Verde Veronese"),                                                     // 987
   _T("Vermiglio"),                                                          // 988
   _T("Viola"),                                                              // 989
   _T("Viola-melanzana"),                                                    // 990
   _T("Viola scuro"),                                                        // 991
   _T("Zafferano"),                                                          // 992
   _T("Zafferano profondo"),                                                 // 993
   _T("Anguria"),                                                            // 994
   _T("Arancio"),                                                            // 995
   _T("Arancio bruciato"),                                                   // 996
   _T("Arancio scuro"),                                                      // 997
   _T("Avocado"),                                                            // 998
   _T("Avocado scuro"),                                                      // 999
   _T("Avorio"),                                                             // 1000
   _T("Bruno Van Dyck"),                                                     // 1001
   _T("Caffellatte"),                                                        // 1002
   _T("Castagna scuro"),                                                     // 1003
   _T("Certosa"),                                                            // 1004
   _T("Cioccolata"),                                                         // 1005
   _T("Cremisi scuro"),                                                      // 1006
   _T("Creta"),                                                              // 1007
   _T("Giallo chiaro"),                                                      // 1008
   _T("Giallo di Marte"),                                                    // 1009
   _T("Grigio rosso scuro"),                                                 // 1010
   _T("Grigio oliva"),                                                       // 1011
   _T("Lattemiele"),                                                         // 1012
   _T("Marrone avana"),                                                      // 1013
   _T("Mattone"),                                                            // 1014
   _T("Nocciola"),                                                           // 1015
   _T("Ocra bruna"),                                                         // 1016
   _T("Oliva scuro"),                                                        // 1017
   _T("Paglierino"),                                                         // 1018
   _T("Pesca chiaro"),                                                       // 1019
   _T("Rosa tenue o incarnato"),                                             // 1020
   _T("Rosso scuro"),                                                        // 1021
   _T("Sabbia rosata"),                                                      // 1022
   _T("Safari"),                                                             // 1023
   _T("Salmone chiaro"),                                                     // 1024
   _T("Senape"),                                                             // 1025
   _T("Terra d'ombra"),                                                      // 1026
   _T("Terra d'ombra bruciata"),                                             // 1027
   _T("Terracotta"),                                                         // 1028
   _T("Vaniglia"),                                                           // 1029
   _T("Verde limone"),                                                       // 1030
   _T("Verde limone scuro"),                                                 // 1031
   _T("Vermiglione"),                                                        // 1032
   _T("Vermiglione chiaro"),                                                 // 1033
   _T("Zolfo"),                                                              // 1034
   _T("codice autocad ([0-256])"),                                           // 1035
   _T("HTML (es. #FFFFFF)"),                                                 // 1036
   _T("RGB in esadecimale (es. #FFFFFF)"),                                   // 1037
   _T("RGB con virgola separatrice (es. 255,255,255)"),                      // 1038
   _T("RGB con spazio separatore (es. 255 255 255)"),                        // 1039
   _T("RGB in decimale (es. 16711680 per rosso)"),                           // 1040
   _T("BRG in decimale (es. 16711680 per blu)"),                             // 1041
   _T("topobase"),                                                           // 1042
   _T("\nLe definizioni dei seguenti tipilinea sono state scritte in %s:"),  // 1043
   _T("\nLe definizioni dei seguenti riempimenti sono state scritte in %s:"), // 1044
   _T("storico"),                                                            // 1045
   _T("Archivio storico della classe "),                                     // 1046
   _T("\nAttendere rilascio memoria...\n"),                                  // 1047
   _T("%ld entità lette."),                                                  // 1048
   _T("\nSelezionare il gruppo da modificare:"),                             // 1049
   _T("\nEntità da rimuovere dal gruppo: "),                                 // 1050
	_T("Abilitazione a viste SQL"),                                           // 1051
	_T("Abilitazione a storicizzazione"),                                     // 1052
   _T("\nLe seguenti classi di entità non sono state estratte per i seguenti motivi:"), // 1053
   _T("\nSpecificare punto successivo: "),                                   // 1054
   _T("\nVertice duplicato."),                                               // 1055
   _T("Elaborazione classe <%s>"),                                           // 1056
   _T("Elaborazione sottoclasse <%s>"),                                      // 1057
   _T("Elaborazione tabella secondaria: "),                                  // 1058
   _T("Elaborazione classi"),                                                // 1059
   _T("Elaborazione sottoclassi"),                                           // 1060
   _T("Elaborazione tabelle secondarie"),                                    // 1061
   _T("Elaborazione entità"),                                                // 1062
   _T("Elaborazione oggetti grafici"),                                       // 1063
   _T("Applicazione dei criteri di visibilità delle etichette della classe <%s>"), // 1064
   _T("Cancellazione viste SQL"),                                            // 1065
   _T("Copia dei dati da database a object data"),                           // 1066
	_T("Raggruppamento classi in legenda QGIS"),                              // 1067
	_T("Inserimento classi in legenda QGIS"),                                 // 1068
	_T("Bloccaggio entità"),                                                  // 1069
   _T("Verifica modificabilità delle entità"),                               // 1070
   _T("Calcolo delle intersezioni spaziali"),                                // 1071
   _T("Calibrazione entità classe <%s>"),                                    // 1072
   _T("Copia valori di database"),                                           // 1073
   _T("Filtro su tabelle secondarie"),                                       // 1074
   _T("Trasferimento dati da tabella secondaria"),                           // 1075
   _T("Analisi segmentazione dinamica"),                                     // 1076
   _T("Filtro a sensori"),                                                   // 1077
   _T("Salvataggio dati alfanumerici classe <%s>"),                          // 1078
   _T("Salvataggio dati alfanumerici tabella secondaria <%s>"),              // 1079
   _T("Disgregazione entità"),                                               // 1080
   _T("Riallineamento banca dati"),                                          // 1081
   _T("Visualizzazione della griglia"),                                      // 1082
   _T("Visualizzazione delle curve di livello"),                             // 1083
   _T("Interpolazione IDW"),                                                 // 1084
   _T("Sincronizzazione classe <%s>"),                                       // 1085
   _T("Lettura collegamenti a database"),                                    // 1086
   _T("Lettura collegamenti a dati oggetto"),                                // 1087
   _T("Drape"),                                                              // 1088
   _T("Visualizzazione del territorio"),                                     // 1089
   _T("Terminato."),                                                         // 1090
   _T("Esportazione dati"),                                                  // 1091
   _T("\nConversione simulazione <%s> del progetto <%s> fallita."),          // 1092
   _T("\nSpecificare punto successivo o [ANnulla]: "),                       // 1093
   _T("ANnulla")                                                             // 1094
};

///////////////////////////////////////////////////////////////////////////////
// La traduzione 130 è riservata per il numero della versione di GEOsim
// I seguenti messaggi sono disponibili:
// 
///////////////////////////////////////////////////////////////////////////////