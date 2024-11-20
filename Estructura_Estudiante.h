#ifndef ESTRUCTURA_ESTUDIANTE_H
#define ESTRUCTURA_ESTUDIANTE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

// Excepciones personalizadas
class MateriaNoEncontradaException : public runtime_error {
public:
    explicit MateriaNoEncontradaException(const string& mensaje)
        : runtime_error(mensaje) {}
};

class MateriaYaRegistradaException : public runtime_error {
public:
    explicit MateriaYaRegistradaException(const string& mensaje)
        : runtime_error(mensaje) {}
};

class MateriaNoInscritaException : public runtime_error {
public:
    explicit MateriaNoInscritaException(const string& mensaje)
        : runtime_error(mensaje) {}
};

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

    void setFecha(const string& fecha) { this->fecha = fecha; }
    void setMateria(const string& materia) { this->materia = materia; }
    void setEstado(const string& estado) { this->estado = estado; }

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

    void setNombre(const string& nombre) { this->nombre = nombre; }
    void setEdad(int edad) { this->edad = edad; }
    void setPromedio(float promedio) { this->promedio = promedio; }

    void agregarMateria(const string& materia) {
        if (find(materias.begin(), materias.end(), materia) != materias.end()) {
            throw MateriaYaRegistradaException("La materia ya está registrada.");
        }
        materias.push_back(materia);
    }

    void eliminarMateria(const string& materia) {
        auto it = find(materias.begin(), materias.end(), materia);
        if (it != materias.end()) {
            materias.erase(it);
        } else {
            throw MateriaNoEncontradaException("La materia no se encuentra en la lista.");
        }
    }

    void registrarAsistencia(const string& fecha, const string& materia, const string& estado) {
        if (find(materias.begin(), materias.end(), materia) != materias.end()) {
            asistencias.emplace_back(fecha, materia, estado);
        } else {
            throw MateriaNoInscritaException("La materia no está inscrita, no se puede registrar asistencia.");
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

    void mostrarEstudiante() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
        mostrarMaterias();
        mostrarAsistencias();
    }
};

void recogerInformacion();

#endif //ESTRUCTURA_ESTUDIANTE_H
