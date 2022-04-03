#pragma once
#include <iostream>

#include "Conta.h"
#include "Investimento.h"

class ContaCorrente: public Conta, public Investimento  {
public:
    ContaCorrente(std::string &numero, std::string &agencia, const Cliente &cliente) : Conta(numero, agencia,cliente), Investimento() {
    	std::cout << "Conta corrente criada com sucesso!" << std::endl;
        setTaxaDeJuros(0.03);
    }
    void aplicarJurosDiarios(const int dias, const float taxa) {
    	std::cout << "Juros de 0.03% aplicado!" << std::endl;
        _saldo = _saldo + (((_saldo) * taxa) * dias);
    }
};
