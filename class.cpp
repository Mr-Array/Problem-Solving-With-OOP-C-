#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student{
        private :
    int age,stander;
    string  first_name, last_name;


    public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name(string fn)
    {
        first_name = fn;
    }
    string get_first_name()
    {
       return first_name;
    }
    void set_last_name(string ln)
    {
       last_name = ln;
    }
    string get_last_name()
    {
       return last_name ;
    }
     void set_stander(int s)
    {
        stander = s;
    }
    int get_stander()
    {
        return stander;
    }
};
int main() {
    
   int age,stander;
    string  first_name, last_name;
     cin>>age>> first_name>>last_name>>stander;
    Student S1;
   
    S1.set_age(age);
    S1.set_first_name(first_name);
    S1.set_last_name(last_name);
    S1.set_stander(stander);
    cout<<S1.get_age()<<endl;
    cout<<S1.get_last_name()<<", ";
    cout<<S1.get_first_name()<<endl;
    cout<<S1.get_stander()<<endl;
    cout<<endl;
    cout<<S1.get_age()<<","<<S1.get_first_name()<<","<<S1.get_last_name()<<","<<S1.get_stander();
    return 0;
}
