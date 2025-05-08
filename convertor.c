#include<stdio.h>
int main()

{         int choice;
          float value;
          float KilometersToMiles = 0.621;
          float MetersToInches = 39.37;
          float FootToCentimeters = 30.48;
          float KilogramsToPounds = 2.205;
          float BarToAtm = 0.987;
          float InchesToCentimeters = 2.54;
          float FootToInches = 12.00;
          float GallonToLiters = 3.78541;
          while (1)
          {
          printf("1 for Kilometers To Miles\n2 for Meters To Inches\n3 for Foot To Centimeters\n4 for Kilograms To Pounds\n5 for Bar To atm\n6 for Inches To Centimeters\n7 for Foot to Inches\n8 for Gallon to Liters\n9 for Quit\n");
          scanf("%d", &choice);
          switch (choice)
          {
          case 1:
                    printf("Enter the value in Kilometer \n");
                    scanf("%f",&value);
                    printf("This is %f miles \n\n\n",value * KilometersToMiles);
                    break;
          case 2:
                    printf("Enter the value in Meter \n");
                    scanf("%f", &value);
                    
                    printf("This is %f inche \n\n\n",value * MetersToInches);
                    break;
          case 3:   printf("Enter the value in Foot \n");
                    scanf("%f",&value);
                    printf("This is %f centimeters \n\n\n",value * FootToCentimeters);
                    break;
          case 4:   printf("Enter the value in Kilograms \n");
                    scanf("%f",&value);
                    printf("This is %f Pounds \n\n\n",value * KilogramsToPounds);
                    break;
          case 5:   printf("Enter the value in Bar \n");
                    scanf("%f",&value);
                    printf("This is %f atm \n\n\n",value * BarToAtm);
                    break;
          case 6:   printf("Enter the value in Inches \n");
                    scanf("%f",&value);
                    printf("This is %f centimeters \n\n\n",value * InchesToCentimeters);
                    break;
          case 7:   printf("Enter the value in Foot \n");
                    scanf("%f",&value);
                    printf("This is %f inches \n\n\n",value * FootToInches);
                    break;
          case 8:   printf("Enter the value in Gallon \n");
                    scanf("%f",&value);
                    printf("This is %f liters \n\n\n",value * GallonToLiters);
                    break;
          case 9:
                    printf("Quit from the program...\n\n\n");
                    return 0;
          default:
                    printf("Invalid input, Please choice the right option\n\n");
                    break;
          }
          }
          
          return 0;
}
