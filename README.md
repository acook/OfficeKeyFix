# OfficeKeyFix

Unbinds the Office Key (Shift+Control+Alt+Win) related shortcuts, also known as the "hyper" key combination, allowing you to use Office+W and other shortcuts in other applications. Or just to avoid opening Yammer by accident.

# Shortcuts

Full list of unbound shortcuts and their original behavior (`Office` means `Shift+Control+Alt+Win`):

- `Office`: Opens Office UWP app
- `Office+D`: Opens OneDrive
- `Office+L`: Opens LinkedIn by opening `https://go.microsoft.com/fwlink/?linkid=2044786` (which redirects to `https://www.linkedin.com/?trk=Officekey`) in the default browser
- `Office+N`: Opens OneNote for Windows 10 UWP app
- `Office+O`: Opens Outlook
- `Office+P`: Opens PowerPoint
- `Office+T`: Opens Teams by opening `https://go.microsoft.com/fwlink/?linkid=2044782` (which reditects to `https://teams.microsoft.com/`) in the default browser
- `Office+W`: Opens Word
- `Office+X`: Opens Excel
- `Office+Y`: Opens Yammer by opening `https://go.microsoft.com/fwlink/?linkid=2044904` (which reditects to `https://www.yammer.com/`) in the default browser
- `Office+Space`: Opens the emoji picker

# Build

You'll need to compile the script into a binary, and place it in `C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Startup` so it will run on startup.

[Manual compilation instructions (archived from original repo)](https://web.archive.org/web/20201025005256/https://github.com/anthonyheddings/OfficeKeyFix/issues/1).

# Alternatives

This [branch](https://github.com/acook/OfficeKeyFix/tree/logon) is a complete rewrite of this project which removes the explorer restarting and runs in the background ensuring that explorer doesn't try to reacquire the keybindings. It may be useful as well.

# Authors

Originally by Anthony Heddings, whose [account](https://archive.softwareheritage.org/browse/origin/directory/?origin_url=https://github.com/anthonyheddings/OfficeKeyFix) disappeared years ago. My fork became the new source (presumably) because it just happened to be the oldest.

- @mlidbom     - provided the Visual Studio solution
- @Vechro      - several improvements pulled from their fork
- @jorystewart - dynamic key checks
- @acook       - basic maintenance 

The [logon branch](https://github.com/acook/OfficeKeyFix/tree/logon) was written by me (@acook) with almost nothing remaining of the original.

# License

To my knowledge Heddings did not leave behind a license or any way to be contacted, just released the code and dipped a year or so later without ever responding to a single message.
I believe that this software is useful but that there is no other reasonable way to perform this task in C++ due to the sheer simplicity of it, making it difficult to argue copyrights.
Thus, to maintain continuity for the people forking and using it I am placing further changes under the [BSD license](https://opensource.org/license/bsd-3-clause).
This license was chosen because it is the most permissive license which also includes a non-endorsement clause.
