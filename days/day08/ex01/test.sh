if [! -f test]; then
	echo "Compile with make test"
	exit;
fi;
for i in {1..5}
do
	./test;
	sleep 3;
done;
