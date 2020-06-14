#include <iostream>

using namespace std;
void calcular();

int empleados, horas[100], extras[100], contar=0;
float salario[100], salario_real[100];
//variables que utilice//
int main (){
	
	cout<<"ingrese el numero de empleados: ";
	cin>>empleados;
	//pregunta al usuario las horas laboradas//
	while(contar<empleados){
		cout<<"¿cuantas horas a trabajado?: ";
		cin>>horas[contar];
		cout<<"¿cuantas horas extra a trabajado?: ";
		cin>>extras[contar];
		contar++;
	}
	calcular();
	return 0;
}
void calcular(){//Muestra los resultados de los datos ingresados//
	contar=0;
	while(contar<empleados){
		salario[contar]=(horas[contar]*1.75)+(extras[contar]*2.50);
		if(salario[contar]>500){
			salario_real[contar]=salario[contar]-((salario[contar]*0.04)+(salario[contar]*0.0625)+(salario[contar]*0.10));
		}else{
			salario_real[contar]=salario[contar]-((salario[contar]*0.04)+(salario[contar]*0.0625));
		}
		cout<<"el salario del empleado "<<contar+1<<" es: "<<salario[contar]<<endl;
		cout<<"el salario real del empleado "<<contar+1<<" es: "<<salario_real[contar]<<endl;
		contar++;	
	}
}
