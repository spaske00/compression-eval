
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

#include "rna_curveprofile.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_CurveProfilePoint_rna_properties;
extern PropertyRNA &rna_CurveProfilePoint_rna_type;
extern PropertyRNA &rna_CurveProfilePoint_location;
extern PropertyRNA &rna_CurveProfilePoint_handle_type_1;
extern PropertyRNA &rna_CurveProfilePoint_handle_type_2;
extern PropertyRNA &rna_CurveProfilePoint_select;


extern PropertyRNA &rna_CurveProfile_rna_properties;
extern PropertyRNA &rna_CurveProfile_rna_type;
extern PropertyRNA &rna_CurveProfile_preset;
extern PropertyRNA &rna_CurveProfile_use_clip;
extern PropertyRNA &rna_CurveProfile_use_sample_straight_edges;
extern PropertyRNA &rna_CurveProfile_use_sample_even_lengths;
extern PropertyRNA &rna_CurveProfile_points;
extern PropertyRNA &rna_CurveProfile_segments;

extern FunctionRNA *rna_CurveProfile_update_func;
extern FunctionRNA *rna_CurveProfile_reset_view_func;
extern FunctionRNA *rna_CurveProfile_initialize_func;
extern PropertyRNA &rna_CurveProfile_initialize_totsegments;

extern FunctionRNA *rna_CurveProfile_evaluate_func;
extern PropertyRNA &rna_CurveProfile_evaluate_length_portion;
extern PropertyRNA &rna_CurveProfile_evaluate_location;



extern PropertyRNA &rna_CurveProfilePoints_rna_properties;
extern PropertyRNA &rna_CurveProfilePoints_rna_type;

extern FunctionRNA *rna_CurveProfilePoints_add_func;
extern PropertyRNA &rna_CurveProfilePoints_add_x;
extern PropertyRNA &rna_CurveProfilePoints_add_y;
extern PropertyRNA &rna_CurveProfilePoints_add_point;

extern FunctionRNA *rna_CurveProfilePoints_remove_func;
extern PropertyRNA &rna_CurveProfilePoints_remove_point;


static PointerRNA CurveProfilePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveProfilePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveProfilePoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveProfilePoint_rna_properties_get(iter);
    }
}

void CurveProfilePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveProfilePoint_rna_properties_get(iter);
    }
}

void CurveProfilePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveProfilePoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveProfilePoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void CurveProfilePoint_location_get(PointerRNA *ptr, float values[2])
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void CurveProfilePoint_location_set(PointerRNA *ptr, const float values[2])
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        (&data->x)[i] = values[i];
    }
}

int CurveProfilePoint_handle_type_1_get(PointerRNA *ptr)
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    return (int)(data->h1);
}

void CurveProfilePoint_handle_type_1_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_CurveProfilePoint_handle_type_set;
    fn(ptr, value);
}

int CurveProfilePoint_handle_type_2_get(PointerRNA *ptr)
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    return (int)(data->h2);
}

void CurveProfilePoint_handle_type_2_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_CurveProfilePoint_handle_type_set;
    fn(ptr, value);
}

bool CurveProfilePoint_select_get(PointerRNA *ptr)
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CurveProfilePoint_select_set(PointerRNA *ptr, bool value)
{
    CurveProfilePoint *data = (CurveProfilePoint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

static PointerRNA CurveProfile_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveProfile_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveProfile_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveProfile_rna_properties_get(iter);
    }
}

void CurveProfile_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveProfile_rna_properties_get(iter);
    }
}

void CurveProfile_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveProfile_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveProfile_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int CurveProfile_preset_get(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (int)(data->preset);
}

void CurveProfile_preset_set(PointerRNA *ptr, int value)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    data->preset = (std::remove_reference_t<decltype(data->preset)>)value;
}

bool CurveProfile_use_clip_get(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CurveProfile_use_clip_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CurveProfile_clip_set;
    fn(ptr, value);
}

bool CurveProfile_use_sample_straight_edges_get(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void CurveProfile_use_sample_straight_edges_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CurveProfile_sample_straight_set;
    fn(ptr, value);
}

