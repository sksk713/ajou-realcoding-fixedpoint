#include <stdio.h>
#include <math.h>
#define P_2TO32 4294967296.0
#define PI 3.141592653
#define _FX_S3132_FX_TO_DOUBLE(a) (a/P_2TO32)
#define _FX_S3132_DOUBLE_TO_FX(a) (long long)(a*P_2TO32)
#define _FX_S3132_ADD(a, b) ((a)+(b))
#define _FX_S3132_SUB(a, b) ((a)-(b))
#define _FX_S3132_MUL(a, b) _FX_S3132_DOUBLE_TO_FX(_FX_S3132_FX_TO_DOUBLE (a) * _FX_S3132_FX_TO_DOUBLE (b))
#define _FX_S3132_DIV(a, b) _FX_S3132_DOUBLE_TO_FX(_FX_S3132_FX_TO_DOUBLE (a) / _FX_S3132_FX_TO_DOUBLE (b))
#define _FX_S3132_SIN(a) _FX_S3132_DOUBLE_TO_FX(sin(_FX_S3132_FX_TO_DOUBLE(a)))
#define _FX_S3132_SQRT(a) _FX_S3132_DOUBLE_TO_FX(sqrt(_FX_S3132_FX_TO_DOUBLE(a)))
#define _FX_S3132_POWER(a, b) _FX_S3132_DOUBLE_TO_FX(pow(_FX_S3132_FX_TO_DOUBLE(a), _FX_S3132_FX_TO_DOUBLE(b)))
#define _FX_S3132_LOG(a) _FX_S3132_DOUBLE_TO_FX(log10(_FX_S3132_FX_TO_DOUBLE(a)))
#define _FX_S3132_LN(a) _FX_S3132_DOUBLE_TO_FX(log(_FX_S3132_FX_TO_DOUBLE(a)))
#define _FX_S3132_PI() (_FX_S3132_DOUBLE_TO_FX(PI))
#define _FX_S3132_PI_REVERSE() (_FX_S3132_DOUBLE_TO_FX((1/PI)))

typedef long long fx_s3132;
