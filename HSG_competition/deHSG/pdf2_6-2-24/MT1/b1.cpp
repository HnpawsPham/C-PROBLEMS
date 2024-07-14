#include <bits/stdc++.h>
using namespace std;

int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int aver=0,maxx,t;

    for(int i=1; i<=3; i++){
        cout<<"nhap gia tri so thu "<<i<<" = ";
        cin>>t;
        if(i==1){
            maxx=t;
        }
        else{
            maxx=max(t,maxx);
        }
        aver+=t;
    }
    cout<<"gia tri lon nhat cua 3 so vua nhap la: "<<maxx<<endl;
    cout<<"gia tri trung binh cua 3 so la: "<<(float)aver/3<<endl;
}