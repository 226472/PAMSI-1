#include "list.hh"
#include "stack.hh"
#include "queue.hh"
#include "measure.hh"

int main()
{
	list l1;
	stack s1;
	queue q1;
	measure meter;

	meter.gauge(l1);

	return 0;
}