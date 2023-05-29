///////////////////////////////////////
//Author: Ian Cody
//Create Date 5/27/2023
//Description: simple calculator for a small sample of 2D and 3D shapes
//Name: ShapesCalculator
///////////////////////////////////////

#include <stdio.h>
#include <math.h>

//menus
void menu();
int twoDimensionalMenu(int secondOption); //For 2D Shapes excluding Circle
int threeDimensionalMenu(int thirdOption); //For 3D Shapes
int circleMenu(int secondOption); //For Circle under 2D Shapes
//functions for 2D and 3D shapes
double areaRectangle(double baseRectangle, double heightRectangle);
double areaCircle(double radiusCircle);
double circumferenceCircle(double radiusCircle);
double areaTriangle(double baseTriangle, double heightTriangle);
double areaOval(double majorAxisOval, double minorAxisOval);
double areaNgon(double apothemNgon, double sideLengthNgon, double numberOfSidesNgon);
double areaRhombus(double firstDiagonalRhombus, double secondDiagonalRhombus);
double surfaceAreaCuboid (double lengthCuboid, double widthCuboid, double heightCuboid);
double volumeCuboid (double lengthCuboid, double widthCuboid, double heightCuboid);
double surfaceAreaSphere(double radiusSphere);
double volumeSphere(double radiusSphere);
double surfaceAreaCone(double radiusCone, double heightCone);
double volumeCone(double radiusCone, double heightCone);
double surfaceAreaTorus(double majorAxisTorus, double minorAxisTorus);
double volumeTorus(double majorAxisTorus, double minorAxisTorus);
double surfaceAreaCylinder(double radiusCylinder, double heightCylinder);
double volumeCylinder(double radiusCylinder, double heightCylinder);
double surfaceAreaSquarePyramid(double baseEdgeSquarePyramid, double heightSquarePyramid);
double volumeSquarePyramid(double baseEdgeSquarePyramid, double heightSquarePyramid);

