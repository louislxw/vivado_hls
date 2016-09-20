#include "kernel.h"

using namespace hls;

void kernel(
		stream<ap_int<16> > &stream_i0,	stream<ap_int<16> > &stream_o0
		)
{
	ap_int<16> i_0;
	ap_int<16> o_0;
	ap_int<16> temp_0, temp_1;

	
	if (!stream_i0.empty())
	{
		i_0 = stream_i0.read();

       	#pragma HLS pipeline II=6
		temp_0 = 16 * i_0 * i_0 - 20;
		temp_1 = temp_0 * i_0 * i_0 + 5;
	
		o_0 = temp_1 * i_0;
		
		stream_o0.write (o_0);


	}
} 




 