bool CurveProfile_use_sample_even_lengths_get(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void CurveProfile_use_sample_even_lengths_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CurveProfile_sample_even_set;
    fn(ptr, value);
}

int CurveProfile_points_length(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (data->path == nullptr) ? 0 : data->path_len;
}

static PointerRNA CurveProfile_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CurveProfilePoint, rna_iterator_array_get(iter));
}

void CurveProfile_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveProfile_points;

    rna_iterator_array_begin(iter, ptr, data->path, sizeof(data->path[0]), data->path_len, 0, nullptr);

    if (iter->valid) {
        iter->ptr = CurveProfile_points_get(iter);
    }
}

void CurveProfile_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveProfile_points_get(iter);
    }
}

void CurveProfile_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool CurveProfile_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    CurveProfile_points_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = CurveProfile_points_get(&iter); }
    }

    CurveProfile_points_end(&iter);

    return found;
}

int CurveProfile_segments_length(PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);
    return (data->segments == nullptr) ? 0 : data->segments_len;
}

static PointerRNA CurveProfile_segments_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CurveProfilePoint, rna_iterator_array_get(iter));
}

void CurveProfile_segments_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    CurveProfile *data = (CurveProfile *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveProfile_segments;

    rna_iterator_array_begin(iter, ptr, data->segments, sizeof(data->segments[0]), data->segments_len, 0, nullptr);

    if (iter->valid) {
        iter->ptr = CurveProfile_segments_get(iter);
    }
}

void CurveProfile_segments_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveProfile_segments_get(iter);
    }
}

void CurveProfile_segments_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool CurveProfile_segments_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    CurveProfile_segments_begin(&iter, ptr);

    if (iter.valid) {
        ArrayIterator *internal = &iter.internal.array;
        if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
            printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
            printf("Array iterator out of range: (index %d)\n", index);
#endif
        }
        else if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_array_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            internal->ptr += internal->itemsize * index;
            found = 1;
        }
        if (found) { *r_ptr = CurveProfile_segments_get(&iter); }
    }

    CurveProfile_segments_end(&iter);

    return found;
}

static PointerRNA CurveProfilePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveProfilePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveProfilePoints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveProfilePoints_rna_properties_get(iter);
    }
}

void CurveProfilePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveProfilePoints_rna_properties_get(iter);
    }
}

void CurveProfilePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveProfilePoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveProfilePoints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}


void CurveProfile_update_func(CurveProfile *_self)
{
	rna_CurveProfile_update(_self);
}

static void CurveProfile_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveProfile *_self;
	_self = (CurveProfile *)_ptr->data;
	
	rna_CurveProfile_update(_self);
}

void CurveProfile_reset_view_func(CurveProfile *_self)
{
	BKE_curveprofile_reset_view(_self);
}

static void CurveProfile_reset_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveProfile *_self;
	_self = (CurveProfile *)_ptr->data;
	
	BKE_curveprofile_reset_view(_self);
}

void CurveProfile_initialize_func(CurveProfile *_self, int totsegments)
{
	rna_CurveProfile_initialize(_self, totsegments);
}

static void CurveProfile_initialize_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveProfile *_self;
	int totsegments;
	char *_data;
	
	_self = (CurveProfile *)_ptr->data;
	_data = (char *)_parms->data;
	totsegments = *((int *)_data);
	
	rna_CurveProfile_initialize(_self, totsegments);
}

void CurveProfile_evaluate_func(CurveProfile *_self, ReportList *reports, float length_portion, float location[2])
{
	rna_CurveProfile_evaluate(_self, reports, length_portion, location);
}

static void CurveProfile_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveProfile *_self;
	float length_portion;
	float *location;
	char *_data;
	
	_self = (CurveProfile *)_ptr->data;
	_data = (char *)_parms->data;
	length_portion = *((float *)_data);
	_data += 8;
	location = ((float *)_data);
	
	rna_CurveProfile_evaluate(_self, reports, length_portion, location);
}

/* Repeated prototypes to detect errors */

