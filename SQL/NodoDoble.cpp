#include"NodoDoble.h"

NodoDoble::NodoDoble() : siguiente(nullptr), anterior(nullptr) {

}

NodoDoble::NodoDoble( NodoDoble* _anterior, NodoDoble* _siguiente) {
	setSiguiente(_siguiente);
	setAnterior(_anterior);
}




void NodoDoble::setSiguiente(NodoDoble* _siguiente) {
	this->siguiente = _siguiente;
}



NodoDoble* NodoDoble::getSiguiente() {
	return this->siguiente;
}

void NodoDoble::setAnterior(NodoDoble* _anterior) {
	this->anterior = _anterior;
}

NodoDoble* NodoDoble::getAnterior() {
	return this->anterior;
}

ListaSimple NodoDoble::getLista() {
	return this->Objetos;
}
