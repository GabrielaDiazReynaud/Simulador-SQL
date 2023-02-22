#pragma once
#ifndef DECIMAL_H
#define DECIMAL_H
#include"NodoSimple.h"
class Decimal1 : public NodoSimple {
private:
	float valorDecimal;
public:
    Decimal1(float,  TipoCampo, string, NodoSimple*);

	void setValorDecimal(float);
	float getValorDecimal();
};
#endif