void rna_CurveProfile_update(CurveProfile *_self);
void BKE_curveprofile_reset_view(CurveProfile *_self);
void rna_CurveProfile_initialize(CurveProfile *_self, int totsegments);
void rna_CurveProfile_evaluate(CurveProfile *_self, ReportList *reports, float length_portion, float location[2]);

CurveProfilePoint *CurveProfilePoints_add_func(CurveProfile *_self, float x, float y)
{
	return BKE_curveprofile_insert(_self, x, y);
}

static void CurveProfilePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveProfile *_self;
	float x;
	float y;
	CurveProfilePoint *point;
	char *_data, *_retdata;
	
	_self = (CurveProfile *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((float *)_data);
	_data += 8;
	y = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	point = BKE_curveprofile_insert(_self, x, y);
	*((CurveProfilePoint **)_retdata) = point;
}

void CurveProfilePoints_remove_func(CurveProfile *_self, ReportList *reports, PointerRNA *point)
{
	rna_CurveProfile_remove_point(_self, reports, point);
}

static void CurveProfilePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveProfile *_self;
	PointerRNA *point;
	char *_data;
	
	_self = (CurveProfile *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((PointerRNA **)_data);
	
	rna_CurveProfile_remove_point(_self, reports, point);
}

/* Repeated prototypes to detect errors */

CurveProfilePoint *BKE_curveprofile_insert(CurveProfile *_self, float x, float y);
void rna_CurveProfile_remove_point(CurveProfile *_self, ReportList *reports, PointerRNA *point);

/* CurveProfilePoint */
static CollectionPropertyRNA rna_CurveProfilePoint_rna_properties_;
PropertyRNA &rna_CurveProfilePoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoint_rna_properties_);

static PointerPropertyRNA rna_CurveProfilePoint_rna_type_;
PropertyRNA &rna_CurveProfilePoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoint_rna_type_);

static FloatPropertyRNA rna_CurveProfilePoint_location_;
PropertyRNA &rna_CurveProfilePoint_location = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoint_location_);

static EnumPropertyRNA rna_CurveProfilePoint_handle_type_1_;
PropertyRNA &rna_CurveProfilePoint_handle_type_1 = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoint_handle_type_1_);

static EnumPropertyRNA rna_CurveProfilePoint_handle_type_2_;
PropertyRNA &rna_CurveProfilePoint_handle_type_2 = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoint_handle_type_2_);

static BoolPropertyRNA rna_CurveProfilePoint_select_;
PropertyRNA &rna_CurveProfilePoint_select = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoint_select_);

