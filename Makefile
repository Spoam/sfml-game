include vars.make


all $(EXECNAME):$(OBJS)
	$(CXX) $(OBJS) -o $(EXECNAME) $(SFML)

$(OBJS):$(SOURCEFILES)
	$(CXX) -c $(SOURCEFILES)

clean:
	-rm *.o *.gch $(EXECNAME)

run:$(EXECNAME)
	./$(EXECNAME)

valgrind-run:clean $(EXECNAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(EXECNAME)
