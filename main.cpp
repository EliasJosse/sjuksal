#include <iostream>

int lostSalary(int i_period, int i_salary, double d_rate);

int i_monthlySalary;
int i_weeklySalary;
int i_dailySalary;
int i_hourlySalary;
int i_sickDays;
double d_workrate;

int main(){

    

    std::cout << "Enter monthly salary:";
    std::cin >> i_monthlySalary;


    std::cout << "Enter sick period (days):";
    std::cin >> i_sickDays;

    std::cout << "Enter workrate during period(ex. 75% = 0.75):";
    std::cin >> d_workrate;



    
    i_weeklySalary = (12*i_monthlySalary)/52;
    i_dailySalary = i_weeklySalary/5;
    i_hourlySalary = i_dailySalary/8;




    std::cout << "Monthly salary " << i_monthlySalary << std::endl;
    std::cout << "Weekly salary " << i_weeklySalary << std::endl;
    std::cout << "Daily salary " << i_dailySalary << std::endl;
    std::cout << "Hourly salary " << i_hourlySalary << std::endl;
    std::cout << "Sick period workrate " << d_workrate << std::endl;
    std::cout << "Lost salary during sick period  " << lostSalary(i_sickDays, i_dailySalary, d_workrate) << std::endl;



}


int lostSalary(int i_period, int i_salary, double d_rate){

    return i_period*i_salary*(1-d_rate);

}