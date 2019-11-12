# OfficeKeyFix

Unbinds the Office Key AKA "Hyper" or "HYPR" (Shift+Control+Alt+Win) related shortcuts, allowing you to use those shortcuts in other applications.

You will also need to disable the default Office launcher with this command:
`REG ADD HKCU\Software\Classes\ms-officeapp\Shell\Open\Command /t REG_SZ /d rundll32`
Note that is a per-user setting. If you are aware of a global registry key to make this change please let me know.

To manage this as a Windows Service at logon, you can use [NSSM](https://nssm.cc/download) or similar. You will need NSSM 2.2.4-101 or later on Windows 10.
