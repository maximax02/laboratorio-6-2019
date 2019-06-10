#ifndef DTFECHA_H
#define DTFECHA_H

class dtFecha {

private:
	int hora;
	int min;
	int mes;
	int anio;
	int dia;

public:
	int getHora();

	void setHora(int hora);

	int getMin();

	void setMin(int min);

	int getMes();

	void setMes(int mes);

	int getAnio();

	void setAnio(int anio);

	int getDia();

	void setDia(int dia);
};

#endif
