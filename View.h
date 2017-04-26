#ifndef View_h
#define View_h
#include <iostream>
//------------------------------------------------------------------------------
// Filename: View.h
// Description: header-file for the VIEW
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------


class View{
  public:
    View();

    void view_output(std::string output);
    std::string view_input();
};
#endif
