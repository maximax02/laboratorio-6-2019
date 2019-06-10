#ifndef CONTROLADORPELICULA_H
#define CONTROLADORPELICULA_H

class ControladorPelicula : IControladorPelicula {

public:
	Pelicula p;

	Pelicula getP();

	void setP(Pelicula p);

	void borrarPelicula();

	void seleccionarPelicula();

	dtPelicula seleccionarPelicula(string titulo);
};

#endif
