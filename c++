//Bryan Moody
//Activity: Lab 8 - Recursion
//12/2/2021

#include <iostream> 
#include<iomanip>

//Namespace declared
using namespace std;

//Recursive function
void celciusToFahren(int ctemp) 
{
    
    if (ctemp < 0) 
    {
        //Formatting
        cout << setprecision(1) << fixed << endl;
        cout << setw(12) << left << "Celcius" << setw(12) 
            << left << "Fahrenheit" << endl;
        return;
    }
   
    //Decrease by 1
    celciusToFahren(ctemp - 1);
    
    //Calculate
    double fahrenheit = (1.8 * ctemp) + 32;

    //Display celcius and farehneit temperatures
    cout << setw(15) << left << ctemp << setw(15) 
        << left << fahrenheit << endl;
}

//Main function
int main() 
{
    //Declare celcius variable
    int ctemp = 0;

    //Prompt the user for the starting Celsius temperature
    cout << "Enter the starting Celcius temperature: ";
    cin >> ctemp;

    /*one call to the temperature conversion function with the
        starting Celsius temperature to convert.*/
    celciusToFahren(ctemp);

    //Pause the program
    system("pause");

    //Return all values to 0
    return 0;
}
