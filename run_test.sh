#!/bin/bash

IFS=$'\n'

rm out_res.txt

for i in 'cat inputs.txt'; do

 echo "$i" | main >> out_res.txt
 
done
