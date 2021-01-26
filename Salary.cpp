#include<iostream>
using namespace std;
int main(){
 int salary, Bonus, service, newSalary;
	cout<<"  Enter your salary = ";
 	cin>> salary;
        cout<<"  Enter years of service = ";
	cin>> service;
    if(service=>5){
        Bonus = (salary * 0.05); 
	newSalary = salary + Bonus;
        cout<< " You're eligible for 5% Bonus scheme your New Salary is -> "<< newSalary << " with bonus of " << Bonus <<endl;
    }
    
      else{
	cout<< " your salary is  " << salary << endl;
        cout<< " Sorry! you're NOT eligible for Bonus offer..  " << endl; 
     }
     
}