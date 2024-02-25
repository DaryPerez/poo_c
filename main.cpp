#include "Estudiante.cpp"
#include <iostream>
using namespace std;
 main (){
 	// instancia de un objeto
 	string varn;
 	cout<<"ingrese nombre: ";
 	cin >> varn;
 	
 	string varap;
 	cout << "ingrese apellido: ";
 	cin >> varap;
 	
 	string vard;
 	cout << "ingrese direccion: ";
 	cin >> vard;
 	
 	int vart;
 	cout << "ingrese telefono: ";
 	cin >> vart ;
 	
 	string varfn;
 	cout << "ingrese fecha de nacimiento: ";
 	cin >> varfn;
 	
 	string varc;
 	cout << "ingrese carnet: ";
 	cin >> varc;
 	
 	Estudiante estudiante = Estudiante (varn, varap,vard,vart,varfn,varc);
 	estudiante.leer();
 }
