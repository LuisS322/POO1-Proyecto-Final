//
// Created by Luis on 2/07/2019.
//

#include "Restaurantes.h"

Restaurantes::Restaurantes():  direccion{}, tcomida{}, Edeld{} {}

Restaurantes::Restaurantes(TipoString n, TipoString d, TipoString t, TipoString e,TipoCaracter color,
                           TipoEntero posX, TipoEntero posY,TipoDoble cr,TipoCaracter f,TipoEntero tm):Objeto(n,color,posX,posY,f,tm){
    calificacionr=cr;
    direccion=d;
    tcomida=t;
    Edeld=e;

}
