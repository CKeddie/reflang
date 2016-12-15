// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <algorithm>
#include <cassert>
#include <stdexcept>
#include <string>

#include "lib/reflang.hpp"

namespace reflang
{

/*
Class 'MyNamespace::MyClass' with:
*/


template <>
struct Enum<MyNamespace::MyClass::Cpp11Enum> : public IEnum
{
	using EnumType = MyNamespace::MyClass::Cpp11Enum;

	struct ConstIterator
	{
		EnumType operator*() { return value_; }

		ConstIterator& operator++()
		{
			switch (value_)
			{
			case EnumType::Value1:
				value_ = EnumType::Value2;
				break;
			case EnumType::Value2:
				value_ = EnumType::Value3;
				break;
			case EnumType::Value3:
				value_ = EnumType::Value5;
				break;
			case EnumType::Value5:
				value_ = EnumType::Value6;
				break;
			case EnumType::Value6:
				last_ = true;
				break;
			}
			return *this;
		}

		ConstIterator operator++(int)
		{
			auto tmp = *this;
			operator++();
			return tmp;
		}

		ConstIterator& operator--()
		{
			if (last_)
			{
				last_ = false;
				value_ = EnumType::Value6;
			}
			else
			{
				switch (value_)
				{
				case EnumType::Value1:
					assert(false);
					break;
				case EnumType::Value2:
					value_ = EnumType::Value1;
					break;
				case EnumType::Value3:
					value_ = EnumType::Value2;
					break;
				case EnumType::Value5:
					value_ = EnumType::Value3;
					break;
				case EnumType::Value6:
					value_ = EnumType::Value5;
					break;
				}
			}
			return *this;
		}

		ConstIterator operator--(int)
		{
			auto tmp = *this;
			operator--();
			return tmp;
		}

		bool operator==(const ConstIterator& o) const
		{
			return ((last_ && o.last_) || (value_ == o.value_));
		}

		bool operator!=(const ConstIterator& o) const
		{
			return !(*this == o);
		}

		EnumType value_;
		bool last_ = true;
	};

	struct IteratorContainer
	{
		ConstIterator begin() const
		{
			ConstIterator it;
			it.last_ = false;
			it.value_ = EnumType::Value1;
			return it;
		}

		ConstIterator end() const
		{
			return ConstIterator();
		}
	};

	static IteratorContainer Iterate()
	{
		return IteratorContainer();
	}

	static bool TryTranslate(const std::string& s, EnumType& value)
	{
		if (s == "Value1")
		{
			value = EnumType::Value1;
			return true;
		}
		else if (s == "Value2")
		{
			value = EnumType::Value2;
			return true;
		}
		else if (s == "Value3")
		{
			value = EnumType::Value3;
			return true;
		}
		else if (s == "Value4")
		{
			value = EnumType::Value4;
			return true;
		}
		else if (s == "Value5")
		{
			value = EnumType::Value5;
			return true;
		}
		else if (s == "Value6")
		{
			value = EnumType::Value6;
			return true;
		}
		else
		{
			return false;
		}
	}

	static std::string Translate(EnumType e)
	{
		switch (e)
		{
			case EnumType::Value1:
				return "Value1";
				break;
			case EnumType::Value2:
				return "Value2";
				break;
			case EnumType::Value3:
				return "Value3";
				break;
			case EnumType::Value5:
				return "Value5";
				break;
			case EnumType::Value6:
				return "Value6";
				break;
		}
		return std::string();
	}
	
	const std::string& GetName() const override
	{
		static const std::string name = "MyNamespace::MyClass::Cpp11Enum";
		return name;
	}

	std::vector<std::string> GetStringValues() const override
	{
		std::vector<std::string> values;
		values.reserve(5);
		for (const auto& value : this->Iterate())
		{
			values.push_back(this->Translate(value));
		}
		return values;
	}

	std::vector<int> GetIntValues() const override
	{
		std::vector<int> values;
		values.reserve(5);
		for (const auto& value : this->Iterate())
		{
			values.push_back(static_cast<int>(value));
		}
		return values;
	}

	bool TryTranslate(const std::string& value, int& out) override
	{
		EnumType tmp;
		bool result = this->TryTranslate(value, tmp);
		if (result)
		{
			out = static_cast<int>(tmp);
		}
		return result;
	}

	bool TryTranslate(int value, std::string& out) override
	{
		switch (static_cast<EnumType>(value))
		{
		case EnumType::Value1:
		case EnumType::Value2:
		case EnumType::Value3:
		case EnumType::Value5:
		case EnumType::Value6:
			out = Translate(static_cast<EnumType>(value));
			return true;
		default:
			return false;
		}
	}
};


}  // namespace reflang
