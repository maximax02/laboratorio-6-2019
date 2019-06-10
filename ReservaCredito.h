#ifndef RESERVACREDITO_H
#define RESERVACREDITO_H

class ReservaCredito : Reserva {

private:
	float porcentajeDes;
	string financiera;

public:
	float getPorcentajeDes();

	void setPorcentajeDes(float porcentajeDes);

	string getFinanciera();

	void setFinanciera(string financiera);
};

#endif
