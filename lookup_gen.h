#include <cmath>
#include <array>
template <typename T>
constexpr T look_up_table_elem(int i)
{
    return {};
}
template <>
constexpr uint16_t look_up_table_elem(int i)
{
    return round(cos(static_cast<long double>(i) / 2048 * 3.14159 / 4) * 32767);
}
template <typename T, int... N>
struct lookup_table_expand
{
};
template <typename T, int... N>
struct lookup_table_expand<T, 1, N...>
{
    static constexpr std::array<T, sizeof...(N) + 1> values =
        {{look_up_table_elem<T>(0), N...}};
};
template <typename T, int L, int... N>
struct lookup_table_expand<T, L, N...> : lookup_table_expand<T, L - 1, look_up_table_elem<T>(L - 1), N...>
{
};
template <typename T, int... N>
constexpr std::array<T, sizeof...(N) + 1> lookup_table_expand<T, 1, N...>::values;
