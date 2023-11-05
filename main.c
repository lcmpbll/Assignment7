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

#include GetMaxInt
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

int main(void) {
  const int NUM_ELEMENTS = 20;
  int userValues[NUM_ELEMENTS];
  int numberOfInputs, normalizeValue;
  

  scanf("%d", &numberOfInputs);
  for(int i = 0; i < numberOfInputs; i++){
    scanf("%d", &userValues[i]);
  }
  
  normalizeValue = GetMaxInt(userValues, numberOfInputs);

  
  
  
  return 0;
}