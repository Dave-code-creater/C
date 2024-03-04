import unittest
import Cython
import sys, subprocess



class TestGreeting(unittest.TestCase):
    def IsExist(self):
        self.assertTrue(greet("Hello, World!"))