#include <iostream>
using namespace std;
int main() 
{
    long long number;
    cout << "Enter a number: ";
    cin >> number;
    int frequency[10] = {0,0,0,0,0,0,0,0,0,0};
    if (number < 0) {
        cout<<"Enter a positive integer";
    }
    if (number == 0) 
    {
        frequency[0] = 1;
    }
    while (number > 0) 
    {
        int num = number % 10;
        frequency[num]++;
        number /= 10;
    }
    cout << "Digit frequencies are:\n";
    for (int i = 0; i < 10; i++) 
    {
        cout << "Frequecy of "<<i<<"is:"<<frequency[i]<<endl;
    }
    return 0;
}
