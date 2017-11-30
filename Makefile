main.exe: $(patsubst %.cpp, %.o, $(wildcard *.cpp))
	g++ -o $@ $^

%.o: %.cpp *.h
	g++ -c $<
