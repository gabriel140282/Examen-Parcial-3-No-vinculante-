#include <stdio.h>
#include "Estructura_Estudiante.h"

// Implementación de la función mostrarEstudiante
void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}
