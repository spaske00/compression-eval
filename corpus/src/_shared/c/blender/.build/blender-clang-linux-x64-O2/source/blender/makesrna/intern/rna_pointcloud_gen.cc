
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

#include "rna_pointcloud.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_Point_rna_properties;
extern PropertyRNA &rna_Point_rna_type;
extern PropertyRNA &rna_Point_co;
extern PropertyRNA &rna_Point_radius;
extern PropertyRNA &rna_Point_index;


extern PropertyRNA &rna_ID_rna_properties;
extern PropertyRNA &rna_ID_rna_type;
extern PropertyRNA &rna_ID_name;
extern PropertyRNA &rna_ID_name_full;
extern PropertyRNA &rna_ID_id_type;
extern PropertyRNA &rna_ID_session_uid;
extern PropertyRNA &rna_ID_is_evaluated;
extern PropertyRNA &rna_ID_original;
extern PropertyRNA &rna_ID_users;
extern PropertyRNA &rna_ID_use_fake_user;
extern PropertyRNA &rna_ID_use_extra_user;
extern PropertyRNA &rna_ID_is_embedded_data;
extern PropertyRNA &rna_ID_is_linked_packed;
extern PropertyRNA &rna_ID_is_missing;
extern PropertyRNA &rna_ID_is_runtime_data;
extern PropertyRNA &rna_ID_is_editable;
extern PropertyRNA &rna_ID_tag;
extern PropertyRNA &rna_ID_is_library_indirect;
extern PropertyRNA &rna_ID_library;
extern PropertyRNA &rna_ID_library_weak_reference;
extern PropertyRNA &rna_ID_asset_data;
extern PropertyRNA &rna_ID_override_library;
extern PropertyRNA &rna_ID_preview;

extern PropertyRNA &rna_PointCloud_points;
extern PropertyRNA &rna_PointCloud_materials;
extern PropertyRNA &rna_PointCloud_attributes;
extern PropertyRNA &rna_PointCloud_color_attributes;
extern PropertyRNA &rna_PointCloud_animation_data;

extern FunctionRNA *rna_ID_bl_system_properties_get_func;
extern PropertyRNA &rna_ID_bl_system_properties_get_do_create;
extern PropertyRNA &rna_ID_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_ID_rename_func;
extern PropertyRNA &rna_ID_rename_name;
extern PropertyRNA &rna_ID_rename_mode;
extern PropertyRNA &rna_ID_rename_id_rename_result;

extern FunctionRNA *rna_ID_evaluated_get_func;
extern PropertyRNA &rna_ID_evaluated_get_depsgraph;
extern PropertyRNA &rna_ID_evaluated_get_id;

extern FunctionRNA *rna_ID_copy_func;
extern PropertyRNA &rna_ID_copy_id;

extern FunctionRNA *rna_ID_asset_mark_func;
extern FunctionRNA *rna_ID_asset_clear_func;
extern FunctionRNA *rna_ID_asset_generate_preview_func;
extern FunctionRNA *rna_ID_override_create_func;
extern PropertyRNA &rna_ID_override_create_id;
extern PropertyRNA &rna_ID_override_create_remap_local_usages;

extern FunctionRNA *rna_ID_override_hierarchy_create_func;
extern PropertyRNA &rna_ID_override_hierarchy_create_id;
extern PropertyRNA &rna_ID_override_hierarchy_create_scene;
extern PropertyRNA &rna_ID_override_hierarchy_create_view_layer;
extern PropertyRNA &rna_ID_override_hierarchy_create_reference;
extern PropertyRNA &rna_ID_override_hierarchy_create_do_fully_editable;

extern FunctionRNA *rna_ID_user_clear_func;
extern FunctionRNA *rna_ID_user_remap_func;
extern PropertyRNA &rna_ID_user_remap_new_id;

extern FunctionRNA *rna_ID_make_local_func;
extern PropertyRNA &rna_ID_make_local_clear_proxy;
extern PropertyRNA &rna_ID_make_local_clear_liboverride;
extern PropertyRNA &rna_ID_make_local_clear_asset_data;
extern PropertyRNA &rna_ID_make_local_id;

extern FunctionRNA *rna_ID_user_of_id_func;
extern PropertyRNA &rna_ID_user_of_id_id;
extern PropertyRNA &rna_ID_user_of_id_count;

extern FunctionRNA *rna_ID_animation_data_create_func;
extern PropertyRNA &rna_ID_animation_data_create_anim_data;

extern FunctionRNA *rna_ID_animation_data_clear_func;
extern FunctionRNA *rna_ID_update_tag_func;
extern PropertyRNA &rna_ID_update_tag_refresh;

extern FunctionRNA *rna_ID_preview_ensure_func;
extern PropertyRNA &rna_ID_preview_ensure_preview_image;


extern FunctionRNA *rna_PointCloud_resize_func;
extern PropertyRNA &rna_PointCloud_resize_size;


