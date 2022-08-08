#include <iostream>
using namespace std;
class area
{
private:
    int length;
    int breadth;

public:
    int rect(int length, int breadth)
    {
        return length * breadth;
    }
};
int main()
{
    area obj;
    cout << obj.rect(5, 6) << endl;
}