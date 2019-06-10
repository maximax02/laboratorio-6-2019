#include "Usuario.h"

string Usuario::getNickname() {
	return this->nickname;
}

void Usuario::setNickname(string nickname) {
	this->nickname = nickname;
}

string Usuario::getFotoPerfil() {
	return this->fotoPerfil;
}

void Usuario::setFotoPerfil(string fotoPerfil) {
	this->fotoPerfil = fotoPerfil;
}

string Usuario::getPassword() {
	return this->password;
}

void Usuario::setPassword(string pass) {
	this->password = pass;
}
