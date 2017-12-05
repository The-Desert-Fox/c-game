#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Room{
  private:
    std::string name;
    std::string roomDescription;
    std::vector<string> keywords;
    int roomobjects;

  public:
    Room();
    Room(std::string n_name,std::string n_roomDescription, std::vector<string> n_keywords, int n_roomobjects);
    void examine(std::string a); // Searchs if you know the keyword
    void description(); // Prints description
    ~Room();
};
