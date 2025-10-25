#!/usr/bin/env bash

total=0
for f in $(find .. -type f -name "*.cpp"); do
lines=$(wc -l < "$f")
echo "$lines строк в $f" 
total=$((total+lines))
done
echo "Всего строк: $total"

