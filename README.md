# EdelApp

A Qt application template using the CMake build system, including CTest for unit testing and CPack for installation packages creation.

**This project is currently just an experiment to learn CMake.**

## Supported platforms

EdelApp has been developed and tested on Mac OS X 10.10.3, Qt 5.5 and CMake 3.2.2.

## Setup your environment

	export CMAKE_PREFIX_PATH="$CMAKE_PREFIX_PATH:<path_to>/Qt/5.5/clang_64"

## Give it a try

Get the code:

	$ git clone git@github.com:edeltech/EdelApp.git

Configure and build (out-of-source):

	$ mkdir EdelApp-build
	$ cd EdelApp-build
	$ cmake ../EdelApp
	$ make

Run the unit tests:

	$ make check

And finally, create an installation package:

	$ make package

## What's Next ?

Read through the source code and CMake files you just checked out and build on it !

## Authors

* [Jean-Pierre Gehrig, Edeltech Sarl](http://www.edeltech.ch/about)
* [Samuel Gaist, Edeltech Sarl](http://www.edeltech.ch/about)

## Thank you

* Thanks to [Mike McQuaid](http://mikemcquaid.com/2012/01/04/deploying-qt-applications-with-deployqt4/) for his DeployQt4 module and the [Fabula](https://github.com/mikemcquaid/Fabula/blob/master/CMakeLists.txt) example.

## Changelog

#### 0.1.0 (Jan 7, 2013)

* Initial release

#### 0.2.0 (Jun 10, 2015)

* Update to Qt5

## License

See LICENSE file.
