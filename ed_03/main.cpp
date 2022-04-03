#include <iostream>

#include "Cliente.h"
#include "Conta.h"
#include "Banco.h"
#include "Hora.h"

using namespace std;

int main() {
	
	
    string nomeCliente = "Andre";
    string emailCliente = "andrevelasques7@gmail.com";
    string dataAni = "08/01/2001";
    int idadeCliente = 21;
    
    //Criando o cliente
    Cliente cliente(nomeCliente, emailCliente, dataAni, idadeCliente);

    string numeroConta = "001";
    string agencia = "1000";
    Conta conta(numeroConta, agencia, cliente);


    std::cout << "\n---- Horas ----" << std::endl;
        
    
   	Hora hora(10,10,20);
    hora.mostrarHoras();
    Hora hora1(20,10,10);
    hora1.mostrarHoras();
    
    std::cout << std::endl;
    
    std::cout << "\n----Soma ---- \n" << std::endl;
    hora.soma(hora1);
    hora.mostrarHoras();
	
	std::cout << "\n---- Subtracao ----\n" << std::endl;
    hora.subtracao(hora1);
    hora.mostrarHoras();
    
    //Criando o banco normal
    
	/*Banco meuBanco(10);
    
    meuBanco.incluiConta(&conta);
    meuBanco.incluiConta(&conta);
    meuBanco.incluiConta(&conta);
    meuBanco.incluiConta(&conta);
    meuBanco.incluiConta(&conta);

    meuBanco.imprimeContas();
	
	//Criando o super banco
	
    Banco superBanco(10000);
    
    superBanco.incluiConta(&conta);
    
    superBanco.imprimeContas();
    */	
    return 0;
}
