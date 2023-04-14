#include <iostream>
using namespace std;
int main()
{
    int cost_of_rent_1_room;
    cout << "Enter cost of renting one room: ";
    cin >> cost_of_rent_1_room;

    int number_of_rooms_booked;
    cout << "Enter number of rooms booked: ";
    cin >> number_of_rooms_booked;

    int number_of_days_room_booked;
    cout << "enter number of days room are booked: ";
    cin >> number_of_days_room_booked;

    int sales_tax;
    cout << "enter sales tax: ";
    cin >> sales_tax;

    if (number_of_rooms_booked >= 10)
    {
        if (number_of_days_room_booked >= 3)
        {
            int total_cost = (cost_of_rent_1_room * number_of_rooms_booked * number_of_days_room_booked);
            float total_cost_after_discount = total_cost-(total_cost * 0.15);
            float add_sales_tax_to_total_cost = total_cost_after_discount+(total_cost_after_discount*sales_tax)/100;
            float total_bill_amount = add_sales_tax_to_total_cost;
            cout << "total cost of rooms are: " <<total_cost_after_discount;
            cout << "total billing amount is: " << total_bill_amount;
        }
        else
        {
            int total_cost = (cost_of_rent_1_room * number_of_rooms_booked * number_of_days_room_booked);
            float total_cost_after_discount = total_cost-(total_cost * 0.10);
            float add_sales_tax_to_total_cost = total_cost_after_discount+(total_cost_after_discount*sales_tax)/100;
            float total_bill_amount = add_sales_tax_to_total_cost;
            cout << "total cost of rooms are: " <<total_cost_after_discount;
            cout << "total billing amount is: " << total_bill_amount;
        }
    }
      if ((number_of_rooms_booked >= 20) && =< 30))
    {
        if (number_of_days_room_booked >= 3)
        {
            int total_cost = (cost_of_rent_1_room * number_of_rooms_booked * number_of_days_room_booked);
            float total_cost_after_discount = total_cost-(total_cost * 0.25);
            float add_sales_tax_to_total_cost = total_cost_after_discount+(total_cost_after_discount*sales_tax)/100;
            float total_bill_amount = add_sales_tax_to_total_cost;
            cout << "total cost of rooms are: " <<total_cost_after_discount;
            cout << "total billing amount is: " << total_bill_amount;
        }
        else
        {
            int total_cost = (cost_of_rent_1_room * number_of_rooms_booked * number_of_days_room_booked);
            float total_cost_after_discount = total_cost-(total_cost * 0.20);
            float add_sales_tax_to_total_cost = total_cost_after_discount+(total_cost_after_discount*sales_tax)/100;
            float total_bill_amount = add_sales_tax_to_total_cost;
            cout << "total cost of rooms are: " <<total_cost_after_discount;
            cout << "total billing amount is: " << total_bill_amount;
        }
    }
     if (number_of_rooms_booked >= 30)
    {
        if (number_of_days_room_booked >= 3)
        {
            int total_cost = (cost_of_rent_1_room * number_of_rooms_booked * number_of_days_room_booked);
            float total_cost_after_discount = total_cost-(total_cost * 0.35);
            float add_sales_tax_to_total_cost = total_cost_after_discount+(total_cost_after_discount*sales_tax)/100;
            float total_bill_amount = add_sales_tax_to_total_cost;
            cout << "total cost of rooms are: " <<total_cost_after_discount;
            cout << "total billing amount is: " << total_bill_amount;
        }
        else
        {
            int total_cost = (cost_of_rent_1_room * number_of_rooms_booked * number_of_days_room_booked);
            float total_cost_after_discount = total_cost-(total_cost * 0.30);
            float add_sales_tax_to_total_cost = total_cost_after_discount+(total_cost_after_discount*sales_tax)/100;
            float total_bill_amount = add_sales_tax_to_total_cost;
            cout << "total cost of rooms are: " <<total_cost_after_discount;
            cout << "total billing amount is: " << total_bill_amount;
        }
    }
}