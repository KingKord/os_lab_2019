#!/bin/bash

numbers=()

while IFS= read -r line; do
  numbers+=("$line")
done < numbers.txt

./average.sh "${numbers[@]}"
