#ifndef ACTUADOR_H
#define ACTUADOR_H

#include <string>

/**
 * @class Actuador
 * @brief 
 */
class Actuador {

private:
    std::string nombre;
    bool estado;
    int nivelPotencia;

public:
    Actuador(std::string nombre);

    void encender();
    void apagar();
    void ajustarPotencia(int nuevoNivel);

    std::string obtenerEstado() const;

    std::string getNombre() const;
    int getPotencia() const;
};

#endif