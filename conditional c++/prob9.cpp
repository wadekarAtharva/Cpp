// C++ program to check entered character vowel or consonant.

#include<iostream>
using namespace std;


int main(){
    char ch;

    cout<<"Enter a Character:";
    cin>>ch;

    if((ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') || (ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')){
        cout<<"You entered a vowel";
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        cout<<"You entered a consonant";
    }
    else{
        cout<<"Not a character";
    }
return 0;

}