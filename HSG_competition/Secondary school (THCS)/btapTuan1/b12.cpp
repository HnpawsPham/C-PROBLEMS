#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fi;
    int sum;
    fi.open("./txtFiles/b12.txt");
    for (int i=1;i<=1000;i++){
        sum=0;
        for (int j=1;j<i;j++){
            if (i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            fi<<i<<"; ";
        }
    }
}