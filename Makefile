temp:temp.o
	gcc -o temp temp.o
temp.o:temp.c
	gcc -c temp.c
