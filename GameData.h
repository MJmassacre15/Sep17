#ifndef GameData_h
#define GameData_h
#include <iostream>
//------------------------------------------------------------------------------
// Filename: GameData.h
// Description: header-file for storing the data of the game
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 03.05.2017
// Last change: 03.05.2017
//-----------------------------------------------------------------------------
class GameData
{
  private:
    unsigned int lemon_price_;
    unsigned int sugar_price_;
    unsigned int cash_;
    unsigned int lemons_;  //number of lemons in the storage
    unsigned int sugar_;   //amount of sugar in the storage
    int balance_;

  public:
    //constructor
    GameData(unsigned int lemon_price, unsigned int sugar_price,
      unsigned int cash, unsigned int lemons, unsigned int sugar,
    int balance);

    //setter
    void setLemonPrice(unsigned int lemon_price);
    void setSugarPrice(unsigned int sugar_price);
    void setCash(unsigned int cash);
    void setLemons(unsigned int lemons);
    void setSugar(unsigned int sugar);
    void setBalance(int balance);

    //getter
    unsigned int getLemonPrice();
    unsigned int getSugarPrice();
    unsigned int getCash();
    unsigned int getLemons();
    unsigned int getSugar();
    int getBalance();
};
#endif
