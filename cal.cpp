#include<iostream>
using namespace std;

int main()
{

int choice,num1,num2;
cout<<"enter the choice"<<endl;
cout<<"1.ADD"<<endl;
cout<<"2.SUB"<<endl;
cin>>choice;
cout<<"enter 1st number"<<endl;
cin>>num1;
cout<<"enter 2nd number"<<endl;
cin>>num2;

switch(choice)
{
case 1:
int result=num1+num2;
cout<<result;
break;
case 2:
int result=num1-num2;
cout<<result;
break;
}

return 0;
} 
