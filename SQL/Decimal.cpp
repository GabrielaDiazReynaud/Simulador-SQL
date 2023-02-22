#include"Decimal.h"
Decimal1::Decimal1(float _valor, TipoCampo _tipoC, string _campo, NodoSimple* _siguiente) :NodoSimple( _tipoC, _campo, _siguiente) {
	setValorDecimal(_valor);
}

void Decimal1::setValorDecimal(float _valor) {
	this->valorDecimal= _valor;
}

float Decimal1::getValorDecimal() {
	return this->valorDecimal;
}