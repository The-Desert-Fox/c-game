#include "Inventory.h";
#include "Room.h";
#include "Wall.h";
#include <string>

class Player{
  private:
    std::string name;
    int location; // Room id
    Inventory bag;

  public:
    walk(std::string a);
    interact(std::string a);
    look(std::string a);
}
