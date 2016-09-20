#include "kernel.h"

using namespace hls;

void kernel(
		stream<ap_int<32> > &stream_i0, stream<ap_int<32> > &stream_i1, stream<ap_int<32> > &stream_i2,
		stream<ap_int<32> > &stream_o0
		)
{
	ap_int<32> i_0, i_1, i_2;
	ap_int<32> o_0;
	ap_int<32> t1_1,t1_2,t1_3,t1_4,t1_5,t1_6,t1_7,t1_8,t1_9,t1_10,t2_1,t2_2,t2_3,t2_4,t2_5,t2_6,t2_7,t2_8,t3_1,t3_2,t3_3,t3_4,t3_5,t3_6,t3_7,t4_1,t4_2,t4_3,t4_4,t5_1,t5_2,t5_3,t6_1,t6_2,t6_3,t7_1,t7_2,t8_1,t8_2,t9_1,t10_1,t11_1;

	
	if (!stream_i0.empty() & !stream_i1.empty() & !stream_i2.empty())
	{
		i_0 = stream_i0.read();
		i_1 = stream_i1.read();
		i_2 = stream_i2.read();

       	#pragma HLS pipeline II=1
	
		t1_1 = i_1 - 2*i_2;
		t1_2 = i_2*i_2;
		t1_3 = i_2 + 24;
		t1_4 = 12*i_2;
		t1_5 = 4*i_2 + 96;
		t1_6 = 20*i_2;
		t1_7 = i_1 - i_2;
		t1_8 = 96*i_2;
		t1_9 = 16*i_1 + 1152;
		t2_1 = t1_1 - 24;
		t2_2 = t1_2*t1_3;
		t2_3 = 8*i_1 - t1_4;
		t2_4 = t1_2*t1_5;
		t2_5 = t1_6*t1_7;
		t2_6 = i_2*t1_9;
		t3_1 = i_2*t2_1;
		t3_2 = t2_3 - 160;
		t3_3 = t2_5 + t1_8;
		t3_4 = t2_6 + 27648;
		t4_1 = t3_1 + 128;
		t4_2 = i_2*t3_2;
		t4_3 = t3_3 + 13824;
		t4_4 = i_1*t3_4;
		t5_1 = i_1*t4_1;
		t5_2 = t4_2 + 2304;
		t5_3 = i_1*t4_3;
		t6_1 = t5_1 + t2_2;
		t6_2 = i_1*t5_2;
		t7_1 = i_0*t6_1;
		t7_2 = t6_2 + t2_4;
		t8_1 = t7_1 + t7_2;
		t9_1 = i_0*t8_1;
		t10_1 = t9_1 + t5_3;
		t11_1 = i_0*t10_1;
		
		o_0 = t11_1 + t4_4;
		
		stream_o0.write (o_0);

	}
} 




 
