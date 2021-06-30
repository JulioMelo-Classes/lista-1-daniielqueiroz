#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

/*
ok!
*/
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P ){
  location_t where_is;
  bool borda = false;

  if(P.x == IE.x || P.x == SD.x || P.y == IE.y || P.y == SD.y)
    borda = true;

  if(P.x >= IE.x && P.x <= SD.x){
    if(P.y >= IE.y && P.y <= SD.y)
      borda == true ? where_is = BORDER : where_is = INSIDE;
    else 
     where_is = OUTSIDE;
  }else{
    where_is = OUTSIDE;
  }

  return where_is;
}
