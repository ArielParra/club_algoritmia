#include <iostream>
#include <cstring>
#include <string.h>
//#include <windows.h>

const int MAX=10;

using namespace std;

//	prototipo de funciones de la estructura del menu principal y del submenu del caso1
int menuOpciones();
void trabajarMenu_Case1();
void infijoPostfijo_Case2();
void infijoPrefijo_Case3();
void invertirPila_Case7();

//	prototipo de funciones para uso en Case 1
void llenar_int(int *, int &);
void imprimir_int(int *, int);
bool pilaVacia_int(int);
bool pilaLlena_int(int);
void push_int(int *, int &);
void pop_int(int *, int &);

//	prototipo de funciones para uso en Case 2 & 3
bool EILleno_char(char *);
void push_char(char *, int &, char);
void pop_char(char *, int &, char);
void recortarExpresion(char *);
bool pilaVacia_char(int);
bool prioridadOperador(char, char);
void invertir(char *);	//	tambien se uso en el Case 7

int main(){
	int opc, opcCase1;
	
	do{
		opc=menuOpciones();
		
		switch(opc){
			case 1:
				system("cls || clear");
				trabajarMenu_Case1();
				break;
				
			case 2:
				system("cls || clear");
				infijoPostfijo_Case2();
				break;
			case 3:
				system("cls || clear");
				infijoPrefijo_Case3();
				break;
			case 4:
				system("cls || clear");
				cout<<endl<<"CASE4";
				break;
			case 5:
				system("cls || clear");
				cout<<endl<<"CASE5";
				break;
			case 6:
				system("cls || clear");
				cout<<endl<<"CASE6";
				break;
			case 7:
				system("cls || clear");
				//invertirPila_Case7();
				break;
			case 8:
				system("cls || clear");
				cout<<endl<<"EJECUCION TERMINADA!";
				break;
		}
		
	}while(opc!=8);
	
	return 0;
}	//	main

int menuOpciones(){
	int opc;
	
	while(opc<1 || opc>8){
		cout<<endl<<" - MENU -"
			<<endl<<"1. Trabajar con push y pop"
			<<endl<<"2. Traducir de notacion infija a postfija"
			<<endl<<"3. Traducir de notacion postfija a prefija"
			<<endl<<"4. Evaluar expresion dada en notacion prefija"
			<<endl<<"5. Evaluar expresion dada en notacion posfija"
			<<endl<<"6. Eliminar elementos repetidos de una pila"
			<<endl<<"7. Invertir pila"
			<<endl<<"8. SALIR";
		
		cout<<endl<<endl<<"Ingrese una opcion: ";
		cin>>opc;
		
	    system("cls || clear");
		if (opc<1 || opc>8){
			cout<<endl<<"INGRESE UNA OPCION VALIDA! ..."<<endl;
		}
	}
	
	return opc;
}	//	menuOpciones

void trabajarMenu_Case1(){
	// Para este caso, se va a trabajar con vectores (pila) dinamicos de tamaño MAX y sera llenado con valores aleatorios
	int *pila=new int[MAX];
	int TOPE=-1;
	bool BAND;
	
	cout<<endl<<"PILA ORIGIGINAL: ";
	llenar_int(pila, TOPE);
	imprimir_int(pila, TOPE);
	int opc;
	
	while(true){
		cout<<endl<<" - MENU PARA PUSH Y POP -"
			<<endl<<"1. Pila Vacia"
			<<endl<<"2. Pila LLena"
			<<endl<<"3. Push"
			<<endl<<"4. Pop"
			<<endl<<"5. SALIR"
		
		<<endl<<endl<<"Ingrese una opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1:
	            system("cls || clear");
				BAND=pilaVacia_int(TOPE);
				if(BAND)
					cout<<endl<<"PILA VACIA";
				else
					cout<<endl<<"PILA LLENA";
				break;
				
			case 2:
	            system("cls || clear");
				BAND=pilaLlena_int(TOPE);
				if(BAND)
					cout<<endl<<"PILA LLENA"<<endl;
				else
					cout<<endl<<"PILA VACIA"<<endl;
				break;
					
			case 3:
	            system("cls || clear");
				BAND=pilaLlena_int(TOPE);
				if(BAND)
					cout<<endl<<"DESBORDAMIENTO DE PILA! - PILA LLENA"<<endl;
				else
					push_int(pila, TOPE);
				break;
				
			case 4:
	            system("cls || clear");
				BAND=pilaVacia_int(TOPE);
				if(BAND)
					cout<<endl<<"SUBDESBORDAMIENTO DE PILA! - PILA VACIA"<<endl;
				else
				pop_int(pila, TOPE);
				break;
				
			case 5:
	            system("cls || clear");
				cout<<endl<<"SALIENDO DEL MENU PARA PUSH Y POP"<<endl;
				break;
				
			default: system("cls || clear"); cout<<endl<<endl<<"INGRESE UNA OPCION VALIDA! ..."<<endl;
		}
		if(opc==5)
        	  break;
	}
	
	delete [] pila;
}	//	case1

