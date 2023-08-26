//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    unsigned long long int x=0,i=0;
    cin>>x;
    i=x/5;
    if(x%5==0){
        cout<<x/5;
    }else{
        if(x%5!=0){
            i++;    
        }
    cout<<i;
    }//esle
return 0;
}
