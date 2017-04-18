#ifndef HTMLWriterBalance_h
#define HTMLWriterBalance_h
#include <iostream>
#include "HTMLWriter.h"
//-----------------------------------------------------------------------------
// Filename: HTMLWriterBalance.h
// Description: header-file-file for the HTMLWriter
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 06.04.2017
//-----------------------------------------------------------------------------

//------------------------------------------------------------------------------
// HTMLWriter wird eingebunden um als Basisklasse zu dienen
//
//------------------------------------------------------------------------------
class HTMLWriter;

class HTMLWriterBalance : HTMLWriter{
  public:
    HTMLWriterBalance(std::string filename);

    void writeFile(int lemon, int sugar, int cash, int delta);

};
#endif
