#
#  To sa opcje dla kompilacji
#
CPPFLAGS = -c -g -Iinc -Wall -pedantic

benchmark.out: obj/main.o obj/irunnable.o obj/imeasure.o obj/measure.o obj/ilist.o obj/list.o obj/istack.o obj/stack.o obj/iqueue.o obj/queue.o
	g++ -Wall -pedantic -o benchmark.out obj/main.o obj/irunnable.o obj/ilist.o obj/list.o obj/istack.o obj/stack.o obj/iqueue.o obj/queue.o obj/imeasure.o obj/measure.o

obj/main.o: src/main.cpp inc/irunnable.hh inc/imeasure.hh inc/measure.hh inc/ilist.hh inc/list.hh inc/istack.hh inc/stack.hh inc/iqueue.hh inc/queue.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/irunnable.o: src/irunnable.cpp inc/irunnable.hh
	g++ ${CPPFLAGS} -o obj/irunnable.o src/irunnable.cpp

obj/imeasure.o: src/imeasure.cpp inc/imeasure.hh
	g++ ${CPPFLAGS} -o obj/imeasure.o src/imeasure.cpp

obj/measure.o: src/measure.cpp inc/measure.hh
	g++ ${CPPFLAGS} -o obj/measure.o src/measure.cpp

obj/ilist.o: src/ilist.cpp inc/ilist.hh
	g++ ${CPPFLAGS} -o obj/ilist.o src/ilist.cpp

obj/list.o: src/list.cpp inc/list.hh
	g++ ${CPPFLAGS} -o obj/list.o src/list.cpp

obj/istack.o: src/istack.cpp inc/istack.hh
	g++ ${CPPFLAGS} -o obj/istack.o src/istack.cpp

obj/stack.o: src/stack.cpp inc/stack.hh
	g++ ${CPPFLAGS} -o obj/stack.o src/stack.cpp

obj/iqueue.o: src/iqueue.cpp inc/iqueue.hh
	g++ ${CPPFLAGS} -o obj/iqueue.o src/iqueue.cpp

obj/queue.o: src/queue.cpp inc/queue.hh
	g++ ${CPPFLAGS} -o obj/queue.o src/queue.cpp

clean:
	rm -f obj/*.o benchmark.out
