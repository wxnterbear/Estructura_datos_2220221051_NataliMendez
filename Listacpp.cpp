//Lista

#include <iostream>
#include <conio.h>

using namespace std;


struct Nodo{
	int num;
	struct Nodo* sig;
};

struct Nodo *n_ini, *n_aux, *n_fin;


void agregar_list(int dato){
	
	if(n_ini == NULL){
		
		n_ini= new (Nodo);
		n_ini -> num = dato;
		n_fin = n_ini;
		
	}else{
		n_aux = new (Nodo);
		n_fin -> sig = n_aux;
		n_aux -> num = dato;
		n_fin = n_aux;
	}
	
	n_fin -> sig = NULL;
}


void show_list(){
	
	n_aux = n_ini;
	int i = 1;
	cout<<endl;
	cout<< endl <<endl << "--- Nodos de la lista ---" <<endl <<endl;
	while(n_aux != NULL){
		
		cout<<"Nodo # " << i << " = " << n_aux -> num <<endl;
		n_aux = n_aux -> sig;
		i++;
		
	}
}

int main(){
	
	int dato;
	char opc;
	
	do{
		cout <<endl;
		cout<< endl << "Por favor, ingresar un numero: ";
		cin>> dato;
		agregar_list(dato);	
		cout<< "Ingresar mas numeros? (y/n): ";
		cin>> opc;
		
	}while(opc == 'y');
	
	show_list();
	 
	
	
	return 0;
	
	
}
