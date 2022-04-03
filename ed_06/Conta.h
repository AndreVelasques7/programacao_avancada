 #pragma once

#include <iostream>

#include "Cliente.h"

class Conta {
public:
  
    Conta(std::string& numero, std::string& agencia, const Cliente& cliente, const float saldo) : _numero(numero), _agencia(agencia), _cliente(cliente), _saldo(saldo * 100) {
        /*
		std::cout << "--- Iniciando Conta ---" << std::endl;
        std::cout << "Numero da Conta: " << numero << std::endl;
        std::cout << "Agencia: " << agencia << std::endl;
        std::cout << "Cliente: " << cliente.getNome()<< std::endl;
        std::cout << "Saldo" << getSaldo() <<std::endl;
        */
        
    }
    
    Conta() {
        std::cout << "--- Iniciando Conta Vazia ---" << std::endl;
    }
    
    virtual ~Conta() {
        std::cout << "Destruindo a conta!" << std::endl;
    }
    
    virtual void depositarQuantia(float quantia) {
        _saldo += (int)(quantia * 100);
    }

	virtual void aplicaJurosDiarios(int dias) = 0;
	
	void retirarQuantia(float quantia) {
        _saldo -= (int)(quantia * 100);
    }

    void imprimeExtrato() const {
        std::cout << "Saldo: " << ((float) (_saldo / 100.0f)) << std::endl;
    }

    const std::string &getNumero() const {
        return _numero;
    }

    const std::string &getAgencia() const {
        return _agencia;
    }

    const Cliente &getCliente() const {
        return _cliente;
    }

    float getSaldo() const {
        return _saldo / 100.0f;
    }

protected:
    std::string _numero;
    std::string _agencia;
    Cliente _cliente;
    int _saldo = 0;
};
