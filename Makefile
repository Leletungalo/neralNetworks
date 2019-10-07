driver: perceptron.o driver.o
	g++ perceptron.o driver.o -o driver

perceptron.o: perceptron.cpp
	g++ -c perceptron.cpp

driver.o: driver.cpp
	g++ -c driver.cpp

run: 
	./driver

clean:
	rm driver *.o
