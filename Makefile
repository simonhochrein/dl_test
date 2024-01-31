main: main.cc test.dylib libengine.dylib
	c++ main.cc -o main -L. -lengine

test.dylib: test.cc libengine.dylib
	c++ -dynamiclib test.cc -o test.dylib -L. -lengine

libengine.dylib: engine.cc
	c++ -dynamiclib engine.cc -o libengine.dylib

run: main
	./main

clean:
	rm main test.dylib libengine.dylib
