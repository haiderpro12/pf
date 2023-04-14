#include <iostream>
using namespace std;
int main()
{
    int total_area, number_of_vegetables, area_of_v1, area_of_v2, seed_cost, plantation_cost,
        fertilizing_cost, labor_cost, selling_price_for_v1, selling_price_for_v2, total_cost, total_revenue;

    cout << "Enter number of vegetables (1 or 2): ";
    cin >> number_of_vegetables;
    if (number_of_vegetables == 2)
    {

        cout << "enter total area: ";
        cin >> total_area;

        cout << "enter area of v1: ";
        cin >> area_of_v1;

        cout << "enter area of v2: ";
        cin >> area_of_v2;

        cout << "enter seed cost: ";
        cin >> seed_cost;

        cout << "enter plantation cost: ";
        cin >> plantation_cost;

        cout << "enter fertilizing cost : ";
        cin >> fertilizing_cost;

        cout << "enter labor cost : ";
        cin >> labor_cost;

        cout << "enter selling price for v1: ";
        cin >> selling_price_for_v1;

        cout << "enter selling price for v2: ";
        cin >> selling_price_for_v2;

        total_cost = (seed_cost + fertilizing_cost + plantation_cost + labor_cost) * total_area;
        cout << "total cost is: " << total_cost << endl;

        total_revenue = (selling_price_for_v1 + selling_price_for_v2) * total_area;
        cout << "total revenue is: " << total_revenue << endl;

        if (total_revenue > total_cost)
        {
            cout << "Profit!";
        }
        else
        {
            cout << "Loss!";
        }
    }

    if (number_of_vegetables == 1)
    {
        cout << "enter total area: ";
        cin >> total_area;

        cout << "enter seed cost: ";
        cin >> seed_cost;

        cout << "enter plantation cost: ";
        cin >> plantation_cost;

        cout << "enter fertilizing cost : ";
        cin >> fertilizing_cost;

        cout << "enter labor cost : ";
        cin >> labor_cost;

        cout << "enter selling price for v: ";
        cin >> selling_price_for_v1;

        total_cost = (seed_cost + fertilizing_cost + plantation_cost + labor_cost) * total_area;
        cout << "total cost is: " << total_cost << endl;

        total_revenue = selling_price_for_v1 * total_area;
        cout << "total revenue is: " << total_revenue << endl;

        if (total_revenue > total_cost)
        {
            cout << "Profit!";
        }
        else
        {
            cout << "Loss!";
        }
    }
}
