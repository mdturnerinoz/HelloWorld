CC      := gcc
CPP     := g++
LDFLAGS := -lm
all   : hello hello2 run
hello : hello.o hellolib.o
	$(CC) hello.o hellolib.o -o hello
hello2 : hello2.o
	$(CPP) hello2.o -o hello2 $(LDFLAGS)
hello.o : hello.c
	$(CC) -c -g $<
hello2.o : hello2.cpp
	$(CPP) -c -g $<
hellolib.o : hellolib.c
	$(CC) -c -g $<
html : 
	firefox *.html
run : 
	(hello ; hello2)
clean :
	rm -f *.o hello hello2 .*.swp *~ 
