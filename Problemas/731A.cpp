//Ariel Emilio Parra Martinez
#include <bits/stdc++.h>
using namespace std;

int main() {
    string entrada;
    cin>>entrada;
    char anterior='a';
    int rots=0,sentido=0,contra=0;
    for (int i=0;i<entrada.size();i++){
       sentido=abs(anterior-entrada[i]);
       contra =abs(26-sentido);

        anterior=entrada[i];
        rots+=min(sentido,contra);
    }
cout<<rots;
return 0;
}

