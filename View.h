#ifndef View_h
#define View_h
#include <iostream>
#include "EnvironmentalCondition.h"
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
    ~View();

    void view_output(std::string output);
    std::string view_input();

    void write_html_balance(int lemon, int sugar, int cash, int delta);
    void write_html_environment(EnvironmentalCondition &condition);
};
#endif
