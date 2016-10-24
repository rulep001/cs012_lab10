#Character makefile

#Variables
COMPILE = g++
FLAGS = -W -Wall -Werror -g
OBJS = Character.o Elf.o Warrior.o Wizard.o

#Targets

all: main.cpp $(OBJS)
	$(COMPILE) $(FLAGS) -o a.out main.cpp $(OBJS)

Elf.o: Elf.cpp Elf.h Character.h
	$(COMPILE) $(FLAGS) -c Elf.cpp

Warrior.o: Warrior.cpp Warrior.h Character.h
	$(COMPILE) $(FLAGS) -c Warrior.cpp

Wizard.o: Wizard.cpp Wizard.h Character.h
	$(COMPILE) $(FLAGS) -c Wizard.cpp

clean:
	rm -rf *~ *.o a.out