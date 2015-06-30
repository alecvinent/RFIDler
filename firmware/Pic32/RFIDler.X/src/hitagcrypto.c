/***************************************************************************
 * A copy of the GNU GPL is appended to this file.                         *
 *                                                                         *
 * This licence is based on the nmap licence, and we express our gratitude *
 * for the work that went into producing it. There is no other connection  *
 * between RFIDler and nmap either expressed or implied.                   *
 *                                                                         *
 ********************** IMPORTANT RFIDler LICENSE TERMS ********************
 *                                                                         *
 *                                                                         *
 * All references to RFIDler herein imply all it's derivatives, namely:    *
 *                                                                         *
 * o RFIDler-LF Standard                                                   *
 * o RFIDler-LF Lite                                                       *
 * o RFIDler-LF Nekkid                                                     *
 *                                                                         *
 *                                                                         *
 * RFIDler is (C) 2013-2015 Aperture Labs Ltd.                             *
 *                                                                         *
 * This program is free software; you may redistribute and/or modify it    *
 * under the terms of the GNU General Public License as published by the   *
 * Free Software Foundation; Version 2 ("GPL"), BUT ONLY WITH ALL OF THE   *
 * CLARIFICATIONS AND EXCEPTIONS DESCRIBED HEREIN.  This guarantees your   *
 * right to use, modify, and redistribute this software under certain      *
 * conditions.  If you wish to embed RFIDler technology into proprietary   *
 * software or hardware, we sell alternative licenses                      *
 * (contact sales@aperturelabs.com).                                       *
 *                                                                         *
 * Note that the GPL places important restrictions on "derivative works",  *
 * yet it does not provide a detailed definition of that term.  To avoid   *
 * misunderstandings, we interpret that term as broadly as copyright law   *
 * allows.  For example, we consider an application to constitute a        *
 * derivative work for the purpose of this license if it does any of the   *
 * following with any software or content covered by this license          *
 * ("Covered Software"):                                                   *
 *                                                                         *
 * o Integrates source code from Covered Software.                         *
 *                                                                         *
 * o Is designed specifically to execute Covered Software and parse the    *
 * results (as opposed to typical shell or execution-menu apps, which will *
 * execute anything you tell them to).                                     *
 *                                                                         *
 * o Includes Covered Software in a proprietary executable installer.  The *
 * installers produced by InstallShield are an example of this.  Including *
 * RFIDler with other software in compressed or archival form does not     *
 * trigger this provision, provided appropriate open source decompression  *
 * or de-archiving software is widely available for no charge.  For the    *
 * purposes of this license, an installer is considered to include Covered *
 * Software even if it actually retrieves a copy of Covered Software from  *
 * another source during runtime (such as by downloading it from the       *
 * Internet).                                                              *
 *                                                                         *
 * o Links (statically or dynamically) to a library which does any of the  *
 * above.                                                                  *
 *                                                                         *
 * o Executes a helper program, module, or script to do any of the above.  *
 *                                                                         *
 * This list is not exclusive, but is meant to clarify our interpretation  *
 * of derived works with some common examples.  Other people may interpret *
 * the plain GPL differently, so we consider this a special exception to   *
 * the GPL that we apply to Covered Software.  Works which meet any of     *
 * these conditions must conform to all of the terms of this license,      *
 * particularly including the GPL Section 3 requirements of providing      *
 * source code and allowing free redistribution of the work as a whole.    *
 *                                                                         *
 * As another special exception to the GPL terms, Aperture Labs Ltd. grants*
 * permission to link the code of this program with any version of the     *
 * OpenSSL library which is distributed under a license identical to that  *
 * listed in the included docs/licenses/OpenSSL.txt file, and distribute   *
 * linked combinations including the two.                                  *
 *                                                                         *
 * Any redistribution of Covered Software, including any derived works,    *
 * must obey and carry forward all of the terms of this license, including *
 * obeying all GPL rules and restrictions.  For example, source code of    *
 * the whole work must be provided and free redistribution must be         *
 * allowed.  All GPL references to "this License", are to be treated as    *
 * including the terms and conditions of this license text as well.        *
 *                                                                         *
 * Because this license imposes special exceptions to the GPL, Covered     *
 * Work may not be combined (even as part of a larger work) with plain GPL *
 * software.  The terms, conditions, and exceptions of this license must   *
 * be included as well.  This license is incompatible with some other open *
 * source licenses as well.  In some cases we can relicense portions of    *
 * RFIDler or grant special permissions to use it in other open source     *
 * software.  Please contact sales@aperturelabs.com with any such requests.*
 * Similarly, we don't incorporate incompatible open source software into  *
 * Covered Software without special permission from the copyright holders. *
 *                                                                         *
 * If you have any questions about the licensing restrictions on using     *
 * RFIDler in other works, are happy to help.  As mentioned above, we also *
 * offer alternative license to integrate RFIDler into proprietary         *
 * applications and appliances.  These contracts have been sold to dozens  *
 * of software vendors, and generally include a perpetual license as well  *
 * as providing for priority support and updates.  They also fund the      *
 * continued development of RFIDler.  Please email sales@aperturelabs.com  *
 * for further information.                                                *
 * If you have received a written license agreement or contract for        *
 * Covered Software stating terms other than these, you may choose to use  *
 * and redistribute Covered Software under those terms instead of these.   *
 *                                                                         *
 * Source is provided to this software because we believe users have a     *
 * right to know exactly what a program is going to do before they run it. *
 * This also allows you to audit the software for security holes (none     *
 * have been found so far).                                                *
 *                                                                         *
 * Source code also allows you to port RFIDler to new platforms, fix bugs, *
 * and add new features.  You are highly encouraged to send your changes   *
 * to the RFIDler mailing list for possible incorporation into the         *
 * main distribution.  By sending these changes to Aperture Labs Ltd. or   *
 * one of the Aperture Labs Ltd. development mailing lists, or checking    *
 * them into the RFIDler source code repository, it is understood (unless  *
 * you specify otherwise) that you are offering the RFIDler Project        *
 * (Aperture Labs Ltd.) the unlimited, non-exclusive right to reuse,       *
 * modify, and relicense the code.  RFIDler will always be available Open  *
 * Source, but this is important because the inability to relicense code   *
 * has caused devastating problems for other Free Software projects (such  *
 * as KDE and NASM).  We also occasionally relicense the code to third     *
 * parties as discussed above. If you wish to specify special license      *
 * conditions of your contributions, just say so when you send them.       *
 *                                                                         *
 * This program is distributed in the hope that it will be useful, but     *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the RFIDler   *
 * license file for more details (it's in a COPYING file included with     *
 * RFIDler, and also available from                                        *
 *   https://github.com/ApertureLabsLtd/RFIDler/COPYING                    *
 *                                                                         *
 ***************************************************************************/

