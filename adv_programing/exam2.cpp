#include <iostream>

using namespace std;

double mul(int n);
int fac(int x);

int main(){

int num1;

cout << "input number 1:" << endl;
cin >> num1;
cout << "anwser : " << mul(num1) << endl;


return 0;

}

double mul(int n)
{

    double sum  = 0;

    while (n > 0)
    {
        sum = sum + (1.000/fac(n));
        n = n - 2;         
    }

    return sum;
}

int fac(int x){

    int result = 1;
    int i = 0;

    while (i != x-1){
        result = result*(i+1);
        i = i + 1; 
    }

    return result;
}