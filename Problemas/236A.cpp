//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//Boy or Girl

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
	set<char> letras;
	string cadena;
	cin>>cadena;
	for(int i=0;i<cadena.size();i++){
		letras.insert(cadena[i]);
	}
	if(letras.size()%2!=0){
		cout<<"IGNORE HIM!";
	}else{
		cout<<"CHAT WITH HER!";
	}
return EXIT_SUCCESS;
}
