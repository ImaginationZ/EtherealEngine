#pragma once

#include "core/common/basetypes.hpp"
#include "inspector.h"

struct inspector_irect : public inspector
{
	REFLECTABLEV(inspector_irect, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_irect, irect)

struct inspector_urect : public inspector
{
	REFLECTABLEV(inspector_urect, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_urect, urect)

struct inspector_frect : public inspector
{
	REFLECTABLEV(inspector_frect, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_frect, frect)

struct inspector_ipoint : public inspector
{
	REFLECTABLEV(inspector_ipoint, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_ipoint, ipoint)

struct inspector_upoint : public inspector
{
	REFLECTABLEV(inspector_upoint, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_upoint, upoint)

struct inspector_fpoint : public inspector
{
	REFLECTABLEV(inspector_fpoint, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_fpoint, fpoint)

struct inspector_isize : public inspector
{
	REFLECTABLEV(inspector_isize, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_isize, isize)

struct inspector_usize : public inspector
{
	REFLECTABLEV(inspector_usize, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_usize, usize)

struct inspector_fsize : public inspector
{
	REFLECTABLEV(inspector_fsize, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_fsize, fsize)

struct inspector_irange : public inspector
{
	REFLECTABLEV(inspector_irange, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_irange, irange)

struct inspector_urange : public inspector
{
	REFLECTABLEV(inspector_urange, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_urange, urange)

struct inspector_frange : public inspector
{
	REFLECTABLEV(inspector_frange, inspector)
	bool inspect(rttr::variant& var, bool readOnly,
				 std::function<rttr::variant(const rttr::variant&)> get_metadata);
};
INSPECTOR_REFLECT(inspector_frange, frange)
