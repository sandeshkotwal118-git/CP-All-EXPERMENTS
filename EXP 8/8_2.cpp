#include <iostream>
#include <string>
using namespace std;
int main() {
    string src, findstr;
    cin >> src >> findstr;
    int pos = src.find(findstr);
    if(pos == -1)
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}