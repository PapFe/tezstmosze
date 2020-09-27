
IFS=$'\n'


rm out_res.txt


for i in inputs.txt; 
do
 
 echo "$i" | main >> out_res.txt
 	
done
