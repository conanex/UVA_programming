N=0
QUESTION=UVA$(N)
CC=g++
CFLAGS= -g  -Werror -ansi -Wall
EXEFOLDER=Execute

all: $(QUESTION).o
	$(CC) -o $(EXEFOLDER)/$(QUESTION).out $(EXEFOLDER)/$(QUESTION).o
$(QUESTION).o: $(QUESTION).cpp
	$(CC) $(CFLAGS) -c $(QUESTION).cpp -o $(EXEFOLDER)/$(QUESTION).o
clean:
	rm -f $(EXEFOLDER)/*.out $(EXEFOLDER)/*.o
