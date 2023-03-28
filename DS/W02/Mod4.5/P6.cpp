
// Unfinished

#include <bits/stdc++.h>

using namespace std;

class Cuboid
{
private:
    int length, width, height;

public:
    int Volume, Surface_area;
    int getVolume(int length, int width, int height)
    {
        return length * width * height;
    }
    int getSurfaceArea(int length, int width, int height)
    {
        int ans = (2 * length * width) + (2 * length * height) + (2 * height * width);

        return ans;
    }
    Cuboid(int length, int width, int height) // parameter constructor
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }
    Cuboid() // empty constructor
    {
        length = 0;
        width = 0;
        height = 0;
    }
};

bool comp(Cuboid a, Cuboid b)
{
    return a.Surface_area < b.Surface_area;
}
bool comp2(Cuboid a, Cuboid b)
{
    return a.Volume < b.Volume;
}

int main()
{
    int x = 2;
    vector<Cuboid> inpt(x);

    int i, l, w, h;
    for (i = 1; i <= x; i++)
    {
        cin >> l >> w >> h;

        inpt[i].Surface_area = inpt[i].getSurfaceArea(l, w, h);
        inpt[i].Volume = inpt[i].getVolume(l, w, h);
    }
    for (i = 1; i <= x; i++)
    {
        cout << i << " ->Area-> " << inpt[i].Surface_area << " and Volume-> " << inpt[i].Volume << "\n";
    }
    cout << "After Sorting\n";
    sort(inpt.begin(), inpt.end(), comp);
    sort(inpt.begin(), inpt.end(), comp2);
    for (i = 1; i <= x; i++)
    {
        cout << i << " ->Area-> " << inpt[i].Surface_area << " and Volume-> " << inpt[i].Volume << "\n";
    }

    return 0;
}