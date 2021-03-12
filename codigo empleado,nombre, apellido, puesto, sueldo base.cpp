#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void entrada();
void buscar();
void buscarMenu();
void buscarNombre();
void buscarcodigo();
void buscarSalario();
void salir();
void mostrarTodo();
void borrarDatos();
void editarDatos();
void borraRegistro();


int main()
{   
       system ("cls");
   system ("color A");
       int menu;
       cout << "1.Ingrese nuevo empleado" << endl;
       cout << "2.Buscar empleado" << endl;
       cout << "3.Borrar todos los datos" << endl;
       cout << "4.Editar datos" << endl;
       cout << "5.borrar datos de un empleado" << endl;
       cout << "6.Salir del programa" << endl;
       cout << "\ningrese opcion: ";
       cin >> menu;

switch (menu){
       case 1:
            entrada();
            break;
       case 2:
            buscar();
            break;
       case 3:
            borrarDatos();
            break;
       case 4:
            editarDatos();
            break;
        case 5:
            borraRegistro();
            break;
       case 6:
            salir();
            break;
            
       cin.get();
            

       }
}

void entrada()
{       
 string nombre;
 int codigo; 
 long int salario;
 ofstream nuevoEmpleado("empleados.dat", ios::app);
 system("cls");


 cout << "Ingrese codigo: ";
 cin >> codigo;
 
 cout << "Ingrese nombre: ";
 cin >> nombre;
 
 cout << "Ingrese salario mensual: ";
 cin >> salario;

    
 nuevoEmpleado << nombre << codigo <<salario << endl;     
 nuevoEmpleado.close(); 
getch();
}

void buscar(){
     int codigo ;
     string nombre;
     long double salario;
     int buscarMenu;
     system ("cls");
     
     cout << "1.Buscar por Nombre" << endl;
     cout << "2.Buscar por codigo" << endl;
     cout << "3.Buscar por salario" << endl;
     cout << "4.Mostrar todos los empleados" << endl;
     cout << "5.Regresar" << endl;
     cout << "6.Salir del programa" << endl;
     cout << "Ingrese opcion: ";
     cin >> buscarMenu;

switch (buscarMenu){
            case 1:
                 buscarNombre();
                 break;
        case 2:
                buscarcodigo();
                  break;
            case 3:
                 buscarSalario();
                 break;
            case 4:
                 mostrarTodo();
                 break;
            case 5:
                 main();
                 break;
            case 6:
                 salir();
                 break;
                 }
}

void buscarcodigo(){
ofstream empleado("empleados.dat");
int cod;
     string nombre;
     string str, line;
     int codigo, offset;
     long int salario;
     cout<<("Ingrese codigo: ");
 cin>>cod;
   if (cod == codigo){
			     system ("cls");
			     cout << "Empleado encontrado" << endl;
			     cout << "Nombre\t" << ' ' << "codigo\t" << ' ' << "Salario" << endl;
     				cout << "------------------------" << endl;
     				cout << nombre <<"\t" <<  ' ' <<  codigo << "\t" << ' ' << "$" << salario << endl ;
			}
   	
	;
}
void buscarNombre()
{
     ifstream empleado("empleados.dat");
     string nombre;
     string str, line;
     int codigo, offset;
     long int salario;
     system("cls");
     cout << "Ingrese el nombre del empleado: ";
     cin >> str;
              
     while (empleado >> nombre >> codigo >> salario){  
           if (str == nombre){
			     system ("cls");
			     cout << "Empleado encontrado" << endl;
			     cout << "Nombre\t" << ' ' << "codigo\t" << ' ' << "Salario" << endl;
     				cout << "------------------------" << endl;
     				cout << nombre <<"\t" <<  ' ' <<  codigo << "\t" << ' ' << "$" << salario << endl ;
			}
     }

            
     while (empleado >> nombre ){
                 if (str != nombre){
                 system ("cls") ;   
                 cout << "Ese nombre no existe en la base de datos." << endl;     
                      
                      }
                      }
     system ("pause");
     main(); 
 }
 
 void buscarEdad()
 {
     ifstream empleado("empleados.dat");
     string nombre;
     int codigo ;
     int xedad;
     long int salario;
     system ("cls");
     cout << "Ingrese la edad del empleado: ";
     cin >> xedad;
     while (empleado >> nombre >> codigo >> salario){
           if (xedad == codigo){
                    system ("cls");
                    cout << "Empleado encontrado: " << endl;
                    cout << "Nombre\t" << ' ' << "codigo\t" << ' ' << "Salario" << endl;
     				cout << "------------------------" << endl;
     				cout << nombre <<"\t" <<  ' ' <<  codigo << "\t" << ' ' << "$" << salario << endl ;
            }
     }
     while (empleado >> codigo){      
           if (xedad != codigo){
                    system ("cls");
                    cout << "No se encontraron empleados de ese codigo."<< endl;
                    
                    
                    }  
           }
           system ("pause");
           cin.get();
           main();
  }
 
 void buscarSalario()
{
     ifstream empleado ("empleados.dat");
     string nombre;
     int codigo ;
     long int salario;
     long int xsalario;
     system ("cls");
     cout << "Ingrese salario que desea buscar: ";
     cin >> xsalario;
     while (empleado >> nombre >> codigo >> salario){
           if (xsalario == salario ){
                    system ("cls");
                    cout << "Empleados encontrados:"<< endl;
                    cout << "Nombre\t" << ' ' << "codigo\t" << ' ' << "Salario" << endl;
     				cout << "------------------------" << endl;
     				cout << nombre <<"\t" <<  ' ' <<  codigo << "\t" << ' ' << "$" << salario << endl ;
                       
            }
     }
     while (empleado >> salario){
            if (xsalario != salario){
                system ("cls");
                cout << "No se encontraron Empleados con ese salario." << endl;
                }
           }
     system("pause");
     cin.get();
     main();
 }
 
 void mostrarTodo()
{
     ifstream empleado("empleados.dat");
     int codigo;
     long int salario;
     string nombre;
     system ("cls");
     cout << "Base de datos completa."<< endl;
     cout << "Nombre\t" << ' ' << "codigo\t" << ' ' << "Salario" << endl;
     cout << "------------------------" << endl;
     while (empleado >> nombre >> codigo >> salario){
     cout << nombre <<"\t" <<  ' ' <<  codigo << "\t" << ' ' << "$" << salario << endl ;
     }
     system ("pause");
     cin.get();
     main(); 
}

