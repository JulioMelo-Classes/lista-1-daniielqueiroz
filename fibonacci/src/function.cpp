#include "function.h"

/*
ok
*/
std::vector<unsigned int> fib_below_n( unsigned int n ){
  std::vector<unsigned int> sequencia_fibonacci = {1,1};
  int x = 1, y = 1, aux;
  
  if(n == 1){
    sequencia_fibonacci.clear();
  }else{
    while(true){
      aux = x + y; //poderia usar o próprio vetor
      x = y;
      y = aux;

      if(aux < n)
        sequencia_fibonacci.push_back(aux);
      else
        break;
      
    };
  }
  
  return sequencia_fibonacci;
}
