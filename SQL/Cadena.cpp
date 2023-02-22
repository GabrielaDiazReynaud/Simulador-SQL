#include"Cadena.h"
Cadena::Cadena(string _valor, TipoCampo _tipoC, string _campo, NodoSimple* _siguiente) :NodoSimple( _tipoC, _campo, _siguiente) {
	setValorCadena(_valor);
}

void Cadena::setValorCadena(string _valor) {
	this->valorCadena = _valor;
}

string Cadena::getValorCadena() {
	return this->valorCadena;
}