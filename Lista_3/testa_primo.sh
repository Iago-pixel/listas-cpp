#!/bin/bash

for i in $(cat entradas.txt)
do
    echo $i | ./criar_grafico_Q4
done