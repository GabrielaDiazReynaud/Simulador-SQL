#pragma once
#ifndef NODO_H
#define NODO_H
#include "ListaSimple.h"
class NodoDoble {
private:

	NodoDoble* siguiente;
	NodoDoble* anterior;

public:
	ListaSimple Objetos;
	NodoDoble();
	NodoDoble( NodoDoble*, NodoDoble*);

	ListaSimple getLista();
	void setSiguiente(NodoDoble*);
	void setAnterior(NodoDoble*);
	NodoDoble* getAnterior();

	NodoDoble* getSiguiente();
};

#endif
