#!/bin/bash

IFS=$'\n'
if test -f out_res.txt; then
    rm out_res.txt
fi
for i in 'cat inputs.txt'; do
	echo "$i" | ./a.out >> out_res.txt
done
