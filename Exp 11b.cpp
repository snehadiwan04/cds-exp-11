//sneha diwan
//23070123126
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
class cube
{
    public:
    double height=3.0;
    double width=4.0;
    double length=5.0;

    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
}

/*
Output 
 
volume is: 60


=== Code Execution Successful ===


*/
