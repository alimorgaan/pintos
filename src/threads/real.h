#ifndef THREADS_REAL_H
#define THREADS_REAL_H

struct real {
    int x;
}
//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
//hehe
int real_to_int(struct real r);

struct real int_to_real(int i);

struct real add_real(struct real r1, struct real r2);

struct real sub_real(struct real r1, struct real r2);

struct real mult_real(struct real r1, struct real r2);

struct real div_real(struct real r1, struct real r2);

#endif