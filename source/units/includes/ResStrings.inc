(******************************************************************************
 *                                                                            *
 *  Usermanager                                                               *
 *  ResStrings.inc -- resourcestrings                                         *
 *                                                                            *
 *  Copyright (c) 2006 Michael Puff  http://www.michael-puff.de               *
 *                                                                            *
 ******************************************************************************)

resourcestring
  rsWndCaption      = '%s - %s';
  // Demo
  rsDemo            = 'Dies ist eine nicht lizensierte Demo-Version!';
  rsDemoFeature     = 'In der nicht lizensierten Demo-Version ist dieses Feature deaktiviert.' + #13#10#13#10 +
    'Wie Sie eine lizensierte Vollversion beziehen k�nnen, erfahren Sie auf meiner Webseite:' + #13#10 +
    'http://www.xpusermanager.de';
  rsAbort           = 'Lizensieren';
  rsRetry           = 'Weiter';
  rsIgnore          = 'Abbrechen';

  rsWaitUserDetails = 'Benutzerkonten werden ausgelesen...';
  rsWaitUserDetailsCaption = 'Benutzerdaten auslesen';
  rsWaitDel         = 'Benutzer wird gel�scht...';
  rsWaitDelCaption  = 'Benutzer l�schen';
  rsWaitPrivileges  = 'Benutzergruppen und Privilegien werden ausgelesen...';
  rsWaitPrivilegesCaption = 'Gruppenverwaltung �ffnen';
  rsWaitAddGroupCaption = 'Gruppe anlegen';
  rsWaitAddGroup    = 'Neue Gruppe wird angelegt...';
  rsWaitDelGroupCaption = 'Gruppe l�schen';
  rsWaitDelGroup    = 'Gruppe wird gel�scht...';
  rsWaitExportXMLCaption = 'Benutzer XML-Export';
  rsWaitExportXML   = 'Benutzerkonten werden in XML-Datei exportiert...';
  rsWaitExportCSVCaption = 'Benutzer CSV-Export';
  rsWaitExportCSV   = 'Benutzerkonten werden in CSV-Datei exportiert...';
  rsWaitImportXMLCaption = 'Benutzer importieren';
  rsWaitImport      = 'Benutzer werden angelegt...';

  rsTBBChooseCmp    = 'W�hlt einen Computer im Netzwerk aus';
  rsTBBNew          = 'Legt einen neuen Benutzer an';
  rsTBBSave         = 'Speichert den neuen Benutzer oder �nderungen am Benutzerkonto';
  rsTBBDel          = 'L�scht das ausgew�hlte Benutzerkonto';
  rsTBBGrpMng       = 'Ruft den Gruppenmanager auf';

  // Delete user
  rsCaptionDelete   = 'Benutzer l�schen';
  rsDoDelete        = 'Soll der Benutzer "%s" gel�scht werden?' + #13#10 +
    'Dieser Vorgang kann nicht wieder r�ckg�ngig gemacht werden.';

  rsErrorOSUnknown  = 'Betriebssystem unbekannt';
  rsErrorUnknown    = 'Ein unbekannter Fehler ist aufgetreten.';
  rsErrorGetServerComment = 'Fehler - GetServerComment';
  rsErrorSelComputer = 'Fehler - Computer w�hlen';
  rsErrorConnectNetWork = 'Fehler - Mit Computer verbinden';
  rsErrorLoadSettings = 'Fehler - Einstellungen laden';
  rsErrorSaveSettings = 'Fehler - Einstellungen speichern';
  rsErrorSaveUser   = 'Fehler - Benutzer speichern';
  rsErrorAddUser    = 'Fehler - Neuen Benutzer anlegen';
  rsErrorDelUser    = 'Fehler - Benutzer l�schen';
  rsErrorValueCantChangeCap = 'Fehler - Kontotyp �ndern';
  rsErrorValueCantChange = 'Der Wert kann nicht ge�ndert werden';
  rsErrorGetPrivilegesCap = 'Fehler - Privilegien ermitteln';
  rsErrorExport     = 'Fehler - Benutzer exportieren';

  rsErrorAddGroup   = 'Fehler - neue Gruppe anlegen';
  rsErrorDelGroup   = 'Fehler - Gruppe l�schen';

  rsImpFileError    = 'Die Datei %s ist keine g�ltige XP Usermanager Import-Datei.';
  rsImpXMLError     = 'Die Datei %s ist keine g�ltig XML-Datei. �berpr�fen Sie die Datei auf Fehler.';
  rsLogfileImport   = 'Datum: %s' + #13#10 + 'Importdatei: %s';
  rsLogfileOK       = 'Konto: %s' + #13#10 + 'Status: OK' + #13#10;
  rsLogfileError    = 'Konto: %s' + #13#10 + 'Status: [%d] %s' + #13#10;
  rsImportError     = 'Es sind Fehler beim Import aufgetreten.' + #13#10 +
    'Die Logdatei wurde gespeichert unter %s' + #13#10 +
    'Wollen Sie die Logdatei jetzt betrachten?';

  //Delete group
  rsCaptionDelGroup = 'Gruppe l�schen';
  rsDoDelGroup      = 'Soll die Gruppe "%s" gel�scht werden?';

  rsUserGroups      = 'Gruppenzugeh�rigkeit';
  rsAccountType     = 'Kontotyp';

  // Listview
  rsPWAge           = 'Passwortalter';
  rsLastLogon       = 'Letzte Anmeldung';
  rsCntLogons       = 'Anmeldungen';
  rsAccountExpires  = 'Konto l�uft ab';
  rsDontExpire      = 'Nein';

  // Tabdialogs
  rsTabAccount      = '&Konto';
  rsTabSettings     = '&Einstellungen';
  rsTabLogin        = '&Login';
  rsTabGroups       = '&Gruppenzugeh�rigkeit';
  rsDlgHomeDir      = 'W�hlen Sie ein Verzeichnis aus...';

  // Choose computer
  rsSelComputer     = 'W�hlen Sie einen Computer aus';

