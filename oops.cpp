// object oriented programming in c++
// procedural programming: only main block
// modular programming: included functions

// disadvantags of procedural and modular ?
// one disadvantage with modular programming is, data and functions are separate. (find other disadvantages)
// to overcome those, oop was created.
// in oop, data and functions were binded

// classs will not occupy any space in memory, only the objects will.

/*
Syntax of creating class:
class class_name {
    data_members;
    member_functions;
}

Syntax for creating a class
class_name obj_name;
the above object will have the class' data members and data functions.

*/

/*
ACCESS SPECIFIERS

public: can be accessed everywhere in the program
private: can be accessed only within the class
protected: can be accessed within the class and inherited class.

by default, members in a class are private.
*/

/*CHARACTERSITICS OF OOP
1.Classes and Objects
2. Abstraction
3. Inheritance
4. Polymorphism
5. Encapsulation

advantages of each charactersitics, examples of each


*/

/*
CONSTRUCTOR

example? boss -> secretary -> employee (time consuming)
instead, boss -> employee (saves more time and proper information is conveyed)

need of constrcutors? if programmers forget to initialse the data while creating an object, it will contain garbage value and its dangerous.
constructors are used to allocate memory, if there is no constructor, compiller will call its own constructor and fill with garbage value.

when creating exact copy of a constructor, then comple time error will happen.

constructor will have same name as class and it DOESN'T return anything.

TYPES OF CONSTRUCTORS

1. Default Constructor: it doesn't take any arguments
2. Parametrized Constructor: it takes arguments
3. Copy Constructor: copies value from other object

Syntax:

class_name( class_name &obj){
    var = obj.var;
}

class_name obj2(obj1);
*/

/*
OPERATOR OVERLOADING
+ operator was able to operate only on pre-defined data types. it was not working on user-defined data type. we can add do int, but not two objects.

When we make operators work for user-defined data types, then it is known as operator overloading.
*/

/*
INHERITANCE
basic concept: child inherits some properties from father, father inherits from grandfather.

defn: one class acquires properties from other class. inherited class is child class. the father class is base class.
need of inheritence: say u are working on a module from past one year and completed it, all of a sudden a client wants to add new feature to it. then instead of redoing everything, developer can inherit the base class and add new feature.

inheritence reduces duplicate code
code re-usability

inheritance and constructors:
when a child class object is created, it calls parent class constructor as well. but note: it only calls default constructor from parent and not parametrised or copy constructor.

to call base class parametrised constructor:
derived_class_constructor (int a..) : base_class_constructor(a) //no data-type.
*/

/*
FUNCTION OVERRIDING
function created in base class will be re-defined in derived class.
derived object is created, new function will be called. return type in base class doesn't matter.

to call function of base class from dervied class:
base_class::function();
*/

/*
RELATIONS
-helps to find how two classes are related to each.

two types:
isA: does a class have another class, which it is inherited from. (it is basically inheritence).
hasA: a class has data members as objects of other class.
class a {
    class_2 var;
}
*/

/*
POLYMORPHISM
means many forms.
two types:

1. Compile time: operator and function overloading
2. run-time: virtual functions and function overriding.
*/

/*
VIRTUAL FUNCTIONS
Virtual means, it appears to exist but it doesn't.

virtual functions means, program that appears to be calling a function of one class may in reality be calling a function of other class.

example :

*/

// VIRTUAL FUNCTIONS
//  #include <iostream>
//  using namespace std;

// class base
// {
// public:
//     virtual void show()
//     {
//         cout << "Base class\n";
//     }
// };

// class d1 : public base
// {
// public:
//     void show()
//     {
//         cout << "Derived 1\n";
//     }
// };

// class d2 : public base
// {
// public:
//     void show()
//     {
//         cout << "Derived 2\n";
//     }
// };

// int main()
// {
//     base *p;
//     d2 der2;
//     p = &der2;
//     p->show();
// }

