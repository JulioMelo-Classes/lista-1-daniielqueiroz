// #include "function.h"
#include <array>

#include <iterator>
using std::iter_swap;
using std::string;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*blz!*/
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr ){
  std::string aux;
  
  for(int i = 0; i < arr.size()/2; i++){
    //Backup do ultimo
    aux = arr[arr.size() - 1 - i]; //bem que poderia usar std::swap

    //Trocar o ultimo com o primeiro
    arr[arr.size() - 1 - i] = arr[i];

    //Trocar o primeiro com o backup
    arr[i] = aux;
  }

}
