
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

#include "rna_palette.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_PaletteColor_rna_properties;
extern PropertyRNA &rna_PaletteColor_rna_type;
extern PropertyRNA &rna_PaletteColor_color;
extern PropertyRNA &rna_PaletteColor_strength;
extern PropertyRNA &rna_PaletteColor_weight;


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

extern PropertyRNA &rna_Palette_colors;

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



extern PropertyRNA &rna_PaletteColors_rna_properties;
extern PropertyRNA &rna_PaletteColors_rna_type;
extern PropertyRNA &rna_PaletteColors_active;

extern FunctionRNA *rna_PaletteColors_new_func;
extern PropertyRNA &rna_PaletteColors_new_color;

extern FunctionRNA *rna_PaletteColors_remove_func;
extern PropertyRNA &rna_PaletteColors_remove_color;

extern FunctionRNA *rna_PaletteColors_clear_func;

static PointerRNA PaletteColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PaletteColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PaletteColor_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaletteColor_rna_properties_get(iter);
    }
}

void PaletteColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PaletteColor_rna_properties_get(iter);
    }
}

void PaletteColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PaletteColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PaletteColor_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void PaletteColor_color_get(PointerRNA *ptr, float values[3])
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void PaletteColor_color_set(PointerRNA *ptr, const float values[3])
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

float PaletteColor_strength_get(PointerRNA *ptr)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    return (float)(data->value);
}

void PaletteColor_strength_set(PointerRNA *ptr, float value)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, 0.0f, 1.0f);
}

float PaletteColor_weight_get(PointerRNA *ptr)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    return (float)(data->value);
}

void PaletteColor_weight_set(PointerRNA *ptr, float value)
{
    PaletteColor *data = (PaletteColor *)(ptr->data);
    data->value = (std::remove_reference_t<decltype(data->value)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA Palette_colors_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_PaletteColor, rna_iterator_listbase_get(iter));
}

void Palette_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Palette *data = (Palette *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Palette_colors;

    rna_iterator_listbase_begin(iter, ptr, &data->colors, nullptr);

    if (iter->valid) {
        iter->ptr = Palette_colors_get(iter);
    }
}

void Palette_colors_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Palette_colors_get(iter);
    }
}

void Palette_colors_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Palette_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Palette_colors_begin(&iter, ptr);

    if (iter.valid) {
        ListBaseIterator *internal = &iter.internal.listbase;
        if (internal->skip) {
            while (index-- > 0 && iter.valid) {
                rna_iterator_listbase_next(&iter);
            }
            found = (index == -1 && iter.valid);
        }
        else {
            while (index-- > 0 && internal->link) {
                internal->link = internal->link->next;
            }
            found = (index == -1 && internal->link);
        }
        if (found) { *r_ptr = Palette_colors_get(&iter); }
    }

    Palette_colors_end(&iter);

    return found;
}

static PointerRNA PaletteColors_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PaletteColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PaletteColors_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PaletteColors_rna_properties_get(iter);
    }
}

void PaletteColors_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PaletteColors_rna_properties_get(iter);
    }
}

void PaletteColors_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PaletteColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PaletteColors_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA PaletteColors_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Palette_active_color_get;
    return fn(ptr);
}

void PaletteColors_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Palette_active_color_set;
    fn(ptr, value, reports);
}



PaletteColor *PaletteColors_new_func(Palette *_self)
{
	return rna_Palette_color_new(_self);
}

static void PaletteColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Palette *_self;
	PaletteColor *color;
	char *_data, *_retdata;
	
	_self = (Palette *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	color = rna_Palette_color_new(_self);
	*((PaletteColor **)_retdata) = color;
}

void PaletteColors_remove_func(Palette *_self, ReportList *reports, PointerRNA *color)
{
	rna_Palette_color_remove(_self, reports, color);
}

static void PaletteColors_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Palette *_self;
	PointerRNA *color;
	char *_data;
	
	_self = (Palette *)_ptr->data;
	_data = (char *)_parms->data;
	color = *((PointerRNA **)_data);
	
	rna_Palette_color_remove(_self, reports, color);
}

void PaletteColors_clear_func(Palette *_self)
{
	rna_Palette_color_clear(_self);
}

static void PaletteColors_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Palette *_self;
	_self = (Palette *)_ptr->data;
	
	rna_Palette_color_clear(_self);
}

/* Repeated prototypes to detect errors */

PaletteColor *rna_Palette_color_new(Palette *_self);
void rna_Palette_color_remove(Palette *_self, ReportList *reports, PointerRNA *color);
void rna_Palette_color_clear(Palette *_self);

/* Palette Color */
static CollectionPropertyRNA rna_PaletteColor_rna_properties_;
PropertyRNA &rna_PaletteColor_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PaletteColor_rna_properties_);

static PointerPropertyRNA rna_PaletteColor_rna_type_;
PropertyRNA &rna_PaletteColor_rna_type = reinterpret_cast<PropertyRNA &>(rna_PaletteColor_rna_type_);

static FloatPropertyRNA rna_PaletteColor_color_;
PropertyRNA &rna_PaletteColor_color = reinterpret_cast<PropertyRNA &>(rna_PaletteColor_color_);

static FloatPropertyRNA rna_PaletteColor_strength_;
PropertyRNA &rna_PaletteColor_strength = reinterpret_cast<PropertyRNA &>(rna_PaletteColor_strength_);

static FloatPropertyRNA rna_PaletteColor_weight_;
PropertyRNA &rna_PaletteColor_weight = reinterpret_cast<PropertyRNA &>(rna_PaletteColor_weight_);

