#include "Estructura_Estudiante.h"

void recogerInformacion() {
    try {
        Estudiante estudiante1;

        // Configurar información básica del estudiante
        estudiante1.setNombre("Gabriel");
        estudiante1.setEdad(20);
        estudiante1.setPromedio(9.5);

        // Añadir materias al estudiante
        estudiante1.agregarMateria("Matematicas");
        estudiante1.agregarMateria("Fisica");
        estudiante1.agregarMateria("Programacion");

        // Manejar intento de agregar una materia ya registrada
        try {
            estudiante1.agregarMateria("Fisica");
        } catch (const MateriaYaRegistradaException& e) {
            cout << "No se pudo agregar la materia: " << e.what() << endl;
        }

        // Eliminar una materia existente
        estudiante1.eliminarMateria("Fisica");

        // Manejar intento de eliminar una materia inexistente
        try {
            estudiante1.eliminarMateria("Quimica");
        } catch (const MateriaNoEncontradaException& e) {
            cout << "No se pudo eliminar la materia: " << e.what() << endl;
        }

        // Registrar una asistencia válida
        estudiante1.registrarAsistencia("2024-11-20", "Matematicas", "Asistio");

        // Manejar intento de registrar asistencia para una materia no inscrita
        try {
            estudiante1.registrarAsistencia("2024-11-20", "Quimica", "Asistio");
        } catch (const MateriaNoInscritaException& e) {
            cout << "No se pudo registrar la asistencia: " << e.what() << endl;
        }

        // Mostrar información del estudiante
        estudiante1.mostrarEstudiante();
    } catch (const exception& e) {
        cout << "Ocurrio un error inesperado: " << e.what() << endl;
    }
}
