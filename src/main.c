// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials

#include "common.h"
#include "monitor.h"

int main(struct multiboot *mboot_ptr)
{
	// All our initialization calls will go here.
	
	// Initialize the screen (by clearning it)
	monitor_clear();
	// Write out a sample string.
	monitor_write("Hello, world!");
	

	return 0;
}
