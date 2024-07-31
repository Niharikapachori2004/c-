#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(const string &str)
{
    string cleanedStr;

    for (char c : str)
    {
        if (isalnum(c))
        {
            cleanedStr += tolower(c);
        }
    }

    int len = cleanedStr.length();
    for (int i = 0; i < len / 2; ++i)
    {
        if (cleanedStr[i] != cleanedStr[len - 1 - i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string input;

    cout << "Enter a word or phrase: ";
    getline(cin, input);

    if (isPalindrome(input))
    {
        cout << "\"" << input << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}
