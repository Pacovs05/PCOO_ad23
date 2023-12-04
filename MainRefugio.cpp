//#include <bits/stdc++.h> Es una libreria que contiene varias librerias y se usa para optimizar el codigo y no tener tantas lineas de include
//Librerias
#include <bits/stdc++.h>
#include "Serpiente.h"
#include "FuturoDueno.h"
#include "Perro.h"
using namespace std;

int main(){
  string nombre, apellido, calle, numTel;
  int numExt;
  cout << "Nombre: " << endl;
  cin >> nombre;
  cout << "Apellido: " << endl;
  cin >> apellido;
  cout <<"Calle: "<<endl;
  cin >> calle;
  cout << "Numero Exterior: "<<endl;
  cin >> numExt;
  cout << "Numero de telefono: " << endl;
  cin >> numTel;

  // Crear un objeto de la clase FuturoDueno
  FuturoDueno futuroDueno(nombre, apellido, calle, numExt, numTel);

  // Imprimir información del FuturoDueno
  futuroDueno.imprimirInfo();

  // Agregar un perro
  futuroDueno.agregarPerro("Max", 10.5, 3, "Labrador", true, true);
  futuroDueno.agregarPerro("Hunter", 25.3, 6, "Pastor Belga", true, true);
  // Agregar una serpiente
  futuroDueno.agregarSerp("Slippy", 2.5, 2, true, "Boa Constrictor");
  futuroDueno.agregarSerp("Camaron", 3.5, 9, true, "Cascabel");
  // Adoptar un perro
  cout<<"¿Quieres adoptar un perro? (0 para false/ 1 para true)"<<endl;
  bool adop, tipo;
  cin >> adop;
  if(adop==true) {
    futuroDueno.mostrarPerro(0);
    futuroDueno.mostrarPerro(1);
    cout<<"¿Que perro quieres adoptar? 0 o 1"<<endl;
    cin>>tipo;
    if (tipo==0){
        cout<<"Adoptaste a Max"<<endl;
        futuroDueno.adoptar(true);
    } else {
      if (tipo==1){
      cout<<"Adoptaste a Hunter"<<endl;
      futuroDueno.adoptar(true);
      }
    }
  } else {
    cout<<"¿Quieres adoptar una serpiente? (0 para false/ 1 para true)"<<endl;
    cin >> adop;
    if(adop==true) {
      futuroDueno.mostrarSerp(0);
      futuroDueno.mostrarSerp(1);
      cout<<"¿Que serpiente quieres adoptar? 0 o 1"<<endl;
      cin>>tipo;
      if (tipo==0){
          cout<<"Adoptaste a Slippy"<<endl;
          futuroDueno.adoptar(false);
      } else {
        if (tipo==1){
        cout<<"Adoptaste a Camaron"<<endl;
        futuroDueno.adoptar(false);
        }
      }
      
      }
    }
  return 0;
}
