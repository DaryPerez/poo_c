#include <iostream>
using namespace std;

class Persona {
	  //atributos de persona = nombres, apellido, direccion, telefono, fecha_nacimiento
	protected : string nombres, apellidos, direccion, fecha_nacimiento; 
	int telefono ; 
	
	  // Metodos definimos el metodo de el constructor: 
	Persona (){
	} 
	Persona(string nom, string ape, string dir, int tel, string fn){
		nombres = nom ;
		apellidos = ape ;
		direccion = dir; 
		telefono = tel;
		fecha_nacimiento = fn;
	}
	
	// Metodos CRUD = crear leer actualizar y borrar 
	void crear (); 
	void leer ();
	void actualizar ();
	void borrar ();
};
