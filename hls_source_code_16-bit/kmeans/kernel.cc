#include "kernel.h"

using namespace hls;

void kernel(
		stream<ap_int<16> > &stream_i0, stream<ap_int<16> > &stream_i1, stream<ap_int<16> > &stream_i2,
		stream<ap_int<16> > &stream_i3, stream<ap_int<16> > &stream_i4, stream<ap_int<16> > &stream_i5,
		stream<ap_int<16> > &stream_i6, stream<ap_int<16> > &stream_i7, stream<ap_int<16> > &stream_i8,
		stream<ap_int<16> > &stream_i9, stream<ap_int<16> > &stream_i10, stream<ap_int<16> > &stream_i11,
		stream<ap_int<16> > &stream_i12, stream<ap_int<16> > &stream_i13, stream<ap_int<16> > &stream_i14,
		stream<ap_int<16> > &stream_i15, stream<ap_int<16> > &stream_o0
		)
{
	ap_int<16> i_0, i_1, i_2, i_3, i_4, i_5, i_6, i_7, i_8, i_9, i_10, i_11, i_12, i_13, i_14, i_15;
	ap_int<16> o_0;
	ap_int<16> t_1, t_2, t_3, t_4, t_5, t_6, t_7, t_8;


	if (!stream_i0.empty() & !stream_i1.empty() & !stream_i2.empty() & !stream_i3.empty() & !stream_i4.empty() & !stream_i5.empty() & !stream_i6.empty() & !stream_i7.empty() & !stream_i8.empty() & !stream_i9.empty() & !stream_i10.empty() & !stream_i11.empty() & !stream_i12.empty() & !stream_i13.empty() & !stream_i14.empty() & !stream_i15.empty())
	{
		i_0 = stream_i0.read();
		i_1 = stream_i1.read();
		i_2 = stream_i2.read();
		i_3 = stream_i3.read();
		i_4 = stream_i4.read();
		i_5 = stream_i5.read();
		i_6 = stream_i6.read();
		i_7 = stream_i7.read();
		i_8 = stream_i8.read();
		i_9 = stream_i9.read();
		i_10 = stream_i10.read();
		i_11 = stream_i11.read();
		i_12 = stream_i12.read();
		i_13 = stream_i13.read();
		i_14 = stream_i14.read();
		i_15 = stream_i15.read();

       	#pragma HLS pipeline II=1
		t_1 = i_0 - i_1;
		t_2 = i_2 - i_3;
		t_3 = i_4 - i_5;
		t_4 = i_6 - i_7;
		t_5 = i_8 - i_9;
		t_6 = i_10 - i_11;
		t_7 = i_12 - i_13;
		t_8 = i_14 - i_15;
		
		o_0 = t_1*t_1 + t_2*t_2 + t_3*t_3 + t_4*t_4 + t_5*t_5 + t_6*t_6 + t_7*t_7 + t_8*t_8;
		
		stream_o0.write (o_0);

	}
} 




 
