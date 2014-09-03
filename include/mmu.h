#include "types.h"

// Returns a reference to an array of bytes
u8** mmu_init(u8[] bytes);

// Read data from memory
u16 mmu_r16(u8[] *memory, u16 location);
u8 mmu_r8(u8[] *memory, u16 location);

// Write data to memory
void mmu_w16(u8[] *memory, u16 location, u16 word);
void mmu_w8(u8[] *memory, u16 location, u8 byte);
