/*ESCRIBE UN PROGRAMA QUE ORDENE UN ARREGLO DE NUMEROS. UTILIZA EL MÉTODO BURBUJA Y REALÍZALO CON PUNTEROS*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int NoElementos;
int *Apt;

void Pedir_Datos();
void Ordenar_Arreglo(int *, int);
void Mostrar_Arreglo(int *, int);

int main(){
	
	Pedir_Datos();
	Ordenar_Arreglo(Apt, NoElementos);
	Mostrar_Arreglo(Apt, NoElementos);
	
	delete[] Apt;
	
	getch();
	return 0;
}

void Pedir_Datos(){
	
	cout <<"Digita la cantidad de numeros del arreglo: " <<endl;
	cin >> NoElementos;
	
	Apt = new int(NoElementos);
	
	for(int i=0; i<NoElementos; i++){
		cout <<"Escribe un numero del arreglo en la posicion: ["<<i+1<<"]"<<endl;
		cin >>*(Apt +i);
	}
}

void Ordenar_Arreglo(int *Apt, int NoElementos){
	
	int Aux =0;
	
	for(int j=0; j<NoElementos; j++){
		
		for(int i=0; i<NoElementos-1; i++){
			
			if(*(Apt +i) > *(Apt + (i+1))){
				
				Aux = *(Apt +i);
				*(Apt +i) = *(Apt +(i+1));
				*(Apt +(i+1)) = Aux;				
			}
		}
	}
}

void Mostrar_Arreglo(int *Apt, int NoElementos){
	
	cout <<"Mostrando el arreglo ordenado!" <<endl;
	for(int i=0; i<NoElementos; i++){
		
		cout <<"["<<*(Apt+i)<<"]";
	}
}