//3 Arreglos

#include <iostream>

using namespace std;

int main(){
	
	int a = 15;
	int arreglo [a];
	for(int i = 1; i<=3;i++){
		
		cout << "---> ARREGLO #"  <<  i << endl;
		cout << endl;
		
		for(int y = 0; y<a;y++){
                    cout << "Ingrese el numero de la posicion [ "  <<  y  <<  " ]: ";
                    cin>> arreglo[y];
                    
                }
        //ordenar el arreglo asc
		        
        for(int x = 0; x<a-1;x++){
        	for(int z = x+1; z<a;z++){
        		if(arreglo[x]>arreglo[z]){
        			int num_aux = arreglo[x];
        			arreglo[x]= arreglo[z];
        			arreglo[z]= num_aux;
				}
			}
		}
		
		cout << endl;
        cout<<"Arreglo ordenado"<<endl;
        cout << "" << endl;
        
        for(int w = 0; w<a; w++){
            
            cout<< "arreglo [ " << w << " ] es: " << arreglo[w] << endl;
                    }
		
		        
        cout << endl;
		cout << "Que numero desea encontrar?: ";  
		int num_buscado; 
		cin>> num_buscado;    
		int num_superior = a-1;
		int num_inferior = 0;
		int num_centro;
		
		while(num_inferior<=num_superior){

                        num_centro = (num_superior + num_inferior)/2;
                        if(arreglo[num_centro] == num_buscado){
                        	cout << endl;
                            cout<<"El numero buscado esta en la posicion [ " << num_centro << " ]"<< endl;
                            cout << endl;
                            break;

                        }else if(num_buscado < arreglo[num_centro]){
                            num_superior = num_centro -1;
                        }else{
                            num_inferior = num_centro +1;
                        }
                    }
	}
}
