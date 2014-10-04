stack_main: stack_main.o stack.o
	gcc -o stack_main stack_main.o stack.o
stack_main.o: stack_main.c stack.h
	gcc -c -g stack_main.c stack.h
stack.o: stack.c stack.h
	gcc -c -g stack.c stack.h

clean:
	rm *.o *.gch stack_main
