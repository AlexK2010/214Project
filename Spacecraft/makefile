CC=g++
CFLAG=-Wall	-Werror
LFLAGS=-static
TARGET=	action
OBJECTS=Main.o	Rocket.o	SpaceShuttle.o	CrewDragon.o	Dragon.o	

all:	$(OBJECTS)
	$(CC)	$(CFLAGS)	$(OBJECTS)	-o	$(TARGET)

Rocket.o:	Rocket.h

Dragon.o:	Dragon.h

CrewDragon.o:	CrewDragon.h

SpaceShuttle.o:	SpaceShuttle.h

Main.o:		Dragon.h	CrewDragon.h	SpaceShuttle.h	Rocket.h

%.o:	%.cpp
	$(CC)	$<	$(CFLAGS)	-c	-g	-o	$@

clean:
	rm	-f	$(TARGET)	$(OBJS)	*~

run:
	./$(TARGET)

