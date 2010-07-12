#!/usr/bin/python

import sys, math, time

def week(start):
	return math.floor((time.time()-start)/(60*60*24*7))

def percent(start, end):
	return round((time.time()-start)/(end-start)*100, 1)

if sys.argv[1] == "-w" or sys.argv[1] == "--week":
	print "Week number is " + str(week(int(sys.argv[2])))
elif sys.argv[1] == "-p" or sys.argv[1] == "--percent":
	print str(percent(int(sys.argv[2]), int(sys.argv[3]))) + "% of the semester is spend"
else:
	print "Sorry, command not found !"
