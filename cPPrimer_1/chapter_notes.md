## What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between float and a double?

short = 2 bytes (16 bits) 
int = 4 bytes (32 bits typically)
long = 4-8 bytes (platform dependent)
long long = 8 bytes (64 bits)

**Signed vs Unsigned**:
- Signed: can hold positive and negative numbers
- Unsigned: only positive numbers and zero
Example:
8-bit signed: -128 to 127
8-bit unsigned: 0 to 255

Float vs Double:
float:
- 4 bytes (32 bits)
- ~7 decimal digits precision
- suffix: f (3.14f)

double:
- 8 bytes (64 bits)
- ~15-17 decimal digits precision
- no suffix needed (3.14)

Use double when:
- Default choice for floating point
- Need higher precision (15-17 digits)
- Need larger range
- Working with general calculations

Use float when:
- Memory is critical
- Working with graphics/3D
- Precision of 6-7 digits is enough
- API specifically requires float
