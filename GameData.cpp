//------------------------------------------------------------------------------
// Filename: GameData.cpp
// Description: cpp-file for storing the data of the game
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 03.05.2017
// Last change: 03.05.2017
//-----------------------------------------------------------------------------
#include "GameData.h"
#include <iostream>
GameData::GameData(unsigned int lemon_price, unsigned int sugar_price,
  unsigned int cash, unsigned int lemons, unsigned int sugar) :
  lemon_price_(lemon_price),
  sugar_price_(sugar_price),
  cash_(cash),
  lemons_(lemons),
  sugar_(sugar)
{}
//setter
void GameData::setLemonPrice(unsigned int lemon_price)
{
  lemon_price_ = lemon_price;
}

void GameData::setSugarPrice(unsigned int sugar_price)
{
  sugar_price_ = sugar_price;
}
void GameData::setCash(unsigned int cash) {
  cash_ = cash;
}
void GameData::setLemons(unsigned int lemons)
{
  lemons_ = lemons;
}
void GameData::setSugar(unsigned int sugar)
{
  sugar_ = sugar;
}

//getter
unsigned int GameData::getLemonPrice()
{
  return lemon_price_;
}
unsigned int GameData::getSugarPrice()
{
  return sugar_price_;
}
unsigned int GameData::getCash()
{
  return cash_;
}
unsigned int GameData::getLemons()
{
  return lemons_;
}
unsigned int GameData::getSugar()
{
  return sugar_;
}
