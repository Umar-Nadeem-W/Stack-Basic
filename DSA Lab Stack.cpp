#include <iostream>
using namespace std;

int current = 0;
class stck
{

private:
    int val;
    int myarr[5];

public:

    void push(int a)
    {
    if (isfull() == false)
    {
    myarr[current] = a;
    current++;
    }
    };

    int pop()
    {
        if (isempty() == false)
            {
            current--;
            return myarr[current];
            }

    };

    int top()
     {
        if (isempty() == false)
            {
              return myarr[current];
            }
    };

    bool isempty()
    {
        if (current < 0){return true;}
        else {return false;}
    };
    bool isfull()
   {

    if (current > 4){return true;}
        else {return false;}

   }


};

void menu(){

cout<<"Please select your desired option."<<endl;
cout<<"1. Push"<<endl;
cout<<"2. Pop"<<endl;
cout<<"3. Top"<<endl;
}
int val;
stck s1;


int main(){

int option;
menu();
cin>>option;

if(option == 1)
    {
        cout <<"Please enter th value you wish to push to the top of the stack."<<endl;
        int j;
        cin >> j;
        s1.push(j);
    }

else if (option == 2)
    {
     cout<<"Please enter the value you wish to pop from the top of the stack."<<endl;
     s1.pop();
    }
else if (option == 3)
    {

    }



return 0;
}
