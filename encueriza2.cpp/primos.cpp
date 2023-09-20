//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
vector <int> prim;
prim[0]=2;
int n=0;
bool es=false;
cin>>n;
for(int i=0;i<n;i++){
    if(!prim[i].empty() && n%prim[i]==0){
        es=false;
        break;
    }else if(!prim[i].empty()){ 
        es=false;
    }else{
        es=true;
        prim[i]=i;
    }
} 
if(es){
    cout<<"SI";
}else{
    cout<<"NO";
}
return 0;
}
