#include <iostream>
using namespace std;

int main()
{
    string result;
    int num;
    cout << "enter a number: ";
    cin >> num;
    result = (num >= 0) ? "posstive" : "negative";
    cout  << result << endl;

    string result2;
    int num2;
    cout << "enter a number: ";
    cin >> num;
    result = (num == 0) ? "zero" : (num > 0) ? "positive" : "negative";
    cout << result << endl;

    return 0;
}

