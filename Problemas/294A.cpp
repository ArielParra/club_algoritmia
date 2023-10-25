//Ariel Emilio Parra Martinez
//

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int n,a,m,x,y;
cin>>n;
vector <int> vecA;

for(int i=0;i<n;i++){
    cin>>a;
    vecA.push_back(a);
}
cin>>m;
for(int i=0;i<m;i++){
    cin>>x>>y;
        x-=1;
        if(x-1>=0){ 
            vecA[x-1]+=y-1;
        }
        if(x+1<n){
            vecA[x+1]+=vecA[x]-y;
        }
        vecA[x]=0;
    }
for(int pajaros:vecA){
    cout<<pajaros<<endl;
}
return 0;
}
