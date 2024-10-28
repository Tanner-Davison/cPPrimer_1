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

**Float vs Double:**

float
- 4 bytes (32 bits)
- ~7 decimal digits precision
- suffix: f (3.14f)

double
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

## To calculate a mortgage payment, what types would you use for the rate, principal and payment? Explain why you selected each type?

### Rate
*usage type:* `double` 
*why:* 
- Rates need precise decimal calculations
- Rates are typically small numbers (like 4.25%)
- Don't need unsigned as rates can be negative in some financial calculations
- Double is preferred over float for financial calculations

### Principal
*usage type:* `double` 
*why:*
- Large numbers but rarely beyond double's precision
- Standard mortgage amounts (even in millions) fit well within double's range
- Long double is rarely needed and can cause performance issues
- Unsigned isn't needed as debt amounts could be negative in some calculations

### Payment
*usage type:* `double` 
*why:*
- Need precision for exact payment calculations
- Payments involve multiplication/division of rate and principal
- Keeping all related calculations in same type (double) reduces conversion errors
- Double is the standard for financial calculations

## "When in doubt, double it out" because:
1. It's C++'s default floating-point type
2. Good balance of precision and performance
3. Most modern hardware optimizes for double
4. Enough precision (15-17 digits) for most uses
5. Rarely need the extra precision of long double
6. More precise than float without major performance cost

Exception Rules (when not to double):
1. Graphics programming (use float)
2. Memory is super critical (use float)
3. API specifically asks for float
4. Embedded systems with limited resources