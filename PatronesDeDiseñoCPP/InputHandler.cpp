#include "InputHandler.h"

InputHandler::InputHandler()
{
    // Al crear el InputHandler, creamos las instancias de nuestros comandos (saltar,disparar)
    botonW_ = new SaltarCommand();
    botonF_ = new DispararCommand();
    botonE_ = new CrouchCommand();
}

InputHandler::~InputHandler()
{
    // Es crucial liberar la memoria que asignamos para evitar memory leaks
    delete botonW_;
    delete botonF_;
    delete botonE_;
}

ICommand* InputHandler::handleInput(char tecla)
{
    if (tecla == 'w') return botonW_;
    if (tecla == 'f') return botonF_;
    if (tecla == 'e') return botonE_;
    // Si no es una tecla mapeada, no devolvemos ningún comando
    return nullptr;
}

void InputHandler::reconfigurarTecla(char tecla, std::string accion)
{
    ICommand* nuevoComando = nullptr;

    //Se llama un comando al cual se quiere reconfigurar
    if (accion == "saltar")
        nuevoComando = &saltarCmd_;
    else if (accion == "disparar")
        nuevoComando = &dispararCmd_;
    else if (accion == "agacharse")
        nuevoComando = &agacharseCmd_;
    else {
        std::cout << "Acción inválida.\n";
        return;
    }
    //se reconfigura la tecla del comando que se quiere reconfigurar
    switch (tecla)
    {
    case 'w':
        botonW_ = nuevoComando;
        break;
    case 'f':
        botonF_ = nuevoComando;
        break;
    case 'e':
        botonE_ = nuevoComando;
        break;
    default:
        std::cout << "Tecla inválida.\n";
        break;
    }
}