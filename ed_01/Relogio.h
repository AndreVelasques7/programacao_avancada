#pragma once

class Relogio {
public:
	
    Relogio();
    Relogio(int minuto, int hora);

    ~Relogio();
    
	void mostraHorario();
    void setHora(int hora);
    void setMinuto(int minuto);
    
    int getMinutosDoHorario();

protected:
    int _hora;
    int _minuto;
};

