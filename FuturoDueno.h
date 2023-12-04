#ifndef FUTURODUENO_H_
#define FUTURODUENO_H_
#include <bits/stdc++.h>
#include "Animal.h"
#include "Perro.h"
#include "Serpiente.h"
using namespace std;
class FuturoDueno {
    private:
    string nombreD;
    string apellido;
    string calle;
    int numExt;
    string numTel;
    Perro perros[1000];
    Serpiente serpientes[1000];
    int pos1; // contador posicion perros
    int pos2; // contador posicion serpientes

    public:
//Constructores 
    FuturoDueno(): nombreD(""), apellido(""), calle(""), numExt(0), numTel(""), pos1(0), pos2(0) {};
    FuturoDueno(string nombreD, string apellido, string calle, int numExt, string numTel);
    
//Getters 
    string getNombreD();
    string getApellido();
    string getCalle();
    int getNumExt();
    string getNumTel();

//Setters 
    void setNombreD(string nomD);
    void setApellido(string ape);
    void setCalle(string cal);
    void setNumExt(int numE);
    void setNumTel(string numT);

//Metodo

    void adoptar(bool);
    void imprimirInfo();
    void agregarPerro(string , float , int , string , bool , bool);
    void agregarSerp(string , float , int , bool, string);
    void mostrarSerp(int);
    void mostrarPerro(int);
};

void FuturoDueno::mostrarPerro(int pos) {
  cout << "Nombre: " << perros[pos].getNombre() << endl;
  cout << "Peso: " << perros[pos].getPeso() << endl;
  cout << "Edad: " << perros[pos].getEdad() << endl;
  cout << "Raza: " << perros[pos].getRaza() << endl;
  cout << "Pedigree: " << perros[pos].getPedigree() << endl;
  cout << "Vacuna: " << perros[pos].getVacuna() << endl;
}

void FuturoDueno::mostrarSerp(int pos) {
  cout << "Nombre: " << serpientes[pos].getNombre() << endl;
  cout << "Peso: " << serpientes[pos].getPeso() << endl;
  cout << "Edad: " << serpientes[pos].getEdad() << endl;
  cout << "Raza: " << serpientes[pos].getVeneno() << endl;
  cout << "Pedigree: " << serpientes[pos].getPaisOrigen() << endl;
}

FuturoDueno::FuturoDueno(string nomD, string ape, string cal, int numE, string numT){
    nombreD = nomD;
    apellido = ape;
    calle = cal;
    numExt = numE;
    numTel = numT;
    pos1=0;
    pos2=0;

}

//Getters de la clase FuturoDueño
    string FuturoDueno::getNombreD(){
        return nombreD;
    }
    string FuturoDueno::getApellido(){
        return apellido;
    }
    string FuturoDueno::getCalle(){
        return calle;
    }
    int FuturoDueno::getNumExt(){
        return numExt;
    }
    string FuturoDueno::getNumTel(){
        return numTel;
    }

//Setters de la clase FuturoDueño
    void FuturoDueno::setNombreD(string nomD) {
        nombreD = nomD;
    }  
    void FuturoDueno::setApellido(string ape) {
        apellido = ape;
    }
    void FuturoDueno::setCalle(string cal) {
        calle = cal;
    }
    void FuturoDueno::setNumExt(int numE) {
        numExt = numE;
    }
    void FuturoDueno::setNumTel(string numT) {
        numTel = numT;
    }

//Metodos de la clase FuturoDueño
   void FuturoDueno::adoptar(bool adop) {
     if (adop == true){
         cout<<"¡Adpotaste un perro!" <<endl;
     }
     else if (adop == false){
         cout<<"¡Adoptaste una serpiente!" <<endl;
     }
}
    void FuturoDueno::imprimirInfo() {
    cout<<"El nombre del Futuro dueño es: "<<nombreD<<" "<<apellido<<endl;
    cout<<"La calle del Futuro dueño es:  "<<calle<<" "<<numExt<<endl;
    cout<<"El número de telefono del Futuro dueño es: "<<numTel<<endl;
}
void FuturoDueno::agregarPerro(string _nombre, float _peso, int _edad, string _raza, bool _pedigree, bool _vacunar) {
   perros[pos1] = Perro(_nombre, _peso, _edad, _raza, _pedigree, _vacunar);
   pos1++;
}
void FuturoDueno::agregarSerp(string _nombre, float _largo, int _edad, bool _venenosa, string _especie) {
   serpientes[pos2] = Serpiente(_nombre, _largo, _edad, _venenosa, _especie);
   pos2++;
}

//TERMINA LA CLASE FUTURO DUEÑO

#endif
