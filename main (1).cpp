#include <iostream>
using namespace std;

double calculateBMI(double weight_kg, double height_cm) {
    if (height_cm <= 0) return 0.0;  // Prevent division by zero or negative height
    
    double height_m = height_cm / 100.0;  // Convert cm to meters
    double bmi = weight_kg / (height_m * height_m);  // Calculate BMI
    return bmi;
}

int main() {
    double weight1, weight2, height1, height2;
    
    weight1 = 80;   // Weight in kg for person 1
    weight2 = 70;   // Weight in kg for person 2
    height1 = 168;  // Height in cm for person 1
    height2 = 188;  // Height in cm for person 2
    
    cout << "Your BMI is " << calculateBMI(weight1, height1) << endl;
    cout << "Another BMI is " << calculateBMI(weight2, height2) << endl;

    return 0;
}
