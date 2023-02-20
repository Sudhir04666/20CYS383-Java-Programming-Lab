#include <iostream>
using namespace std;
// check armstrong numbers in c++?
int getSumOfCubesOfDigits(int n)
{
    int sum = 0;
    while (n)
    {
        const int rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }
}


int main()
{
    int n;
    cout << "Enter the Number for checking" << endl;
    cin >> n;
    if(getSumOfCubesOfDigits(n) == n)
        cout<<"Armstrong Number"<<endl;
    else
        cout<<"It's not a armstrong number";
    return 0;
}


