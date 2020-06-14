#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//se crea el prototipo de la funcion//
void encontrarmagico(int);
int main(){
	int numeromagico;
	srand(time(NULL));
	numeromagico=1+rand()%(100);
	encontrarmagico(numeromagico);
	return 0;
}
void encontrarmagico(int numeromagico){
	int n1=0, contar=1;
	char f, band='F';
	while((numeromagico!=n1)&&(contar<6)&&(band=='F')){
		cout<<"Ingrese un numero: ";
		cin>>n1;
		if(n1>numeromagico){
			cout<<"Su numero es menor"<<endl;
			cout<<"Le quedan "<<5-contar<<endl;
		}else if (n1<numeromagico){
			cout<<"Su numero es mayor"<<endl;
			cout<<"Le quedan "<<5-contar<<endl;
		}else if(n1==numeromagico){
			cout<<"FELICIDADES SU NUMERO ES EL INDICADO"<<endl;
			cout<<"Usted adivino en el intento "<<contar<<endl;
		}
		//utilizo un band para que al presionar F se termine el juego//
		cout<<"Presione F si ya no quiere seguir jugando";
		cin>>f;
		if((f=='F')||(f=='f')){
			band='V';
		}
		contar++;
		}
	}
