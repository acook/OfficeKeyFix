# OfficeKeyFix

Unbinds the Office Key (Shift+Control+Alt+Win) related shortcuts, allowing you to use Office+W in other applications.

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
