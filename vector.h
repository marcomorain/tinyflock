#ifndef VECTOR_H_
#define VECTOR_H_

#include <math.h>

typedef struct
{
        float x, y, z;

} vector;

vector* vector_create(float x, float y, float z);

inline void vector_randomize(vector* v, float min, float max);

void vector_copy(vector* dest, vector* src);

void vector_destroy(vector* v);

inline void vector_init(vector* v, float x, float y, float z);

inline void vector_init_scalar(vector* v, float init);

/* The performance of these vector instructions could be improved on x86 using hand-coded SSE intrinsics,
though the compiler may do that itself. */
inline void vector_add(vector* a, vector* b);

inline void vector_sub(vector* a, vector* b);

inline void vector_sub_scalar(vector* a, float b);

inline void vector_mul(vector* a, vector* b);

inline void vector_mul_scalar(vector* a, float b);

inline void vector_div(vector* a, vector* b);

inline void vector_div_scalar(vector* v, float divisor);

inline float vector_distance(vector* a, vector* b);

inline float vector_distance_nosqrt(vector* a, vector* b);

inline float vector_magnitude(vector* v);

inline void vector_normalize(vector* v);

inline void vector_clamp(vector* v, vector* min, vector* max);

inline void vector_clamp_scalar(vector* v, float min, float max);

#endif
