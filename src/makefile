COMPILER = g++
EXECUTABLE = cplusplus.out
OBJECTS = main.o cartesian_product.o vectors.o

############################################################

$(EXECUTABLE): $(OBJECTS)
	$(COMPILER) -o $(EXECUTABLE) $(OBJECTS)

main.o: main.cc cartesian_product.h
	$(COMPILER) -c main.cc

cartesian_product.o: cartesian_product.h cartesian_product.cc vectors.h
	$(COMPILER) -c cartesian_product.cc

vectors.o: vectors.h vectors.cc
	$(COMPILER) -c vectors.cc

############################################################

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)