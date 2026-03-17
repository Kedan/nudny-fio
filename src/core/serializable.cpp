#include <nudny/core/serializable.hpp>

namespace nudny::core::fio {
	nlohmann::json& Serializable::getSerialized() {
		return m_jsonData;
	};
	
	const nlohmann::json& Serializable::getSerialized() const {
		return m_jsonData;
	};
} // namespace nd::io
