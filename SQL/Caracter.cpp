#include"Caracter.h"
Caracter::Caracter(char _valor, TipoCampo _tipoC, string _campo, NodoSimple* _siguiente) :NodoSimple( _tipoC, _campo, _siguiente) {
	setValorCaracter(_valor);
}

void Caracter::setValorCaracter(char _valor) {
	this->valorCaracter = _valor;
}

char Caracter::getValorCaracter() {
	return this->valorCaracter;
}