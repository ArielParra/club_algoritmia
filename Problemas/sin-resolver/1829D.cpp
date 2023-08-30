//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//Gold Rush



#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define llu unsigned long long 

bool recursion(llu int izq,llu int der,llu m){
    if(der==m){
            return true;
    }else if(izq==m){
            return true;
        }else if(der%3!=0 ||izq%3!=0){
            return false;
        }
return recursion(izq/3,2*der/3,m);;
}

int main(){
SPEED;
llu int t=0,n=0,m=0,izq=0,der=0;
map<int, bool> mapa;
cin>>t;
for(int i=0;i<t;i++){
cin>>n>>m;
    if(m==n){
    cout<<"YES\n";
    }else if (n<m || n%3!=0){
    cout<<"NO\n";
        }else if(recursion(n/3,2*n/3,m)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";  
        }
}//for
return 0;
}

