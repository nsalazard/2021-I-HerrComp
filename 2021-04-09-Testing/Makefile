test: test.x

CXX=g++-10

%.o : %.cpp
	$(CXX) -g -c $< -o $@

main_factorial.x: main_factorial.o factorial.o
	$(CXX) -g $^ -o $@

test.x: example_catch2-modularized.o factorial.o
	$(CXX) -g $^ -o $@

run_test: test.x
	./test.x

clean:
	rm -f *.x *.o a.out
