#include <iostream>

using namespace std;

int area(int x);
int area(int a, int b);
double area(double l, double h);

int main()
{   
    int n;

    cout << "select what you want to know its extent: 1. 정사각형 2. 직사각형 3. 삼각형" << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "한 변의 길이 : " << endl;
        int x; 
        cin >> x;
        cout << "넓이 :" << area(x);       
    }
    else if (n == 2)
    {
        cout << "가로, 세로의 길이 : " << endl;
        int a, b;
        cin >> a >> b;
        cout << "넓이 :" << area(a, b);       
    }
    else if (n == 3)
    {
        cout << "밑변, 높이의 길이 : " << endl;
        double l, h;
        cin >> l >> h;
        cout << "넓이 :" << area(l, h);       
    }
       return 0;
}

int area(int x)
{
    return (x*x);
}

int area(int a, int b)
{
    return (a*b);
}

double area(double l, double h){
    return (l*h/2);
}