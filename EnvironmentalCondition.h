#ifndef EnvironmentalCondition_h
#define EnvironmentalCondition_h
//-----------------------------------------------------------------------------
// Filename: EnvironmentalCondition.h
// Description: header-file for the environmental condition
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 21.03.2017
// Last change: 30.03.2017
//-----------------------------------------------------------------------------


class EnvironmentalCondition
{
  public:
  	//defines the "COVER"-enum, used for sky_cover_
    enum Cover
    {
      SUNNY,
      CLOUDY,
      OVERCAST,
      VERY_OVERCAST
    };
    //defines the "RANK"-enum, used for wind_ and predipitation_
    enum Rank
    {
      NONE,
      LOW,
      MEDIUM,
      HIGH
    };

  private:
  	//init used private variables
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
};
#endif
