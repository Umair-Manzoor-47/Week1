#include<iostream>
using namespace std;
int main(){
 int nubmer01, number02, number03;
	cout<<"  Enter 1st Number = ";
 	cin>>number01;
        cout<<"  Enter 2nd Number = ";
	cin>>number02;
	 cout<<" Enter 3rd Number = ";
	cin>>number03;
    if(number01>number02){
         if(number01>number03){
            cout<< number01 << " is Greatest " <<endl;
       }
    }
    if (number02>number01){
	 if(number02>number03){
	cout<< number02 << " is Greatest " <<endl;
       }
    }
    if (number03>number02){
        if(number03>number02){
	cout<< number03 << " is Greatest " <<endl;
       }
     } 
}