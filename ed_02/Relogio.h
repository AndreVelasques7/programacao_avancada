#pragma once

#include <iostream>
#include <iomanip>
#include <stdexcept>

#define MAX_MINUTO 60
#define MIN_MINUTO 0
#define MAX_HORA 24
#define MIN_HORA 0


class Relogio {
public:
    Relogio(): _minuto(0), _hora(0) {}

    Relogio(int minuto, int hora) {
        setMinuto(minuto);
        setHora(hora);
    }

    ~Relogio(){}

    void setHora(int hora) {
        if (hora < MAX_HORA && hora >= MIN_HORA) {
            _hora = hora;
        } 
    }

    void setMinuto(int minuto){
        if (minuto < MAX_MINUTO && minuto >= MIN_MINUTO) {
            _minuto = minuto;
        } 
    }

    void mostraHorario() const {
        std::cout << std::setw(2) << std::setfill('0') << _hora
        << ":"
        << std::setw(2) << std::setfill('0')<< _minuto << std::endl;
    }

    int getMinutosDoHorario() const {
        return (60 * _hora) + _minuto;
    }
protected:
    int _minuto;
    int _hora;
 
};
