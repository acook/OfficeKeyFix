# OfficeKeyFix

Unbinds the Office Key (Shift+Control+Alt+Win) related shortcuts, also known as the "hyper" key combination, allowing you to use Office+W and other shortcuts in other applications. Or just to avoid opening Yammer by accident.

# Shortcuts

Full list of unbound shortcuts and their original behavior (`Office` means `Shift+Control+Alt+Win`):


| Shortcut       | Behavior                                                                                                                                                         |
|----------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `Office`       | Open Office UWP app                                                                                                                                              |
| `Office+D`     | Open OneDrive                                                                                                                                                    |
| `Office+L`     | Open LinkedIn by opening `https://go.microsoft.com/fwlink/?linkid=2044786` (which redirects to `https://www.linkedin.com/?trk=Officekey`) in the default browser |
| `Office+N`     | Open OneNote for Windows 10 UWP app                                                                                                                              |
| `Office+O`     | Open Outlook                                                                                                                                                     |
| `Office+P`     | Open PowerPoint                                                                                                                                                  |
| `Office+T`     | Open Teams by opening `https://go.microsoft.com/fwlink/?linkid=2044782` (which reditects to `https://teams.microsoft.com/`) in the default browser               |
| `Office+W`     | Open Word                                                                                                                                                        |
| `Office+X`     | Open Excel                                                                                                                                                       |
| `Office+Y`     | Open Yammer by opening `https://go.microsoft.com/fwlink/?linkid=2044904` (which reditects to `https://www.yammer.com/`) in the default browser                   |
| `Office+Space` | Open the emoji picker                                                                                                                                            |

All the above default shortcuts are *disabled* by this program.

# Install

1. Download latest release (or build yourself)
2. Place it in your startup folder - the global startup folder is `C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Startup`
3. Run program one time or relog to activate it - you may see a little command window pop up while it does its thing and Explorer will restart automatically
4. Done!

# Build

## Visual Studio Solution

There is now a Visual Studio solution supplied.

0. Ensure you have the latest version of Visual Studio - Community Edition is fine (but VS Code isn't!) with C++
1. Download or clone the source code and extract it
2. Double click on OfficeKeyFix.vcxproj to launch
3. Click the `Build` menu item then click `Build Solution`
4. The bottom pane should show you where it placed the binary, but it should be in the `x64` folder of wherever you put the source code

## Manual

[Compilation setup instructions (archived from original repo)](https://web.archive.org/web/20201025005256/https://github.com/anthonyheddings/OfficeKeyFix/issues/1).

# Development Resources

## Microsoft Documentation

- [Virtual-Key Codes](https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes)
- [RegisterHotKey function](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-registerhotkey)
- [UnregisterHotKey function](https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-unregisterhotkey)

# Alternatives

This [branch](https://github.com/acook/OfficeKeyFix/tree/logon) is a complete rewrite of this project which removes the explorer restarting and runs in the background ensuring that explorer doesn't try to reacquire the keybindings. It may be useful as well.

# Authors

Originally by Anthony Heddings, whose [account](https://archive.softwareheritage.org/browse/origin/directory/?origin_url=https://github.com/anthonyheddings/OfficeKeyFix) disappeared years ago. My fork became the new source (presumably) because it just happened to be the oldest.

- @mlidbom     - provided the Visual Studio solution
- @Vechro      - several improvements pulled from their fork
- @jorystewart - dynamic key checks
- @Gh3ttoKinG  - documentation resources
- @acook       - basic maintenance 

The [logon branch](https://github.com/acook/OfficeKeyFix/tree/logon) was written by me (@acook) with almost nothing remaining of the original.

# License

To my knowledge Heddings did not leave behind a license or any way to be contacted, just released the code and dipped a year or so later without ever responding to a single message.
I believe that this software is useful but that there is no other reasonable way to perform this task in C++ due to the sheer simplicity of it, making it difficult to argue copyrights.
Thus, to maintain continuity for the people forking and using it I am placing further changes under the [BSD license](https://opensource.org/license/bsd-3-clause).
This license was chosen because it is the most permissive license which also includes a non-endorsement clause.
