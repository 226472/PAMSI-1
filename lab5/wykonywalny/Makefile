#
#  To sa opcje dla kompilacji
#
CPPFLAGS = -c -g -Iinc -Wall -pedantic

benchmark.out: main.o irunnable.o imeasure.o measure.o itable.o table.o
	g++ -Wall -pedantic -o benchmark.out main.o irunnable.o imeasure.o measure.o itable.o table.o

main.o: main.cpp irunnable.hh imeasure.hh measure.hh itable.hh table.hh
	g++ ${CPPFLAGS} -o main.o main.cpp

irunnable.o: irunnable.cpp irunnable.hh
	g++ ${CPPFLAGS} -o irunnable.o irunnable.cpp

imeasure.o: imeasure.cpp imeasure.hh
	g++ ${CPPFLAGS} -o imeasure.o imeasure.cpp

measure.o: measure.cpp measure.hh
	g++ ${CPPFLAGS} -o measure.o measure.cpp

itable.o: itable.cpp itable.hh
	g++ ${CPPFLAGS} -o itable.o itable.cpp

table.o: table.cpp table.hh
	g++ ${CPPFLAGS} -o table.o table.cpp

clean:
	rm -f *.o benchmark.out
