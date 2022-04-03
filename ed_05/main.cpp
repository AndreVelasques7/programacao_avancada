#include <iostream>

#include "Cliente.h"
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "ContaSalario.h"

using namespace std;

int main() {
	
	
    string nomeCliente = "Andre";
    string emailCliente = "andrevelasques7@gmail.com";
    string dataAni = "08/01/2001";
    int idadeCliente = 21;
    string numeroConta = "001";
    string agencia = "1000";
    string numeroConta2 = "002";
    string agencia2 = "1001";
    string numeroConta3 = "012";
    string agencia3 = "1031";
    
    //Criando o cliente
    Cliente cliente(nomeCliente, emailCliente, dataAni, idadeCliente);
    Cliente cliente2(nomeCliente, emailCliente, dataAni, idadeCliente);
    Cliente cliente3(nomeCliente, emailCliente, dataAni, idadeCliente);

   
    //Conta conta(numeroConta, agencia, cliente);
    
    {
    	
    	ContaCorrente contaCorrente(numeroConta, agencia, cliente);
    	
	    contaCorrente.depositarQuantia(1000);
	    contaCorrente.imprimeExtrato();
	    contaCorrente.aplicarJurosDiarios(20, contaCorrente.getTaxaDeJuros());
	    contaCorrente.imprimeExtrato();
	    
	}
	
	//Nao sei pq ele pega o valor inical da contaCorrente e utiliza ele para a contaPoupanca
	
    {
    	
    	ContaPoupanca contaPoupanca(numeroConta2, agencia2, cliente2);
	    
		contaPoupanca.depositarQuantia(1000);
	    contaPoupanca.imprimeExtrato();
	    contaPoupanca.aplicarJurosDiarios(20, contaPoupanca.getTaxaDeJuros());
	    contaPoupanca.imprimeExtrato();
	}
	{
		ContaSalario contaSalario(numeroConta3, agencia3, cliente3);
	    
		contaSalario.depositarQuantia(1000);
	    //contaPoupanca.imprimeExtrato();
	    //contaPoupanca.aplicarJurosDiarios(20, contaPoupanca.getTaxaDeJuros());
	    //contaPoupanca.imprimeExtrato();
	}
   
    
    return 0;
}
