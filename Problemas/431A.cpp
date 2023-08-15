//Ariel Emilio Parra Martinez ID:280862 ISC 2A
//Black Square

/*librerias c++*/
#include<bits/stdc++.h>
/*Definiciones*/
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
	vector<int> vec;
	int aux;
	string s;
	for(int i=0;i<4;i++){
		cin>>aux;
		vec.push_back(aux);
	}
	cin>>s;
	int suma=0;
	for(int i=0;i<s.size();i++){
		suma+=vec[(s[i])-48-1];
	}
	cout<<suma;
return EXIT_SUCCESS;
}
