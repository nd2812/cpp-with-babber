#include<bits/stdc++.h>
using namespace std;

class human{
    // protected:
    public:
        int height;
        int weight;
    // private:
        int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }

};

class male:public human{
    public:
    string colour;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};

int main() {
    male m1;

    cout<<m1.getHeight()<<endl;
    // cout<<m1.height<<endl;






    // male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.colour<<endl;
    // object1.setWeight(84);
    // cout<<object1.weight<<endl;

    // object1.sleep();
    return 0;
}