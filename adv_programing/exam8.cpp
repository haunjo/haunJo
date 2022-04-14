#include <iostream>
using namespace std;
class arithmetic { 
      float a,b; 
      public: float sum(float a, float b); 
                 float diff(float a, float b); 
                 float prod(float a, float b); 
                 float div(float a, float b); 
};
float arithmetic::sum(float a, float b) {return (a+b);}
float arithmetic::diff(float a, float b) { return (a-b);}
float arithmetic::prod(float a, float b) {return (a*b);}
float arithmetic::div(float a, float b) {return (a/b);}

int main(void) {
  arithmetic ar; 
  float a,b; 
  cout<<"Enter two numbers:\n"; 
  cin>>a>>b; cout<<"Sum="<< ar.sum(a,b)<< endl;
  cout<<"Difference="<< ar.diff(a,b)<< endl;
  cout<<"Product="<< ar.prod(a,b)<< endl;
  cout<<"Division="<< ar.div(a,b)<<endl;

  return 0;
}