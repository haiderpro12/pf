#include <iostream>
using namespace std;
int main()
{
    // gender
    string gender;
    // Female variables
    int body_weight_, wrist_measurement_at_fullest_point, waist_measurement_at_navel, hip_measurement_at_fullest_point,
        forearm_measurement_at_fullest_point;
    // Male variable
    int body_weight, wrist_measurement;

    cout << "Enter your gender: ";
    cin >> gender;
    if (gender == "male")
    {
        cout << "Enter body weight: ";
        cin >> body_weight;

        cout << "Enter wrist measurement: ";
        cin >> wrist_measurement;

        float A1 = (body_weight * 1.082) + 94.42;
        float A2 = wrist_measurement * 4.15;
        float B = A1 - A2;
        float body_fat = body_weight - B;

        cout << "your body fat is: " << body_fat;
    }
    if (gender == "female")
    {
        cout << "Enter body weight: ";
        cin >> body_weight_;

        cout << "Enter wrist measurement: ";
        cin >> wrist_measurement_at_fullest_point;

        cout << "enter waist measurement: ";
        cin >> waist_measurement_at_navel;

        cout << "enter hip measurement: ";
        cin >> hip_measurement_at_fullest_point;

        cout << "enter forearm measurement: ";
        cin >> forearm_measurement_at_fullest_point;

        float A1 = (body_weight_ * 0.732) + 8.987;
        float A2 = wrist_measurement_at_fullest_point / 3.140;
        float A3 = waist_measurement_at_navel * 0.157;
        float A4 = hip_measurement_at_fullest_point * 0.249;
        float A5 = forearm_measurement_at_fullest_point * 0.434;
        float B = A1 + A2 - A3 - A4 + A5;
        float Body_fat = body_weight_ - B;

        cout << "Your body fat is: " << Body_fat;
    }
}

