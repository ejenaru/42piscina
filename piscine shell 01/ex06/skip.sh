#!/bin/sh

#ls -l | sed -n "n;p"
ls -l | awk 'NR % 2 == 1' 
