#include "Estructura_Estudiante.h"

void recogerInformacion() {
    try {
        Estudiante estudiante1;

        estudiante1.setNombre("Gabriel");
        estudiante1.setEdad(20);
        estudiante1.setPromedio(9.5);

        // Agregar materias
        estudiante1.agregarMateria("Matematicas");
        estudiante1.agregarMateria("Fisica");
        estudiante1.agregarMateria("Programacion");

        // Intentar agregar una materia duplicada
        try {
            estudiante1.agregarMateria("Fisica");
        } catch (const MateriaYaRegistradaException& e) {
            cout << "Error: " << e.what() << endl;
        }

        // Eliminar materia
        estudiante1.eliminarMateria("Fisica");

        // Intentar eliminar una materia que no existe
        try {
            estudiante1.eliminarMateria("Quimica");
        } catch (const MateriaNoEncontradaException& e) {
            cout << "Error: " << e.what() << endl;
        }

        // Registrar asistencias
        estudiante1.registrarAsistencia("2024-11-20", "Matematicas", "Asistió");

        // Intentar registrar asistencia para una materia no inscrita
        try {
            estudiante1.registrarAsistencia("2024-11-20", "Quimica", "Asistió");
        } catch (const MateriaNoInscritaException& e) {
            cout << "Error: " << e.what() << endl;
        }

        estudiante1.mostrarEstudiante();
    } catch (const exception& e) {
        cout << "Error inesperado: " << e.what() << endl;
    }
}
