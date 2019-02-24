//
//  main.c
//  CUtilities
//
//  Created by Доктор Кларик on 24.02.19.
//  Copyright © 2019 Доктор Кларик. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

#include "inputs.h"

void testInputs() {
  enter(int, iInt, "Your int : ", 0, 10);
  enter(float, iFloat, "Your float : ", -10, 5);
  enter(double, iDouble, "Your double : ", 0);
  enter(char, iChar, "Your char : ");
  
  char *iString = enterString("Your string: ", '#');
  
  
  printf("int = %d, float = %f, double = %lf, char = %c\nstring: '%s'\n", iInt, iFloat, iDouble, iChar, iString);
}

// Tests
int main(int argc, const char * argv[]) {
  testInputs();
  return 0;
}
