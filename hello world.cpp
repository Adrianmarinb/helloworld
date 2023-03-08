#include <iostream>
#include <vector>
#include <string>

using namespace std;

//hello

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension! I have a weiner dog"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}