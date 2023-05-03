#!/bin/bash

# Check if two arguments were passed
if [ $# -ne 2 ]; then
  echo "Error: Please provide two numbers as arguments."
  exit 1
fi

# Get the two arguments
num1=$1
num2=$2

# Calculate the sum
sum=$(expr $num1 \* $num2)

# Output the sum
echo "The sum of $num1 and $num2 is: $sum"

