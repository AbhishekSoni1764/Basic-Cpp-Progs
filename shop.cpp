#include<iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void setcount(void){counter = 0;}
        void setitems(void);
        void display(void);
};

void shop :: setitems(void){
    cout<<"Enter the ItemID of "<<counter+1<<" item:"<<endl;
    cin>>itemId[counter];
    cout<<"Enter the ItemPrice of "<<counter+1<<" item:"<<endl;
    cin>>itemPrice[counter];
    counter++;
    
}

void shop :: display(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of "<<itemId[i]<<" is "<<itemPrice[i]<<" Rs"<<endl;
    }
    
}
int main(){
    shop kirana;
    kirana.setcount();
    kirana.setitems();
    kirana.setitems();
    kirana.display();
    return 0;
}