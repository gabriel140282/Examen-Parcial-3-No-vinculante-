#ifndef ESTRUCTURA_ESTUDIANTE_H
#define ESTRUCTURA_ESTUDIANTE_H

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_MATERIAS 10
#define MAX_ASISTENCIAS 20

    struct Asistencia {
        char fecha[20];
        char materia[50];
        char estado[10];
    };

    struct Estudiante {
        char nombre[50];
        int edad;
        float promedio;
        char materias[MAX_MATERIAS][50];
        int numMaterias;
        struct Asistencia asistencias[MAX_ASISTENCIAS];
        int numAsistencias;
    };

    void mostrarEstudiante(struct Estudiante estudiante);
    void agregarMateria(struct Estudiante* estudiante, const char* materia);
    void eliminarMateria(struct Estudiante* estudiante, const char* materia);
    void mostrarMaterias(struct Estudiante estudiante);

    void registrarAsistencia(struct Estudiante* estudiante, const char* fecha, const char* materia, const char* estado);
    void mostrarAsistencias(struct Estudiante estudiante);

#ifdef __cplusplus
}
#endif

#endif // ESTRUCTURA_ESTUDIANTE_H