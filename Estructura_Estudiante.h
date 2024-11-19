#ifndef ESTRUCTURA_ESTUDIANTE_H
#define ESTRUCTURA_ESTUDIANTE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Clase Asistencia
class Asistencia {
private:
    string fecha;
    string materia;
    string estado; // "Asistió", "Falta", "Tardanza"

public:
    Asistencia() : fecha(""), materia(""), estado("") {}

    Asistencia(const string& fecha, const string& materia, const string& estado)
        : fecha(fecha), materia(materia), estado(estado) {}

    void setFecha(const string& fecha) {
        this->fecha = fecha;
    }

    void setMateria(const string& materia) {
        this->materia = materia;
    }

    void setEstado(const string& estado) {
        this->estado = estado;
    }

    void mostrarAsistencia() const {
        cout << "Fecha: " << fecha << ", Materia: " << materia << ", Estado: " << estado << endl;
    }
};

// Clase Estudiante
class Estudiante {
private:
    string nombre;
    int edad;
    float promedio;
    vector<string> materias; // Lista de materias
    vector<Asistencia> asistencias; // Lista de asistencias

public:
    Estudiante() : nombre(""), edad(0), promedio(0.0) {}

    Estudiante(const string& nombre, int edad, float promedio)
        : nombre(nombre), edad(edad), promedio(promedio) {}

    void setNombre(const string& nombre) {
        this->nombre = nombre;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setPromedio(float promedio) {
        this->promedio = promedio;
    }

    void agregarMateria(const string& materia) {
        materias.push_back(materia);
    }

    void eliminarMateria(const string& materia) {
        auto it = find(materias.begin(), materias.end(), materia);
        if (it != materias.end()) {
            materias.erase(it);
        } else {
            cout << "La materia " << materia << " no se encuentra en la lista." << endl;
        }
    }

    void mostrarMaterias() const {
        if (materias.empty()) {
            cout << "El estudiante no tiene materias inscritas." << endl;
        } else {
            cout << "\nMaterias inscritas:" << endl;
            for (const auto& materia : materias) {
                cout << "- " << materia << endl;
            }
        }
    }

    void mostrarEstudiante() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
        mostrarMaterias();
        mostrarAsistencias();
    }

    void registrarAsistencia(const string& fecha, const string& materia, const string& estado) {
        // Verificar si la materia está inscrita
        if (find(materias.begin(), materias.end(), materia) != materias.end()) {
            asistencias.emplace_back(fecha, materia, estado);
        } else {
            cout << "No se puede registrar asistencia para la materia " << materia << ", no está inscrita." << endl;
        }
    }

    void mostrarAsistencias() const {
        if (asistencias.empty()) {
            cout << "\nNo hay asistencias registradas." << endl;
        } else {
            cout << "\nAsistencias:" << endl;
            for (const auto& asistencia : asistencias) {
                asistencia.mostrarAsistencia();
            }
        }
    }
};

void recogerInformacion();

#endif //ESTRUCTURA_ESTUDIANTE_H
