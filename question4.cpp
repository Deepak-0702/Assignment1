#include <iostream>
using namespace std;

bool isDigitString(string str,int idx=0) {
    if (idx ==str.length()) 
        return true;

    if (!isdigit(str[idx])) 
        return false;

    return isDigitString(str, idx + 1);
}
int main() {
    string str;
    cout<<"Enter a string:";
    cin>>str;
    if (isDigitString(str))
    {
        cout<<"Yes, the string contains only digits." <<endl;
    }
    else{
        cout<<"No, the string contains non-digit characters." << endl;
    }
    return 0;
}