#ifndef GameData_h
#define GameData_h
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
    unsigned int lemon_price_; //set at the beginning of the game
    unsigned int sugar_price_; //set at the beginning of the game
    unsigned int cash_;        //current money
    unsigned int lemons_;      //number of lemons in the storage
    unsigned int sugar_;       //amount of sugar in the storage
    int balance_;              //
    int [3] current_lemonade_; //lemonade of this round
    unsigned int temperature_; //temperature (especially for forecast)


  public:
    //constructor
    GameData(unsigned int lemon_price, unsigned int sugar_price,
    unsigned int cash, unsigned int lemons, unsigned int sugar,
    int balance, int[3] current_lemonade, unsigned int temperature);

    //setter
    void setLemonPrice(unsigned int lemon_price);
    void setSugarPrice(unsigned int sugar_price);
    void setCash(unsigned int cash);
    void setLemons(unsigned int lemons);
    void setSugar(unsigned int sugar);
    void setBalance(int balance);
    void setCurrentLemonade(int current_lemonade[3]);
    void setTemperature(unsigned int temperature);

    //getter
    unsigned int getLemonPrice();
    unsigned int getSugarPrice();
    unsigned int getCash();
    unsigned int getLemons();
    unsigned int getSugar();
    int getBalance();
    int[3] getCurrentLemonade();
    unsigned int getTemperature();
};
#endif
