#include "Room.h"

using namespace std;

Room::Room() {
  //cout << "Book constructor called" << endl;
}

Room::Room(std::string n_name,std::string n_roomDescription, std::string n_keyword, int n_roomObjects){
  name = n_name;
  roomDescription = n_roomDescription;
  keyword = n_keyword;
  roomObjects = n_roomObjects;
  passed = false;
}

void Room::examine(std::string a){

}

void Room::description(){
  cout << roomDescription << endl;
}

std::ostream& operator<<(std::ostream& out, const Room& y)
{
    return out<< y.name << endl << y.roomDescription << endl  << y.keyword << endl << y.roomObjects << endl << y.passed << endl;
}

std::istream& operator>>(std::istream& in, const Room& r){
  /*
  string n,r,k;
  int o;
  bool p;*/

  //std::getline (in,r.name);
  //std::getline (in,r.roomDescription);
  //std::getline (in,r.keyword);
  //std::getline (in,r.roomObjects);
  //std::getline (in,r.passed);
  return in;
}

Room::~Room(){

}
