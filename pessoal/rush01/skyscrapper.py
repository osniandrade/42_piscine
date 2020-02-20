#!/usr/bin/python3.6
import itertools
from operator import mul
from functools import reduce
import sys
from time import time
from math import floor

def satisfies_rgt(dimension, row, rgtview):
	return satisfies_lft(dimension, list(reversed(row)), rgtview)

def satisfies_lft(dimension, row, lftview):
	if len(set(row)) < dimension:
		return False
	if lftview == 0:
		return True
	seen = 0
	curr_max = 0
	for entry in row:
		if entry > curr_max:
			curr_max = entry
			seen += 1
			if entry == dimension or seen > lftview:
				break
	return lftview == seen

def possible_rows(dimension, lftview, rgtview):
	p = []
	for row in itertools.permutations(range(1, dimension + 1)):
		if satisfies_lft(dimension, row, lftview) and satisfies_rgt(dimension, row, rgtview):
			p.append(list(row))
	return p

def is_valid_solution(dimension, solution, topview, btmview):
	count = 0
	for i in range(dimension):
		c = [row[i] for row in solution]
		if not (satisfies_lft(dimension, c, topview[i]) and satisfies_rgt(dimension, c, btmview[i])):
			break
		count += 1
	return count == dimension

def solve(dimension, lftview, rgtview, topview, btmview, verbose):
	rows = [possible_rows(dimension, lftview[i], rgtview[i]) for i in range(dimension)]
	sol_count = 0
	total = reduce(mul, [len(row) for row in rows], 1)

	if verbose > 0:
		print(f'{total} possible solutions')
	for solution in itertools.product(*rows):
		sol_count += 1
		if is_valid_solution(dimension, solution, topview, btmview):
			return solution
	return ["no solution found"]

def main(argv):
	dimension = 0
	lftview = rgtview = topview = btmview = []
	verbose = 0
	for arg in argv[1:]:
		if arg[0:2] == '-s':
			dimension = int(arg[2:])
			if dimension > 9:
				print('size should be 9 or smaller')
				exit()
		if arg[0:2] == '-c':
			temp = [int(i) for i in arg[2:]]
			topview = temp[0:dimension]
			rgtview = temp[dimension:2*dimension]
			btmview = list(reversed(temp[2*dimension:3*dimension]))
			lftview = list(reversed(temp[3*dimension:]))
		if arg[0:2] == '-l':
			lftview = [int(i) for i in arg[2:]]
		if arg[0:2] == '-r':
			rgtview = [int(i) for i in arg[2:]]
		if arg[0:2] == '-t':
			topview = [int(i) for i in arg[2:]]
		if arg[0:2] == '-b':
			btmview = [int(i) for i in arg[2:]]
		if arg[0:2] == '-v':
			verbose = 1
			if len(arg) > 2:
				verbose = float(arg[2:])
	if verbose > 0:
		print(dimension, lftview, rgtview, topview, btmview, verbose)
	for row in solve(dimension, lftview, rgtview, topview, btmview, verbose):
		print(row)


if __name__ == '__main__':
	main(sys.argv)