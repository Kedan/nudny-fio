#include <nudny/fio/serializable.hpp>

namespace nudny::fio {
	nlohmann::json& Serializable::getSerialized() {
		return m_jsonData;
	};
	
	const nlohmann::json& Serializable::getSerialized() const {
		return m_jsonData;
	};
} // namespace nd::io
