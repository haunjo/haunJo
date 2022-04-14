#include <iostream>

using namespace std;

class student{
    private:    int rollno;
                char name[20];
                float percentage;
    public: void getdata(){
        cout << "enter the roll number:";
        cin >> rollno;
        cout << "enter the name:";
        cin >> name;
        cout << "enter the percentage:";
        cin >> percentage;
    }

    void putdata(){
        cout << "roll number" << rollno << endl;
        cout << "name" << name << endl;
        cout << "percentage" << percentage << endl;
    }        
};


int main(){

    student s;
    s.getdata();
    s.putdata();
    return 0;
}