CC=g++
CFLAG=-Wall	-Werror
LFLAGS=-static
TARGET=	action
OBJECTS=Main.o	SpaceShuttle.o	CrewDragon.o	Dragon.o	InternationalSpaceStation.o	SpaceStation.o	SpaceCraftCommand.o	MoveLeft.o	MoveRight.o	Thrust.o	Dock.o	Button.o	Deceleration.o	VacuumEngine.o	StageCreator.o	RSSCreator.o	RocketStage.o	RocketSecondStage.o	RocketObserver.o	RocketIterator.o	RocketFirstStage.o	RocketFactory.o	Rocket.o	MerlinEngine.o	FalconHeavyFactory.o	FalconHeavy.o	Falcon9.o	EOIterator.o	EngineObserver.o	Engine.o	CollectionOfSatellites.o	F9Core.o	ChangeTrajectory.o	Department.o	Satellite.o	GroundControl.o	MaintenanceDepartment.o	Path.o	RiskAnalysis.o	SatelliteFunctionality.o	SatelliteIterator.o	SignalDepartment.o	ToggleSignal.o	TrajectoryDepartment.o	

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

RocketIterator.o:	RocketIterator.h

Engine.o:	Engine.h

MerlinEngine.o:	MerlinEngine.h	Engine.h

VacuumEngine.o:	VacuumEngine.h	Engine.h

RocketFactory.o:	RocketFactory.h

FalconHeavyFactory.o:	FalconHeavyFactory.h	RocketFactory.h

Falcon9Factory.o:	Falcon9Factory.h	RocketFactory.h

EngineObserver.o:	EngineObserver.h

F9Core.o:	F9Core.h

Falcon9.o:	Falcon9.h

FalconHeavy.o:	FalconHeavy.h

RocketFirstStage.o:	RocketFirstStage.h	F9Core.h	RocketStage.h	RocketIterator.h

EOIterator.o:	EOIterator.h	RocketIterator.h

RocketIterator.o:	RocketIterator.h	EngineObserver.h	RocketObserver.h

RocketObserver.o:	RocketObserver.h

RocketStage.o:	RocketStage.h

StageCreator.o:	StageCreator.h	RocketIterator.h

RSSCreator.o:	RSSCreator.h	StageCreator.h

RocketSecondStage.o:	RocketSecondStage.h	Engine.h	RocketStage.h	RocketIterator.h

CollectionOfSatellites.o:	CollectionOfSatellites.h	Satellite.h

ChangeTrajectory.o:	ChangeTrajectory.h	SatelliteFunctionality.h		

Department.o:	Department.h	Satellite.h

GroundControl.o:	GroundControl.h	Satellite.h

MaintenanceDepartment.o:	MaintenanceDepartment.h	GroundControl.h

Path.o:	Path.h	Satellite.h

RiskAnalysis.o:	Satellite.h	CollectionOfSatellites.h	ToggleSignal.h	ChangeTrajectory.h	

Satellite.o:	Satellite.h	Department.h	GroundControl.h	SatelliteFunctionality.h	Path.h

SatelliteFunctionality.o:	Satellite.h	CollectionOfSatellites.h

SatelliteIterator.o:	Satellite.h	CollectionOfSatellites.h

SignalDepartment.o:	GroundControl.h	CollectionOfSatellites.h	ToggleSignal.h

ToggleSignal.o:	SatelliteFunctionality.h

TrajectoryDepartment.o:	Satellite.h	Path.h	ChangeTrajectory.h	CollectionOfSatellites.h


Main.o:		Dragon.h	CrewDragon.h	SpaceShuttle.h	InternationalSpaceStation.h	SpaceStation.h	SpaceCraftCommand.h	MoveLeft.h	MoveRight.h	Thrust.h	Dock.h	Button.h	Deceleration.h	VacuumEngine.h	StageCreator.h	RSSCreator.h	RocketStage.h	RocketSecondStage.h	RocketObserver.h	RocketIterator.h	RocketFirstStage.h	RocketFactory.h	Rocket.h	MerlinEngine.h	FalconHeavyFactory.h	FalconHeavy.h	Falcon9.h	EOIterator.h	EngineObserver.h	Engine.h	CollectionOfSatellites.h	F9Core.h	ChangeTrajectory.h	CollectionOfSatellites.h	Department.h	Satellite.h	GroundControl.h	MaintenanceDepartment.h	Path.h	RiskAnalysis.h	SatelliteFunctionality.h	SatelliteIterator.h	SignalDepartment.h	ToggleSignal.h	TrajectoryDepartment.h

%.o:	%.cpp
	$(CC)	$<	$(CFLAGS)	-c	-g	-o	$@

clean:
	rm	-f	$(TARGET)	$(OBJS)	*~

run:
	./$(TARGET)

