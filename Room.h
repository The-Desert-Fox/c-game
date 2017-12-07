#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;

class Room{
  private:
    std::string name;
    std::string roomDescription;
    std::string keyword;
    int roomObjects;
    bool passed;

  public:
    Room();
    Room(std::string n_name,std::string n_roomDescription, std::string n_keyword, int n_roomObjects);
    void examine(std::string a); // Searchs if you know the keyword
    void description(); // Prints description
    friend std::ostream& operator<<(std::ostream& out, const Room& o);
    friend std::istream& operator>>(std::istream& in, const Room& o);
    ~Room();
};
