#!/usr/bin/python3

import sys

def safe_print_integer_err(value):
    """This function prints an integer with "{:d}".format().

    When a ValueError message is caught, a corresponding
    message is printed to standard error.

    Args:
        value (int): This is the integer to print.

    Returns:
        Returns False if a TypeError or ValueError occurs.
        returns True on successful run.
    """
    try:
        print("{:d}".format(value))
        return (True)
    except (TypeError, ValueError):
        print("Exception: {}".format(sys.exc_info()[1]), file=sys.stderr)
        return (False)
