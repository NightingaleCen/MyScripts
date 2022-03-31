#!/home/nightingalecen/miniconda3/envs/NightingaleStuff/bin/python
# -*- coding: UTF-8 -*-

#进制转换

import getopt
import sys


def error_exit():
    print("usage: inc [ -boih ] [input number] [ -boih ]")
    sys.exit(2)


def main(argv):
    try:
        opts, args = getopt.getopt(argv, "HOBIb:o:i:h:")
    except getopt.GetoptError:
        error_exit()
    else:
        if len(argv) != 3:
            error_exit()
        else:
            try:
                for o, a in opts:
                    if o == '-b':
                        num = int(a, 2)
                    elif o == '-o':
                        num = int(a, 8)
                    elif o == '-i':
                        num = int(a)
                    elif o == '-o':
                        num = int(a, 16)
                    elif o == '-B':
                        print(bin(num))
                        sys.exit()
                    elif o == '-O':
                        print(oct(num))
                        sys.exit()
                    elif o == '-I':
                        print(num)
                        sys.exit()
                    elif o == '-H':
                        print(hex(num))
                        sys.exit()
            except UnboundLocalError:
                error_exit()


if __name__ == "__main__":
    main(sys.argv[1:])
