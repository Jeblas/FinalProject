#!/bin/bash
g++ dft.cc -o dft ../input_image.cc ../complex.cc ../fourier_transforms.cc
g++ recursive-fft.cc -o fft ../input_image.cc ../complex.cc ../fourier_transforms.cc
