#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
    char name[20][20]={"ajith","wimal","kanthi","suranji","kushmitha"};
	float marks[20]={78.4,90.6,45.9,72.2,54.4};
	
	int i;
	cout<<setw(5)<<"No"<<setw(15)<<"Name"<<setw(10)<<"Marks"<<endl;
	cout<<endl;
	
	for (i=0;i<5;i++){
		
		
      	cout<<setw(5)<<i+1; 
      	cout<<setw(15)<<fixed<<name[i];
      	
        cout<<setw(10)<<fixed<<setprecision(2)<<marks[i];
	    cout<<endl;
		
		
		
		
	}


  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}