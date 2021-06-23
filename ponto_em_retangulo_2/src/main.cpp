/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

int main(void)
{
  int x1,y1,x2,y2,x3,y3;

  while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
    Ponto IE{x1, y1}, SD{x2, y2}, P{x3, y3};

    if(IE.x != SD.x || IE.y != SD.y){
      if(location_t::BORDER == pt_in_rect( IE, SD, P)){
        std::cout<<"border"<<std::endl;
      }else if(location_t::OUTSIDE == pt_in_rect( IE, SD, P)){
        std::cout<<"outside"<<std::endl;
      }else if(location_t::INSIDE == pt_in_rect( IE, SD, P)){
        std::cout<<"inside"<<std::endl;
      }else{
        std::cout<<"error"<<std::endl;
      }
    }
    
  }

  return 0;
}
