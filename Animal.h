#ifndef ANIMAL_H
#define ANIMAL_H
#include <bits/stdc++.h>
using namespace std;
class Animal {
    protected:
    string nombre;
    float peso;
    int edad;

    public:
//Constructores
    Animal();
    Animal(string _nombre, float _peso, int _edad): nombre(_nombre), peso(_peso), edad(_edad){};
//Getters 
    string getNombre();
    float getPeso();
    int getEdad();
//Setters
    void setNombre(string nom);
    void setPeso(float pe);
    void setEdad(int ed);
};

//Constructores Animal
Animal::Animal(){
  nombre="";
  peso=0;
  edad=0;
}
//Getters Animal
string Animal::getNombre(){
  return nombre;
}

float Animal::getPeso(){
  return peso;
}
int Animal::getEdad(){
  return edad;
}

void Animal::setNombre(string nom){
  nombre=nom;
}
void Animal::setPeso(float pe){
  peso=pe;
}
void Animal::setEdad(int ed){
  edad=ed;
}

#endif