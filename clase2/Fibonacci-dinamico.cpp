//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define llu unsigned long long 

llu int fib(llu int n,vector <llu int>& vec){
    if (n<=1){//considerando 0 y 1
        return n;
    }
    if(vec[n]!=-1){
        return vec[n];
    }
    vec[n]=fib(n-1,vec)+fib(n-2,vec);
    return vec[n];
}

//de abajo hacia arriba
void fibfor(llu int n,vector <llu int>& vec){
    vec[0]=0;
    vec[1]=1;
    for(int i=2;i<=n;i++){//<= que n pq el limite es exactamente n
        vec[i]=vec[i-1]+vec[i-2];
    }
}

int main(){
SPEED;
llu int n=0;
	cin>>n;
    vector <llu int> vec(n+1,-1);//para asignar en posicion n, ya que los vectores inician en n
    cout<<fib(n,vec);
    vector <llu int> vec2(n+1,-1);//para asignar en posicion n, ya que los vectores inician en n
    fibfor(n,vec2);
    cout<<endl<<vec2[n];
return 0;
}

