#pragma once
#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H
#include "NodoSimple.h"
#include "Cadena.h"
#include"Caracter.h"
#include"Decimal.h"
#include"Entero.h"
#include"Logico.h"
class ListaSimple {
private:


public:
	ListaSimple();
	void agregarElemento(int,float,string,char,bool, TipoCampo,string);
	NodoSimple* primero;
	bool estaVacia();
	void agregarNodo(NodoSimple*);




};
#endif