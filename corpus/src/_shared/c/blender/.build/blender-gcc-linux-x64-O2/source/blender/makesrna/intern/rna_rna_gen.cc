
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

#include "rna_rna.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_Struct_rna_properties;
extern PropertyRNA &rna_Struct_rna_type;
extern PropertyRNA &rna_Struct_name;
extern PropertyRNA &rna_Struct_identifier;
extern PropertyRNA &rna_Struct_description;
extern PropertyRNA &rna_Struct_translation_context;
extern PropertyRNA &rna_Struct_base;
extern PropertyRNA &rna_Struct_nested;
extern PropertyRNA &rna_Struct_name_property;
extern PropertyRNA &rna_Struct_properties;
extern PropertyRNA &rna_Struct_functions;
extern PropertyRNA &rna_Struct_property_tags;


extern PropertyRNA &rna_Property_rna_properties;
extern PropertyRNA &rna_Property_rna_type;
extern PropertyRNA &rna_Property_name;
extern PropertyRNA &rna_Property_identifier;
extern PropertyRNA &rna_Property_description;
extern PropertyRNA &rna_Property_translation_context;
extern PropertyRNA &rna_Property_type;
extern PropertyRNA &rna_Property_subtype;
extern PropertyRNA &rna_Property_srna;
extern PropertyRNA &rna_Property_unit;
extern PropertyRNA &rna_Property_icon;
extern PropertyRNA &rna_Property_is_readonly;
extern PropertyRNA &rna_Property_is_animatable;
extern PropertyRNA &rna_Property_is_overridable;
extern PropertyRNA &rna_Property_is_required;
extern PropertyRNA &rna_Property_is_argument_optional;
extern PropertyRNA &rna_Property_is_never_none;
extern PropertyRNA &rna_Property_is_hidden;
extern PropertyRNA &rna_Property_is_skip_save;
extern PropertyRNA &rna_Property_is_skip_preset;
extern PropertyRNA &rna_Property_is_output;
extern PropertyRNA &rna_Property_is_registered;
extern PropertyRNA &rna_Property_is_registered_optional;
extern PropertyRNA &rna_Property_is_runtime;
extern PropertyRNA &rna_Property_is_enum_flag;
extern PropertyRNA &rna_Property_is_library_editable;
extern PropertyRNA &rna_Property_is_path_output;
extern PropertyRNA &rna_Property_is_path_supports_blend_relative;
extern PropertyRNA &rna_Property_is_path_supports_templates;
extern PropertyRNA &rna_Property_is_deprecated;
extern PropertyRNA &rna_Property_deprecated_note;
extern PropertyRNA &rna_Property_deprecated_version;
extern PropertyRNA &rna_Property_deprecated_removal_version;
extern PropertyRNA &rna_Property_tags;


extern PropertyRNA &rna_Property_rna_properties;
extern PropertyRNA &rna_Property_rna_type;
extern PropertyRNA &rna_Property_name;
extern PropertyRNA &rna_Property_identifier;
extern PropertyRNA &rna_Property_description;
extern PropertyRNA &rna_Property_translation_context;
extern PropertyRNA &rna_Property_type;
extern PropertyRNA &rna_Property_subtype;
extern PropertyRNA &rna_Property_srna;
extern PropertyRNA &rna_Property_unit;
extern PropertyRNA &rna_Property_icon;
extern PropertyRNA &rna_Property_is_readonly;
extern PropertyRNA &rna_Property_is_animatable;
extern PropertyRNA &rna_Property_is_overridable;
extern PropertyRNA &rna_Property_is_required;
extern PropertyRNA &rna_Property_is_argument_optional;
extern PropertyRNA &rna_Property_is_never_none;
extern PropertyRNA &rna_Property_is_hidden;
extern PropertyRNA &rna_Property_is_skip_save;
extern PropertyRNA &rna_Property_is_skip_preset;
extern PropertyRNA &rna_Property_is_output;
extern PropertyRNA &rna_Property_is_registered;
extern PropertyRNA &rna_Property_is_registered_optional;
extern PropertyRNA &rna_Property_is_runtime;
extern PropertyRNA &rna_Property_is_enum_flag;
extern PropertyRNA &rna_Property_is_library_editable;
extern PropertyRNA &rna_Property_is_path_output;
extern PropertyRNA &rna_Property_is_path_supports_blend_relative;
extern PropertyRNA &rna_Property_is_path_supports_templates;
extern PropertyRNA &rna_Property_is_deprecated;
extern PropertyRNA &rna_Property_deprecated_note;
extern PropertyRNA &rna_Property_deprecated_version;
extern PropertyRNA &rna_Property_deprecated_removal_version;
extern PropertyRNA &rna_Property_tags;

extern PropertyRNA &rna_BoolProperty_default;
extern PropertyRNA &rna_BoolProperty_default_array;
extern PropertyRNA &rna_BoolProperty_array_length;
extern PropertyRNA &rna_BoolProperty_array_dimensions;
extern PropertyRNA &rna_BoolProperty_is_array;


extern PropertyRNA &rna_Property_rna_properties;
extern PropertyRNA &rna_Property_rna_type;
extern PropertyRNA &rna_Property_name;
extern PropertyRNA &rna_Property_identifier;
extern PropertyRNA &rna_Property_description;
extern PropertyRNA &rna_Property_translation_context;
extern PropertyRNA &rna_Property_type;
extern PropertyRNA &rna_Property_subtype;
extern PropertyRNA &rna_Property_srna;
extern PropertyRNA &rna_Property_unit;
extern PropertyRNA &rna_Property_icon;
extern PropertyRNA &rna_Property_is_readonly;
extern PropertyRNA &rna_Property_is_animatable;
extern PropertyRNA &rna_Property_is_overridable;
extern PropertyRNA &rna_Property_is_required;
extern PropertyRNA &rna_Property_is_argument_optional;
extern PropertyRNA &rna_Property_is_never_none;
extern PropertyRNA &rna_Property_is_hidden;
extern PropertyRNA &rna_Property_is_skip_save;
extern PropertyRNA &rna_Property_is_skip_preset;
extern PropertyRNA &rna_Property_is_output;
extern PropertyRNA &rna_Property_is_registered;
extern PropertyRNA &rna_Property_is_registered_optional;
extern PropertyRNA &rna_Property_is_runtime;
extern PropertyRNA &rna_Property_is_enum_flag;
extern PropertyRNA &rna_Property_is_library_editable;
extern PropertyRNA &rna_Property_is_path_output;
extern PropertyRNA &rna_Property_is_path_supports_blend_relative;
extern PropertyRNA &rna_Property_is_path_supports_templates;
extern PropertyRNA &rna_Property_is_deprecated;
extern PropertyRNA &rna_Property_deprecated_note;
extern PropertyRNA &rna_Property_deprecated_version;
extern PropertyRNA &rna_Property_deprecated_removal_version;
extern PropertyRNA &rna_Property_tags;

extern PropertyRNA &rna_IntProperty_default;
extern PropertyRNA &rna_IntProperty_default_array;
extern PropertyRNA &rna_IntProperty_array_length;
extern PropertyRNA &rna_IntProperty_array_dimensions;
extern PropertyRNA &rna_IntProperty_is_array;
extern PropertyRNA &rna_IntProperty_hard_min;
extern PropertyRNA &rna_IntProperty_hard_max;
extern PropertyRNA &rna_IntProperty_soft_min;
extern PropertyRNA &rna_IntProperty_soft_max;
extern PropertyRNA &rna_IntProperty_step;


extern PropertyRNA &rna_Property_rna_properties;
extern PropertyRNA &rna_Property_rna_type;
extern PropertyRNA &rna_Property_name;
extern PropertyRNA &rna_Property_identifier;
extern PropertyRNA &rna_Property_description;
extern PropertyRNA &rna_Property_translation_context;
extern PropertyRNA &rna_Property_type;
extern PropertyRNA &rna_Property_subtype;
extern PropertyRNA &rna_Property_srna;
extern PropertyRNA &rna_Property_unit;
extern PropertyRNA &rna_Property_icon;
extern PropertyRNA &rna_Property_is_readonly;
extern PropertyRNA &rna_Property_is_animatable;
extern PropertyRNA &rna_Property_is_overridable;
extern PropertyRNA &rna_Property_is_required;
extern PropertyRNA &rna_Property_is_argument_optional;
extern PropertyRNA &rna_Property_is_never_none;
extern PropertyRNA &rna_Property_is_hidden;
extern PropertyRNA &rna_Property_is_skip_save;
extern PropertyRNA &rna_Property_is_skip_preset;
extern PropertyRNA &rna_Property_is_output;
extern PropertyRNA &rna_Property_is_registered;
extern PropertyRNA &rna_Property_is_registered_optional;
extern PropertyRNA &rna_Property_is_runtime;
extern PropertyRNA &rna_Property_is_enum_flag;
extern PropertyRNA &rna_Property_is_library_editable;
extern PropertyRNA &rna_Property_is_path_output;
extern PropertyRNA &rna_Property_is_path_supports_blend_relative;
extern PropertyRNA &rna_Property_is_path_supports_templates;
extern PropertyRNA &rna_Property_is_deprecated;
extern PropertyRNA &rna_Property_deprecated_note;
extern PropertyRNA &rna_Property_deprecated_version;
extern PropertyRNA &rna_Property_deprecated_removal_version;
extern PropertyRNA &rna_Property_tags;

extern PropertyRNA &rna_FloatProperty_default;
extern PropertyRNA &rna_FloatProperty_default_array;
extern PropertyRNA &rna_FloatProperty_array_length;
extern PropertyRNA &rna_FloatProperty_array_dimensions;
extern PropertyRNA &rna_FloatProperty_is_array;
extern PropertyRNA &rna_FloatProperty_hard_min;
extern PropertyRNA &rna_FloatProperty_hard_max;
extern PropertyRNA &rna_FloatProperty_soft_min;
extern PropertyRNA &rna_FloatProperty_soft_max;
extern PropertyRNA &rna_FloatProperty_step;
extern PropertyRNA &rna_FloatProperty_precision;


extern PropertyRNA &rna_Property_rna_properties;
extern PropertyRNA &rna_Property_rna_type;
extern PropertyRNA &rna_Property_name;
extern PropertyRNA &rna_Property_identifier;
extern PropertyRNA &rna_Property_description;
extern PropertyRNA &rna_Property_translation_context;
extern PropertyRNA &rna_Property_type;
extern PropertyRNA &rna_Property_subtype;
extern PropertyRNA &rna_Property_srna;
extern PropertyRNA &rna_Property_unit;
extern PropertyRNA &rna_Property_icon;
extern PropertyRNA &rna_Property_is_readonly;
extern PropertyRNA &rna_Property_is_animatable;
extern PropertyRNA &rna_Property_is_overridable;
extern PropertyRNA &rna_Property_is_required;
extern PropertyRNA &rna_Property_is_argument_optional;
extern PropertyRNA &rna_Property_is_never_none;
extern PropertyRNA &rna_Property_is_hidden;
extern PropertyRNA &rna_Property_is_skip_save;
extern PropertyRNA &rna_Property_is_skip_preset;
extern PropertyRNA &rna_Property_is_output;
extern PropertyRNA &rna_Property_is_registered;
extern PropertyRNA &rna_Property_is_registered_optional;
extern PropertyRNA &rna_Property_is_runtime;
extern PropertyRNA &rna_Property_is_enum_flag;
extern PropertyRNA &rna_Property_is_library_editable;
extern PropertyRNA &rna_Property_is_path_output;
extern PropertyRNA &rna_Property_is_path_supports_blend_relative;
extern PropertyRNA &rna_Property_is_path_supports_templates;
extern PropertyRNA &rna_Property_is_deprecated;
extern PropertyRNA &rna_Property_deprecated_note;
extern PropertyRNA &rna_Property_deprecated_version;
extern PropertyRNA &rna_Property_deprecated_removal_version;
extern PropertyRNA &rna_Property_tags;

