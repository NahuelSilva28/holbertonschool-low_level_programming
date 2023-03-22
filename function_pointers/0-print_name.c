/**
 * print_name - calls a function to print a name
 * @name: string containing the name to be printed
 * @f: pointer to a function that takes a string argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
