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

        void print(){
            // this is cout statement
            cout << num1;
        }

        // Add sub2 function here.
};

int main(){
    Something s;

    s.set();

    s.add2();

    s.print();

    return 0;
}
