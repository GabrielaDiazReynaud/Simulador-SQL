#pragma once
#ifndef LOGICO_H
#define LOGICO_H
#include"NodoSimple.h"
class Logico : public NodoSimple {
private:
	bool valorLogico;
public:
	Logico(bool,TipoCampo, string, NodoSimple*);

	void setValorLogico(bool);
	bool getValorLogico();
};

#endif 