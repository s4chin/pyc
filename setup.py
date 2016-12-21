from distutils.core import setup, Extension

setup(
        ext_modules = [
            Extension('cfibo', sources = ['cfibo.c']),
            ],
    )
