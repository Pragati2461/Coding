#include<iostream>
using namespace std;

class Something{
    public:
        int num1;
        void set(){
            cout << "Enter value : ";
            cin >> num1;
        }

        void add2(){
            num1 += 2;
        }
};

int main(){
    Something s;

    s.set();

    s.add2();

    cout << s.num1;

    return 0;
}