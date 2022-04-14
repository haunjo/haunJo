#include <iostream>
using namespace std;
class data { 
   int a,b; 
   public: void getdata(int i, int j); 
              friend int sum(data d); 
};
void data::getdata(int i,int j) { a=i; b=j; } 
int sum(data d) { return(d.a+d.b); }
int main(void) {
  data obj; 
  obj.getdata(20,40); cout<<"Sum="<< sum(obj);
  return 0;
}
