#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(void)
{
    cout<<"\n**************************\n";
    cout<<"SIMPLE CALCULATOR\n";
    cout<<"****************************\n";

    int user_input;  
    double num1,num2;
     while(user_input!=6)
     {
        user_input=0;
    cout<<"\n";
    cout<<"  _____________________________\n";
    cout<<" |            Menu             |"<<endl;
    cout<<" | 1)ADDITION OF 2 numbers     |"<<endl;
    cout<<" | 2)SUBTRACTION of 2 numbers  |"<<endl;
    cout<<" | 3)Muliplication of 2 numbers|"<<endl;
    cout<<" | 4)DIVISION of 2 numbers     |"<<endl;
    cout<<" | 5)SQUARE ROOT OF 1 number   |"<<endl;
    cout<<" | 6)EXIT                      |"<<endl;
    cout<<" |_____________________________|"<<endl;

    cout<<"\nUser Input:";

    cin>>user_input;
   
    switch (user_input)     
    {
    case 1:
        cout<<"\nNumber1:";
        cin>>num1;
        cout<<"\nNumber2:";
        cin>>num2;

        cout<<"\nSum:"<<num1+num2<<endl;
        break;
    
    case 2:
        cout<<"\nNumber1:";
        cin>>num1;
        cout<<"\nNumber2:";
        cin>>num2;
        cout<<"Subtract:";
        cout<<(num1>num2)? num1-num2: num2-num1; 
        break;

    case 3:
        cout<<"\nNumber1:";
        cin>>num1;
        cout<<"\nNumber2:";
        cin>>num2;
        cout<<"Multiplication:"<<num1*num2;
        break;
    
    case 4:
        cout<<"\nNumber1:";
        cin>>num1;
        cout<<"\nNumber2:";
        cin>>num2;
        cout<<"\nDivision num1/num2:"<<num1/num2;
        break;

    case 5:
        cout<<"\nFINDING SQUARE ROOT:\n";
        cout<<"\nNumber1:";
        cin>>num1;
        cout<<sqrt(num1);
        break;
    default:
        cout<<"\nInvalid input";
        break;
    }

     }



    return 0;
}