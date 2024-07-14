#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\XAUCONDOIXUNGDAINHAT.INP");

int n,maxx=0;
string a,res;
int check[1000][1000];
string save[1000];

int main(){
    fi>>n;
    fi>>a;
    a='x'+a;

    // thuat toan chinh
    memset(check,false, sizeof(check));  //chinh cho tat ca pha tu trong mang = false
    
    int index=0;
    for(int len=1; len<=n; len++){
        for(int i=1; i<=n-len+1; i++){
            int j=i+len-1;

            if(i==j){
                check[i][j]=true;
                save[index] = a[i];
            }


            if(len==2 && a[i]==a[j]){
                check[i][j]=true;
            }
            else{
                if(check[i+1][j-1]==true && a[i] == a[j]){
                    check[i][j]=true;
                }
            }
            save[index]+=a[j];

            // tim doan co phan tu nho nhat
            if(check[i][j] && len > maxx){
                maxx=len;
                res=save[index];
            }
        }
        index++;
    }

    
    cout<<maxx<<endl;
    cout<<res<<endl;    //doan con ket qua
}