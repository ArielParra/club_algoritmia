//Ariel Emilio Parra Martinez ID:280862 ISC 2A

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*prototipos*/
void swap(int *vec1, int *vec2);
void selectionSort(int arr[], int n);

int main(){
SPEED;
    int *vec;
    int tam;
    cin>>tam;
    vec=new int[tam];
    for(int i=0;i<tam;i++){
        fflush(stdin);
        cin>>*(vec+i);
    }
    selectionSort(vec,tam);
    int men=0,may=0;
    for(int i=0;i<tam;i++){
        if(*(vec+i)==*(vec+1))
        men++;
        if(vec[i]==vec[tam-1])
        may++;
    }
    cout<<may<<" "<<men<<endl;
    delete []vec;
return EXIT_SUCCESS;
}
void selectionSort(int vec[], int n){
	int men;
	for (int i=0;i<n-1;i++){
		men=i;
		for(int j=i+1;j<n;j++){
		    if (vec[j] < vec[men]){
			    men=j;
            }
		}
		if (men!=i){
			swap(&vec[men], &vec[i]);
        }
	}
}
void swap(int *vec1, int *vec2){
	int temp = *vec1;
	*vec1 = *vec2;
	*vec2 = temp;
}