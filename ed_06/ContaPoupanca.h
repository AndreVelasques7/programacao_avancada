#pragma once
#include <iostream>
#include "Conta.h"
#include "Investimento.h"

class ContaPoupanca: public Conta, public Investimento{
public:
	
	ContaPoupanca(std::string numero, std::string agencia, const Cliente &cliente, const float saldo) : Conta(numero, agencia,cliente, saldo), Investimento() {
  	    std::cout << "\nConta poupanca criada com sucesso!" << std::endl;
       setTaxaDeJuros(0.08);
    }
    
    virtual void aplicarJurosDiarios(const int dias) {
    	std::cout << "Juros de 0.08% aplicado!" << std::endl;
        _saldo = _saldo + (((_saldo) * getTaxaDeJuros()) * dias);
    }

     virtual ~ContaPoupanca() {
         std::cout << "Destruindo a conta poupanca" << std::endl;
    }

};
