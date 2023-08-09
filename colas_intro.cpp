//insertar elementos en la cola
    #include<iostream>
    #include<conio.h>
    #include<stdlib.h>
    using namespace std;

    struct nodo{
    int dato;
    nodo *siguiente;		
    };

    // prototipos de la funtion--------->
    void insertarCola(nodo *&, nodo *&, int);
    bool colaVacia(nodo *);
    void suprimirCola(nodo *&, nodo *&, int &);

    // funcion para agregar cola
    void insertarCola(nodo *&frente, nodo *&fin, int n ){
    
        nodo *nuevo_nodo = new nodo();
        nuevo_nodo->dato = n;
        nuevo_nodo->siguiente = NULL;
    
    if(colaVacia(frente)){
    frente = nuevo_nodo;		}
    else{
    fin->siguiente = nuevo_nodo;	}
    
    fin = nuevo_nodo;
    cout<<"elemento  ["<<n<<"] insertado correctamente ala cola: "<<endl<<endl;
    }
    // funcion determinar si la cola esta vacia 
    bool colaVacia(nodo * frente){
    return (frente == NULL)? true : false;
}
    // funcion quitar elementos de la cola
    void suprimirCola( nodo *&frente, nodo *&fin, int &n ){
        n= frente->dato;
        nodo *aux = frente;
        
        if(frente == fin){
            frente = NULL;
            fin = NULL;
        }
        else{
            frente = frente->siguiente;
        }
        delete aux;	
    }

    int main(){
    
    nodo *frente = NULL;
    nodo *fin = NULL;
    int n, opc,rpt;
    do{
    system("cls");
    cout<<"__BIENVENIDO ASU PROGRAMA DE TIPO COLA_____: "<<endl<<endl;
    cout<<"____MENU___"<<endl;
    cout<<"[1]. agregar elementos ala cola: "<<endl;
    cout<<"[2]. sacar elementos ala cola: "<<endl;
    cout<<"[3]. EXIT: "<<endl;
    cin>>opc;
    
    switch(opc){
    
    case 1:
    cout<<"digite el elemneto a agregar ala cola: "<<endl;
    cin>>n;
    insertarCola(frente,fin,n);
    system("PAUSE");
    break;
    
    case 2:
    // determinar si es de manera iterativa o por carater
    cout<<"Desea sacar los elementos  iterativamente o por carateres digite (1/2): "<<endl<<endl;
    cin>>rpt;
    system("cls");
    switch(rpt){ 
    // de manera iterativa	
    case 1:
    while(frente != NULL){
    suprimirCola(frente, fin, n);
    if(frente != NULL){
    cout<<"El elemento ["<<n<<"] fue eliminado correctamente: "<<endl<<endl;	
    }
    else{
    cout<<"ultimo elemeno ["<<n<<"]"<<endl<<endl;
    system("PAUSE");
    }	
}	
        break;
        
    // por caracteres
    case 2:
    suprimirCola(frente, fin, n);
    if(frente != NULL){
    cout<<"El elemento ["<<n<<"] fue eliminado correctamente: "<<endl<<endl;
    system("PAUSE");	
    }
    else{
    cout<<"ultimo elemeno ["<<n<<"]"<<endl<<endl;
    system("PAUSE");
    }		
    break;
    
    default:
    cout<<"imposible de procesar :"<<endl<<endl;
    system("PAUSE");
    }  
    // termina el condicional multiple del segundo caso
    break; // se acaba el caso 2
    
    case 3: 
    break;
    
    default :
    cout<<"imposible procesar datos: "<<endl<<endl;
    system("PAUSE");
    
    }    }while(opc !=3);
    
    getch();
    return 1;
    
}

        