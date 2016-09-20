#include <cstdlib>
#include <stdint.h>
#include <ap_int.h>
#include <hls_stream.h>

 

using namespace hls;


void kernel(
			stream<ap_int<16> > &stream_i0, stream<ap_int<16> > &stream_i1, stream<ap_int<16> > &stream_i2,
			stream<ap_int<16> > &stream_i3, stream<ap_int<16> > &stream_i4, stream<ap_int<16> > &stream_i5,
			stream<ap_int<16> > &stream_o0, stream<ap_int<16> > &stream_o1, stream<ap_int<16> > &stream_o2,
			stream<ap_int<16> > &stream_o3
);


