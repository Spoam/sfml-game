include vars.make

all:$(OBJS)
	g++ $(OBJS) -o $(EXECNAME) $(SFML)

$(OBJS):$(SOURCEFILES)
	g++ -c $(SOURCEFILES) $(HEADERS)


clean:
	-rm *.o *.gch $(EXECNAME)

run:$(EXECNAME)
	./$(EXECNAME)