extern PropertyRNA &rna_StringProperty_default;
extern PropertyRNA &rna_StringProperty_length_max;


extern PropertyRNA &rna_Property_rna_properties;
extern PropertyRNA &rna_Property_rna_type;
extern PropertyRNA &rna_Property_name;
extern PropertyRNA &rna_Property_identifier;
extern PropertyRNA &rna_Property_description;
extern PropertyRNA &rna_Property_translation_context;
extern PropertyRNA &rna_Property_type;
extern PropertyRNA &rna_Property_subtype;
extern PropertyRNA &rna_Property_srna;
extern PropertyRNA &rna_Property_unit;
extern PropertyRNA &rna_Property_icon;
extern PropertyRNA &rna_Property_is_readonly;
extern PropertyRNA &rna_Property_is_animatable;
extern PropertyRNA &rna_Property_is_overridable;
extern PropertyRNA &rna_Property_is_required;
extern PropertyRNA &rna_Property_is_argument_optional;
extern PropertyRNA &rna_Property_is_never_none;
extern PropertyRNA &rna_Property_is_hidden;
extern PropertyRNA &rna_Property_is_skip_save;
extern PropertyRNA &rna_Property_is_skip_preset;
extern PropertyRNA &rna_Property_is_output;
extern PropertyRNA &rna_Property_is_registered;
extern PropertyRNA &rna_Property_is_registered_optional;
extern PropertyRNA &rna_Property_is_runtime;
extern PropertyRNA &rna_Property_is_enum_flag;
extern PropertyRNA &rna_Property_is_library_editable;
extern PropertyRNA &rna_Property_is_path_output;
extern PropertyRNA &rna_Property_is_path_supports_blend_relative;
extern PropertyRNA &rna_Property_is_path_supports_templates;
extern PropertyRNA &rna_Property_is_deprecated;
extern PropertyRNA &rna_Property_deprecated_note;
extern PropertyRNA &rna_Property_deprecated_version;
extern PropertyRNA &rna_Property_deprecated_removal_version;
extern PropertyRNA &rna_Property_tags;

extern PropertyRNA &rna_EnumProperty_default;
extern PropertyRNA &rna_EnumProperty_default_flag;
extern PropertyRNA &rna_EnumProperty_enum_items;
extern PropertyRNA &rna_EnumProperty_enum_items_static;
extern PropertyRNA &rna_EnumProperty_enum_items_static_ui;


extern PropertyRNA &rna_EnumPropertyItem_rna_properties;
extern PropertyRNA &rna_EnumPropertyItem_rna_type;
extern PropertyRNA &rna_EnumPropertyItem_name;
extern PropertyRNA &rna_EnumPropertyItem_description;
extern PropertyRNA &rna_EnumPropertyItem_identifier;
extern PropertyRNA &rna_EnumPropertyItem_value;
extern PropertyRNA &rna_EnumPropertyItem_icon;


extern PropertyRNA &rna_Property_rna_properties;
extern PropertyRNA &rna_Property_rna_type;
extern PropertyRNA &rna_Property_name;
extern PropertyRNA &rna_Property_identifier;
extern PropertyRNA &rna_Property_description;
extern PropertyRNA &rna_Property_translation_context;
extern PropertyRNA &rna_Property_type;
extern PropertyRNA &rna_Property_subtype;
extern PropertyRNA &rna_Property_srna;
extern PropertyRNA &rna_Property_unit;
extern PropertyRNA &rna_Property_icon;
extern PropertyRNA &rna_Property_is_readonly;
extern PropertyRNA &rna_Property_is_animatable;
extern PropertyRNA &rna_Property_is_overridable;
extern PropertyRNA &rna_Property_is_required;
extern PropertyRNA &rna_Property_is_argument_optional;
extern PropertyRNA &rna_Property_is_never_none;
extern PropertyRNA &rna_Property_is_hidden;
extern PropertyRNA &rna_Property_is_skip_save;
extern PropertyRNA &rna_Property_is_skip_preset;
extern PropertyRNA &rna_Property_is_output;
extern PropertyRNA &rna_Property_is_registered;
extern PropertyRNA &rna_Property_is_registered_optional;
extern PropertyRNA &rna_Property_is_runtime;
extern PropertyRNA &rna_Property_is_enum_flag;
extern PropertyRNA &rna_Property_is_library_editable;
extern PropertyRNA &rna_Property_is_path_output;
extern PropertyRNA &rna_Property_is_path_supports_blend_relative;
extern PropertyRNA &rna_Property_is_path_supports_templates;
extern PropertyRNA &rna_Property_is_deprecated;
extern PropertyRNA &rna_Property_deprecated_note;
extern PropertyRNA &rna_Property_deprecated_version;
extern PropertyRNA &rna_Property_deprecated_removal_version;
extern PropertyRNA &rna_Property_tags;

extern PropertyRNA &rna_PointerProperty_fixed_type;


extern PropertyRNA &rna_Property_rna_properties;
extern PropertyRNA &rna_Property_rna_type;
extern PropertyRNA &rna_Property_name;
extern PropertyRNA &rna_Property_identifier;
extern PropertyRNA &rna_Property_description;
extern PropertyRNA &rna_Property_translation_context;
extern PropertyRNA &rna_Property_type;
extern PropertyRNA &rna_Property_subtype;
extern PropertyRNA &rna_Property_srna;
extern PropertyRNA &rna_Property_unit;
extern PropertyRNA &rna_Property_icon;
extern PropertyRNA &rna_Property_is_readonly;
extern PropertyRNA &rna_Property_is_animatable;
extern PropertyRNA &rna_Property_is_overridable;
extern PropertyRNA &rna_Property_is_required;
extern PropertyRNA &rna_Property_is_argument_optional;
extern PropertyRNA &rna_Property_is_never_none;
extern PropertyRNA &rna_Property_is_hidden;
extern PropertyRNA &rna_Property_is_skip_save;
extern PropertyRNA &rna_Property_is_skip_preset;
extern PropertyRNA &rna_Property_is_output;
extern PropertyRNA &rna_Property_is_registered;
extern PropertyRNA &rna_Property_is_registered_optional;
extern PropertyRNA &rna_Property_is_runtime;
extern PropertyRNA &rna_Property_is_enum_flag;
extern PropertyRNA &rna_Property_is_library_editable;
extern PropertyRNA &rna_Property_is_path_output;
extern PropertyRNA &rna_Property_is_path_supports_blend_relative;
extern PropertyRNA &rna_Property_is_path_supports_templates;
extern PropertyRNA &rna_Property_is_deprecated;
extern PropertyRNA &rna_Property_deprecated_note;
extern PropertyRNA &rna_Property_deprecated_version;
extern PropertyRNA &rna_Property_deprecated_removal_version;
extern PropertyRNA &rna_Property_tags;

extern PropertyRNA &rna_CollectionProperty_fixed_type;


extern PropertyRNA &rna_Function_rna_properties;
extern PropertyRNA &rna_Function_rna_type;
extern PropertyRNA &rna_Function_identifier;
extern PropertyRNA &rna_Function_description;
extern PropertyRNA &rna_Function_parameters;
extern PropertyRNA &rna_Function_is_registered;
extern PropertyRNA &rna_Function_is_registered_optional;
extern PropertyRNA &rna_Function_use_self;
extern PropertyRNA &rna_Function_use_self_type;


extern PropertyRNA &rna_BlenderRNA_rna_properties;
extern PropertyRNA &rna_BlenderRNA_rna_type;
extern PropertyRNA &rna_BlenderRNA_structs;


extern PropertyRNA &rna_PrimitiveString_rna_properties;
extern PropertyRNA &rna_PrimitiveString_rna_type;
extern PropertyRNA &rna_PrimitiveString_value;


extern PropertyRNA &rna_PrimitiveInt_rna_properties;
extern PropertyRNA &rna_PrimitiveInt_rna_type;
extern PropertyRNA &rna_PrimitiveInt_value;


extern PropertyRNA &rna_PrimitiveFloat_rna_properties;
extern PropertyRNA &rna_PrimitiveFloat_rna_type;
extern PropertyRNA &rna_PrimitiveFloat_value;


extern PropertyRNA &rna_PrimitiveBoolean_rna_properties;
extern PropertyRNA &rna_PrimitiveBoolean_rna_type;
extern PropertyRNA &rna_PrimitiveBoolean_value;

static PointerRNA Struct_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Struct_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Struct_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Struct_rna_properties_get(iter);
    }
}

void Struct_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Struct_rna_properties_get(iter);
    }
}

void Struct_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Struct_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Struct_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Struct_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Struct_name_get;
    fn(ptr, value);
}

int Struct_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Struct_name_length;
    return fn(ptr);
}

void Struct_identifier_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Struct_identifier_get;
    fn(ptr, value);
}

int Struct_identifier_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Struct_identifier_length;
    return fn(ptr);
}

void Struct_description_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Struct_description_get;
    fn(ptr, value);
}

int Struct_description_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Struct_description_length;
    return fn(ptr);
}

void Struct_translation_context_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Struct_translation_context_get;
    fn(ptr, value);
}

int Struct_translation_context_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Struct_translation_context_length;
    return fn(ptr);
}

PointerRNA Struct_base_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Struct_base_get;
    return fn(ptr);
}

PointerRNA Struct_nested_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Struct_nested_get;
    return fn(ptr);
}

PointerRNA Struct_name_property_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Struct_name_property_get;
    return fn(ptr);
}

static PointerRNA Struct_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Struct_properties_get;
    return fn(iter);
}

void Struct_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Struct_properties;

    PropCollectionBeginFunc fn = rna_Struct_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Struct_properties_get(iter);
    }
}

void Struct_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Struct_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Struct_properties_get(iter);
    }
}

void Struct_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

static PointerRNA Struct_functions_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Struct_functions_get;
    return fn(iter);
}

void Struct_functions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Struct_functions;

    PropCollectionBeginFunc fn = rna_Struct_functions_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Struct_functions_get(iter);
    }
}

void Struct_functions_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Struct_functions_get(iter);
    }
}

void Struct_functions_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Struct_functions_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Struct_functions_begin(&iter, ptr);

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
        if (found) { *r_ptr = Struct_functions_get(&iter); }
    }

    Struct_functions_end(&iter);

    return found;
}

static PointerRNA Struct_property_tags_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

void Struct_property_tags_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Struct_property_tags;

    PropCollectionBeginFunc fn = rna_Struct_property_tags_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Struct_property_tags_get(iter);
    }
}

void Struct_property_tags_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Struct_property_tags_get(iter);
    }
}

void Struct_property_tags_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Struct_property_tags_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Struct_property_tags_begin(&iter, ptr);

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
        if (found) { *r_ptr = Struct_property_tags_get(&iter); }
    }

    Struct_property_tags_end(&iter);

    return found;
}

static PointerRNA Property_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Property_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Property_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Property_rna_properties_get(iter);
    }
}

void Property_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Property_rna_properties_get(iter);
    }
}

void Property_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Property_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Property_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Property_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Property_name_get;
    fn(ptr, value);
}

int Property_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Property_name_length;
    return fn(ptr);
}

void Property_identifier_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Property_identifier_get;
    fn(ptr, value);
}

int Property_identifier_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Property_identifier_length;
    return fn(ptr);
}

void Property_description_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Property_description_get;
    fn(ptr, value);
}

int Property_description_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Property_description_length;
    return fn(ptr);
}

void Property_translation_context_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Property_translation_context_get;
    fn(ptr, value);
}

int Property_translation_context_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Property_translation_context_length;
    return fn(ptr);
}

int Property_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_type_get;
    return fn(ptr);
}

