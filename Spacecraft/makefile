CC=g++
CFLAG=-Wall	-Werror
LFLAGS=-static
TARGET=	action
OBJECTS=Main.o	Rocket.o	SpaceShuttle.o	CrewDragon.o	Dragon.o	InternationalSpaceStation.o	SpaceStation.o	SpaceCraftCommand.o	MoveLeft.o	MoveRight.o	Thrust.o	Dock.o	Button.o	Deceleration.o

all:	$(OBJECTS)
	$(CC)	$(CFLAGS)	$(OBJECTS)	-o	$(TARGET)

Rocket.o:	Rocket.h

Dragon.o:	Dragon.h

CrewDragon.o:	CrewDragon.h

SpaceShuttle.o:	SpaceShuttle.h

InternationalSpaceStation.o:	InternationalSpaceStation.h

SpaceStation.o:	SpaceStation.h

SpaceCraftCommand.o:	SpaceCraftCommand.h

MoveLeft.o:	MoveLeft.h

MoveRight.o:	MoveRight.h

Deceleration.o:	Deceleration.h

Thrust.o:	Thrust.h

Dock.o:	Dock.h

Button.o:	Button.h

Main.o:		Dragon.h	CrewDragon.h	SpaceShuttle.h	Rocket.h	InternationalSpaceStation.h	SpaceStation.h	SpaceCraftCommand.h	MoveLeft.h	MoveRight.h	Thrust.h	Dock.h	Button.h	Deceleration.h	

%.o:	%.cpp
	$(CC)	$<	$(CFLAGS)	-c	-g	-o	$@

clean:
	rm	-f	$(TARGET)	$(OBJS)	*~

run:
	./$(TARGET)

