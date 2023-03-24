#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x;
    double y, z;

    ofstream of, of2;
    ifstream ifs;

    of.open("1.txt");
    of2.open("2.txt");

//    cout<<
    ifs.open("0.txt");

    ifs>> x>>y>>z;
    cout<<x<<endl<<y<<endl<<z<<endl;

//    of2<<"Hello Coders!\n";
//    of<<"Hello World\n";


    ifs.close();
    of.close();
    of2.close();
    return 0;
}