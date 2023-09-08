#!/bin/bash 


for i do
    sum=$(expr $sum + $i)
    count=$(( $count + 1 ))
done
echo $count
res=$(expr $sum / $count)
echo $res