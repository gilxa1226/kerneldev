// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials

#include "common.h"
#include "monitor.h"
#include "descriptor_tables.h"

int main(struct multiboot *mboot_ptr)
{
	// All our initialization calls will go here.
    init_descriptor_tables();
	
	// Initialize the screen (by clearning it)
	monitor_clear();
	// Write out a sample string.
    monitor_write("Hello, world!\n");

    asm volatile ("int $0x3");
    asm volatile ("int $0x4");
	

	return 0;
}
