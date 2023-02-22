#include"ListaSimple.h"
#include<iostream>
using namespace std;
ListaSimple::ListaSimple() :primero(nullptr) {

}

bool ListaSimple::estaVacia() {

	return primero == nullptr;
}

void ListaSimple::agregarElemento(int _valor1, float _valor2, string _valor3, char _valor4, bool _valor5,TipoCampo _tipo, string _nCampo) {
	NodoSimple* nuevo;
	if (_tipo == TipoCampo::t_Cadena) {
		nuevo = new Cadena (_valor3, _tipo, _nCampo,  nullptr);

	}
	else if (_tipo == TipoCampo::t_Char) {
		nuevo = new Caracter(_valor4, _tipo, _nCampo, nullptr);

	}
	else if (_tipo == TipoCampo::t_Decimal) {
		nuevo = new Decimal1(_valor2, _tipo, _nCampo, nullptr);

	}
	else if (_tipo == TipoCampo::t_Entero) {
		 nuevo = new Entero(_valor1, _tipo, _nCampo, nullptr);

	}
	else if (_tipo == TipoCampo::t_Logico) {
		 nuevo = new Logico(_valor5, _tipo, _nCampo, nullptr);

	}

	if (estaVacia()) {
		primero = nuevo;
       }
	else {
		NodoSimple* tmp = primero;

		while (tmp->getSiguiente() != nullptr) {
			tmp = tmp->getSiguiente();

		}
		nuevo->setSiguiente(nullptr);
		tmp->setSiguiente(nuevo);
		

	}
}

void ListaSimple::agregarNodo(NodoSimple* _node) {

	if (_node->getTipo() == TipoCampo::t_Cadena) {
		Cadena* valor = (Cadena*)_node;
		agregarElemento(0,0,valor->getValorCadena(),'a',NULL,TipoCampo::t_Cadena, valor->getNombreC());
	}
	else if (_node->getTipo() == TipoCampo::t_Char) {
		Caracter* valor = (Caracter*)_node;
		agregarElemento(0, 0, "", valor->getValorCaracter(), NULL, TipoCampo::t_Char, valor->getNombreC());

	}
	else if (_node->getTipo() == TipoCampo::t_Decimal) {
		Decimal1* valor = (Decimal1*)_node;
		agregarElemento(0, valor->getValorDecimal(), "", 'a', NULL, TipoCampo::t_Decimal, valor->getNombreC());

	}
	else if (_node->getTipo()== TipoCampo::t_Entero) {
		Entero* valor = (Entero*)_node;
		agregarElemento(valor->getValorEntero(),0, "", 'a', NULL, TipoCampo::t_Entero, valor->getNombreC());

	}
	else if (_node->getTipo()== TipoCampo::t_Logico) {
		Logico* valor = (Logico*)_node;
		agregarElemento(0, 0, "", 'a', valor->getValorLogico(), TipoCampo::t_Entero, valor->getNombreC());

	}
	
	
}

