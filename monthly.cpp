#include <iostream>
#include <fstream>
#include <math.h> 


double i_monthlySalary;
double i_weeklySalary;
double i_hourlySalary;

double sickHours;
double weeklyHours;

double karens;
int sickPay;
int normalPay;

int main(){

    

    std::cout << "Monthly salary? (ex. 42000):";
    std::cin >> i_monthlySalary;

    std::cout << "Hours worked during normal week? (ex. 37.5)";
    std::cin >> weeklyHours;

    std::cout << "Hours absent from work? (ex. 10.5)";
    std::cin >> sickHours;


    
    i_weeklySalary = (12*i_monthlySalary)/52;
    i_hourlySalary = std::round(i_weeklySalary/weeklyHours);

    if(weeklyHours == 0) return 0;

    karens = std::round(i_weeklySalary*0.2*0.8);

    sickPay = std::round((sickHours*i_hourlySalary*0.8)-karens);
    if (sickPay < 0) sickPay = 0;
    normalPay = i_monthlySalary - (sickHours*i_hourlySalary);

    std::ofstream resultFile;
    resultFile.open("result.txt");



    resultFile << "Månadslön " << i_monthlySalary << std::endl;
    resultFile << "Arbetstimmar i veckan " << weeklyHours << std::endl;
    resultFile << "Frånvarutimmar från arbete " << sickHours << std::endl;
    resultFile << "\n\n";
   // resultFile << "Karens " << karens << std::endl;
    resultFile << "\n\n";
    resultFile << "Sjuklön: " << sickPay << std::endl;
    resultFile << "\n";
    resultFile << "Normal lön: " << normalPay << std::endl;
    resultFile.close();


    return 0;

}