StructRNA *RNA_PaletteColor;
void register_struct_PaletteColor(BlenderRNA &brna)
{
	rna_PaletteColor_rna_properties_ = {
		{&rna_PaletteColor_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PaletteColor_rna_properties_begin, PaletteColor_rna_properties_next, PaletteColor_rna_properties_end, PaletteColor_rna_properties_get, nullptr, nullptr, PaletteColor_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PaletteColor_rna_type_ = {
		{&rna_PaletteColor_color, 	&rna_PaletteColor_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PaletteColor_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_PaletteColor_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_PaletteColor_color_ = {
		{&rna_PaletteColor_strength, 	&rna_PaletteColor_rna_type,
		-1, "color", 65537, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_PaletteColor_color_update, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PaletteColor, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, PaletteColor_color_get, PaletteColor_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_PaletteColor_color_default
	};

	rna_PaletteColor_strength_ = {
		{&rna_PaletteColor_weight, 	&rna_PaletteColor_color,
		-1, "strength", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PaletteColor, value), RawPropertyType(5), nullptr},
		PaletteColor_strength_get, PaletteColor_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_PaletteColor_weight_ = {
		{nullptr, 	&rna_PaletteColor_strength,
		-1, "weight", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84869120, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PaletteColor, value), RawPropertyType(5), nullptr},
		PaletteColor_weight_get, PaletteColor_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_PaletteColor;
	srna->cont.properties = {&rna_PaletteColor_rna_properties, &rna_PaletteColor_weight};
	srna->identifier = "PaletteColor";
	srna->flag = 516;
	srna->name = "Palette Color";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PaletteColor_rna_properties;
};

/* Palette */
static CollectionPropertyRNA rna_Palette_colors_;
PropertyRNA &rna_Palette_colors = reinterpret_cast<PropertyRNA &>(rna_Palette_colors_);

StructRNA *RNA_Palette;
void register_struct_Palette(BlenderRNA &brna)
{
	rna_Palette_colors_ = {
		{nullptr, 	nullptr,
		-1, "colors", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "colors",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_PaletteColors},
		Palette_colors_begin, Palette_colors_next, Palette_colors_end, Palette_colors_get, nullptr, Palette_colors_lookup_int, nullptr, nullptr, RNA_PaletteColor
	};

	StructRNA *srna = RNA_Palette;
	srna->cont.properties = {&rna_Palette_colors, &rna_Palette_colors};
	srna->identifier = "Palette";
	srna->flag = 519;
	srna->name = "Palette";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 59;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Palette Splines */
static CollectionPropertyRNA rna_PaletteColors_rna_properties_;
PropertyRNA &rna_PaletteColors_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PaletteColors_rna_properties_);

static PointerPropertyRNA rna_PaletteColors_rna_type_;
PropertyRNA &rna_PaletteColors_rna_type = reinterpret_cast<PropertyRNA &>(rna_PaletteColors_rna_type_);

static PointerPropertyRNA rna_PaletteColors_active_;
PropertyRNA &rna_PaletteColors_active = reinterpret_cast<PropertyRNA &>(rna_PaletteColors_active_);

static PointerPropertyRNA rna_PaletteColors_new_color_;
PropertyRNA &rna_PaletteColors_new_color = reinterpret_cast<PropertyRNA &>(rna_PaletteColors_new_color_);

FunctionRNA *rna_PaletteColors_new_func;
static PointerPropertyRNA rna_PaletteColors_remove_color_;
PropertyRNA &rna_PaletteColors_remove_color = reinterpret_cast<PropertyRNA &>(rna_PaletteColors_remove_color_);

FunctionRNA *rna_PaletteColors_remove_func;
FunctionRNA *rna_PaletteColors_clear_func;
StructRNA *RNA_PaletteColors;
void register_struct_PaletteColors(BlenderRNA &brna)
{
	rna_PaletteColors_rna_properties_ = {
		{&rna_PaletteColors_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PaletteColors_rna_properties_begin, PaletteColors_rna_properties_next, PaletteColors_rna_properties_end, PaletteColors_rna_properties_get, nullptr, nullptr, PaletteColors_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PaletteColors_rna_type_ = {
		{&rna_PaletteColors_active, 	&rna_PaletteColors_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PaletteColors_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PaletteColors_active_ = {
		{nullptr, 	&rna_PaletteColors_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Palette Color",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PaletteColors_active_get, PaletteColors_active_set, nullptr, nullptr,RNA_PaletteColor
	};

	StructRNA *srna = RNA_PaletteColors;
	srna->cont.properties = {&rna_PaletteColors_rna_properties, &rna_PaletteColors_active};
	srna->identifier = "PaletteColors";
	srna->flag = 516;
	srna->name = "Palette Splines";
	srna->description = "Collection of palette colors";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PaletteColors_rna_properties;
	{
	rna_PaletteColors_new_color_ = {
		{nullptr, 	nullptr,
		-1, "color", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created color",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PaletteColor
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PaletteColors_new_color, &rna_PaletteColors_new_color};
		func->identifier = "new";
		func->description = "Add a new color to the palette";
		func->call = PaletteColors_new_call;
		func->c_ret = &rna_PaletteColors_new_color;
		rna_PaletteColors_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_PaletteColors_remove_color_ = {
		{nullptr, 	nullptr,
		-1, "color", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The color to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PaletteColor
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_PaletteColors_remove_color, &rna_PaletteColors_remove_color};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a color from the palette";
		func->call = PaletteColors_remove_call;
		rna_PaletteColors_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "Remove all colors from the palette";
		func->call = PaletteColors_clear_call;
		rna_PaletteColors_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
