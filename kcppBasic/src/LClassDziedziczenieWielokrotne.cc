#include <iostream>
using namespace std;

class A    
{	
 public: 
   int fA, fI;
};

class B : public A   
{	
 public: 
   int fB;
};



class C : public B 
{
 public:
   void Fun();    
};

void C::Fun(){
	
   fA = fB;          // poprawne
   fI = 0;           // blad (niejednoznaczne)
   //A::fI = 0;        // poprawne
   //B::fI = 2;        // A czy to poprawne? :)
}


int main()
{
   C *obiekt = new C();
   obiekt->Fun();
}

