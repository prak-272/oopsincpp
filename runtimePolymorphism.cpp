#include<bits/stdc++.h>
using namespace std;

class Base{
public:    
    virtual void display(){
      cout <<  "base display";
    }

    virtual ~Base(){
       cout << "destructor1";
    }
};

class Derived: public Base{
public:    
    void display() override{
        cout <<  "derived display";
    }
    ~Derived(){
        cout << "destrcutor";
    }
};

int main(){

    Base* ptr;
    Derived d;

    ptr = &d;

    ptr->display();

}