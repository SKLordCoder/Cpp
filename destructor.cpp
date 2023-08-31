#include <iostream>
using namespace std;
class Al
{
    public:
    int l;
    int b;
    Al ()
    {
        l=1;
        b=2;
        cout<<l<<" "<<b<<endl;
    }
    Al (int x,int y)
    {
        l=x;
        b=y;
        cout<<l<<" "<<b<<endl;
    }
    Al (Al &d)
    {
        l=d.l;
        b=d.b;
        cout<<l<<" "<<b<<endl;
    }
    ~ Al()
    {
        cout<<"G"<<endl;
    }
};
int main()
{
    Al lok;
    Al n(4,7);
    Al m(n);
    
}
