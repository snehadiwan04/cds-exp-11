///sneha diwan
//23070123126
//entc-B2
//experiment-11
#include<iostream>
using namespace std;
//display function inside class
class volume{
    public:
    float height;
    float width;
    float length;
    void input()
    {
        cout<<"enter the value of length: ";
        cin>>length;
        cout<<"enter the value of width: ";
        cin>>width;
        cout<<"enter the value of height: ";
        cin>>height;
    }
    float vol()
    {
        float v=length*width*height;
        return v;
    }
    void display()
    {
        double a=vol();
        cout<<"the volume is :"<<a;
    }
};
int main()
{
    volume volume1;
    volume1.input();
    float a=volume1.vol();
    cout<<a;
}

/*
Output 
 
enter the value of length: 4
enter the value of width: 5
enter the value of height: 6
120


=== Code Execution Successful ===


*/
