#pragma once

#include "Conta.h"
#include "Investimento.h"

class ContaSalario: public Conta{
public:
	
    ContaSalario(std::string numero, std::string agencia, const Cliente& cliente, const float saldo) : Conta(numero, agencia, cliente, saldo) {
		std::cout << "\nConta salario criada com sucesso!" << std::endl;
	}

    virtual void depositarQuantia(float quantia) override {
        std::cout << "Conta salario nao tem opcao de deposito!";
    }
    
    virtual ~ContaSalario() {
        std::cout << "Destruindo a conta salario" << std::endl;
    }
    
    virtual void aplicaJurosDiarios(const int dias) {
        std::cout << "Conta salario nao tem opcao de deposito!" << std::endl;
    }
};
