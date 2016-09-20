#include "kernel.h"

using namespace hls;

void kernel(
		stream<ap_int<32> > &stream_i0, stream<ap_int<32> > &stream_i1, stream<ap_int<32> > &stream_i2,
		stream<ap_int<32> > &stream_i3, stream<ap_int<32> > &stream_i4, stream<ap_int<32> > &stream_i5,
		stream<ap_int<32> > &stream_i6, stream<ap_int<32> > &stream_i7, stream<ap_int<32> > &stream_i8,
		stream<ap_int<32> > &stream_i9, stream<ap_int<32> > &stream_i10, stream<ap_int<32> > &stream_i11,
		stream<ap_int<32> > &stream_i12, stream<ap_int<32> > &stream_i13, stream<ap_int<32> > &stream_i14,
		stream<ap_int<32> > &stream_i15, stream<ap_int<32> > &stream_i16, stream<ap_int<32> > &stream_i17,
		stream<ap_int<32> > &stream_i18, stream<ap_int<32> > &stream_i19, stream<ap_int<32> > &stream_i20,
		stream<ap_int<32> > &stream_i21, stream<ap_int<32> > &stream_i22, stream<ap_int<32> > &stream_i23,
		stream<ap_int<32> > &stream_o0, stream<ap_int<32> > &stream_o1, stream<ap_int<32> > &stream_o2,
		stream<ap_int<32> > &stream_o3, stream<ap_int<32> > &stream_o4, stream<ap_int<32> > &stream_o5,
		stream<ap_int<32> > &stream_o6, stream<ap_int<32> > &stream_o7
		)
{
	ap_int<32> i_0, i_1, i_2, i_3, i_4, i_5, i_6, i_7, i_8, i_9, i_10, i_11, i_12, i_13, i_14, i_15, i_16, i_17, i_18, i_19, i_20, i_21, i_22, i_23;
	ap_int<32> o_0, o_1, o_2, o_3, o_4, o_5, o_6, o_7;
	ap_int<32> temp_1, temp_2, temp_3, temp_4, temp_5, temp_6, temp_7, temp_8;


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
		i_16 = stream_i16.read();
		i_17 = stream_i17.read();
		i_18 = stream_i18.read();
		i_19 = stream_i19.read();
		i_20 = stream_i20.read();
		i_21 = stream_i21.read();
		i_22 = stream_i22.read();
		i_23 = stream_i23.read();

       	#pragma HLS pipeline II=1
		
		temp_1 = i_0 * i_1;
		temp_2 = i_2 * i_3;
		temp_3 = i_4 * i_5;
		temp_4 = i_6 * i_7;
		temp_5 = i_8 * i_9;
		temp_6 = i_10 * i_11;
		temp_7 = i_12 * i_13;
		temp_8 = i_14 * i_15;
		
		o_0 = i_16 + temp_1;
		o_1 = i_17 + temp_2;
		o_2 = i_18 + temp_3;
		o_3 = i_19 + temp_4;
		o_4 = i_20 + temp_5;
		o_5 = i_21 + temp_6;
		o_6 = i_22 + temp_7;
		o_7 = i_23 + temp_8;
		
		stream_o0.write (o_0);
		stream_o1.write (o_1);
		stream_o2.write (o_2);
		stream_o3.write (o_3);
		stream_o4.write (o_4);
		stream_o5.write (o_5);
		stream_o6.write (o_6);
		stream_o7.write (o_7);

	}
} 




 
