//-----------------------------------------------------------------------------
// Filename: HTMLWriter.cpp
// Description: cpp-file for the HTMLWriter
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 18.04.2017
//-----------------------------------------------------------------------------

#include "HTMLWriter.h"
#include <iostream>
#include <fstream>


HTMLWriter::HTMLWriter(std::string filename) : filename_(filename)
{}

//------------------------------------------------------------------------------
// HTML Code für die Seite plus einen Counter der alle 3 Sekunden die Seite
// aktualisiert und die HTML Seite gleich ausgibt/schreibt
//
//------------------------------------------------------------------------------
void HTMLWriter::writeFile(std::string String)
{
  std::ofstream basic_html;
  basic_html.open(HTMLWriter::filename_);

  if (basic_html != 0)
  {
    basic_html <<  " <!DOCTYPE html>";
    basic_html <<  " <html lang='en'>";
    basic_html <<  " <head>";
    basic_html <<  " <meta charset='utf-8'>";
    basic_html <<  " <meta http-equiv='refresh' content='3'>";
    basic_html <<  " <title>SEP 2017</title>";
    basic_html <<  " <style>body{margin: 0px; padding: 0px;}</style>";
    basic_html <<  " </head>";
    basic_html <<  " <body>" << String << "</body>";
    basic_html <<  " </html>";
  }
  basic_html.close();
}
