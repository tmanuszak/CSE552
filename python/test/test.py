from random import randint
import unittest
from randapprox.randomized.quicksort import quicksort

class QuicksortTestCase(unittest.TestCase):
    """Tests for 'quicksort.py'."""

    def test_no_element_list(self):
        """Does no element list return empty list?"""
        emptylist = quicksort([])
        self.assertEqual(emptylist, [])

unittest.main()

