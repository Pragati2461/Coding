#include<iostream>
using namespace std;

class Something{
    public:
        int num1;
        void set(){
            cout << "Enter value : ";
            cin >> num1;
        }

        void print(){
            cout << num1;
        }
};

int main(){
    Something s;

    s.set();

    s.print();

    // cout << s.num1;

    return 0;
}