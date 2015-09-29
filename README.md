# StackWalkerExeption
Stack trace in C++

This librery is using [StackWalker](http://www.codeproject.com/Articles/11132/Walking-the-callstack) and adds functionality to access the stack trace form the exception after it is thrown.

# Usage
  Add Exception.h and Exception.cpp after adding StackWalker librery to your project and include the header file.
~~~~  
  #include "Exception.h"
  
  try {
       throw Exception("Example exception")
  } catch(Exception& ex) {
       cout << ex.what() << endl;
       cout << ex.getStackTrace() << endl;
  }
~~~~

It is still work in progress.
More feachers will be added and hopefully GCC suport on windows and linux.
