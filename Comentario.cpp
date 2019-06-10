#include "Comentario.h"
#include <string>
using namespace std;

string Comentario::getComentario() {
	return this->comentario;
}

void Comentario::setComentario(string comentario) {
	this->comentario = comentario;
}
