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
	stream<ap_int<32> > stream_i11;
	stream<ap_int<32> > stream_i12;
	stream<ap_int<32> > stream_i13;
	stream<ap_int<32> > stream_i14;
	stream<ap_int<32> > stream_i15;
	stream<ap_int<32> > stream_i16;
	stream<ap_int<32> > stream_i17;
	stream<ap_int<32> > stream_i18;
	stream<ap_int<32> > stream_i19;
	stream<ap_int<32> > stream_i20;
	stream<ap_int<32> > stream_i21;
	stream<ap_int<32> > stream_i22;
	stream<ap_int<32> > stream_i23;
	stream<ap_int<32> > stream_o0;
	stream<ap_int<32> > stream_o1;
	stream<ap_int<32> > stream_o2;
	stream<ap_int<32> > stream_o3;
	stream<ap_int<32> > stream_o4;
	stream<ap_int<32> > stream_o5;
	stream<ap_int<32> > stream_o6;
	stream<ap_int<32> > stream_o7;

	ap_int<32> temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7;

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
		stream_i11.write(h);
		stream_i12.write(h);
		stream_i13.write(h);
		stream_i14.write(h);
		stream_i15.write(h);
		stream_i16.write(h);
		stream_i17.write(h);
		stream_i18.write(h);
		stream_i19.write(h);
		stream_i20.write(h);
		stream_i21.write(h);
		stream_i22.write(h);
		stream_i23.write(h);
		printf("input value = %d\n\t",h);
		kernel(stream_i0, stream_i1, stream_i2, stream_i3, stream_i4, stream_i5, stream_i6, stream_i7, stream_i8, stream_i9, stream_i10, stream_i11, stream_i12, stream_i13, stream_i14, stream_i15, stream_i16, stream_i17, stream_i18, stream_i19, stream_i20, stream_i21, stream_i22, stream_i23, stream_o0, stream_o1, stream_o2, stream_o3, stream_o4, stream_o5, stream_o6, stream_o7);
		temp0 = (ap_int<32> )stream_o0.read();
		temp1 = (ap_int<32> )stream_o1.read();
		temp2 = (ap_int<32> )stream_o2.read();
		temp3 = (ap_int<32> )stream_o3.read();
		temp4 = (ap_int<32> )stream_o4.read();
		temp5 = (ap_int<32> )stream_o5.read();
		temp6 = (ap_int<32> )stream_o6.read();
		temp7 = (ap_int<32> )stream_o7.read();
		printf("output value = %d %d %d %d %d %d %d %d\n\t", (int)temp0, (int)temp1, (int)temp2, (int)temp3, (int)temp4, (int)temp5, (int)temp6, (int)temp7);
	}

//	cout<<"-----program complete------"<<endl;
	return 0;
}

