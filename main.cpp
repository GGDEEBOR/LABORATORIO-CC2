#include <iostream>
#include "DynamicArray.h"
#include "Jugador.h"

using namespace std;

int main() {

   Jugador j1("Paolo", 9, "Peru", "Delantero");
   Jugador j2("Jose Olaya", 99, "Brasil", "Delantero");
   Jugador j3("Pedro Gallese", 1, "Peru", "Arquero");
   Jugador j4("Jose de San Martin", 14, "Peru", "Mediocampista");
    
   
    
   Person p1("Edson", 12345);
   cout <<"Imprime al objeto p1 de la clase Person: "<< endl;
   cout << endl;
   cout << p1 << endl; 
   cout << "------------------------------------------" << endl;
   cout << endl; 
   
   
   
   cout <<"Imprime al objeto j1 de la clase Jugador: "<< endl;
   cout << endl;
   cout << j1 << endl;
   cout << "----------------------------------------------" << endl;
   cout << endl;
   
   
   Jugador arr[] = {j1, j2, j3, j4};

   int tam = sizeof(arr)/sizeof(arr[0]); 


   DynamicArray<Jugador> p(arr, tam);
   
  // p.print();
  
   cout <<"Imprime al objeto p de la clase DynamicArray: "<< endl;
   cout << endl;
   cout << p << endl;
   cout << endl;


    return 0;
}
