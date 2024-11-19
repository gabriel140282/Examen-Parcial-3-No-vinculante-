#include <stdio.h>
#include <string.h>
#include "Estructura_Estudiante.h"

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);

    printf("Materias inscritas:\n");
    for (int i = 0; i < estudiante.numMaterias; i++) {
        printf("%d. %s\n", i + 1, estudiante.materias[i]);
    }
}

void agregarMateria(struct Estudiante* estudiante, const char* materia) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->numMaterias], materia);
        estudiante->numMaterias++;
    } else {
        printf("No se pueden agregar más materias. El límite es %d.\n", MAX_MATERIAS);
    }
}

void eliminarMateria(struct Estudiante* estudiante, const char* materia) {
    int found = -1;
    for (int i = 0; i < estudiante->numMaterias; i++) {
        if (strcmp(estudiante->materias[i], materia) == 0) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        for (int i = found; i < estudiante->numMaterias - 1; i++) {
            strcpy(estudiante->materias[i], estudiante->materias[i + 1]);
        }
        estudiante->numMaterias--;
        printf("Materia '%s' eliminada correctamente.\n", materia);
    } else {
        printf("Materia '%s' no encontrada.\n", materia);
    }
}

// Función para mostrar todas las materias de un estudiante
void mostrarMaterias(struct Estudiante estudiante) {
    if (estudiante.numMaterias == 0) {
        printf("El estudiante no tiene materias inscritas.\n");
    } else {
        printf("Materias inscritas:\n");
        for (int i = 0; i < estudiante.numMaterias; i++) {
            printf("%d. %s\n", i + 1, estudiante.materias[i]);
        }
    }
}
