#include <bits/stdc++.h>

using namespace std;

class Array // Memory complexity O(n)
{
private:
    int *arr;
    int cap;
    int sz;

    void Increase_size()
    {
        cap = cap * 2;
        int *tmp = new int[cap];
        for (int i = 0; i < sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }

public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }

    void Push_back(int x) // Time complexity O(1)
    {
        if (cap == sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    void Insert(int pos, int x) // Time complexity O(sz-pos) O(sz)
    {
        if (cap == sz)
        {
            Increase_size();
        }
        for (int i = sz - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }
    void Print() // Time complexity O(n)
    {
        for (int i = 0; i < sz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    int getSize() // Time complexity O(1)
    {
        return sz;
    }
    int getElement(int idx) // Time complexity O(1)
    {
        if (idx >= sz)
        {
            cout << "Error " << idx << " is out of Bound!\n";
            return -1;
        }
        return arr[idx];
    }
    void Pop_back()// Time complexity O(1)
    {
        if (sz == 0)
        {
            cout << "Current size is \n";
            return;
        }
        sz--;
    }
    void Erase(int pos)// Time complexity O(sz) -> O(1)
    {
        if (pos >= sz)
        {
            cout << "Position doesn't exist.\n";
        }
        for (int i = pos + 1; i < sz; i++)
        {
            arr[i - 1] = arr[i];
            // swap(arr[i-1], arr[j]);
        }
        sz--;
    }
};
int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);

    cout << a.getSize() << "\n";
    a.Print();

    a.Insert(1, 5);

    cout << a.getSize() << "\n";
    for (int i = 0; i < a.getSize(); i++)
    {
        cout << a.getElement(i) << " ";
    }
    cout << "\n";

    a.Pop_back();
    a.Print();
    a.Pop_back();
    a.Print();
    a.Erase(1);
    a.Print();
    return 0;
}