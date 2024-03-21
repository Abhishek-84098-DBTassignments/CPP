
#include <iostream>
using namespace std;


class Box
{
    private:

    int length;
    int width;
    int height;

    public:

    Box()
    {
        length = 6;
        width = 2;
        height = 5;
    };
    Box(int l,int w,int h)
    {
        length = l;
        width = w;
        height = h;
    };
    Box(int a)
    {
        length = width = height = a;
    };
    void volume()
    {
       int vol = length * width * height;
       cout<<"Volume of the box is::"<<vol<<endl;
    };
};

int main()
{
    int choice;
        Box B1;
        Box B2(10,4,5);
        Box B3(5);

    do
    {
        cout<<"0,EXIT"<<endl;
        cout<<"1. Volume of box with default values/parameterless con::"<<endl;
        cout<<"2.Volume of box with different values/parameterised con::"<<endl;
        cout<<"3. Volume of box which is cube/single parameterised con::"<<endl;
        cout<<"Enter length,width,height::"<<endl;
        cin>>choice;

            switch(choice)
            {
                case 0:
                        cout<<"THANK YOU"<<endl;
                break;

                case 1:
                        B1.volume();
                break;

                case 2:
                        B2.volume();
                break;

                case 3:
                        B3.volume();
                break;

                default:
                        cout<<"Enter valid values." ;
                break;                  
            }

        } while (choice!=0);

    return 0;

};
    
