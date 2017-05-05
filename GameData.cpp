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


GameData::GameData(unsigned int lemon_price, unsigned int sugar_price,
  unsigned int cash, unsigned int lemons, unsigned int sugar, int balance,
  int current_lemonade[3], unsigned int temperature) :
    lemon_price_(lemon_price),
    sugar_price_(sugar_price),
    cash_(cash),
    lemons_(lemons),
    sugar_(sugar),
    balance_(balance),
    current_lemonade_(current_lemonade),
    temperature_(temperature)
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
void GameData::setBalance(int balance)
{
  balance_ = balance;
}
void GameData::setCurrentLemonade(int current_lemonade[3])
{
  current_lemonade_ = current_lemonade;
}
void GameData::setTemperature(int temperature)
{
  temperature_ = temperature;
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
int GameData::getBalance()
{
  return balance_;
}
int GameData::setCurrentLemonade()
{
  return current_lemonade_;
}
void GameData::setTemperature()
{
  return temperature_;
}
