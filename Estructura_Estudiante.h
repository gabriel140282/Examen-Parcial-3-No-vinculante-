#ifndef ESTRUCTURA_ESTUDIANTE_H
#define ESTRUCTURA_ESTUDIANTE_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Estudiante {

private:
    string nombre;
    int edad;
    float promedio;
    vector<string> materias; // Lista de materias

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
    }
};

void recogerInformacion();

#endif //ESTRUCTURA_ESTUDIANTE_H
