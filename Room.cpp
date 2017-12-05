#include "Room.h"

using namespace std;

Room::Room() {
  //cout << "Book constructor called" << endl;
}

Room::Room(std::string n_name,std::string n_roomDescription, std::vector<string> n_keywords, int n_roomobjects){
  name = n_name;
  roomDescription = n_roomDescription;
  keywords = n_keywords;
  roomobjects = n_roomobjects;
}

void Room::examine(std::string a){

}

void Room::description(){
  cout << roomDescription << endl;
}

Room::~Room(){

}