static PointerRNA Point_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Point_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Point_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Point_rna_properties_get(iter);
    }
}

void Point_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Point_rna_properties_get(iter);
    }
}

void Point_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Point_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Point_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Point_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Point_location_get;
    fn(ptr, values);
}

void Point_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Point_location_set;
    fn(ptr, values);
}

float Point_radius_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Point_radius_get;
    return fn(ptr);
}

void Point_radius_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Point_radius_set;
    fn(ptr, value);
}

int Point_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Point_index_get;
    return fn(ptr);
}

int PointCloud_points_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_PointCloud_points_length;
    return fn(ptr);
}

static PointerRNA PointCloud_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Point, rna_iterator_array_get(iter));
}

void PointCloud_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PointCloud_points;

    PropCollectionBeginFunc fn = rna_PointCloud_points_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCloud_points_get(iter);
    }
}

void PointCloud_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PointCloud_points_get(iter);
    }
}

void PointCloud_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool PointCloud_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_PointCloud_points_lookup_int;
    return fn(ptr, index, r_ptr);
}

int PointCloud_materials_length(PointerRNA *ptr)
{
    PointCloud *data = (PointCloud *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA PointCloud_materials_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Material, rna_iterator_array_dereference_get(iter));
}

void PointCloud_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    PointCloud *data = (PointCloud *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PointCloud_materials;

    rna_iterator_array_begin(iter, ptr, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = PointCloud_materials_get(iter);
    }
}

void PointCloud_materials_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PointCloud_materials_get(iter);
    }
}

void PointCloud_materials_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool PointCloud_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    PointCloud_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = PointCloud_materials_get(&iter); }
    }

    PointCloud_materials_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool PointCloud_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    PointCloud_materials_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ID_name_length(&iter.ptr);
            if (namelen < 1024) {
                ID_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ID_name_get(&iter.ptr, name);
                if (strcmp(name, key) == 0) {
                    MEM_delete(name);

                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
                else {
                    MEM_delete(name);
                }
            }
        }
        PointCloud_materials_next(&iter);
    }
    PointCloud_materials_end(&iter);

    return found;
}

int PointCloud_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_length;
    return fn(ptr);
}

static PointerRNA PointCloud_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void PointCloud_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PointCloud_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCloud_attributes_get(iter);
    }
}

void PointCloud_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PointCloud_attributes_get(iter);
    }
}

void PointCloud_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool PointCloud_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    PointCloud_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = PointCloud_attributes_get(&iter); }
    }

    PointCloud_attributes_end(&iter);

    return found;
}

bool PointCloud_attributes_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_AttributeGroup_lookup_string;
    return fn(ptr, key, r_ptr);
}

int PointCloud_color_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_color_length;
    return fn(ptr);
}

static PointerRNA PointCloud_color_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void PointCloud_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PointCloud_color_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_color_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PointCloud_color_attributes_get(iter);
    }
}

void PointCloud_color_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PointCloud_color_attributes_get(iter);
    }
}

void PointCloud_color_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool PointCloud_color_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    PointCloud_color_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = PointCloud_color_attributes_get(&iter); }
    }

    PointCloud_color_attributes_end(&iter);

    return found;
}

PointerRNA PointCloud_animation_data_get(PointerRNA *ptr)
{
    PointCloud *data = (PointCloud *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}


void PointCloud_resize_func(PointCloud *_self, int size)
{
	rna_PointCloud_resize(_self, size);
}

static void PointCloud_resize_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointCloud *_self;
	int size;
	char *_data;
	
	_self = (PointCloud *)_ptr->data;
	_data = (char *)_parms->data;
	size = *((int *)_data);
	
	rna_PointCloud_resize(_self, size);
}

/* Repeated prototypes to detect errors */

void rna_PointCloud_resize(PointCloud *_self, int size);

/* Point */
static CollectionPropertyRNA rna_Point_rna_properties_;
PropertyRNA &rna_Point_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Point_rna_properties_);

static PointerPropertyRNA rna_Point_rna_type_;
PropertyRNA &rna_Point_rna_type = reinterpret_cast<PropertyRNA &>(rna_Point_rna_type_);

static FloatPropertyRNA rna_Point_co_;
PropertyRNA &rna_Point_co = reinterpret_cast<PropertyRNA &>(rna_Point_co_);

static FloatPropertyRNA rna_Point_radius_;
PropertyRNA &rna_Point_radius = reinterpret_cast<PropertyRNA &>(rna_Point_radius_);

static IntPropertyRNA rna_Point_index_;
PropertyRNA &rna_Point_index = reinterpret_cast<PropertyRNA &>(rna_Point_index_);

