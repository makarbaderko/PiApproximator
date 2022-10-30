# PiApproximator
This software can approximate the Pi number using only the c++ rand() function. 

## How does it work?

We generate a list of random points which coordinates are in the range of [0, 1]. Thus, we can use the trigonometric circle to count number of points which are inside the circle with radius 1 and connect the pi coefficient to it. Then we can get a strict mathematical formula, that the probability of a point being inside the circle is $\pi / 4.$ So, $\pi = \frac{Points \t inside}{Total \t Points} * 4$. The code uses this formula to estimate the Pi number. To get the Tau number, you can simply multiply the output by two.

