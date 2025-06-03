#include <iostream>
using namespace std;

//planteamos las funciones encima de el int main, por cuestiones de orden dependiendo la situacion

float suma(float uno, float dos){
        float resultado = 0;
        resultado = uno + dos;

        return resultado;    
    }

float resta(float uno, float dos){
        float resultado = 0;
        resultado = uno - dos;

        return resultado;
}

float multiplicacion(float uno, float dos){
        float resultado = 0;
        resultado = uno * dos;

        return resultado;
}

float division (float uno, float dos){
        float resultado = 0;

        if(uno<dos || uno==0 || dos==0){
            resultado=1000;
        }else{
            resultado = uno / dos;
        }

        return resultado;
}

int main(){ //declaramos el cuerpo, las variabnles y desarrrollamios en el main
    float numero1, numero2, numero3=7, numero4=56, sumatoria=0, sumatoria2=0, resultadoResta=0, resultadoMultiplicacion=0, resultadoDivision=0;

    cout<<"Operaciones"<<endl;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>numero1;

    cout<<"Ingrese el segundo numero"<<endl;
    cin>>numero2;
    
    //despues de pedir los numeros, planteamos las operaciones llamando las funciones y poniendo los parametros

    sumatoria = suma(numero1,numero2);
    sumatoria2 = suma(numero3, numero4);
    resultadoResta = resta(numero1, numero2);
    resultadoMultiplicacion = multiplicacion(numero1,numero2);
    resultadoDivision = division(numero1,numero2);

    cout<<"Resultado de la suma: "<<sumatoria<<endl;
    cout<<"Resultado de la segunda suma: "<<sumatoria2<<endl;
    cout<<"Resultado de la resta: "<<resultadoResta<<endl;
    cout<<"Resultado de la multiplicacion: "<<resultadoMultiplicacion<<endl;
    //planteamos una condicion en el caso que el usuario plantee una division que no se pueda realizar.
    if(resultadoDivision=5000){
        cout<<"La division no se puede"<<endl;
    }
    else{
    cout<<"Resultado de la division: "<<resultadoDivision<<endl;
    }


    return 0;
}