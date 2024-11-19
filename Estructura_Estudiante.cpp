#include "Estructura_Estudiante.h"

using namespace std;

void recogerInformacion() {

    Estudiante estudiante1;

    estudiante1.setNombre("Gabriel");
    estudiante1.setEdad(20);
    estudiante1.setPromedio(9.5);

    estudiante1.agregarMateria("Matematicas");
    estudiante1.agregarMateria("Fisica");
    estudiante1.agregarMateria("Programacion");

    estudiante1.eliminarMateria("Fisica");

    estudiante1.mostrarEstudiante();

}
