#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fi;
    fi.open("./txtFiles/b1.txt");
    int n;
    fi>>n;
    if (n<100){
        fi<<n<<" is smaller than 100";
    }
    else if(n==100){
        fi<<n<<" is equal with 100";
    }
    else{
        fi<<n<<" is greater than 100";
    }
}