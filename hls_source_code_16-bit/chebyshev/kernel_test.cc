#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "kernel.h"
#include <ap_int.h>
#include <hls_stream.h>

using namespace hls;
using namespace std;

int main(int argc, char** argv){

	const int height = 8;
	stream<ap_int<16> > stream_i0;
	stream<ap_int<16> > stream_o0;
	
	ap_int<16> temp0, temp1;

	for(int h=0; h<height; h++){
		stream_i0.write(h);
		printf("input value = %d\n\t",h);
		kernel(stream_i0, stream_o0);
		temp0 = (ap_int<16> )stream_o0.read();
		printf("output value = %d %d\n\t", (int)temp0);
	}

//	cout<<"-----program complete------"<<endl;
	return 0;
}

