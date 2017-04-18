#ifndef HTMLWriterEnvironment_h
#define HTMLWriterEnvironment_h
#include <iostream>
#include "HTMLWriter.h"

//-----------------------------------------------------------------------------
// Filename: HTMLWriterEnvironment.h
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

class HTMLWriterEnvironment : HTMLWriter{
  public:
    //constructor:
    HTMLWriterEnvironment(std::string filename);

    //writeFile function:
    void writeFile(EnvironmentalCondition ec);

};
#endif
