#include<bits/stdc++.h>
using namespace std;

class Complex{
public: 
   
   int real;
   int img;
   
   void show(int i){
     cout << i;
   }

   void show(double i){
     cout << i;
   }

   Complex(int Real,int Img){
    real = Real;
    img = Img;
   }

   Complex(){

   }

   Complex operator + (const Complex& c2){
       Complex temp;
       temp.real = real + c2.real;
       temp.img = img + c2.img;
       return temp; 
   }

};


int main(){

   Complex complex;
   
   int k = 9;
   double a = 4.8;

   complex.show(k);
   complex.show(a);

   Complex c1(2,8);
   Complex c2(4,9);

   Complex res = c1 + c2;
   cout << res.real << " " << res.img << endl;

}