#include <iostream>
using namespace std;
class palin
{
public:
    int check(int copy1)
    {
        int copy = 0, num1 = copy1;
        for (int a = 0; a < copy1; copy1 /= 10)
        {
            copy = copy * 10 + (copy1 % 10);
        }
        return (copy == num1);
    }
};
int main()
{
    palin obj;
    int num, copy = 0, copy1;
    cout << "Enter any no = ";
    cin >> num;
    if (obj.check(num))
    {
        cout << num << " is a palindrome no ";
    }
    else
    {
        cout << num << " is not a palindrome no ";
    }

    return 0;
}