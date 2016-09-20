#include "kernel.h"

using namespace hls;

void kernel(
		stream<ap_int<32> > &stream_i0, stream<ap_int<32> > &stream_i1,
		stream<ap_int<32> > &stream_o0, stream<ap_int<32> > &stream_o1
		)
{
	ap_int<32> i_0, i_1;
	ap_int<32> o_0, o_1;

	
	if (!stream_i0.empty() & !stream_i1.empty())
	{
		i_0 = stream_i0.read();
		i_1 = stream_i1.read();

       	#pragma HLS pipeline II=1

		o_0 = i_0 + i_1;
		o_1 = i_0 - i_1;
		
		stream_o0.write (o_0);
		stream_o1.write (o_1);

	}
} 




 
