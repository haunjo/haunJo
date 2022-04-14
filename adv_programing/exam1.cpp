#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main(){

int num1, num2;

cout << "input number 1:" << endl;
cin >> num1;
cout << "input number 2:" << endl;
cin >> num2;

cout << "최대공약수 :" << gcd(num1, num2) << endl;
cout << "최소공배수 :" << lcm(num1, num2) << endl;

}

int gcd(int a, int b)
{
    int c;

    while (b != 0)
    {
         c = a%b;
         a = b;
         b = c;
    }

    return a;

}

int lcm(int a, int b){
    return a*b / gcd(a,b);
}