StructRNA *RNA_Point;
void register_struct_Point(BlenderRNA &brna)
{
	rna_Point_rna_properties_ = {
		{&rna_Point_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Point_rna_properties_begin, Point_rna_properties_next, Point_rna_properties_end, Point_rna_properties_get, nullptr, nullptr, Point_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Point_rna_type_ = {
		{&rna_Point_co, 	&rna_Point_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Point_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_Point_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Point_co_ = {
		{&rna_Point_radius, 	&rna_Point_rna_type,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_PointCloud_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Point_co_get, Point_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Point_co_default
	};

	rna_Point_radius_ = {
		{&rna_Point_index, 	&rna_Point_co,
		-1, "radius", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Radius",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_PointCloud_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Point_radius_get, Point_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Point_index_ = {
		{nullptr, 	&rna_Point_radius,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this point",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Point_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Point;
	srna->cont.properties = {&rna_Point_rna_properties, &rna_Point_index};
	srna->identifier = "Point";
	srna->flag = 516;
	srna->name = "Point";
	srna->description = "Point in a point cloud";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Point_rna_properties;
	srna->path = rna_Point_path;
};

/* Point Cloud */
static CollectionPropertyRNA rna_PointCloud_points_;
PropertyRNA &rna_PointCloud_points = reinterpret_cast<PropertyRNA &>(rna_PointCloud_points_);

static CollectionPropertyRNA rna_PointCloud_materials_;
PropertyRNA &rna_PointCloud_materials = reinterpret_cast<PropertyRNA &>(rna_PointCloud_materials_);

static CollectionPropertyRNA rna_PointCloud_attributes_;
PropertyRNA &rna_PointCloud_attributes = reinterpret_cast<PropertyRNA &>(rna_PointCloud_attributes_);

static CollectionPropertyRNA rna_PointCloud_color_attributes_;
PropertyRNA &rna_PointCloud_color_attributes = reinterpret_cast<PropertyRNA &>(rna_PointCloud_color_attributes_);

static PointerPropertyRNA rna_PointCloud_animation_data_;
PropertyRNA &rna_PointCloud_animation_data = reinterpret_cast<PropertyRNA &>(rna_PointCloud_animation_data_);

static IntPropertyRNA rna_PointCloud_resize_size_;
PropertyRNA &rna_PointCloud_resize_size = reinterpret_cast<PropertyRNA &>(rna_PointCloud_resize_size_);

FunctionRNA *rna_PointCloud_resize_func;
StructRNA *RNA_PointCloud;
void register_struct_PointCloud(BlenderRNA &brna)
{
	rna_PointCloud_points_ = {
		{&rna_PointCloud_materials, 	nullptr,
		-1, "points", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointCloud_points_begin, PointCloud_points_next, PointCloud_points_end, PointCloud_points_get, PointCloud_points_length, PointCloud_points_lookup_int, nullptr, nullptr, RNA_Point
	};

	rna_PointCloud_materials_ = {
		{&rna_PointCloud_attributes, 	&rna_PointCloud_points,
		-1, "materials", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Materials",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_IDMaterials},
		PointCloud_materials_begin, PointCloud_materials_next, PointCloud_materials_end, PointCloud_materials_get, PointCloud_materials_length, PointCloud_materials_lookup_int, PointCloud_materials_lookup_string, rna_IDMaterials_assign_int, RNA_Material
	};

	rna_PointCloud_attributes_ = {
		{&rna_PointCloud_color_attributes, 	&rna_PointCloud_materials,
		-1, "attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Attributes",
		"Geometry attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupPointCloud},
		PointCloud_attributes_begin, PointCloud_attributes_next, PointCloud_attributes_end, PointCloud_attributes_get, PointCloud_attributes_length, PointCloud_attributes_lookup_int, PointCloud_attributes_lookup_string, nullptr, RNA_Attribute
	};

	rna_PointCloud_color_attributes_ = {
		{&rna_PointCloud_animation_data, 	&rna_PointCloud_attributes,
		-1, "color_attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Attributes",
		"Geometry color attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupPointCloud},
		PointCloud_color_attributes_begin, PointCloud_color_attributes_next, PointCloud_color_attributes_end, PointCloud_color_attributes_get, PointCloud_color_attributes_length, PointCloud_color_attributes_lookup_int, nullptr, nullptr, RNA_Attribute
	};

	rna_PointCloud_animation_data_ = {
		{nullptr, 	&rna_PointCloud_color_attributes,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		PointCloud_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_PointCloud;
	srna->cont.properties = {&rna_PointCloud_points, &rna_PointCloud_animation_data};
	srna->identifier = "PointCloud";
	srna->flag = 519;
	srna->name = "Point Cloud";
	srna->description = "Point cloud data-block";
	srna->translation_context = "*";
	srna->icon = 272;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_PointCloud_resize_size_ = {
		{nullptr, 	nullptr,
		-1, "size", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Size",
		"New number of points",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PointCloud_resize_size, &rna_PointCloud_resize_size};
		func->identifier = "resize";
		func->description = "resize";
		func->call = PointCloud_resize_call;
		rna_PointCloud_resize_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
