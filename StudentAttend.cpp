#include<iostream>
using namespace std;
int main(){
 float totalClasses, classestaken, percentage;
	cout<<"  Enter number of Total classes = ";
 	cin>> totalClasses;
        cout<<"  Enter classes taken by Student= ";
	cin>> classestaken;
           percentage = (classestaken/totalClasses) * 100;
    if(percentage => 75){
        cout<< " You're eligible for Exams this year & Your attendance percentage is -> "<< percentage << " % " <<endl;
    }
    
      else{
	cout<< " your  is  attendance percentage is -> "<< percentage << " % " <<endl;
        cout<< " Sorry! you're NOT eligible for Exams this year try next time... " << endl; 
     }
     
}