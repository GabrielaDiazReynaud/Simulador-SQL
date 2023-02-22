#pragma once
#ifndef CARACTER_H
#define CARACTER_H
#include"NodoSimple.h"
class Caracter : public NodoSimple {
private:
	char valorCaracter;
public:
	Caracter(char, TipoCampo, string, NodoSimple*);

	void setValorCaracter(char);
	char getValorCaracter();
};

#endif 
