#ifndef View_h
#define View_h
//------------------------------------------------------------------------------
// Filename: View.h
// Description: header-file for the VIEW
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------

#include <iostream>
#include "EnvironmentalCondition.h"

#define   EXIT_0    "Going out of business!\n"
#define   EXIT_1    "[ERR] Out of memory.\n"
#define   EXIT_2    "[ERR] Wrong usage: ./basic <price_lemonade> "\
                    "<price_lemon> <price_sugar>\n"

#define   ERROR_0   "[ERR] Usage: quit\n"
#define   ERROR_1   "[ERR] Usage: play\n"
#define   ERROR_2   "[ERR] Usage: recipe [lemon] [sugar] [water]\n"
#define   ERROR_3   "[ERR] The sum of parts must be 100.\n"
#define   ERROR_4   "[ERR] Usage: setweather [cover] [precipitation] "\
                    "[temperature] [wind]\n"
#define   ERROR_5   "[ERR] Wrong parameter.\n"
#define   ERROR_6   "[ERR] Unknown command.\n"
#define   ERROR_7   "[ERR] Usage: balance\n"
#define   ERROR_8   "[ERR] Usage: quote\n"

#define   WARN_0    "[WARN] Not enough money. I buy what I can.\n"


class View
{
  public:
    View();
    ~View();

    void view_output(std::string output);
    std::string view_input();

    void write_html_balance(int lemon, int sugar, int cash, int delta);
    void write_html_environment(EnvironmentalCondition &condition);
};
#endif
