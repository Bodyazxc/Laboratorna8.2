#include <iostream>
#include <string>
using namespace std;

size_t MaxLength(const string& s)
{
    size_t maxLen = 0, len = 0;
    size_t start = 0, finish;
    while ((start = s.find_first_not_of(" \n.,;:!?-()", start)) != string::npos)
    {
        finish = s.find_first_of(" \n.,;:!?-()", start + 1);
        if (finish == string::npos)
            finish = s.length();

        len = finish - start;
        if (len > maxLen)
            maxLen = len;

        start = finish + 1;
    }
    return maxLen;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Length of the longest word: " << MaxLength(str) << endl;
    return 0;
}
