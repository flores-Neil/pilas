//Ejercicio 2: Hacer un programa para agregar números enteros a una pila,
//hasta que el usuario lo decida, después mostrar todos los números introducidos en la pila.
    #include<iostream>
	#include<conio.h>
	#include<stdlib.h>
	using namespace std;
	
	struct nodo{
	int dato;
	nodo *siguiente;
	};

	void agregarPila(nodo *&nodo_superior , int n){
	
        nodo *nuevoNodo = new nodo(); 
        nuevoNodo->dato = n; 
        nuevoNodo->siguiente = nodo_superior; 
        nodo_superior = nuevoNodo; 
        cout<<"\n el dato ["<<n<<"] se agrego correctamente al pila: "<<endl<<endl;
        system("PAUSE");
	}
	
	void sacarPila(nodo *&nodo_superior, int &n){
	
        nodo *aux = nodo_superior; 
        n = aux->dato;
        nodo_superior = aux->siguiente;
        delete aux;
	}

    void menu(){
        int opc,dato;
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
    agregarPila(pila,dato); break;
	
	case 2: cout<<"\n\nsacando elementos de la pila: \n\n";	
    while(pila != NULL){ sacarPila(pila,dato); 

    if(pila != NULL){ 
    cout<<"el elmento de la pila es: ["<<dato<<"], "<<endl; }
	else{ 
    cout<<"ultimo elemento: ["<<dato<<"] . "<<endl<<endl; system("PAUSE"); } } break;
	
	case 3: break;
	
	default: cout<<"-------imposible pocesar: "<<endl; system("PAUSE"); }
	}while(opc !=3);
}
	
	int main(){
        menu();
        getch();
        return 1;
}
