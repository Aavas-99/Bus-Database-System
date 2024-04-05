bus_info: functions.o main.o
	gcc main.o functions.o -o bus_info
	
functions.o: functions.c
	gcc -c functions.c
	
main.o: main.c
	gcc -c main.c

