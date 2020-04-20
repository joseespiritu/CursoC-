// suma de 2 elevado a la n

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
	int suma = 0, elevacion = 0,n;
	
	cout<<"Digite el numero de elementos a sumar: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		elevacion = pow(2,i);
		suma += elevacion;
	}
	
	cout<<"La suma total es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
