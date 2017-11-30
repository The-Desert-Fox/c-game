#include "Wall.h";
#include <string>

class Room{
  private:
    Wall front;
    Wall back;
    Wall left;
    Wall right;
    std::string name;

  public:
    std::string roomDescription;
    int roomobjects;
    Room();
    Room(Wall front, Wall back,Wall left, Wall right, std::string name);
    look(std::string a);
}
