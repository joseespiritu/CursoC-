/* Realice un programa que lea de la entrada estandar lo siguientes datos
de una persona:

	Edad: tipo entero
	Sexo: tipo caracter
	Altura en metros: tipo real

Tras leer los datos el programa debe mostrarlos en la salida estandar */

#include <iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo: "; cin>>sexo;
	cout<<"Digite su altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"\nSexo: "<<sexo<<endl;
	cout<<"\nAltura en metros: "<<altura<<endl;
	
	return 0;
}
