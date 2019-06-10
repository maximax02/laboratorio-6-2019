#ifndef RESERVA_H
#define RESERVA_H

class Reserva {

private:
	int cantAsientos;
	int costo;

public:
	int getCantAsientos();

	void setCantAsientos(int cantAsientos);

	int getCosto();

	void setCosto(int costo);
};

#endif
