#include<iostream>
using namespace std;

class Something{
    public:
        int num1;
        void set(){
            cout << "Enter value : ";
            cin >> num1;
        }
};

int main(){
    Something s;

    s.set();

    cout << s.num1;

    return 0;
}