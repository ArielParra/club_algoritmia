//Ariel Emilio Parra Martinez ID:280862 ISC 2A

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*prototipos*/

int main(){
SPEED;
int dominos=0;
cin>>dominos;
char resp[dominos];
int parados[dominos];
for(int i=0;i<dominos;i++){
parados[i]=1;
}
cin>>resp;
int j=0;
for(int i=0;i<dominos;i++){
    j=0;
    if(resp[i]=='R' && parados[i]==1){
        parados[i]=0;
            while(resp[j]!='L' && j<dominos){
            parados[j]=0;
            j++;
            }
        }
    j=i;
    if(resp[i]=='L' && parados[i]==1){
            parados[i]=0;
            while(resp[j]!='R' && j>=0){
            parados[j]=0;
            j--;
            }
            if(resp)
        }
}
int suma=0;
for(int i=0;i<dominos;i++){
    cout<<parados[i]<<" ";
    suma+=parados[i];
}
cout<<suma;
return EXIT_SUCCESS;
}
