#include <iostream>
#include <fstream>
#include <math.h> 

double i_weeklySalary;
double i_hourlySalary;

double sickHours;
double weeklyHours;

double karens;
int sickPay;

int main(){

    

    std::cout << "Hourly salary? (ex. 120):";
    std::cin >> i_hourlySalary;

    std::cout << "Hours worked during normal week? (ex. 37.5)";
    std::cin >> weeklyHours;

    std::cout << "Hours absent from work? (ex. 10.5)";
    std::cin >> sickHours;


    
    i_weeklySalary = i_hourlySalary*weeklyHours;

    karens = std::round(i_weeklySalary*0.2*0.8);

    sickPay = std::round((sickHours*i_hourlySalary*0.8)-karens);
    if (sickPay < 0) sickPay = 0;

    std::ofstream resultFile;
    resultFile.open("result.txt");


    resultFile << "Timlön " << i_hourlySalary << std::endl;
    resultFile << "Arbetstimmar unde en normal vecka " << weeklyHours << std::endl;
    resultFile << "Frånvarutimmar från arbete " << sickHours << std::endl;
    resultFile << "\n\n";
  //  resultFile << "Karens " << karens << std::endl;
    resultFile << "\n\n";
    resultFile << "Sjuklön: " << sickPay << std::endl;
    resultFile << "\n";


    return 0;

}

