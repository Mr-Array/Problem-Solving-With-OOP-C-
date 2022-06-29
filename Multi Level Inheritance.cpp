#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class A {
        public: 
        void myA(){
                    cout<<"I am an equilateral triangle"<<endl;

        }
        
    } ;
    class B{
        public:
        void myB()
        {
                  cout<<"I am an isosceles triangle"<<endl;  

        }
    };
    class C : public A , public B
    {
        public:
        void myC()
        {
                  cout<<"I am a triangle"<<endl;  

        }
    };
int main() {
    C c;
    c.myA();
    c.myB();
    c.myC();
    return 0;
}
