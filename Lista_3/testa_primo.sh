#!/bin/bash

for i in $(cat entradas.txt)
do
    echo $i | ./pegar_saidas_Q5_2
done