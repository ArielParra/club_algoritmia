//Ariel Emilio Parra Martinez
//

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int n=0,host=0,guest=0;
cin>>n;
vector<pair<int,int>>unif(n);
for(int  i=0;i<n;i++) {
    cin>>unif[i].first>>unif[i].second;
}
int cont=0;
for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
        if(i!=j){ 
           host=unif[i].first;
           guest=unif[j].second;
           if(host==guest){
              cont++;
           }
        }
    }
}
cout<<cont<<endl;
return 0;
}
