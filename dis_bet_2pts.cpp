#include <iostream>
#include <math.h>
using namespace std;
class pts
{
    int x, y;
    friend pts dis(pts, pts);

public:
    pts(int a, int b)
    {
        x = a;
        y = b;
    }
    void display(void)
    {
        cout << "The Points are (" << x << ", " << y << ")" << endl;
    }
};

pts dis(pts p1, pts p2)
{
    double data = pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2);
    double sq_data = sqrt(data);
    cout << "The Distance between (" << p1.x << ", " << p1.y << ") and (" << p2.x << ", " << p2.y << ") is " << sq_data << endl;
}
int main()
{
    pts p(1, 0);
    p.display();

    pts q(70, 0);
    q.display();

    dis(p, q);
    return 0;
}