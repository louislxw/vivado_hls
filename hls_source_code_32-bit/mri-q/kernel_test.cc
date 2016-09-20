#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "kernel.h"
#include <ap_int.h>
#include <hls_stream.h>

using namespace hls;
using namespace std;

int main(int argc, char** argv){

	const int height = 16;
	stream<ap_int<32> > stream_i0;
	stream<ap_int<32> > stream_i1;
	stream<ap_int<32> > stream_i2;
	stream<ap_int<32> > stream_i3;
	stream<ap_int<32> > stream_i4;
	stream<ap_int<32> > stream_i5;
	stream<ap_int<32> > stream_i6;
	stream<ap_int<32> > stream_i7;
	stream<ap_int<32> > stream_i8;
	stream<ap_int<32> > stream_i9;
	stream<ap_int<32> > stream_i10;
	stream<ap_int<32> > stream_o0;
	stream<ap_int<32> > stream_o1;

	ap_int<32> temp0, temp1;

	for(int h=0; h<height; h++){
		stream_i0.write(h);
		stream_i1.write(h);
		stream_i2.write(h);
		stream_i3.write(h);
		stream_i4.write(h);
		stream_i5.write(h);
		stream_i6.write(h);
		stream_i7.write(h);
		stream_i8.write(h);
		stream_i9.write(h);
		stream_i10.write(h);
		printf("input value = %d\n\t",h);
		kernel(stream_i0, stream_i1, stream_i2, stream_i3, stream_i4, stream_i5, stream_i6, stream_i7, stream_i8, stream_i9, stream_i10, stream_o0, stream_o1);
		temp0 = (ap_int<32> )stream_o0.read();
		temp1 = (ap_int<32> )stream_o1.read();
		printf("output value = %d %d\n\t", (int)temp0, (int)temp1);
	}

//	cout<<"-----program complete------"<<endl;
	return 0;
}

