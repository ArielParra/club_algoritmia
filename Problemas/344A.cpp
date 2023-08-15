//Ariel Emilio Parra Martinez 
//Magnets

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    int *vec;
    int cant=0;
    cin>>cant;
    vec=new int [cant];
    for(int i=0;i<cant;i++){
        cin>>vec[i];
    }
    int cont=1;
    for(int i=0;i<cant-1;i++){
        if (vec[i]!=vec[i+1]){
            cont++;
        }
    }
    delete []vec;
    cout<<cont;
return 0;
}











