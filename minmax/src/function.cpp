#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
/*
ok
*/
std::pair<int,int> min_max( int V[], std::size_t n ){
    std::pair<int, int> indices;

    int valor_max = V[0];
    int valor_min = V[0];

    if(n == 0){
      indices.first = -1;
      indices.second = -1;
    }else{
      for(int i = 0; i < n; i++){
        if(V[i] >= valor_max){
          valor_max = V[i]; //não precisava ficar guardando essa variável, mas blz
          indices.second = i;
        }
        if(V[i] < valor_min){
          valor_min = V[i];
          indices.first = i;
        }
      }  
    }

    return indices;
}
