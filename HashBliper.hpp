#ifndef _HashBliper_hpp_
#define _HashBliper_hpp_
#include <string>
#include <iostream>
#include <fstream>
using namespace std;



class HashMap {
private:

  struct Cell {
    string value;
    string key;
    Cell *link;
  };
  Cell **ctainers;
  const int nCtainers = 7;
  int count;

public:
  HashMap();
  ~HashMap();

  void clear_hash();
  void put_hash(string key , string val);
  string get_hash(string key);
  bool empty_hash();

};




#endif //_HashBliper_hpp_
