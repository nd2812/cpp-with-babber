#include<bits/stdc++.h>
using namespace std;
// compile time poly..
// 1.function overloading
class A{

    public:
    void sayHello(){
        cout<<"Hello Love Babbar"<<endl;
    }
    int sayHello(string name,int n){
        cout<<"Hello Love Babbar"<<endl;
        return n;
    }
    void sayHello(string name){
        cout<<"Hello"<<name<<endl;
    }

};
// 2.operator overloading
class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout<<"output "<<value2 - value1 <<endl;
        cout<<"Hello Babbar"<<endl;
    }

    void operator() (){
        cout<<"main Bracket hu "<<this->a<<endl;
    }
};
// run-time polymorphism

class animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class dog : public animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main() {

    dog obj;
    obj.speak();









    // B obj1,obj2;

    // obj1.a=4;
    // obj2.a=7;

    // obj1+obj2;
    // obj1(); 
    return 0;
}