//
// Created by chaba on 09/06/2019.
//

#ifndef LABORATORIO_6_2019_DTPELICULA_H
#define LABORATORIO_6_2019_DTPELICULA_H

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

#endif //LABORATORIO_6_2019_DTPELICULA_H