// Author: unknown.
// Modifications for RFIDler: Tony Naggs <tony.naggs@gmail.com>, Adam Laurie <adam@aperturelabs.com>

// uncomment this to build file as a standalone crypto test program
// #define UNIT_TEST
// also uncomment to include verbose debug prints
// #define TEST_DEBUG

//#include <GenericTypeDefs.h>
#include "HardwareProfile.h"
#include "rfidler.h"
#include "hitagcrypto.h"
#include "util.h"

#ifdef UNIT_TEST
#include <stdio.h>
#endif

#if defined(UNIT_TEST) && defined(TEST_DEBUG)
// Note that printf format %I64x prints 64 bit ints in MS Visual C/C++.
// This may need changing for other compilers/platforms.
#define DEBUG_PRINTF(...) printf(__VA_ARGS__)
#else
#define DEBUG_PRINTF(...)
#endif


/* Brief info about NXP Hitag 1, Hitag 2, Hitag S and Hitag u (mu)

   Hitag, like Mifare, was created by a company called Mikron for micropayment
   applications. Mikron was subsequently acquired by Philips Semiconductors.
   Philips Semiconductors then became NXP.

   + Modulation read/write device -> transponder: 100 % ASK and binary pulse
     length coding
   + Modulation transponder -> read/write device: Strong ASK modulation,
     selectable Manchester or Biphase coding
   + Hitag S, Hitag u; anti-collision procedure
   + Fast anti-collision protocol
   + Hitag u; optional Cyclic Redundancy Check (CRC)
   + Reader Talks First mode
   + Hitag 2 & later; Transponder Talks First (TTF) mode
   + Temporary switch from Transponder Talks First into Reader Talks First
     (RTF) Mode
   + Data rate read/write device to transponder: 5.2 kbit/s
   + Data rates transponder to read/write device: 2 kbit/s, 4 kbit/s, 8 kbit/s
   + 32-bit password feature
   + Hitag 2, S = 32-bit Unique Identifier
   + Hitag u = 48-bit Unique Identifier
   + Selectable password modes for reader / tag mutual authentication
     (Hitag 1 has 2 pairs of keys, later versions have 1 pair)
   + Hitag 2 & Hitag S; Selectable encrypted mode, 48 bit key

   Known tag types:

   HITAG 1            2048 bits total memory

   HITAG 2            256 Bit total memory        Read/Write
                      8 pages of 32 bits, inc UID (32),
		      secret key (64), password (24), config (8)

   HITAG S 32         32 bits Unique Identifier   Read Only
   HITAG S 256        256 bits total memory       Read/Write
   HITAG S 2048       2048 bits total memory      Read/Write

   HITAG u RO64       64 bits total memory        Read Only
   HITAG u            128 bits total memory       Read/Write
   HITAG u Advanced   512 bits total memory       Read/Write
   HITAG u Advanced+  1760 bits total memory      Read/Write

   Default 48-bit key for Hitag 2, S encryption:
       "MIKRON"       =  O  N  M  I  K  R
       Key            = 4F 4E 4D 49 4B 52

*/


