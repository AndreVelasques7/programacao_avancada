#pragma once

#include <iostream>
#include <iomanip>

#define MAX_SEGUNDO 60
#define MIN_SEGUNDO 0
#define MAX_MINUTO 60
#define MIN_MINUTO 0
#define MAX_HORA 24
#define MIN_HORA 0
#define MIN_TIME 0


class Hora {
public:
    Hora() {}

    Hora(int segundo, int minuto, int hora) : _segundo(segundo), _minuto(minuto), _hora(hora) {}
    
    
    void soma(const Hora &hora2) {
        getHoraSoma(hora2._hora);
        getMinutoSoma(hora2._minuto);
        getSegundoSoma(hora2._segundo);
    }

    void subtracao(const Hora &hora2) {
        getHoraSubtrair(hora2._hora);
        getMinutoSubtrair(hora2._minuto);
        getSegundoSubrair(hora2._segundo);
    }

    void mostrarHoras() const {
        std::cout << std::setw(2) << std::setfill('0') << _hora << ":" << std::setw(2) << std::setfill('0') << _minuto << ":" << std::setw(2) << std::setfill('0') << _segundo << std::endl;
    }

protected:
	
	int _segundo;
    int _minuto;
    int _hora;
    
    void getHoraSoma(const int soma) {
        if (_hora + soma >= MAX_HORA) {
            _hora = (_hora + soma) - MAX_HORA;
        } else {
            _hora += soma;
        }
    }

    void getMinutoSoma(const int soma) {
        if (_minuto + soma >= MAX_MINUTO) {
            _minuto = (_minuto + soma) - MAX_MINUTO;
            getHoraSoma(1);
        } else {
            _minuto += soma;
        }
    }

    void getSegundoSoma(const int soma) {
        if (_segundo + soma >= MAX_SEGUNDO) {
            _segundo = (_segundo + soma) - MAX_SEGUNDO;
            getMinutoSoma(1);
        } else {
            _segundo += soma;
        }
    }

    void getHoraSubtrair(const int subtracao) {
        if (_hora - subtracao < MIN_TIME) {
            _hora = MAX_HORA - (subtracao - _hora);
        } else {
            _hora -= subtracao;
        }
    }

    void getMinutoSubtrair(const int subtracao) {
        if (_minuto - subtracao < MIN_TIME) {
            _minuto = MAX_MINUTO - (subtracao - _minuto);
            getHoraSubtrair(1);
        } else {
            _minuto -= subtracao;
        }
    }

    void getSegundoSubrair(const int subtracao) {
        if (_segundo - subtracao < MIN_TIME) {
            _segundo = MAX_SEGUNDO - (subtracao - _segundo);
            getMinutoSubtrair(1);
        } else {
            _segundo -= subtracao;
        }
    }

};
