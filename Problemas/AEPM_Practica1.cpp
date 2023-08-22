//Ariel Emilio Parra Martinez ID:280862 ISC 3A

/*librerias c++*/
#include<iostream>
#include <cstdlib>
#include <ctime>

/*Definiciones*/
using namespace std;
#define RAND srand(time(NULL))
//lim_inf+rand()%(lim_sup-lim_inf+1)

/*Constantes*/

/*prototipos*/
int* RuletaRusa(int n);
int* Baraja(int n);
int* interseccion(int* vec1, int tam1, int*vec2,int tam2, int &tam3);

int main(){
RAND;
cout<<endl<<"Ariel Emilio Parra Martinez ID:280862 ISC 3A"<<endl;
    int n=0;

    /*1*/
    cout<<"Dame el tamano de n:";
    cin>>n;
    int *vec = RuletaRusa(n);
    cout<<"Vector de ruleta:";
    for (int i=0;i<n;++i) {
        cout<<" "<<vec[i];
    }
    delete[] vec;  

    /*2*/
    n=0;
    cout<<endl<<"Dame el nuevo tamano de n:";
    cin>>n;
    int *vec0 = Baraja(n);
    cout<<"Baraja barajeada con numeros de 1 a "<<n<<":";
    for (int i=0;i<n;++i) {
        cout<<" "<<vec0[i];
    }
    delete[] vec0;

    /*3*/
    const int tam1=8,tam2=8;
    int tam3=0;
    int vec1[tam1]={2,4,12,9,2,15,4,2};
    int vec2[tam2]={1,3,9,12,9,4,2,1};
    int* vec3=interseccion(vec1,tam1,vec2,tam2,tam3);
    cout<<endl<<"Vector 1:";
    for (int i=0;i<tam1;++i) {
        cout<<" "<<vec1[i];
    }
    cout<<endl<<"Vector 2:";
    for (int i=0;i<tam2;++i) {
        cout<<" "<<vec2[i];
    }
    cout<<endl<<"interseccion de ambos:";
    for (int i=0;i<tam3;++i) {
        cout<<" "<<vec3[i];
    }
    delete[] vec3;

return 0;
}

/*Implementa una función que recibe n y retorna un vector dinámico de enteros de tamaño n, el
cual debes llenar en base a la siguiente regla: el vector debe tener el 30% de sus casillas llenas con
1 y el resto con 0. Las posiciones donde coloques 1 deben ser aleatorias. Esta regla equivale a cargar
una pistola para jugar a la ruleta rusa*/
int* RuletaRusa(int n) {
    int *vec=new int[n];
    //llenando el 30% con unos
    for (int i=0;i<n;++i) {
        if (i<n*0.3) {
            vec[i]=1;
        } else {
            vec[i]=0;
        }
    }
    // Barajar
    int j=0;
    //inicio el for 
    for (int i=n-1;i>0;--i) {
        //lim_inf+rand()%(lim_sup-lim_inf+1)
        j=rand()%(i+1);
        //cambio de lugar de manera aleatoria
        swap(vec[i], vec[j]);
    }
    return vec;
}

/*Implementa una función que recibe n y retorna un vector dinámico de enteros de tamaño n, el
vector representa una baraja formada por cartas con números entre 1 y n, el vector debe ser llenado
aleatoriamente con números entre 1 y n, NO se permiten números repetidos. Este proceso equivale
a barajar cartas*/
int* Baraja(int n) {
    int *vec=new int[n];
    //llenando el 30% con unos
    for (int i=0;i<n;++i) {
        vec[i]=i+1;
    }
    // Barajar
    int j=0;
    //inicio el for 
    for (int i=n-1;i>0;--i) {
        //lim_inf+rand()%(lim_sup-lim_inf+1)
        j=rand()%(i+1);
        //cambio de lugar de manera aleatoria
        swap(vec[i], vec[j]);
    }
    return vec;
}

/*Implementa una función que recibe dos vectores de enteros, sus respectivos tamaños y un
parámetro por referencia a un entero, la función retorna un vector dinámico con la intersección de
ambos vectores y sin números repetidos, el tamaño del nuevo vector se almacena en el parámetro
enviado por referencia.*/

int* interseccion(int* vec1, int tam1, int*vec2,int tam2, int &tam3){
    int tamMax=0;
    bool existe=false;
    if(tam1<=tam2){
        tamMax=tam1;
    }
    int *inter=new int[tamMax];
    for(int i=0;i<tam1;i++){
        for(int j=0;j<tam2;j++){
            if(vec1[i]==vec2[j]){
                existe=false;
                for(int k=0;k<tam3;k++){
                    if(vec1[i]==inter[k]){
                        existe=true;
                        break;
                    }
                } 
                if(!existe){
                    inter[tam3]=vec1[i];
                    tam3++;
                }
                break;
            }
        }
    }
    return inter;
}