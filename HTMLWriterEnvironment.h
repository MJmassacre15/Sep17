#ifndef HTMLWriterEnvironment_h
#define HTMLWriterEnvironment_h
//-----------------------------------------------------------------------------
// Filename: HTMLWriterEnvironment.h
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

class HTMLWriterEnvironment : HTMLWriter{
  private:
  public:
    //constructor:
    HTMLWriterEnvironment(std::string filename);

    //writeFile function:
    void writeFile(EnvironmentalCondition ec);
};
#endif
