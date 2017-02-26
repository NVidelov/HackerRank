/* 
	Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), 
	and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's 
	total cost. 
*/

#include <iostream>

using namespace std;

int main ()
{
    double mealCost, totalCost;
    int tipPercent, taxPercent;
    
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    
    double tip = (mealCost*tipPercent)/100;
    double tax = (mealCost*taxPercent)/100;
    
    totalCost = mealCost+tip+tax;
	int roundCost = totalCost + 0.5;
    
    cout << "The total meal cost is " << roundCost << " dollars." << endl;
    
    return 0;
}