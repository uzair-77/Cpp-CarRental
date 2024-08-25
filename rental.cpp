#include <iostream>
#include <fstream>
#include <unistd.h>
#include <iomanip>
using namespace std;
// main class of the class owner representing base class
 class Owner
{
// Attributes of the owner class showing in public:
 public:
char owner_name [30];
int contact_number;
char owner_address [30];
// void owner is the functionality of the owner class used to display the details of the ower.
 /*void add ()
 {
 cout << "Enter the name of the owner " << endl;
 cin >> owner_name;
 cout << "Enter the contact number of the owner " << endl;
 cin >> contact_number;
 cout << "Enter the address of the owner " << endl;
 cin >> owner_address;
} */
 void display ()
 {
 cout << " Car Owner :" <<" "<<setw(10)<< "Syed Uzair Gillani" << " "<<endl;
 cout << " Contact Number :"<<" "<<setw(10)<< "03395557833" << " "<<endl;
 cout << " Address :" <<" "<<setw(10)<< "Lahore" << " "<<endl;
 cout << " ***************************************************************************** "<<endl;
 }
};
// class of a car and a customer who want to buy a car:
class car
{
public:
 string customer_name;
 string car_model;
 string carnumber;
 char data;
 void add()
 {}
};
// Rental class is the derived class that is inherited from the base class of the
// above class and that is car class
class rental : public car
{
 public:
 // initially 0 value is stored in number of days:
 int days=0;
 // additional int variables are defined here.
 // Here in starting initially rental fee is equal to zero.
int rentalfee = 0;
 void data()
 {
 cout << "****************Welcome to Car Rental System**************** " << endl;
 // Here the user is taking the data from the customer.
cout << "Enter the name of the customer " << endl;
 getline(cin, customer_name);
 // cout << "How many cars a customer want for a rent " << endl;
 // cin >> n;
 cout<<endl;
 // do while loop is used to select a car
 do
 {
 cout<<"\t\t **************** Select the Car ****************"<<endl;
 cout<<"\t\t\t\t Press '1' for Parado 2021."<<endl;
 cout<<"\t\t\t\t Press '2' for JLXI 2022."<<endl;
 cout<<"\t\t\t\t Press '3' for FERRARI 2019."<<endl;
 cout<<"\t\t\t\t Press '4' for Mercedes Benz 2018."<<endl;
 cout<<"\t\t\t\t Press '5' for Mehran VXR 2013."<<endl;
 cout<<"\t\t\t\t Press '6' for Prado TX 2017."<<endl;
 cout<<"\t\t\t\t Press '7' for Cultus 2016"<<endl;
 cout<<"\t\t\t\t Press '8' for Honda 2020."<<endl;
 cout<<"\t\t\t\t Press '9' for Suzuki liana 2019."<<endl;
 cout<<"\t\t\t\t Press '10' for Audi Etron 2019."<<endl;
 cout<<"\t\t\t\t Press '11 for Audi A6 2010."<<endl;
 cout<<"\t\t\t\t Press '12' for Toyota 2018."<<endl;
 cout<<"\t\t\t\t Press '13' for BMW iX."<<endl;
 cout<<"\t\t\t\t Press '14' for Corolla 2022."<<endl;
 cout<<"\t\t\t\t Press '15' for Mercedez 2020."<<endl;
 cout<<endl;
 cout<<"\t\t\t\t Do select the car from the above options " << endl;
 cin >>car_model;
 cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 //selected car by user
 if(car_model=="1")
 {
 system("CLS");
 cout<<"The car you choosed is Parado 2021"<<endl;
 sleep(2);
 }
 if(car_model=="2")
 {
 system("CLS");
 cout<<"The car you choosed is JLXI 2022"<<endl;
 sleep(2);
 }
 if(car_model=="3")
 {
 system("CLS");
 cout<<"The car you choosed is Ferarri 2019"<<endl;
 sleep(2);
 }
 if(car_model=="4")
 {
 system("CLS");
 cout<<"The car you choosed is Mercedes Benz 2018 "<<endl;
 sleep(2);
 }
 if(car_model=="5")
 {
 system("CLS");
 cout<<"The car you choosed is Mehran VXR 2013 "<<endl;
 sleep(2);
 }
 if(car_model=="6")
 {
 system("CLS");
 cout<<"The car you choosed is Cultus 2016 "<<endl;
 sleep(2);
 }
 if(car_model=="7")
 {
 system("CLS");
 cout<<"The car you choosed is Toyota Grande 2021"<<endl;
 sleep(2);
 }
 if(car_model=="8")
 {
 system("CLS");
 cout<<"The car you choosed is Honda 2020"<<endl;
 sleep(2);
 }
 if(car_model=="9")
 {
 system("CLS");
 cout<<"The car you choosed is Suzui liana 2019 "<<endl;
 sleep(2);
 }
 if(car_model=="10")
 {
 system("CLS");
 cout<<"The car you choosed is Audi Etron 2019"<<endl;
 sleep(2);
 }
 if(car_model=="11")
 {
 system("CLS");
 cout<<"The car you choosed is Audi A6 2010"<<endl;
 sleep(2);
 }
 if(car_model=="12")
 {
 system("CLS");
 cout<<"The car you choosed is Toyota 2018"<<endl;
 sleep(2);
 }
 if(car_model=="13")
 {
 system("CLS");
 cout<<"The car you choosed is BMW iX"<<endl;
 sleep(2);
 }
 if(car_model=="14")
 {
 system("CLS");
 cout<<"The car you choosed is Corolla 2022"<<endl;
 sleep(2);
 }
 if(car_model=="15")
 {
 system("CLS");
 cout<<"The car you choosed is Mercedez 2020"<<endl;
 sleep(2);
 }
 if(car_model <="1" && car_model >="15" )
 cout<<"The model you entered is invalid. Please try agin !!"<<endl;
 }
 while(car_model <="1" && car_model >="15" );

cout<<"********************************************************************************"<<endl;
 cout<<endl;
 cout << "Do provide the following information "<<endl;
 // The data is getting from the rental services
 cout<<endl;
 cout<<endl;
 // Tell how many days you want to rent a car??
 cout<<"For How many days you want to rent a car??";
 cin >> days;
 cout<<endl;
 }
 void calculate()
 // This function calculates the rent of the car according to the user given days.
 {
 sleep(1);
 system ("CLS");
 cout<<"The rent of the car is calculating.........!!"<<endl; // Waiting for the system to run.
 sleep(2);
 system ("CLS");
 if(car_model == "1")
 rentalfee=days*56;
 if(car_model == "2")
 rentalfee=days*60;
 if(car_model == "3")
 rentalfee=days*75;
 if(car_model == "4")
 rentalfee=days*50000;
 if(car_model == "5")
 rentalfee=days*35000;
 if(car_model == "6")
 rentalfee=days*30000;
 if(car_model == "7")
 rentalfee=days*5000;
 if(car_model == "8")
 rentalfee=days*8000;
 if(car_model == "9")
 rentalfee=days*75000;
 if(car_model == "10")
 rentalfee=days*55000;
 if(car_model == "11")
 rentalfee=days*20000;
 if(car_model == "12")
 rentalfee=days*65000;
 if(car_model == "13")
 rentalfee=days*55000;
 if(car_model == "14")
 rentalfee=days*100000;
 if(car_model == "15")
 rentalfee=days*150000;
 }
 // The rent of the car to the customer is being displayed.
 void displayrent()
 {
 cout << " s Online Car Rental Services "<<endl;
 cout << " ***************************************************************"<<endl;
 cout << " Customer Name:"<<" "<<setw(10)<< customer_name<<endl;
 cout << " Car Model :" <<" "<<setw(10)<< car_model <<endl;
 cout << " Car No. :" <<" "<<setw(10)<< " JPL 756" <<endl;
 cout << " Number of days:"<<" "<<setw(10)<< days <<endl;
 cout << " ***********************************************************" <<endl;
 cout << " Total Rental Amount is :"<<" "<<setw(10)<< " RS " <<rentalfee<<endl;
 cout << " ******************************************************************"<<endl;
 cout<<endl;
 }
};
// Main Function calling the above functions that are used in classes.
int main()
{
 Owner obj1;
 rental obj2;
 obj2.data();
 obj2.calculate();
 cout<<endl;
 cout<<endl;
 obj1. display();
 cout<<endl;
 cout<<endl;
 obj2.displayrent();
 return 0; //end of the program
}
