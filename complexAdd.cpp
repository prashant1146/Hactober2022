#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    void setdata()
    {
        cout << "Enter complex number\n";
        int x, y;
        cin >> x >> y;
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a=" << a << " "
             << "b=" << b;
    }
    complex add(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata();
    c2.setdata();
    c3 = c1.add(c2);
    c3.showdata();
    return 0;
}