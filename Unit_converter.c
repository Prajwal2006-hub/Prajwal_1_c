#include <stdio.h>

void lengthConverter() {
  float meters, kilometers;
  int choice;

  printf("\nLength Conversion:\n");
  printf("1. Convert Meters to Kilometers\n");
  printf("2. Convert Kilometers to Meters\n");
  printf("Enter your choice (1 or 2): ");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("Enter length in meters: ");
    scanf("%f", &meters);
    kilometers = meters / 1000;
    printf("%.2f meters = %.2f kilometers\n", meters, kilometers);
  } else if (choice == 2) {
    printf("Enter length in kilometers: ");
    scanf("%f", &kilometers);
    meters = kilometers * 1000;
    printf("%.2f kilometers = %.2f meters\n", kilometers, meters);
  } else {
    printf("Invalid choice. Please try again.\n");
  }
}

void weightConverter() {
  float grams, kilograms;
  int choice;

  printf("\nWeight Conversion:\n");
  printf("1. Convert Grams to Kilograms\n");
  printf("2. Convert Kilograms to Grams\n");
  printf("Enter your choice (1 or 2): ");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    kilograms = grams / 1000;
    printf("%.2f grams = %.2f kilograms\n", grams, kilograms);
  } else if (choice == 2) {
    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);
    grams = kilograms * 1000;
    printf("%.2f kilograms = %.2f grams\n", kilograms, grams);
  } else {
    printf("Invalid choice. Please try again.\n");
  }
}

int main() {
  int option;

  printf("Welcome to the Unit Converter Program!\n");

  do {
    printf("\nMain Menu:\n");
    printf("1. Length Converter (Meters/Kilometers)\n");
    printf("2. Weight Converter (Grams/Kilograms)\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option) {
    case 1:
      lengthConverter();
      break;
    case 2:
      weightConverter();
      break;
    case 3:
      printf("Thank you for using the Unit Converter. Goodbye!\n");
      break;
    default:
      printf("Invalid choice. Please select a valid option.\n");
    }
  } while (option != 3);

  return 0;
}
