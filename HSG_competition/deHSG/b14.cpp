#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fi;
    fi.open("./txtFiles/fi14.txt");
    int t,sum;
    t=0;
    sum=0;
    for (int i=0;i<=11;i++){
        sum=sum+100+t;
        t+=5;
    }
    fi<<sum;
    fi.close();
}