#include <bits/stdc++.h>
using namespace std;

int n,k=0;
string str;

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int min(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

void checkMax(string sub){
    int maxx=0, minn=sub.length();

    while(sub.length()>0){
        maxx=max(count(sub.begin(), sub.end(), sub[0]),maxx);
        minn=min(count(sub.begin(), sub.end(), sub[0]),minn);

        sub.erase(remove(sub.begin(), sub.end(),sub[0]));
    }

    k=max(k,maxx-minn);
}

int findSubArr(string str){
    if(str.length()==1){
        return 0;
    }
    if(str.length()==2){
        if(str[0]==str[1]){
            return 0;
        }
        else{
            k=1;
            return 0;
        }
    }

    string sub="",chosen="";

    // tìm đoạn con đầu tiền (ít nhất có 3 kí tự)
    for(int i=0; i<3; i++){
        sub=sub+str[i];
    }
    chosen=sub;

    for(int len=3; len<n; len++){
        for(int i=0; i<n-len+1; i++){
            sub = str.substr(i,i+len-1);
            checkMax(sub);
        } 
    }
}

int main(){
    cin>>n;
    cin>>str;

    findSubArr(str);
    cout<<k<<endl;
}