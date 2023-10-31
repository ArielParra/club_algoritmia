//Ariel Emilio Parra Martinez

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long int ulli;

bool isPossible(ulli n, ulli s, ulli m) {
    ulli sum = (m* n) - (n / 2);
    
    return sum >= s;
}

int main(){
SPEED;
    ulli t=0,n=0,s=0;
    cin>>t;
    for(ulli i=0;i<t;i++){
        cin>>n>>s;
        if(n==1){
           cout<<s<<endl;
        }else if(n==2){
            cout<<s/2<<endl;
        }else{

        ulli m = (n/2) + 1;
    
	    cout << s / m <<endl;

        }//else
    }
return 0;
}
