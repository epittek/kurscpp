#include <iostream>
using namespace std;

class A {
public:
	void Funkcja() { cout <<"Metoda z klasy A"<< endl; }
};

class B : public A {
public:
  void Funkcja() { cout <<"Metoda z klasy B"<< endl; } // metoda zredefiniowana
};

int main() {

   A a;
   B b;
   
     
   A *p1 = &a;
   B *p2 = &b;
   A &r1 = a;
   B &r2 = b;
   
   
/*   
   A *p1 = &a;
   A *p2 = &b;
   A &r1 = a;
   A &r2 = b;
  */ 
   
   a.Funkcja();
   b.Funkcja();
   p1->Funkcja();
   p2->Funkcja();
   r1.Funkcja();
   r2.Funkcja();


};
