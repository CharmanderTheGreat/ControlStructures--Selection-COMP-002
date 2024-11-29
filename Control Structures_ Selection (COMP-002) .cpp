#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char maritalStat;
    double taxRate, salary = 0.0;

    cout << "Enter marital status (S-single/M-married): ";
    cin >> maritalStat;

    if (maritalStat != 'S' && maritalStat != 's' && 
        maritalStat != 'M' && maritalStat != 'm') {
        cout << "Error: Invalid marital status.\nUse 'Single' or 'Married' only!" << endl;
        return 1;
    }
    
    cout << "Enter monthly salary (non-negative): ";
    cin >> salary;
    
    if (salary < 0) {
        cout << "Error: The salary must be non-negative value only!";
        return 1;
    }
    
    if (maritalStat =='S' || maritalStat == 's') {
        taxRate = (salary>100000) ? 0.30 : (salary>50000) ? 0.20 : 0.10;
    }
    else if (maritalStat =='M' || maritalStat =='m') {
        taxRate= (salary>100000) ? 0.25 : (salary>50000) ? 0.15 : 0.05;
    }    
    
    double tax = taxRate * salary;
    
    cout<<fixed<<setprecision(2);
    cout<<"\nEmployee Month Salary: "<<salary<<endl;
    cout<<"Marital Status: "<< (maritalStat =='S' || maritalStat == 's'? "Single":"Married")<<endl;
    cout<<"Tax Rate: "<<(taxRate * 100) <<"%"<<endl;
    cout<<"Salary Tax: " <<tax<<endl;
        
        

    return 0;
}