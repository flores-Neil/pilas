    #include<iostream>
    #include<conio.h>
    #include<stdlib.h>
    using namespace std;

    // DECLARAACION DE PILA-------->
    int pila[3],cima=(-1); 

    // FUNCIONES -------------------->
    void agregarDato(){ 

        if(cima<2){
            cout<<"Introdusca el valor a meter ala pila: "<<endl<<"->";
            cin>>pila[cima+1];
            cima++;
            cout<<"el valor se introdujo correctamente ala pila: "<<endl<<endl;
            system("PAUSE");
        }
        else{
            cout<<"imposible meter mas datos ala pila: "<<endl<<endl;
            system("PAUSE");
        }	
    }

    void sacarDato(){

        if(cima>(-1)){// si pila esta vacia
            cima--;
            cout<<"se ha eliminado un valor en la pila: "<<endl;
            cout<<"el valor eliminado es: "<<pila[cima+1]<<endl<<endl;
            system("PAUSE");
        }
        else{
            cout<<"imposible sacar datos la pila esta vacia: "<<endl<<endl;
            system("PAUSE");	
        }
    }

    void pilaVacia(){

        if(cima==(-1)){
            cout<<"pila vacia: "<<endl<<endl;
            system("PAUSE");
        }
        else{
            cout<<"la pila no esta vacia ay elementos dentro de ella: "<<endl;
            system("PAUSE");
        }	
    }

    void pilaCompleta(){
        if(cima>-1){
            cout<<"\t [";
                for(int i=cima;i>-1;i--){
                    cout<<pila[i]<<" , ";   }
                    cout<<"END ]";
                    system("PAUSE");
        }
        else{
            cout<<"la pila esta vacia: "<<endl<<endl;
            system("PAUSE");
        }	
    }

    void menu(){
            int opc;
        do{
        system("cls");
        cout<<"BIENVENIADO A SU SORTWARE DE BASE DE DATOS PILAS:"<<endl<<endl;
        cout<<"MENU: "<<endl<<endl;
        cout<<"[1] agregar datos ala pila: "<<endl;
        cout<<"[2] sacar datos ala pila: "<<endl;
        cout<<"[3] pila vacia?: "<<endl;
        cout<<"[4] mostrar pila completa: "<<endl;
        cout<<"[5] salir: "<<endl<<endl;
        cin>>opc;

        switch(opc){

        case 1: agregarDato(); break;
        case 2: sacarDato(); break;
        case 3: pilaVacia(); break;
        case 4: pilaCompleta(); break;
        case 5: break;
        default: cout<<"opcion no valida :"<<endl<<endl; system("PAUSE");   }
        }while(opc != 5);
    }

    int main(){
        menu();

        getch();
        return 1;
    }