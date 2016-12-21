#include <Python.h>

int fibo(int n)
{
    if (n < 2)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}

static PyObject* fib(PyObject* self, PyObject* args)
{
    int n;

    if (!PyArg_ParseTuple(args, "i", &n))
        return NULL;

    return Py_BuildValue("i", fibo(n));
}

static PyMethodDef fibarray[] = {
    {"fib", fib, METH_VARARGS, "Calculate the Fibonacci number"},
    {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC
initcfibo(void)
{
    Py_InitModule3("cfibo", fibarray, "Calculate the nth Fibonacci number");
}
