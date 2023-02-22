#include "NodoSimple.h"
NodoSimple::NodoSimple() {

}
NodoSimple::NodoSimple(TipoCampo _tipo,string _campo, NodoSimple* _siguiente) {
	
	setTipo(_tipo);
	setSiguiente(_siguiente);
	setNombreC(_campo);
}


void NodoSimple::setTipo(TipoCampo _tipoC) {
	this->tipoC = _tipoC;
}


void NodoSimple::setSiguiente(NodoSimple* _siguiente) {
	this->siguiente = _siguiente;
}



TipoCampo NodoSimple::getTipo() {
	return this->tipoC;
}


NodoSimple* NodoSimple::getSiguiente() {
	return this->siguiente;
}

string NodoSimple::getNombreC() {
	return this->nombreC;
}

void NodoSimple::setNombreC(string _name) {
	this->nombreC = _name;
}