#pragma once
#ifndef NODOSIMPLE_H
#define NODOSIMPLE_H
#include"Estructuras.h";
#include<iostream>
using namespace std;
#include <string>;
class NodoSimple {
private:
	int index;
	TipoCampo tipoC;
	NodoSimple* siguiente;
	string nombreC;

public:
	
	NodoSimple();
	NodoSimple(TipoCampo,string, NodoSimple*);
	string getNombreC();
	void setNombreC(string);
	void setSiguiente(NodoSimple*);
	void setTipo(TipoCampo);


	NodoSimple* getSiguiente();

	TipoCampo getTipo();

};

#endif

