#include <iostream>
using namespace std;
void hello()
{
    cout << "hello bro";
}
int sum_of_dgits(int a)
{
    int sum = 0;
    for (; a != 0;)
    {
        sum = sum + a % 10;
        a = a / 10;
    }
    return sum;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = sum_of_dgits(a) + sum_of_dgits(b);
    cout << sum << endl;
    swap(a, b);
    cout << a << " " << b << endl;
}