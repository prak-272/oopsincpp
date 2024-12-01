#include<bits/stdc++.h>
using namespace std;

class Base{
public:    
   virtual void show() = 0;
};

class Derived: public Base {
public:
   void show() override{
    cout <<  "derived show";
   }
};

int main(){
    Derived obj;
    obj.show();
}