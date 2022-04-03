#include <iostream>

#include "Cliente.h"
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "ContaSalario.h"

#include "Banco.h"

using namespace std;

int main() {
	
	
    string nomeCliente = "Andre";
    string emailCliente = "andrevelasques7@gmail.com";
    string dataAni = "08/01/2001";
    int idadeCliente = 21;
    string numeroConta = "001";
    string agencia = "1000";

    //Criando o cliente
    Cliente cliente(nomeCliente, emailCliente, dataAni, idadeCliente);
    
	Banco banco(5);

    ContaCorrente contaCorrente("1000", "05", cliente, 100.00);
	ContaCorrente contaCorrente2(numeroConta, agencia, cliente, 2000.00);
    ContaPoupanca contaPoupanca(numeroConta, agencia, cliente, 100.00);
	ContaPoupanca contaPoupanca2(numeroConta, agencia, cliente, 1000.00);
	
	ContaSalario contaSalario(numeroConta, agencia, cliente, 500.00);
	   
	
	banco.incluiConta(&contaCorrente);
    banco.incluiConta(&contaCorrente2);
    banco.incluiConta(&contaPoupanca);
    banco.incluiConta(&contaPoupanca2);
    banco.incluiConta(&contaSalario);

    Conta** contas = banco.getContas();

    for (int i = 0; i < banco.getNumeroContas(); i++) {
        contas[i]->aplicaJurosDiarios(40);
    }

    for (int i = 0; i < banco.getNumeroContas(); i++) {
       contas[i]->imprimeExtrato();
    }
    
    
    return 0;
}
