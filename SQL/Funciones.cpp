#include"Estructuras.h"
#include"Funciones.h"
#include"NodoSimple.h"
#include <iomanip> 


Funciones::Funciones() {

}

ListaDoble Funciones::tabla(string nameFile) {
	ListaDoble Registros;
	NodoDoble* Registro;
	fstream archivoEmpleados(nameFile, ios::in | ios::binary);
	TipoCampo tipo;
	InfoCampo campos;
	InfoTabla table;
	long posicion;
	long posicion2 = sizeof(InfoTabla);

	archivoEmpleados.read(reinterpret_cast<char*>(&table), sizeof(InfoTabla));

	for (int x = 0; x < table.cantidadC; x++) {
	

		archivoEmpleados.read(reinterpret_cast<char*>(&campos), sizeof(InfoCampo));

	}

	posicion = archivoEmpleados.tellg();

	int c = 0;
	for (int x = 0; x < table.cantidadR; x++) {
		Registro= Registros.agregarElemento();

		posicion2 = sizeof(InfoTabla);

		for (int y = 0; y < table.cantidadC; y++) {

			archivoEmpleados.seekg(posicion2, ios::beg);
			archivoEmpleados.read(reinterpret_cast<char*>(&campos), sizeof(InfoCampo));
			posicion2 = archivoEmpleados.tellg();
			switch (campos.tipocampo) {

			case TipoCampo::t_Entero:
				archivoEmpleados.seekg(posicion, ios::beg);
				RegistroEntero v;
				archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroEntero));
				Registro->Objetos.agregarElemento(v.valor, 0, "", 'a', NULL, campos.tipocampo, campos.nombreC);
			

				posicion = archivoEmpleados.tellg();

				break;
			case TipoCampo::t_Cadena:
			{
				archivoEmpleados.seekg(posicion, ios::beg);
				RegistroCadena v;
				archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroCadena));
				Registro->Objetos.agregarElemento(0, 0, v.valor, 'a', NULL, campos.tipocampo, campos.nombreC);
				posicion = archivoEmpleados.tellg();

			}
			break;
			case TipoCampo::t_Char:
			{
				archivoEmpleados.seekg(posicion, ios::beg);
				RegistroCaracter v;
				archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroCaracter));
				Registro->Objetos.agregarElemento(0, 0, "", v.valor, NULL, campos.tipocampo, campos.nombreC);
				posicion = archivoEmpleados.tellg();


			}
			break;

			case TipoCampo::t_Decimal:
				archivoEmpleados.seekg(posicion, ios::beg);
				{
					RegistroDecimal v;
					archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroDecimal));
					Registro->Objetos.agregarElemento(0, v.valor, "", 'a', NULL, campos.tipocampo, campos.nombreC);
					posicion = archivoEmpleados.tellg();
				}

				break;

			case TipoCampo::t_Logico:
			{
				archivoEmpleados.seekg(posicion, ios::beg);
				RegistroLogico v;
				archivoEmpleados.read(reinterpret_cast<char*>(&v), sizeof(RegistroLogico));
				Registro->Objetos.agregarElemento(0, 0, "", 'a', v.valor, campos.tipocampo, campos.nombreC);

				posicion = archivoEmpleados.tellg();
			}

			break;
			}

		}

	}
	archivoEmpleados.close();

	return Registros;

}

void Funciones::print(ListaDoble l) {

}


ListaDoble Funciones::Diferencia(ListaDoble ConjA, ListaDoble ConjB, vector<string>camposSelect, vector<string>camposSelect2){
	NodoDoble* tmpA = ConjA.primero;
	NodoDoble* tmpB = ConjB.primero;
	NodoSimple* tmpObj;
	ListaDoble ans;
while (tmpA != nullptr) {

	ListaSimple comprarA;
		for (int x = 0; x < camposSelect.size(); x++) {
			tmpObj = tmpA->Objetos.primero;
			while (tmpObj != nullptr) {
			if (tmpObj->getNombreC() == camposSelect[x]) {
				comprarA.agregarNodo(tmpObj);
			}
			tmpObj = tmpObj->getSiguiente();
		}

		
	}
	if (contengo(comprarA, ans, camposSelect.size(),camposSelect)==false) {
		if (contengo(comprarA, ConjB, camposSelect.size(),camposSelect2)==false) {
			ans.agregarNodo(tmpA, comprarA);
		}
     }

	tmpA = tmpA->getSiguiente();
}

return ans;

}

