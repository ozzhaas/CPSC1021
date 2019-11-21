make 1DVector:
	g++ pixel.cpp functions.cpp vec1DDriver.cpp header.cpp -std=c++11 -Wall -o vec1DDriver
make 2DVector:
	g++ pixel.cpp functions.cpp vec2DDriver.cpp header.cpp -std=c++11 -Wall -o vec2DDriver
make 1DArray:
	g++ pixel.cpp functions.cpp array1DDriver.cpp header.cpp -std=c++11 -Wall -o array1DDriver
make 2DArray:
	g++ pixel.cpp functions.cpp array2DDriver.cpp header.cpp -std=c++11 -Wall -o array2DDriver

1DVector run:
	./vec1DDriver pooh.ppm vec1DOut
2DVector run:
	/vec2DDriver pooh.ppm vec2DOut
1DArray run:
	./array1DDriver pooh.ppm array1DOut
2DArray run:
	./array2DDriver pooh.ppm array2DOut

1DVector clean:
	rm ./vec1DDriver
2DVector clean:
	rm ./vec2DDriver
1DArray clean:
	rm ./array1DDriver
2DArray clean:
	rm ./array2DDriver