int Property_subtype_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_subtype_get;
    return fn(ptr);
}

PointerRNA Property_srna_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Property_srna_get;
    return fn(ptr);
}

int Property_unit_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_unit_get;
    return fn(ptr);
}

int Property_icon_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_icon_get;
    return fn(ptr);
}

bool Property_is_readonly_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_readonly_get;
    return fn(ptr);
}

bool Property_is_animatable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_animatable_get;
    return fn(ptr);
}

bool Property_is_overridable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_overridable_get;
    return fn(ptr);
}

bool Property_is_required_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_required_get;
    return fn(ptr);
}

bool Property_is_argument_optional_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_argument_optional_get;
    return fn(ptr);
}

bool Property_is_never_none_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_never_none_get;
    return fn(ptr);
}

bool Property_is_hidden_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_hidden_get;
    return fn(ptr);
}

bool Property_is_skip_save_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_skip_save_get;
    return fn(ptr);
}

bool Property_is_skip_preset_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_skip_preset_get;
    return fn(ptr);
}

bool Property_is_output_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_use_output_get;
    return fn(ptr);
}

bool Property_is_registered_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_registered_get;
    return fn(ptr);
}

bool Property_is_registered_optional_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_registered_optional_get;
    return fn(ptr);
}

bool Property_is_runtime_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_runtime_get;
    return fn(ptr);
}

bool Property_is_enum_flag_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_enum_flag_get;
    return fn(ptr);
}

bool Property_is_library_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_library_editable_flag_get;
    return fn(ptr);
}

bool Property_is_path_output_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_path_output_flag_get;
    return fn(ptr);
}

bool Property_is_path_supports_blend_relative_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_path_supports_blend_relative_flag_get;
    return fn(ptr);
}

bool Property_is_path_supports_templates_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_path_supports_templates_flag_get;
    return fn(ptr);
}

bool Property_is_deprecated_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Property_is_deprecated_get;
    return fn(ptr);
}

void Property_deprecated_note_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Property_deprecated_note_get;
    fn(ptr, value);
}

int Property_deprecated_note_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Property_deprecated_note_length;
    return fn(ptr);
}

void Property_deprecated_version_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Property_deprecated_version_get;
    fn(ptr, values);
}

void Property_deprecated_removal_version_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Property_deprecated_removal_version_get;
    fn(ptr, values);
}

int Property_tags_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Property_tags_get;
    return fn(ptr);
}

bool BoolProperty_default_value_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BoolProperty_default_get;
    return fn(ptr);
}

void BoolProperty_default_array_get(PointerRNA *ptr, bool values[])
{
    PropBooleanArrayGetFunc fn = rna_BoolProperty_default_array_get;
    fn(ptr, values);
}

int BoolProperty_array_length_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Property_array_length_get;
    return fn(ptr);
}

void BoolProperty_array_dimensions_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Property_array_dimensions_get;
    fn(ptr, values);
}

bool BoolProperty_is_array_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NumberProperty_is_array_get;
    return fn(ptr);
}

int IntProperty_default_value_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_default_get;
    return fn(ptr);
}

void IntProperty_default_array_get(PointerRNA *ptr, int values[])
{
    PropIntArrayGetFunc fn = rna_IntProperty_default_array_get;
    fn(ptr, values);
}

int IntProperty_array_length_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Property_array_length_get;
    return fn(ptr);
}

void IntProperty_array_dimensions_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Property_array_dimensions_get;
    fn(ptr, values);
}

bool IntProperty_is_array_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NumberProperty_is_array_get;
    return fn(ptr);
}

int IntProperty_hard_min_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_hard_min_get;
    return fn(ptr);
}

int IntProperty_hard_max_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_hard_max_get;
    return fn(ptr);
}

int IntProperty_soft_min_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_soft_min_get;
    return fn(ptr);
}

int IntProperty_soft_max_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_soft_max_get;
    return fn(ptr);
}

int IntProperty_step_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_IntProperty_step_get;
    return fn(ptr);
}

float FloatProperty_default_value_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_default_get;
    return fn(ptr);
}

void FloatProperty_default_array_get(PointerRNA *ptr, float values[])
{
    PropFloatArrayGetFunc fn = rna_FloatProperty_default_array_get;
    fn(ptr, values);
}

int FloatProperty_array_length_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Property_array_length_get;
    return fn(ptr);
}

void FloatProperty_array_dimensions_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Property_array_dimensions_get;
    fn(ptr, values);
}

bool FloatProperty_is_array_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_NumberProperty_is_array_get;
    return fn(ptr);
}

float FloatProperty_hard_min_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_hard_min_get;
    return fn(ptr);
}

float FloatProperty_hard_max_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_hard_max_get;
    return fn(ptr);
}

float FloatProperty_soft_min_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_soft_min_get;
    return fn(ptr);
}

float FloatProperty_soft_max_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_soft_max_get;
    return fn(ptr);
}

float FloatProperty_step_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_FloatProperty_step_get;
    return fn(ptr);
}

int FloatProperty_precision_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_FloatProperty_precision_get;
    return fn(ptr);
}

void StringProperty_default_value_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_StringProperty_default_get;
    fn(ptr, value);
}

int StringProperty_default_value_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_StringProperty_default_length;
    return fn(ptr);
}

int StringProperty_length_max_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_StringProperty_max_length_get;
    return fn(ptr);
}

int EnumProperty_default_value_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_EnumProperty_default_get;
    return fn(ptr);
}

int EnumProperty_default_flag_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_EnumProperty_default_get;
    return fn(ptr);
}

static PointerRNA EnumProperty_enum_items_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

void EnumProperty_enum_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_EnumProperty_enum_items;

    PropCollectionBeginFunc fn = rna_EnumProperty_items_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_get(iter);
    }
}

void EnumProperty_enum_items_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_get(iter);
    }
}

void EnumProperty_enum_items_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool EnumProperty_enum_items_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    EnumProperty_enum_items_begin(&iter, ptr);

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
        if (found) { *r_ptr = EnumProperty_enum_items_get(&iter); }
    }

    EnumProperty_enum_items_end(&iter);

    return found;
}

static PointerRNA EnumProperty_enum_items_static_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

void EnumProperty_enum_items_static_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_EnumProperty_enum_items_static;

    PropCollectionBeginFunc fn = rna_EnumProperty_items_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_static_get(iter);
    }
}

void EnumProperty_enum_items_static_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_static_get(iter);
    }
}

void EnumProperty_enum_items_static_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool EnumProperty_enum_items_static_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    EnumProperty_enum_items_static_begin(&iter, ptr);

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
        if (found) { *r_ptr = EnumProperty_enum_items_static_get(&iter); }
    }

    EnumProperty_enum_items_static_end(&iter);

    return found;
}

static PointerRNA EnumProperty_enum_items_static_ui_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

void EnumProperty_enum_items_static_ui_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_EnumProperty_enum_items_static_ui;

    PropCollectionBeginFunc fn = rna_EnumProperty_items_ui_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_static_ui_get(iter);
    }
}

void EnumProperty_enum_items_static_ui_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = EnumProperty_enum_items_static_ui_get(iter);
    }
}

void EnumProperty_enum_items_static_ui_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool EnumProperty_enum_items_static_ui_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    EnumProperty_enum_items_static_ui_begin(&iter, ptr);

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
        if (found) { *r_ptr = EnumProperty_enum_items_static_ui_get(&iter); }
    }

    EnumProperty_enum_items_static_ui_end(&iter);

    return found;
}

static PointerRNA EnumPropertyItem_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void EnumPropertyItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_EnumPropertyItem_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = EnumPropertyItem_rna_properties_get(iter);
    }
}

void EnumPropertyItem_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = EnumPropertyItem_rna_properties_get(iter);
    }
}

void EnumPropertyItem_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool EnumPropertyItem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA EnumPropertyItem_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void EnumPropertyItem_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_EnumPropertyItem_name_get;
    fn(ptr, value);
}

int EnumPropertyItem_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_EnumPropertyItem_name_length;
    return fn(ptr);
}

void EnumPropertyItem_description_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_EnumPropertyItem_description_get;
    fn(ptr, value);
}

int EnumPropertyItem_description_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_EnumPropertyItem_description_length;
    return fn(ptr);
}

void EnumPropertyItem_identifier_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_EnumPropertyItem_identifier_get;
    fn(ptr, value);
}

int EnumPropertyItem_identifier_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_EnumPropertyItem_identifier_length;
    return fn(ptr);
}

int EnumPropertyItem_value_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_EnumPropertyItem_value_get;
    return fn(ptr);
}

int EnumPropertyItem_icon_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_EnumPropertyItem_icon_get;
    return fn(ptr);
}

PointerRNA PointerProperty_fixed_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_PointerProperty_fixed_type_get;
    return fn(ptr);
}

PointerRNA CollectionProperty_fixed_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_CollectionProperty_fixed_type_get;
    return fn(ptr);
}

static PointerRNA Function_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Function_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Function_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Function_rna_properties_get(iter);
    }
}

void Function_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Function_rna_properties_get(iter);
    }
}

void Function_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Function_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Function_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Function_identifier_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Function_identifier_get;
    fn(ptr, value);
}

int Function_identifier_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Function_identifier_length;
    return fn(ptr);
}

void Function_description_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Function_description_get;
    fn(ptr, value);
}

int Function_description_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Function_description_length;
    return fn(ptr);
}

static PointerRNA Function_parameters_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Property, rna_iterator_listbase_get(iter));
}

void Function_parameters_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Function_parameters;

    PropCollectionBeginFunc fn = rna_Function_parameters_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Function_parameters_get(iter);
    }
}

void Function_parameters_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Function_parameters_get(iter);
    }
}

void Function_parameters_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Function_parameters_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Function_parameters_begin(&iter, ptr);

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
        if (found) { *r_ptr = Function_parameters_get(&iter); }
    }

    Function_parameters_end(&iter);

    return found;
}

bool Function_is_registered_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Function_registered_get;
    return fn(ptr);
}

bool Function_is_registered_optional_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Function_registered_optional_get;
    return fn(ptr);
}

bool Function_use_self_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Function_no_self_get;
    return fn(ptr);
}

bool Function_use_self_type_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Function_use_self_type_get;
    return fn(ptr);
}

static PointerRNA BlenderRNA_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlenderRNA_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlenderRNA_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlenderRNA_rna_properties_get(iter);
    }
}

void BlenderRNA_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlenderRNA_rna_properties_get(iter);
    }
}

void BlenderRNA_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlenderRNA_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlenderRNA_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int BlenderRNA_structs_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_BlenderRNA_structs_length;
    return fn(ptr);
}

static PointerRNA BlenderRNA_structs_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Struct, rna_iterator_array_dereference_get(iter));
}

void BlenderRNA_structs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlenderRNA_structs;

    PropCollectionBeginFunc fn = rna_BlenderRNA_structs_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlenderRNA_structs_get(iter);
    }
}

void BlenderRNA_structs_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlenderRNA_structs_get(iter);
    }
}

void BlenderRNA_structs_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool BlenderRNA_structs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_BlenderRNA_structs_lookup_int;
    return fn(ptr, index, r_ptr);
}

bool BlenderRNA_structs_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_BlenderRNA_structs_lookup_string;
    return fn(ptr, key, r_ptr);
}

static PointerRNA PrimitiveString_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PrimitiveString_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PrimitiveString_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PrimitiveString_rna_properties_get(iter);
    }
}

void PrimitiveString_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PrimitiveString_rna_properties_get(iter);
    }
}

void PrimitiveString_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PrimitiveString_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PrimitiveString_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void PrimitiveString_value_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_PrimitiveString_value_get;
    fn(ptr, value);
}

int PrimitiveString_value_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_PrimitiveString_value_length;
    return fn(ptr);
}

