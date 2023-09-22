#!/bin/bash
i=1
while [ $i -le 150 ]; do
    random=$(od -A n -t d -N 1 /dev/urandom)
    echo -e $random >> numbers.txt

    i=$((i + 1))
done
echo $i