#ifndef CONTROLADORRESERVA_H
#define CONTROLADORRESERVA_H

class ControladorReserva : IControladorReserva {

private:
	Funcion f;
	Reserva r;
	int cantEntradas;
	boolean modoDePago;

public:
	Funcion getF();

	void setF(Funcion f);

	Reserva getR();

	void setR(Reserva r);

	int getCantEntradas();

	void setCantEntradas(int cantEntradas);

	bool getModoDePago();

	void setModoDePago(bool modoDePago);

	void reservarAsientos(int cantAsientos);

	void seleccionarFuncion(dtFuncion funcion);

	void ingresarBanco(string banco);

	void confirmarReserva();

	void cancelarReserva();

	int ingresarFinanciera(string financiera);

	int verPrecioFinal();

	void indicarModoDePago(bool modoDePago);
};

#endif
