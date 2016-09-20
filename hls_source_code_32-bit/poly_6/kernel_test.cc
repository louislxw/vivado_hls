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
	stream<ap_int<32> > stream_o0;
	
	ap_int<32> temp0;

	for(int h=0; h<height; h++){
		stream_i0.write(h);
		stream_i1.write(h);
		stream_i2.write(h);
		printf("input value = %d\n\t",h);
		kernel(stream_i0, stream_i1, stream_i2, stream_o0);
		temp0 = (ap_int<32> )stream_o0.read();
		printf("output value = %d\n\t", (int)temp0);
	}

//	cout<<"-----program complete------"<<endl;
	return 0;
}

