#include<iostream>
#include<string.h>

using namespace std;

int main(void)
{
    int Guess_Number=0;
    cout<<"\n*******************************\n";
    cout<<"Number Guessing Game\n";
    cout<<"*********************************\n";

    srand(time(NULL));

    int Number_generated=rand()%20 +1;
    while (Guess_Number!=Number_generated)
    {
        cout<<"\nEnter guess the number of 2 digits:";
        cin>>Guess_Number;
        if(Guess_Number>(Number_generated+10))
        {
            cout<<"\nYour guess was to high:"<<endl;
        }
        else if(Guess_Number<(Number_generated-10))
        {
            cout<<"\nYour guess was to low:"<<endl;
        }
        else
        {
            cout<<"\nWrong guess"<<endl;
        }
    }

    cout<<"\nGOOD this one was correct\n";
    cout<<"Random generated number:"<<Number_generated<<endl;
    
    return 0;
}