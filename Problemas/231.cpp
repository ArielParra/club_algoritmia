//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//Team

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
int p,v,t,n,o;
p=v=t=n=o=0;
cin>>n;
for(int i=0;i<n;i++){
	cin>>p>>v>>t;
	if(p+v+t>=2){
		o++;
	}
}
cout<<o;
return EXIT_SUCCESS;
}
