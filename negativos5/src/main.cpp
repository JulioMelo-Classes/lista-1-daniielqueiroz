#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void){ 
  // TODO: Adicione aqui seu código.
  int x;
  int count = 0;

  for(int i = 0; i < 5; i++){
    std::cin>>x;
    
    if(x < 0)
     count++;
  }
  
  std::cout<<count;

  return 0;
}