/*
why virtual functions?
what is late binding?

example:
say a shopkeeper wants to give free buns on his 10th anniversery to kids.
he decided to give pink bun to girls and brown bun to boys. until the kids show up, the shopkeeper will not know which buns to give. in programming, virtual functions are used when our decision is based on some factors.
*/

/*
ABSTRACT CLASS

abstract class is used when we want to ensure that it just acts a parent for base classes.
if a class has pure virtual function, then the class is abstract class.
*/

// #include <iostream>
// using namespace std;

// class person
// {
// public:
//     virtual void show() = 0; // it cannot have any other functions
// };

// class boy : public person
// {
// public:
//     void show()
//     {
//         cout << "Brown Bun\n";
//     }
// };

// class girl : public person
// {
// public:
//     void show()
//     {
//         cout << "Pink Bun\n";
//     }
// };

// int main()
// {
//     boy a;
//     a.show();
//     // person a; gives an error, because we can't create an object of abstract class.
//     return 0;
// }

/*
FRIEND FUNCTIONS
if you solving a problem alone and then your friend joins in solving the same, then
pros:
- reduced work
- increased speed
- less chances of mistakes

a friend function declared outside the class can access all private, protected and public data.

many c++ developers argued that friend function violates the oop concept and violates data abstraction. But c++ provides a way for developers to use however they want. developers have full control over it. no other oop languages have friend function.

*/

// #include <iostream>
// using namespace std;

// class A
// {
//     int a;

// public:
//     A(int x)
//     {
//         a = x;
//     }

//     friend void fun();
// };

// class B
// {
//     int b;

// public:
//     B(int y)
//     {
//         b = y;
//     }

//     friend void fun();
// };

// void fun()
// {
//     A obj1(10);
//     B obj2(3);

//     int res = obj1.a + obj2.b;
//     cout << res;
// }

// int main()
// {
//     fun();
// }

// #include <iostream>
// using namespace std;

// class person
// {
//     int weight;

// public:
//     person(int x = 0)
//     {
//         weight = x;
//     }

//     friend int operator+(person x, person y);
//     friend bool operator<(person x, person y);
// };

// int operator+(person x, person y)
// {
//     person temp;
//     temp.weight = x.weight + y.weight;
//     return temp.weight;
// }

// bool operator<(person x, person y)
// {
//     return x.weight < y.weight;
// }

// int main()
// {
//     int w1, w2;
//     cout << "Enter two weights : ";
//     cin >> w1 >> w2;

//     person a(w1), b(w2);

//     cout << a + b;
// }

/*
FRIEND CLASS
in this.. each functions can access each other data.

function in friend class can access private data member of other class.
*/
// #include <iostream>
// using namespace std;

// class A
// {
//     int x;

// public:
//     A()
//     {
//         cout << "constuctor";
//     }
//     friend class B;

//     int sum()
//     {
//         B obj;
//         obj.y = 10;
//         return obj.y;
//     }
// };

// class B
// {
//     int y;

// public:
//     B()
//     {
//         cout << "constuctor2";
//     }
//     int sum()
//     {
//         A obj;
//         obj.x = 10;
//         return obj.x;
//     }
//     friend class A;
// };

// int main()
// {
//     B obj;
//     cout << obj.sum();
// }

/*
STATIC MEMBERS
when two objects are created of same class, their memory is not linked, each object has its own memory and all the varibales in the object will get individual memory.
but if its a static member, all the objects of same class will access the same variable, hence same value for all objects.

syntax:

class A{
    public:
    static int stat;
};
int A :: stat = 0;

*/

/*
STATIC MEMBER FUNCTIONS
it can only access static members within a class, if other variables are tried to use, it throws an error.

*/

#include <iostream>
using namespace std;

class a
{
public:
    a()
    {
    }
    static int stat;

    static int get()
    {
        stat++;
        return stat;
    }
};

int a ::stat = 1;

int main()
{
    a obj, obj2;
    cout << obj.stat << endl;
    obj.stat = 9;
    cout << obj2.stat;
}