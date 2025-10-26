#include <iostream>
//spiral mechanism

namespace box{
  int length;
  std::string field;
  bool loop;
}

int main(){
  using namespace box;
  loop = true;
  length = 10;
  field = "#";
  std::cout << field;

  while (loop==true){
    using namespace box;
    for(int i = 1; i < length; i++){
      std::cout << field;
      field = " " + field;
    }
    for (int i = 1; i < length; i++){
      field.erase(0, 1);
      std::cout << field;
    }
  }
  return 0;
}