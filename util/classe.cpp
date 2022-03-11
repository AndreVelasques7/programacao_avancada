#include <iostream>
#include <iomanip>

#include "classe.h"

using namespace std;

Classe::Classe() {
    _atributo = 0;
}

Classe::Classe(int atributo) {
    cout << "Classe Criada\n";
  
    _atributo = atributo;

}

Classe::~Classe() {}

void Classe::metodo_classe(int atributo) {
   
}

