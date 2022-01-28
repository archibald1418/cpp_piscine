#!/usr/bin/env python3

class A():
    def __init__(self):
         self._semiprivate = ", world!" 
    # Private convention (+ doesn't get imported from a namespace')

         self.__superprivate = "Hello" 
    # Private + name_mangling

         self.__x = None

    '''
        Name mangling/decorating - disambiguating symbol names by prefixing
        some semantic information to them denoting the context of such symbol.
        Here ''__'' syntax mangles the name with <classname>_ prefix.
        Such morphological models are called mangling schemes
    '''

    @property
    def x(self):
        return self.__x

    @x.setter
    def x(self, value):
        self.__x = value # Also overloaded operator=

    @x.deleter
    def x(self):
        self.__x = None

a = A(); print("Class A instance created")
print(a.x)
a.x = 2; print("a.x set to 2")
print(a.x)
del a.x; print("deleted a.x")
print(a.x)
