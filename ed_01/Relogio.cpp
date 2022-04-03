#include <iostream>
#include <iomanip>

#include "Relogio.h"

Relogio::Relogio() {
	std::cout << "Relogio Criado sem os valores iniciais!\n";
    _hora = 0;
    _minuto = 0;
}

Relogio::Relogio(int minuto, int hora) {
    std::cout << "Relogio Criado com os valores iniciais!\n";
    if (minuto < 60 && minuto >= 0) {
        _minuto = minuto;
    } else {
        std::cout << "Os minutos devem ser entre 0 e 59";
    }

    if (hora < 23 && hora >= 0) {
        _hora = hora;
    } else {
        std::cout << "As horas devem ser entre 0 e 23\n";
        
    }
}

Relogio::~Relogio() {}


int Relogio::getMinutosDoHorario() {
    return (60 * _hora) + _minuto;
}

void Relogio::setHora(int hora) {
    if (hora < 23 && hora >= 0) {
        _hora = hora;
    } else {
        std::cout << "As horas devem ser entre 0 e 23\n";
       
    }
}

void Relogio::setMinuto(int minuto) {
    if (minuto < 60 && minuto >= 0) {
        _minuto = minuto;
    } else {
        std::cout << "Os minutos devem ser entre 0 e 59\n";
    }
}

void Relogio::mostraHorario() {
    std::cout << _hora;
    std::cout << ":";
    std::cout << _minuto;
    std::cout << "\n";
}

