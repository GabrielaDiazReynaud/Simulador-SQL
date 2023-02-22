#pragma once
#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include"NodoDoble.h"
#include"ListaSimple.h"
class ListaDoble {
private:
	


public:
	NodoDoble* primero;
	int cont;
	ListaDoble();
	bool estaVacia();
	NodoDoble* agregarElemento();
	void agregarNodo(NodoDoble*, ListaSimple);
	void eliminarElemento(int);
	void imprimir();
	void imprimirRec();
	NodoDoble* obtenerUltimo();



};
#endif 
