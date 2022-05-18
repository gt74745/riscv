#include <verilated.h>
#include <stdio.h>
#include "Vtop.h"

vluint64_t elapsedtime = 0;

double sc_time_stamp() {return elapsedtime;}

int main(int argc, char** argv, char** env) {
	Verilated::commandArgs(argc, argv);
	Verilated::traceEverOn(true);
	Verilated::debug();

	int time = 0;

	Vtop* top = new Vtop;

	top->clk = 0;
	top->reset = 0;

	while (elapsedtime < 4000)
	{
		elapsedtime++;
		time++;

		if (time == 10) {
			top->clk = !top->clk;
			time = 0;
		}

		if (elapsedtime < 100)
			top->reset = 0;
		else
			top->reset = 1;

		top->eval();
	}
	top->final();

	delete top;

	exit(0);
}
