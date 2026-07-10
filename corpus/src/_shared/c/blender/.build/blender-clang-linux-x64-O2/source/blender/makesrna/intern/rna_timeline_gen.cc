
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <limits>
#include <string.h>

#include <stddef.h>

#include <algorithm>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "DNA_node_types.h"
#include "BLI_fileops.hh"

#include "BLI_listbase.hh"

#include "BLI_path_utils.hh"

#include "BLI_rect.hh"

#include "BLI_string.hh"

#include "BLI_string_utf8.hh"

#include "BLI_utildefines.hh"

#include "BKE_context.hh"
#include "BKE_lib_id.hh"
#include "BKE_main.hh"
#include "BKE_report.hh"
#include "RNA_define.hh"
#include "RNA_types.hh"
#include "rna_internal.hh"

#include "RNA_prototypes.hh"

#include "rna_prototypes_gen.hh"

#include "rna_timeline.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_TimelineMarker_rna_properties;
extern PropertyRNA &rna_TimelineMarker_rna_type;
extern PropertyRNA &rna_TimelineMarker_name;
extern PropertyRNA &rna_TimelineMarker_frame;
extern PropertyRNA &rna_TimelineMarker_select;
extern PropertyRNA &rna_TimelineMarker_camera;

extern FunctionRNA *rna_TimelineMarker_bl_system_properties_get_func;
extern PropertyRNA &rna_TimelineMarker_bl_system_properties_get_do_create;
extern PropertyRNA &rna_TimelineMarker_bl_system_properties_get_system_properties;


static PointerRNA TimelineMarker_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void TimelineMarker_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TimelineMarker_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = TimelineMarker_rna_properties_get(iter);
    }
}

void TimelineMarker_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TimelineMarker_rna_properties_get(iter);
    }
}

void TimelineMarker_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool TimelineMarker_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA TimelineMarker_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void TimelineMarker_name_get(PointerRNA *ptr, char *value)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int TimelineMarker_name_length(PointerRNA *ptr)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    return strlen(data->name);
}

void TimelineMarker_name_set(PointerRNA *ptr, const char *value)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

int TimelineMarker_frame_get(PointerRNA *ptr)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    return (int)(data->frame);
}

void TimelineMarker_frame_set(PointerRNA *ptr, int value)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    data->frame = (std::remove_reference_t<decltype(data->frame)>)value;
}

bool TimelineMarker_select_get(PointerRNA *ptr)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void TimelineMarker_select_set(PointerRNA *ptr, bool value)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

PointerRNA TimelineMarker_camera_get(PointerRNA *ptr)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->camera);
}

void TimelineMarker_camera_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    TimeMarker *data = (TimeMarker *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->camera = value.data;
}

IDPropertyGroup *TimelineMarker_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void TimelineMarker_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool do_create;
	IDPropertyGroup *system_properties;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	do_create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	system_properties = rna_struct_system_properties_get_func(_self, do_create);
	*((IDPropertyGroup **)_retdata) = system_properties;
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);

/* Marker */
static CollectionPropertyRNA rna_TimelineMarker_rna_properties_;
PropertyRNA &rna_TimelineMarker_rna_properties = reinterpret_cast<PropertyRNA &>(rna_TimelineMarker_rna_properties_);

static PointerPropertyRNA rna_TimelineMarker_rna_type_;
PropertyRNA &rna_TimelineMarker_rna_type = reinterpret_cast<PropertyRNA &>(rna_TimelineMarker_rna_type_);

static StringPropertyRNA rna_TimelineMarker_name_;
PropertyRNA &rna_TimelineMarker_name = reinterpret_cast<PropertyRNA &>(rna_TimelineMarker_name_);

static IntPropertyRNA rna_TimelineMarker_frame_;
PropertyRNA &rna_TimelineMarker_frame = reinterpret_cast<PropertyRNA &>(rna_TimelineMarker_frame_);

static BoolPropertyRNA rna_TimelineMarker_select_;
PropertyRNA &rna_TimelineMarker_select = reinterpret_cast<PropertyRNA &>(rna_TimelineMarker_select_);

static PointerPropertyRNA rna_TimelineMarker_camera_;
PropertyRNA &rna_TimelineMarker_camera = reinterpret_cast<PropertyRNA &>(rna_TimelineMarker_camera_);

static BoolPropertyRNA rna_TimelineMarker_bl_system_properties_get_do_create_;
PropertyRNA &rna_TimelineMarker_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_TimelineMarker_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_TimelineMarker_bl_system_properties_get_system_properties_;
PropertyRNA &rna_TimelineMarker_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_TimelineMarker_bl_system_properties_get_system_properties_);

FunctionRNA *rna_TimelineMarker_bl_system_properties_get_func;
StructRNA *RNA_TimelineMarker;
void register_struct_TimelineMarker(BlenderRNA &brna)
{
	rna_TimelineMarker_rna_properties_ = {
		{&rna_TimelineMarker_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TimelineMarker_rna_properties_begin, TimelineMarker_rna_properties_next, TimelineMarker_rna_properties_end, TimelineMarker_rna_properties_get, nullptr, nullptr, TimelineMarker_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_TimelineMarker_rna_type_ = {
		{&rna_TimelineMarker_name, 	&rna_TimelineMarker_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TimelineMarker_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_TimelineMarker_name_ = {
		{&rna_TimelineMarker_frame, 	&rna_TimelineMarker_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_TimelineMarker_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TimelineMarker_name_get, TimelineMarker_name_length, TimelineMarker_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_TimelineMarker_frame_ = {
		{&rna_TimelineMarker_select, 	&rna_TimelineMarker_name,
		-1, "frame", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frame",
		"The frame on which the timeline marker appears",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_TimelineMarker_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(TimeMarker, frame), RawPropertyType(0), nullptr},
		TimelineMarker_frame_get, TimelineMarker_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_TimelineMarker_select_ = {
		{&rna_TimelineMarker_camera, 	&rna_TimelineMarker_frame,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Marker selection state",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_TimelineMarker_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TimelineMarker_select_get, TimelineMarker_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_TimelineMarker_camera_ = {
		{nullptr, 	&rna_TimelineMarker_select,
		-1, "camera", 9437313, 1, 0, 0, 0, PropertyPathTemplateType(0), "Camera",
		"Camera that becomes active on this frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_TimelineMarker_camera_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TimelineMarker_camera_get, TimelineMarker_camera_set, nullptr, nullptr,RNA_Object
	};

	StructRNA *srna = RNA_TimelineMarker;
	srna->cont.properties = {&rna_TimelineMarker_rna_properties, &rna_TimelineMarker_camera};
	srna->identifier = "TimelineMarker";
	srna->flag = 516;
	srna->name = "Marker";
	srna->description = "Marker for noting points in the timeline";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_TimelineMarker_name;
	srna->iteratorproperty = &rna_TimelineMarker_rna_properties;
	srna->system_idproperties = rna_TimelineMarker_idprops;
	{
	rna_TimelineMarker_bl_system_properties_get_do_create_ = {
		{&rna_TimelineMarker_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_TimelineMarker_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_TimelineMarker_bl_system_properties_get_do_create,
		-1, "system_properties", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The system properties root container, or None if there are no system properties stored in this data yet, and its creation was not requested",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_TimelineMarker_bl_system_properties_get_do_create, &rna_TimelineMarker_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = TimelineMarker_bl_system_properties_get_call;
		func->c_ret = &rna_TimelineMarker_bl_system_properties_get_system_properties;
		rna_TimelineMarker_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
