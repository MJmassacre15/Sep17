#ifndef HTMLWriter_h
#define HTMLWriter_h
//-----------------------------------------------------------------------------
// Filename: HTMLWriter.h
// Description: header-file for the HTMLWriter
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 18.04.2017
//-----------------------------------------------------------------------------

#include <iostream>

//------------------------------------------------------------------------------
// Basisklasse die von HTMLWriterEnvironment und HTMLWriterBalance
// abgeleitet wird
//------------------------------------------------------------------------------
class HTMLWriter{
  public:
    std::string filename_;
    HTMLWriter(std::string filename);

    void writeFile(std::string String);

};
#endif
