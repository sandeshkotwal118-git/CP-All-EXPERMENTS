#include <iostream>
using namespace std;

int getLength(char* str, int len=0) {

    if (*str == '\0') {
        return len;
    }

    return getLength(str + 1, len + 1);
}

int main() {
    char text[] = "MitWpu";
 
    int result = getLength(text, 0);
    
    cout << "Length: " << result << endl;

    return 0;
}