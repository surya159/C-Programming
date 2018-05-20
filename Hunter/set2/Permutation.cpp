#include<iostream>
using namespace std;

void swap(char &a, char &b)
{
    
    char temp = a;
    a = b;
    b = temp;
}
 
void perm(string s,int i,int n)
{
    int j;
    if (i == n)
        cout << s << "\t";
    else
    {
        for (j = i; j < s.length(); j++)
        {
            swap(s[i],s[j]);
            perm(s, i + 1, n);
            swap(s[i],s[j]);
        }  
    }
}
 
int main()
{
    string s;
    cin >> s;
    perm(s, 0, s.length() - 1);
    cout << endl;
}
