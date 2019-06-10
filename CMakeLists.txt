cmake_minimum_required(VERSION 3.13)
project(laboratorio-6-2019)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(laboratorio-6-2019
        Comentario.h
        Comentario.cpp
        ControladorPelicula.h
        ControladorPelicula.cpp
        ControladorReserva.cpp
        ControladorReserva.h
        dtFecha.cpp
        dtFecha.h
        Fabrica.h
        Fabrica.cpp
        Funcion.h
        Funcion.cpp
        IControladorPelicula.cpp
        IControladorPelicula.h
        IControladorReserva.cpp
        IControladorReserva.h
        Pelicula.cpp
        Pelicula.h
        Puntaje.cpp
        Puntaje.h
        Reserva.cpp
        Reserva.h
        ReservaCredito.cpp
        ReservaCredito.h
        ReservaDebito.h
        Sala.cpp
        Sala.h
        Usuario.cpp
        Usuario.h dtPelicula.cpp dtPelicula.h)
