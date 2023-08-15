//Ariel Emilio Parra Martinez ID:280862 ISC 2A

/*librerias c++*/
#include<bits/stdc++.h>

/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int n=0,k=0,cont=0,input=0;
cin>>n>>k;
for(int i=0;i<n;++i){
    cin>>input;
    while (input!=0) {
        input/=10;
        if (input%10==k){
        cont++;
        break;
        }
    }
}
cout<<cont;
return 0;
}
