#ifndef _VEC_H_
#define _VEC_H_
typedef long data_t;

typedef struct {
    long len;
    data_t *data;
} vec_rec, *vec_ptr;

extern vec_ptr new_vec(long len);
extern int get_vec_element(vec_ptr v, long index, data_t *dest);
extern void combine1(vec_ptr v, data_t *dest);
extern void combine2(vec_ptr v, data_t *dest);
extern void combine3(vec_ptr v, data_t *dest);
extern long vec_length(vec_ptr v);
extern data_t *get_vec_start(vec_ptr v);

#endif /* ifndef _VEC_H_ */
