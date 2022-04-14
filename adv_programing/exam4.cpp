/* Write a program to to receive and display the information of an employee*/
#include<iostream>
using namespace std;

struct employee { 
   int empid; 
   char name[20]; 
   char designation[15];
} ;

int main(void)
{

    employee **e = new employee*[10];

   int i,n;
   cout<<"How many employees? "; cin>>n;
   for(i=0;i < n; i++ )
        for(int j =0; j< n; j++) {
     cout <<"Enter the employee id, name, and designation of employee " <<i+1<< endl;
     cin >> e[i][j].empid; 
     cin>>e[i][j].name; 
     cin>>e[i][j].designation; 
   } 
   cout<<"\nEmployee Information\n"; 
   cout<<"---------------------------------------\n";  
   cout<<"empid\tname\tdesignation\n"; 
   cout<<"---------------------------------------\n";
   for(i=0;i < n; i++ ) {
      cout <<e[i][i].empid<<"\t"; cout<<e[i][i].name<<"\t"; cout<<e[i][i].designation<<endl;
   }
   cout << "---------------------------------------\n"; 
   return 0;
}
