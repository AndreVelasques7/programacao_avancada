#pragma once

#include "Conta.h"
#include "Investimento.h"

class ContaSalario: public Conta{
public:
    ContaSalario(std::string& numero, std::string& agencia, const Cliente& cliente) : Conta(numero, agencia, cliente) {
	std::cout << "\nConta salario criada com sucesso!" << std::endl;
	}

    void depositarQuantia(float quantia) override {
        std::cout << "Conta salario nao tem opcao de deposito!";
    }
};
