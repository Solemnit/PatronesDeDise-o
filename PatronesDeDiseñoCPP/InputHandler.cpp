#include "InputHandler.h"

InputHandler::InputHandler()
{
    // Al crear el InputHandler, creamos las instancias de nuestros comandos (saltar,disparar)
    botonW_ = new SaltarCommand();
    botonF_ = new DispararCommand();
}

InputHandler::~InputHandler()
{
    // Es crucial liberar la memoria que asignamos para evitar memory leaks
    delete botonW_;
    delete botonF_;
}

ICommand* InputHandler::handleInput(char tecla)
{
    if (tecla == 'w') return botonW_;
    if (tecla == 'f') return botonF_;
    // Si no es una tecla mapeada, no devolvemos ningún comando
    return nullptr;
}