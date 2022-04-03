 #pragma once

#include <iostream>

#include "Cliente.h"

class Conta {
public:
  
    Conta(std::string& numero, std::string& agencia, const Cliente& cliente) : _numero(numero), _agencia(agencia), _cliente(cliente) {
        /*std::cout << "--- Iniciando Conta ---" << std::endl;
        std::cout << "Numero da Conta: " << numero << std::endl;
        std::cout << "Agencia: " << agencia << std::endl;
        std::cout << "Cliente: " << cliente.getNome()<< std::endl;
        */
    }
    
    Conta() {
        std::cout << "--- Iniciando Conta Vazia ---" << std::endl;
    }

    const std::string &getNumero() const {
        return _numero;
    }

    void setNumero(const std::string &numero) {
        _numero = numero;
    }

    const std::string &getAgencia() const {
        return _agencia;
    }

    void setAgencia(const std::string &agencia) {
        _agencia = agencia;
    }

    const Cliente &getCliente() const {
        return _cliente;
    }

    void setCliente(const Cliente &cliente) {
        _cliente = cliente;
    }

    int getSaldo() const {
        return _saldo;
    }

    void setSaldo(int saldo) {
        _saldo = saldo;
    }
    
    virtual void depositarQuantia(float quantia) {
        _saldo += (int)(quantia * 100);
    }

    void retirarQuantia(float quantia) {
        _saldo -= (int)(quantia * 100);
    }

    void imprimeExtrato() const {
        std::cout << "Saldo: " << ((float) (_saldo / 100.0f)) << std::endl;
    }

protected:
    std::string _numero;
    std::string _agencia;
    Cliente _cliente;
    int _saldo;
};
