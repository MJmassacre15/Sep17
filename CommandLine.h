//------------------------------------------------------------------------------
// Filename: CommandLine.h
// Description: header-file for the CommadLine check
// Authors: Alexander Brunner, Paul J. Diwiak, Martin Sackl
// Tutor: Roman Walch
// Group: 15626
// Created: 02.05.2017
// Last change: 02.05.2017
//-----------------------------------------------------------------------------
class CommandLine : CommandLine{
  private:
    std::string name_;
  public:
    Echo(std::string name);

    // virtual int execute(GameHandler& game, std::vector<std::string>& params) override;
    virtual int execute(std::vector<std::string>& params) override;
};
