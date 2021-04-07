#!/bin/sh

find . -type f -name "*.sh" -exec basename {} .sh \;

#find . -type f -name "*.sh" |  sed 's/.sh$//g' | sed 's/*//g'
