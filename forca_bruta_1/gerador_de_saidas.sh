#!/bin/bash

ARQUIVO="entradas.txt"

while IFS= read -r linha; do
    echo "$linha" | ./Q3 2>> ./saidas.txt
done < "$ARQUIVO"