// We want the crypto functions to be as fast as possible, so optimize!
// The best compiler optimization in Microchip's free XC32 edition is -O1
#pragma GCC optimize("O1")

// private, nonlinear function to generate 1 crypto bit
static uint32_t hitag2_crypt(uint64_t x);


// macros to pick out 4 bits in various patterns of 1s & 2s & make a new number
#define pickbits2_2(S, A, B)       ( ((S >> A) & 3) | ((S >> (B - 2)) & 0xC) )
#define pickbits1x4(S, A, B, C, D) ( ((S >> A) & 1) | ((S >> (B - 1)) & 2) | \
                                   ((S >> (C - 2)) & 4) | ((S >> (D - 3)) & 8) )
#define pickbits1_1_2(S, A, B, C)  ( ((S >> A) & 1) | ((S >> (B - 1)) & 2) | \
                                   ((S >> (C - 2)) & 0xC) )
#define pickbits2_1_1(S, A, B, C)  ( ((S >> A) & 3) | ((S >> (B - 2)) & 4) | \
                                   ((S >> (C - 3)) & 8) )
#define pickbits1_2_1(S, A, B, C)  ( ((S >> A) & 1) | ((S >> (B - 1)) & 6) | \
                                   ((S >> (C - 3)) & 8) )


static uint32_t hitag2_crypt(uint64_t s)
{
    const uint32_t ht2_function4a = 0x2C79;	// 0010 1100 0111 1001
    const uint32_t ht2_function4b = 0x6671;	// 0110 0110 0111 0001
    const uint32_t ht2_function5c = 0x7907287B;	// 0111 1001 0000 0111 0010 1000 0111 1011
    uint32_t bitindex;

    bitindex =  ((ht2_function4a >> pickbits2_2 (s, 1, 4)) & 1);
    bitindex |= ((ht2_function4b >> pickbits1_1_2 (s, 7, 11, 13)) & 1) << 1;
    bitindex |= ((ht2_function4b >> pickbits1x4 (s, 16, 20, 22, 25)) & 1) << 2;
    bitindex |= ((ht2_function4b >> pickbits2_1_1 (s, 27, 30, 32)) & 1) << 3;
    bitindex |= ((ht2_function4a >> pickbits1_2_1(s, 33, 42, 45)) & 1) << 4;

    DEBUG_PRINTF("hitag2_crypt bitindex = %02x\n", bitindex);
    return (ht2_function5c >> bitindex) & 1;
}

/*
 * Parameters:
 * Hitag_State* pstate - output, internal state after initialisation
 * uint64_t sharedkey  - 48 bit key shared between reader & tag
 * uint32_t serialnum  - 32 bit tag serial number
 * uint32_t initvector - 32 bit random IV from reader, part of tag authentication
 */
void hitag2_init(Hitag_State* pstate, uint64_t sharedkey, uint32_t serialnum, uint32_t initvector)
{
    uint32_t j;
    // init state, from serial number and lowest 16 bits of shared key
    uint64_t state = ((sharedkey & 0xFFFF) << 32) + serialnum;

    // mix the initialisation vector and highest 32 bits of the shared key
    initvector ^= (uint32_t) (sharedkey >> 16);

    for (j = 2; j-- ;) {
        // move 16 bits from (IV xor Shared Key) to top of uint64_t state
        // these will be XORed in turn with output of the crypto function
        state ^= (uint64_t) initvector << 48;
        initvector >>= 16;

        // unrolled loop, do 16 times
        // shift register, then calc new bit
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;

        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
        state >>= 1;
        state ^= (uint64_t) hitag2_crypt(state) << 47;
    }

    DEBUG_PRINTF("hitag2_init result = %012I64x\n", state);
    pstate->shiftreg = state;
    pstate->lfsr = state ^ (state >>  2) ^ (state >>  3) ^ (state >>  6)
              ^ (state >>  7) ^ (state >>  8) ^ (state >> 16) ^ (state >> 22)
              ^ (state >> 23) ^ (state >> 26) ^ (state >> 30) ^ (state >> 41)
              ^ (state >> 42) ^ (state >> 43) ^ (state >> 46) ^ (state >> 47);
}


