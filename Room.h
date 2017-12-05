#include "Wall.h";
#include <string>

class Room{
  private:
    std::string name;
    std::string roomDescription;
    int roomobjects;

  public:
    Room();
    Room(Wall front, Wall back,Wall left, Wall right, std::string name);
    look(std::string a);
}
