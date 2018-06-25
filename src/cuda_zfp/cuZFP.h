#ifndef cuZFP_h
#define cuZFP_h

//#include "zfp_structs.h"
#include "zfp.h"


//namespace cuZFP {
#ifdef __cplusplus
extern "C" {
#endif
  void cuda_compress(zfp_stream *stream, const zfp_field *field);
  void cuda_decompress(zfp_stream *stream, zfp_field *field);
#ifdef __cplusplus
}
#endif

//} // namespace cuZFP


#endif
