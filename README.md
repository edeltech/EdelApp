# EdelApp

A Qt application template using the CMake build system, including CTest for unit testing and CPack for installation packages creation.

**This project is currently just an experiment to learn CMake.**

## Supported platforms

EdelApp has been developed and tested on Mac OS X 10.6.8, Qt 4.8.3 and CMake 2.8.9.

## Give it a try

Get the code:

<pre>
$ git clone git@github.com:edeltech/EdelApp.git
</pre>

Configure and build (out-of-source):

<pre>
$ mkdir EdelApp-build
$ cd EdelApp-build
$ cmake ../EdelApp
$ make
</pre>

Run the unit tests:

<pre>
$ make check
</pre>

And finally, create an installation package:

<pre>
$ make package
</pre>

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

## License

See LICENSE file.
