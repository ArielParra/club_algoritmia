//Ariel Emilio Parra Martinez 
//Anton and Danik

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
SPEED;
    int num=0;
    int a=0,d=0;
    char win[100001];
    cin>>num;
    cin>>win;
    for(int i=0;i<num;i++){
        switch(win[i]){
            case 'A':a++;
            break;
            case 'D':d++;
            break;
        }
    }
    if(a>d){cout<<"Anton";}
    if(a<d){cout<<"Danik";}
    if(a==d){cout<<"Friendship";}
return 0;
}











