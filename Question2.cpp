#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number:\n";
    int number;
    int div=0;
    cin>>number;
    for(int i=1;i<number;i++)
    {
        if(number%i==0)
        div+=i;
    }
    if(div==number)
    {
        cout<<"The number " <<number<< " is a perfect number.";
    }
    return 0;
}