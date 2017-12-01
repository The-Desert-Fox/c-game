#include <iostream>
#include <fstream>
#include "countInventory.h"
using namespace std;

int countInventory(){
  ifstream textfile1;
  textfile1.open("inventoryItems.txt");

  int count = 0;
  string line;
  while(getline(textfile1, line)){
    ++count;
  }
  count=count/3; // how many lines does a single inventory item take (id, name, description)
  textfile1.close();
  return count;
}