int main()
{

//int choice;
char choice;
int option;
int optionsTwoD;
int optionsThreeD;
double base;
double height;
double width;
double length;
double radius;
double area;
double surfaceArea;
double circumference;
double volume;
double majorAxis;
double minorAxis;
double apothem;
double sideLength;
double numberOfSides;
double perimeter;
double firstDiagonal;
double secondDiagonal;
double baseEdge;
int done = 0;

menu();

while (!done){

scanf("%c", &choice);

switch (choice){

    //Start of 2D Menu

    case 'a': //Rectangle
        
        printf("Rectangle\n");
        option = twoDimensionalMenu(optionsTwoD);

        if (option == 1){ //Area 
            area = areaRectangle(base, height);
            printf("≈ %.7lf units²\n\n", area);

            menu();
            break;
        } else {
            menu();
            break;
        }    
    break;

    case 'b': // Circle

        printf("Circle\n");
        option = circleMenu(optionsTwoD);
    
        if (option == 1){ //Area
            area = areaCircle(radius);
            printf("≈ %.7lf units²\n\n", area);
            menu();
            break;
        } else if (option == 2){ //Circumference
            circumference = circumferenceCircle(radius);
            printf("≈ %.7lf units\n\n", circumference);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'c': // Triangle

        printf("Triangle\n");
        option = twoDimensionalMenu(optionsTwoD);

        if (option == 1){ //Area
            area = areaTriangle(base, height);
            printf("≈ %.7lf units²\n\n", area);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'd': //Oval

        printf("Oval\n");
        option = twoDimensionalMenu(optionsTwoD);

        if (option == 1){ //Area
            area = areaOval(majorAxis, minorAxis);
            printf("≈ %.7lf units²\n\n", area);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'e': // N-gon

        printf("N-gon\n");
        option = twoDimensionalMenu(optionsTwoD);

        if (option == 1){ //Area
            area = areaNgon (apothem, sideLength, numberOfSides);
            printf("≈ %.7lf units²\n\n", area);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'f': //Rhombus

        printf("Rhombus\n");
        option = twoDimensionalMenu(optionsTwoD);

        if (option == 1){ //Area 
            area = areaRhombus (firstDiagonal, secondDiagonal);
            printf("≈ %.7lf units²\n\n", area);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;
    //Start of 3D Menu

    case 'g': // Cuboid

        printf("Cuboid\n");
        option = threeDimensionalMenu(optionsTwoD);

        if (option == 1){ //Surface Area
            surfaceArea = surfaceAreaCuboid (length, width, height);
            printf("≈ %.7lf units²\n\n", surfaceArea);
            menu();
            break;
        } else if (option == 2){//Volume
            volume = volumeCuboid (length, width, height);
            printf("≈ %.7lf units³\n\n", volume);
            menu();
            break;
        } else {
            break;
        }
    break;

    case 'h': // Sphere

        printf("Sphere\n");
        option = threeDimensionalMenu(optionsThreeD);

        if (option == 1){ //Surface Area
            surfaceArea = surfaceAreaSphere(radius);
            printf("≈ %.7lf units²\n\n", surfaceArea);
            menu();
            break;
        } else if (option == 2){//Volume
            volume = volumeSphere(radius);
            printf("≈ %.7lf units³\n\n", volume);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'i': // Cone

        printf("Cone\n");
        option = threeDimensionalMenu(optionsThreeD);

        if (option == 1){ //Surface Area
            surfaceArea = surfaceAreaCone(radius, height);
            printf("≈ %.7lf units²\n\n", surfaceArea);
            menu();
            break;
        } else if (option == 2){//Volume
            volume = volumeCone(radius, height);
            printf("≈ %.7lf units³\n\n", volume);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'j': // Torus

        printf("Torus\n");
        option = threeDimensionalMenu(optionsThreeD);

        if (option == 1){ //Surface Area
            surfaceArea = surfaceAreaTorus(majorAxis, minorAxis);
            printf("≈ %.7lf units²\n\n", surfaceArea);
            menu();
            break;
        } else if (option == 2){//Volume
            volume = volumeTorus(majorAxis, minorAxis);
            printf("≈ %.7lf units³\n\n", volume);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'k': // Cylinder

        printf("Cylinder\n");
        option = threeDimensionalMenu(optionsThreeD);

        if (option == 1){ //Surface Area
            surfaceArea = surfaceAreaCylinder(radius, height);
            printf("≈ %.7lf units²\n\n", surfaceArea);
            menu();
            break;
        } else if (option == 2){//Volume
            volume = volumeCylinder(radius, height);
            printf("≈ %.7lf units³\n\n", volume);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'l': // Square Pyramid

        printf("Square Pyramid\n");
        option = threeDimensionalMenu(optionsThreeD);

        if (option == 1){ //Surface Area
            surfaceArea = surfaceAreaSquarePyramid(baseEdge, height);
            printf("≈ %.7lf units²\n\n", surfaceArea);
            menu();
            break;
        } else if (option == 2){//Volume
            volume = volumeSquarePyramid(baseEdge, height);
            printf("≈ %.7lf units³\n\n", volume);
            menu();
            break;
        } else {
            menu();
            break;
        }
    break;

    case 'm': // Exit
        printf("Goodbye!\n");
        done = 1;
    break;

}

}
return 0;
}

void menu(){
    printf("Common Shapes Calculator\n");
    printf("[Common 2D Shapes (Area)]\n");
    printf("(a) Rectangle\n");
    printf("(b) Circle (Circumference OR Area)\n");
    printf("(c) Triangle\n");
    printf("(d) Oval\n");
    printf("(e) N-gon\n");
    printf("(f) Rhombus\n");
    printf("[Common 3D Shapes (Surface Area OR Volume)]\n");
    printf("(g) Cuboid\n");
    printf("(h) Sphere\n");
    printf("(i) Cone\n");
    printf("(j) Torus\n");
    printf("(k) Cylinder\n");
    printf("(l) Square Pyramid\n");
    printf("(m) End Program\n\n");

    printf("Enter a Letter a - l to pick a shape, or m to End Program\n");
}

int twoDimensionalMenu(int secondOption){
        int enter;
        printf("Pick an Option:\n");
        printf("(1) Calculate the Area\n");
        printf("(Any Other Input) Exit\n");
        printf("Enter option: ");
        scanf("%i", &enter);

        return(enter);

}

int circleMenu (int secondOption){
    int enter;
    printf("Pick an Option:\n");
    printf("(1) Calculate the Area\n");
    printf("(2) Calculatethe Circumference\n");
    printf("Enter option: ");
    scanf("%i", &enter);

    return(enter);
}

double areaRectangle (double baseRectangle, double heightRectangle){
    double base;
    double height;

    printf("Area of Rectangle Formula: Area = base * height\n");
    printf("A = bh\n");
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter height: ");
    scanf("%lf", &height);

    return(base * height);
}

double areaCircle (double radiusCircle){
    double radius;

    printf("Area of Circle Formula: Area = 𝝿 * radius * radius\n");
    printf("A = 𝝿r²\n");
    printf("Enter radius: ");
    scanf("%lf", &radius);

    return(3.1415927 * radius * radius);
}

double circumferenceCircle (double radiusCircle){
    double radius;

    printf("Circumference of Circle Formula: Circumference = 2 * 𝝿 * radius\n");
    printf("C = 2𝝿r\n");
    printf("Enter radius: ");
    scanf("%lf", &radius);

    return(2 * 3.1415927 * radius);
}

double areaTriangle (double baseTriangle, double heightTriangle){
    double base;
    double height;

    printf("Area of Trianle Formula: Area = 0.5 * base * height\n");
    printf("A = 0.5 * bh\n");
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter height: ");
    scanf("%lf", &height);

    return(0.5 * base * height);
}

double areaOval (double majorAxisOval, double minorAxisOval){
    double majorAxis;
    double minorAxis;

    printf("Area of Oval Formula: Area = 𝝿 * Major Axis * Minor Axis\n");
    printf("A = 𝝿ab\n");
    printf("Enter Major Axis: ");
    scanf("%lf", &majorAxis);
    printf("Enter Minor Axis: ");
    scanf("%lf",&minorAxis);

    return(3.1415927 * majorAxis * minorAxis);
}

double areaNgon (double apothemNgon, double sideNgon, double numberofSidesNgon){
    double apothem;
    double sideLength;
    double numberOfSides;
    double perimeter;

    printf("Area of N-gon Formula: Area = 0.5 * apothem * perimeter\n");
    printf("A = 0.5ap\n");
    printf("Enter apothem: ");
    scanf("%lf", &apothem);
    printf("Enter side length: ");
    scanf("%lf", &sideLength);
    printf("Enter number of sides: ");
    scanf("%lf", &numberOfSides);

    perimeter = sideLength * numberOfSides;

    return(0.5 * apothem * perimeter);
}

double areaRhombus (double firstDiagonalRhombus, double secondDiagonalRhombus){
    double firstDiagonal;
    double secondDiagonal;

    printf("Area of Rhombus Formula: Area = 0.5 * Diagonal * Diagonal\n");
    printf("A = 0.5pq\n");
    printf("Enter first diagonal: ");
    scanf("%lf", &firstDiagonal);
    printf("Enter second diagonal: ");
    scanf("%lf", &secondDiagonal);

    return(0.5 * firstDiagonal * secondDiagonal);
}

int threeDimensionalMenu(int thirdOption){
    int enter;
    printf("Pick an Option:\n");
    printf("(1) Calculate the Surface Area\n");
    printf("(2) Calculate the Volume\n");
    printf("Enter option: ");
    scanf("%i", &enter);

    return(enter);
}

double surfaceAreaCuboid (double lengthCuboid, double widthCuboid, double heightCuboid){
    double length;
    double width;
    double height;

    printf("Surface Area of Cuboid Formula: 2 * length * width + 2 * length * height + 2 * height * width\n");
    printf("SA = 2lw +2lh + 2hw\n");
    printf("Enter length: ");
    scanf("%lf", &length);
    printf("Enter width: ");
    scanf("%lf", &width);
    printf("Enter height: ");
    scanf("%lf", &height);

    return(2 * length * width + 2 * length * height + 2 * height * width);
}

double volumeCuboid (double lengthCuboid, double widthCuboid, double heightCuboid){
    double length;
    double width;
    double height;

    printf("Volume of Cuboid Formula: length * width * height\n");
    printf("V = lwh\n");
    printf("Enter length: ");
    scanf("%lf", &length);
    printf("Enter width: ");
    scanf("%lf", &width);
    printf("Enter height: ");
    scanf("%lf", &height);

    return(length * width * height);
}

double surfaceAreaSphere(double radiusSphere){
    double radius;

    printf("Surface Area of Sphere Formula: 4 * 𝝿 * radius * radius\n");
    printf("SA = 4𝝿r²\n");
    printf("Enter radius: ");
    scanf("%lf", &radius);

    return(4 * 3.1415927 * radius * radius);
}

double volumeSphere(double radiusSphere){
    double radius;

    printf("Volume of Sphere Formula: 4/3 * 𝝿 * radius * radius * radius\n");
    printf("V = 4/3 * 𝝿r³\n");
    printf("Enter radius: ");
    scanf("%lf", &radius);

    return((4 * 3.1415927 * radius * radius * radius)/3);
}

double surfaceAreaCone(double radiusCone, double heightCone){
    double radius;
    double height;

    printf("Surface Area of Cone Formula: 𝝿 * radius * (radius + sqrt(height * height + radius * radius))\n");
    printf("SA = 𝝿r(r + sqrt(h² + r²))\n");
    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Enter height: ");
    scanf("%lf", &radius);

    return(3.1415927 * radius * (radius + sqrt(height * height + radius * radius)));
}

double volumeCone(double radiusCone, double heightCone){
    double radius;
    double height;

    printf("Volume of Cone Formula: 𝝿 * radius * radius * height / 3\n");
    printf("V = 𝝿r²h/3\n");
    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Enter height: ");
    scanf("%lf", &radius);

    return(3.1415927 * radius * radius * height / 3);
}

double surfaceAreaTorus(double majorAxisTorus, double minorAxisTorus){
    double majorAxis;
    double minorAxis;

    printf("Surface Area of Torus Formula: 4 * 𝝿 * 𝝿 * Major Axis * Minor Axis\n");
    printf("SA = 4𝝿²Rr\n");
    printf("Enter major axis: ");
    scanf("%lf", &majorAxis);
    printf("Enter minor axis: ");
    scanf("%lf", &minorAxis);

    return(4 * 3.1415927 * 3.1415927 * majorAxis * minorAxis);
}

double volumeTorus(double majorAxisTorus, double minorAxisTorus){
    double majorAxis;
    double minorAxis;

    printf("Volume of Torus Formula: (𝝿 * Minor Axis * Minor Axis)(2 * 𝝿 * Major Axis)\n");
    printf("V = (𝝿r²)(2𝝿R)\n");
    printf("Enter major axis: ");
    scanf("%lf", &majorAxis);
    printf("Enter minor axis: ");
    scanf("%lf", &minorAxis);

    return((3.1415927 * minorAxis * minorAxis)*(2 * 3.1415927 * majorAxis));
}

double surfaceAreaCylinder(double radiusCylinder, double heightCylinder){
    double radius;
    double height;

    printf("Surface Area of Cylinder Formula: 2 * 𝝿 * radius * height + 2 * 𝝿 * radius * radius\n");
    printf("SA = 2𝝿rh + 2𝝿r²\n");
    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Enter height: ");
    scanf("%lf", &height);

    return(2 * 3.1415927 * radius * height + 2 * 3.1415927 * radius * radius);
}

double volumeCylinder(double radiusCylinder, double heightCylinder){
    double radius;
    double height;

    printf("Volume of Cylinder Formula: 𝝿 * radius * radius * height\n");
    printf("V = 𝝿r²h\n");
    printf("Enter radius\n");
    scanf("%lf", &radius);
    printf("Enter height: ");
    scanf("%lf", &height);

    return(3.1415927 * radius * radius * height);
}

double surfaceAreaSquarePyramid(double baseEdgeSquarePyramid, double heightSquarePyramid){
    double baseEdge;
    double height;

    printf("Surface area of Square Pyramid: base edge * base edge + 2 * base edge * sqrt(base edge * base edge / 4 + height + height\n)");
    printf("SA = a² + 2a * sqrt(a²/4 + h²)\n");
    printf("Enter base edge: ");
    scanf("%lf", &baseEdge);
    printf("Enter height: ");
    scanf("%lf", &height);

    return(baseEdge * baseEdge + 2 * baseEdge * sqrt(baseEdge * baseEdge / 4 + height * height));
}

double volumeSquarePyramid(double baseEdgeSquarePyramid, double heightSquarePyramid){
    double baseEdge;
    double height;

    printf("Volume of Square Pyramid: base edge * base edge * height / 3\n");
    printf("V = a²h/3\n");
    printf("Enter base edge: ");
    scanf("%lf", &baseEdge);
    printf("Enter height: ");
    scanf("%lf", &height);

    return(baseEdge * baseEdge * height / 3);
}
