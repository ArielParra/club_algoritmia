//Ariel Emilio Parra Martinez 
//Bear and Big Brother
#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    int limak=0,bob=0,years=0;
    cin>>limak>>bob;
    while(limak<=bob){
        limak*=3;bob*=2;
        years++;
    }
    cout<<years;
return 0;
}











