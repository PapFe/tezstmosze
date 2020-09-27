
if test -f out_res.txt then
	rm out_res.txt
fi

for i in units/*.json do
 for j in units/*.json  do
		if [ $i != $j ] then
			main $i $j >> out_res.txt
		fi
 done
done
