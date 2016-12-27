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