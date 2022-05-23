#include <iostream>
#include <string>

using namespace std;

int main(){
    // the variables
    float pancakeProduce;
    float length;
    float width;
    float height;
    
    // The cin to enter the values
    cout << "Please enter the amount" << endl;
    cin >> pancakeProduce;
    cout << "Please enter the length" << endl;
    cin >> length;
    cout << "Please enter the width" << endl;
    cin >> width;
    cout << "Please enter the height" << endl;
    cin >> height;

    // the mathemathical calculations for calculating the diameter, thickness and the average
    float volume = length * width * height;
    float pancakethickness = volume/(length * width);
    float pancakediameter = 2 * (length/2);
    float averageForthickness = (pancakethickness * pancakeProduce)/pancakeProduce;
    float averageFordiameter = (pancakediameter * pancakeProduce)/pancakeProduce;

    // this do loop will run the code inside it once if the while loops condition is false
    do{
        // if the condition is meet run the code inside the if statement
        if ((pancakethickness > 0 and pancakediameter <= 10) and (pancakediameter > 0 and pancakediameter <=20)){
            cout << "Pancakes produce " << pancakeProduce << endl;
            cout << "The thickness " << pancakethickness << "mm" << endl;
            cout << "The diameter " << pancakediameter << "cm" << endl;
            cout << "The average Thickness of the pancake " << averageForthickness << "mm" << endl;
            cout << "The average diameter of the pancake " << averageFordiameter << "cm" << endl;
            break;
        }
        // if the while loop's condition is meet run the code below
        cout << "It has exceed the limit";
        break;
    }while(pancakethickness > 10 and pancakediameter > 20);
}