#include <bits/stdc++.h>
using namespace std;

string s;
int kq=0;

int main(){
    cin>>s;

    for(int i=0; i<s.length();i++){
        if(i<s.length()-1 && int(s[i+1]) > int(s[i])){
            kq++;
        }
        else if(i<s.length()-1 && int(s[i+1]) < int(s[i])){
            kq--;
        }
    }

    cout<<kq<<endl;
}