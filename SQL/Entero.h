#pragma once
#ifndef ENTERO_H
#define ENTERO_H
#include"NodoSimple.h"
class Entero : public NodoSimple {
private:
	int valorEntero;
public:
	Entero(int, TipoCampo, string,  NodoSimple*);

	void setValorEntero(int);
	int getValorEntero();
};

#endif 

