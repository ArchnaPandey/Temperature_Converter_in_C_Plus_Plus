#include<iostream>
using namespace std;

int main()
{
   float fahrenheit, celsius;
   char choice;
   cout<<"\n";
   cout << "------------TEMPERATURE CONVERTER------------" << endl;
   cout<<"\n";
   cout<<"\n";

   cout << "Choose from following option:" << endl;
   cout << "1. Celsius to Fahrenheit." << endl;
   cout << "2. Fahrenheit to Celsius." << endl;
   cin >> choice;

   //option for converting celsius into fahernheit
   if (choice == '1')
   {
      cout << "Enter the temperature in Celsius: ";
      cin >> celsius;

      fahrenheit = ((9/5)* celsius) + 32.0; //temperature conversion formula
      cout << "\nTemperature in degree Fahrenheit: " << fahrenheit << " F" << endl;
   }
   //option for converting Fahrenheit into Celsius
   else if (choice == '2')
   {
      cout << "Enter the temperature in Fahrenheit: ";
      cin >> fahrenheit;

      celsius = (fahrenheit - 32)*5/9; //temperature conversion formula
      cout << "\nTemperature in degree Celsius: " << celsius << " C" << endl;
   }
   else
      cout << "Error Wrong Input." << endl;

   return 0;
}