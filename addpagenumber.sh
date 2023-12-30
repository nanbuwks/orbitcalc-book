# pdftk orbitcalc.pdf cat 2-end output booksort.pdf
#addpage -o orbitcalc-addpagenumber.pdf booksort.pdf -k 2 -s 2 -y 30
#rm booksort.pdf
addpage -o orbitcalc-temp.pdf orbitcalc.pdf -k 2 -s 2 -y 30
pdftk A=orbitcalc.pdf B=orbitcalc-temp.pdf cat B1-r2 Aend output orbitcalc-addpagenumber.pdf
rm orbitcalc-temp.pdf

