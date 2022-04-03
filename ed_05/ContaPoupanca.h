#pragma once
#include <iostream>
#include "Conta.h"
#include "Investimento.h"

class ContaPoupanca: public Conta, public Investimento{
public:
    ContaPoupanca(std::string &numero, std::string &agencia, const Cliente &cliente) : Conta(numero, agencia,cliente), Investimento() {
       std::cout << "\nConta poupanca criada com sucesso!" << std::endl;
       setTaxaDeJuros(0.08);
    }

    void aplicarJurosDiarios(const int dias, const float taxa) {
    	std::cout << "Juros de 0.08% aplicado!" << std::endl;
        _saldo = _saldo + (((_saldo) * taxa) * dias);
    }
};
