#include <iostream>
#include <iomanip>
#include <stdexcept>


#include "Relogio.h"

using namespace std;

int main() {
    cout << "Criacao do relogio 1\n";

    Relogio relogio(2, 5);
    cout << relogio.getMinutosDoHorario() << "\n";
    relogio.setHora(20);
    relogio.setMinuto(50);
    relogio.mostraHorario();
    cout << relogio.getMinutosDoHorario() << "\n";

    cout << "\nCriacao do relogio 2\n";

    Relogio relogio2;
    cout << relogio2.getMinutosDoHorario()  << "\n";
    relogio2.setHora(1);
    relogio2.setMinuto(10);
    relogio2.mostraHorario();
    cout << relogio2.getMinutosDoHorario()  << "\n";

    cout << "\nCriacao do relogio 3\n";

    Relogio relogio3(1, 5);
    cout << relogio3.getMinutosDoHorario()  << "\n";
    relogio3.setHora(10);
    relogio3.setMinuto(50);
    relogio3.mostraHorario();
    cout << relogio3.getMinutosDoHorario()  << "\n";


    return 0;
}
