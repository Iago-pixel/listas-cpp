#!/bin/bash

for i in $(cat entradas.txt)
do
    echo $i | ./Q5 2>> saidas.txt
done