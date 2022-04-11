#include <iostream>
#include <string>
using namespace std;

string convertToMorse(string code){
    string letters="abcdefghijklmnopqrstuvwxyz";
    string morses[]={".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", 
    "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
    "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    string words ="";
    
    for(int i = 0;i<code.length();i++)
    {
        int n=letters.find(tolower(code[i]));
        if(n!=string::npos)
            words+=morses[n]+" ";
    }
    return words;

}

int main()
{
    cout<<convertToMorse("This is morse code");
}
