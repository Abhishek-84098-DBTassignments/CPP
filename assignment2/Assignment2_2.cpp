#include<iostream>
using namespace std;

class tollbooth
{

 private:
       unsigned int TotalCars;
       double TotalMoney;
  
 public:
 tollbooth()
 {
    TotalCars=0;
    TotalMoney=0;
 }

 void payingCar()
 {
    TotalCars++;
    TotalMoney=TotalMoney + 0.50;
 }

 void noPayingCar()
 {
    TotalCars++;
 }

 void printOnConsole()
 {
    cout<<"Total Cars:"<<TotalCars<<endl;
    cout<<"Total Money:"<<TotalMoney<<endl;
    cout<<"Paying Cars:"<<TotalMoney/0.50<<endl;
    cout<<"Non Paying Car:"<<TotalCars-(TotalMoney/0.50)<<endl;
 }

};
int main()
{
    tollbooth A;
    A.payingCar();
    A.payingCar();
    A.noPayingCar();
    A.printOnConsole();


    return 0;
}
