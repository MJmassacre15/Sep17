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


HTMLWriterEnvironment::HTMLWriterEnvironment(std::string filename) : HTMLWriter (filename)
{}

std::string HTMLWriterEnvironment::writeFile(EnvironmentalCondition ec)
{
  // std::cout << HTMLWriter::filename_ << std::endl;

  std::ofstream environment_html;
  environment_html.open(HTMLWriterEnvironment::filename_ + ".html");

environment_html <<   "<!DOCTYPE html>";

environment_html <<   "<html lang='en'>";
environment_html <<   "  <head>";
environment_html <<   "    <meta charset='utf-8'>";
environment_html <<   "    <meta http-equiv='refresh' content='3'>";
environment_html <<   "    <title>SEP 2017</title>";
environment_html <<   "    <style>body{margin: 0px; padding: 0px;}</style>";
environment_html <<   "  </head>";
environment_html <<   "  <body>";
environment_html <<   "    <table>";
environment_html <<   "      <tbody>";
environment_html <<   "        <tr>";
environment_html <<   "          <td><strong>Sky cover</strong></td>";
environment_html <<   "          <td></td>";
environment_html <<   "        </tr>";
environment_html <<   "        <tr>";
environment_html <<   "          <td><img src='https://palme.iicm.tugraz.at/wiki/images/3/30/Very_overcast.png' alt='' width='128' height='128' /></td>";
environment_html <<   "          <td>";
environment_html <<   "            <p><strong>Precipitation: </strong>medium</p>";
environment_html <<   "            <p><strong>Temperature: </strong>14.6°C</p>";
environment_html <<   "            <p><strong>Wind: </strong>medium</p>";
environment_html <<   "            <p><strong>Hot: </strong>false</p>";
environment_html <<   "            <p><strong>Rainy: </strong>true</p>";
environment_html <<   "            <p><strong>Stormy: </strong>true</p>";
environment_html <<   "          </td>";
environment_html <<   "        </tr>";
environment_html <<   "      </tbody>";
environment_html <<   "    </table>";
environment_html <<   "  </body>";
environment_html <<   "</html>";

  environment_html.close();

  return "HTML Datei erfolgreich erstellt!";
}
