#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &input)
{
    string reversed = "";
    int length = input.length();
    for (int i = length - 1; i >= 0; --i)
    {
        reversed += input[i];
    }
    return reversed;
}

int main()
{

    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    string result = reverseString(userInput);

    cout << "Reversed string: " << result << endl;

    return 0;
}
