HEAD = ./include
SRC = ./src
TAR = test
ALLHEAD := $(wildcard *.h $(HEAD)/*.h)
ALLSRC := $(wildcard *.cpp $(SRC)/*.cpp)
ALLOBJ := $(patsubst $(SRC)/%.cpp, %.o, $(ALLSRC))

$(TAR) : $(ALLOBJ)
	g++ $(ALLOBJ) -o $(TAR)
	rm $(ALLOBJ)

main.o : $(SRC)/main.cpp $(HEAD)/worker.h
	g++ -c $(SRC)/main.cpp -o main.o -I $(HEAD)

worker.o : $(HEAD)/worker.h $(SRC)/worker.cpp
	g++ -c $(SRC)/worker.cpp -o worker.o -I $(HEAD)

task.o : $(HEAD)/task.h $(SRC)/task.cpp
	g++ -c $(SRC)/task.cpp -o task.o -I $(HEAD)
	