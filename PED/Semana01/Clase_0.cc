/*A partir de ahora se trabajara con archivos con extencion tipo "cc" y sin el uso de "using namespace std", iniciaremos con un tema basico como las funciones
*/
#include <iostream>

/*Las librerias de usuario son muchas funciones que se crean, pero las bibliotecas son aquellas que ya existen*/

//Hacemos una funcion, la definimos y desarrollamos 
int CalcularSuma(int x, int y){
    return x+y;
}


int main (){
    //llamamos la funcion
    CalcularSuma(10, 5);
    return 0;

}