StructRNA *RNA_CurveProfilePoint;
void register_struct_CurveProfilePoint(BlenderRNA &brna)
{
	rna_CurveProfilePoint_rna_properties_ = {
		{&rna_CurveProfilePoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfilePoint_rna_properties_begin, CurveProfilePoint_rna_properties_next, CurveProfilePoint_rna_properties_end, CurveProfilePoint_rna_properties_get, nullptr, nullptr, CurveProfilePoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveProfilePoint_rna_type_ = {
		{&rna_CurveProfilePoint_location, 	&rna_CurveProfilePoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfilePoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_CurveProfilePoint_location_default[2] = {
		0.0f,
		0.0f
	};
	rna_CurveProfilePoint_location_ = {
		{&rna_CurveProfilePoint_handle_type_1, 	&rna_CurveProfilePoint_rna_type,
		-1, "location", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"X/Y coordinates of the path point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveProfilePoint, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, CurveProfilePoint_location_get, CurveProfilePoint_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_CurveProfilePoint_location_default
	};

	static const EnumPropertyItem rna_CurveProfilePoint_handle_type_1_items[5] = {
		{1, "AUTO", 511, "Auto Handle", ""	},
		{2, "VECTOR", 514, "Vector Handle", ""	},
		{0, "FREE", 513, "Free Handle", ""	},
		{3, "ALIGN", 510, "Aligned Free Handles", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CurveProfilePoint_handle_type_1_ = {
		{&rna_CurveProfilePoint_handle_type_2, 	&rna_CurveProfilePoint_location,
		-1, "handle_type_1", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "First Handle Type",
		"Path interpolation at this point",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfilePoint_handle_type_1_get, CurveProfilePoint_handle_type_1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CurveProfilePoint_handle_type_1_items, 4, 0
	};

	static const EnumPropertyItem rna_CurveProfilePoint_handle_type_2_items[5] = {
		{1, "AUTO", 511, "Auto Handle", ""	},
		{2, "VECTOR", 514, "Vector Handle", ""	},
		{0, "FREE", 513, "Free Handle", ""	},
		{3, "ALIGN", 510, "Aligned Free Handles", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CurveProfilePoint_handle_type_2_ = {
		{&rna_CurveProfilePoint_select, 	&rna_CurveProfilePoint_handle_type_1,
		-1, "handle_type_2", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Second Handle Type",
		"Path interpolation at this point",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfilePoint_handle_type_2_get, CurveProfilePoint_handle_type_2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CurveProfilePoint_handle_type_2_items, 4, 0
	};

	rna_CurveProfilePoint_select_ = {
		{nullptr, 	&rna_CurveProfilePoint_handle_type_2,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Selection state of the path point",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfilePoint_select_get, CurveProfilePoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CurveProfilePoint;
	srna->cont.properties = {&rna_CurveProfilePoint_rna_properties, &rna_CurveProfilePoint_select};
	srna->identifier = "CurveProfilePoint";
	srna->flag = 516;
	srna->name = "CurveProfilePoint";
	srna->description = "Point of a path used to define a profile";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveProfilePoint_rna_properties;
};

/* CurveProfile */
static CollectionPropertyRNA rna_CurveProfile_rna_properties_;
PropertyRNA &rna_CurveProfile_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_rna_properties_);

static PointerPropertyRNA rna_CurveProfile_rna_type_;
PropertyRNA &rna_CurveProfile_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_rna_type_);

static EnumPropertyRNA rna_CurveProfile_preset_;
PropertyRNA &rna_CurveProfile_preset = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_preset_);

static BoolPropertyRNA rna_CurveProfile_use_clip_;
PropertyRNA &rna_CurveProfile_use_clip = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_use_clip_);

static BoolPropertyRNA rna_CurveProfile_use_sample_straight_edges_;
PropertyRNA &rna_CurveProfile_use_sample_straight_edges = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_use_sample_straight_edges_);

static BoolPropertyRNA rna_CurveProfile_use_sample_even_lengths_;
PropertyRNA &rna_CurveProfile_use_sample_even_lengths = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_use_sample_even_lengths_);

static CollectionPropertyRNA rna_CurveProfile_points_;
PropertyRNA &rna_CurveProfile_points = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_points_);

static CollectionPropertyRNA rna_CurveProfile_segments_;
PropertyRNA &rna_CurveProfile_segments = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_segments_);

FunctionRNA *rna_CurveProfile_update_func;
FunctionRNA *rna_CurveProfile_reset_view_func;
static IntPropertyRNA rna_CurveProfile_initialize_totsegments_;
PropertyRNA &rna_CurveProfile_initialize_totsegments = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_initialize_totsegments_);

FunctionRNA *rna_CurveProfile_initialize_func;
static FloatPropertyRNA rna_CurveProfile_evaluate_length_portion_;
PropertyRNA &rna_CurveProfile_evaluate_length_portion = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_evaluate_length_portion_);

static FloatPropertyRNA rna_CurveProfile_evaluate_location_;
PropertyRNA &rna_CurveProfile_evaluate_location = reinterpret_cast<PropertyRNA &>(rna_CurveProfile_evaluate_location_);

FunctionRNA *rna_CurveProfile_evaluate_func;
StructRNA *RNA_CurveProfile;
void register_struct_CurveProfile(BlenderRNA &brna)
{
	rna_CurveProfile_rna_properties_ = {
		{&rna_CurveProfile_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfile_rna_properties_begin, CurveProfile_rna_properties_next, CurveProfile_rna_properties_end, CurveProfile_rna_properties_get, nullptr, nullptr, CurveProfile_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveProfile_rna_type_ = {
		{&rna_CurveProfile_preset, 	&rna_CurveProfile_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfile_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_CurveProfile_preset_items[6] = {
		{0, "LINE", 0, "Line", "Default"	},
		{1, "SUPPORTS", 0, "Support Loops", "Loops on each side of the profile"	},
		{2, "CORNICE", 0, "Cornice Molding", ""	},
		{3, "CROWN", 0, "Crown Molding", ""	},
		{4, "STEPS", 0, "Steps", "A number of steps defined by the segments"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CurveProfile_preset_ = {
		{&rna_CurveProfile_use_clip, 	&rna_CurveProfile_rna_type,
		-1, "preset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Preset",
		"",
		0, "Mesh",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveProfile, preset), RawPropertyType(0), nullptr},
		CurveProfile_preset_get, CurveProfile_preset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CurveProfile_preset_items, 5, 0
	};

	rna_CurveProfile_use_clip_ = {
		{&rna_CurveProfile_use_sample_straight_edges, 	&rna_CurveProfile_preset,
		-1, "use_clip", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clip",
		"Force the path view to fit a defined boundary",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfile_use_clip_get, CurveProfile_use_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CurveProfile_use_sample_straight_edges_ = {
		{&rna_CurveProfile_use_sample_even_lengths, 	&rna_CurveProfile_use_clip,
		-1, "use_sample_straight_edges", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sample Straight Edges",
		"Sample edges with vector handles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfile_use_sample_straight_edges_get, CurveProfile_use_sample_straight_edges_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CurveProfile_use_sample_even_lengths_ = {
		{&rna_CurveProfile_points, 	&rna_CurveProfile_use_sample_straight_edges,
		-1, "use_sample_even_lengths", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sample Even Lengths",
		"Sample edges with even lengths",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfile_use_sample_even_lengths_get, CurveProfile_use_sample_even_lengths_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CurveProfile_points_ = {
		{&rna_CurveProfile_segments, 	&rna_CurveProfile_use_sample_even_lengths,
		-1, "points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"Profile control points",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_CurveProfilePoints},
		CurveProfile_points_begin, CurveProfile_points_next, CurveProfile_points_end, CurveProfile_points_get, CurveProfile_points_length, CurveProfile_points_lookup_int, nullptr, nullptr, RNA_CurveProfilePoint
	};

	rna_CurveProfile_segments_ = {
		{nullptr, 	&rna_CurveProfile_points,
		-1, "segments", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Segments",
		"Segments sampled from control points",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfile_segments_begin, CurveProfile_segments_next, CurveProfile_segments_end, CurveProfile_segments_get, CurveProfile_segments_length, CurveProfile_segments_lookup_int, nullptr, nullptr, RNA_CurveProfilePoint
	};

	StructRNA *srna = RNA_CurveProfile;
	srna->cont.properties = {&rna_CurveProfile_rna_properties, &rna_CurveProfile_segments};
	srna->identifier = "CurveProfile";
	srna->flag = 516;
	srna->name = "CurveProfile";
	srna->description = "Profile Path editor used to build a profile path";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveProfile_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update";
		func->description = "Refresh internal data, remove doubles and clip points";
		func->call = CurveProfile_update_call;
		rna_CurveProfile_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "reset_view";
		func->description = "Reset the curve profile grid to its clipping size";
		func->call = CurveProfile_reset_view_call;
		rna_CurveProfile_reset_view_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CurveProfile_initialize_totsegments_ = {
		{nullptr, 	nullptr,
		-1, "totsegments", 262147, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The number of segment values to initialize the segments table with",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 1000, 1, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveProfile_initialize_totsegments, &rna_CurveProfile_initialize_totsegments};
		func->identifier = "initialize";
		func->description = "Set the number of display segments and fill tables";
		func->call = CurveProfile_initialize_call;
		rna_CurveProfile_initialize_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CurveProfile_evaluate_length_portion_ = {
		{&rna_CurveProfile_evaluate_location, 	nullptr,
		-1, "length_portion", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Length Portion",
		"Portion of the path length to travel before evaluation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	static float rna_CurveProfile_evaluate_location_default[2] = {
		0.0f,
		0.0f
	};
	rna_CurveProfile_evaluate_location_ = {
		{nullptr, 	&rna_CurveProfile_evaluate_length_portion,
		-1, "location", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Location",
		"The location at the given portion of the profile",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_CurveProfile_evaluate_location_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveProfile_evaluate_length_portion, &rna_CurveProfile_evaluate_location};
		func->identifier = "evaluate";
		func->flag = 16;
		func->description = "Evaluate the at the given portion of the path length";
		func->call = CurveProfile_evaluate_call;
		rna_CurveProfile_evaluate_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Profile Point */
static CollectionPropertyRNA rna_CurveProfilePoints_rna_properties_;
PropertyRNA &rna_CurveProfilePoints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoints_rna_properties_);

static PointerPropertyRNA rna_CurveProfilePoints_rna_type_;
PropertyRNA &rna_CurveProfilePoints_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoints_rna_type_);

static FloatPropertyRNA rna_CurveProfilePoints_add_x_;
PropertyRNA &rna_CurveProfilePoints_add_x = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoints_add_x_);

static FloatPropertyRNA rna_CurveProfilePoints_add_y_;
PropertyRNA &rna_CurveProfilePoints_add_y = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoints_add_y_);

static PointerPropertyRNA rna_CurveProfilePoints_add_point_;
PropertyRNA &rna_CurveProfilePoints_add_point = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoints_add_point_);

FunctionRNA *rna_CurveProfilePoints_add_func;
static PointerPropertyRNA rna_CurveProfilePoints_remove_point_;
PropertyRNA &rna_CurveProfilePoints_remove_point = reinterpret_cast<PropertyRNA &>(rna_CurveProfilePoints_remove_point_);

FunctionRNA *rna_CurveProfilePoints_remove_func;
StructRNA *RNA_CurveProfilePoints;
void register_struct_CurveProfilePoints(BlenderRNA &brna)
{
	rna_CurveProfilePoints_rna_properties_ = {
		{&rna_CurveProfilePoints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfilePoints_rna_properties_begin, CurveProfilePoints_rna_properties_next, CurveProfilePoints_rna_properties_end, CurveProfilePoints_rna_properties_get, nullptr, nullptr, CurveProfilePoints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveProfilePoints_rna_type_ = {
		{nullptr, 	&rna_CurveProfilePoints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveProfilePoints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_CurveProfilePoints;
	srna->cont.properties = {&rna_CurveProfilePoints_rna_properties, &rna_CurveProfilePoints_rna_type};
	srna->identifier = "CurveProfilePoints";
	srna->flag = 516;
	srna->name = "Profile Point";
	srna->description = "Collection of Profile Points";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveProfilePoints_rna_properties;
	{
	rna_CurveProfilePoints_add_x_ = {
		{&rna_CurveProfilePoints_add_y, 	nullptr,
		-1, "x", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "X Position",
		"X Position for new point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_CurveProfilePoints_add_y_ = {
		{&rna_CurveProfilePoints_add_point, 	&rna_CurveProfilePoints_add_x,
		-1, "y", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Y Position",
		"Y Position for new point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_CurveProfilePoints_add_point_ = {
		{nullptr, 	&rna_CurveProfilePoints_add_y,
		-1, "point", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New point",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CurveProfilePoint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveProfilePoints_add_x, &rna_CurveProfilePoints_add_point};
		func->identifier = "add";
		func->description = "Add point to the profile";
		func->call = CurveProfilePoints_add_call;
		func->c_ret = &rna_CurveProfilePoints_add_point;
		rna_CurveProfilePoints_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CurveProfilePoints_remove_point_ = {
		{nullptr, 	nullptr,
		-1, "point", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Point to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CurveProfilePoint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveProfilePoints_remove_point, &rna_CurveProfilePoints_remove_point};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Delete point from the profile";
		func->call = CurveProfilePoints_remove_call;
		rna_CurveProfilePoints_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
