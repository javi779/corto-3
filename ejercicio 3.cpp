#include <iostream>

using namespace std;
//creo un prototipo de la funcion//
void bisiesto(int);
int main(){
	int year;
	cout<<"digite su año: ";
	cin>>year;
	bisiesto(year);
	return 0;	
}
void bisiesto(int year){
	if(year%400==0){
		cout<<"Su año es bisiesto";
	}else if((year%4==0)&&(year%100!=0)){
		cout<<"Su año es bisiesto";
	}else{
		cout<<"su año no es bisiesto";
	}
	
}
hola
