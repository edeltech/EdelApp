# EdelApp

A Qt application template using the CMake build system, including CTest for unit testing and CPack for installation packages creation.

**This project is currently just an experiment to learn CMake.**

## Supported platforms

EdelApp has been developed and tested on Mac OS X 10.6.8, Qt 4.8.3 and CMake 2.8.9.

## Use the EdelApp template for your next Qt application

Create a new repository for your application and clone it: (where `myapp` is the name of your repository)

`$ git clone git@github.com:<USERNAME>/myapp.git`  
`$ cd myapp`

Add EdelApp as upstream source:

`$ git remote add upstream git@github.com:edeltech/EdelApp.git`  
`$ git fetch upstream`

Checkout the master branch:

`get checkout master`

Now let's configure and build:

`$ cd ..`  
`$ mkdir myapp-build`  
`$ cmake ../myapp`  
`$ make`  

Run the unit tests:

`$ make check`

And finally, create an installation package:

`$ make package`

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