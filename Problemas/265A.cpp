//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//Colorful Stones (Simplified Edition) 

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
	string t,s;
	cin>>s;
	cin>>t;
	int c=0;
	for(int i=0;i<t.size();i++){
		if(t[i]==s[c]){
			c++;
		}
	}
	cout<<c+1;//+1 para que se tome en cuenta la ultima
return EXIT_SUCCESS;
}
