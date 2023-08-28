#include <Python.h>
#include <object.h>
#include <listobject.h>
#include <bytesobject.h>

/**
 * print_python_bytes - Script prints bytes information
 *
 * @p:this is the Python Object
 * Return: function has no return
 */

void print_python_bytes(PyObject *p)
{
	long int size;
	int j;
	char *trying_str = NULL;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	PyBytes_AsStringAndSize(p, &trying_str, &size);

	printf("  size: %li\n", size);
	printf("  trying string: %s\n", trying_str);
	if (size < 11)
		printf("  first %li bytes:", size + 1);
	else
		printf("  first 11 bytes:");
	for (j = 0; j <= size && j < 11; j++)
		printf(" %02hhx", trying_str[j]);
	printf("\n");
}

/**
 * print_python_list - this script prints list information
 *
 * @p:this is the  Python Object
 * Return: the script has no return
 */

void print_python_list(PyObject *p)
{
	long int size = PyList_Size(p);
	int j;
	PyListObject *list = (PyListObject *)p;
	const char *type;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", list->allocated);
	for (j = 0; j < size; j++)
	{
		type = (list->ob_item[i])->ob_type->tp_name;
		printf("Element %i: %s\n", j, type);
		if (!strcmp(type, "bytes"))
			print_python_bytes(list->ob_item[j]);
	}
}
