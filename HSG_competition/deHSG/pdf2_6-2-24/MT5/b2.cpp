#include <bits/stdc++.h>
using namespace std;

class Rect
{
public:
    int dai;
    int rong;

    void input(int &dai, int &rong)
    {
        cout << "Nhap chieu dai: ";
        cin >> dai;
        cout << "Nhap chieu rong: ";
        cin >> rong;
    }

    void dientich(int dai, int rong)
    {
        cout << "1. Dien tich hinh vuong la: " << dai * rong << endl;
    }
    void chuvi(int dai, int rong)
    {
        cout << "2. Chu vi hinh vuong la: " << (dai + rong) * 2 << endl;
    }
};
class Square : public Rect
{
public:
    int canh;

    void input(int &canh)
    {
        cout << "Nhap canh hinh vuong: ";
        cin >> canh;
    }
};

int main()
{
    Square square;
    square.input(square.canh);
    square.dientich(square.canh,square.canh);
    square.chuvi(square.canh, square.canh);
}