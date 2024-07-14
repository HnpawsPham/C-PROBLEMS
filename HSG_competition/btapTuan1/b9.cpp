#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char option;
    fstream fi;
    fi.open("./txtFiles/b9.txt");
    fi<<"Pick a options: \n A. Michael Jackson \n B. Nicki Minaj \n C. Lil Nas X";
    fi>>option;
    fi<<"\n";
    if (tolower(option)=='a'){
        fi<<"agrigato very much";
    }
    else if(tolower(option)=='b'){
        fi<<"OIOIOI";
    }
    else if(tolower(option)=='c'){
        fi<<"ô mai ca";
    }
    else{
        fi<<"only a,b, and c";
    }
    fi.close();
}