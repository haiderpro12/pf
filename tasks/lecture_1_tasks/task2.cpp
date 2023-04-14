#include <iostream>
using namespace std;
int main()
{
    //variables
    int X_vineyard_size;
    float Y_grapes;
    int Z_needed_liters_of_wine;
    int workers;
    int total_grapes_harvested;

    cout << "Enter vineyard size in kg: ";
    cin >> X_vineyard_size;

    cout << "Enter grapes extracted from 1m2: ";
    cin >>Y_grapes;

    cout << "Enter needed liters of wine: ";
    cin >> Z_needed_liters_of_wine;

    cout << "Enter total number of workers: ";
    cin >> workers;

    total_grapes_harvested = X_vineyard_size * Y_grapes;
    
    float wine_produced =  (total_grapes_harvested*0.4)/2.5 ;

    if(wine_produced < Z_needed_liters_of_wine)
    {
        int wine_needed = Z_needed_liters_of_wine - wine_produced;
        cout << "It will be a tough winter! More " << wine_needed << " liters wine needed." << endl;
    }
    else
    {
        cout << "Good harvest this year! Total wine: " << wine_produced << " liters." << endl;
    }
    int wine_left = wine_produced - Z_needed_liters_of_wine;
    if(wine_left > 0)
    {
    int wine_per_worker = wine_left/workers;
    cout << wine_left << " liters left -> " << wine_per_worker << " liters per person." << endl;
    }
}






