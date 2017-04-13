#ifndef HTMLWriterEnvironment_h
#define HTMLWriterEnvironment_h
#include <iostream>
//-----------------------------------------------------------------------------
// Filename: HTMLWriterEnvironment.h
// Description: header-file-file for the HTMLWriter
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 06.04.2017
//-----------------------------------------------------------------------------

class HTMLWriterEnvironment : HTMLWriter{
  public:
    HTMLWriterEnvironment(std::string filename);

    void writeFile(EnvironmentalCondition ec);

};
#endif
