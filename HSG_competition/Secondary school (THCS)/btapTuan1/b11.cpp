#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream fi;
    fi.open("./txtFiles/b11.txt");
    int n;
    fi>>n;
    int sum;
    sum=0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n){
        fi<<"Perfect number!";
    }
    else{
        fi<<"Not a perfect number";
    }
    fi.close();
}