/* 
 * File:   MemManagment.h
 * Author: kevincando
 *
 * Created on July 15, 2015, 7:36 PM
 */

#ifndef MEMMANAGEMENT_H
#define	MEMMANAGEMENT_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifndef CONST_H
    #include "Const.h"
#endif

#include <stdlib.h>
#include <stdio.h>

enum { MAX_SIZE_REF_ALLOW_BLOCK = 1000, MAX_WORD_SIZE = 15 };

#define NEW(type) ((type*)new_malloc(sizeof(type),atoi(#type)))
#define DESTROY(x) (destroy(x))

#define NEW_ARRAY(type,num_elem) (new_malloc(sizeof(type)*num_elem))
#define NEW_FLEX(type,num_elem,etype) ((type*)new_malloc(sizeof(type) + (num_elem) * sizeof(etype))

extern inline void *new_malloc(size_t value, int type);

extern inline void destroy(void *ptr);

extern inline void *new_calloc(size_t numElem, size_t size, int type);


#ifdef	__cplusplus
}
#endif

#endif	/* MEMMANAGMENT_H */

