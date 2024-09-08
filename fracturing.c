/*************************************************************************
// Fracturing.c
// Author: Isabella Demers
// Date: 09/08/24
// Class: COP 3223, Professor Parra
// Purpose: This program uses fracturing to calculate measurements of a circle.
//
// ****************************************************************************/


#include <stdio.h>
#include <math.h>
#define  PI 3.14159

void printPoints(double x1, double y1, double x2, double y2) {
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
}

double calculateDistance() {
    
    double x1 = 3.0, y1 = 4.0;
    double x2 = 4.0, y2 = 5.0;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printPoints(x1, y1, x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    return distance; 
}

double calculatePerimeter(){
    double distance = calculateDistance();
    double perimeter = 2 * distance; 

    printPoints(3.0, 4.0, 4.0, 5.0);
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 1.0; 
}

double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow(distance, 2);

    printPoints(3.0, 4.0, 4.0, 5.0);
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 1.0; 
}

double calculateWidth() {
    double x1 = 3.0, y1 = 4.0;
    double x2 = 4.0, y2 = 5.0;
    double width = fabs(x2 - x1); 

    printPoints(x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 1.0; 
}

double calculateHeight() {
    double x1 = 3.0, y1 = 4.0;
    double x2 = 4.0, y2 = 5.0;
    double height = fabs(y2 - y1);

    printPoints(x1, y1, x2, y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 1.0; 
}

int main(int argc, char**argv) {
    //no output required 
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 1;
}