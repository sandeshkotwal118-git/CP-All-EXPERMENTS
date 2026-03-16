#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string text="Hello welcome";
    stringstream ss(text);
    string word;
    int count=0;
    while (ss>>word){
        count++;
    }
    cout<<"Words: "<<count<<endl;
}
