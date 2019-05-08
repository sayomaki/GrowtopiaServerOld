# Growtopia Server

### WARNING: Deprecated. This fork of GrowtopiaServer will be no longer maintained, has much outdated code inside. Please head over to the [main repository here](https://github.com/GrowtopiaNoobs/GrowtopiaServer).

First Growtopia Private Server made with ENet.
Forked and edited to support other compilers and platforms.

Original code can be found [here](https://github.com/GrowtopiaNoobs/GrowtopiaServer)

**NOTE: This version uses SHA256 for hashing password, and thus player files (those in the player folder) from GrowtopiaNoob's version will NOT be usable with this version of the server. Please remove them and recreate your GrowID**

## Download
1. Head over to the [Releases](https://github.com/willi123yao/GrowtopiaServer/releases) to obtain the server executable according to your OS.
2. Setup the server by following the instructions [over at GrowtopiaNoob's wiki](https://github.com/GrowtopiaNoobs/GrowtopiaServer/wiki/Basic-setup)
3. Start the server by running the file as shown below:
* Windows: Double click the exe and you are ready to go.
* Linux: Open a terminal window in the server folder and type `$ ./server-linux`
* MacOS: Open a terminal window in the server folder and type `$ ./server-mac`

## Compiling / Build Instructions
### MacOS
1. Install MacOS XCode build tools if you have not done so `$ xcode-select --install`
2. Install ENet from brew if you have brew installed `$ brew install enet` or from the official website (http://enet.bespin.org/Installation.html)
3. Clone or download this project and open a terminal window in that folder.
4. Run this command to build the server executable (`$ g++ -o server server.cpp -std=c++11 -lenet`)
5. Now you have your working executable, follow instructions from the [wiki here](https://github.com/GrowtopiaNoobs/GrowtopiaServer/wiki/Basic-setup) to setup your server
6. Start the server by opening terminal window in new server folder and running `$ ./server`

### Linux
1. Make sure you have the build tools ready for installation. You can download them depending on your distribution.
  * For Ubuntu or Debian-based distributions, simply open a terminal window and type in the command (`$ sudo apt-get install build-essential`)
  * Other distributions, please refer to your package manager and install the one containing g++ and gcc
2. Install ENet from here (http://enet.bespin.org/Installation.html)
3. Clone or download this project and open a terminal window in that folder.
4. Run this command to build the server executable (`$ g++ -o server server.cpp -std=c++11 -lenet`)
5. Now you have your working executable, follow instructions from the [wiki here](https://github.com/GrowtopiaNoobs/GrowtopiaServer/wiki/Basic-setup#setting-up-http-server) to setup your server
6. Start the server by opening terminal window in new server folder and running `$ ./server`


### Windows
1. You will need to use MinGW to build this project, and ensure that the files are in your PATH.
2. After installation, clone or download this project and open a command prompt window in that folder.
3. Run this command to build the server executable (`$ g++ -o server server.cpp -std=c++11 -lenet -lws2_32 -lwinmm`)
4. Now you have your working executable, follow instructions from the [wiki here](https://github.com/GrowtopiaNoobs/GrowtopiaServer/wiki/Basic-setup#setting-up-http-server) to setup your server
5. Start the server by running the `server.exe` program in your new folder after setup.

## License
This project has been published under GNU AFFERO GPL license, so you need to **publish whole source code and citate orginal authors name, even if you are using your server as service**!

## Contributing
Feel free to submit any PRs for any code edits, and for issues if not related to compilation/building please direct them to the [main repo](https://github.com/GrowtopiaNoobs/GrowtopiaServer/issues)
