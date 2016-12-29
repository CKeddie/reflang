// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#ifndef REFLANG_METADATA_FIELDS_GEN_HPP
#define REFLANG_METADATA_FIELDS_GEN_HPP

#include <string>

#include "lib/reflang.hpp"
#include "fields.src.hpp"

namespace reflang
{


template <>
class Class<MyClass> : public IClass
{
public:
	static const constexpr int FieldCount = 14;
	static const constexpr int StaticFieldCount = 0;
	static const constexpr int MethodCount = 0;
	static const constexpr int StaticMethodCount = 0;

	int GetFieldCount() const override;
	Reference GetField(const Reference& o, const std::string& name) const override;

	int GetStaticFieldCount() const override;
	Reference GetStaticField(const std::string& name) const override;

	int GetMethodCount() const override;
	std::vector<std::unique_ptr<IMethod>> GetMethod(const std::string& name) const override;

	int GetStaticMethodCount() const override;

	const std::string& GetName() const override;

	// Calls T::operator() on each field of 'MyClass'.
	// Works well with C++14 generic lambdas.
	template <typename T>
	static void IterateFields(const MyClass& c, T t);

	template <typename T>
	static void IterateFields(MyClass& c, T t);

	template <typename T>
	static void IterateStaticFields(T t);
};

template <typename T>
void Class<MyClass>::IterateFields(const MyClass& c, T t)
{
	t(c.field);
	t(c.const_field);
	t(c.pointer_field);
	t(c.const_pointer_field);
	t(c.const_pointer_const_field);
	t(c.ref_field);
	t(c.const_ref_field);
	t(c.complex);
	t(c.const_complex);
	t(c.pointer_complex);
	t(c.const_pointer_complex);
	t(c.const_pointer_const_complex);
	t(c.ref_complex);
	t(c.const_ref_complex);
}

template <typename T>
void Class<MyClass>::IterateFields(MyClass& c, T t)
{
	t(c.field);
	t(c.const_field);
	t(c.pointer_field);
	t(c.const_pointer_field);
	t(c.const_pointer_const_field);
	t(c.ref_field);
	t(c.const_ref_field);
	t(c.complex);
	t(c.const_complex);
	t(c.pointer_complex);
	t(c.const_pointer_complex);
	t(c.const_pointer_const_complex);
	t(c.ref_complex);
	t(c.const_ref_complex);
}

template <typename T>
void Class<MyClass>::IterateStaticFields(T t)
{
}




}  // namespace reflang

#endif //REFLANG_METADATA_FIELDS_GEN_HPP