static PointerRNA PrimitiveInt_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PrimitiveInt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PrimitiveInt_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PrimitiveInt_rna_properties_get(iter);
    }
}

void PrimitiveInt_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PrimitiveInt_rna_properties_get(iter);
    }
}

void PrimitiveInt_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PrimitiveInt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PrimitiveInt_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int PrimitiveInt_value_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_PrimitiveInt_value_get;
    return fn(ptr);
}

static PointerRNA PrimitiveFloat_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PrimitiveFloat_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PrimitiveFloat_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PrimitiveFloat_rna_properties_get(iter);
    }
}

void PrimitiveFloat_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PrimitiveFloat_rna_properties_get(iter);
    }
}

void PrimitiveFloat_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PrimitiveFloat_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PrimitiveFloat_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float PrimitiveFloat_value_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_PrimitiveFloat_value_get;
    return fn(ptr);
}

static PointerRNA PrimitiveBoolean_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void PrimitiveBoolean_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_PrimitiveBoolean_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = PrimitiveBoolean_rna_properties_get(iter);
    }
}

void PrimitiveBoolean_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = PrimitiveBoolean_rna_properties_get(iter);
    }
}

void PrimitiveBoolean_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool PrimitiveBoolean_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA PrimitiveBoolean_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool PrimitiveBoolean_value_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_PrimitiveBoolean_value_get;
    return fn(ptr);
}



int BoolProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}


int IntProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}


int FloatProperty_default_array_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_NumberProperty_default_array_get_length(ptr, arraylen);
}













/* Struct Definition */
static CollectionPropertyRNA rna_Struct_rna_properties_;
PropertyRNA &rna_Struct_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Struct_rna_properties_);

static PointerPropertyRNA rna_Struct_rna_type_;
PropertyRNA &rna_Struct_rna_type = reinterpret_cast<PropertyRNA &>(rna_Struct_rna_type_);

static StringPropertyRNA rna_Struct_name_;
PropertyRNA &rna_Struct_name = reinterpret_cast<PropertyRNA &>(rna_Struct_name_);

static StringPropertyRNA rna_Struct_identifier_;
PropertyRNA &rna_Struct_identifier = reinterpret_cast<PropertyRNA &>(rna_Struct_identifier_);

static StringPropertyRNA rna_Struct_description_;
PropertyRNA &rna_Struct_description = reinterpret_cast<PropertyRNA &>(rna_Struct_description_);

static StringPropertyRNA rna_Struct_translation_context_;
PropertyRNA &rna_Struct_translation_context = reinterpret_cast<PropertyRNA &>(rna_Struct_translation_context_);

static PointerPropertyRNA rna_Struct_base_;
PropertyRNA &rna_Struct_base = reinterpret_cast<PropertyRNA &>(rna_Struct_base_);

static PointerPropertyRNA rna_Struct_nested_;
PropertyRNA &rna_Struct_nested = reinterpret_cast<PropertyRNA &>(rna_Struct_nested_);

static PointerPropertyRNA rna_Struct_name_property_;
PropertyRNA &rna_Struct_name_property = reinterpret_cast<PropertyRNA &>(rna_Struct_name_property_);

static CollectionPropertyRNA rna_Struct_properties_;
PropertyRNA &rna_Struct_properties = reinterpret_cast<PropertyRNA &>(rna_Struct_properties_);

static CollectionPropertyRNA rna_Struct_functions_;
PropertyRNA &rna_Struct_functions = reinterpret_cast<PropertyRNA &>(rna_Struct_functions_);

static CollectionPropertyRNA rna_Struct_property_tags_;
PropertyRNA &rna_Struct_property_tags = reinterpret_cast<PropertyRNA &>(rna_Struct_property_tags_);

