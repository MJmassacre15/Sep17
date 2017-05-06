#ifndef HTMLWriterBalance_h
#define HTMLWriterBalance_h
//-----------------------------------------------------------------------------
// Filename: HTMLWriterBalance.h
// Description: header-file-file for the HTMLWriter
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 18.04.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "HTMLWriter.h"

//------------------------------------------------------------------------------
// HTMLWriter wird eingebunden um als Basisklasse zu dienen
//------------------------------------------------------------------------------

class HTMLWriterBalance : HTMLWriter{
  private:
  public:
    //constructor
    HTMLWriterBalance(std::string filename);

    //write function
    void writeFile(int lemon, int sugar, int cash, int delta);
};
#endif
