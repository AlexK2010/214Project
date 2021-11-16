CC=g++
CFLAG=-Wall	-Werror
LFLAGS=-static
TARGET=	action
OBJECTS=Main.o	Rocket.o	SpaceShuttle.o	CrewDragon.o	Dragon.o	SpaceCraftCommand.o Button.o Deceleration.o Dock.o MoveLeft.o MoveRight.o Thrust.o 

all:	$(OBJECTS)
	$(CC)	$(CFLAGS)	$(OBJECTS)	-o	$(TARGET)

Rocket.o:	Rocket.h

Dragon.o:	Dragon.h

CrewDragon.o:	CrewDragon.h

SpaceShuttle.o:	SpaceShuttle.h

SpaceCraftCommand.o: SpaceCraftCommand.h

Button.o: Button.h

Deceleration.o: Deceleration.h

Dock.o: Dock.h

MoveLeft.o: MoveLeft.h 

MoveRight.o: MoveRight.h 

Thrust.o: Thrust.h

Main.o:		Dragon.h	CrewDragon.h	SpaceShuttle.h	Rocket.h SpaceCraftCommand.h Button.h Deceleration.h Dock.h MoveLeft.h MoveRight.h Thrust.h

%.o:	%.cpp
	$(CC)	$<	$(CFLAGS)	-c	-g	-o	$@

clean:
	rm	-f	$(TARGET)	$(OBJS)	*~

run:
	./$(TARGET)

