//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//link y/o nombre del programa

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    int n=0,x=0;
    cin>>n;
    string sum1,sum2,less1,less2,cod;
    sum1="++X";
    sum2="X++";
    less1="--X";
    less2="X--";
    for(int i=0;i<n;i++){
        cin>>cod;
        if(cod==less1 || cod==less2){
            x--;
        }
        if(cod==sum1 || cod==sum2){
            x++;
        }
    }
    cout<<x;
    
return 0;
}
