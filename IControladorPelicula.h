#ifndef ICONTROLADORPELICULA_H
#define ICONTROLADORPELICULA_H

class IControladorPelicula {


public:
	Pelicula getP();

	void setP(Pelicula p);

	void borrarPelicula();

	void seleccionarPelicula();

	dtPelicula seleccionarPelicula(string titulo);
};

#endif