StructRNA *RNA_Struct;
void register_struct_Struct(BlenderRNA &brna)
{
	rna_Struct_rna_properties_ = {
		{&rna_Struct_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_rna_properties_begin, Struct_rna_properties_next, Struct_rna_properties_end, Struct_rna_properties_get, nullptr, nullptr, Struct_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Struct_rna_type_ = {
		{&rna_Struct_name, 	&rna_Struct_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Struct_name_ = {
		{&rna_Struct_identifier, 	&rna_Struct_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Human readable name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_name_get, Struct_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Struct_identifier_ = {
		{&rna_Struct_description, 	&rna_Struct_name,
		-1, "identifier", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Identifier",
		"Unique name used in the code and scripting",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_identifier_get, Struct_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Struct_description_ = {
		{&rna_Struct_translation_context, 	&rna_Struct_identifier,
		-1, "description", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Description",
		"Description of the Struct\'s purpose",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_description_get, Struct_description_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Struct_translation_context_ = {
		{&rna_Struct_base, 	&rna_Struct_description,
		-1, "translation_context", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Translation Context",
		"Translation context of the struct\'s name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_translation_context_get, Struct_translation_context_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Struct_base_ = {
		{&rna_Struct_nested, 	&rna_Struct_translation_context,
		-1, "base", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Base",
		"Struct definition this is derived from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_base_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Struct_nested_ = {
		{&rna_Struct_name_property, 	&rna_Struct_base,
		-1, "nested", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Nested",
		"Struct in which this struct is always nested, and to which it logically belongs",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_nested_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Struct_name_property_ = {
		{&rna_Struct_properties, 	&rna_Struct_nested,
		-1, "name_property", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name Property",
		"Property that gives the name of the struct",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_name_property_get, nullptr, nullptr, nullptr,RNA_StringProperty
	};

	rna_Struct_properties_ = {
		{&rna_Struct_functions, 	&rna_Struct_name_property,
		-1, "properties", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Properties",
		"Properties in the struct",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_properties_begin, Struct_properties_next, Struct_properties_end, Struct_properties_get, nullptr, nullptr, nullptr, nullptr, RNA_Property
	};

	rna_Struct_functions_ = {
		{&rna_Struct_property_tags, 	&rna_Struct_properties,
		-1, "functions", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Functions",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_functions_begin, Struct_functions_next, Struct_functions_end, Struct_functions_get, nullptr, Struct_functions_lookup_int, nullptr, nullptr, RNA_Function
	};

	rna_Struct_property_tags_ = {
		{nullptr, 	&rna_Struct_functions,
		-1, "property_tags", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Property Tags",
		"Tags that properties can use to influence behavior",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Struct_property_tags_begin, Struct_property_tags_next, Struct_property_tags_end, Struct_property_tags_get, nullptr, Struct_property_tags_lookup_int, nullptr, nullptr, RNA_EnumPropertyItem
	};

	StructRNA *srna = RNA_Struct;
	srna->cont.properties = {&rna_Struct_rna_properties, &rna_Struct_property_tags};
	srna->identifier = "Struct";
	srna->flag = 516;
	srna->name = "Struct Definition";
	srna->description = "RNA structure definition";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Struct_identifier;
	srna->iteratorproperty = &rna_Struct_rna_properties;
};

/* Property Definition */
static CollectionPropertyRNA rna_Property_rna_properties_;
PropertyRNA &rna_Property_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Property_rna_properties_);

static PointerPropertyRNA rna_Property_rna_type_;
PropertyRNA &rna_Property_rna_type = reinterpret_cast<PropertyRNA &>(rna_Property_rna_type_);

static StringPropertyRNA rna_Property_name_;
PropertyRNA &rna_Property_name = reinterpret_cast<PropertyRNA &>(rna_Property_name_);

static StringPropertyRNA rna_Property_identifier_;
PropertyRNA &rna_Property_identifier = reinterpret_cast<PropertyRNA &>(rna_Property_identifier_);

static StringPropertyRNA rna_Property_description_;
PropertyRNA &rna_Property_description = reinterpret_cast<PropertyRNA &>(rna_Property_description_);

static StringPropertyRNA rna_Property_translation_context_;
PropertyRNA &rna_Property_translation_context = reinterpret_cast<PropertyRNA &>(rna_Property_translation_context_);

static EnumPropertyRNA rna_Property_type_;
PropertyRNA &rna_Property_type = reinterpret_cast<PropertyRNA &>(rna_Property_type_);

static EnumPropertyRNA rna_Property_subtype_;
PropertyRNA &rna_Property_subtype = reinterpret_cast<PropertyRNA &>(rna_Property_subtype_);

static PointerPropertyRNA rna_Property_srna_;
PropertyRNA &rna_Property_srna = reinterpret_cast<PropertyRNA &>(rna_Property_srna_);

static EnumPropertyRNA rna_Property_unit_;
PropertyRNA &rna_Property_unit = reinterpret_cast<PropertyRNA &>(rna_Property_unit_);

static EnumPropertyRNA rna_Property_icon_;
PropertyRNA &rna_Property_icon = reinterpret_cast<PropertyRNA &>(rna_Property_icon_);

static BoolPropertyRNA rna_Property_is_readonly_;
PropertyRNA &rna_Property_is_readonly = reinterpret_cast<PropertyRNA &>(rna_Property_is_readonly_);

static BoolPropertyRNA rna_Property_is_animatable_;
PropertyRNA &rna_Property_is_animatable = reinterpret_cast<PropertyRNA &>(rna_Property_is_animatable_);

static BoolPropertyRNA rna_Property_is_overridable_;
PropertyRNA &rna_Property_is_overridable = reinterpret_cast<PropertyRNA &>(rna_Property_is_overridable_);

static BoolPropertyRNA rna_Property_is_required_;
PropertyRNA &rna_Property_is_required = reinterpret_cast<PropertyRNA &>(rna_Property_is_required_);

static BoolPropertyRNA rna_Property_is_argument_optional_;
PropertyRNA &rna_Property_is_argument_optional = reinterpret_cast<PropertyRNA &>(rna_Property_is_argument_optional_);

static BoolPropertyRNA rna_Property_is_never_none_;
PropertyRNA &rna_Property_is_never_none = reinterpret_cast<PropertyRNA &>(rna_Property_is_never_none_);

static BoolPropertyRNA rna_Property_is_hidden_;
PropertyRNA &rna_Property_is_hidden = reinterpret_cast<PropertyRNA &>(rna_Property_is_hidden_);

static BoolPropertyRNA rna_Property_is_skip_save_;
PropertyRNA &rna_Property_is_skip_save = reinterpret_cast<PropertyRNA &>(rna_Property_is_skip_save_);

static BoolPropertyRNA rna_Property_is_skip_preset_;
PropertyRNA &rna_Property_is_skip_preset = reinterpret_cast<PropertyRNA &>(rna_Property_is_skip_preset_);

static BoolPropertyRNA rna_Property_is_output_;
PropertyRNA &rna_Property_is_output = reinterpret_cast<PropertyRNA &>(rna_Property_is_output_);

static BoolPropertyRNA rna_Property_is_registered_;
PropertyRNA &rna_Property_is_registered = reinterpret_cast<PropertyRNA &>(rna_Property_is_registered_);

static BoolPropertyRNA rna_Property_is_registered_optional_;
PropertyRNA &rna_Property_is_registered_optional = reinterpret_cast<PropertyRNA &>(rna_Property_is_registered_optional_);

static BoolPropertyRNA rna_Property_is_runtime_;
PropertyRNA &rna_Property_is_runtime = reinterpret_cast<PropertyRNA &>(rna_Property_is_runtime_);

static BoolPropertyRNA rna_Property_is_enum_flag_;
PropertyRNA &rna_Property_is_enum_flag = reinterpret_cast<PropertyRNA &>(rna_Property_is_enum_flag_);

static BoolPropertyRNA rna_Property_is_library_editable_;
PropertyRNA &rna_Property_is_library_editable = reinterpret_cast<PropertyRNA &>(rna_Property_is_library_editable_);

static BoolPropertyRNA rna_Property_is_path_output_;
PropertyRNA &rna_Property_is_path_output = reinterpret_cast<PropertyRNA &>(rna_Property_is_path_output_);

static BoolPropertyRNA rna_Property_is_path_supports_blend_relative_;
PropertyRNA &rna_Property_is_path_supports_blend_relative = reinterpret_cast<PropertyRNA &>(rna_Property_is_path_supports_blend_relative_);

static BoolPropertyRNA rna_Property_is_path_supports_templates_;
PropertyRNA &rna_Property_is_path_supports_templates = reinterpret_cast<PropertyRNA &>(rna_Property_is_path_supports_templates_);

static BoolPropertyRNA rna_Property_is_deprecated_;
PropertyRNA &rna_Property_is_deprecated = reinterpret_cast<PropertyRNA &>(rna_Property_is_deprecated_);

static StringPropertyRNA rna_Property_deprecated_note_;
PropertyRNA &rna_Property_deprecated_note = reinterpret_cast<PropertyRNA &>(rna_Property_deprecated_note_);

static IntPropertyRNA rna_Property_deprecated_version_;
PropertyRNA &rna_Property_deprecated_version = reinterpret_cast<PropertyRNA &>(rna_Property_deprecated_version_);

static IntPropertyRNA rna_Property_deprecated_removal_version_;
PropertyRNA &rna_Property_deprecated_removal_version = reinterpret_cast<PropertyRNA &>(rna_Property_deprecated_removal_version_);

static EnumPropertyRNA rna_Property_tags_;
PropertyRNA &rna_Property_tags = reinterpret_cast<PropertyRNA &>(rna_Property_tags_);

StructRNA *RNA_Property;
void register_struct_Property(BlenderRNA &brna)
{
	rna_Property_rna_properties_ = {
		{&rna_Property_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_rna_properties_begin, Property_rna_properties_next, Property_rna_properties_end, Property_rna_properties_get, nullptr, nullptr, Property_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Property_rna_type_ = {
		{&rna_Property_name, 	&rna_Property_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Property_name_ = {
		{&rna_Property_identifier, 	&rna_Property_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Human readable name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_name_get, Property_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Property_identifier_ = {
		{&rna_Property_description, 	&rna_Property_name,
		-1, "identifier", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Identifier",
		"Unique name used in the code and scripting",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_identifier_get, Property_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Property_description_ = {
		{&rna_Property_translation_context, 	&rna_Property_identifier,
		-1, "description", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Description",
		"Description of the property for tooltips",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_description_get, Property_description_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Property_translation_context_ = {
		{&rna_Property_type, 	&rna_Property_description,
		-1, "translation_context", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Translation Context",
		"Translation context of the property\'s name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_translation_context_get, Property_translation_context_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Property_type_ = {
		{&rna_Property_subtype, 	&rna_Property_translation_context,
		-1, "type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Data type of the property",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_property_type_items, 7, 0
	};

	rna_Property_subtype_ = {
		{&rna_Property_srna, 	&rna_Property_type,
		-1, "subtype", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subtype",
		"Semantic interpretation of the property",
		0, "Unit",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_subtype_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_property_subtype_items, 38, 0
	};

	rna_Property_srna_ = {
		{&rna_Property_unit, 	&rna_Property_subtype,
		-1, "srna", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Base",
		"Struct definition used for properties assigned to this item",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_srna_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Property_unit_ = {
		{&rna_Property_icon, 	&rna_Property_srna,
		-1, "unit", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Unit",
		"Type of units for this property",
		0, "Unit",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_unit_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_property_unit_items, 16, 0
	};

	rna_Property_icon_ = {
		{&rna_Property_is_readonly, 	&rna_Property_unit,
		-1, "icon", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Icon",
		"Icon of the item",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_icon_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_icon_items, 1029, 0
	};

	rna_Property_is_readonly_ = {
		{&rna_Property_is_animatable, 	&rna_Property_icon,
		-1, "is_readonly", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Read Only",
		"Property is editable through RNA",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_readonly_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_animatable_ = {
		{&rna_Property_is_overridable, 	&rna_Property_is_readonly,
		-1, "is_animatable", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animatable",
		"Property is animatable through RNA",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_animatable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_overridable_ = {
		{&rna_Property_is_required, 	&rna_Property_is_animatable,
		-1, "is_overridable", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Overridable",
		"Property is overridable through RNA",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_overridable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_required_ = {
		{&rna_Property_is_argument_optional, 	&rna_Property_is_overridable,
		-1, "is_required", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Required",
		"False when this property is an optional argument in an RNA function",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_required_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_argument_optional_ = {
		{&rna_Property_is_never_none, 	&rna_Property_is_required,
		-1, "is_argument_optional", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Optional Argument",
		"True when the property is optional in a Python function implementing an RNA function",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_argument_optional_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_never_none_ = {
		{&rna_Property_is_hidden, 	&rna_Property_is_argument_optional,
		-1, "is_never_none", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Never None",
		"True when this value cannot be set to None",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_never_none_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_hidden_ = {
		{&rna_Property_is_skip_save, 	&rna_Property_is_never_none,
		-1, "is_hidden", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hidden",
		"True when the property is hidden",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_hidden_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_skip_save_ = {
		{&rna_Property_is_skip_preset, 	&rna_Property_is_hidden,
		-1, "is_skip_save", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Skip Save",
		"True when the property uses ghost values",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_skip_save_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_skip_preset_ = {
		{&rna_Property_is_output, 	&rna_Property_is_skip_save,
		-1, "is_skip_preset", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Skip Preset",
		"True when the property is not saved in presets",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_skip_preset_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_output_ = {
		{&rna_Property_is_registered, 	&rna_Property_is_skip_preset,
		-1, "is_output", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Return",
		"True when this property is an output value from an RNA function",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_output_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_registered_ = {
		{&rna_Property_is_registered_optional, 	&rna_Property_is_output,
		-1, "is_registered", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Registered",
		"Property is registered as part of type registration",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_registered_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_registered_optional_ = {
		{&rna_Property_is_runtime, 	&rna_Property_is_registered,
		-1, "is_registered_optional", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Registered Optionally",
		"Property is optionally registered as part of type registration",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_registered_optional_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_runtime_ = {
		{&rna_Property_is_enum_flag, 	&rna_Property_is_registered_optional,
		-1, "is_runtime", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Runtime",
		"Property has been dynamically created at runtime",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_runtime_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_enum_flag_ = {
		{&rna_Property_is_library_editable, 	&rna_Property_is_runtime,
		-1, "is_enum_flag", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enum Flag",
		"True when multiple enums",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_enum_flag_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_library_editable_ = {
		{&rna_Property_is_path_output, 	&rna_Property_is_enum_flag,
		-1, "is_library_editable", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Library Editable",
		"Property is editable from linked instances (changes not saved)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_library_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_path_output_ = {
		{&rna_Property_is_path_supports_blend_relative, 	&rna_Property_is_library_editable,
		-1, "is_path_output", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Path Output",
		"Property is a filename, filepath or directory output",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_path_output_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_path_supports_blend_relative_ = {
		{&rna_Property_is_path_supports_templates, 	&rna_Property_is_path_output,
		-1, "is_path_supports_blend_relative", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Path Relative",
		"Property is a path which supports the \"//\" prefix, signifying the location as relative to the \".blend\" file\'s directory",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_path_supports_blend_relative_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_path_supports_templates_ = {
		{&rna_Property_is_deprecated, 	&rna_Property_is_path_supports_blend_relative,
		-1, "is_path_supports_templates", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Variable Expression Support",
		"Property is a path which supports the \"{variable_name}\" variable expression syntax, which substitutes the value of the referenced variable in place of the expression",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_path_supports_templates_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_is_deprecated_ = {
		{&rna_Property_deprecated_note, 	&rna_Property_is_path_supports_templates,
		-1, "is_deprecated", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deprecated",
		"The property is deprecated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_is_deprecated_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Property_deprecated_note_ = {
		{&rna_Property_deprecated_version, 	&rna_Property_is_deprecated,
		-1, "deprecated_note", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deprecated Note",
		"A note regarding deprecation",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_deprecated_note_get, Property_deprecated_note_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	static int rna_Property_deprecated_version_default[3] = {
		0,
		0,
		0
	};
	rna_Property_deprecated_version_ = {
		{&rna_Property_deprecated_removal_version, 	&rna_Property_deprecated_note,
		-1, "deprecated_version", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deprecated Version",
		"The Blender version this was deprecated",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Property_deprecated_version_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_Property_deprecated_version_default
	};

	static int rna_Property_deprecated_removal_version_default[3] = {
		0,
		0,
		0
	};
	rna_Property_deprecated_removal_version_ = {
		{&rna_Property_tags, 	&rna_Property_deprecated_version,
		-1, "deprecated_removal_version", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deprecated Removal Version",
		"The Blender version this is expected to be removed",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Property_deprecated_removal_version_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_Property_deprecated_removal_version_default
	};

	static const EnumPropertyItem rna_Property_tags_items[1] = {
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Property_tags_ = {
		{nullptr, 	&rna_Property_deprecated_removal_version,
		-1, "tags", 2097202, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tags",
		"Subset of tags (defined in parent struct) that are set for this property",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Property_tags_get, nullptr, rna_Property_tags_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Property_tags_items, 0, 0
	};

	StructRNA *srna = RNA_Property;
	srna->cont.properties = {&rna_Property_rna_properties, &rna_Property_tags};
	srna->identifier = "Property";
	srna->flag = 516;
	srna->name = "Property Definition";
	srna->description = "RNA property definition";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Property_identifier;
	srna->iteratorproperty = &rna_Property_rna_properties;
	srna->refine = rna_Property_refine;
};

/* Boolean Definition */
static BoolPropertyRNA rna_BoolProperty_default_;
PropertyRNA &rna_BoolProperty_default = reinterpret_cast<PropertyRNA &>(rna_BoolProperty_default_);

static BoolPropertyRNA rna_BoolProperty_default_array_;
PropertyRNA &rna_BoolProperty_default_array = reinterpret_cast<PropertyRNA &>(rna_BoolProperty_default_array_);

static IntPropertyRNA rna_BoolProperty_array_length_;
PropertyRNA &rna_BoolProperty_array_length = reinterpret_cast<PropertyRNA &>(rna_BoolProperty_array_length_);

static IntPropertyRNA rna_BoolProperty_array_dimensions_;
PropertyRNA &rna_BoolProperty_array_dimensions = reinterpret_cast<PropertyRNA &>(rna_BoolProperty_array_dimensions_);

static BoolPropertyRNA rna_BoolProperty_is_array_;
PropertyRNA &rna_BoolProperty_is_array = reinterpret_cast<PropertyRNA &>(rna_BoolProperty_is_array_);

StructRNA *RNA_BoolProperty;
void register_struct_BoolProperty(BlenderRNA &brna)
{
	rna_BoolProperty_default_ = {
		{&rna_BoolProperty_default_array, 	nullptr,
		-1, "default", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default",
		"Default value for this number",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoolProperty_default_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static bool rna_BoolProperty_default_array_default[3] = {
		0,
		0,
		0
	};
	rna_BoolProperty_default_array_ = {
		{&rna_BoolProperty_array_length, 	&rna_BoolProperty_default,
		-1, "default_array", 131074, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default Array",
		"Default value for this array",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, BoolProperty_default_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_BoolProperty_default_array_default
	};

	rna_BoolProperty_array_length_ = {
		{&rna_BoolProperty_array_dimensions, 	&rna_BoolProperty_default_array,
		-1, "array_length", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Array Length",
		"Maximum length of the array, 0 means unlimited",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoolProperty_array_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static int rna_BoolProperty_array_dimensions_default[3] = {
		0,
		0,
		0
	};
	rna_BoolProperty_array_dimensions_ = {
		{&rna_BoolProperty_is_array, 	&rna_BoolProperty_array_length,
		-1, "array_dimensions", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Array Dimensions",
		"Length of each dimension of the array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, BoolProperty_array_dimensions_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_BoolProperty_array_dimensions_default
	};

	rna_BoolProperty_is_array_ = {
		{nullptr, 	&rna_BoolProperty_array_dimensions,
		-1, "is_array", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Array",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoolProperty_is_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BoolProperty;
	srna->cont.properties = {&rna_BoolProperty_default, &rna_BoolProperty_is_array};
	srna->identifier = "BoolProperty";
	srna->flag = 516;
	srna->name = "Boolean Definition";
	srna->description = "RNA boolean property definition";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Property_identifier;
	srna->iteratorproperty = &rna_Property_rna_properties;
	srna->base = RNA_Property;
	srna->refine = rna_Property_refine;
};

/* Int Definition */
static IntPropertyRNA rna_IntProperty_default_;
PropertyRNA &rna_IntProperty_default = reinterpret_cast<PropertyRNA &>(rna_IntProperty_default_);

static IntPropertyRNA rna_IntProperty_default_array_;
PropertyRNA &rna_IntProperty_default_array = reinterpret_cast<PropertyRNA &>(rna_IntProperty_default_array_);

static IntPropertyRNA rna_IntProperty_array_length_;
PropertyRNA &rna_IntProperty_array_length = reinterpret_cast<PropertyRNA &>(rna_IntProperty_array_length_);

static IntPropertyRNA rna_IntProperty_array_dimensions_;
PropertyRNA &rna_IntProperty_array_dimensions = reinterpret_cast<PropertyRNA &>(rna_IntProperty_array_dimensions_);

static BoolPropertyRNA rna_IntProperty_is_array_;
PropertyRNA &rna_IntProperty_is_array = reinterpret_cast<PropertyRNA &>(rna_IntProperty_is_array_);

static IntPropertyRNA rna_IntProperty_hard_min_;
PropertyRNA &rna_IntProperty_hard_min = reinterpret_cast<PropertyRNA &>(rna_IntProperty_hard_min_);

static IntPropertyRNA rna_IntProperty_hard_max_;
PropertyRNA &rna_IntProperty_hard_max = reinterpret_cast<PropertyRNA &>(rna_IntProperty_hard_max_);

static IntPropertyRNA rna_IntProperty_soft_min_;
PropertyRNA &rna_IntProperty_soft_min = reinterpret_cast<PropertyRNA &>(rna_IntProperty_soft_min_);

static IntPropertyRNA rna_IntProperty_soft_max_;
PropertyRNA &rna_IntProperty_soft_max = reinterpret_cast<PropertyRNA &>(rna_IntProperty_soft_max_);

static IntPropertyRNA rna_IntProperty_step_;
PropertyRNA &rna_IntProperty_step = reinterpret_cast<PropertyRNA &>(rna_IntProperty_step_);

StructRNA *RNA_IntProperty;
void register_struct_IntProperty(BlenderRNA &brna)
{
	rna_IntProperty_default_ = {
		{&rna_IntProperty_default_array, 	nullptr,
		-1, "default", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default",
		"Default value for this number",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntProperty_default_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static int rna_IntProperty_default_array_default[3] = {
		0,
		0,
		0
	};
	rna_IntProperty_default_array_ = {
		{&rna_IntProperty_array_length, 	&rna_IntProperty_default,
		-1, "default_array", 131074, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default Array",
		"Default value for this array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, IntProperty_default_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_IntProperty_default_array_default
	};

	rna_IntProperty_array_length_ = {
		{&rna_IntProperty_array_dimensions, 	&rna_IntProperty_default_array,
		-1, "array_length", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Array Length",
		"Maximum length of the array, 0 means unlimited",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntProperty_array_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static int rna_IntProperty_array_dimensions_default[3] = {
		0,
		0,
		0
	};
	rna_IntProperty_array_dimensions_ = {
		{&rna_IntProperty_is_array, 	&rna_IntProperty_array_length,
		-1, "array_dimensions", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Array Dimensions",
		"Length of each dimension of the array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, IntProperty_array_dimensions_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_IntProperty_array_dimensions_default
	};

	rna_IntProperty_is_array_ = {
		{&rna_IntProperty_hard_min, 	&rna_IntProperty_array_dimensions,
		-1, "is_array", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Array",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntProperty_is_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_IntProperty_hard_min_ = {
		{&rna_IntProperty_hard_max, 	&rna_IntProperty_is_array,
		-1, "hard_min", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hard Minimum",
		"Hard minimum, trying to assign a value below will silently assign this minimum instead",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntProperty_hard_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_IntProperty_hard_max_ = {
		{&rna_IntProperty_soft_min, 	&rna_IntProperty_hard_min,
		-1, "hard_max", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hard Maximum",
		"Hard maximum, trying to assign a value above will silently assign this maximum instead",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntProperty_hard_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_IntProperty_soft_min_ = {
		{&rna_IntProperty_soft_max, 	&rna_IntProperty_hard_max,
		-1, "soft_min", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Soft Minimum",
		"Soft minimum (>= hard_min), user cannot drag widgets below this value in the UI",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntProperty_soft_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_IntProperty_soft_max_ = {
		{&rna_IntProperty_step, 	&rna_IntProperty_soft_min,
		-1, "soft_max", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Soft Maximum",
		"Soft maximum (<= hard_max), user cannot drag widgets above this value in the UI",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntProperty_soft_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_IntProperty_step_ = {
		{nullptr, 	&rna_IntProperty_soft_max,
		-1, "step", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Step",
		"Step size used by number buttons, for floats 1/100th of the step size",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntProperty_step_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_IntProperty;
	srna->cont.properties = {&rna_IntProperty_default, &rna_IntProperty_step};
	srna->identifier = "IntProperty";
	srna->flag = 516;
	srna->name = "Int Definition";
	srna->description = "RNA integer number property definition";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Property_identifier;
	srna->iteratorproperty = &rna_Property_rna_properties;
	srna->base = RNA_Property;
	srna->refine = rna_Property_refine;
};

/* Float Definition */
static FloatPropertyRNA rna_FloatProperty_default_;
PropertyRNA &rna_FloatProperty_default = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_default_);

static FloatPropertyRNA rna_FloatProperty_default_array_;
PropertyRNA &rna_FloatProperty_default_array = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_default_array_);

static IntPropertyRNA rna_FloatProperty_array_length_;
PropertyRNA &rna_FloatProperty_array_length = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_array_length_);

static IntPropertyRNA rna_FloatProperty_array_dimensions_;
PropertyRNA &rna_FloatProperty_array_dimensions = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_array_dimensions_);

static BoolPropertyRNA rna_FloatProperty_is_array_;
PropertyRNA &rna_FloatProperty_is_array = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_is_array_);

static FloatPropertyRNA rna_FloatProperty_hard_min_;
PropertyRNA &rna_FloatProperty_hard_min = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_hard_min_);

static FloatPropertyRNA rna_FloatProperty_hard_max_;
PropertyRNA &rna_FloatProperty_hard_max = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_hard_max_);

static FloatPropertyRNA rna_FloatProperty_soft_min_;
PropertyRNA &rna_FloatProperty_soft_min = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_soft_min_);

static FloatPropertyRNA rna_FloatProperty_soft_max_;
PropertyRNA &rna_FloatProperty_soft_max = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_soft_max_);

static FloatPropertyRNA rna_FloatProperty_step_;
PropertyRNA &rna_FloatProperty_step = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_step_);

static IntPropertyRNA rna_FloatProperty_precision_;
PropertyRNA &rna_FloatProperty_precision = reinterpret_cast<PropertyRNA &>(rna_FloatProperty_precision_);

StructRNA *RNA_FloatProperty;
void register_struct_FloatProperty(BlenderRNA &brna)
{
	rna_FloatProperty_default_ = {
		{&rna_FloatProperty_default_array, 	nullptr,
		-1, "default", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default",
		"Default value for this number",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_default_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_FloatProperty_default_array_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_FloatProperty_default_array_ = {
		{&rna_FloatProperty_array_length, 	&rna_FloatProperty_default,
		-1, "default_array", 131074, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default Array",
		"Default value for this array",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, FloatProperty_default_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FloatProperty_default_array_default
	};

	rna_FloatProperty_array_length_ = {
		{&rna_FloatProperty_array_dimensions, 	&rna_FloatProperty_default_array,
		-1, "array_length", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Array Length",
		"Maximum length of the array, 0 means unlimited",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_array_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static int rna_FloatProperty_array_dimensions_default[3] = {
		0,
		0,
		0
	};
	rna_FloatProperty_array_dimensions_ = {
		{&rna_FloatProperty_is_array, 	&rna_FloatProperty_array_length,
		-1, "array_dimensions", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Array Dimensions",
		"Length of each dimension of the array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, FloatProperty_array_dimensions_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_FloatProperty_array_dimensions_default
	};

	rna_FloatProperty_is_array_ = {
		{&rna_FloatProperty_hard_min, 	&rna_FloatProperty_array_dimensions,
		-1, "is_array", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Array",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_is_array_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FloatProperty_hard_min_ = {
		{&rna_FloatProperty_hard_max, 	&rna_FloatProperty_is_array,
		-1, "hard_min", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hard Minimum",
		"Hard minimum, trying to assign a value below will silently assign this minimum instead",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_hard_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FloatProperty_hard_max_ = {
		{&rna_FloatProperty_soft_min, 	&rna_FloatProperty_hard_min,
		-1, "hard_max", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hard Maximum",
		"Hard maximum, trying to assign a value above will silently assign this maximum instead",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_hard_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FloatProperty_soft_min_ = {
		{&rna_FloatProperty_soft_max, 	&rna_FloatProperty_hard_max,
		-1, "soft_min", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Soft Minimum",
		"Soft minimum (>= hard_min), user cannot drag widgets below this value in the UI",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_soft_min_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FloatProperty_soft_max_ = {
		{&rna_FloatProperty_step, 	&rna_FloatProperty_soft_min,
		-1, "soft_max", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Soft Maximum",
		"Soft maximum (<= hard_max), user cannot drag widgets above this value in the UI",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_soft_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FloatProperty_step_ = {
		{&rna_FloatProperty_precision, 	&rna_FloatProperty_soft_max,
		-1, "step", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Step",
		"Step size used by number buttons, for floats 1/100th of the step size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_step_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FloatProperty_precision_ = {
		{nullptr, 	&rna_FloatProperty_step,
		-1, "precision", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Precision",
		"Number of digits after the dot used by buttons. Fraction is automatically hidden for exact integer values of fields with unit \'NONE\' or \'TIME\' (frame count) and step divisible by 100.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatProperty_precision_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FloatProperty;
	srna->cont.properties = {&rna_FloatProperty_default, &rna_FloatProperty_precision};
	srna->identifier = "FloatProperty";
	srna->flag = 516;
	srna->name = "Float Definition";
	srna->description = "RNA floating-point number (single precision) property definition";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Property_identifier;
	srna->iteratorproperty = &rna_Property_rna_properties;
	srna->base = RNA_Property;
	srna->refine = rna_Property_refine;
};

/* String Definition */
static StringPropertyRNA rna_StringProperty_default_;
PropertyRNA &rna_StringProperty_default = reinterpret_cast<PropertyRNA &>(rna_StringProperty_default_);

static IntPropertyRNA rna_StringProperty_length_max_;
PropertyRNA &rna_StringProperty_length_max = reinterpret_cast<PropertyRNA &>(rna_StringProperty_length_max_);

StructRNA *RNA_StringProperty;
void register_struct_StringProperty(BlenderRNA &brna)
{
	rna_StringProperty_default_ = {
		{&rna_StringProperty_length_max, 	nullptr,
		-1, "default", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default",
		"String default value",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StringProperty_default_value_get, StringProperty_default_value_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_StringProperty_length_max_ = {
		{nullptr, 	&rna_StringProperty_default,
		-1, "length_max", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Maximum Length",
		"Maximum length of the string, 0 means unlimited",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StringProperty_length_max_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_StringProperty;
	srna->cont.properties = {&rna_StringProperty_default, &rna_StringProperty_length_max};
	srna->identifier = "StringProperty";
	srna->flag = 516;
	srna->name = "String Definition";
	srna->description = "RNA text string property definition";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Property_identifier;
	srna->iteratorproperty = &rna_Property_rna_properties;
	srna->base = RNA_Property;
	srna->refine = rna_Property_refine;
};

/* Enum Definition */
static EnumPropertyRNA rna_EnumProperty_default_;
PropertyRNA &rna_EnumProperty_default = reinterpret_cast<PropertyRNA &>(rna_EnumProperty_default_);

static EnumPropertyRNA rna_EnumProperty_default_flag_;
PropertyRNA &rna_EnumProperty_default_flag = reinterpret_cast<PropertyRNA &>(rna_EnumProperty_default_flag_);

static CollectionPropertyRNA rna_EnumProperty_enum_items_;
PropertyRNA &rna_EnumProperty_enum_items = reinterpret_cast<PropertyRNA &>(rna_EnumProperty_enum_items_);

static CollectionPropertyRNA rna_EnumProperty_enum_items_static_;
PropertyRNA &rna_EnumProperty_enum_items_static = reinterpret_cast<PropertyRNA &>(rna_EnumProperty_enum_items_static_);

static CollectionPropertyRNA rna_EnumProperty_enum_items_static_ui_;
PropertyRNA &rna_EnumProperty_enum_items_static_ui = reinterpret_cast<PropertyRNA &>(rna_EnumProperty_enum_items_static_ui_);

StructRNA *RNA_EnumProperty;
void register_struct_EnumProperty(BlenderRNA &brna)
{
	rna_EnumProperty_default_ = {
		{&rna_EnumProperty_default_flag, 	nullptr,
		-1, "default", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default",
		"Default value for this enum",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumProperty_default_value_get, nullptr, rna_EnumProperty_default_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	rna_EnumProperty_default_flag_ = {
		{&rna_EnumProperty_enum_items, 	&rna_EnumProperty_default,
		-1, "default_flag", 2097154, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default",
		"Default value for this enum",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumProperty_default_flag_get, nullptr, rna_EnumProperty_default_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	rna_EnumProperty_enum_items_ = {
		{&rna_EnumProperty_enum_items_static, 	&rna_EnumProperty_default_flag,
		-1, "enum_items", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Items",
		"Possible values for the property",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumProperty_enum_items_begin, EnumProperty_enum_items_next, EnumProperty_enum_items_end, EnumProperty_enum_items_get, nullptr, EnumProperty_enum_items_lookup_int, nullptr, nullptr, RNA_EnumPropertyItem
	};

	rna_EnumProperty_enum_items_static_ = {
		{&rna_EnumProperty_enum_items_static_ui, 	&rna_EnumProperty_enum_items,
		-1, "enum_items_static", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Static Items",
		"Possible values for the property (never calls optional dynamic generation of those)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumProperty_enum_items_static_begin, EnumProperty_enum_items_static_next, EnumProperty_enum_items_static_end, EnumProperty_enum_items_static_get, nullptr, EnumProperty_enum_items_static_lookup_int, nullptr, nullptr, RNA_EnumPropertyItem
	};

	rna_EnumProperty_enum_items_static_ui_ = {
		{nullptr, 	&rna_EnumProperty_enum_items_static,
		-1, "enum_items_static_ui", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Static Items with UI Elements",
		"Possible values for the property (never calls optional dynamic generation of those). Includes UI elements (separators and section headings).",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumProperty_enum_items_static_ui_begin, EnumProperty_enum_items_static_ui_next, EnumProperty_enum_items_static_ui_end, EnumProperty_enum_items_static_ui_get, nullptr, EnumProperty_enum_items_static_ui_lookup_int, nullptr, nullptr, RNA_EnumPropertyItem
	};

	StructRNA *srna = RNA_EnumProperty;
	srna->cont.properties = {&rna_EnumProperty_default, &rna_EnumProperty_enum_items_static_ui};
	srna->identifier = "EnumProperty";
	srna->flag = 516;
	srna->name = "Enum Definition";
	srna->description = "RNA enumeration property definition, to choose from a number of predefined options";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Property_identifier;
	srna->iteratorproperty = &rna_Property_rna_properties;
	srna->base = RNA_Property;
	srna->refine = rna_Property_refine;
};

/* Enum Item Definition */
static CollectionPropertyRNA rna_EnumPropertyItem_rna_properties_;
PropertyRNA &rna_EnumPropertyItem_rna_properties = reinterpret_cast<PropertyRNA &>(rna_EnumPropertyItem_rna_properties_);

static PointerPropertyRNA rna_EnumPropertyItem_rna_type_;
PropertyRNA &rna_EnumPropertyItem_rna_type = reinterpret_cast<PropertyRNA &>(rna_EnumPropertyItem_rna_type_);

static StringPropertyRNA rna_EnumPropertyItem_name_;
PropertyRNA &rna_EnumPropertyItem_name = reinterpret_cast<PropertyRNA &>(rna_EnumPropertyItem_name_);

static StringPropertyRNA rna_EnumPropertyItem_description_;
PropertyRNA &rna_EnumPropertyItem_description = reinterpret_cast<PropertyRNA &>(rna_EnumPropertyItem_description_);

static StringPropertyRNA rna_EnumPropertyItem_identifier_;
PropertyRNA &rna_EnumPropertyItem_identifier = reinterpret_cast<PropertyRNA &>(rna_EnumPropertyItem_identifier_);

static IntPropertyRNA rna_EnumPropertyItem_value_;
PropertyRNA &rna_EnumPropertyItem_value = reinterpret_cast<PropertyRNA &>(rna_EnumPropertyItem_value_);

static EnumPropertyRNA rna_EnumPropertyItem_icon_;
PropertyRNA &rna_EnumPropertyItem_icon = reinterpret_cast<PropertyRNA &>(rna_EnumPropertyItem_icon_);

StructRNA *RNA_EnumPropertyItem;
void register_struct_EnumPropertyItem(BlenderRNA &brna)
{
	rna_EnumPropertyItem_rna_properties_ = {
		{&rna_EnumPropertyItem_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumPropertyItem_rna_properties_begin, EnumPropertyItem_rna_properties_next, EnumPropertyItem_rna_properties_end, EnumPropertyItem_rna_properties_get, nullptr, nullptr, EnumPropertyItem_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_EnumPropertyItem_rna_type_ = {
		{&rna_EnumPropertyItem_name, 	&rna_EnumPropertyItem_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumPropertyItem_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_EnumPropertyItem_name_ = {
		{&rna_EnumPropertyItem_description, 	&rna_EnumPropertyItem_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Human readable name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumPropertyItem_name_get, EnumPropertyItem_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_EnumPropertyItem_description_ = {
		{&rna_EnumPropertyItem_identifier, 	&rna_EnumPropertyItem_name,
		-1, "description", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Description",
		"Description of the item\'s purpose",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumPropertyItem_description_get, EnumPropertyItem_description_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_EnumPropertyItem_identifier_ = {
		{&rna_EnumPropertyItem_value, 	&rna_EnumPropertyItem_description,
		-1, "identifier", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Identifier",
		"Unique name used in the code and scripting",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumPropertyItem_identifier_get, EnumPropertyItem_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_EnumPropertyItem_value_ = {
		{&rna_EnumPropertyItem_icon, 	&rna_EnumPropertyItem_identifier,
		-1, "value", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Value",
		"Value of the item",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumPropertyItem_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_EnumPropertyItem_icon_ = {
		{nullptr, 	&rna_EnumPropertyItem_value,
		-1, "icon", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Icon",
		"Icon of the item",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EnumPropertyItem_icon_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_icon_items, 1029, 0
	};

	StructRNA *srna = RNA_EnumPropertyItem;
	srna->cont.properties = {&rna_EnumPropertyItem_rna_properties, &rna_EnumPropertyItem_icon};
	srna->identifier = "EnumPropertyItem";
	srna->flag = 516;
	srna->name = "Enum Item Definition";
	srna->description = "Definition of a choice in an RNA enum property";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_EnumPropertyItem_identifier;
	srna->iteratorproperty = &rna_EnumPropertyItem_rna_properties;
};

/* Pointer Definition */
static PointerPropertyRNA rna_PointerProperty_fixed_type_;
PropertyRNA &rna_PointerProperty_fixed_type = reinterpret_cast<PropertyRNA &>(rna_PointerProperty_fixed_type_);

StructRNA *RNA_PointerProperty;
void register_struct_PointerProperty(BlenderRNA &brna)
{
	rna_PointerProperty_fixed_type_ = {
		{nullptr, 	nullptr,
		-1, "fixed_type", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pointer Type",
		"Fixed pointer type, empty if variable type",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PointerProperty_fixed_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_PointerProperty;
	srna->cont.properties = {&rna_PointerProperty_fixed_type, &rna_PointerProperty_fixed_type};
	srna->identifier = "PointerProperty";
	srna->flag = 516;
	srna->name = "Pointer Definition";
	srna->description = "RNA pointer property to point to another RNA struct";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Property_identifier;
	srna->iteratorproperty = &rna_Property_rna_properties;
	srna->base = RNA_Property;
	srna->refine = rna_Property_refine;
};

/* Collection Definition */
static PointerPropertyRNA rna_CollectionProperty_fixed_type_;
PropertyRNA &rna_CollectionProperty_fixed_type = reinterpret_cast<PropertyRNA &>(rna_CollectionProperty_fixed_type_);

StructRNA *RNA_CollectionProperty;
void register_struct_CollectionProperty(BlenderRNA &brna)
{
	rna_CollectionProperty_fixed_type_ = {
		{nullptr, 	nullptr,
		-1, "fixed_type", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pointer Type",
		"Fixed pointer type, empty if variable type",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CollectionProperty_fixed_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_CollectionProperty;
	srna->cont.properties = {&rna_CollectionProperty_fixed_type, &rna_CollectionProperty_fixed_type};
	srna->identifier = "CollectionProperty";
	srna->flag = 516;
	srna->name = "Collection Definition";
	srna->description = "RNA collection property to define lists, arrays and mappings";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Property_identifier;
	srna->iteratorproperty = &rna_Property_rna_properties;
	srna->base = RNA_Property;
	srna->refine = rna_Property_refine;
};

/* Function Definition */
static CollectionPropertyRNA rna_Function_rna_properties_;
PropertyRNA &rna_Function_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Function_rna_properties_);

static PointerPropertyRNA rna_Function_rna_type_;
PropertyRNA &rna_Function_rna_type = reinterpret_cast<PropertyRNA &>(rna_Function_rna_type_);

static StringPropertyRNA rna_Function_identifier_;
PropertyRNA &rna_Function_identifier = reinterpret_cast<PropertyRNA &>(rna_Function_identifier_);

static StringPropertyRNA rna_Function_description_;
PropertyRNA &rna_Function_description = reinterpret_cast<PropertyRNA &>(rna_Function_description_);

static CollectionPropertyRNA rna_Function_parameters_;
PropertyRNA &rna_Function_parameters = reinterpret_cast<PropertyRNA &>(rna_Function_parameters_);

static BoolPropertyRNA rna_Function_is_registered_;
PropertyRNA &rna_Function_is_registered = reinterpret_cast<PropertyRNA &>(rna_Function_is_registered_);

static BoolPropertyRNA rna_Function_is_registered_optional_;
PropertyRNA &rna_Function_is_registered_optional = reinterpret_cast<PropertyRNA &>(rna_Function_is_registered_optional_);

static BoolPropertyRNA rna_Function_use_self_;
PropertyRNA &rna_Function_use_self = reinterpret_cast<PropertyRNA &>(rna_Function_use_self_);

static BoolPropertyRNA rna_Function_use_self_type_;
PropertyRNA &rna_Function_use_self_type = reinterpret_cast<PropertyRNA &>(rna_Function_use_self_type_);

StructRNA *RNA_Function;
void register_struct_Function(BlenderRNA &brna)
{
	rna_Function_rna_properties_ = {
		{&rna_Function_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_rna_properties_begin, Function_rna_properties_next, Function_rna_properties_end, Function_rna_properties_get, nullptr, nullptr, Function_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Function_rna_type_ = {
		{&rna_Function_identifier, 	&rna_Function_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Function_identifier_ = {
		{&rna_Function_description, 	&rna_Function_rna_type,
		-1, "identifier", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Identifier",
		"Unique name used in the code and scripting",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_identifier_get, Function_identifier_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Function_description_ = {
		{&rna_Function_parameters, 	&rna_Function_identifier,
		-1, "description", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Description",
		"Description of the Function\'s purpose",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_description_get, Function_description_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Function_parameters_ = {
		{&rna_Function_is_registered, 	&rna_Function_description,
		-1, "parameters", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parameters",
		"Parameters for the function",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_parameters_begin, Function_parameters_next, Function_parameters_end, Function_parameters_get, nullptr, Function_parameters_lookup_int, nullptr, nullptr, RNA_Property
	};

	rna_Function_is_registered_ = {
		{&rna_Function_is_registered_optional, 	&rna_Function_parameters,
		-1, "is_registered", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Registered",
		"Function is registered as callback as part of type registration",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_is_registered_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Function_is_registered_optional_ = {
		{&rna_Function_use_self, 	&rna_Function_is_registered,
		-1, "is_registered_optional", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Registered Optionally",
		"Function is optionally registered as callback part of type registration",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_is_registered_optional_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Function_use_self_ = {
		{&rna_Function_use_self_type, 	&rna_Function_is_registered_optional,
		-1, "use_self", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "No Self",
		"Function does not pass itself as an argument (becomes a static method in Python)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_use_self_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Function_use_self_type_ = {
		{nullptr, 	&rna_Function_use_self,
		-1, "use_self_type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Self Type",
		"Function passes itself type as an argument (becomes a class method in Python if use_self is false)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Function_use_self_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Function;
	srna->cont.properties = {&rna_Function_rna_properties, &rna_Function_use_self_type};
	srna->identifier = "Function";
	srna->flag = 516;
	srna->name = "Function Definition";
	srna->description = "RNA function definition";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->nameproperty = &rna_Function_identifier;
	srna->iteratorproperty = &rna_Function_rna_properties;
};

/* Blender RNA */
static CollectionPropertyRNA rna_BlenderRNA_rna_properties_;
PropertyRNA &rna_BlenderRNA_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlenderRNA_rna_properties_);

static PointerPropertyRNA rna_BlenderRNA_rna_type_;
PropertyRNA &rna_BlenderRNA_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlenderRNA_rna_type_);

static CollectionPropertyRNA rna_BlenderRNA_structs_;
PropertyRNA &rna_BlenderRNA_structs = reinterpret_cast<PropertyRNA &>(rna_BlenderRNA_structs_);

StructRNA *RNA_BlenderRNA;
void register_struct_BlenderRNA(BlenderRNA &brna)
{
	rna_BlenderRNA_rna_properties_ = {
		{&rna_BlenderRNA_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlenderRNA_rna_properties_begin, BlenderRNA_rna_properties_next, BlenderRNA_rna_properties_end, BlenderRNA_rna_properties_get, nullptr, nullptr, BlenderRNA_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlenderRNA_rna_type_ = {
		{&rna_BlenderRNA_structs, 	&rna_BlenderRNA_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlenderRNA_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BlenderRNA_structs_ = {
		{nullptr, 	&rna_BlenderRNA_rna_type,
		-1, "structs", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Structs",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlenderRNA_structs_begin, BlenderRNA_structs_next, BlenderRNA_structs_end, BlenderRNA_structs_get, BlenderRNA_structs_length, BlenderRNA_structs_lookup_int, BlenderRNA_structs_lookup_string, nullptr, RNA_Struct
	};

	StructRNA *srna = RNA_BlenderRNA;
	srna->cont.properties = {&rna_BlenderRNA_rna_properties, &rna_BlenderRNA_structs};
	srna->identifier = "BlenderRNA";
	srna->flag = 516;
	srna->name = "Blender RNA";
	srna->description = "Blender RNA structure definitions";
	srna->translation_context = "*";
	srna->icon = 223;
	srna->iteratorproperty = &rna_BlenderRNA_rna_properties;
};

/* String Value */
static CollectionPropertyRNA rna_PrimitiveString_rna_properties_;
PropertyRNA &rna_PrimitiveString_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PrimitiveString_rna_properties_);

static PointerPropertyRNA rna_PrimitiveString_rna_type_;
PropertyRNA &rna_PrimitiveString_rna_type = reinterpret_cast<PropertyRNA &>(rna_PrimitiveString_rna_type_);

static StringPropertyRNA rna_PrimitiveString_value_;
PropertyRNA &rna_PrimitiveString_value = reinterpret_cast<PropertyRNA &>(rna_PrimitiveString_value_);

StructRNA *RNA_PrimitiveString;
void register_struct_PrimitiveString(BlenderRNA &brna)
{
	rna_PrimitiveString_rna_properties_ = {
		{&rna_PrimitiveString_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveString_rna_properties_begin, PrimitiveString_rna_properties_next, PrimitiveString_rna_properties_end, PrimitiveString_rna_properties_get, nullptr, nullptr, PrimitiveString_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PrimitiveString_rna_type_ = {
		{&rna_PrimitiveString_value, 	&rna_PrimitiveString_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveString_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PrimitiveString_value_ = {
		{nullptr, 	&rna_PrimitiveString_rna_type,
		-1, "value", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_BYTESTRING) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveString_value_get, PrimitiveString_value_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	StructRNA *srna = RNA_PrimitiveString;
	srna->cont.properties = {&rna_PrimitiveString_rna_properties, &rna_PrimitiveString_value};
	srna->identifier = "PrimitiveString";
	srna->flag = 516;
	srna->name = "String Value";
	srna->description = "RNA wrapped string";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PrimitiveString_rna_properties;
};

/* Primitive Int */
static CollectionPropertyRNA rna_PrimitiveInt_rna_properties_;
PropertyRNA &rna_PrimitiveInt_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PrimitiveInt_rna_properties_);

static PointerPropertyRNA rna_PrimitiveInt_rna_type_;
PropertyRNA &rna_PrimitiveInt_rna_type = reinterpret_cast<PropertyRNA &>(rna_PrimitiveInt_rna_type_);

static IntPropertyRNA rna_PrimitiveInt_value_;
PropertyRNA &rna_PrimitiveInt_value = reinterpret_cast<PropertyRNA &>(rna_PrimitiveInt_value_);

StructRNA *RNA_PrimitiveInt;
void register_struct_PrimitiveInt(BlenderRNA &brna)
{
	rna_PrimitiveInt_rna_properties_ = {
		{&rna_PrimitiveInt_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveInt_rna_properties_begin, PrimitiveInt_rna_properties_next, PrimitiveInt_rna_properties_end, PrimitiveInt_rna_properties_get, nullptr, nullptr, PrimitiveInt_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PrimitiveInt_rna_type_ = {
		{&rna_PrimitiveInt_value, 	&rna_PrimitiveInt_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveInt_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PrimitiveInt_value_ = {
		{nullptr, 	&rna_PrimitiveInt_rna_type,
		-1, "value", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveInt_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_PrimitiveInt;
	srna->cont.properties = {&rna_PrimitiveInt_rna_properties, &rna_PrimitiveInt_value};
	srna->identifier = "PrimitiveInt";
	srna->flag = 516;
	srna->name = "Primitive Int";
	srna->description = "RNA wrapped int";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PrimitiveInt_rna_properties;
};

/* Primitive Float */
static CollectionPropertyRNA rna_PrimitiveFloat_rna_properties_;
PropertyRNA &rna_PrimitiveFloat_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PrimitiveFloat_rna_properties_);

static PointerPropertyRNA rna_PrimitiveFloat_rna_type_;
PropertyRNA &rna_PrimitiveFloat_rna_type = reinterpret_cast<PropertyRNA &>(rna_PrimitiveFloat_rna_type_);

static FloatPropertyRNA rna_PrimitiveFloat_value_;
PropertyRNA &rna_PrimitiveFloat_value = reinterpret_cast<PropertyRNA &>(rna_PrimitiveFloat_value_);

StructRNA *RNA_PrimitiveFloat;
void register_struct_PrimitiveFloat(BlenderRNA &brna)
{
	rna_PrimitiveFloat_rna_properties_ = {
		{&rna_PrimitiveFloat_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveFloat_rna_properties_begin, PrimitiveFloat_rna_properties_next, PrimitiveFloat_rna_properties_end, PrimitiveFloat_rna_properties_get, nullptr, nullptr, PrimitiveFloat_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PrimitiveFloat_rna_type_ = {
		{&rna_PrimitiveFloat_value, 	&rna_PrimitiveFloat_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveFloat_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PrimitiveFloat_value_ = {
		{nullptr, 	&rna_PrimitiveFloat_rna_type,
		-1, "value", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveFloat_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_PrimitiveFloat;
	srna->cont.properties = {&rna_PrimitiveFloat_rna_properties, &rna_PrimitiveFloat_value};
	srna->identifier = "PrimitiveFloat";
	srna->flag = 516;
	srna->name = "Primitive Float";
	srna->description = "RNA wrapped float";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PrimitiveFloat_rna_properties;
};

/* Primitive Boolean */
static CollectionPropertyRNA rna_PrimitiveBoolean_rna_properties_;
PropertyRNA &rna_PrimitiveBoolean_rna_properties = reinterpret_cast<PropertyRNA &>(rna_PrimitiveBoolean_rna_properties_);

static PointerPropertyRNA rna_PrimitiveBoolean_rna_type_;
PropertyRNA &rna_PrimitiveBoolean_rna_type = reinterpret_cast<PropertyRNA &>(rna_PrimitiveBoolean_rna_type_);

static BoolPropertyRNA rna_PrimitiveBoolean_value_;
PropertyRNA &rna_PrimitiveBoolean_value = reinterpret_cast<PropertyRNA &>(rna_PrimitiveBoolean_value_);

StructRNA *RNA_PrimitiveBoolean;
void register_struct_PrimitiveBoolean(BlenderRNA &brna)
{
	rna_PrimitiveBoolean_rna_properties_ = {
		{&rna_PrimitiveBoolean_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveBoolean_rna_properties_begin, PrimitiveBoolean_rna_properties_next, PrimitiveBoolean_rna_properties_end, PrimitiveBoolean_rna_properties_get, nullptr, nullptr, PrimitiveBoolean_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_PrimitiveBoolean_rna_type_ = {
		{&rna_PrimitiveBoolean_value, 	&rna_PrimitiveBoolean_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveBoolean_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_PrimitiveBoolean_value_ = {
		{nullptr, 	&rna_PrimitiveBoolean_rna_type,
		-1, "value", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		PrimitiveBoolean_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_PrimitiveBoolean;
	srna->cont.properties = {&rna_PrimitiveBoolean_rna_properties, &rna_PrimitiveBoolean_value};
	srna->identifier = "PrimitiveBoolean";
	srna->flag = 516;
	srna->name = "Primitive Boolean";
	srna->description = "RNA wrapped boolean";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_PrimitiveBoolean_rna_properties;
};


}  // namespace blender
