#ifndef ESTRUCTURA_ESTUDIANTE_H
#define ESTRUCTURA_ESTUDIANTE_H

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_MATERIAS 10 // Número máximo de materias que un estudiante puede tener

    // Definición de la estructura Estudiante
    struct Estudiante {
        char nombre[50];         // Nombre del estudiante
        int edad;                // Edad del estudiante
        float promedio;          // Promedio del estudiante
        char materias[MAX_MATERIAS][50]; // Arreglo para almacenar las materias
        int numMaterias;         // Número actual de materias inscritas
    };

    // Declaración de las funciones para manejar las materias
    void mostrarEstudiante(struct Estudiante estudiante);
    void agregarMateria(struct Estudiante* estudiante, const char* materia);
    void eliminarMateria(struct Estudiante* estudiante, const char* materia);
    void mostrarMaterias(struct Estudiante estudiante);

#ifdef __cplusplus
}
#endif

#endif // ESTRUCTURA_ESTUDIANTE_H