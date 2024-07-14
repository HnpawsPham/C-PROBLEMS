#include <bits/stdc++.h>
using namespace std;

int a[3],res[3];
string maxx="",minn="999";
bool isExist[3] = {false,false,false};

void quayluihoanvi(int i){
    for(int j=0; j<3; j++){
        if(isExist[j] == false){
            isExist[j]=true;
            res[i]=a[j];

            if(i==2){
                string t="";
                for(int i=0; i<3; i++){
                    if(res[0]!=0){
                        t=t+to_string(res[i]);
                    }
                }

                maxx=max(maxx,t);
                if(t!=""){
                    minn=min(minn,t);
                }
            }
            else{
                quayluihoanvi(i+1);
            }
            isExist[j]=false;
        }
    }
}

int main(){
    for(int i=0; i<3; i++){
        cin>>a[i];
    }

    quayluihoanvi(0);

    cout<<maxx<<" "<<minn<<endl;

}