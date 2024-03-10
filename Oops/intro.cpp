#include<bits/stdc++.h>
// #include "hero.cpp"
using namespace std;

class hero {
    private:
    // properties
    int health;

    // private:
    public:
    char *name;
    char level;
    static int timeToComplete;

    hero(){
        name = new char[100];
        cout<<"simple constructor Called"<<endl;
    }

    // Paramiterised Constructor
    hero(int health){
        // cout<<"this -> "<<this<<endl;    
        this->health=health;
    }

    hero(int health,char level ){
        this->level = level;
        this->health=health;
    }

    // copy constructor
    hero(hero& temp){
        char *ch =new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);//it is deep copy
        this->name=ch;

        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    } 

    void print(){
        cout<<endl;
        cout<<"[ health : "<<health<<" ,";
        cout<<"level : "<<level<<" ,";
        cout<<"name : "<<name<<" ]"<<endl<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level=ch;
    }

    static int random(){
       return timeToComplete;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    // destroctor
    ~hero(){
        cout<<"destroctor bhai called"<<endl;
    }

};

int hero :: timeToComplete =5;

int main() {
    // cout<<hero::timeToComplete<<endl;
    cout<<hero:: random()<<endl;
    
    // hero a;
    // a.timeToComplete=10;//not recommand
    // cout<<a.timeToComplete<<endl;







    // // static
    // hero a;

    // // dynamic
    // hero *b = new hero();
    // delete b;//manually destructor call 
    // return 0;




    // hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7]="babbar";
    // hero1.setName(name);
    // // hero1.print();

    // // use default copy constructor which use shallow copy
    // hero hero2(hero1);
    // // hero hero2=hero1;
    // // hero2.print();
    // hero1.name[0]='G';
    // hero1.print(); 
    
    // hero2.print(); 

    // hero1=hero2;
    // hero1.print(); 
    
    // hero2.print(); 
 


    // hero suresh(70,'C');
    // suresh.print();

    // hero R(suresh);
    // R.print();


    // // object created statically
    // hero ramesh(10);
    // ramesh.print();
    // // cout<<"Address of ramesh "<< &ramesh<<endl;
    // // ramesh.getHealth();

    // // dynamically
    // hero *h =new hero(11);
    // h->print();

    // hero temp(22,'B');
    // temp.print();




    // static allocation
    // hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout<<"level is:"<<a.level<<endl;
    // cout<<"health is "<<a.getHealth()<<endl;

    // // dynamically
    // hero *b = new hero;
    // b->setHealth(70);
    // b->setLevel('A');
    // // cout<<"level is:"<<(*b).level<<endl;
    // // cout<<"health is "<<(*b).getHealth()<<endl;

    // cout<<"level is:"<<b->level<<endl;
    // cout<<"health is "<<b->getHealth()<<endl;
    
    // creation of object
    // hero ramesh;
    // cout<<"size: "<<sizeof(ramesh)<<endl;
    // cout<<"ramesh health is "<<ramesh.getHealth()<<endl;
    // ramesh.setHealth(70);
    // ramesh.level='A';

    // cout<<"health is: "<<ramesh.getHealth()<<endl;
    // cout<<"level is:"<<ramesh.level<<endl;

    return 0;
}