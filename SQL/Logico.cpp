#include"Logico.h"
Logico::Logico(bool _valor,  TipoCampo _tipoC, string _campo, NodoSimple* _siguiente) :NodoSimple( _tipoC, _campo, _siguiente) {
	setValorLogico(_valor);
}

void Logico::setValorLogico(bool _valor) {
	this->valorLogico = _valor;
}

bool Logico::getValorLogico() {
	return this->valorLogico;
}