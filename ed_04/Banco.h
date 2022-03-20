#pragma once

#include "Conta.h"

class Banco {
public:
    Banco(int qtdContas) : _conta(new Conta*[qtdContas]), _numeroContas(qtdContas) {}

    void incluiConta(Conta *conta) {
        _numeroContasAtivas++;
        _conta[_numeroContasAtivas - 1] = conta;
    }

    void imprimeContas() const {
    	int contador = 1;
        for (int i = 0; i < _numeroContasAtivas; i++) {
        	std::cout << "Conta: "<< contador << std::endl;
            std::cout << "Numero da conta: " << _conta[i]->getNumero() << std::endl;
            std::cout << "Agencia: " << _conta[i]->getAgencia() << std::endl;
            std::cout << "Cliente: " << _conta[i]->getCliente().getNome() << std::endl;
            contador++;
        }
    }
    
    ~Banco() {
        for (int i = 0; i < _numeroContas; i++) {
            delete _conta[i];
        }
    }

    Conta **getContas() const {
        return _conta;
    }

    void setContas(Conta **contas) {
        Banco::_conta = contas;
    }

    int getNumeroContas() const {
        return _numeroContas;
    }

    void setNumeroContas(int numeroContas) {
        _numeroContas = numeroContas;
    }

    int getNumeroContasAtivas() const {
        return _numeroContasAtivas;
    }

    void setNumeroContasAtivas(int numeroContasAtivas) {
        _numeroContasAtivas = numeroContasAtivas;
    }

private:
    Conta** _conta;
    int _numeroContas;
    int _numeroContasAtivas = 0;
};
