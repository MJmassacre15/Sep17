#ifndef EnvironmentalCondition_h
#define EnvironmentalCondition_h

//-----------------------------------------------------------------------------
// Filename: EnvironmentalCondition.h
// Description: -
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Philipp Hafner
// Group: 15626
// Created: 21.03.2017
// Last change: 21.03.2017
//-----------------------------------------------------------------------------


class EnvironmentalCondition{

  public:
    enum Cover
    {
      SUNNY, 
      CLOUDY, 
      OVERCAST, 
      VERY_OVERCAST
    };
  
    enum Rank
    {
      NONE, 
      LOW, 
      MEDIUM, 
      HIGH
    };
      
  private:
    Cover sky_cover_;
    Rank predipitation_;
    float temperature_;
    Rank wind_;
    
  public:
    //constructor:
    EnvironmentalCondition(Cover sky_cover, Rank predipitation, float temperature, Rank wind);
    
    //methods:
    bool isItHot();
    bool isItRainy();
    bool isItStormy();

    //setter: 
    void setSkyCover(Cover cover);
    void setPredipitation(Rank rank);
    void setTemperature(float temperature);
    void setWind(Rank rank);

    //getter: 
    Cover getSkyCover();
    Rank getPredipitation();
    float getTemperature();
    Rank getWind();

    void printVal();


};
#endif