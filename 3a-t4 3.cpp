#include<iostream>
using namespace std;

int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
while (!cin || (cin.peek() != '\n'))
{
    cin.clear();
    while (cin.get() != '\n');
    cout << "Please, enter an integer" << endl;
    cin >> k;
}
if(k==0){cout << " The total sum of 0 integers is: 0"; return 0;}
do {
cout << "Enter integer nr. " << i << ": ";
cin >> number;
while (!cin || (cin.peek() != '\n'))
{
    cin.clear();
    while (cin.get() != '\n');
    cout << "Please, enter an integer" << endl;
    cin >> number;
}
sum_k += number;
i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
}
