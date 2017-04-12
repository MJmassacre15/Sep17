//-----------------------------------------------------------------------------
// Filename: HTMLWriterBalance.cpp
// Description: cpp-file for the HTMLWriterBalance
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 06.04.2017
// Last change: 06.04.2017
//-----------------------------------------------------------------------------
#include "HTMLWriter.h"
#include "HTMLWriterBalance.h"
#include <iostream>
#include <fstream>


HTMLWriterBalance::HTMLWriterBalance(std::string filename) : HTMLWriter (filename)
{}

std::string HTMLWriterBalance::writeFile(int lemon, int sugar, int cash, int delta)
{
  std::ofstream balance_html;
  balance_html.open(HTMLWriterBalance::filename_ + ".html");

  balance_html <<"<!DOCTYPE html>" << std::endl;
  balance_html <<"  <html lang='en'>"  << std::endl;
  balance_html <<"  <head>  "<< std::endl;
  balance_html <<"    <meta charset='utf-8'>"  << std::endl;
  balance_html <<"    <meta http-equiv='refresh' content='3'>"  << std::endl;
  balance_html <<"    <title>SEP 2017</title>"  << std::endl;
  balance_html <<"    <style>body{margin: 0px; padding: 0px;}</style>"  << std::endl;
  balance_html <<"  </head>"  << std::endl;
  balance_html <<"  <body>"  << std::endl;
  balance_html <<"    <table>"  << std::endl;
  balance_html <<"      <tbody>"  << std::endl;
  balance_html <<"        <tr>"  << std::endl;
  balance_html <<"          <td><img src='https://palme.iicm.tugraz.at/wiki/images/3/35/Lemon.png' alt='' width='64' height='64' /></td>  "<< std::endl;
  balance_html <<"          <td><strong>Lemons: </strong> "<< lemon <<" </td>  "<< std::endl;
  balance_html <<"        </tr>"  << std::endl;
  balance_html <<"        <tr>"  << std::endl;
  balance_html <<"          <td><img src='https://palme.iicm.tugraz.at/wiki/images/a/a9/Sugar.png' alt='' width='64' height='64' /></td>  "<< std::endl;
  balance_html <<"          <td><strong>Sugar: </strong> "<< sugar << "</td>"<< std::endl;
  balance_html <<"        </tr>"  << std::endl;
  balance_html <<"        <tr>"  << std::endl;
  balance_html <<"          <td><img src='https://palme.iicm.tugraz.at/wiki/images/f/f0/Coins.png' alt='' width='64' height='64' /></td>  "<< std::endl;
  balance_html <<"          <td>"  << std::endl;
  balance_html <<"            <p><strong>Cash: </strong>" << cash <<" $</p>  "<< std::endl;
  balance_html <<"            <p><strong>Delta: </strong>" << delta <<" $</p>  "<< std::endl;
  balance_html <<"          </td> " << std::endl;
  balance_html <<"        </tr>  "<< std::endl;
  balance_html <<"      </tbody>  "<< std::endl;
  balance_html <<"    </table>  "<< std::endl;
  balance_html <<"  </body>  "<< std::endl;
  balance_html <<"</html> " << std::endl;


  balance_html.close();

  return "Balance HTML Datei erfolgreich erstellt!";
}
