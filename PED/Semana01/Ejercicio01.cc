#include <iostream>
#include <cmath>
#include <iomanip>

const float kPi = 3.1416;

float CalcularAreaCirculo(float r){
    float total;
    total = pow(r,2) * kPi;

    return total;
}

int main()
{
    float radio;
    //Invocar
    //CalcularSuma(10,5) + 7;

    //Ejercicio
    //Calcular area de un circulo
    //area= radio * radio * pi
    std::cout<<"Ingrese el radio: "; std::cin>>radio;

    std::cout<<"\nResultado: "<<std::setprecision(4)<<CalcularAreaCirculo(radio);
    return 0;
}