#ifndef PELICULA_H
#define PELICULA_H

class Pelicula {

private:
	string titulo;
	string poster;
	string sinopsis;
	float puntajeProm;

public:
	string getTitulo();

	void setTitulo(string titulo);

	string getPoster();

	void setPoster(string poster);

	string getSinopsis();

	void setSinopsis(string sinopsis);

	float getPuntajeProm();

	void setPuntajeProm(float puntajeProm);

	Pelicula();
};

#endif
