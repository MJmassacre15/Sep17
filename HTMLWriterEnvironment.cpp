//-----------------------------------------------------------------------------
// Filename: HTMLWriterEnvironment.cpp
// Description: cpp-file for the HTMLWriterEnvironment
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 06.04.2017
//-----------------------------------------------------------------------------
#include "HTMLWriter.h"
#include "EnvironmentalCondition.h"
#include "HTMLWriterEnvironment.h"
#include <iostream>
#include <fstream>


HTMLWriterEnvironment::HTMLWriterEnvironment(std::string filename) : filename_(filename)
{}

std::string HTMLWriterEnvironment::writeFile(std::string String)
{
  // std::cout << HTMLWriter::filename_ << std::endl;

  std::ofstream environment_html;
  environment_html.open(HTMLWriterEnvironment::filename_ + ".html");

  environment_html << "<!DOCTYPE html>";

  environment_html << "<html lang='en'>";
  environment_html << "  <head>";
  environment_html << "    <meta charset='utf-8'>";
  environment_html << "    <meta http-equiv='refresh' content='3'>";
  environment_html << "    <title>SEP 2017</title>";
  environment_html << "    <style>body{margin: 0px; padding: 0px;}</style>";
  environment_html << "  </head>";
  environment_html << "  <body>" << String << "</body>";
  environment_html << "</html>";

  environment_html.close();

  return "HTML Datei erfolgreich erstellt!";
}
