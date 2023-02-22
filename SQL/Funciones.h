#pragma once
#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include<fstream>
using namespace std;
#include<string>
#include"ListaDoble.h"
#include <vector>
#include<string>
class Funciones {
public:
	Funciones();
	ListaDoble tabla(string);
	ListaDoble Diferencia(ListaDoble,ListaDoble, vector<string>, vector<string>);
	ListaDoble Interseccion(ListaDoble, ListaDoble, vector<string>, vector<string>);
	ListaDoble Union(ListaDoble, ListaDoble, vector<string>, vector<string>);
	void print(ListaDoble);
	bool contengo(ListaSimple, ListaDoble, int, vector<string>);
	int obtenerTamanoRegistros( ListaDoble);
	int obtenerTamanoCampos(ListaSimple);
};


#endif