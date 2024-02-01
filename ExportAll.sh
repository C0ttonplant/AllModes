#!/bin/bash

mkdir ./notes
mkdir ./notes\ \(arrow\)
mkdir ./notes\ \(bar\)
mkdir ./stage

python3 ./colors.py

for f in ./svg/*.svg
do
    
    exp2x=${f:6}
    exp=${exp2x:0: -7}.png
    echo 
	echo "Exporting SVG file - $exp"
	# always "double quote" $f to avoid problems
	inkscape --export-type=png --export-filename="./$exp2x" --export-area-page "$f"
	inkscape --export-type=png --export-filename="./$exp" --export-area-page --export-dpi=48 "$f"
	
	
done


# $f = ./svg/notes/whatever.svg
# output wanted = ./notes/whatever.svg
for f in ./svg/notes/*.svg
do
 
    exp2x=${f:6}
    exp=${exp2x:0: -7}.png
	echo "Exporting SVG file - $f"
	# always "double quote" $f to avoid problems
	inkscape --export-type=png --export-filename="./$exp2x" --export-area-page "$f"
	inkscape --export-type=png --export-filename="./$exp" --export-area-page --export-dpi=48 "$f"
	
	
done


for f in ./svg/'notes (arrow)'/*.svg
do
 
    exp2x=${f:6}
    exp=${exp2x:0: -7}.png
	echo "Exporting SVG file - $f"
	# always "double quote" $f to avoid problems
	inkscape --export-type=png --export-filename="./$exp2x" --export-area-page "$f"
	inkscape --export-type=png --export-filename="./$exp" --export-area-page --export-dpi=48 "$f"
	
	
done


for f in ./svg/'notes (bar)'/*.svg
do
 
    exp2x=${f:6}
    exp=${exp2x:0: -7}.png
	echo "Exporting SVG file - $f"
	# always "double quote" $f to avoid problems
	inkscape --export-type=png --export-filename="./$exp2x" --export-area-page "$f"
	inkscape --export-type=png --export-filename="./$exp" --export-area-page --export-dpi=48 "$f"
	
	
done


for f in ./svg/stage/*.svg
do
 
    exp2x=${f:6}
    exp=${exp2x:0: -7}.png
	echo "Exporting SVG file - $f"
	# always "double quote" $f to avoid problems
	inkscape --export-type=png --export-filename="./$exp2x" --export-area-page "$f"
	inkscape --export-type=png --export-filename="./$exp" --export-area-page --export-dpi=48 "$f"
	
	
done
