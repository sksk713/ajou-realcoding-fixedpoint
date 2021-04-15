#ifndef __FX_S3132_LONGLONG_H__
#define __FX_S3132_LONGLONG_H__

#include <math.h>

typedef long long  fixed64;
typedef long	   fixed32;
typedef long long fx_s3132;



#define __FX_S3132__
#define _FX_S3132_QNUM                          32
#define _FX_S3132_QMULT                         4294967296
#define _FX_S3132_FLOAT_QMULT                   4294967296.0F
#define _FX_S3132_180_PI                        0x00394BB8
#define _FX_S3132_1                             0x00010000
#define _FX_S3132_30                            0x001E0000
#define _FX_S3132_45                            0x002D0000
#define _FX_S3132_90                            0x005A0000
#define _FX_S3132_180                           0x00B40000
#define _FX_S3132_360                           0x01680000


//아래 3개는 곱셈 관련 코드입니다.
#define _FX_S3132_mul(fa, fb)				((fa * fb) >> _FX_S3132_QNUM )  //fa와 fb를 곱해서 2^32로 나누어 주는 코드입니다. 이게 가장 기본 코드입니다. 
#define _FX_S3132_mul1(fa, fb)				((((fa>>16) * fb)>>16))    //위와 똑같이 fa*fb>>32랑 같은 의미인대, 먼저 fa/2^16와 fb를 곱해주고 나머지 2^16을 나눠주는 작업입니다.
#define _FX_S3132_mul2(fa, fb)				((((fa>>8)*(fb>>8))>>16))  //위와 똑같이 fa*fb>>32랑 같은 의미인대, 먼저 fa/2^8, fb/2^8을 곱해주고 나머지 2^16을 나눠주는 작업입니다.

//아래 3개는 나눗셈 관련 코드입니다.
#define _FX_S3132_div(fa, fb)				( (((fa) << _FX_S3132_QNUM) /(fb)))    //fa에 2^32을 곱하고 fb를 나눠주는 코드입니다. 이게 가장 기본 코드입니다.
#define _FX_S3132_div1(fa, fb)				((((fa)<<16)/(fb))<<16)     //위와 똑같이 (fa<<32)/fb랑 같은 의미인대, 먼저 fa에 2^16을 곱한 값을 fb를 나누고, 그 다음에 나머지 2^16을 곱해주는 작업입니다.
#define _FX_S3132_div2(fa, fb)				((((fa)<<24)/(fb))<<8)      //위와 똑같이 (fa<<32)/fb랑 같은 의미인대, 먼저 fa에 2^24을 곱한 값을 fb를 나누고, 그 다음에 나머지 2^8을 곱해주는 작업입니다.
                                      //((fa)/((fb)>>_FX_S3132_QNUM))

#define _FX_S3132_DEGREE(__r)				(_FX_S3132_mul((__r),_FX_S3132_180_PI))  

#define _FX_S3132_ASIN(__a)					fx32_asind(_FX_S3132_DEGREE(__a))

fixed32 fx32_sind(fixed32 fa);


#endif