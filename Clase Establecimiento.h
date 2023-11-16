#include <bits/stdc++.h>
using namespace std;
class Establecimiento {
    private: 
    string ubicacion;
    int numPerros;
    bool estilista;
    int dia;
    int hora;
    int minuto;

    public:
//Constructores
    Establecimiento();
    Establecimiento(string ubicacion, int numPerros, bool estilista, int dia, int hora, int minuto);
//Getters 
    string getUbicacion ();
    int getNumPerros ();
    bool getEstilista ();
    int getDia ();
    int getHora ();
    int getMinuto ();
//Setters
    void setUbicacion (string ubi);
    void setNumPerros(int numP);
    void setEstilista(bool est);
    void setDia (int di);
    void setHora (int ho);
    void setMinuto(int min);
//Metodo
    void imprimirData();
    void agendarCita();
    void tiempoEsp();
};

//Contructores clase Establecimiento
    Establecimiento::Establecimiento() {
        ubicacion = "Colinas de San Javier";
        numPerros = 11;
        estilista = true;
        dia = 0;
        hora = 0;
        minuto = 0;
    }

    Establecimiento::Establecimiento(string ubi, int numP, bool est, int di, int ho, int min) {
        ubicacion = ubi;
        numPerros = numP;
        estilista = est;
        dia = di;
        hora = ho;
        minuto = min;
    }


//Getters clase Establecimiento
    string Establecimiento::getUbicacion() {
        return ubicacion;
    }
    int Establecimiento::getNumPerros() {
        return numPerros;
    }
    bool Establecimiento::getEstilista() {
        return estilista;
    }
    int Establecimiento::getDia() {
        return dia;
    }
    int Establecimiento::getHora() {
        return hora;
    }
    int Establecimiento::getMinuto() {
        return minuto;
    }


//Setters clase Establecimiento
    void Establecimiento::setUbicacion(string ubi) {
        ubicacion = ubi;
    }
    void Establecimiento::setNumPerros(int numP) {
        numPerros = numP;
    }
    void Establecimiento::setEstilista(bool est) {
        estilista=est;
    }
    void Establecimiento::setDia(int di) {
        dia=di;
    }
    void Establecimiento::setHora(int ho) {
        hora=ho;
    }
    void Establecimiento::setMinuto(int min) {
        minuto=min;
    }

//Metodos clase Establecimiento
    void Establecimiento::imprimirData() {
        cout<<"El refugio esta en: "<< ubicacion <<endl;
        cout<<"Hay "<<numPerros<<" perros"<<endl;
            if (estilista == true){
        cout<<"Estilista: Si" <<endl;
    }
    else if (estilista == false){
        cout<<"Estilista: No" <<endl;
    }
    }

    void Establecimiento::agendarCita() {
        if (hora>18) {
            int h2;
            cout << "Es muy tarde, ingresa una hora mas temprano" << endl;
            cin >> h2 ;
            hora=h2;
        }
    }

void Establecimiento::tiempoEsp () {
    int acum=0;
    for (int i=0;i<numPerros;i++) {
        acum+=0.5;
    }
    cout << "Se tardaran " << acum << " horas" << endl;
}

//Termina la clase Establecimiento
