//Name: Nicole Hipolito
//Name: Sarah Villegas
//Name: Maria Chombo

#include <iostream>
#include <cassert>
#include <string>
using namespace std;

char menu();
double climbing(int num);
double scuba(int num);
double skyDive(int num);
double spelunk(int num);
double discount(int num, double total);

int main()
{
    return 0;   
}






































char menu(){ 

    char choice;

    cout << "Would you like to go to Devil's Courthouse Adventure Weekend enter D" <<endl; 
    cout << "Would you like to go to Bahama Scuba enter B" <<endl;
    cout << "Would you like to go to Colorado Sky Dive enter C" <<endl;  
    cout << "Would you like to go to Spelunk Barron Cliff enter S" <<endl;  
    cin >> choice; 
    
    return choice; 
}

double spelunk(int num){

    double baseCharge = 700.0;
    double equitmentCharge = 40.0 * 8.0;
    string needEquipment;
    double totalAmount = 0.0;
    cout << "Do you need to rent equitment for your adventure? ";
    cin >> needEquipment; 
    
    if ((needEquipment == "yes") || (needEquipment == "Yes")){
    
        totalAmount += num * equitmentCharge; 
    
    }
    totalAmount += baseCharge * num;

    //totalAmount = dicount(num, totalAmount);
    
    return totalAmount; 
}
