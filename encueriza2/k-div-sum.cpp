//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int t=0,n=0,k=0;
cin>>t;
for(int i=0;i<t;i++){
    cin>>n>>k;
    if(n==1){
        cout<<k<<endl;
    }else if(n==k){
        cout<<1<<endl;
    }else if(n>k){
        cout<<(n%k+1)<<endl;
    }else{
        cout<<(k/n+1)<<endl;
    }
}
return 0;
}
