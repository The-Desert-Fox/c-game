#include <iostream>
#include <fstream>
#include <string>
#include "countInventory.h"
#include "listInventory.h"
using namespace std;

void listInventory(){
  ifstream textfile1;
  textfile1.open("inventoryItems.txt");
  int count = countInventory();

  for(int i=0; i<count; ++i){
    cout << "item " << i << " is in your inventory" << endl;
    //textfile1 >> ;
    //cout <<  << endl;
  }
  textfile1.close();
  //return "";
}
