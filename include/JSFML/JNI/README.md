JNI Headers
===========
This directory contains the header files generated by `javah`. These headers should by no means be modified manually, but need to be updated using the `headers` ant target in the main build file every time a signature change is done to Java methods declared using `native`.