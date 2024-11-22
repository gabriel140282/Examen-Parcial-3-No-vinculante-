#include <stdio.h>
#include <string.h>
#include "Estructura-Estudiantes.h"

// Mostrar los detalles de un estudiante
void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);

    mostrarMaterias(estudiante);
    mostrarAsistencias(estudiante);
}

// Agregar una materia al estudiante
int agregarMateria(struct Estudiante* estudiante, const char* materia) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->numMaterias], materia);
        estudiante->numMaterias++;
        return 0; // Operación exitosa
    } else {
        return ERROR_MAX_MATERIAS; // Excepción personalizada
    }
}

// Eliminar una materia del estudiante
int eliminarMateria(struct Estudiante* estudiante, const char* materia) {
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
        return 0; // Operación exitosa
    } else {
        return ERROR_MATERIA_NO_ENCONTRADA; // Excepción personalizada
    }
}

// Mostrar las materias inscritas
void mostrarMaterias(struct Estudiante estudiante) {
    if (estudiante.numMaterias == 0) {
        printf("No hay materias inscritas.\n");
    } else {
        printf("Materias inscritas:\n");
        for (int i = 0; i < estudiante.numMaterias; i++) {
            printf("%d. %s\n", i + 1, estudiante.materias[i]);
        }
    }
}

// Registrar una asistencia
int registrarAsistencia(struct Estudiante* estudiante, const char* fecha, const char* materia, const char* estado) {
    if (estudiante->numAsistencias < MAX_ASISTENCIAS) {
        strcpy(estudiante->asistencias[estudiante->numAsistencias].fecha, fecha);
        strcpy(estudiante->asistencias[estudiante->numAsistencias].materia, materia);
        strcpy(estudiante->asistencias[estudiante->numAsistencias].estado, estado);
        estudiante->numAsistencias++;
        return 0; // Operación exitosa
    } else {
        return ERROR_MAX_ASISTENCIAS; // Excepción personalizada
    }
}

// Mostrar las asistencias registradas
void mostrarAsistencias(struct Estudiante estudiante) {
    if (estudiante.numAsistencias == 0) {
        printf("No hay asistencias registradas.\n");
    } else {
        printf("Asistencias registradas:\n");
        for (int i = 0; i < estudiante.numAsistencias; i++) {
            printf("Fecha: %s, Materia: %s, Estado: %s\n",
                   estudiante.asistencias[i].fecha,
                   estudiante.asistencias[i].materia,
                   estudiante.asistencias[i].estado);
        }
    }
}

// Manejar errores personalizados
void manejarError(int codigoError) {
    switch (codigoError) {
        case ERROR_MAX_MATERIAS:
            printf("Error: No se pueden agregar más materias. Límite alcanzado.\n");
            break;
        case ERROR_MATERIA_NO_ENCONTRADA:
            printf("Error: La materia no se encontró.\n");
            break;
        case ERROR_MAX_ASISTENCIAS:
            printf("Error: No se pueden registrar más asistencias. Límite alcanzado.\n");
            break;
        default:
            printf("Error desconocido.\n");
            break;
    }
}