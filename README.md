# qcvTouchUp
Image Editor (work in progress)

## ABOUT:
The qcvTouchUp application is designed to be a light-weight image viewing and editing application that focuses on providing an intuitive interface for performing some of the most common photo editing tasks. The project currently exists as a entry point into learning the ins and outs of the Qt C++ Framework.

## BUILD ENVIRONMENT:
### Qt Environment
The development envoronment consists of Qt Creator 4.9.0 using the Qt 5.12.2 framework. The application was built using the [MSVC 2017](https://doc.qt.io/qt-5/windows.html) 64-bit compiler. The project's .pro file contains sections to autodetect both the MinGW 32-bit and MSVC 64-bit compilers (as well as g++ for Linux) so that the appropriate OpenCV libraries may be linked with the project. Provided OpenCV is compiled with the same compiler used for the project, and the appropriate environment variable is set (OPENCV3_SDK_DIR for Windows base OpenCV directory), the application should build with minimum tweaking.

### OpenCV
Version 3.3.1 of [OpenCV](https://opencv.org/releases/) is linked to this application at runtime. The pre-built libraries may be used, however compilation instructions for [Windows](https://docs.opencv.org/3.3.1/d3/d52/tutorial_windows_install.html) and [Linux](https://docs.opencv.org/3.3.1/d7/d9f/tutorial_linux_install.html) are available as well as basic instructions on [how to setup Qt and Open CV](https://wiki.qt.io/How_to_setup_Qt_and_openCV_on_Windows). The OpenCV libraries should be compiled with the same compiler used to build the core application. Important flags that should be enabled for compulation include but are not limited to: WITH_QT*, WITH_OPENCL*, *_JPEG, *_TIFF, *_PNG, *_WEBP, *core, *highgui, *imgcodecs, *imgproc, as well as the CPU_BASELINE and CPU_DISPATCH optimizations.

### Release
Dynamically linked ... adding now
      
## CONTRIBUTIONS:
Currently Matthew R. Miller has been the only one to contribute to this project. Please visit the qcvTouchUp Wiki page on github for more information.

## LICENSE:     
qcvTouchUp provides an image processing toolset for editing photographs, purposed and packaged for use in a desktop application user environment. Copyright (C) 2018,  Matthew R. Miller released under the GNU General Public License as published by the Free Software Foundation (version 3 of the License). The appropriate licensing files for this and supporting software can be found under the files LICENSE.txt, LICENSE.Qt.txt, and LICENSE.CV.txt.

      