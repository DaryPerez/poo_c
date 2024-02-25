#include "Persona.cpp"
#include <iostream>
using namespace std;

class Estudiante : Persona {
	// atributo del estudiante es carnet porque lo demas esta en persona 
	private : string carnet ; 
	// constructor 
	public : Estudiante (){
	}
	Estudiante (string nom, string ape, string dir, int tel, string fn, string ca)
	: Persona(nom, ape, dir, tel, fn){
		carnet = ca ;
	}
	// Metodo para mostrar los datos en consola 
	void leer (){
		cout << nombres << endl; 
		cout << apellidos<<endl;
		cout <<direccion<<endl; 
		cout << telefono<<endl; 
		cout << fecha_nacimiento<<endl;
		cout << carnet<<endl;
	}
};
