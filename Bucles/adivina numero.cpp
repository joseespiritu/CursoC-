// juego numero aleatorio

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int numero, dato, contador = 0;
	
	srand(time(NULL));//genera un numero aleatotio
	dato = 1 + rand()%(100);
	
	do {
		cout<<"Digite un numero: "; cin>>numero;
		if(numero>dato){
			cout<<"\nDigite un numero menor\n";
		}
		if(numero<dato){
			cout<<"\nDigite un numero mayor\n";
		}
		contador++;
	} while(numero != dato);
	
	cout<<"\nFelicidades adivinaste el numero\n";
	cout<<"Numero de intentos: "<<contador<<endl;
	
	system("pause");
	return 0;
}
