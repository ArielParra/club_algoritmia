//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//Buy a Shovel

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int k=0,r=0;
cin>>k>>r;
const int mod=k%10;
if(mod==r){
    cout<<1;
    return 0;
}
if(k==1){
    cout<<r;
    return 0;
}else{
    for(int i=1;i<=9;i++){
        if((mod*i)%10==0){ 
            cout<<i;
            return 0;
        }
        if((mod*i)%10==r){
            cout<<i;
            return 0;
        }
    }	
}
return EXIT_SUCCESS;
}