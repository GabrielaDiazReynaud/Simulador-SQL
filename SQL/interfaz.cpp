#include "interfaz.h"
#include"Funciones.h"
#include"ListaDoble.h"
#include<fstream>
#include<iostream>
#include"Estructuras.h"
using namespace std;
#include<string>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {
    
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SQL::interfaz form;
	Application::Run(% form);
}