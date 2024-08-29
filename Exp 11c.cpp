//sneha diwan
//23070123126
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
//concept of public and private variables in class
class cube
{
    private:
    double height=4.0;
    double width=5.0;
    double length=6.0;

    public:
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
 
volume is: 120


=== Code Execution Successful ===


*/
