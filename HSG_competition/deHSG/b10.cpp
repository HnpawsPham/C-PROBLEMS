#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fi,out;
    fi.open("./txtFiles/input10.txt");
    out.open("./txtFiles/output10.txt");
    string str;
    fi>>str;
    int dem=0;
    char c;
    fi>>c;
    fi.close();
    for (int i=0;i<str.length();i++){
        if (str[i]==c){
            dem++;
        }
    }
    out<<dem;
    out.close();
}