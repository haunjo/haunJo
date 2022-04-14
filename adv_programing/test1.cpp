#include <iostream>

using namespace std;

int & max(int &x, int &y);


int main(){

int a = 1, b = 4;

cout << max(a,b);

return 0;

}


int & max(int &x, int &y){

	if (x > y) return x;
	else return y;

}




