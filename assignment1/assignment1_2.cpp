#include <iostream>
using namespace std;


struct Date
{
    private:
       int day;
       int month;
       int year;

    public:
    
    void initDate()
    { 
        day=01;
        month=01;
        year=2001;

    };

    void acceptDateFromConsole()
    {
        cout<<"ENTER THE DAY"<<endl;
        cin>>day;
        cout<<"ENTER THE MONTH"<<endl;
        cin>>month;
        cout<<"ENTER THE YEAR"<<endl;
        cin>>year;

    };
    
    void printDateOnConsole()
    {
        cout<<"DAY/"<<"MONTH/"<<"YEAR::"<<day<<"/"<<month<<"/"<<year<<"/"<<endl;
        
    };

    bool leapyear()
    {
        if ((year % 4 ==0 && year % 100 !=0) || (year % 400 ==0))
        return true;
        else
        return false;
    
    }

};

int main()
{

    struct Date d;
    int choice;

     do
    {
        cout<<"0.EXIT"<<endl;
        cout<<"1.ENTER THE DAY DETAILS"<<endl;
        cout<<"2.SHOW THE DAY"<<endl;
        cout<<"CHOOSE THE OPTION"<<endl;
        cin>>choice;

    switch (choice)
    {
    case 0:
        cout<<"THANKS FOR VISITING"<<endl;
        break;
      
    case 1:
        d.acceptDateFromConsole();
        break;

    case 2:
         d.printDateOnConsole();

    case 3:
         if (d.leapyear())
         cout<<"This is leap year"<<endl;
         else
         cout<<"This is normal year"<<endl;
        break;   

    default:
     cout<<"ENTER VALID CHOICE....."<<endl;
        break;
    }
        
    } while (choice!=0);
    

};