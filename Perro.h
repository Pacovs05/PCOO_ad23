#ifndef PERRO_H
#define PERRO_H
#include <bits/stdc++.h>
#include "Animal.h"
using namespace std;
class Perro : public Animal{
    private:
    string raza;
    bool pedigree;
    bool vacuna;

    public:

    //Constructores
    Perro(): Animal(), raza(""), pedigree(true), vacuna(true){};
    Perro(string _nombre, float _peso, int _edad, string _raza, bool _pedigree, bool _vacuna): Animal(_nombre, _peso, _edad), raza(_raza), pedigree(_pedigree), vacuna(_vacuna) {};

    //Getters
    string getRaza();
    bool getPedigree();
    bool getVacuna();

    //Setters
    void setRaza(string ra);
    void setPedigree(bool pe);
    void setVacuna(bool vac);

    //Metodos
    void vacunar();
    void ladrar();

};

    //Getters clase Perro
    string Perro::getRaza(){
      return raza;
    }
    bool Perro::getPedigree(){
      return pedigree;
    }
    bool Perro::getVacuna(){
      return vacuna;
    }

    //Setters clase Perro
    void Perro::setRaza(string ra){
      raza=ra;
    }
    void Perro::setPedigree(bool pe){
      pedigree=pe;
    }
    void Perro::setVacuna(bool va){
      vacuna=va;
    }

    //Metodos de la clase Perro
    void Perro::ladrar(){
      cout<<"¡Woof!"<<endl;
    }

    void Perro::vacunar(){
      if (vacuna == true){
          cout<<"Vacunado: Si" <<endl;
      }
      else if (vacuna == false){
          cout<<"Vacunado: No" <<endl;
      }
    }

#endif