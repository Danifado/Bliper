#include "HashBliper.hpp"

string List[] = {"Panes", "Cereales", "Frutas", "Verduras", "Lacteos", "Carnes y Proteinas", "Grasas, Aceites y dulces"};

HashMap::HashMap(){
  ctainers = new Cell*[nCtainers];
  for(int i = 0 ; i < nCtainers ; i++){
    ctainers[i] = nullptr;
  }
  count = 0;
}

HashMap::~HashMap(){
  clear_hash();
}

void HashMap::clear_hash(){
  if(empty_hash()){
    cout << "ERROR: \nYa esta vacio" << '\n';
    return;
  }else{
    for(int i = 0 ; i < nCtainers ; i++){
      Cell *ptr = ctainers[i];
      while (ptr != nullptr){
        Cell *oldptr = ptr;
        ptr = ptr -> link;
        delete oldptr;
      }
    }
  }
  count = 0;
}

bool HashMap::empty_hash(){
  return count == 0;
}
void HashMap::put_hash(string key , string val){
  Cell *temp = new Cell
}
