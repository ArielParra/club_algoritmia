//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
string sec,sec2;
cin>>sec>>sec2;
if(sec==sec2){
    cout<<-1;
}else if(sec.size()>sec2.size()){
    cout<<sec.size();
}else{
    cout<<sec2.size();
}
return 0;
}
