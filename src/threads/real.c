#include "real.h"

const int F = 1 << 14;

int real_to_int(struct real r) {
    if(r.x >= 0) {
        return (r.x + F / 2) / F;
    }
    return (r.x - F / 2) / F;
}

struct real int_to_real(int n) {
    struct real r;
    r.x = n * F;
    return r;
}

struct real add_real(struct real r1, struct real r2) {
    struct real r;
    r.x = r1.x + r2.x;
    return r;
}

struct real sub_real(struct real r1, struct real r2) {
    struct real r;
    r.x = r1.x - r2.x;
    return r;
}

struct real mult_real(struct real r1, struct real r2) {
    struct real r;
    r.x = (int64_t)(r1.x) * (r2.x) / F;
    return r;
}

struct real div_real(struct real r1, struct real r2) {
    struct real r;
    if(r2.x == 0) {
        r.x = -1;
    } 
    else {
        r.x = (int64_t)(r1.x) * F / (r2.x);
    }
    return r;
}

