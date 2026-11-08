#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
    string text;
    string word;
    int count = 0;

    cout << "Введите предложение (только на английском): ";
    if (!getline(cin, text)) return 0;

    stringstream ss(text);

    while (ss >> word) 
    {
        if (word.length() % 2 != 0) 
        {
            count++;
        }
    }

    cout << "Количество слов с нечетной длиной: " << count << endl;

    return 0;
}