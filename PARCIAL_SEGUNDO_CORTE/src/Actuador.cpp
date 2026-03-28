#include "../include/Actuador.h"

Actuador::Actuador(std::string nombre) {
    this->nombre = nombre;
    this->estado = false;
    this->nivelPotencia = 0;
}

void Actuador::encender() {
    estado = true;
}

void Actuador::apagar() {
    estado = false;
}

void Actuador::ajustarPotencia(int nuevoNivel) {
    if (nuevoNivel >= 0 && nuevoNivel <= 100) {
        nivelPotencia = nuevoNivel;
    }
}

std::string Actuador::obtenerEstado() const {
    return estado ? "Encendido" : "Apagado";
}

std::string Actuador::getNombre() const {
    return nombre;
}

int Actuador::getPotencia() const {
    return nivelPotencia;
}