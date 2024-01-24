// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};
int main()
{
    Node a, b;

    a.value = 10;
    b.value = 20;

    a.next = &b;
    b.next = NULL;

    cout << a.value << "\n";
    cout << a.next->value << "\n";

    return 0;
}
/* 
    -ekane first e ekta class Node create kora hoice
    -class er duita data type: value and next create kora hoice
        -value hocce int type
        -next hocce oi class Node er pointer. jekane next node er address thakbe.
    -then main function e duita Node(object a, b) declare kora hoice.
    - then object a and b er value initialize kora hoice
    - then a object er next e b object(node) er address rakha hoice.
    - then b object er next e NULL rakha hoice. karon er por r kono node nai.
    - finally a and b er value print kora hoice. 


 */