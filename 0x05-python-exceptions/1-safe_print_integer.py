#!/usr/bin/python3

def safe_print_integer(value):
    """This function prints an integer with "{:d}".format().

    Args:
        value (int): This is the integer to print.

    Returns:
        Returns false if a TypeError or ValueError occurs
        Will return true on success.
    """
    try:
        print("{:d}".format(value))
        return (True)
    except (TypeError, ValueError):
        return (False)
