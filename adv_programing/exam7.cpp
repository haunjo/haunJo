#include <iostream>

using namespace std;

class room{
    protected: double width;
};

class smallroom:room{
    public: void getdata(double w) {width = w;}
            double putdata(){ return width;}
};

int main(){
    smallroom r;
    r.getdata(5.0);
    cout << "Width of room:" << r.putdata() << endl;
    return 0;
}