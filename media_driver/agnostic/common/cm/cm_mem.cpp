/*
* Copyright (c) 2020, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/
//!
//! \file      cm_mem.cpp
//! \brief     Contains CM memory function implementations 
//!

#include "cm_mem.h"
#include "cm_mem_c_impl.h"
//#include "cm_mem_sse2_impl.h"

typedef void(*t_CmFastMemCopy)( void* dst, const   void* src, const size_t bytes );
typedef void(*t_CmFastMemCopyWC)( void* dst,   const void* src, const size_t bytes );


void CmFastMemCopy( void* dst, const void* src, const size_t bytes )
{
    CmFastMemCopy_C(dst, src, bytes);
}

void CmFastMemCopyWC( void* dst, const void* src, const size_t bytes )
{
    CmFastMemCopyWC_C(dst, src, bytes);
}
