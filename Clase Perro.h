#include <bits/stdc++.h>
using namespace std;

class Perro {
    private:
    string nombre;
    string genero;
    double peso;
    bool vacuna;

    public:
//Constructores
    Perro();
    Perro(string nombre, string genero, double peso, bool vacuna);
//Getters
    string getNombre();
    string getGenero();
    double getPeso();
    bool getVacuna();
//Setters
    void setNombre(string nom);
    void setGenero(string gen);
    void setPeso(double pes);
    void setVacuna(bool vac);
//Metodo 
    void vacunar();
    void imprimirDatos();
    void ladrar();
    void sacrificar();

};


//Constructores de la clase perro
Perro::Perro(){
    nombre = "Firulais";
    genero = "Desconocido";
    peso = 23.16;
    vacuna = false;

}

Perro::Perro(string nom, string gen, double pes, bool vac) {
    nombre=nom;
    genero=gen;
    peso=pes;
    vacuna=vac;
}


//Getters de la clase perro para la variables 
    string Perro::getNombre() {
        return nombre;
    }

     string Perro::getGenero() {
        return genero;
    }

     double Perro::getPeso() {
        return peso;
    }

     bool Perro::getVacuna() {
        return vacuna;
    }


//Setters de la clase perro para las variables 
    void Perro::setNombre(string nom) {
        nombre=nom;
    }

    void Perro::setGenero(string gen) {
        genero = gen;
    }

     void Perro::setPeso(double pes) {
        peso=pes;
    }

     void Perro::setVacuna(bool vac) {
        vacuna=vac;
    }



//Metodos de la clase perro 
void Perro::vacunar() {
    setVacuna(true);
}

void Perro::imprimirDatos() {
    cout<<"Nombre: "<< nombre <<endl;
    cout<<"Genero: "<< genero <<endl;
    cout<<"Peso: "<< peso <<endl;
    if (vacuna == true){
        cout<<"Vacunado: Si" <<endl;
    }
    else if (vacuna == false){
        cout<<"Vacunado: No" <<endl;
    }
}

void Perro::ladrar() {
    cout<<"¡Woof!"<<endl;
}

void Perro::sacrificar() {
    cout<<nombre<<" ha sido sacrificado"<<endl;
    setNombre("0");
    setGenero("0");
    setPeso(0);
    setVacuna(false);
}

//Termina la clase perro

