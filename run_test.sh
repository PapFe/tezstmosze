

if test -f out_res.txt
then
	rm out_res.txt
fi

for i in inputs.txt; 
do
 
 echo "$i" | main >> out_res.txt
 	
done
