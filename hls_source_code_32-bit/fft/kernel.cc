#include "kernel.h"

using namespace hls;

void kernel(
		stream<ap_int<32> > &stream_i0, stream<ap_int<32> > &stream_i1, stream<ap_int<32> > &stream_i2,
		stream<ap_int<32> > &stream_i3, stream<ap_int<32> > &stream_i4, stream<ap_int<32> > &stream_i5,
		stream<ap_int<32> > &stream_o0, stream<ap_int<32> > &stream_o1, stream<ap_int<32> > &stream_o2,
		stream<ap_int<32> > &stream_o3
		)
{
	ap_int<32> i_0, i_1, i_2, i_3, i_4, i_5;
	ap_int<32> o_0, o_1, o_2, o_3;
	ap_int<32> temp_1, temp_2;

	
	if (!stream_i0.empty() & !stream_i1.empty() & !stream_i2.empty() & !stream_i3.empty() & !stream_i4.empty() & !stream_i5.empty())
	{
		i_0 = stream_i0.read();
		i_1 = stream_i1.read();
		i_2 = stream_i2.read();
		i_3 = stream_i3.read();
		i_4 = stream_i4.read();
		i_5 = stream_i5.read();

       	#pragma HLS pipeline II=1
		temp_1 = i_1*i_2 + i_3*i_4;
		temp_2 = i_1*i_4 - i_3*i_2;
	
		o_0 = i_0 - temp_1;
		o_1 = i_0 + temp_1;
		o_2 = i_5 - temp_2;
		o_3 = i_5 + temp_2;
		
		stream_o0.write (o_0);
		stream_o1.write (o_1);
		stream_o2.write (o_2);
		stream_o3.write (o_3);

	}
} 




 
