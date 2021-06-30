/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

/*
ok!
*/
int main(void){
  int n;
  int count[5] = {0};
  double quantidade = 0;

  while(std::cin>>n){
    if(n >= 0 && n < 25){
      count[0]++;
    }else if(n >= 25 && n < 50){
      count[1]++;
    }else if(n >= 50 && n < 75){
      count[2]++;
    }else if(n >= 75 && n < 100){
      count[3]++;
    }else{
      count[4]++;
    }

    quantidade++;
  }
 
  for(int i = 0; i < 5; i++){
    double porcentagem = (count[i]/quantidade) * 100;
    std::cout<<setprecision(4)<<porcentagem<<std::endl;
  }

  return 0;
}
