#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic

benchmark.out: obj/main.o obj/tablica.o obj/interfejs.o obj/stoper.o
	g++ -Wall -pedantic -o benchmark.out obj/main.o  obj/stoper.o obj/interfejs.o obj/tablica.o

obj/main.o: src/main.cpp inc/tablica.hh inc/interfejs.hh inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh
	g++ ${CPPFLAGS} -o obj/tablica.o src/tablica.cpp

obj/interfejs.o: src/interfejs.cpp inc/interfejs.hh 
	g++ ${CPPFLAGS} -o obj/interfejs.o src/interfejs.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f obj/*.o benchmark.out
