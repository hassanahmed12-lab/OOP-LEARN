#include <iostream>
using namespace std;
class salary
{
public:
    int n;
    int salary1[100];
    void setValue()
    {
        cout<<"enter the n"<<endl;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cout<<"enter salary number"<<i<<endl;
            cin>>salary1[i];
        }
    }
    void getValue()
    {
        int total=0;
        for(int i=0; i<n; i++)
        {
            total+=salary1[i];
        }
        cout<<"total salary "<<total;
    }
};
//hassan number one

int main()
{
   salary s1;
   s1.setValue();
   s1.getValue();
        return 0;
}
