#ifndef SERPIENTE_H
#define SERPIENTE_H
#include <bits/stdc++.h>
#include "Animal.h"
using namespace std;
class Serpiente : public Animal{
    private:
    bool veneno;
    string paisOrigen;

    public:

    //Constructores
    Serpiente():Animal(), veneno(true), paisOrigen("") {};
    Serpiente(string _nombre, float _peso, int _edad, bool _veneno, string _paisOrigen): Animal(_nombre, _peso, _edad),   veneno(_veneno), paisOrigen(_paisOrigen){};
    //Getters
    bool getVeneno();
    string getPaisOrigen();
    //Setters 
    void setVeneno(bool ven);
    void setPaisOrigen(string pa);
    //Metodos
    void morder();
    void sacrificar();
};

//Getters Serpiente
  bool Serpiente::getVeneno(){
    return veneno;
}
  string Serpiente::getPaisOrigen(){
    return paisOrigen;
}
//Setters Serpiente
  void Serpiente::setVeneno(bool ven){
    veneno=ven;
}
  void Serpiente::setPaisOrigen(string pa){
    paisOrigen=pa;
}
//Metodos Serpiente
void Serpiente::morder(){
  cout<<"¡BITE!"<<endl;
}
void Serpiente::sacrificar(){
  cout<<nombre<<" ha sido sacrificada"<<endl;
  setNombre("0");
  setPeso(0);
  setEdad(0);
  setVeneno("0");
  setPaisOrigen("0");
}

#endif