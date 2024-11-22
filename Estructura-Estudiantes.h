#ifndef ESTRUCTURA_ESTUDIANTE_H
#define ESTRUCTURA_ESTUDIANTE_H

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_MATERIAS 10
#define MAX_ASISTENCIAS 20

    // Definición de códigos de error
#define ERROR_MAX_MATERIAS 1
#define ERROR_MATERIA_NO_ENCONTRADA 2
#define ERROR_MAX_ASISTENCIAS 3

    // Estructura para Asistencias
    struct Asistencia {
        char fecha[20];
        char materia[50];
        char estado[10];
    };

    // Estructura para Estudiantes
    struct Estudiante {
        char nombre[50];
        int edad;
        float promedio;
        char materias[MAX_MATERIAS][50];
        int numMaterias;
        struct Asistencia asistencias[MAX_ASISTENCIAS];
        int numAsistencias;
    };

    // Declaración de funciones
    void mostrarEstudiante(struct Estudiante estudiante);
    int agregarMateria(struct Estudiante* estudiante, const char* materia);
    int eliminarMateria(struct Estudiante* estudiante, const char* materia);
    void mostrarMaterias(struct Estudiante estudiante);

    int registrarAsistencia(struct Estudiante* estudiante, const char* fecha, const char* materia, const char* estado);
    void mostrarAsistencias(struct Estudiante estudiante);

    void manejarError(int codigoError);

#ifdef __cplusplus
}
#endif

#endif // ESTRUCTURA_ESTUDIANTE_H