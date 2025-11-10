#include <iostream>
using namespace std;

class Base {
  public:
    int baseVariable;
};

class Derived1 : public Base {
  public:
    int derived1Variable;
};

class Derived2 : public Derived1 {
  public:
    int derived2Variable;
};

int main() {
  Derived2 derived2Object;
  derived2Object.baseVariable = 10;
  derived2Object.derived1Variable = 20;
  derived2Object.derived2Variable = 30;

  cout << "Base Variable: " << derived2Object.baseVariable << endl;
  cout << "Derived1 Variable: " << derived2Object.derived1Variable << endl;
  cout << "Derived2 Variable: " << derived2Object.derived2Variable << endl;

  return 0;
}
