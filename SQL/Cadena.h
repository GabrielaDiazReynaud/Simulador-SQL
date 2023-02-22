#pragma once
#ifndef CADENA_H
#define CADENA_H
#include"NodoSimple.h"
class Cadena : public NodoSimple {
private:
	string valorCadena;
public:
	Cadena(string, TipoCampo, string, NodoSimple*);

	void setValorCadena(string);
	string getValorCadena();
};

#endif 
