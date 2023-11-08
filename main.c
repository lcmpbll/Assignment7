#include <stdio.h>
/******************************************************************************
# Author:           Liam Campbell
# Lab:              Assignment 7
# Date:             5 November 2023
# Description:      This program takes data from the user and normalizes it.
# Input:            int []
# Output:           int  []
# Sources:          None
******************************************************************************/
// Declare functions
int GetMaxInt(int listInts[20], int numVals);
int * SubtractFromArray(int listInts[20], int normedValues[20], int numVals, int valueToSub);

int main(void) {
  const int NUM_ELEMENTS = 20;
  int userValues[NUM_ELEMENTS];
  int normalizedValues[NUM_ELEMENTS];
  int numberOfInputs, normalizeValue;

  printf("Welcome to my Normalizing Data Sets Program!\n\n");
  printf("Enter the number of integers followed by the integers: \n");
  // Get total number of inputs and scanf that number.
  scanf("%d", &numberOfInputs);
  if(numberOfInputs < 21){
    for(int i = 0; i < numberOfInputs; i++){
      scanf("%d", &userValues[i]);
    }
  
    printf("\n");
    //Get the maximum value form inputted data set.
    normalizeValue = GetMaxInt(userValues, numberOfInputs);
    //Returns the normalized values to normalizedValues array
    SubtractFromArray(userValues, normalizedValues, numberOfInputs, normalizeValue);
    // Output answer
    printf("The normalized data set is: \n");
    for(int i = 0; i < numberOfInputs; i++){
      printf("%d ", normalizedValues[i]);
    }
  } else {
    printf("Please enter fewer than 20 data points.\n");
  }
  printf("\n\nThank you for using my program!\n");
  return 0;
}

// Define functions
int GetMaxInt(int listInts[20], int numVals) {
  int largestNumber;
  // Set largestNumber to first array value
  largestNumber = listInts[0];

  // Compare largestNumber to each array value
  for(int i = 0; i < numVals; i++){
    if(largestNumber < listInts[i]){
      largestNumber = listInts[i];
    }
  }
  // return largestNumber
  return largestNumber;
}

int * SubtractFromArray(int listInts[20], int normedValues[20], int numVals, int valueToSub) {
  // Subtract valueToSub from each value in list.
  for(int i = 0; i < numVals; i++){
    normedValues[i] = valueToSub - listInts[i];
  }
  // Returns pointer to normedValues array.
  return normedValues;
}