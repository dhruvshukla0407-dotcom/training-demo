#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,5,3,4};
    int c=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            c++;
        }
    }
    if(c>0)
    cout<<"The array has duplicate values";
    else if(c==0)
    cout<<"The array has no duplicate values";
    return 0;
}