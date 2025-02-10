#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Type in any word ";
    cin >> name;

    int start = 0;
    int end= name.length() - 1;

    while (start < end ) {
        swap(name[start], name[end]);
        start++;
        end--;
    }

    cout << "Reverse of the word is: " << name << endl;

    return 0;
}
