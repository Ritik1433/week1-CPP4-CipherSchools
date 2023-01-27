#include<iostream>
using namespace std;
 
class Test {
    const int t;
public:
    Test(int t):t(t) {}  //Initializer list must be used
    int getT() { return t; }
};
 
int main() {
    Test t1(10);
    cout<<t1.getT();
    return 0;
}
 
 #include<iostream>
using namespace std;
 
class Test {
    int &t;
public:
    Test(int &t):t(t) {}  //Initializer list must be used
    int getT() { return t; }
};
 
int main() {
    int x = 20;
    Test t1(x);
    cout<<t1.getT()<<endl;
    x = 30;
    cout<<t1.getT()<<endl;
    return 0;
}

#include <iostream>
using namespace std;
 
class A {
    int i;
public:
    A(int );
};
 
A::A(int arg) {
    i = arg;
    cout << "A's Constructor called: Value of i: " << i << endl;
}
 
// Class B contains object of A
class B {
    A a;
public:
    B(int );
};
 
B::B(int x):a(x) {  //Initializer list must be used
    cout << "B's Constructor called";
}
 
int main() {
    B obj(10);
    return 0;
}

#include <iostream>
using namespace std;
 
class A {
    int i;
public:
    A(int );
};
 
A::A(int arg) {
    i = arg;
    cout << "A's Constructor called: Value of i: " << i << endl;
}
 
// Class B is derived from A
class B: A {
public:
    B(int );
};
 
B::B(int x):A(x) { //Initializer list must be used
    cout << "B's Constructor called";
}
 
int main() {
    B obj(10);
    return 0;
}

#include <iostream>
using namespace std;
 
class A {
    int i;
public:
    A(int );
    int getI() const { return i; }
};
 
A::A(int i):i(i) { }  // Either Initializer list or this pointer must be used
/* The above constructor can also be written as
A::A(int i) {
    this->i = i;
}
*/
 
int main() {
    A a(10);
    cout<<a.getI();
    return 0;
}

// Without Initializer List
class MyClass {
    Type variable;
public:
    MyClass(Type a) {  // Assume that Type is an already
                     // declared class and it has appropriate
                     // constructors and operators
      variable = a;
    }
};

// With Initializer List
class MyClass {
    Type variable;
public:
    MyClass(Type a):variable(a) {   // Assume that Type is an already
                     // declared class and it has appropriate
                     // constructors and operators
    }
};