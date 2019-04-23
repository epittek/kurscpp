#include <iostream>
using namespace std;

class A 
{
 public:
   A() { gLicznik++; }
   A(int k) { }
   
   static int gLicznik;      // licznik obiektów
   static int GetValue() {   // Zlikwidujmy static i zobaczmy co sie stanie
      return gLicznik;
   }
   
};

int A::gLicznik = 0;         // konieczna definicja !

int main()
{
   
   cout << A::GetValue() << endl;
   
   A objectA;
   cout << objectA.GetValue() << endl;
   
   A *objectB = new A();
   cout << objectB->GetValue() << endl;

   A *objectC = new A(0);
   cout << objectC->GetValue() << endl;
   
   return 0;
}
