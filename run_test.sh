#!/bin/bash

IFS=$'\n'

for i in 'cat inputs.txt'; do
	echo "$i" | ./main
done

