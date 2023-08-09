/*Ejercicio 2: Hacer un programa en C++, utilizando Pilas que contenga el siguiente menu: 

 1. Insertar un caracter a la pila
 2. Mostrar todos los elementos de la pila
 3. Salir
 */
    #include<iostream>
	#include<conio.h>
	#include<stdlib.h>
	using namespace std;
	
	struct nodo{
    char dato;
    nodo *siguiente;
    };
	
	void agregarPila(nodo *&nodo_superior , char n){
	
        nodo *nuevoNodo = new nodo();
        nuevoNodo->dato = n; 
        nuevoNodo->siguiente = nodo_superior;
        nodo_superior = nuevoNodo;
        cout<<"\n el dato ["<<n<<"] se agrego correctamente al pila: "<<endl<<endl;
        system("PAUSE");
	}
	
	void sacarPila(nodo *&nodo_superior, char &n){
	
        nodo *aux = nodo_superior; 
        n = aux->dato; 
        nodo_superior = aux->siguiente; 
        delete aux;
	}

    void menu(){
          int opc,opcion;
	    char dato;
	    nodo *pila = NULL;
	do{ 
        system("cls");
        cout<<"BIENBENIDO A LA BASE DE DATOS PILA: "<<endl<<endl;
        cout<<"_________MENU____________"<<endl;
        cout<<"[1]. agregar elementos ala pila: "<<endl;
        cout<<"[2]. mostrar elementos ala pila: "<<endl;
        cout<<"[3]. salir: "<<endl;
        cin>>opc;
	switch(opc){

	case 1: cout<<"Digite el elemento a ingresar en la pila: "<<endl; cin>>dato;
	    agregarPila(pila, dato);
	break;
	
	case 2: cout<<"desea sacar los elementos de la pila de forma iterativa o una por una (1/2): ";
        cin>>opcion;

    switch(opcion){
    	
    case 1:	cout<<"\n\nsacando elementos de la pila: \n\n";	
	    while(pila != NULL){
	    sacarPila(pila,dato);

	if(pila != NULL){
	    cout<<"ulitmo elemento ingresado: ["<<dato<<"], "<<endl; }
    else{ 
        cout<<"primer elemento ingresado:  ["<<dato<<"] , "<<endl<<endl;;
	    system("PAUSE"); } } break;
	
	case 2: sacarPila(pila,dato);
	    if(pila != NULL){
	        cout<<"ulitmo elemento ingresado: ["<<dato<<"], "<<endl; system("PAUSE"); }
	    else{
	    cout<<"primer elemento ingresado: ["<<dato<<"] . "<<endl<<endl; system("PAUSE"); }
	    break; 
    }
    break;
	
	case 3: break;
	
	default: cout<<"-------imposible pocesar: "<<endl; system("PAUSE"); }
	}while(opc !=3);

    }
	
	int main(){
	    menu();
	    getch();
	    return 1;
}

