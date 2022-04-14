#include <iostream>
using namespace std;
class student { 
   int rollno; 
   char name[20]; 
   float per; 
   public: class date { 
                 int day,month,year; 
                 public: void set_date(int dd, int mm, int yy) {
                                day=dd; month=mm; year=yy; 
                            }
                            void displaydate() { 
                                cout<<"Date of birth="<<day<<"-"<<month<<"-"<<year<<endl;
                            } 
  };
  void input_data() { 
      cout<<"Enter the roll number: "; cin>>rollno; 
      cout<<"Enter the name: "; cin>>name; 
      cout<<"Enter the percentage: "; cin>>per; 
  }
  void output_data() { 
     cout<<"Roll number="<<rollno<<"Name of the student="<<name<<
     cout<<"Percentage="<< per<< endl;
 
  }
int main(void) {
  int d,m,y;
  student s;
  student ::date dob;
  s.input_data(); 
  cout<<"Enter the date of birth:\n";
  cin>>d>>m>>y;
  cout<<"Student\'s information is as follows\n"; 
  s.output_data(); 
  dob.set_date(d,m,y); 
  dob.displaydate();
  return 0;
}
