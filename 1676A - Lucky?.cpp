#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >>n;
    while (n--)
    {
        cin >> s;
        if (s[0]+s[1]+s[2]== s[3]+s[4]+s[5])
        {
            cout <<"YES\n";
        }
        else
        cout << "NO\n";
    }
    
}
