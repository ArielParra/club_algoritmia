//Ariel Emilio Parra Martinez ID:280862 ISC 2A

/*librerias c++*/
#include<iostream>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//lim_inf+rand()%(lim_sup-lim_inf+1)

/*prototipos*/
void bubble_sort(int *vec,int tam);
void insert_sort(int *vec,int tam);
void print_vec(int *vec,int tam);
void swap(int *vec1, int *vec2);

int main(){
SPEED;
const int tam=5;
int vec[tam]={5,1,4,2,8};
cout<<endl<<"unsurted_vec"<<endl;
print_vec(vec,tam);
cout<<endl<<"insert_sort"<<endl;
insert_sort(vec,tam);

/*
cout<<endl<<"bubble_sort"<<endl;
bubble_sort(vec,tam);
*/
print_vec(vec,tam);
return EXIT_SUCCESS;
}
void print_vec(int *vec,int tam){
   for(int i=0;i<tam;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
void swap(int *vec1, int *vec2){
    int temp = *vec1;
    *vec1 = *vec2;
    *vec2 = temp;
}
void insert_sort(int *vec,int tam){
 int j=0,valor=0;
   for(int i=0;i<tam;i++){
        valor=vec[i];
        j=i-1;
        while(j>=0 && vec[j]>valor){
            vec[j+1]=vec[j];
            j-=1;
        }
        vec[j+1]=valor;    
    }
}
void merge_sort(int *vec,int tam){
    int izq=0,der=0,mitad=0;
    if(tam>1){
        mitad=tam/2;
        izq=
    }
}

void bubble_sort(int *vec,int tam){
int aux=0;
    for(int i=0;i<tam-1;i++){
        for(int j=0;j<tam-i-1;j++){
            if(vec[j]>vec[j+1]){
                //swap(&vec[min_idx], &vec[i]);
                aux=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=aux;
            }
        }
    }
}
void selecction_sort(int *vec,int tam){
    int min_idx=0;
    for (int i=0;i<tam-1;i++){
        // Find the minimum element in unsorted array
        min_idx = i;
        for (int j=i+1;j<tam;j++){
          if (vec[j]<vec[min_idx]){
            min_idx=j;
          }
            if(min_idx != i){
            swap(&vec[min_idx], &vec[i]);
            }
        }
    }
}