#!/bin/sh
A=$(echo $FT_NBR2 | tr 'mrdoc' '01234')
B=$(echo $FT_NBR1 | sed "s/\'/0/g" | sed 's/\\/1/g' | sed "s/\"/2/g" | sed "s/\?/3/g" | sed "s/\!/4/g")
C=$(echo "$A+$B")
echo "obase=13;ibase=5;$C" | bc | tr '0123456789ABC' 'gtaio luSnemf'
