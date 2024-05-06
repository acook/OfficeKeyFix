# OfficeKeyFix

Unbinds the Office Key AKA "Hyper" or "HYPR" (Shift+Control+Alt+Win) related shortcuts, allowing you to use those shortcuts in other applications.

# Install

1. Build
2. Place in startup folder
3. Run or reboot

## Disable Office Launcher 

You will also need to disable the default Office launcher with this command:

```
REG ADD HKCU\Software\Classes\ms-officeapp\Shell\Open\Command /t REG_SZ /d rundll32
```

Note that is a per-user setting. If you are aware of a global registry key to make this change please let me know.

## Install as Service

To manage this as a Windows Service at logon, instead of in the startup directory, you can use [NSSM](https://nssm.cc/download) or similar.
You will need NSSM 2.2.4-101 or later on Windows 10.

# Authors

- @acook

This code is a complete rewrite of Office Key Fix and works very differently but it would almost certainly not exist without the prior work of Anthony Heddings and many other people.

# Status

I stopped using Windows as my daily driver in 2020. I now only have aging laptops running Windows and I don't expect to update to Windows 11 at all. Those laptops often spend several months or even a year without even being turned on. So it doesn't seem likely that I will do much feature development on this. But I will merge in improvements if you send them in. Occassionally I will go looking for them, but if you could put them in a pull request explaining what they do and why that would be helpful.

I just did a bit to clean up and improve the old version of the program, as that is what people seem to be using. So I haven't even tested this branch to see if it works still. If you try it and it works for you, let me know!