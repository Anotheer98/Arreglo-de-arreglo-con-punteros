/*Hacer una función para almacenar N numeros en un arreglo dinámico y en otra función,
buscar un número en particular, la posicion de memoria donde se encontró y la dirección de memoria.
 Al final, mostrar todos los elementos del arreglo. NOTA: Se puede utilizar cualquier método, sea secuencial o binario*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int *Vector;
int No_Elementos;

void Long_Vector();
void Buscar_Elemento(int *, int);
void Mostrar_Vector(int *, int);

int main(){

    Long_Vector();
    Buscar_Elemento(Vector, No_Elementos);

    getch();
    Mostrar_Vector(Vector, No_Elementos);

    delete[] Vector;
    getch();
    return 0;
}

void Long_Vector(){

    cout <<"Escribe la longitud del Vector(arreglo): " <<endl;
    cin >>No_Elementos;

    Vector = new int[No_Elementos];

    for(int i=0; i<No_Elementos; i++){
        cout <<"Escribe un numero en la posicion ["<<i<<"] del arreglo: "<<endl;
        cin >>*(Vector+i);
    }
}

void Buscar_Elemento(int *Vector, int No_Elementos){

    int i=0;
    bool Validar = false;
    int No_Buscar;

    cout <<"Que numero deseas buscar dentro del arreglo?" <<endl;
    cin >>No_Buscar;

    while((i<No_Elementos) && (Validar == false)){

        if((*(Vector+i) == No_Buscar)){
            Validar = true;

            //{1, 2, 3} 
        }
       i++; //i=i+1;   
    }

    if(Validar==false){
        cout <<"El numero que escribiste no pertenece al vector." <<endl;
    }

    else if(Validar == true){
        cout <<"El numero que escribiste pertenece al arreglo. " <<endl;
        cout <<"Se encontro en la posicion de memoria: ["<<(i-1)<<"]"<<endl;
        cout <<"La direccion de memoria de la posicion es: " <<Vector+i<<endl;
    }
    
    cout <<endl;
}

void Mostrar_Vector(int *Vector, int No_Elementos){

    cout <<"Los elementos del vector son: " <<endl;

    for(int i=0; i<No_Elementos; i++){
        cout <<"["<<*(Vector+i)<<"]";
    }
}