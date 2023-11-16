#include <bits/stdc++.h>
class FuturoDueno {
    private:
    string nombreD;
    string apellido;
    string calle;
    int numExt;
    int numTel;
    bool patio;
    bool hijos;


    public:
//Constructores 
    FuturoDueno();  
    FuturoDueno(string nombreD, string apellido, string calle, int numExt, int numTel, bool patio, bool hijos);
//Getters 
    string getNombreD();
    string getApellido();
    string getCalle();
    int getNumExt();
    int getNumTel();
    bool getPatio();
    bool getHijos();

//Setters 
    void setNombreD(string nomD);
    void setApellido(string ape);
    void setCalle(string cal);
    void setNumExt(int numE);
    void setNumTel(int numT);
    void setPatio(bool pat);
    void setHijos(bool hij);
//Metodo
    string username();
    string revisarDatos();
    void imprimirInfo();

};

//Constructuores clase FuturoDueño
FuturoDueno::FuturoDueno(){
    nombreD = "Panfilo ";
    apellido = "Perez";
    calle = "Lomas del Valle";
    numExt = 227;
    numTel = 474736;
    patio = false;
    hijos = true;
}

FuturoDueno::FuturoDueno(string nomD, string ape, string cal, int numE, int numT, bool pat, bool hij){
    nombreD = nomD;
    apellido = ape;
    calle = cal;
    numExt = numE;
    numTel = numT;
    patio = pat;
    hijos = hij;
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
        int FuturoDueno::getNumTel(){
        return numTel;
    }
        bool FuturoDueno::getPatio(){
        return patio;
    }
        bool FuturoDueno::getHijos(){
        return hijos;
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
    void FuturoDueno::setNumTel(int numT) {
        numTel = numT;
    }
    void FuturoDueno::setPatio(bool pat) {
        patio = pat;
    }
    void FuturoDueno::setHijos(bool hij) {
        hijos= hij;
    }
//Metodos de la clase FuturoDueño
    string FuturoDueno::username() {
    string user="";
    user+=nombreD.substr(0, 3);
    user+=apellido.substr(0, 3);
    user+=to_string(numExt);
    return user;
}
   string FuturoDueno::revisarDatos() {
    if (patio == true) {
        cout<<"Si eres apto para adoptar" <<endl;
    }
    else if (hijos == false) {
        cout<<"No eres apto para adoptar" <<endl;
    }
}
    void FuturoDueno::imprimirInfo() {
    cout<<"El nombre del Futuro dueño es: "<<nombreD<<apellido<<endl;
    cout<<"La calle del Futuro dueño es:  "<<calle<<numExt<<endl;
    cout<<"El número de telefono del Futuro dueño es: "<<numTel<<endl;
}
//TERMINA LA CLASE FUTURO DUEÑO
