set encoding utf8
set termoption noenhanced
set title "*virtual ground test: opamp gain = 1000"
set xlabel "s"
set ylabel "V"
set grid
unset logscale x 
set xrange [0.000000e+00:5.000000e-02]
unset logscale y 
set yrange [-1.099830e+02:1.099830e+02]
#set xtics 1
#set x2tics 1
#set ytics 1
#set y2tics 1
set format y "%g"
set format x "%g"
plot 'images/spice.png.data' using 1:2 with lines lw 1 title "v(in)",\
'images/spice.png.data' using 3:4 with lines lw 1 title "v(out)",\
'images/spice.png.data' using 5:6 with lines lw 1 title "v(inn)"
set terminal push
set terminal png noenhanced
set out 'images/spice.png.png'
replot
set term pop
replot
