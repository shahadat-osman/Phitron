#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "I am eating rice.";
    string s2 = "I am also eating daal.";
    string s3 = s+s2;

    //cout<<s.size()<<endl;
    //cout<<s3;

    //for(int i=0; i<s.size(); i++)
    //{
    //    s[i]= s[i]+1;
    //}


    //s.pop_back();   // delete last value of string
    //s.erase(s.begin()+2); // delete any one value of string
    //cout<<s<<"\n";
    string line;

    getline(cin, line);
    cout<<line<<endl;

    return 0;
}