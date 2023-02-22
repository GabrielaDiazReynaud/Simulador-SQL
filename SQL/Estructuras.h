#pragma once
#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

struct InfoTabla {
	int cantidadR;
	int cantidadC;
	//size= 8

};
enum TipoCampo { t_Entero, t_Cadena, t_Char, t_Decimal, t_Logico };
struct InfoCampo {
	char nombreC[20];
	TipoCampo tipocampo;
	//size= 24;

};

struct RegistroEntero {
	unsigned int valor;

};

struct RegistroCadena {
	char valor[100];
};

struct RegistroCaracter {
	char valor;
};
struct RegistroDecimal {
	float valor;
};
struct RegistroLogico {
	bool valor;
};

#endif