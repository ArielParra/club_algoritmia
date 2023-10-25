//Ariel Emilio Parra Martinez
// Juicer

#include<bits/stdc++.h>
using namespace std;
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    int n=0,t=0,k=0,d=0;
    cin>>n>>t>>k>>d;
    int t1=0,t2=0,tot=0,Foven=0,Soven=0;
    bool made=false,stop=false;
    while(Foven<n){
        if(t1%t==0 &&t1!=0){
            Foven+=k;
        }
//cout<<endl<<"t1="<<t1<<",Foven="<<Foven;
        if(t1==d){
            made=true;
//cout<<" creada";
        }
        if(made){
            if(t2%t==0 && t2!=0){
                Soven+=k;        
            }
            t2++;
            if(Foven+Soven>=n && !stop){
                tot=t1;
                stop=true;
//cout<<endl<<"tot="<<tot<<", t1="<<t1;
            }
        }
    t1++;
    }
    t1--;//por culpa del la suma
//cout<<endl<<"tot="<<tot<<", t1="<<t1;
    if(tot<t1 && made)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
