while read LINE;
do
	if [[ $LINE =~ ^[0-9]{3}-[0-9]{3}-[0-9]{4}$ ]]; then
		echo $LINE
	elif [[ $LINE =~ ^\([0-9]{3}\)\ [0-9]{3}-[0-9]{4}$ ]]; then
		echo $LINE
	fi
done < file.txt