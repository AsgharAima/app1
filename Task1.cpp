#include<iostream>
using namespace std;
template<typename T>
bool compareValues(const T& a, const T& b)
{
    return a==b;
}

int main()
{
    int x=5, y=5;
    float a=5.5, b=5.5;
    char c1='A', c2='B';
    
    cout<<"Comparing the integer values: "<<(compareValues(x, y)?"Equal" : "Not Equal")<<endl;
    cout<<"Comparing the float values: "<<(compareValues(a,b)?"Equal" : "Not Equal")<<endl;
    cout<<"Comparing the characters: "<<(compareValues(c1,c2)?"Equal" : "Not Equal")<<endl;
    
    return 0;
}

























