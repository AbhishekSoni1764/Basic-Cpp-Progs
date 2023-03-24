// agar derived class mai koi display function nhi hoga toh base class wala display execute ho jayega
//  par pure virtual ke case mai har derived class mai display function hona jaruri hai agar aap main mai call krr rahe ho usse.
// Abstract Base Class --> A class which at least has one virtual function. 

#include <iostream>
#include <cstring>
using namespace std;

class Restaurent
{
protected:
    float rating;
    string name;

public:
    Restaurent(string s, float r)
    {
        name = s;
        rating = r;
    }
    virtual void display() = 0;    // do-nothing OR Pure Virtual Function --> A function which must be overwritted.   
    // virtual void display(){};   // in this case if no display function is their in any derived class code will work
    // void display(){
    //     cout<<"Without virtual this will be called"<<endl;
    // }
};

class online : public Restaurent
{
    int online_tax;

public:
    online(string s, float r, int tax) : Restaurent(s, r)
    {
        online_tax = tax;
    }
    void display()
    {
        cout << "The name of the restraunt is: " << name << endl;
        cout << "Ratings: " << rating << endl;
        cout << "The online tax is: " << online_tax << endl;
    }
};

class offline : public Restaurent
{
    int extra;

public:
    offline(string s, float r, int e) : Restaurent(s, r)
    {
        extra = e;
    }
    void display()
    {
        cout << "The name of the restraunt is: " << name << endl;
        cout << "Ratings: " << rating << endl;
        cout << "Extra Items in Offline mode: " << extra << endl;
    }
};
int main()
{
    string name;
    float rating;
    int tax, extra;

    cin >> name;
    cin >> rating;
    tax = 450;
    extra = 5;

    online obj1(name, rating, tax);
    // obj1.display();

    offline obj2(name, rating, extra);
    // obj2.display();

    Restaurent *both[2];
    both[0] = &obj1;
    both[1] = &obj2;

    both[0]->display();
    both[1]->display();

    return 0;
}