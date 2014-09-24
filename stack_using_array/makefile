stack_array_main: stack_array_main.o stack_array.o
	gcc -o stack_array_main stack_array_main.o stack_array.o
stack_array_main.o: stack_array_main.c stack_array.h
	gcc -c -g stack_array_main.c stack_array.h
stack_array.o: stack_array.c stack_array.h
	gcc -c -g stack_array.c stack_array.h

clean:
	rm *.o *.gch stack_array_main
