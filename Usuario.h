#ifndef USUARIO_H
#define USUARIO_H

class Usuario {

private:
	std::list<Puntaje> puntajes;
	string nickname;
	string fotoPerfil;
	string password;

public:
	string getNickname();

	void setNickname(string nickname);

	string getFotoPerfil();

	void setFotoPerfil(string fotoPerfil);

	string getPassword();

	void setPassword(string pass);
};

#endif
