#include <iostream>

using namespace std;


    //funciones y clase
    // Es un bloque de codigo que realiza una tarea.


    int sumar (int a,int b ) {
         return a+b;
    }
    int resta (int a,int b ) {
         return a-b;

    }
    float precio (float a, float b){
        return a/b;

    }

  int main ()
  {
      int num1 = 5, num2=3;

      //llamada de la funcion
      int resultado =sumar (num1,num2);
      int resultado2 =resta (num1,num2);
      float resultado3 =precio (num1,num2);


      //mostrar resultado
      cout << "La suma es " << resultado << endl;
      cout << "La Resta es " << resultado2 << endl;
      cout << "El precio es " << resultado3 << endl;

     /* cout << "La suma es :" <<sumar (3,4) << endl;
      cin >> */



    return 0;
}
