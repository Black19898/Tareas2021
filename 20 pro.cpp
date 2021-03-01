#include <iostream>
#include <cmath>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

using namespace std;
void carro();
void carro1();
void carro2();
void carro3();
void carro4();
void carro5();
void carro6();
void carro7();
void carro8();
void carro9();
void carro10();
void carro11();
void carro12();
void carro13();
void carro14();
int main(){
carro();	
}
void carro(){
int a,b,c,d;
do{
system("cls");
cout<<("1.Operaciones basicas")<<endl;
cout<<("2.Determinar par o impar")<<endl;
cout<<("3. Palabra a palindromo ")<<endl;
cout<<("4. Conversio de numeros  a enteros")<<endl;
cout<<("6. Numeros enteros a letras")<<endl;
cout<<("8. Tabla de Multiplicar")<<endl;
cout<<("9 Tablas de multiplicar del 1 al 9")<<endl;
cout<<("11. Conversion de numeros decimales a binarios")<<endl;
cout<<("12. Conversion de numeros decimales a hexadecimales")<<endl;
cout<<("16 Calcular la hipotenusa")<<endl;
cout<<("17. Anos visciestos")<<endl;
cout<<("19. Dias transcurridos")<<endl;
cout<<("20. menu  ")<<endl;
cout<<("Salir  ")<<endl;
cout<<("Ingrese opcion:")<<endl;
cin>>a	
switch(a){
case 1:
float primero=1;
float segundo=1;
float resultado;

cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]." << endl;

cin >> opcion;
cout << "Ingrese un numero: ";

cin >> primero;

cout << "Ingrese un numero: ";

cin >> segundo;



if (opcion==1){

    resultado = primero+segundo;

}

if (opcion==2){

    resultado = primero-segundo;

}

if (opcion==3){

    resultado = primero*segundo;

}

if (opcion==4){

    resultado = primero/segundo;

}

cout << resultado;
cin.ignore();
cin.get(); 
break;	
	
	case 2:
	break;
	case 3:
	break;
	case 4:
		   string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo!! :D" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo!! :D" << endl;
    }
    
    return 0;
}
	break;
	case 6:
	break;
	case 8:
	break;
	case 9:
	break;
	case 11:
		
	int numero=264,resultado=0,arreglo[10],i=0,cont,j=0;
 
	while(numero!=0){
		if(numero%2==0){
			arreglo[i]=0;
		}
		else{
			arreglo[i]=1;
		}
		numero = numero/2;
		if(numero == 0 ){
			break;
		}
		cont++;
		i++;
	}
 
 
 
    if(numero%2 == 0){
    	arreglo[cont+1] = 0;
	}
	else{
		arreglo[cont+1] = 1;
	}
 
	for(int i=cont;i>=0;i--){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}
	break;
	case 12:
		 int i,num,n,dividendo,cociente,resto,a[10];
 clrscr();
 printf("Ingrese numero: ");
 scanf("%d",& num);
 n=0;
for(dividendo = num; dividendo > 0;n++)
 {
  cociente=dividendo/16;
  resto=dividendo%16;
  a[n]=resto;
  dividendo=cociente;
 }
   printf("El numero decimal %d equivale en Hexadecimal a: ", num);
  for( i=n-1; i>=0; i--)
  {
   if(a=='10')
   {
   a='A';
   printf("%c",a);
   }
   if(a=='11')
   {
   a='B';
   printf("%c",a);
   }
   if(a=='12')
   {
   a='C';
   printf("%c",a);
   }
   if(a=='13')
   {
   a='D';
   printf("%c",a);
   }
   if(a=='14')
   {
   a='E';
   printf("%c",a);
   }
   if(a=='15')
   {
   a='F';
   printf("%c",a);
   }
   else
   {
    printf("%d",a);
   }
 }
  getch();

	break;
	case 16:
		 float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
 
  return 0;
}
	break;
	case 17:
	break;
	case 19:
	break;
	case 20:
		int m;
    cout<<"\t\t\tElija una opcion\n\n";

    cout<<"1  Ingresos\n";
    cout<<"2  Modificacion\n";
    cout<<"3  Consultas\n";
    cout<<"4  Reportes\n";
    cout<<"5  Utilidades\n";
    cout<<"6  Salir\n\n";
    cin>>m;
 
switch(m)
{
case 1:cout<<"Ud tiene S/. 2500"<<endl;break;
case 2:cout<<"¿Que desea modificar?"<<endl;break;
case 3:cout<<"Escriba su consulta aqui: "<<endl;break;
case 4:cout<<"Ud. no presenta reportes"<<endl;break;
case 5:cout<<"Este servicio esta bloqueado por el momento"<<endl;break;
case 6:cout<<"Ya esta fuera"<<endl;break;
default: cout<<"El valor ingresado no esta en el menu"<<endl;
}
    cin.ignore(); return 0;
	break;
}	
}while(a!=21);	
}
}

