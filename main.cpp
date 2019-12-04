/* Arboles, orden, pre-orden, pos-orden
   Anchura y Profundidad
   Dijkstra y Kruska*/
#include <iostream>
#include "Arbol2.cpp"
#include "kruska.cpp"
#include "profundidad.cpp"



using namespace std;

int main(){
     int opc;

     do{
        cout <<"**Menu**"
               "1)Arboles -> orden, pre-orden, pos-prden\n"
               "2)Anchura\n"
               "3)Profundidad\n"
               "4)Dijkstra\n"
               "5)Kruska\n"
               "6)Salir"
               "Digita la opcion";

        switch(opc){

        case 1:
              arbol2();
            cout << "\n\n";
            break;

        case 2:
            profundidad();
            cout << "\n\n";
            break;

        case 3:
            kruska();
            cout <<"\n\n";
            break;

        default:
            cout << "Salida de programa";
     }

        }while(opc !=4);



    return 0;
}
