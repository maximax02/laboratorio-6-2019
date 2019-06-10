#include "ReservaCredito.h"

float ReservaCredito::getPorcentajeDes() {
	return this->porcentajeDes;
}

void ReservaCredito::setPorcentajeDes(float porcentajeDes) {
	this->porcentajeDes = porcentajeDes;
}

string ReservaCredito::getFinanciera() {
	return this->financiera;
}

void ReservaCredito::setFinanciera(string financiera) {
	this->financiera = financiera;
}
