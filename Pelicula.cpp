#include "Pelicula.h"

string Pelicula::getTitulo() {
	return this->titulo;
}

void Pelicula::setTitulo(string titulo) {
	this->titulo = titulo;
}

string Pelicula::getPoster() {
	return this->poster;
}

void Pelicula::setPoster(string poster) {
	this->poster = poster;
}

string Pelicula::getSinopsis() {
	return this->sinopsis;
}

void Pelicula::setSinopsis(string sinopsis) {
	this->sinopsis = sinopsis;
}

float Pelicula::getPuntajeProm() {
	return this->puntajeProm;
}

void Pelicula::setPuntajeProm(float puntajeProm) {
	this->puntajeProm = puntajeProm;
}

Pelicula::Pelicula() {
	// TODO - implement Pelicula::Pelicula
	throw "Not yet implemented";
}
