/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void){
  // TODO: Adicione seu código aqui. 
  int m, n;
  int range;

  while(std::cin>>m>>n){
    int soma = 0;
    range = m + n;

    if(n > 0){
      for(int i = m; i < range; i++){
        soma = soma + i;
      }

    }else if(n == 0){
      soma = m;

    }else{
      for(int i = m; i > range; i--){
        soma = soma + i;
      }

    }

    std::cout<<soma<<std::endl;
  }

  return 0;
}
