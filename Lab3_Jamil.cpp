#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

     
 void mentesMaestras();

  	   int main(){
	       
		 int opcion = 0;    
		 cout<<"Bienvenido al programa elija una opcion: "<<endl; 
		 cout<<"1. Mentes Maestras:"<<endl;
		 cout<<"2. Factorizacion: "<<endl;
	 	 cout<<"3. Merge Sort: "<<endl;
		 cin>>opcion;

		 switch(opcion){
	  
		   case 1:
   	           mentesMaestras();
			   break;
		   case 2:

                	   break;
		   case 3:

			   break;
	
		 }//Final de switch
	     }//Final del main

void mentesMaestras(){
	srand(time(NULL));
	int random = 10000+rand()%(99999-10000);
	int contadorTurnos = 5;
	string cadenaRand = to_string(random);
        string subcadenaingresada1;
	string numero;
	int contIguales = 0;
	cout<<"Numero Random: "<<cadenaRand<<endl;
	while(contadorTurnos>0){
		cout<<"Tiene "<<contadorTurnos<<" oportunidades par adivinar el numero"<<endl; 
		cout<<"Ingrese el numero que desea tratar de verificar: "<<endl;
		cin>>numero;
		while(numero.length()<5||numero.length()>5){
			cout<<"Ingrese un numero de 5 digitos: "<<endl;
			cin>>numero;
		}
         	if(numero.compare(cadenaRand)==0){
	 		cout<<"Adivino todos los numeros! "<<endl;
	 		contadorTurnos = 0;
	 	}else{
		     for(int i=0; i<cadenaRand.length();i++){
				for(int j=0; j<numero.length();j++){
			   		if(cadenaRand[i]==numero[j]){
						if(i==j){
					          cout<<"El numero "<<numero[i]<<" esta correcto en su posicion";
					  	  cout<<""<<endl;
						  contIguales++;
						}
			   		}
				}
			}
			cout<<"Tiene "<<contIguales<<" numeros iguales"<<endl;	
			contadorTurnos--;
			contIguales=0;	
		}
		
	}
  }

void Merge(){
	int size = 0;
	cout<<"Ingrese el numero de numeros a ingresar: "<<endl;
        cin>>size;
	srand(time(NULL));
	int random = 10000+rand()%(99999-10000);
	int array [] = new int[size];

	for(int i = 0; i<array.length();i++){
	 array[i] = 	
	}


}