bool Funciones::contengo(ListaSimple _compareA, ListaDoble ConjB, int cant, vector<string>camposSelect) {
	NodoDoble* tmpB = ConjB.primero;
	NodoSimple* tmp2;
	NodoSimple* tmp3;
	int contar = 0;
//RECORRER REGISTROS
		while (tmpB != nullptr ) {
			 tmp2 = _compareA.primero;
			contar = 0;
			int indice = 0;
//RECORRER CONJUNTO b
			while (tmp2 != nullptr)  {
				 tmp3 = tmpB->Objetos.primero; 
//RECORRER CONJUNTO a
		
				while (tmp3 != nullptr ) {
				  
					if (tmp3->getNombreC() == camposSelect[indice] && tmp3->getTipo() == tmp2->getTipo()) {
						if (tmp3->getTipo() == TipoCampo::t_Entero) {
							Entero* ent1 = (Entero*)tmp3;
							Entero* ent2 = (Entero*)tmp2;
							if (ent1->getValorEntero() == ent2->getValorEntero()) {
								contar++;
							}
						}
						else if (tmp2->getTipo() == TipoCampo::t_Decimal) {
							Decimal1* ent1 = (Decimal1*)tmp3;
							Decimal1* ent2 = (Decimal1*)tmp2;
							if (ent1->getValorDecimal() == ent2->getValorDecimal()) {
								contar++;
							}
						}
						else if (tmp2->getTipo() == TipoCampo::t_Char) {
							Caracter* ent1 = (Caracter*)tmp3;
							Caracter* ent2 = (Caracter*)tmp2;
							if (ent1->getValorCaracter() == ent2->getValorCaracter()) {
								contar++;
							}
						}
						else if (tmp2->getTipo() == TipoCampo::t_Cadena) {
							Cadena* ent1 = (Cadena*)tmp3;
							Cadena* ent2 = (Cadena*)tmp2;
							if (ent1->getValorCadena() == ent2->getValorCadena()) {
								contar++;
							}
						}
						else if (tmp2->getTipo() == TipoCampo::t_Logico) {
							Logico* ent1 = (Logico*)tmp3;
							Logico* ent2 = (Logico*)tmp2;
							if (ent1->getValorLogico() == ent2->getValorLogico()) {
								contar++;
							}

						}
				
					
					}
	
				tmp3 = tmp3->getSiguiente();

				}
				if (cant == contar) {
					return true;
				}
				indice++;
				tmp2 = tmp2->getSiguiente();

			}



			tmpB = tmpB->getSiguiente();
		}

	return false;

}

ListaDoble Funciones::Interseccion(ListaDoble ConjA, ListaDoble ConjB, vector<string>camposSelect, vector<string>camposSelect2) {

	NodoDoble* tmpA = ConjA.primero;
	int cant = obtenerTamanoRegistros(ConjA);
	NodoDoble* tmpB = ConjB.primero;
	NodoSimple* tmp2;
	ListaDoble ans;

	while (tmpA != nullptr) {

		ListaSimple comprarA;

			for (int x = 0; x < camposSelect.size(); x++) {
			tmp2 = tmpA->Objetos.primero;
			while (tmp2 != nullptr) {
				if (tmp2->getNombreC() == camposSelect[x]) {
					NodoSimple* node = tmp2;
					comprarA.agregarNodo(tmp2);
				}

				tmp2 = tmp2->getSiguiente();
			}

		}
		//if (contengo(comprarA, ans, camposSelect.size(), camposSelect)==false) {
			if (contengo(comprarA, ConjB, camposSelect.size(), camposSelect2)==true) {
				NodoDoble* node = tmpA;
				ans.agregarNodo(node, comprarA);
			}
	//	}

		tmpA = tmpA->getSiguiente();
	}

	return ans;

}


ListaDoble Funciones::Union(ListaDoble ConjA, ListaDoble ConjB, vector<string>camposSelect, vector<string>camposSelect2) {
	NodoDoble* tmpA = ConjA.primero;
	NodoDoble* tmpB = ConjB.primero;
	ListaDoble ans;

	while (tmpA != nullptr) {

		ListaSimple comprarA;
		
			for (int x = 0; x < camposSelect.size(); x++) {

				NodoSimple* tmp2 = tmpA->Objetos.primero;
				while (tmp2 != nullptr) {
				if (tmp2->getNombreC() == camposSelect[x]) {
					comprarA.agregarNodo(tmp2);
				}

				tmp2 = tmp2->getSiguiente();
			}

		}
		if (contengo(comprarA, ans, camposSelect.size(), camposSelect)==false) {
			if ( contengo(comprarA, ConjB, camposSelect.size(),camposSelect2)==true) {
				ans.agregarNodo(tmpA, comprarA);
			}
			else {
				ans.agregarNodo(tmpA, comprarA);
			}

		}
		tmpA = tmpA->getSiguiente();
	}
	while (tmpB != nullptr) {

		ListaSimple comprarB;

			for (int x = 0; x < camposSelect.size(); x++) {
				NodoSimple* tmp3 = tmpB->Objetos.primero;
				while (tmp3 != nullptr) {
				if (tmp3->getNombreC() == camposSelect2[x]) {
					comprarB.agregarNodo(tmp3);

				}
				tmp3 = tmp3->getSiguiente();

			}

		
		}
		if (contengo(comprarB, ans, camposSelect.size(), camposSelect2)==false) {
			if (contengo(comprarB, ConjA, camposSelect.size(), camposSelect)==false) {
				ans.agregarNodo(tmpB, comprarB);
			}
		}

		tmpB = tmpB->getSiguiente();
	}

	return ans;
}

int Funciones::obtenerTamanoRegistros(ListaDoble _lista) {
	NodoDoble* tmp = _lista.primero;
	int cont = 0;
	while (tmp != nullptr) {
		cont++;
		tmp = tmp->getSiguiente();
	}
	return cont;
}

int Funciones::obtenerTamanoCampos(ListaSimple _lista) {
	NodoSimple* tmp = _lista.primero;
	int cont = 0;
	while (tmp != nullptr) {
		cont++;
		tmp = tmp->getSiguiente();
	}
	return cont;
}

