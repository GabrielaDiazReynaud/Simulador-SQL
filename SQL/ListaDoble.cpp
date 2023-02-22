#include"ListaDoble.h"
#include<iostream>
using namespace std;

ListaDoble::ListaDoble() :primero(nullptr) {

}

bool ListaDoble::estaVacia() {
	return primero == nullptr;
}

NodoDoble* ListaDoble::agregarElemento() {
	
	NodoDoble* nuevo = new NodoDoble( nullptr, nullptr);
	cont++;
	if (estaVacia()) {
		primero = nuevo;
		return primero ;
	}
	else {
		NodoDoble* tmp = primero;
		while (tmp->getSiguiente() != nullptr) {
			tmp = tmp->getSiguiente();
		}
		nuevo->setAnterior(tmp);
		nuevo->setSiguiente(nullptr);
		tmp->setSiguiente(nuevo);
		return nuevo;

	}
	}


void ListaDoble::agregarNodo(NodoDoble* _node, ListaSimple _obj) {
	NodoDoble* nuevo = new NodoDoble(nullptr, nullptr);
	if (estaVacia()) {
		primero = nuevo;
		primero->Objetos = _obj;
		return;
	}
	else {
		NodoDoble* tmp = primero;
		while (tmp->getSiguiente() != nullptr) {
			tmp = tmp->getSiguiente();
		}
		tmp->setSiguiente(nuevo);
		nuevo->setAnterior(tmp);
		nuevo->setSiguiente(nullptr);
		nuevo->Objetos = _obj;

		

	}
}



