#include<iostream>
#include<string>
using namespace std;

string mixtext(string s1, string s2){
    int a,b;
    int i=0;
    a=s1.size();
    b=s2.size();
    while(i<=a){

        cout << s1[i];

        cout << s2[i];
        i++;
    }
     if(a!=b){
        cout << "E";
    }
}

int main()
{
    string a,b;
    cout << "mix ";
    cin >>a;
    cout << "with ";
    cin >>b;
    mixtext(a,b);
    return 0;
}