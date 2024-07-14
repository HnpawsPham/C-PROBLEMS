#include <bits/stdc++.h>
#include <string>
using namespace std;

fstream fi(".\\txt\\THUTHAPVOSO.INP");

int n,m;
int x,y;
int currentPos = 0;
string keyword;
char a[1000][1000];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    fi>>n>>m;
    fi>>x>>y;
    
    for(int i=0; i<n; i++){
        string temp;
        fi>>temp;

        const char* arr = temp.c_str();

        //gan gia tri tu mang vao ma tran
        for (int j = 0; arr[j] != '\0'; j++) {
            a[i][j] = arr[j];
        }
    }  

    fi>>keyword;

    int steps = 0;
    while(currentPos < keyword.length()){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == keyword[currentPos]){
                    cout<<a[i][j]<<endl;
                    currentPos++;
                }
                steps++;
            }
        }
    }

    cout<<"steps: "<<steps<<endl;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl; 
    }  
}