// return up to 32 crypto bits
uint32_t hitag2_nstep(Hitag_State* pstate, uint32_t steps)
{
    uint64_t state = pstate->shiftreg;
    uint32_t result = 0;
    uint64_t lfsr = pstate->lfsr;

    if (steps > 32)
        steps = 32;

    while (steps--) {
        // update shift registers
        if (lfsr & 1) {
            state |= 0x1000000000000; // new bit to shift in
            lfsr ^= 0x16701064400e6; // number comes from the LFSR taps
        }
        state >>= 1;
        lfsr >>= 1;

        // accumulate next bit of crypto
        result |= hitag2_crypt(state) << steps;
    }

    DEBUG_PRINTF("hitag2_nstep state = %012I64x, result %02x\n", state, result);
    pstate->shiftreg = state;
    pstate->lfsr = lfsr;
    return result;
}

// end of crypto core, revert to default optimization level
#pragma GCC reset_options


/* Test code

   Test data and below information about it comes from
     http://www.mikrocontroller.net/attachment/102194/hitag2.c
     Written by "I.C. Wiener 2006-2007"

   "MIKRON"		=  O  N  M  I  K  R
    Key			= 4F 4E 4D 49 4B 52		- Secret 48-bit key
    Serial		= 49 43 57 69			- Serial number of the tag, transmitted in clear
    Random		= 65 6E 45 72			- Random IV, transmitted in clear
    ~28~DC~80~31	= D7 23 7F CE			- Authenticator value = inverted first 4 bytes of the keystream

   The code below must print out "D7 23 7F CE 8C D0 37 A9 57 49 C1 E6 48 00 8A B6".
   The inverse of the first 4 bytes is sent to the tag to authenticate.
   The rest is encrypted by XORing it with the subsequent keystream.

*/



unsigned int hitag2_benchtest_gen32()
{
    const uint64_t key = 0x4ad292b272f2;
    const uint32_t serial = 0x96eac292;
    const uint32_t initvec = 0x4ea276a6;
    Hitag_State state;

    // init crypto
    hitag2_init(&state, key, serial, initvec);

    // benchmark: generation of 32 bit stream (excludes initialisation)
    GetTimer_us(RESET);

    (void) hitag2_nstep(&state, 32);

    return GetTimer_us(NO_RESET);
}


unsigned int hitag2_benchtest(uint32_t count)
{
    const uint64_t key = 0x4ad292b272f2;
    const uint32_t serial = 0x96eac292;
    const uint32_t initvec = 0x4ea276a6;
    Hitag_State state;
    uint32_t i;

    // start timer
    GetTimer_us(RESET);

    // benchmark: initialise crypto & generate 32 bit authentication
    // adding i stops gcc optimizer moving init function call out of loop
    for (i = 0; i < count; i++) {
        hitag2_init(&state, key, serial, initvec + i);
        (void) hitag2_nstep(&state, 32);
    }

    return GetTimer_us(NO_RESET);
}


unsigned hitag2_verifytest()
{
    uint8_t expected[16] = { 0xD7, 0x23, 0x7F, 0xCE, 0x8C, 0xD0, 0x37, 0xA9, 0x57, 0x49, 0xC1, 0xE6, 0x48, 0x00, 0x8A, 0xB6 };
    // key = 0x4ad292b272f2  after each byte has its bit order reversed
    // serial = 0x96eac292    ditto
    // initvec = 0x4ea276a6   ditto
    const uint64_t key = rev64 (0x524B494D4E4FUL);
    const uint32_t serial = rev32 (0x69574349);
    const uint32_t initvec = rev32 (0x72456E65);
    
    uint32_t i;
    Hitag_State state;

    // initialise
    hitag2_init(&state, key, serial, initvec);

    for (i = 0; i < 16; i++) {
        // get 8 bits of keystream
        uint8_t x = (uint8_t) hitag2_nstep(&state, 8);
        uint8_t y = expected[i];

        DEBUG_PRINTF ("%02X (%02X) \n", x, y);
        if (x != y)
            return 0;
    }

    return 1;
}


#ifdef UNIT_TEST

int main(int argc, char* argv[])
{
    unsigned pass = hitag2_verifytest();

    printf ("Crypto Verify test = %s\n\n", pass ? "PASS" : "FAIL");

    if (pass) {
        hitag2_benchtest(10000);
    }

    return 0;
}

#endif // UNIT_TEST
