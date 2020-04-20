// edad en entero que indique si la edad esta en el rango [18-25]

#include <iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Digite su edad: ";
	cin>>edad;
	//18-19-20-21-22-23-24-25
	if(edad>=18 &&(edad<=25)){
		cout<<"Su edad esta en el rango de [18-25]";
	} else {
		cout<<"Su edad no esta en el rango";
	}
	
	return 0;
}
