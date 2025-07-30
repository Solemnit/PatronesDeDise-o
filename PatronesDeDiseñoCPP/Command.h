#pragma once
#include "Personaje.h"

class ICommand
{
public:
    virtual ~ICommand();
    virtual void execute(Personaje& personaje) = 0; //Quiere decir que no tiene implementación propia, se debe hacer en la clase que esta herede
};

// Comando concreto para la acción de Saltar
class SaltarCommand : public ICommand
{
public:
    virtual void execute(Personaje& personaje) override
    {
        personaje.Saltar();
    }
};

// Comando concreto para la acción de Disparar
class DispararCommand : public ICommand
{
public:
    virtual void execute(Personaje& personaje) override
    {
        personaje.Disparar(); // Llama a la acción específica en el personaje
    }
};

