#ifndef FUNCION_H
#define FUNCION_H

class Funcion {

private:
	int id;
	dtFecha fecha;

public:
	int getId();

	void setId(int id);

	dtFecha getFecha();

	void setFecha(dtFecha fecha);
};

#endif
