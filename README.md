# Overview:
- Downloads and moves c.cmd, p.ps1 and l.ps1 file to windows startup directory from web or PixelDrain
- c.cmd will secretly run p.ps1
- p.ps1 will log keystrokes
- l.ps1 will email the logs every startup and every hour [via SMTP]
  - sends logs hourly, regardless of system time
