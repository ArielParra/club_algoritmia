//Ariel Emilio Parra Martinez 
//Vanya and Fence

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    int *vec;
    int cant=0,h=0,width=0;
    cin>>cant>>h;
    vec=new int [cant];
    for(int i=0;i<cant;i++){
        cin>>vec[i];
        width++;
        if(vec[i]>h){width++;}
    }
    delete []vec;
    cout<<width;
return 0;
}











