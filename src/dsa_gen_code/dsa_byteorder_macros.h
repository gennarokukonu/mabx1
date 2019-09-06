
#ifndef DSA_BYTEORDER_MACROS_H
#define DSA_BYTEORDER_MACROS_H

#define DSA_SWAP_16_RAW(value) ( (value & 0xFF00) >> 8 | (value & 0x00FF) << 8 )
#define DSA_SWAP_32_RAW(value) ( (value & 0xFF000000) >> 24 | (value & 0x00FF0000) >> 8 | (value & 0x0000FF00) << 8 | (value & 0x000000FF) << 24 )

#define DSA_SWAP_16(value) DSA_SWAP_16_RAW( ((uint16_T)(value)) )
#define DSA_SWAP_32(value) DSA_SWAP_32_RAW( ((uint32_T)(value)) )

#define DSA_COPY_16(destPtr, srcPtr) ((uint16_T*)(destPtr))[0] = ((uint16_T*)(srcPtr))[0];
#define DSA_COPY_32(destPtr, srcPtr) ((uint32_T*)(destPtr))[0] = ((uint32_T*)(srcPtr))[0];
#define DSA_COPY_64(destPtr, srcPtr) ((uint64_T*)(destPtr))[0] = ((uint64_T*)(srcPtr))[0];

#define DSA_COPY_AND_SWAP_16(destPtr, srcPtr) ((uint16_T*)(destPtr))[0] = DSA_SWAP_16( ((uint16_T*)(srcPtr))[0] );
#define DSA_COPY_AND_SWAP_32(destPtr, srcPtr) ((uint32_T*)(destPtr))[0] = DSA_SWAP_32( ((uint32_T*)(srcPtr))[0] );
#define DSA_COPY_AND_SWAP_64(destPtr, srcPtr) ((uint32_T*)(destPtr))[1] = DSA_SWAP_32( ((uint32_T*)(srcPtr))[0] ); ((uint32_T*)(destPtr))[0] = DSA_SWAP_32( ((uint32_T*)(srcPtr))[1] );


#ifdef PLATFORM_IS_BIG_ENDIAN

	#define DSA_COPY_TOFROM_LE_16(destPtr, srcPtr) DSA_COPY_AND_SWAP_16(destPtr, srcPtr)
	#define DSA_COPY_TOFROM_LE_32(destPtr, srcPtr) DSA_COPY_AND_SWAP_32(destPtr, srcPtr)
	#define DSA_COPY_TOFROM_LE_64(destPtr, srcPtr) DSA_COPY_AND_SWAP_64(destPtr, srcPtr)

	#define DSA_COPY_TOFROM_BE_16(destPtr, srcPtr) DSA_COPY_16(destPtr, srcPtr)
	#define DSA_COPY_TOFROM_BE_32(destPtr, srcPtr) DSA_COPY_32(destPtr, srcPtr)
	#define DSA_COPY_TOFROM_BE_64(destPtr, srcPtr) DSA_COPY_64(destPtr, srcPtr)

#else

	#define DSA_COPY_TOFROM_BE_16(destPtr, srcPtr) DSA_COPY_AND_SWAP_16(destPtr, srcPtr)
	#define DSA_COPY_TOFROM_BE_32(destPtr, srcPtr) DSA_COPY_AND_SWAP_32(destPtr, srcPtr)
	#define DSA_COPY_TOFROM_BE_64(destPtr, srcPtr) DSA_COPY_AND_SWAP_64(destPtr, srcPtr)

	#define DSA_COPY_TOFROM_LE_16(destPtr, srcPtr) DSA_COPY_16(destPtr, srcPtr)
	#define DSA_COPY_TOFROM_LE_32(destPtr, srcPtr) DSA_COPY_32(destPtr, srcPtr)
	#define DSA_COPY_TOFROM_LE_64(destPtr, srcPtr) DSA_COPY_64(destPtr, srcPtr)

#endif

#endif



