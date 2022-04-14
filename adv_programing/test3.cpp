#include <iostream>

using namespace std;

int main(){
	float interest(float p, int t, float r=12.0);
	float amount;
	amount = interest(1500.0,3);

	cout << " inter=" << amount << endl;
	amount = interest(1200.0,2,5.0);
	cout << " inter=" << amount << endl;
	return 0;
}

float interest(float p, int t, float r)
{
	return (p*t*r/100.0);
}