void salir()
{
 system ("cls");
 cout << "El programa se ha cerrado." << endl;
 system ("pause");
 cin.get();
     } 
     
void borrarDatos()
{
     
     string decision;
     cout << "Esta seguro que desea borrar todos los datos?[s][n]" << endl;
     cin >> decision;
     if (decision == "s"){
     ofstream empleado("empleados.dat");
     system("cls");
     cout << "Se han borrado todos los datos." << endl;
     system("pause");
     empleado.close();
     main();
     }
     else{
          main();
          }
}

void borraRegistro()
{ 


	system("cls");
	char nombre[20];
	int codigo, salario;
	
	ifstream empleado;
	empleado.open("empleados.dat", ios::in);
	
	ofstream entrada;
	entrada.open("temp.dat",ios::out);
	
	
	if(empleado.fail()){
		cout<<"hubo un error al abrir el archivo empleados.txt";
		_getch();
	}
	else{
		char aux[20];
		
		cout<<"introduzca el nombre del empleado que desea borrar: ";
		cin>>aux;
		
		empleado>>nombre;
		
		while(!empleado.eof()){
			empleado>>codigo>>salario;
			if(strcmp(aux, nombre)==0){
				
				cout<<"el registro se ha eliminado."<<endl;
				_getch();
			}
			else{
							entrada<<nombre<<" "<<codigo<<" "<<salario<<endl;
			}
			empleado>>nombre;
		}
		
		entrada.close();
		empleado.close();
		
		remove("empleados.txt");
		rename("temp.txt", "empleados.txt");
		
	}
	main();
}  

void editarDatos()
{
 string nombre, entrada, nuevoNombre,decision;
 int codigo;
 double salario;
 ifstream empleado("empleados.txt");
 if (!empleado.eof()){
empleado >> nombre >> codigo >> salario;
}
 system("cls");
 
 cout << "Ingrese nombre del Empleado: ";
 cin >> entrada;

 if (entrada == nombre)
 {
     
     cout << nombre << ' ' << codigo << ' ' << salario << endl;
     cout << "Los datos de emleado son correctos? [s][n]: ";
     cin >> decision;
     if (decision == "n"){
     cout << "Ingrese nuevo nombre: ";
     cin >> nuevoNombre;
     nombre = nuevoNombre;      
           } 
            
     empleado.close();
     }
    
     ofstream empleado2("empleados.txt", ios::app);
     empleado2 << nombre << ' ' << codigo << ' ' << salario << endl;
     empleado2.close();
 system("pause");
 main();
}

