#include <string>

class Wall{
  private:
    std::string wallDescription;
    std::string [] wallItems;

  public:
    int roomobjects;
    Room();
    Room(Wall front, Wall back,Wall left, Wall right);
    look(std::string a);
}
