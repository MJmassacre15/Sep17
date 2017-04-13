#ifndef HTMLWriter_h
#define HTMLWriter_h
#include <iostream>

//-----------------------------------------------------------------------------
// Filename: HTMLWriter.h
// Description: header-file for the HTMLWriter
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 06.04.2017
//-----------------------------------------------------------------------------

class HTMLWriter{
  public:
    std::string filename_;
    HTMLWriter(std::string filename);

    void writeFile(std::string String);


};
#endif
