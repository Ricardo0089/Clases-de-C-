/*Una escuela quiere que desarrolles un programa que facilite el calculo de los promedios de los estudiantes, el programa debe realizar lo siguiente:
-Pedir el nombre edad y nota de los 5 estudiantes.
-almacenar las notas en un archivo txt para que se pueda consultar posteriormente.
-calcula con funciones para calcular el promedio de los estudiantes.
-analiza la nota y si es > 6, mostrara que e aprobado de lo contrario mostrara reprobado.
*/
#include "./src/def.cpp"
using namespace std;


int main (){

    int opcion;
    int edad;
    float nota;
    string nombre;

    cout << "Bienvenido a nuestro calculadora de promedios"<<endl;
    cout << "porfavor ingrese los datos de el estudiante"<<endl;

    for (int i = 1; i < 5; i++) {
    cout << "Ingrese el nombre de el estudiante: "<<endl;
    cin >> nombre;
    cout << "Ingrese la edad de el estudianter: " << endl;
    cin >> edad;
    cout << "Ingrese la nota de l estudiante (0-10): "<<endl;
    cin >> nota;
    ++i;
    }
    

    return 0;
}