#include <bits/stdc++.h>
#include "Clase Perro.h"
#include "Clase Establecimiento.h"
#include "Clase FuturoDueno.h"

int main () {
    Perro perro1;
    perro1.imprimirDatos();
    perro1.vacunar();
    perro1.imprimirDatos();
    perro1.sacrificar();
    perro1.imprimirDatos();

    Establecimiento refugio1;
    refugio1.imprimirData();
    refugio1.agendarCita();
    refugio1.tiempoEsp();

    FuturoDueno dueno1;
    dueno1.username();
    dueno1.revisarDatos();
    dueno1.imprimirInfo();
    return 0;
}