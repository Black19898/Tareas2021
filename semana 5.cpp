#include <iostream>

using namespace std;

main(){

	int fila =0,columna = 0;

cout<<"---- Arreglos Bidimensionales ----"<<endl;

cout<<"Ingrese Numero de Filas:";

cin>>fila;

cout<<"Ingrese Numero de Columas:";

cin>>columna;

int tabla[fila][columna];

for (int i=0;i<fila;i++){

	cout<<" ------ Fila: "<<i<<" ------ " <<endl;

	for (int ii=0;ii<columna;ii++){

		int ingreso = 0;

		cout<<"Fila ["<<i<<"] Columna["<<ii<<"] :";

		cin>>ingreso;

		tabla[i][ii] = ingreso;

		

	}

}

cout<<"----- Mostrar datos de la tabla -----"<<endl;

for (int i=0;i<fila;i++){

	for (int ii=0;ii<columna;ii++){

		cout<<"["<<i<<"],["<<ii<<"] :"<<tabla[i][ii]<<endl;

	}

}





}
	 
