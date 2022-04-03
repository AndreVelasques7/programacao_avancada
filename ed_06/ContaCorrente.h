#pragma once
#include <iostream>

#include "Conta.h"
#include "Investimento.h"

class ContaCorrente: public Conta, public Investimento  {
public:
	
    ContaCorrente(std::string numero, std::string agencia, const Cliente &cliente, const float saldo) : Conta(numero, agencia, cliente, saldo), Investimento() {
  		std::cout << "Conta corrente criada com sucesso!" << std::endl;
        setTaxaDeJuros(0.03);
    }

    virtual void aplicarJurosDiarios(const int dias) {
    	std::cout << "Juros de 0.03% aplicado!" << std::endl;
        _saldo = _saldo + (((_saldo) * getTaxaDeJuros()) * dias);
    }
    
    
    
    virtual ~ContaCorrente() {
         std::cout << "Destruindo a conta corrente" << std::endl;
    }
};
