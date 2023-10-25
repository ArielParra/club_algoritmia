//Ariel Emilio Parra Martinez
//

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int n=0,a=0,sereja=0,dima=0;
cin>>n;
list <int> vec;
for(int i=0;i<n;i++){
cin>>a;
vec.push_back(a);
}
while(!vec.empty()){
    if(vec.front()>vec.back()){
    sereja+=vec.front();
    vec.pop_front();
    }else{
    sereja+=vec.back();
    vec.pop_back();
    }
if(vec.front()>vec.back()){
    dima+=vec.front();
    vec.pop_front();
    }else{
    dima+=vec.back();
    vec.pop_back();
    }
}
cout<<sereja<<" "<<dima;
return 0;
}
