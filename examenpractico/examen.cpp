#include <iostream>
using namespace std; 

int main (){

    //definir las variables
    double ganancia, descuentoAFP, gananciaAFP;

    cout << "Ingrese su ganancia mensual: ";
    cin>> ganancia;

    //definir las funiones? 
    double calculateAFP(double ganancia);
    
    if (ganancia < 500){
        descuentoAFP = ganancia * 0.5; 
        gananciaAFP = ganancia - descuentoAFP;
    
    }else if (ganancia >= 500 && ganancia <= 1000){
        descuentoAFP = ganancia * 0.7;
        gananciaAFP = ganancia - descuentoAFP;

    }else if (ganancia > 1000){
        descuentoAFP = ganancia * 0.9;
        gananciaAFP = ganancia - descuentoAFP;
    }   
     else{
        descuentoAFP = 0;
    }

    
    cout <<" su descuento con la AFP es: "<< calculateAFP << endl;

    return 0;
}