void infijoPostfijo_Case2(){
	//Para este caso, se trabajara con las tres cadenas con tamano MAX y con cadenas dinamicas
	int TOPE=-1, longitud;
	char *pila=new char[MAX], *EI=new char[MAX], *EPOS=new char[MAX], SIMBOLO, DATO;
	pila[0]=EPOS[0]='\0';
	
	cout<<endl<<"Ingresa una expresion INFIJA: "; cin>>EI;
	cout<<endl<<"EI: "<<EI;
	
	while(EILleno_char(EI)){
		SIMBOLO=*(EI+0);
		recortarExpresion(EI);
		if(SIMBOLO=='('){
			push_char(pila, TOPE, SIMBOLO);
		}
		else{
			if(SIMBOLO==')'){
				while(*(pila+TOPE)!='('){
					pop_char(pila, TOPE, DATO);
					longitud=strlen(EPOS);
					EPOS[longitud]=DATO;
    				EPOS[longitud+1]='\0';	
				}
				pop_char(pila, TOPE, DATO);
			}
			else{
				if(isalpha(SIMBOLO)){
					longitud=strlen(EPOS);
					EPOS[longitud]=SIMBOLO;
    				EPOS[longitud+1]='\0';
				}
				else{
					while(!pilaVacia_char(TOPE) && prioridadOperador(SIMBOLO, *(pila+TOPE))){
						pop_char(pila, TOPE, DATO);
						longitud=strlen(EPOS);
						EPOS[longitud]=DATO;
	    				EPOS[longitud+1]='\0';
					}
					push_char(pila, TOPE, SIMBOLO);
				}
			}
		}
	}
	while(!pilaVacia_char(TOPE)){
		pop_char(pila, TOPE, DATO);
		longitud = strlen(EPOS);
		EPOS[longitud] = DATO;
		EPOS[longitud + 1] = '\0';
	}
	cout<<endl<<"EPOS: "<<EPOS;
	delete []pila;
	delete []EI;
	delete []EPOS;
	system("cls");
}	//	case2

void infijoPrefijo_Case3(){
	//Para este caso, se trabajara con las tres cadenas con tamano MAX y con cadenas dinamicas
	int TOPE=-1, longitud;
	char *pila=new char[MAX], *EI=new char[MAX], *EPRE=new char[MAX], SIMBOLO, DATO;
	pila[0]=EPRE[0]='\0';
	
	cout<<endl<<"Ingresa una expresion INFIJA: "; cin>>EI;
	cout<<endl<<"EI: "<<EI;

	while(EILleno_char(EI)){
		invertir(EI);
		SIMBOLO=*(EI+0);
		recortarExpresion(EI);
		invertir(EI);
		if(SIMBOLO==')'){
			push_char(pila, TOPE, SIMBOLO);
		}
		else{
			if(SIMBOLO=='('){
				while(*(pila+TOPE)!=')'){
					pop_char(pila, TOPE, DATO);
					longitud=strlen(EPRE);
					EPRE[longitud]=DATO;
    				EPRE[longitud+1]='\0';	
				}
				pop_char(pila, TOPE, DATO);
			}
			else{
				if(isalpha(SIMBOLO)){
					longitud=strlen(EPRE);
					EPRE[longitud]=SIMBOLO;
    				EPRE[longitud+1]='\0';
				}
				else{
					while(!pilaVacia_char(TOPE) && prioridadOperador(SIMBOLO, *(pila+TOPE))){
						pop_char(pila, TOPE, DATO);
						longitud=strlen(EPRE);
						EPRE[longitud]=DATO;
	    				EPRE[longitud+1] = '\0';
					}
					push_char(pila, TOPE, SIMBOLO);
				}
			}
		}
	}
	while(!pilaVacia_char(TOPE)){
		pop_char(pila, TOPE, DATO);
		longitud=strlen(EPRE);
		EPRE[longitud]=DATO;
		EPRE[longitud+1]='\0';
	}	
	invertir(EPRE);
	cout<<endl<<"EPRE: "<<EPRE;
	delete []pila;
	delete []EI;
	delete []EPRE;
	system("cls || clear");
}	//	case3

