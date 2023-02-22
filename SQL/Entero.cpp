#include"Entero.h"
Entero::Entero(int _valor, TipoCampo _tipoC, string _campo,NodoSimple* _siguiente) :NodoSimple( _tipoC, _campo,  _siguiente) {
	setValorEntero(_valor);
}

void Entero::setValorEntero(int _valor) {
	this->valorEntero = _valor;
}

int Entero::getValorEntero() {
	return this->valorEntero;
}
