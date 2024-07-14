#include <bits/stdc++.h>
using namespace std;

int n;

class Student{
    public:
    void amount(){
        cout<<"Nhap vao so luong thi sinh can tao ra: ";
        cin>>n;
    }
    string name[1000];
    float maths[1000],physics[1000],chemis[1000];

    void inputName(int index){
        cout<<"Nhap ten cho thi sinh thu "<<index<<": ";
        cin>>name[index];
    }
    void inputMath(int index){
        cout<<"Nhap diem Toan cho thi sinh thu "<<index<<": ";
        cin>>maths[index];
    }
    void inputPhysics(int index){
        cout<<"Nhap diem Ly cho thi sinh thu "<<index<<": ";
        cin>>physics[index];
    }
    void inputChemis(int index){
        cout<<"Nhap diem Hoa cho thi sinh thu "<<index<<": ";
        cin>>chemis[index];
    }

    void sum(){

    }
};

void check(Student student){
    float sum=0;
    for(int i = 0; i<n ; i++){
        if(student.maths[i]>0 && student.chemis[i]>0 && student.physics[i]>0){
            sum+= student.maths[i] + student.chemis[i] + student.physics[i];
        }
        if(sum>=15){
            cout<<student.name[i]<<endl;
        }
        sum=0;
    }
}

int main(){
    Student student;
    student.amount();
    for(int i = 0; i<n ; i++){
        student.inputName(i);
        student.inputMath(i);
        student.inputPhysics(i);
        student.inputChemis(i);
    }

    cout<<"Danh sach cac thi sinh trung tuyen: "<<endl;
    check(student);
}