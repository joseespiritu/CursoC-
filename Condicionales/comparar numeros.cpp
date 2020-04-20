/* Un programa que lea dos numero y determine cual es el mayor */

#include <iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"Digite dos numeros: ";
	cin>>n1>>n2;
	
	if(n1==n2){
		cout<<"Ambos numeros son iguales";
	} else if(n1>n2){
		cout<<"El mayor es: "<<n1;
	} else {
		cout<<"El mayor es: "<<n2;
	}
	
	return 0;
}
