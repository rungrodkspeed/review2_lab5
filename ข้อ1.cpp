#include<iostream>
#include<string>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number of student:";
    cin >> N;
    int i=0;
    string name[N];
    int age[N];
    while(i<N){
        cout << "Name of student "<<i+1<<" = ";
        cin >>name[i];
        cout << "Age of student "<<i+1<<" = ";
        cin >>age[i];
        i++;
    }
    int j=0;
    int a;
    cout << "-----------------------------------"<<endl;
    cout << "Enter an age to search:";
    cin >>a;
    cout << "-----------------------------------"<<endl;
    while(j<N){
    if(a==age[j]){
        cout << name[j]<<endl;
    }
    j++;
}
    cout << "-----------------------------------";
    return 0;
}