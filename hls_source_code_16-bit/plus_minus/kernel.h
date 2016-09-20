#include <cstdlib>
#include <stdint.h>
#include <ap_int.h>
#include <hls_stream.h>

 

using namespace hls;


void kernel(
			stream<ap_int<32> > &stream_i0, stream<ap_int<32> > &stream_i1, 
			stream<ap_int<32> > &stream_o0, stream<ap_int<32> > &stream_o1
);


