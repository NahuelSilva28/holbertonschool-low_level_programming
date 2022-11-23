#include "main.h"
/**
*/
void _error(int e, char *filename)
{
if (e == 98)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
if (e == 99)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}
/**
