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
            cout << num1;
        }
};

int main(){
    Something s;

    s.set();

<<<<<<< HEAD
    s.add2();

    cout << s.num1;
=======
    s.print();

    // cout << s.num1;
>>>>>>> dev

    return 0;
}
