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
	stream<ap_int<16> > stream_i0;
	stream<ap_int<16> > stream_i1;
	stream<ap_int<16> > stream_i2;
	stream<ap_int<16> > stream_i3;
	stream<ap_int<16> > stream_i4;
	stream<ap_int<16> > stream_i5;
	stream<ap_int<16> > stream_o0;
	stream<ap_int<16> > stream_o1;
	stream<ap_int<16> > stream_o2;
	stream<ap_int<16> > stream_o3;
	
	ap_int<16> temp0, temp1, temp2, temp3;

	for(int h=0; h<height; h++){
		stream_i0.write(h);
		stream_i1.write(h);
		stream_i2.write(h);
		stream_i3.write(h);
		stream_i4.write(h);
		stream_i5.write(h);
		printf("input value = %d\n\t",h);
		kernel(stream_i0, stream_i1, stream_i2, stream_i3, stream_i4, stream_i5, stream_o0, stream_o1, stream_o2, stream_o3);
		temp0 = (ap_int<16> )stream_o0.read();
		temp1 = (ap_int<16> )stream_o1.read();
		temp2 = (ap_int<16> )stream_o2.read();
		temp3 = (ap_int<16> )stream_o3.read();
		printf("output value = %d %d %d %d\n\t", (int)temp0, (int)temp1, (int)temp2, (int)temp3);
	}

//	cout<<"-----program complete------"<<endl;
	return 0;
}

