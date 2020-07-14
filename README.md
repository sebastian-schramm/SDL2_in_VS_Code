# SDL2 in VS Code

## Getting Started

These instruction will help you to set up and run SDL2 in VS Code on Windows 10.

### Prerequisites

But first you have do download some software.
* [VS Code](https://code.visualstudio.com/docs/?dv=win64user) - To write the code
* [MinGW](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/) - GNU for Windows
* [SDL2](https://libsdl.org/release/SDL2-devel-2.0.12-mingw.tar.gz) and [SDL2_image](https://www.libsdl.org/projects/SDL_image/release/SDL2_image-devel-2.0.5-mingw.tar.gz) - SDL2 Development Libraries for MinGW
* [7zip](https://www.7-zip.org/) - To extract the archives

### Installation

After you downloaded everything you needed, you can install [VS Code](https://code.visualstudio.com/docs/?dv=win64user) and [7zip](https://www.7-zip.org/), if you haven't already installed. After that is done, we need to install [MinGW](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/). You can choose the default installation folder "C:\MinGW", or change it. Later in the installation, you'll see a window called "MinGW Installation Manager". You have to select "ming232-base-bin" and "mingw32-gcc-g++-bin".

[![](https://github.com/sebastian-schramm/SDL2_in_VS-Code/blob/master/images/MinGW.PNG)]()

After that is done, click on the top left corner at "Installation" then "Apply Changes" and hit apply. Be patienc, this can take some time.

After a successful installation, we need to add the MinGW\bin folder to the enviroment variables.
To do so. Open you Control Panel. Go to System->Advanced system settings->Enviroment Variables. A new Window should open.

[![](https://github.com/sebastian-schramm/SDL2_in_VS-Code/blob/master/images/EviromentVariables.PNG)]()

 At System variable, search for "Path" and double klick on it. Now we need to add our path, where we installed MinGW. In my case, I add "C:\MinGW\bin".

[![](https://github.com/sebastian-schramm/SDL2_in_VS-Code/blob/master/images/EditEviromentVariables.PNG)]()

### Confirn functionality

To check if MinGW works, open you cmd.exe and type:

```
g++ --version
```

You should have an output like this below. If not, try to restart you PC.

[![](https://github.com/sebastian-schramm/SDL2_in_VS-Code/blob/master/images/VerifyIfG++Work.png)]()

### Adding SDL2

Now that we know g++ works, we can add the SDL2 files.
Open the [SDL2-devel](https://libsdl.org/release/SDL2-devel-2.0.12-mingw.tar.gz) archive and got to "i686-w64-mingw32" and extract the content to a location. Where you know, you wont delete it. I extracted it to "C:\Development\SDL2_MinGW_32Bit". After that, we open the [SDL2_image-devel](https://www.libsdl.org/projects/SDL_image/release/SDL2_image-devel-2.0.5-mingw.tar.gz) archive and go to "i686-w64-mingw32". Here we do the same thing and extract the content to "C:\Development\SDL2_MinGW_32Bit".

## VS Code

Now its time to test everything in [VS Code](https://code.visualstudio.com/docs/?dv=win64user). If you have'nt worked with VS Code before, you need an extention called "C/C++" from Microsoft.

[![](https://github.com/sebastian-schramm/SDL2_in_VS-Code/blob/master/images/C++Extention.PNG)]()

Next you need to clone this repo, and open the folder "SDLTemplate" in VS Code. Hit "CTRL+SHIF+B" and select Debug. You should see an output like this below.

[![](https://github.com/sebastian-schramm/SDL2_in_VS-Code/blob/master/images/Success.PNG)]()

If so, you can click one the white plus icon on lower right side and type: 

```
.\bin\debug\main.exe
```

Hit enter and a window should open.

[![](https://github.com/sebastian-schramm/SDL2_in_VS-Code/blob/master/images/SuccessWindow.PNG)]()

Congratulation, now you can start programming your first game with SDL2, have fun.
