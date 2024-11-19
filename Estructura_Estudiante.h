#ifndef ESTRUCTURA_ESTUDIANTE_H
#define ESTRUCTURA_ESTUDIANTE_H

#ifdef __cplusplus
extern "C" {
#endif

    // Definición de la estructura Estudiante
    struct Estudiante {
        char nombre[50];
        int edad;
        float promedio;
    };

    // Declaración de la función mostrarEstudiante
    void mostrarEstudiante(struct Estudiante estudiante);

#ifdef __cplusplus
}
#endif

#endif // ESTRUCTURA_ESTUDIANTE_H
