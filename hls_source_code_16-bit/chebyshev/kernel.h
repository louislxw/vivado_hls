#include <cstdlib>
#include <stdint.h>
#include <ap_int.h>
#include <hls_stream.h>

 

using namespace hls;


void kernel(
			stream<ap_int<16> > &stream_i0, stream<ap_int<16> > &stream_o0
);


