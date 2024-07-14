#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
// chtrinh con
void square(){
    fstream out;
    out.open("./txtFiles/output.txt");
    int canh;
    cout<<"Nhập cạnh: ";
    cin>>canh;
    out<<"Diên tích hình vuông là: "<<canh*canh;
}
void circle(){
    fstream out;
    out.open("./txtFiles/output.txt");
    int r;
    cout<<"Nhập bán kính: ";
    cin>>r;
    out<<"Diên tích hình tròn là: "<<pow(r,2)*3.14f;
}
void triangle(){
    fstream out;
    out.open("./txtFiles/output.txt");
    int dc,day;
    float dt;
    cout<<"Nhập đường cao: ";
    cin>>dc;
    cout<<"Nhập cạnh đáy: ";
    cin>>day;
    dt=1.0/2.0* static_cast<float>(dc)*static_cast<float>(day);
    out<<"Diên tích hình tam giác là: "<<dt;
}
void rectangle(){
    fstream out;
    out.open("./txtFiles/output.txt");
    int d,r;
    cout<<"Nhập chiều dài: ";
    cin>>d;
    cout<<"Nhập chiều rộng: ";
    cin>>r;
    out<<"Diên tích hình chữ nhật là: "<<d*r;
}
// chtrinh 9
int main(){
    fstream fi,out;
    fi.open("./txtFiles/input.txt");
    int choice;
    cout<<"0. Không làm gì cạ và trở về màn hình soạn thảo \n1.Tính diện tích hình vuông \n2. Tính diện tích hình tròn\n3.Tính diện tích hình tam giác \n4. Tính diện tích hình chữ nhật\n";
    fi>>choice;
    if (choice==0){}
    else if (choice==1){
        square();
    }
    else if(choice==2){
        circle();
    }
    else if (choice==3){
        triangle();
    }
    else if (choice==4){
        rectangle();
    }
    else{
        cout<<"Chịu r";
    }
}
