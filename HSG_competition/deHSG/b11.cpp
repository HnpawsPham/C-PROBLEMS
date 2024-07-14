#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fi,out;
    fi.open("./txtFiles/inp11.txt");
    out.open("./txtFiles/out11.txt");
    string str,str2;
    fi>>str;
    int j=0;
    for (int i=str.length()-1;i>=0;i--){
        str2+=str[i];
        j++;
    }
    if (str2==str){
        out<<"Đối xứng ";
    }
    else{
        out<<"Không đối xứng";
    }
    out.close();
    out.clear();
}