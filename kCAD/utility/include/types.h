#ifndef FCAD_TYPES_H
#define FCAD_TYPES_H

#include <cstdint>
#include <type_traits>

namespace utility::types
{
    using u8 = uint8_t;
    using u16 = uint16_t;
    using u32 = uint32_t;
    using u64 = uint64_t;

    using i8 = int8_t;
    using i16 = int16_t;
    using i32 = int32_t;
    using i64 = int64_t;

    using f32 = float;
    using f64 = double;
    using f128 = long double;
}

#endif //FCAD_TYPES_H