#!/bin/bash

for i in $(cat ./questao_6/entradas_2.txt)
do
    echo $i | ./questao_6/Q6 2>> ./questao_6/saidas.txt
done