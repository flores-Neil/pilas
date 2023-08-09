// capitulo pilas:
	#include<iostream>
	#include<conio.h>
	#include<stdlib.h>
	using namespace std;
	
	struct nodo{
    int dato;
    nodo *siguiente;
	};
	
	void agregarPila(nodo *&pila , int n){

	nodo *nuevoNodo = new nodo();   // reservando memoria para el nodo
	nuevoNodo->dato = n;            //  rellenando el nodo
	nuevoNodo->siguiente = pila;    // rellenando al puntero
	pila = nuevoNodo;               // agregar nuevo nodo
	cout<<"\n el dato "<<n<<" se agrego correctamente al pila: "<<endl;
	}

	void sacarPila(nodo *&pila, int &n){

	nodo *aux = pila;            // crear la variable de tipo nodo 
	n = aux->dato;              // Igualar el n a aux-dato
	pila = aux->siguiente;      //Pasar pila a siguiente nodo
	delete aux;                 // eliminar aux
	}
	
	int main(){
	
	nodo *pila = NULL;
	int dato;
	cout<<"agrege el primer elemento de la pila: ";cin>>dato;
	agregarPila(pila, dato);
	cout<<"agrege el segundo elemento de la pila: ";cin>>dato;
	agregarPila(pila, dato);
	cout<<"Sacando elementos de la pila :\n";

	while(pila != NULL){
        
	    sacarPila(pila,dato);
	 	if(pila != NULL){
	 		    cout<<dato<<" , ";
		 }
		 else{
		 	cout<<dato<<" . ";
		 }
	 }	

	getch();
	return 1;
}