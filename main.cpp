#include <iostream>
#include <string>
using namespace std;

string convertToWords(string code){
    string letters="abcdefghijklmnopqrstuvwxyz";
    string morses[]={".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", 
    "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
    "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    string words ="";
    
    for(int i = 0;i<code.length();i++)
    {
        int n=letters.find(code[i]);
        words+=morses[n]+" ";
    }
    return words;

}

int main()
{
    cout<<convertToWords("This is morse code");
}
