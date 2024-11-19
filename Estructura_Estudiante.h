#ifndef ESTRUCTURA_ESTUDIANTE_H
#define ESTRUCTURA_ESTUDIANTE_H

#include <iostream>

using namespace std;

class Estudiante {

private:
    string nombre;
    int edad;
    float promedio;

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

    void mostrarEstudiante() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
    }
};

void recogerInformacion();

#endif //ESTRUCTURA_ESTUDIANTE_H
