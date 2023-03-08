#include <iostream>
#include <vector>
#include <string>

using namespace std;

//hello 2

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension! I have a weiner dog"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}