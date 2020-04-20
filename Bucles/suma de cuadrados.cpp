// calcule y muestra la suma de los cuadrados de los 10 primeros enteros mayores que cero

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int suma = 0, cuadrado;
	
	for(int i = 1; i<=10;i++){
		cuadrado = i * i;
		suma += cuadrado;
	}
	
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	getch();
	return 0;
}

