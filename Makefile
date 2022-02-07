#Makefile gcc 9.3.0
objects = main.o chat.o sha1.o

.PHONY: all
all: chat
chat: ${objects}
	gcc -o chat ${objects} -lstdc++

main.o: chat.h
chat.o: chat.h sha1.h
sha1.o: sha1.h

.PHONY: clean
clean:
	-rm -f chat *.o 2>/dev/null
