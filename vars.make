SOURCEFILES=$(wildcard *.cpp)
EXECNAME=app
OBJS=$(patsubst %.cpp,%.o,$(SOURCEFILES))
SFML=-lsfml-graphics -lsfml-window -lsfml-system
