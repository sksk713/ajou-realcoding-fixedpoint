#include <stdio.h>
#include "fx_s3132_double.h"
fx_s3132 fx_s3132_fx_to_double(fx_s3132 a) {
	return _FX_S3132_FX_TO_DOUBLE(a);
}
fx_s3132 fx_s3132_double_to_fx(fx_s3132 a) {
	return _FX_S3132_DOUBLE_TO_FX(a);
}
fx_s3132 fx_s3132_add(fx_s3132 a, fx_s3132 b) {
	return _FX_S3132_ADD(a, b);
}
fx_s3132 fx_s3132_sub(fx_s3132 a, fx_s3132 b) {
	return _FX_S3132_SUB(a, b);
}
fx_s3132 fx_s3132_mul(fx_s3132 a, fx_s3132 b) {
	return _FX_S3132_MUL(a, b);
}
fx_s3132 fx_s3132_div(fx_s3132 a, fx_s3132 b) {
	return _FX_S3132_DIV(a, b);
}
fx_s3132 fx_s3132_sin(fx_s3132 a) {
	return _FX_S3132_SIN(a);
}
fx_s3132 fx_s3132_sqrt(fx_s3132 a) {
	return _FX_S3132_SQRT(a);
}
fx_s3132 fx_s3132_power(fx_s3132 a, fx_s3132 b) {
	return _FX_S3132_POWER(a, b);
}
fx_s3132 fx_s3132_log(fx_s3132 a) {
	return _FX_S3132_LOG(a);
}
fx_s3132 fx_s3132_ln(fx_s3132 a) {
	return _FX_S3132_LN(a);
}
fx_s3132 fx_s3132_pi() {
	return _FX_S3132_PI();
}
fx_s3132 fx_s3132_pi_reverse() {
	return _FX_S3132_PI_REVERSE();
}
