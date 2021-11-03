// ==========================================================================
//                 SeqAn - The Library for Sequence Analysis
// ==========================================================================
// Copyright (c) 2006-2021, Knut Reinert, FU Berlin
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Knut Reinert or the FU Berlin nor the names of
//       its contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL KNUT REINERT OR THE FU BERLIN BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ==========================================================================
// Author: Manuel Holtgrewe <manuel.holtgrewe@fu-berlin.de>
// ==========================================================================
// Tests for the SeqAn math header.
// ==========================================================================

#ifndef SEQAN_TESTS_BASIC_TEST_BASIC_MATH_H_
#define SEQAN_TESTS_BASIC_TEST_BASIC_MATH_H_

SEQAN_DEFINE_TEST(test_basic_math_int_pow)
{
    using namespace seqan;

    SEQAN_ASSERT_EQ(_intPow(1, 2), 1);
    SEQAN_ASSERT_EQ(_intPow(2, 0), 1);
    SEQAN_ASSERT_EQ(_intPow(2, 2), 4);
    SEQAN_ASSERT_EQ(_intPow(2, 3), 8);
}

SEQAN_DEFINE_TEST(test_basic_math_log2)
{
    // Note that the explicit namespace is required, otherwise MSVC finds log2 from <cmath>.

    SEQAN_ASSERT_EQ(seqan::log2(1), 0u);
    SEQAN_ASSERT_EQ(seqan::log2(2), 1u);
    SEQAN_ASSERT_EQ(seqan::log2(3), 1u);
    SEQAN_ASSERT_EQ(seqan::log2(4), 2u);
    SEQAN_ASSERT_EQ(seqan::log2(5), 2u);
    SEQAN_ASSERT_EQ(seqan::log2(6), 2u);
    SEQAN_ASSERT_EQ(seqan::log2(7), 2u);
    SEQAN_ASSERT_EQ(seqan::log2(8), 3u);
    SEQAN_ASSERT_EQ(seqan::log2(9), 3u);
}

SEQAN_DEFINE_TEST(test_basic_math_min)
{
    using namespace seqan;

    SEQAN_ASSERT_EQ(_min(1, 1), 1);
    SEQAN_ASSERT_EQ(_min(2, 1), 1);
    SEQAN_ASSERT_EQ(_min(1, 2), 1);
}

SEQAN_DEFINE_TEST(test_basic_math_max)
{
    using namespace seqan;

    SEQAN_ASSERT_EQ(_max(1, 1), 1);
    SEQAN_ASSERT_EQ(_max(2, 1), 2);
    SEQAN_ASSERT_EQ(_max(1, 2), 2);
}

SEQAN_DEFINE_TEST(test_basic_math_abs)
{
    using namespace seqan;

    SEQAN_ASSERT_EQ(_abs(-1), 1);
    SEQAN_ASSERT_EQ(_abs(-1), 1);
}

#endif  // #ifndef SEQAN_TESTS_BASIC_TEST_BASIC_MATH_H_