void llenar_int(int *aux, int &TOPE){
	for(int i=0; i<MAX; i++){	// dependiendo hasta donde se llene la pila <MAX va a ser posible hacer un push (para un llenado hasta MAX debe ser i=0; i<MAX; i++)
		TOPE++;
		*(aux+i)=(i+1)*2;
		cout<<" "<<*(aux+i);
	}
}	//	llenar

void imprimir_int(int *aux, int TOPE){
	cout<<endl;
	for(int i=0; i<TOPE+1; i++){
		cout<<" "<<*(aux+i);
	}	
	cout<<endl;
}	//	imrpimir

bool pilaVacia_int(int TOPE){
	if(TOPE==-1)
		return true;
	else
		return false;
}	//	pila vacia int

bool pilaLlena_int(int TOPE){
	if(TOPE==MAX-1)
		return true;
	else
		return false;
}	//	pilaLlena int

void push_int(int *pila, int &TOPE){
	int DATO=69;
	TOPE++;
	*(pila+TOPE)=DATO;
	cout<<endl<<"PILA CON PUSH: ";
	imprimir_int(pila, TOPE);
}	//	push int

void pop_int(int *pila, int &TOPE){
	int DATO=*(pila+TOPE);	//	se rescata DATO para su pusible uso
	TOPE--;
	cout<<endl<<"PILA CON POP: ";
	imprimir_int(pila, TOPE);
}	//	pop int

//////
bool EILleno_char(char *EI){
	if(EI[0]!='\0')
		return true;
	else
		return false;
}	//	EILleno char

void push_char(char *pila, int &TOPE, char SIMBOLO){
	TOPE++;
	*(pila+TOPE)=SIMBOLO;
}	//	push char

void pop_char(char *pila, int &TOPE, char *DATO){
	DATO=(pila+TOPE);//
	TOPE--;
}	//	pop char

void recortarExpresion(char *EI){
	int longitud=strlen(EI);
	for(int i=0; i<longitud-1; i++){
		EI=(EI+(i+1));
	}
	*(EI+(longitud-1))='\0';
}	//	recortar expresion

bool pilaVacia_char(int TOPE){
	if(TOPE==-1)
		return true;
	else
		return false;
}	//	pila vacia char

bool prioridadOperador(char operador1, char operador2){
    int prioridad_operador1=0, prioridad_operador2=0;
    switch(operador1){
        case '^':
            prioridad_operador1 = 3;
            break;
        case '*':
        case '/':
            prioridad_operador1 = 2;
            break;
        case '+':
        case '-':
            prioridad_operador1 = 1;
            break;
    }
    switch(operador2){
        case '^':
            prioridad_operador2 = 3;
            break;
        case '*':
        case '/':
            prioridad_operador2 = 2;
            break;
        case '+':
        case '-':
            prioridad_operador2 = 1;
            break;
    }
    if(prioridad_operador1>prioridad_operador2)
        return false;
return true;
}	//	prioridad del operador

void invertir(char *cadena) {
    int longitud=strlen(cadena);
    for (int i=0; i<longitud/2; i++) {
        char temp=cadena[i];
        cadena[i]=cadena[longitud-i-1];
        cadena[longitud-i-1]=temp;
    }
}		