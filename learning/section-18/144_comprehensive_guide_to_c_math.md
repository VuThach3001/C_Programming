# Section 18: Exploring the Comprehensive Standard C library

## Topic: Comprehensive Guide to C's math.h

## Date: 13/10/2025

---

### Cue Column (Questions, Keywords, or Prompts)

- [Insert question or keyword]
- [Insert question or keyword]
- [Insert question or keyword]

---

### Notes Section (Main Notes)

**1. Math functions**
- To use common math functions you must include the `<math.h>` header file and link to the math library

- **`double acosh (x)`**: returns the hyperbolic arccosine of `x, x ≥ 1`

- **`double asin (x)`**: returns the arcsine of `x` as an angle expressed in radians in the range `[−π/2, π/2]`. `x` is in the range `[−1,1]`

- **`double atan (x)`**: returns the arctangent of x as an angle expressed in radians in the range `[−π/2, π/2]`

- **`double ceil (x)`**: returns the smallest integer value greater than or equal to `x`. Note that the value is returned as a `double`

- **`double cos (r)`**: returns the cosine of `r`

- **`double floor (x)`**: returns the largest integer value less than or equal to `x`. Note that the value is returned as a `double`

- **`double log (x)`**: returns the natural logarithm of `x, x ≥ 0`

- **`double nan (s)`**: returns a `NaN`, if possible, according to the content specified by the string pointed to by `s`

- **`double pow (x, y)`**: returns `x y`. If `x` is less than `zero`, `y` must be an `integer`. If `x` is equal to `zero`, `y` must be greater than `zero`

- **`double remainder (x, y)`**: returns the remainder of `x` divided by `y`

- **`double round (x)`**: returns the value of `x` rounded to the nearest integer in floating-point format. Halfway values are always rounded away from `zero` (so 0.5 **always rounds** to 1.0)

- **`double sin (r)`**: returns the sine of `r`

- **`double sqrt (x)`**: returns the square root of x, x ≥ 0

- **`double tan (r)`**: returns the tangent of `r`

---

### Summary Section (Summary of Notes)

[Insert a brief summary of the key ideas and takeaways]
