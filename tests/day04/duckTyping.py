#!/usr/bin/env python3

import typing 

class Animal:
  def say(self):
    raise NotImplemented
  def eat(food):
    raise NotImplemented

class Dog(Animal):
  def say(self):
    print ("hau")

class Cat(Animal):
  def say(self):
    print ("meow")

pet = Dog()
pet.say() # prints "hau"
another_pet = Cat()
another_pet.say() # prints "meow"

my_pets = [pet, another_pet]
for a_pet in my_pets:
  a_pet.say() # Python doesn't care for type, he just calls if it's there''
