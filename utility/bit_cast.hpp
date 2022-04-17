#include <cstring>

template<typename To, typename From>
To bit_cast(const From& from) noexcept {
	To to;
	std::memcpy(&to, &from, sizeof(To));
	return to;
}
