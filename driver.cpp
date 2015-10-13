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

double discount(int num, double total)
{
    if(num >= 5) //if there are 5 or more people coming, they get a 10% discount
    {
        total = total-(total*.10); 
    }
    else //otherwise, they don't.
    {
        total = total;
    }
    return total;    
}

double skyDive(int num) //this function calculates the total amount 
{
    double total = 700*num;
    char ans;
    
    cout << "Press 'w' if you want to lodge at Wilderness Lodge.\nPress 'i' if you want to lodge at Luxury Inn\n";
    cin >> ans;
    
    ans = tolower(ans);
    if(ans == 'w') //if the user wants to stay at the Wilderness Lodge, execute the following code.
    {
        total += 65*4*num;
    }
    else if(ans == 'i')//if the user wants to stay at the Luxury Inn, execute the following code.
    {
        total += 120*4*num;
    }
    else
    {
        total;
    }
    return discount(num, total); //call the discount function to see if they are eligible for a discount.
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

    totalAmount = discount(num, totalAmount);
    
    return totalAmount; 
}
