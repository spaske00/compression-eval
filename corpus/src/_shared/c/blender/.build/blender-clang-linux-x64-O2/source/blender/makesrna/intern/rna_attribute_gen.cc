
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

#include "rna_attribute.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_FloatAttribute_data;


extern PropertyRNA &rna_FloatAttributeValue_rna_properties;
extern PropertyRNA &rna_FloatAttributeValue_rna_type;
extern PropertyRNA &rna_FloatAttributeValue_value;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_FloatVectorAttribute_data;


extern PropertyRNA &rna_FloatVectorAttributeValue_rna_properties;
extern PropertyRNA &rna_FloatVectorAttributeValue_rna_type;
extern PropertyRNA &rna_FloatVectorAttributeValue_vector;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_FloatColorAttribute_data;


extern PropertyRNA &rna_FloatColorAttributeValue_rna_properties;
extern PropertyRNA &rna_FloatColorAttributeValue_rna_type;
extern PropertyRNA &rna_FloatColorAttributeValue_color;
extern PropertyRNA &rna_FloatColorAttributeValue_color_srgb;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_ByteColorAttribute_data;


extern PropertyRNA &rna_ByteColorAttributeValue_rna_properties;
extern PropertyRNA &rna_ByteColorAttributeValue_rna_type;
extern PropertyRNA &rna_ByteColorAttributeValue_color;
extern PropertyRNA &rna_ByteColorAttributeValue_color_srgb;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_IntAttribute_data;


extern PropertyRNA &rna_IntAttributeValue_rna_properties;
extern PropertyRNA &rna_IntAttributeValue_rna_type;
extern PropertyRNA &rna_IntAttributeValue_value;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_Short2Attribute_data;


extern PropertyRNA &rna_Short2AttributeValue_rna_properties;
extern PropertyRNA &rna_Short2AttributeValue_rna_type;
extern PropertyRNA &rna_Short2AttributeValue_value;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_Int2Attribute_data;


extern PropertyRNA &rna_Int2AttributeValue_rna_properties;
extern PropertyRNA &rna_Int2AttributeValue_rna_type;
extern PropertyRNA &rna_Int2AttributeValue_value;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_QuaternionAttribute_data;


extern PropertyRNA &rna_QuaternionAttributeValue_rna_properties;
extern PropertyRNA &rna_QuaternionAttributeValue_rna_type;
extern PropertyRNA &rna_QuaternionAttributeValue_value;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_Float4x4Attribute_data;


extern PropertyRNA &rna_Float4x4AttributeValue_rna_properties;
extern PropertyRNA &rna_Float4x4AttributeValue_rna_type;
extern PropertyRNA &rna_Float4x4AttributeValue_value;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_StringAttribute_data;


extern PropertyRNA &rna_StringAttributeValue_rna_properties;
extern PropertyRNA &rna_StringAttributeValue_rna_type;
extern PropertyRNA &rna_StringAttributeValue_value;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_BoolAttribute_data;


extern PropertyRNA &rna_BoolAttributeValue_rna_properties;
extern PropertyRNA &rna_BoolAttributeValue_rna_type;
extern PropertyRNA &rna_BoolAttributeValue_value;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_Float2Attribute_data;


extern PropertyRNA &rna_Float2AttributeValue_rna_properties;
extern PropertyRNA &rna_Float2AttributeValue_rna_type;
extern PropertyRNA &rna_Float2AttributeValue_vector;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_Float4Attribute_data;


extern PropertyRNA &rna_Float4AttributeValue_rna_properties;
extern PropertyRNA &rna_Float4AttributeValue_rna_type;
extern PropertyRNA &rna_Float4AttributeValue_vector;


extern PropertyRNA &rna_Attribute_rna_properties;
extern PropertyRNA &rna_Attribute_rna_type;
extern PropertyRNA &rna_Attribute_name;
extern PropertyRNA &rna_Attribute_data_type;
extern PropertyRNA &rna_Attribute_storage_type;
extern PropertyRNA &rna_Attribute_domain;
extern PropertyRNA &rna_Attribute_is_internal;
extern PropertyRNA &rna_Attribute_is_required;

extern PropertyRNA &rna_ByteIntAttribute_data;


extern PropertyRNA &rna_ByteIntAttributeValue_rna_properties;
extern PropertyRNA &rna_ByteIntAttributeValue_rna_type;
extern PropertyRNA &rna_ByteIntAttributeValue_value;


extern PropertyRNA &rna_AttributeGroupMesh_rna_properties;
extern PropertyRNA &rna_AttributeGroupMesh_rna_type;
extern PropertyRNA &rna_AttributeGroupMesh_active;
extern PropertyRNA &rna_AttributeGroupMesh_active_index;
extern PropertyRNA &rna_AttributeGroupMesh_active_color;
extern PropertyRNA &rna_AttributeGroupMesh_active_color_index;
extern PropertyRNA &rna_AttributeGroupMesh_render_color_index;
extern PropertyRNA &rna_AttributeGroupMesh_default_color_name;
extern PropertyRNA &rna_AttributeGroupMesh_active_color_name;

extern FunctionRNA *rna_AttributeGroupMesh_new_func;
extern PropertyRNA &rna_AttributeGroupMesh_new_name;
extern PropertyRNA &rna_AttributeGroupMesh_new_type;
extern PropertyRNA &rna_AttributeGroupMesh_new_domain;
extern PropertyRNA &rna_AttributeGroupMesh_new_attribute;

extern FunctionRNA *rna_AttributeGroupMesh_remove_func;
extern PropertyRNA &rna_AttributeGroupMesh_remove_attribute;

extern FunctionRNA *rna_AttributeGroupMesh_domain_size_func;
extern PropertyRNA &rna_AttributeGroupMesh_domain_size_domain;
extern PropertyRNA &rna_AttributeGroupMesh_domain_size_size;



extern PropertyRNA &rna_AttributeGroupPointCloud_rna_properties;
extern PropertyRNA &rna_AttributeGroupPointCloud_rna_type;
extern PropertyRNA &rna_AttributeGroupPointCloud_active;
extern PropertyRNA &rna_AttributeGroupPointCloud_active_index;

extern FunctionRNA *rna_AttributeGroupPointCloud_new_func;
extern PropertyRNA &rna_AttributeGroupPointCloud_new_name;
extern PropertyRNA &rna_AttributeGroupPointCloud_new_type;
extern PropertyRNA &rna_AttributeGroupPointCloud_new_domain;
extern PropertyRNA &rna_AttributeGroupPointCloud_new_attribute;

extern FunctionRNA *rna_AttributeGroupPointCloud_remove_func;
extern PropertyRNA &rna_AttributeGroupPointCloud_remove_attribute;

extern FunctionRNA *rna_AttributeGroupPointCloud_domain_size_func;
extern PropertyRNA &rna_AttributeGroupPointCloud_domain_size_domain;
extern PropertyRNA &rna_AttributeGroupPointCloud_domain_size_size;



extern PropertyRNA &rna_AttributeGroupCurves_rna_properties;
extern PropertyRNA &rna_AttributeGroupCurves_rna_type;
extern PropertyRNA &rna_AttributeGroupCurves_active;
extern PropertyRNA &rna_AttributeGroupCurves_active_index;

extern FunctionRNA *rna_AttributeGroupCurves_new_func;
extern PropertyRNA &rna_AttributeGroupCurves_new_name;
extern PropertyRNA &rna_AttributeGroupCurves_new_type;
extern PropertyRNA &rna_AttributeGroupCurves_new_domain;
extern PropertyRNA &rna_AttributeGroupCurves_new_attribute;

extern FunctionRNA *rna_AttributeGroupCurves_remove_func;
extern PropertyRNA &rna_AttributeGroupCurves_remove_attribute;

extern FunctionRNA *rna_AttributeGroupCurves_domain_size_func;
extern PropertyRNA &rna_AttributeGroupCurves_domain_size_domain;
extern PropertyRNA &rna_AttributeGroupCurves_domain_size_size;



extern PropertyRNA &rna_AttributeGroupGreasePencil_rna_properties;
extern PropertyRNA &rna_AttributeGroupGreasePencil_rna_type;
extern PropertyRNA &rna_AttributeGroupGreasePencil_active;
extern PropertyRNA &rna_AttributeGroupGreasePencil_active_index;

extern FunctionRNA *rna_AttributeGroupGreasePencil_new_func;
extern PropertyRNA &rna_AttributeGroupGreasePencil_new_name;
extern PropertyRNA &rna_AttributeGroupGreasePencil_new_type;
extern PropertyRNA &rna_AttributeGroupGreasePencil_new_domain;
extern PropertyRNA &rna_AttributeGroupGreasePencil_new_attribute;

extern FunctionRNA *rna_AttributeGroupGreasePencil_remove_func;
extern PropertyRNA &rna_AttributeGroupGreasePencil_remove_attribute;

extern FunctionRNA *rna_AttributeGroupGreasePencil_domain_size_func;
extern PropertyRNA &rna_AttributeGroupGreasePencil_domain_size_domain;
extern PropertyRNA &rna_AttributeGroupGreasePencil_domain_size_size;



extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_rna_properties;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_rna_type;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_active;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_active_index;

extern FunctionRNA *rna_AttributeGroupGreasePencilDrawing_new_func;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_new_name;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_new_type;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_new_domain;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_new_attribute;

extern FunctionRNA *rna_AttributeGroupGreasePencilDrawing_remove_func;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_remove_attribute;

extern FunctionRNA *rna_AttributeGroupGreasePencilDrawing_domain_size_func;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_domain_size_domain;
extern PropertyRNA &rna_AttributeGroupGreasePencilDrawing_domain_size_size;


static PointerRNA Attribute_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Attribute_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Attribute_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Attribute_rna_properties_get(iter);
    }
}

void Attribute_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Attribute_rna_properties_get(iter);
    }
}

void Attribute_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Attribute_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Attribute_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Attribute_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Attribute_name_get;
    fn(ptr, value);
}

int Attribute_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Attribute_name_length;
    return fn(ptr);
}

void Attribute_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Attribute_name_set;
    fn(ptr, value);
}

int Attribute_data_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Attribute_type_get;
    return fn(ptr);
}

int Attribute_storage_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Attribute_storage_type_get;
    return fn(ptr);
}

int Attribute_domain_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Attribute_domain_get;
    return fn(ptr);
}

bool Attribute_is_internal_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Attribute_is_internal_get;
    return fn(ptr);
}

bool Attribute_is_required_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Attribute_is_required_get;
    return fn(ptr);
}

int FloatAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA FloatAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FloatAttributeValue, rna_iterator_array_get(iter));
}

void FloatAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FloatAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatAttribute_data_get(iter);
    }
}

void FloatAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FloatAttribute_data_get(iter);
    }
}

void FloatAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool FloatAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA FloatAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FloatAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FloatAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatAttributeValue_rna_properties_get(iter);
    }
}

void FloatAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FloatAttributeValue_rna_properties_get(iter);
    }
}

void FloatAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FloatAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FloatAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float FloatAttributeValue_value_get(PointerRNA *ptr)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    return (float)(data->f);
}

void FloatAttributeValue_value_set(PointerRNA *ptr, float value)
{
    MFloatProperty *data = (MFloatProperty *)(ptr->data);
    data->f = (std::remove_reference_t<decltype(data->f)>)value;
}

int FloatVectorAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA FloatVectorAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FloatVectorAttributeValue, rna_iterator_array_get(iter));
}

void FloatVectorAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FloatVectorAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatVectorAttribute_data_get(iter);
    }
}

void FloatVectorAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FloatVectorAttribute_data_get(iter);
    }
}

void FloatVectorAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool FloatVectorAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA FloatVectorAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FloatVectorAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FloatVectorAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatVectorAttributeValue_rna_properties_get(iter);
    }
}

void FloatVectorAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FloatVectorAttributeValue_rna_properties_get(iter);
    }
}

void FloatVectorAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FloatVectorAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FloatVectorAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void FloatVectorAttributeValue_vector_get(PointerRNA *ptr, float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void FloatVectorAttributeValue_vector_set(PointerRNA *ptr, const float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}

int FloatColorAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA FloatColorAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FloatColorAttributeValue, rna_iterator_array_get(iter));
}

void FloatColorAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FloatColorAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatColorAttribute_data_get(iter);
    }
}

void FloatColorAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FloatColorAttribute_data_get(iter);
    }
}

void FloatColorAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool FloatColorAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA FloatColorAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FloatColorAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FloatColorAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FloatColorAttributeValue_rna_properties_get(iter);
    }
}

void FloatColorAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FloatColorAttributeValue_rna_properties_get(iter);
    }
}

void FloatColorAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FloatColorAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FloatColorAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void FloatColorAttributeValue_color_get(PointerRNA *ptr, float values[4])
{
    MPropCol *data = (MPropCol *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void FloatColorAttributeValue_color_set(PointerRNA *ptr, const float values[4])
{
    MPropCol *data = (MPropCol *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void FloatColorAttributeValue_color_srgb_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_FloatColorAttributeValue_color_srgb_get;
    fn(ptr, values);
}

void FloatColorAttributeValue_color_srgb_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_FloatColorAttributeValue_color_srgb_set;
    fn(ptr, values);
}

int ByteColorAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA ByteColorAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ByteColorAttributeValue, rna_iterator_array_get(iter));
}

void ByteColorAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ByteColorAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ByteColorAttribute_data_get(iter);
    }
}

void ByteColorAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ByteColorAttribute_data_get(iter);
    }
}

void ByteColorAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ByteColorAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA ByteColorAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ByteColorAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ByteColorAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ByteColorAttributeValue_rna_properties_get(iter);
    }
}

void ByteColorAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ByteColorAttributeValue_rna_properties_get(iter);
    }
}

void ByteColorAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ByteColorAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ByteColorAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ByteColorAttributeValue_color_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_ByteColorAttributeValue_color_get;
    fn(ptr, values);
}

void ByteColorAttributeValue_color_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_ByteColorAttributeValue_color_set;
    fn(ptr, values);
}

void ByteColorAttributeValue_color_srgb_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_ByteColorAttributeValue_color_srgb_get;
    fn(ptr, values);
}

void ByteColorAttributeValue_color_srgb_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_ByteColorAttributeValue_color_srgb_set;
    fn(ptr, values);
}

int IntAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA IntAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_IntAttributeValue, rna_iterator_array_get(iter));
}

void IntAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IntAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IntAttribute_data_get(iter);
    }
}

void IntAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IntAttribute_data_get(iter);
    }
}

void IntAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool IntAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA IntAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void IntAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_IntAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = IntAttributeValue_rna_properties_get(iter);
    }
}

void IntAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = IntAttributeValue_rna_properties_get(iter);
    }
}

void IntAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool IntAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA IntAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int IntAttributeValue_value_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

void IntAttributeValue_value_set(PointerRNA *ptr, int value)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    data->i = (std::remove_reference_t<decltype(data->i)>)value;
}

int Short2Attribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA Short2Attribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Short2AttributeValue, rna_iterator_array_get(iter));
}

void Short2Attribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Short2Attribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Short2Attribute_data_get(iter);
    }
}

void Short2Attribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Short2Attribute_data_get(iter);
    }
}

void Short2Attribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Short2Attribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA Short2AttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Short2AttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Short2AttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Short2AttributeValue_rna_properties_get(iter);
    }
}

void Short2AttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Short2AttributeValue_rna_properties_get(iter);
    }
}

void Short2AttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Short2AttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Short2AttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Short2AttributeValue_value_get(PointerRNA *ptr, int values[2])
{
    vec2s *data = (vec2s *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)((&data->x)[i]);
    }
}

void Short2AttributeValue_value_set(PointerRNA *ptr, const int values[2])
{
    vec2s *data = (vec2s *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        (&data->x)[i] = std::clamp(values[i], -32768, 32767);
    }
}

int Int2Attribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA Int2Attribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Int2AttributeValue, rna_iterator_array_get(iter));
}

void Int2Attribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Int2Attribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Int2Attribute_data_get(iter);
    }
}

void Int2Attribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Int2Attribute_data_get(iter);
    }
}

void Int2Attribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Int2Attribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA Int2AttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Int2AttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Int2AttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Int2AttributeValue_rna_properties_get(iter);
    }
}

void Int2AttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Int2AttributeValue_rna_properties_get(iter);
    }
}

void Int2AttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Int2AttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Int2AttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Int2AttributeValue_value_get(PointerRNA *ptr, int values[2])
{
    vec2i *data = (vec2i *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)((&data->x)[i]);
    }
}

void Int2AttributeValue_value_set(PointerRNA *ptr, const int values[2])
{
    vec2i *data = (vec2i *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        (&data->x)[i] = values[i];
    }
}

int QuaternionAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA QuaternionAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_QuaternionAttributeValue, rna_iterator_array_get(iter));
}

void QuaternionAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_QuaternionAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = QuaternionAttribute_data_get(iter);
    }
}

void QuaternionAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = QuaternionAttribute_data_get(iter);
    }
}

void QuaternionAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool QuaternionAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA QuaternionAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void QuaternionAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_QuaternionAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = QuaternionAttributeValue_rna_properties_get(iter);
    }
}

void QuaternionAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = QuaternionAttributeValue_rna_properties_get(iter);
    }
}

void QuaternionAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool QuaternionAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA QuaternionAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void QuaternionAttributeValue_value_get(PointerRNA *ptr, float values[4])
{
    vec4f *data = (vec4f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void QuaternionAttributeValue_value_set(PointerRNA *ptr, const float values[4])
{
    vec4f *data = (vec4f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        (&data->x)[i] = values[i];
    }
}

int Float4x4Attribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA Float4x4Attribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Float4x4AttributeValue, rna_iterator_array_get(iter));
}

void Float4x4Attribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Float4x4Attribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Float4x4Attribute_data_get(iter);
    }
}

void Float4x4Attribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Float4x4Attribute_data_get(iter);
    }
}

void Float4x4Attribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Float4x4Attribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA Float4x4AttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Float4x4AttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Float4x4AttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Float4x4AttributeValue_rna_properties_get(iter);
    }
}

void Float4x4AttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Float4x4AttributeValue_rna_properties_get(iter);
    }
}

void Float4x4AttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Float4x4AttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Float4x4AttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Float4x4AttributeValue_value_get(PointerRNA *ptr, float values[16])
{
    mat4x4f *data = (mat4x4f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->value)[i]);
    }
}

void Float4x4AttributeValue_value_set(PointerRNA *ptr, const float values[16])
{
    mat4x4f *data = (mat4x4f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        ((float *)data->value)[i] = values[i];
    }
}

int StringAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA StringAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_StringAttributeValue, rna_iterator_array_get(iter));
}

void StringAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StringAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StringAttribute_data_get(iter);
    }
}

void StringAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StringAttribute_data_get(iter);
    }
}

void StringAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool StringAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA StringAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void StringAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_StringAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = StringAttributeValue_rna_properties_get(iter);
    }
}

void StringAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = StringAttributeValue_rna_properties_get(iter);
    }
}

void StringAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool StringAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA StringAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void StringAttributeValue_value_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_StringAttributeValue_s_get;
    fn(ptr, value);
}

int StringAttributeValue_value_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_StringAttributeValue_s_length;
    return fn(ptr);
}

void StringAttributeValue_value_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_StringAttributeValue_s_set;
    fn(ptr, value);
}

int BoolAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA BoolAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_BoolAttributeValue, rna_iterator_array_get(iter));
}

void BoolAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoolAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoolAttribute_data_get(iter);
    }
}

void BoolAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoolAttribute_data_get(iter);
    }
}

void BoolAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool BoolAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA BoolAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BoolAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoolAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoolAttributeValue_rna_properties_get(iter);
    }
}

void BoolAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoolAttributeValue_rna_properties_get(iter);
    }
}

void BoolAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoolAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BoolAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool BoolAttributeValue_value_get(PointerRNA *ptr)
{
    MBoolProperty *data = (MBoolProperty *)(ptr->data);
    return (bool)(data->b);
}

void BoolAttributeValue_value_set(PointerRNA *ptr, bool value)
{
    MBoolProperty *data = (MBoolProperty *)(ptr->data);
    data->b = (std::remove_reference_t<decltype(data->b)>)value;
}

int Float2Attribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA Float2Attribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Float2AttributeValue, rna_iterator_array_get(iter));
}

void Float2Attribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Float2Attribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Float2Attribute_data_get(iter);
    }
}

void Float2Attribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Float2Attribute_data_get(iter);
    }
}

void Float2Attribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Float2Attribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA Float2AttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Float2AttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Float2AttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Float2AttributeValue_rna_properties_get(iter);
    }
}

void Float2AttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Float2AttributeValue_rna_properties_get(iter);
    }
}

void Float2AttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Float2AttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Float2AttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Float2AttributeValue_vector_get(PointerRNA *ptr, float values[2])
{
    vec2f *data = (vec2f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void Float2AttributeValue_vector_set(PointerRNA *ptr, const float values[2])
{
    vec2f *data = (vec2f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        (&data->x)[i] = values[i];
    }
}

int Float4Attribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA Float4Attribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Float4AttributeValue, rna_iterator_array_get(iter));
}

void Float4Attribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Float4Attribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Float4Attribute_data_get(iter);
    }
}

void Float4Attribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Float4Attribute_data_get(iter);
    }
}

void Float4Attribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Float4Attribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA Float4AttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Float4AttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Float4AttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Float4AttributeValue_rna_properties_get(iter);
    }
}

void Float4AttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Float4AttributeValue_rna_properties_get(iter);
    }
}

void Float4AttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Float4AttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Float4AttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Float4AttributeValue_vector_get(PointerRNA *ptr, float values[4])
{
    vec4f *data = (vec4f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void Float4AttributeValue_vector_set(PointerRNA *ptr, const float values[4])
{
    vec4f *data = (vec4f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        (&data->x)[i] = values[i];
    }
}

int ByteIntAttribute_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA ByteIntAttribute_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ByteIntAttributeValue, rna_iterator_array_get(iter));
}

void ByteIntAttribute_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ByteIntAttribute_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ByteIntAttribute_data_get(iter);
    }
}

void ByteIntAttribute_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ByteIntAttribute_data_get(iter);
    }
}

void ByteIntAttribute_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ByteIntAttribute_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA ByteIntAttributeValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ByteIntAttributeValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ByteIntAttributeValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ByteIntAttributeValue_rna_properties_get(iter);
    }
}

void ByteIntAttributeValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ByteIntAttributeValue_rna_properties_get(iter);
    }
}

void ByteIntAttributeValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ByteIntAttributeValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ByteIntAttributeValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ByteIntAttributeValue_value_get(PointerRNA *ptr)
{
    MInt8Property *data = (MInt8Property *)(ptr->data);
    return (int)(data->i);
}

void ByteIntAttributeValue_value_set(PointerRNA *ptr, int value)
{
    MInt8Property *data = (MInt8Property *)(ptr->data);
    data->i = (std::remove_reference_t<decltype(data->i)>)std::clamp(value, -128, 127);
}

static PointerRNA AttributeGroupMesh_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AttributeGroupMesh_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AttributeGroupMesh_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AttributeGroupMesh_rna_properties_get(iter);
    }
}

void AttributeGroupMesh_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AttributeGroupMesh_rna_properties_get(iter);
    }
}

void AttributeGroupMesh_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AttributeGroupMesh_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AttributeGroupMesh_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA AttributeGroupMesh_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AttributeGroupID_active_get;
    return fn(ptr);
}

void AttributeGroupMesh_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AttributeGroupID_active_set;
    fn(ptr, value, reports);
}

int AttributeGroupMesh_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_AttributeGroupID_active_index_get;
    return fn(ptr);
}

void AttributeGroupMesh_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AttributeGroupID_active_index_set;
    fn(ptr, value);
}

PointerRNA AttributeGroupMesh_active_color_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AttributeGroupMesh_active_color_get;
    return fn(ptr);
}

void AttributeGroupMesh_active_color_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AttributeGroupMesh_active_color_set;
    fn(ptr, value, reports);
}

int AttributeGroupMesh_active_color_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_AttributeGroupMesh_active_color_index_get;
    return fn(ptr);
}

void AttributeGroupMesh_active_color_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AttributeGroupMesh_active_color_index_set;
    fn(ptr, value);
}

int AttributeGroupMesh_render_color_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_AttributeGroupMesh_render_color_index_get;
    return fn(ptr);
}

void AttributeGroupMesh_render_color_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AttributeGroupMesh_render_color_index_set;
    fn(ptr, value);
}

void AttributeGroupMesh_default_color_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AttributeGroupMesh_default_color_name_get;
    fn(ptr, value);
}

int AttributeGroupMesh_default_color_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AttributeGroupMesh_default_color_name_length;
    return fn(ptr);
}

void AttributeGroupMesh_default_color_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_AttributeGroupMesh_default_color_name_set;
    fn(ptr, value);
}

void AttributeGroupMesh_active_color_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_AttributeGroupMesh_active_color_name_get;
    fn(ptr, value);
}

int AttributeGroupMesh_active_color_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_AttributeGroupMesh_active_color_name_length;
    return fn(ptr);
}

void AttributeGroupMesh_active_color_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_AttributeGroupMesh_active_color_name_set;
    fn(ptr, value);
}

static PointerRNA AttributeGroupPointCloud_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AttributeGroupPointCloud_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AttributeGroupPointCloud_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AttributeGroupPointCloud_rna_properties_get(iter);
    }
}

void AttributeGroupPointCloud_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AttributeGroupPointCloud_rna_properties_get(iter);
    }
}

void AttributeGroupPointCloud_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AttributeGroupPointCloud_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AttributeGroupPointCloud_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA AttributeGroupPointCloud_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AttributeGroupID_active_get;
    return fn(ptr);
}

void AttributeGroupPointCloud_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AttributeGroupID_active_set;
    fn(ptr, value, reports);
}

int AttributeGroupPointCloud_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_AttributeGroupID_active_index_get;
    return fn(ptr);
}

void AttributeGroupPointCloud_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AttributeGroupID_active_index_set;
    fn(ptr, value);
}

static PointerRNA AttributeGroupCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AttributeGroupCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AttributeGroupCurves_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AttributeGroupCurves_rna_properties_get(iter);
    }
}

void AttributeGroupCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AttributeGroupCurves_rna_properties_get(iter);
    }
}

void AttributeGroupCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AttributeGroupCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AttributeGroupCurves_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA AttributeGroupCurves_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AttributeGroupID_active_get;
    return fn(ptr);
}

void AttributeGroupCurves_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AttributeGroupID_active_set;
    fn(ptr, value, reports);
}

int AttributeGroupCurves_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_AttributeGroupID_active_index_get;
    return fn(ptr);
}

void AttributeGroupCurves_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AttributeGroupID_active_index_set;
    fn(ptr, value);
}

static PointerRNA AttributeGroupGreasePencil_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AttributeGroupGreasePencil_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AttributeGroupGreasePencil_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AttributeGroupGreasePencil_rna_properties_get(iter);
    }
}

void AttributeGroupGreasePencil_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AttributeGroupGreasePencil_rna_properties_get(iter);
    }
}

void AttributeGroupGreasePencil_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AttributeGroupGreasePencil_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AttributeGroupGreasePencil_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA AttributeGroupGreasePencil_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AttributeGroupID_active_get;
    return fn(ptr);
}

void AttributeGroupGreasePencil_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AttributeGroupID_active_set;
    fn(ptr, value, reports);
}

int AttributeGroupGreasePencil_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_AttributeGroupID_active_index_get;
    return fn(ptr);
}

void AttributeGroupGreasePencil_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AttributeGroupID_active_index_set;
    fn(ptr, value);
}

static PointerRNA AttributeGroupGreasePencilDrawing_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AttributeGroupGreasePencilDrawing_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AttributeGroupGreasePencilDrawing_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AttributeGroupGreasePencilDrawing_rna_properties_get(iter);
    }
}

void AttributeGroupGreasePencilDrawing_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AttributeGroupGreasePencilDrawing_rna_properties_get(iter);
    }
}

void AttributeGroupGreasePencilDrawing_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AttributeGroupGreasePencilDrawing_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AttributeGroupGreasePencilDrawing_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA AttributeGroupGreasePencilDrawing_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AttributeGroupGreasePencilDrawing_active_get;
    return fn(ptr);
}

void AttributeGroupGreasePencilDrawing_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AttributeGroupGreasePencilDrawing_active_set;
    fn(ptr, value, reports);
}

int AttributeGroupGreasePencilDrawing_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_AttributeGroupGreasePencilDrawing_active_index_get;
    return fn(ptr);
}

void AttributeGroupGreasePencilDrawing_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AttributeGroupGreasePencilDrawing_active_index_set;
    fn(ptr, value);
}






























PointerRNA AttributeGroupMesh_new_func(ID *_self, ReportList *reports, const char * name, int type, int domain)
{
	return rna_AttributeGroupID_new(_self, reports, name, type, domain);
}

static void AttributeGroupMesh_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	const char * name;
	int type;
	int domain;
	PointerRNA attribute;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	attribute = rna_AttributeGroupID_new(_self, reports, name, type, domain);
	*reinterpret_cast<PointerRNA *>(_retdata) = attribute;
}

void AttributeGroupMesh_remove_func(ID *_self, ReportList *reports, PointerRNA *attribute)
{
	rna_AttributeGroupID_remove(_self, reports, attribute);
}

static void AttributeGroupMesh_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	PointerRNA *attribute;
	char *_data;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	attribute = *((PointerRNA **)_data);
	
	rna_AttributeGroupID_remove(_self, reports, attribute);
}

int AttributeGroupMesh_domain_size_func(ID *_self, int domain)
{
	return rna_AttributeGroupID_domain_size(_self, domain);
}

static void AttributeGroupMesh_domain_size_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	int domain;
	int size;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	size = rna_AttributeGroupID_domain_size(_self, domain);
	*((int *)_retdata) = size;
}

/* Repeated prototypes to detect errors */

PointerRNA rna_AttributeGroupID_new(ID *_self, ReportList *reports, const char * name, int type, int domain);
void rna_AttributeGroupID_remove(ID *_self, ReportList *reports, PointerRNA *attribute);
int rna_AttributeGroupID_domain_size(ID *_self, int domain);

PointerRNA AttributeGroupPointCloud_new_func(ID *_self, ReportList *reports, const char * name, int type, int domain)
{
	return rna_AttributeGroupID_new(_self, reports, name, type, domain);
}

static void AttributeGroupPointCloud_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	const char * name;
	int type;
	int domain;
	PointerRNA attribute;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	attribute = rna_AttributeGroupID_new(_self, reports, name, type, domain);
	*reinterpret_cast<PointerRNA *>(_retdata) = attribute;
}

void AttributeGroupPointCloud_remove_func(ID *_self, ReportList *reports, PointerRNA *attribute)
{
	rna_AttributeGroupID_remove(_self, reports, attribute);
}

static void AttributeGroupPointCloud_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	PointerRNA *attribute;
	char *_data;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	attribute = *((PointerRNA **)_data);
	
	rna_AttributeGroupID_remove(_self, reports, attribute);
}

int AttributeGroupPointCloud_domain_size_func(ID *_self, int domain)
{
	return rna_AttributeGroupID_domain_size(_self, domain);
}

static void AttributeGroupPointCloud_domain_size_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	int domain;
	int size;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	size = rna_AttributeGroupID_domain_size(_self, domain);
	*((int *)_retdata) = size;
}

/* Repeated prototypes to detect errors */

PointerRNA rna_AttributeGroupID_new(ID *_self, ReportList *reports, const char * name, int type, int domain);
void rna_AttributeGroupID_remove(ID *_self, ReportList *reports, PointerRNA *attribute);
int rna_AttributeGroupID_domain_size(ID *_self, int domain);

PointerRNA AttributeGroupCurves_new_func(ID *_self, ReportList *reports, const char * name, int type, int domain)
{
	return rna_AttributeGroupID_new(_self, reports, name, type, domain);
}

static void AttributeGroupCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	const char * name;
	int type;
	int domain;
	PointerRNA attribute;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	attribute = rna_AttributeGroupID_new(_self, reports, name, type, domain);
	*reinterpret_cast<PointerRNA *>(_retdata) = attribute;
}

void AttributeGroupCurves_remove_func(ID *_self, ReportList *reports, PointerRNA *attribute)
{
	rna_AttributeGroupID_remove(_self, reports, attribute);
}

static void AttributeGroupCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	PointerRNA *attribute;
	char *_data;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	attribute = *((PointerRNA **)_data);
	
	rna_AttributeGroupID_remove(_self, reports, attribute);
}

int AttributeGroupCurves_domain_size_func(ID *_self, int domain)
{
	return rna_AttributeGroupID_domain_size(_self, domain);
}

static void AttributeGroupCurves_domain_size_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	int domain;
	int size;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	size = rna_AttributeGroupID_domain_size(_self, domain);
	*((int *)_retdata) = size;
}

/* Repeated prototypes to detect errors */

PointerRNA rna_AttributeGroupID_new(ID *_self, ReportList *reports, const char * name, int type, int domain);
void rna_AttributeGroupID_remove(ID *_self, ReportList *reports, PointerRNA *attribute);
int rna_AttributeGroupID_domain_size(ID *_self, int domain);

PointerRNA AttributeGroupGreasePencil_new_func(ID *_self, ReportList *reports, const char * name, int type, int domain)
{
	return rna_AttributeGroupID_new(_self, reports, name, type, domain);
}

static void AttributeGroupGreasePencil_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	const char * name;
	int type;
	int domain;
	PointerRNA attribute;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	attribute = rna_AttributeGroupID_new(_self, reports, name, type, domain);
	*reinterpret_cast<PointerRNA *>(_retdata) = attribute;
}

void AttributeGroupGreasePencil_remove_func(ID *_self, ReportList *reports, PointerRNA *attribute)
{
	rna_AttributeGroupID_remove(_self, reports, attribute);
}

static void AttributeGroupGreasePencil_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	PointerRNA *attribute;
	char *_data;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	attribute = *((PointerRNA **)_data);
	
	rna_AttributeGroupID_remove(_self, reports, attribute);
}

int AttributeGroupGreasePencil_domain_size_func(ID *_self, int domain)
{
	return rna_AttributeGroupID_domain_size(_self, domain);
}

static void AttributeGroupGreasePencil_domain_size_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_self;
	int domain;
	int size;
	char *_data, *_retdata;
	
	_self = (ID *)_ptr->data;
	_data = (char *)_parms->data;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	size = rna_AttributeGroupID_domain_size(_self, domain);
	*((int *)_retdata) = size;
}

/* Repeated prototypes to detect errors */

PointerRNA rna_AttributeGroupID_new(ID *_self, ReportList *reports, const char * name, int type, int domain);
void rna_AttributeGroupID_remove(ID *_self, ReportList *reports, PointerRNA *attribute);
int rna_AttributeGroupID_domain_size(ID *_self, int domain);

PointerRNA AttributeGroupGreasePencilDrawing_new_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, const char * name, int type, int domain)
{
	return rna_AttributeGroupGreasePencilDrawing_new(_selfid, _self, reports, name, type, domain);
}

static void AttributeGroupGreasePencilDrawing_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	const char * name;
	int type;
	int domain;
	PointerRNA attribute;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	attribute = rna_AttributeGroupGreasePencilDrawing_new(_selfid, _self, reports, name, type, domain);
	*reinterpret_cast<PointerRNA *>(_retdata) = attribute;
}

void AttributeGroupGreasePencilDrawing_remove_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, PointerRNA *attribute)
{
	rna_AttributeGroupGreasePencilDrawing_remove(_selfid, _self, reports, attribute);
}

static void AttributeGroupGreasePencilDrawing_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	PointerRNA *attribute;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	attribute = *((PointerRNA **)_data);
	
	rna_AttributeGroupGreasePencilDrawing_remove(_selfid, _self, reports, attribute);
}

int AttributeGroupGreasePencilDrawing_domain_size_func(GreasePencilDrawing *_self, int domain)
{
	return rna_AttributeGroupGreasePencilDrawing_domain_size(_self, domain);
}

static void AttributeGroupGreasePencilDrawing_domain_size_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencilDrawing *_self;
	int domain;
	int size;
	char *_data, *_retdata;
	
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	domain = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	size = rna_AttributeGroupGreasePencilDrawing_domain_size(_self, domain);
	*((int *)_retdata) = size;
}

/* Repeated prototypes to detect errors */

PointerRNA rna_AttributeGroupGreasePencilDrawing_new(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, const char * name, int type, int domain);
void rna_AttributeGroupGreasePencilDrawing_remove(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, PointerRNA *attribute);
int rna_AttributeGroupGreasePencilDrawing_domain_size(GreasePencilDrawing *_self, int domain);

/* Attribute */
static CollectionPropertyRNA rna_Attribute_rna_properties_;
PropertyRNA &rna_Attribute_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Attribute_rna_properties_);

static PointerPropertyRNA rna_Attribute_rna_type_;
PropertyRNA &rna_Attribute_rna_type = reinterpret_cast<PropertyRNA &>(rna_Attribute_rna_type_);

static StringPropertyRNA rna_Attribute_name_;
PropertyRNA &rna_Attribute_name = reinterpret_cast<PropertyRNA &>(rna_Attribute_name_);

static EnumPropertyRNA rna_Attribute_data_type_;
PropertyRNA &rna_Attribute_data_type = reinterpret_cast<PropertyRNA &>(rna_Attribute_data_type_);

static EnumPropertyRNA rna_Attribute_storage_type_;
PropertyRNA &rna_Attribute_storage_type = reinterpret_cast<PropertyRNA &>(rna_Attribute_storage_type_);

static EnumPropertyRNA rna_Attribute_domain_;
PropertyRNA &rna_Attribute_domain = reinterpret_cast<PropertyRNA &>(rna_Attribute_domain_);

static BoolPropertyRNA rna_Attribute_is_internal_;
PropertyRNA &rna_Attribute_is_internal = reinterpret_cast<PropertyRNA &>(rna_Attribute_is_internal_);

static BoolPropertyRNA rna_Attribute_is_required_;
PropertyRNA &rna_Attribute_is_required = reinterpret_cast<PropertyRNA &>(rna_Attribute_is_required_);

StructRNA *RNA_Attribute;
void register_struct_Attribute(BlenderRNA &brna)
{
	rna_Attribute_rna_properties_ = {
		{&rna_Attribute_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Attribute_rna_properties_begin, Attribute_rna_properties_next, Attribute_rna_properties_end, Attribute_rna_properties_get, nullptr, nullptr, Attribute_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Attribute_rna_type_ = {
		{&rna_Attribute_name, 	&rna_Attribute_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Attribute_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Attribute_name_ = {
		{&rna_Attribute_data_type, 	&rna_Attribute_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the Attribute",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_Attribute_name_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Attribute_name_get, Attribute_name_length, Attribute_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_Attribute_data_type_ = {
		{&rna_Attribute_storage_type, 	&rna_Attribute_name,
		-1, "data_type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data Type",
		"Type of data stored in attribute",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Attribute_data_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_type_items, 14, 10
	};

	rna_Attribute_storage_type_ = {
		{&rna_Attribute_domain, 	&rna_Attribute_data_type,
		-1, "storage_type", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Storage Type",
		"Method used to store the data",
		0, "Amount",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Attribute_storage_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attr_storage_type_items, 2, 0
	};

	rna_Attribute_domain_ = {
		{&rna_Attribute_is_internal, 	&rna_Attribute_storage_type,
		-1, "domain", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Domain of the Attribute",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Attribute_domain_get, nullptr, rna_Attribute_domain_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};

	rna_Attribute_is_internal_ = {
		{&rna_Attribute_is_required, 	&rna_Attribute_domain,
		-1, "is_internal", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Internal",
		"The attribute is meant for internal use by Blender",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Attribute_is_internal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Attribute_is_required_ = {
		{nullptr, 	&rna_Attribute_is_internal,
		-1, "is_required", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Required",
		"Whether the attribute can be removed or renamed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Attribute_is_required_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Attribute;
	srna->cont.properties = {&rna_Attribute_rna_properties, &rna_Attribute_is_required};
	srna->identifier = "Attribute";
	srna->flag = 516;
	srna->name = "Attribute";
	srna->description = "Geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Float Attribute */
static CollectionPropertyRNA rna_FloatAttribute_data_;
PropertyRNA &rna_FloatAttribute_data = reinterpret_cast<PropertyRNA &>(rna_FloatAttribute_data_);

StructRNA *RNA_FloatAttribute;
void register_struct_FloatAttribute(BlenderRNA &brna)
{
	rna_FloatAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatAttribute_data_begin, FloatAttribute_data_next, FloatAttribute_data_end, FloatAttribute_data_get, FloatAttribute_data_length, FloatAttribute_data_lookup_int, nullptr, nullptr, RNA_FloatAttributeValue
	};

	StructRNA *srna = RNA_FloatAttribute;
	srna->cont.properties = {&rna_FloatAttribute_data, &rna_FloatAttribute_data};
	srna->identifier = "FloatAttribute";
	srna->flag = 516;
	srna->name = "Float Attribute";
	srna->description = "Geometry attribute that stores floating-point values";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Float Attribute Value */
static CollectionPropertyRNA rna_FloatAttributeValue_rna_properties_;
PropertyRNA &rna_FloatAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FloatAttributeValue_rna_properties_);

static PointerPropertyRNA rna_FloatAttributeValue_rna_type_;
PropertyRNA &rna_FloatAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_FloatAttributeValue_rna_type_);

static FloatPropertyRNA rna_FloatAttributeValue_value_;
PropertyRNA &rna_FloatAttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_FloatAttributeValue_value_);

StructRNA *RNA_FloatAttributeValue;
void register_struct_FloatAttributeValue(BlenderRNA &brna)
{
	rna_FloatAttributeValue_rna_properties_ = {
		{&rna_FloatAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatAttributeValue_rna_properties_begin, FloatAttributeValue_rna_properties_next, FloatAttributeValue_rna_properties_end, FloatAttributeValue_rna_properties_get, nullptr, nullptr, FloatAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FloatAttributeValue_rna_type_ = {
		{&rna_FloatAttributeValue_value, 	&rna_FloatAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FloatAttributeValue_value_ = {
		{nullptr, 	&rna_FloatAttributeValue_rna_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MFloatProperty, f), RawPropertyType(5), nullptr},
		FloatAttributeValue_value_get, FloatAttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_FloatAttributeValue;
	srna->cont.properties = {&rna_FloatAttributeValue_rna_properties, &rna_FloatAttributeValue_value};
	srna->identifier = "FloatAttributeValue";
	srna->flag = 516;
	srna->name = "Float Attribute Value";
	srna->description = "Floating-point value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FloatAttributeValue_rna_properties;
};

/* Float Vector Attribute */
static CollectionPropertyRNA rna_FloatVectorAttribute_data_;
PropertyRNA &rna_FloatVectorAttribute_data = reinterpret_cast<PropertyRNA &>(rna_FloatVectorAttribute_data_);

StructRNA *RNA_FloatVectorAttribute;
void register_struct_FloatVectorAttribute(BlenderRNA &brna)
{
	rna_FloatVectorAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatVectorAttribute_data_begin, FloatVectorAttribute_data_next, FloatVectorAttribute_data_end, FloatVectorAttribute_data_get, FloatVectorAttribute_data_length, FloatVectorAttribute_data_lookup_int, nullptr, nullptr, RNA_FloatVectorAttributeValue
	};

	StructRNA *srna = RNA_FloatVectorAttribute;
	srna->cont.properties = {&rna_FloatVectorAttribute_data, &rna_FloatVectorAttribute_data};
	srna->identifier = "FloatVectorAttribute";
	srna->flag = 516;
	srna->name = "Float Vector Attribute";
	srna->description = "Geometry attribute that stores floating-point 3D vectors";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Float Vector Attribute Value */
static CollectionPropertyRNA rna_FloatVectorAttributeValue_rna_properties_;
PropertyRNA &rna_FloatVectorAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FloatVectorAttributeValue_rna_properties_);

static PointerPropertyRNA rna_FloatVectorAttributeValue_rna_type_;
PropertyRNA &rna_FloatVectorAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_FloatVectorAttributeValue_rna_type_);

static FloatPropertyRNA rna_FloatVectorAttributeValue_vector_;
PropertyRNA &rna_FloatVectorAttributeValue_vector = reinterpret_cast<PropertyRNA &>(rna_FloatVectorAttributeValue_vector_);

StructRNA *RNA_FloatVectorAttributeValue;
void register_struct_FloatVectorAttributeValue(BlenderRNA &brna)
{
	rna_FloatVectorAttributeValue_rna_properties_ = {
		{&rna_FloatVectorAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatVectorAttributeValue_rna_properties_begin, FloatVectorAttributeValue_rna_properties_next, FloatVectorAttributeValue_rna_properties_end, FloatVectorAttributeValue_rna_properties_get, nullptr, nullptr, FloatVectorAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FloatVectorAttributeValue_rna_type_ = {
		{&rna_FloatVectorAttributeValue_vector, 	&rna_FloatVectorAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatVectorAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_FloatVectorAttributeValue_vector_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_FloatVectorAttributeValue_vector_ = {
		{nullptr, 	&rna_FloatVectorAttributeValue_rna_type,
		-1, "vector", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vector",
		"3D vector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec3f, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, FloatVectorAttributeValue_vector_get, FloatVectorAttributeValue_vector_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FloatVectorAttributeValue_vector_default
	};

	StructRNA *srna = RNA_FloatVectorAttributeValue;
	srna->cont.properties = {&rna_FloatVectorAttributeValue_rna_properties, &rna_FloatVectorAttributeValue_vector};
	srna->identifier = "FloatVectorAttributeValue";
	srna->flag = 516;
	srna->name = "Float Vector Attribute Value";
	srna->description = "Vector value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FloatVectorAttributeValue_rna_properties;
};

/* Float Color Attribute */
static CollectionPropertyRNA rna_FloatColorAttribute_data_;
PropertyRNA &rna_FloatColorAttribute_data = reinterpret_cast<PropertyRNA &>(rna_FloatColorAttribute_data_);

StructRNA *RNA_FloatColorAttribute;
void register_struct_FloatColorAttribute(BlenderRNA &brna)
{
	rna_FloatColorAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatColorAttribute_data_begin, FloatColorAttribute_data_next, FloatColorAttribute_data_end, FloatColorAttribute_data_get, FloatColorAttribute_data_length, FloatColorAttribute_data_lookup_int, nullptr, nullptr, RNA_FloatColorAttributeValue
	};

	StructRNA *srna = RNA_FloatColorAttribute;
	srna->cont.properties = {&rna_FloatColorAttribute_data, &rna_FloatColorAttribute_data};
	srna->identifier = "FloatColorAttribute";
	srna->flag = 516;
	srna->name = "Float Color Attribute";
	srna->description = "Geometry attribute that stores RGBA colors as floating-point values using 32-bits per channel";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Float Color Attribute Value */
static CollectionPropertyRNA rna_FloatColorAttributeValue_rna_properties_;
PropertyRNA &rna_FloatColorAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FloatColorAttributeValue_rna_properties_);

static PointerPropertyRNA rna_FloatColorAttributeValue_rna_type_;
PropertyRNA &rna_FloatColorAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_FloatColorAttributeValue_rna_type_);

static FloatPropertyRNA rna_FloatColorAttributeValue_color_;
PropertyRNA &rna_FloatColorAttributeValue_color = reinterpret_cast<PropertyRNA &>(rna_FloatColorAttributeValue_color_);

static FloatPropertyRNA rna_FloatColorAttributeValue_color_srgb_;
PropertyRNA &rna_FloatColorAttributeValue_color_srgb = reinterpret_cast<PropertyRNA &>(rna_FloatColorAttributeValue_color_srgb_);

StructRNA *RNA_FloatColorAttributeValue;
void register_struct_FloatColorAttributeValue(BlenderRNA &brna)
{
	rna_FloatColorAttributeValue_rna_properties_ = {
		{&rna_FloatColorAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatColorAttributeValue_rna_properties_begin, FloatColorAttributeValue_rna_properties_next, FloatColorAttributeValue_rna_properties_end, FloatColorAttributeValue_rna_properties_get, nullptr, nullptr, FloatColorAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FloatColorAttributeValue_rna_type_ = {
		{&rna_FloatColorAttributeValue_color, 	&rna_FloatColorAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FloatColorAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_FloatColorAttributeValue_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_FloatColorAttributeValue_color_ = {
		{&rna_FloatColorAttributeValue_color_srgb, 	&rna_FloatColorAttributeValue_rna_type,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"RGBA color in scene linear color space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MPropCol, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, FloatColorAttributeValue_color_get, FloatColorAttributeValue_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FloatColorAttributeValue_color_default
	};

	static float rna_FloatColorAttributeValue_color_srgb_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_FloatColorAttributeValue_color_srgb_ = {
		{nullptr, 	&rna_FloatColorAttributeValue_color,
		-1, "color_srgb", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color",
		"RGBA color in sRGB color space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, FloatColorAttributeValue_color_srgb_get, FloatColorAttributeValue_color_srgb_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FloatColorAttributeValue_color_srgb_default
	};

	StructRNA *srna = RNA_FloatColorAttributeValue;
	srna->cont.properties = {&rna_FloatColorAttributeValue_rna_properties, &rna_FloatColorAttributeValue_color_srgb};
	srna->identifier = "FloatColorAttributeValue";
	srna->flag = 516;
	srna->name = "Float Color Attribute Value";
	srna->description = "Color value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FloatColorAttributeValue_rna_properties;
};

/* Byte Color Attribute */
static CollectionPropertyRNA rna_ByteColorAttribute_data_;
PropertyRNA &rna_ByteColorAttribute_data = reinterpret_cast<PropertyRNA &>(rna_ByteColorAttribute_data_);

StructRNA *RNA_ByteColorAttribute;
void register_struct_ByteColorAttribute(BlenderRNA &brna)
{
	rna_ByteColorAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ByteColorAttribute_data_begin, ByteColorAttribute_data_next, ByteColorAttribute_data_end, ByteColorAttribute_data_get, ByteColorAttribute_data_length, ByteColorAttribute_data_lookup_int, nullptr, nullptr, RNA_ByteColorAttributeValue
	};

	StructRNA *srna = RNA_ByteColorAttribute;
	srna->cont.properties = {&rna_ByteColorAttribute_data, &rna_ByteColorAttribute_data};
	srna->identifier = "ByteColorAttribute";
	srna->flag = 516;
	srna->name = "Byte Color Attribute";
	srna->description = "Geometry attribute that stores RGBA colors as positive integer values using 8-bits per channel";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Byte Color Attribute Value */
static CollectionPropertyRNA rna_ByteColorAttributeValue_rna_properties_;
PropertyRNA &rna_ByteColorAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ByteColorAttributeValue_rna_properties_);

static PointerPropertyRNA rna_ByteColorAttributeValue_rna_type_;
PropertyRNA &rna_ByteColorAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_ByteColorAttributeValue_rna_type_);

static FloatPropertyRNA rna_ByteColorAttributeValue_color_;
PropertyRNA &rna_ByteColorAttributeValue_color = reinterpret_cast<PropertyRNA &>(rna_ByteColorAttributeValue_color_);

static FloatPropertyRNA rna_ByteColorAttributeValue_color_srgb_;
PropertyRNA &rna_ByteColorAttributeValue_color_srgb = reinterpret_cast<PropertyRNA &>(rna_ByteColorAttributeValue_color_srgb_);

StructRNA *RNA_ByteColorAttributeValue;
void register_struct_ByteColorAttributeValue(BlenderRNA &brna)
{
	rna_ByteColorAttributeValue_rna_properties_ = {
		{&rna_ByteColorAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ByteColorAttributeValue_rna_properties_begin, ByteColorAttributeValue_rna_properties_next, ByteColorAttributeValue_rna_properties_end, ByteColorAttributeValue_rna_properties_get, nullptr, nullptr, ByteColorAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ByteColorAttributeValue_rna_type_ = {
		{&rna_ByteColorAttributeValue_color, 	&rna_ByteColorAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ByteColorAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_ByteColorAttributeValue_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_ByteColorAttributeValue_color_ = {
		{&rna_ByteColorAttributeValue_color_srgb, 	&rna_ByteColorAttributeValue_rna_type,
		-1, "color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color",
		"RGBA color in scene linear color space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ByteColorAttributeValue_color_get, ByteColorAttributeValue_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ByteColorAttributeValue_color_default
	};

	static float rna_ByteColorAttributeValue_color_srgb_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_ByteColorAttributeValue_color_srgb_ = {
		{nullptr, 	&rna_ByteColorAttributeValue_color,
		-1, "color_srgb", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color",
		"RGBA color in sRGB color space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ByteColorAttributeValue_color_srgb_get, ByteColorAttributeValue_color_srgb_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ByteColorAttributeValue_color_srgb_default
	};

	StructRNA *srna = RNA_ByteColorAttributeValue;
	srna->cont.properties = {&rna_ByteColorAttributeValue_rna_properties, &rna_ByteColorAttributeValue_color_srgb};
	srna->identifier = "ByteColorAttributeValue";
	srna->flag = 516;
	srna->name = "Byte Color Attribute Value";
	srna->description = "Color value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ByteColorAttributeValue_rna_properties;
};

/* Integer Attribute */
static CollectionPropertyRNA rna_IntAttribute_data_;
PropertyRNA &rna_IntAttribute_data = reinterpret_cast<PropertyRNA &>(rna_IntAttribute_data_);

StructRNA *RNA_IntAttribute;
void register_struct_IntAttribute(BlenderRNA &brna)
{
	rna_IntAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntAttribute_data_begin, IntAttribute_data_next, IntAttribute_data_end, IntAttribute_data_get, IntAttribute_data_length, IntAttribute_data_lookup_int, nullptr, nullptr, RNA_IntAttributeValue
	};

	StructRNA *srna = RNA_IntAttribute;
	srna->cont.properties = {&rna_IntAttribute_data, &rna_IntAttribute_data};
	srna->identifier = "IntAttribute";
	srna->flag = 516;
	srna->name = "Integer Attribute";
	srna->description = "Geometry attribute that stores integer values";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Integer Attribute Value */
static CollectionPropertyRNA rna_IntAttributeValue_rna_properties_;
PropertyRNA &rna_IntAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_IntAttributeValue_rna_properties_);

static PointerPropertyRNA rna_IntAttributeValue_rna_type_;
PropertyRNA &rna_IntAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_IntAttributeValue_rna_type_);

static IntPropertyRNA rna_IntAttributeValue_value_;
PropertyRNA &rna_IntAttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_IntAttributeValue_value_);

StructRNA *RNA_IntAttributeValue;
void register_struct_IntAttributeValue(BlenderRNA &brna)
{
	rna_IntAttributeValue_rna_properties_ = {
		{&rna_IntAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntAttributeValue_rna_properties_begin, IntAttributeValue_rna_properties_next, IntAttributeValue_rna_properties_end, IntAttributeValue_rna_properties_get, nullptr, nullptr, IntAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_IntAttributeValue_rna_type_ = {
		{&rna_IntAttributeValue_value, 	&rna_IntAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		IntAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_IntAttributeValue_value_ = {
		{nullptr, 	&rna_IntAttributeValue_rna_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MIntProperty, i), RawPropertyType(0), nullptr},
		IntAttributeValue_value_get, IntAttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_IntAttributeValue;
	srna->cont.properties = {&rna_IntAttributeValue_rna_properties, &rna_IntAttributeValue_value};
	srna->identifier = "IntAttributeValue";
	srna->flag = 516;
	srna->name = "Integer Attribute Value";
	srna->description = "Integer value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_IntAttributeValue_rna_properties;
};

/* 2D 16-Bit Integer Vector Attribute */
static CollectionPropertyRNA rna_Short2Attribute_data_;
PropertyRNA &rna_Short2Attribute_data = reinterpret_cast<PropertyRNA &>(rna_Short2Attribute_data_);

StructRNA *RNA_Short2Attribute;
void register_struct_Short2Attribute(BlenderRNA &brna)
{
	rna_Short2Attribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Short2Attribute_data_begin, Short2Attribute_data_next, Short2Attribute_data_end, Short2Attribute_data_get, Short2Attribute_data_length, Short2Attribute_data_lookup_int, nullptr, nullptr, RNA_Short2AttributeValue
	};

	StructRNA *srna = RNA_Short2Attribute;
	srna->cont.properties = {&rna_Short2Attribute_data, &rna_Short2Attribute_data};
	srna->identifier = "Short2Attribute";
	srna->flag = 516;
	srna->name = "2D 16-Bit Integer Vector Attribute";
	srna->description = "Geometry attribute that stores 2D integer vectors";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* 2D 16-Bit Integer Vector Attribute Value */
static CollectionPropertyRNA rna_Short2AttributeValue_rna_properties_;
PropertyRNA &rna_Short2AttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Short2AttributeValue_rna_properties_);

static PointerPropertyRNA rna_Short2AttributeValue_rna_type_;
PropertyRNA &rna_Short2AttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_Short2AttributeValue_rna_type_);

static IntPropertyRNA rna_Short2AttributeValue_value_;
PropertyRNA &rna_Short2AttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_Short2AttributeValue_value_);

StructRNA *RNA_Short2AttributeValue;
void register_struct_Short2AttributeValue(BlenderRNA &brna)
{
	rna_Short2AttributeValue_rna_properties_ = {
		{&rna_Short2AttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Short2AttributeValue_rna_properties_begin, Short2AttributeValue_rna_properties_next, Short2AttributeValue_rna_properties_end, Short2AttributeValue_rna_properties_get, nullptr, nullptr, Short2AttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Short2AttributeValue_rna_type_ = {
		{&rna_Short2AttributeValue_value, 	&rna_Short2AttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Short2AttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static int rna_Short2AttributeValue_value_default[2] = {
		0,
		0
	};
	rna_Short2AttributeValue_value_ = {
		{nullptr, 	&rna_Short2AttributeValue_rna_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vector",
		"2D vector",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec2s, x), RawPropertyType(1), nullptr},
		nullptr, nullptr, Short2AttributeValue_value_get, Short2AttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, rna_Short2AttributeValue_value_default
	};

	StructRNA *srna = RNA_Short2AttributeValue;
	srna->cont.properties = {&rna_Short2AttributeValue_rna_properties, &rna_Short2AttributeValue_value};
	srna->identifier = "Short2AttributeValue";
	srna->flag = 516;
	srna->name = "2D 16-Bit Integer Vector Attribute Value";
	srna->description = "2D value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Short2AttributeValue_rna_properties;
};

/* 2D Integer Vector Attribute */
static CollectionPropertyRNA rna_Int2Attribute_data_;
PropertyRNA &rna_Int2Attribute_data = reinterpret_cast<PropertyRNA &>(rna_Int2Attribute_data_);

StructRNA *RNA_Int2Attribute;
void register_struct_Int2Attribute(BlenderRNA &brna)
{
	rna_Int2Attribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Int2Attribute_data_begin, Int2Attribute_data_next, Int2Attribute_data_end, Int2Attribute_data_get, Int2Attribute_data_length, Int2Attribute_data_lookup_int, nullptr, nullptr, RNA_Int2AttributeValue
	};

	StructRNA *srna = RNA_Int2Attribute;
	srna->cont.properties = {&rna_Int2Attribute_data, &rna_Int2Attribute_data};
	srna->identifier = "Int2Attribute";
	srna->flag = 516;
	srna->name = "2D Integer Vector Attribute";
	srna->description = "Geometry attribute that stores 2D integer vectors";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* 2D Integer Vector Attribute Value */
static CollectionPropertyRNA rna_Int2AttributeValue_rna_properties_;
PropertyRNA &rna_Int2AttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Int2AttributeValue_rna_properties_);

static PointerPropertyRNA rna_Int2AttributeValue_rna_type_;
PropertyRNA &rna_Int2AttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_Int2AttributeValue_rna_type_);

static IntPropertyRNA rna_Int2AttributeValue_value_;
PropertyRNA &rna_Int2AttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_Int2AttributeValue_value_);

StructRNA *RNA_Int2AttributeValue;
void register_struct_Int2AttributeValue(BlenderRNA &brna)
{
	rna_Int2AttributeValue_rna_properties_ = {
		{&rna_Int2AttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Int2AttributeValue_rna_properties_begin, Int2AttributeValue_rna_properties_next, Int2AttributeValue_rna_properties_end, Int2AttributeValue_rna_properties_get, nullptr, nullptr, Int2AttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Int2AttributeValue_rna_type_ = {
		{&rna_Int2AttributeValue_value, 	&rna_Int2AttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Int2AttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static int rna_Int2AttributeValue_value_default[2] = {
		0,
		0
	};
	rna_Int2AttributeValue_value_ = {
		{nullptr, 	&rna_Int2AttributeValue_rna_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vector",
		"2D vector",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec2i, x), RawPropertyType(0), nullptr},
		nullptr, nullptr, Int2AttributeValue_value_get, Int2AttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_Int2AttributeValue_value_default
	};

	StructRNA *srna = RNA_Int2AttributeValue;
	srna->cont.properties = {&rna_Int2AttributeValue_rna_properties, &rna_Int2AttributeValue_value};
	srna->identifier = "Int2AttributeValue";
	srna->flag = 516;
	srna->name = "2D Integer Vector Attribute Value";
	srna->description = "2D value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Int2AttributeValue_rna_properties;
};

/* Quaternion Attribute */
static CollectionPropertyRNA rna_QuaternionAttribute_data_;
PropertyRNA &rna_QuaternionAttribute_data = reinterpret_cast<PropertyRNA &>(rna_QuaternionAttribute_data_);

StructRNA *RNA_QuaternionAttribute;
void register_struct_QuaternionAttribute(BlenderRNA &brna)
{
	rna_QuaternionAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		QuaternionAttribute_data_begin, QuaternionAttribute_data_next, QuaternionAttribute_data_end, QuaternionAttribute_data_get, QuaternionAttribute_data_length, QuaternionAttribute_data_lookup_int, nullptr, nullptr, RNA_QuaternionAttributeValue
	};

	StructRNA *srna = RNA_QuaternionAttribute;
	srna->cont.properties = {&rna_QuaternionAttribute_data, &rna_QuaternionAttribute_data};
	srna->identifier = "QuaternionAttribute";
	srna->flag = 516;
	srna->name = "Quaternion Attribute";
	srna->description = "Geometry attribute that stores rotation";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Quaternion Attribute Value */
static CollectionPropertyRNA rna_QuaternionAttributeValue_rna_properties_;
PropertyRNA &rna_QuaternionAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_QuaternionAttributeValue_rna_properties_);

static PointerPropertyRNA rna_QuaternionAttributeValue_rna_type_;
PropertyRNA &rna_QuaternionAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_QuaternionAttributeValue_rna_type_);

static FloatPropertyRNA rna_QuaternionAttributeValue_value_;
PropertyRNA &rna_QuaternionAttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_QuaternionAttributeValue_value_);

StructRNA *RNA_QuaternionAttributeValue;
void register_struct_QuaternionAttributeValue(BlenderRNA &brna)
{
	rna_QuaternionAttributeValue_rna_properties_ = {
		{&rna_QuaternionAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		QuaternionAttributeValue_rna_properties_begin, QuaternionAttributeValue_rna_properties_next, QuaternionAttributeValue_rna_properties_end, QuaternionAttributeValue_rna_properties_get, nullptr, nullptr, QuaternionAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_QuaternionAttributeValue_rna_type_ = {
		{&rna_QuaternionAttributeValue_value, 	&rna_QuaternionAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		QuaternionAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_QuaternionAttributeValue_value_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_QuaternionAttributeValue_value_ = {
		{nullptr, 	&rna_QuaternionAttributeValue_rna_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value",
		"Quaternion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec4f, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, QuaternionAttributeValue_value_get, QuaternionAttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_QuaternionAttributeValue_value_default
	};

	StructRNA *srna = RNA_QuaternionAttributeValue;
	srna->cont.properties = {&rna_QuaternionAttributeValue_rna_properties, &rna_QuaternionAttributeValue_value};
	srna->identifier = "QuaternionAttributeValue";
	srna->flag = 516;
	srna->name = "Quaternion Attribute Value";
	srna->description = "Rotation value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_QuaternionAttributeValue_rna_properties;
};

/* 4x4 Matrix Attribute */
static CollectionPropertyRNA rna_Float4x4Attribute_data_;
PropertyRNA &rna_Float4x4Attribute_data = reinterpret_cast<PropertyRNA &>(rna_Float4x4Attribute_data_);

StructRNA *RNA_Float4x4Attribute;
void register_struct_Float4x4Attribute(BlenderRNA &brna)
{
	rna_Float4x4Attribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float4x4Attribute_data_begin, Float4x4Attribute_data_next, Float4x4Attribute_data_end, Float4x4Attribute_data_get, Float4x4Attribute_data_length, Float4x4Attribute_data_lookup_int, nullptr, nullptr, RNA_Float4x4AttributeValue
	};

	StructRNA *srna = RNA_Float4x4Attribute;
	srna->cont.properties = {&rna_Float4x4Attribute_data, &rna_Float4x4Attribute_data};
	srna->identifier = "Float4x4Attribute";
	srna->flag = 516;
	srna->name = "4x4 Matrix Attribute";
	srna->description = "Geometry attribute that stores a 4 by 4 float matrix";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Matrix Attribute Value */
static CollectionPropertyRNA rna_Float4x4AttributeValue_rna_properties_;
PropertyRNA &rna_Float4x4AttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Float4x4AttributeValue_rna_properties_);

static PointerPropertyRNA rna_Float4x4AttributeValue_rna_type_;
PropertyRNA &rna_Float4x4AttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_Float4x4AttributeValue_rna_type_);

static FloatPropertyRNA rna_Float4x4AttributeValue_value_;
PropertyRNA &rna_Float4x4AttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_Float4x4AttributeValue_value_);

StructRNA *RNA_Float4x4AttributeValue;
void register_struct_Float4x4AttributeValue(BlenderRNA &brna)
{
	rna_Float4x4AttributeValue_rna_properties_ = {
		{&rna_Float4x4AttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float4x4AttributeValue_rna_properties_begin, Float4x4AttributeValue_rna_properties_next, Float4x4AttributeValue_rna_properties_end, Float4x4AttributeValue_rna_properties_get, nullptr, nullptr, Float4x4AttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Float4x4AttributeValue_rna_type_ = {
		{&rna_Float4x4AttributeValue_value, 	&rna_Float4x4AttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float4x4AttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_Float4x4AttributeValue_value_default[16] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Float4x4AttributeValue_value_ = {
		{nullptr, 	&rna_Float4x4AttributeValue_rna_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value",
		"Matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(mat4x4f, value), RawPropertyType(5), nullptr},
		nullptr, nullptr, Float4x4AttributeValue_value_get, Float4x4AttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Float4x4AttributeValue_value_default
	};

	StructRNA *srna = RNA_Float4x4AttributeValue;
	srna->cont.properties = {&rna_Float4x4AttributeValue_rna_properties, &rna_Float4x4AttributeValue_value};
	srna->identifier = "Float4x4AttributeValue";
	srna->flag = 516;
	srna->name = "Matrix Attribute Value";
	srna->description = "Matrix value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Float4x4AttributeValue_rna_properties;
};

/* String Attribute */
static CollectionPropertyRNA rna_StringAttribute_data_;
PropertyRNA &rna_StringAttribute_data = reinterpret_cast<PropertyRNA &>(rna_StringAttribute_data_);

StructRNA *RNA_StringAttribute;
void register_struct_StringAttribute(BlenderRNA &brna)
{
	rna_StringAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StringAttribute_data_begin, StringAttribute_data_next, StringAttribute_data_end, StringAttribute_data_get, StringAttribute_data_length, StringAttribute_data_lookup_int, nullptr, nullptr, RNA_StringAttributeValue
	};

	StructRNA *srna = RNA_StringAttribute;
	srna->cont.properties = {&rna_StringAttribute_data, &rna_StringAttribute_data};
	srna->identifier = "StringAttribute";
	srna->flag = 516;
	srna->name = "String Attribute";
	srna->description = "Geometry attribute that stores strings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* String Attribute Value */
static CollectionPropertyRNA rna_StringAttributeValue_rna_properties_;
PropertyRNA &rna_StringAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_StringAttributeValue_rna_properties_);

static PointerPropertyRNA rna_StringAttributeValue_rna_type_;
PropertyRNA &rna_StringAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_StringAttributeValue_rna_type_);

static StringPropertyRNA rna_StringAttributeValue_value_;
PropertyRNA &rna_StringAttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_StringAttributeValue_value_);

StructRNA *RNA_StringAttributeValue;
void register_struct_StringAttributeValue(BlenderRNA &brna)
{
	rna_StringAttributeValue_rna_properties_ = {
		{&rna_StringAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StringAttributeValue_rna_properties_begin, StringAttributeValue_rna_properties_next, StringAttributeValue_rna_properties_end, StringAttributeValue_rna_properties_get, nullptr, nullptr, StringAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_StringAttributeValue_rna_type_ = {
		{&rna_StringAttributeValue_value, 	&rna_StringAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StringAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_StringAttributeValue_value_ = {
		{nullptr, 	&rna_StringAttributeValue_rna_type,
		-1, "value", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_BYTESTRING) | int(PROP_UNIT_NONE)), nullptr, 0, {255, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		StringAttributeValue_value_get, StringAttributeValue_value_length, StringAttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 255, ""
	};

	StructRNA *srna = RNA_StringAttributeValue;
	srna->cont.properties = {&rna_StringAttributeValue_rna_properties, &rna_StringAttributeValue_value};
	srna->identifier = "StringAttributeValue";
	srna->flag = 516;
	srna->name = "String Attribute Value";
	srna->description = "String value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_StringAttributeValue_rna_properties;
};

/* Bool Attribute */
static CollectionPropertyRNA rna_BoolAttribute_data_;
PropertyRNA &rna_BoolAttribute_data = reinterpret_cast<PropertyRNA &>(rna_BoolAttribute_data_);

StructRNA *RNA_BoolAttribute;
void register_struct_BoolAttribute(BlenderRNA &brna)
{
	rna_BoolAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoolAttribute_data_begin, BoolAttribute_data_next, BoolAttribute_data_end, BoolAttribute_data_get, BoolAttribute_data_length, BoolAttribute_data_lookup_int, nullptr, nullptr, RNA_BoolAttributeValue
	};

	StructRNA *srna = RNA_BoolAttribute;
	srna->cont.properties = {&rna_BoolAttribute_data, &rna_BoolAttribute_data};
	srna->identifier = "BoolAttribute";
	srna->flag = 516;
	srna->name = "Bool Attribute";
	srna->description = "Geometry attribute that stores booleans";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Bool Attribute Value */
static CollectionPropertyRNA rna_BoolAttributeValue_rna_properties_;
PropertyRNA &rna_BoolAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BoolAttributeValue_rna_properties_);

static PointerPropertyRNA rna_BoolAttributeValue_rna_type_;
PropertyRNA &rna_BoolAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_BoolAttributeValue_rna_type_);

static BoolPropertyRNA rna_BoolAttributeValue_value_;
PropertyRNA &rna_BoolAttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_BoolAttributeValue_value_);

StructRNA *RNA_BoolAttributeValue;
void register_struct_BoolAttributeValue(BlenderRNA &brna)
{
	rna_BoolAttributeValue_rna_properties_ = {
		{&rna_BoolAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoolAttributeValue_rna_properties_begin, BoolAttributeValue_rna_properties_next, BoolAttributeValue_rna_properties_end, BoolAttributeValue_rna_properties_get, nullptr, nullptr, BoolAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BoolAttributeValue_rna_type_ = {
		{&rna_BoolAttributeValue_value, 	&rna_BoolAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoolAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BoolAttributeValue_value_ = {
		{nullptr, 	&rna_BoolAttributeValue_rna_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MBoolProperty, b), RawPropertyType(3), nullptr},
		BoolAttributeValue_value_get, BoolAttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BoolAttributeValue;
	srna->cont.properties = {&rna_BoolAttributeValue_rna_properties, &rna_BoolAttributeValue_value};
	srna->identifier = "BoolAttributeValue";
	srna->flag = 516;
	srna->name = "Bool Attribute Value";
	srna->description = "Bool value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BoolAttributeValue_rna_properties;
};

/* Float2 Attribute */
static CollectionPropertyRNA rna_Float2Attribute_data_;
PropertyRNA &rna_Float2Attribute_data = reinterpret_cast<PropertyRNA &>(rna_Float2Attribute_data_);

StructRNA *RNA_Float2Attribute;
void register_struct_Float2Attribute(BlenderRNA &brna)
{
	rna_Float2Attribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float2Attribute_data_begin, Float2Attribute_data_next, Float2Attribute_data_end, Float2Attribute_data_get, Float2Attribute_data_length, Float2Attribute_data_lookup_int, nullptr, nullptr, RNA_Float2AttributeValue
	};

	StructRNA *srna = RNA_Float2Attribute;
	srna->cont.properties = {&rna_Float2Attribute_data, &rna_Float2Attribute_data};
	srna->identifier = "Float2Attribute";
	srna->flag = 516;
	srna->name = "Float2 Attribute";
	srna->description = "Geometry attribute that stores floating-point 2D vectors";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Float2 Attribute Value */
static CollectionPropertyRNA rna_Float2AttributeValue_rna_properties_;
PropertyRNA &rna_Float2AttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Float2AttributeValue_rna_properties_);

static PointerPropertyRNA rna_Float2AttributeValue_rna_type_;
PropertyRNA &rna_Float2AttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_Float2AttributeValue_rna_type_);

static FloatPropertyRNA rna_Float2AttributeValue_vector_;
PropertyRNA &rna_Float2AttributeValue_vector = reinterpret_cast<PropertyRNA &>(rna_Float2AttributeValue_vector_);

StructRNA *RNA_Float2AttributeValue;
void register_struct_Float2AttributeValue(BlenderRNA &brna)
{
	rna_Float2AttributeValue_rna_properties_ = {
		{&rna_Float2AttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float2AttributeValue_rna_properties_begin, Float2AttributeValue_rna_properties_next, Float2AttributeValue_rna_properties_end, Float2AttributeValue_rna_properties_get, nullptr, nullptr, Float2AttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Float2AttributeValue_rna_type_ = {
		{&rna_Float2AttributeValue_vector, 	&rna_Float2AttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float2AttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_Float2AttributeValue_vector_default[2] = {
		0.0f,
		0.0f
	};
	rna_Float2AttributeValue_vector_ = {
		{nullptr, 	&rna_Float2AttributeValue_rna_type,
		-1, "vector", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vector",
		"2D vector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec2f, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, Float2AttributeValue_vector_get, Float2AttributeValue_vector_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Float2AttributeValue_vector_default
	};

	StructRNA *srna = RNA_Float2AttributeValue;
	srna->cont.properties = {&rna_Float2AttributeValue_rna_properties, &rna_Float2AttributeValue_vector};
	srna->identifier = "Float2AttributeValue";
	srna->flag = 516;
	srna->name = "Float2 Attribute Value";
	srna->description = "2D Vector value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Float2AttributeValue_rna_properties;
};

/* Float4 Attribute */
static CollectionPropertyRNA rna_Float4Attribute_data_;
PropertyRNA &rna_Float4Attribute_data = reinterpret_cast<PropertyRNA &>(rna_Float4Attribute_data_);

StructRNA *RNA_Float4Attribute;
void register_struct_Float4Attribute(BlenderRNA &brna)
{
	rna_Float4Attribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float4Attribute_data_begin, Float4Attribute_data_next, Float4Attribute_data_end, Float4Attribute_data_get, Float4Attribute_data_length, Float4Attribute_data_lookup_int, nullptr, nullptr, RNA_Float4AttributeValue
	};

	StructRNA *srna = RNA_Float4Attribute;
	srna->cont.properties = {&rna_Float4Attribute_data, &rna_Float4Attribute_data};
	srna->identifier = "Float4Attribute";
	srna->flag = 516;
	srna->name = "Float4 Attribute";
	srna->description = "Geometry attribute that stores floating-point 4D vectors";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* Float4 Attribute Value */
static CollectionPropertyRNA rna_Float4AttributeValue_rna_properties_;
PropertyRNA &rna_Float4AttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Float4AttributeValue_rna_properties_);

static PointerPropertyRNA rna_Float4AttributeValue_rna_type_;
PropertyRNA &rna_Float4AttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_Float4AttributeValue_rna_type_);

static FloatPropertyRNA rna_Float4AttributeValue_vector_;
PropertyRNA &rna_Float4AttributeValue_vector = reinterpret_cast<PropertyRNA &>(rna_Float4AttributeValue_vector_);

StructRNA *RNA_Float4AttributeValue;
void register_struct_Float4AttributeValue(BlenderRNA &brna)
{
	rna_Float4AttributeValue_rna_properties_ = {
		{&rna_Float4AttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float4AttributeValue_rna_properties_begin, Float4AttributeValue_rna_properties_next, Float4AttributeValue_rna_properties_end, Float4AttributeValue_rna_properties_get, nullptr, nullptr, Float4AttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Float4AttributeValue_rna_type_ = {
		{&rna_Float4AttributeValue_vector, 	&rna_Float4AttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Float4AttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_Float4AttributeValue_vector_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Float4AttributeValue_vector_ = {
		{nullptr, 	&rna_Float4AttributeValue_rna_type,
		-1, "vector", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vector",
		"4D vector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec4f, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, Float4AttributeValue_vector_get, Float4AttributeValue_vector_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Float4AttributeValue_vector_default
	};

	StructRNA *srna = RNA_Float4AttributeValue;
	srna->cont.properties = {&rna_Float4AttributeValue_rna_properties, &rna_Float4AttributeValue_vector};
	srna->identifier = "Float4AttributeValue";
	srna->flag = 516;
	srna->name = "Float4 Attribute Value";
	srna->description = "4D Vector value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Float4AttributeValue_rna_properties;
};

/* 8-bit Integer Attribute */
static CollectionPropertyRNA rna_ByteIntAttribute_data_;
PropertyRNA &rna_ByteIntAttribute_data = reinterpret_cast<PropertyRNA &>(rna_ByteIntAttribute_data_);

StructRNA *RNA_ByteIntAttribute;
void register_struct_ByteIntAttribute(BlenderRNA &brna)
{
	rna_ByteIntAttribute_data_ = {
		{nullptr, 	nullptr,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ByteIntAttribute_data_begin, ByteIntAttribute_data_next, ByteIntAttribute_data_end, ByteIntAttribute_data_get, ByteIntAttribute_data_length, ByteIntAttribute_data_lookup_int, nullptr, nullptr, RNA_ByteIntAttributeValue
	};

	StructRNA *srna = RNA_ByteIntAttribute;
	srna->cont.properties = {&rna_ByteIntAttribute_data, &rna_ByteIntAttribute_data};
	srna->identifier = "ByteIntAttribute";
	srna->flag = 516;
	srna->name = "8-bit Integer Attribute";
	srna->description = "Geometry attribute that stores 8-bit integers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_Attribute_name;
	srna->iteratorproperty = &rna_Attribute_rna_properties;
	srna->base = RNA_Attribute;
	srna->refine = rna_Attribute_refine;
	srna->path = rna_Attribute_path;
};

/* 8-bit Integer Attribute Value */
static CollectionPropertyRNA rna_ByteIntAttributeValue_rna_properties_;
PropertyRNA &rna_ByteIntAttributeValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ByteIntAttributeValue_rna_properties_);

static PointerPropertyRNA rna_ByteIntAttributeValue_rna_type_;
PropertyRNA &rna_ByteIntAttributeValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_ByteIntAttributeValue_rna_type_);

static IntPropertyRNA rna_ByteIntAttributeValue_value_;
PropertyRNA &rna_ByteIntAttributeValue_value = reinterpret_cast<PropertyRNA &>(rna_ByteIntAttributeValue_value_);

StructRNA *RNA_ByteIntAttributeValue;
void register_struct_ByteIntAttributeValue(BlenderRNA &brna)
{
	rna_ByteIntAttributeValue_rna_properties_ = {
		{&rna_ByteIntAttributeValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ByteIntAttributeValue_rna_properties_begin, ByteIntAttributeValue_rna_properties_next, ByteIntAttributeValue_rna_properties_end, ByteIntAttributeValue_rna_properties_get, nullptr, nullptr, ByteIntAttributeValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ByteIntAttributeValue_rna_type_ = {
		{&rna_ByteIntAttributeValue_value, 	&rna_ByteIntAttributeValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ByteIntAttributeValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ByteIntAttributeValue_value_ = {
		{nullptr, 	&rna_ByteIntAttributeValue_rna_type,
		-1, "value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Attribute_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MInt8Property, i), RawPropertyType(10), nullptr},
		ByteIntAttributeValue_value_get, ByteIntAttributeValue_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -128, 127, -128, 127, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ByteIntAttributeValue;
	srna->cont.properties = {&rna_ByteIntAttributeValue_rna_properties, &rna_ByteIntAttributeValue_value};
	srna->identifier = "ByteIntAttributeValue";
	srna->flag = 516;
	srna->name = "8-bit Integer Attribute Value";
	srna->description = "8-bit value in geometry attribute";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ByteIntAttributeValue_rna_properties;
};

/* Attribute Group */
static CollectionPropertyRNA rna_AttributeGroupMesh_rna_properties_;
PropertyRNA &rna_AttributeGroupMesh_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_rna_properties_);

static PointerPropertyRNA rna_AttributeGroupMesh_rna_type_;
PropertyRNA &rna_AttributeGroupMesh_rna_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_rna_type_);

static PointerPropertyRNA rna_AttributeGroupMesh_active_;
PropertyRNA &rna_AttributeGroupMesh_active = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_active_);

static IntPropertyRNA rna_AttributeGroupMesh_active_index_;
PropertyRNA &rna_AttributeGroupMesh_active_index = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_active_index_);

static PointerPropertyRNA rna_AttributeGroupMesh_active_color_;
PropertyRNA &rna_AttributeGroupMesh_active_color = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_active_color_);

static IntPropertyRNA rna_AttributeGroupMesh_active_color_index_;
PropertyRNA &rna_AttributeGroupMesh_active_color_index = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_active_color_index_);

static IntPropertyRNA rna_AttributeGroupMesh_render_color_index_;
PropertyRNA &rna_AttributeGroupMesh_render_color_index = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_render_color_index_);

static StringPropertyRNA rna_AttributeGroupMesh_default_color_name_;
PropertyRNA &rna_AttributeGroupMesh_default_color_name = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_default_color_name_);

static StringPropertyRNA rna_AttributeGroupMesh_active_color_name_;
PropertyRNA &rna_AttributeGroupMesh_active_color_name = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_active_color_name_);

static StringPropertyRNA rna_AttributeGroupMesh_new_name_;
PropertyRNA &rna_AttributeGroupMesh_new_name = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_new_name_);

static EnumPropertyRNA rna_AttributeGroupMesh_new_type_;
PropertyRNA &rna_AttributeGroupMesh_new_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_new_type_);

static EnumPropertyRNA rna_AttributeGroupMesh_new_domain_;
PropertyRNA &rna_AttributeGroupMesh_new_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_new_domain_);

static PointerPropertyRNA rna_AttributeGroupMesh_new_attribute_;
PropertyRNA &rna_AttributeGroupMesh_new_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_new_attribute_);

FunctionRNA *rna_AttributeGroupMesh_new_func;
static PointerPropertyRNA rna_AttributeGroupMesh_remove_attribute_;
PropertyRNA &rna_AttributeGroupMesh_remove_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_remove_attribute_);

FunctionRNA *rna_AttributeGroupMesh_remove_func;
static EnumPropertyRNA rna_AttributeGroupMesh_domain_size_domain_;
PropertyRNA &rna_AttributeGroupMesh_domain_size_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_domain_size_domain_);

static IntPropertyRNA rna_AttributeGroupMesh_domain_size_size_;
PropertyRNA &rna_AttributeGroupMesh_domain_size_size = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupMesh_domain_size_size_);

FunctionRNA *rna_AttributeGroupMesh_domain_size_func;
StructRNA *RNA_AttributeGroupMesh;
void register_struct_AttributeGroupMesh(BlenderRNA &brna)
{
	rna_AttributeGroupMesh_rna_properties_ = {
		{&rna_AttributeGroupMesh_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_rna_properties_begin, AttributeGroupMesh_rna_properties_next, AttributeGroupMesh_rna_properties_end, AttributeGroupMesh_rna_properties_get, nullptr, nullptr, AttributeGroupMesh_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AttributeGroupMesh_rna_type_ = {
		{&rna_AttributeGroupMesh_active, 	&rna_AttributeGroupMesh_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AttributeGroupMesh_active_ = {
		{&rna_AttributeGroupMesh_active_index, 	&rna_AttributeGroupMesh_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute",
		"Active attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_active_get, AttributeGroupMesh_active_set, nullptr, nullptr,RNA_Attribute
	};

	rna_AttributeGroupMesh_active_index_ = {
		{&rna_AttributeGroupMesh_active_color, 	&rna_AttributeGroupMesh_active,
		-1, "active_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute Index",
		"Active attribute index or -1 when none are active",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_active_index_get, AttributeGroupMesh_active_index_set, nullptr, nullptr, rna_AttributeGroupID_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AttributeGroupMesh_active_color_ = {
		{&rna_AttributeGroupMesh_active_color_index, 	&rna_AttributeGroupMesh_active_index,
		-1, "active_color", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Color",
		"Active color attribute for display and editing",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active_color, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_active_color_get, AttributeGroupMesh_active_color_set, nullptr, nullptr,RNA_Attribute
	};

	rna_AttributeGroupMesh_active_color_index_ = {
		{&rna_AttributeGroupMesh_render_color_index, 	&rna_AttributeGroupMesh_active_color,
		-1, "active_color_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Color Index",
		"Active color attribute index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active_color, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_active_color_index_get, AttributeGroupMesh_active_color_index_set, nullptr, nullptr, rna_AttributeGroupMesh_active_color_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AttributeGroupMesh_render_color_index_ = {
		{&rna_AttributeGroupMesh_default_color_name, 	&rna_AttributeGroupMesh_active_color_index,
		-1, "render_color_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Render Color Index",
		"The index of the color attribute used as a fallback for rendering",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active_color, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_render_color_index_get, AttributeGroupMesh_render_color_index_set, nullptr, nullptr, rna_AttributeGroupMesh_render_color_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AttributeGroupMesh_default_color_name_ = {
		{&rna_AttributeGroupMesh_active_color_name, 	&rna_AttributeGroupMesh_render_color_index,
		-1, "default_color_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Default Color Attribute",
		"The name of the default color attribute used as a fallback for rendering",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_default_color_name_get, AttributeGroupMesh_default_color_name_length, AttributeGroupMesh_default_color_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_AttributeGroupMesh_active_color_name_ = {
		{nullptr, 	&rna_AttributeGroupMesh_default_color_name,
		-1, "active_color_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Color Attribute",
		"The name of the active color attribute for display and editing",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupMesh_active_color_name_get, AttributeGroupMesh_active_color_name_length, AttributeGroupMesh_active_color_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	StructRNA *srna = RNA_AttributeGroupMesh;
	srna->cont.properties = {&rna_AttributeGroupMesh_rna_properties, &rna_AttributeGroupMesh_active_color_name};
	srna->identifier = "AttributeGroupMesh";
	srna->flag = 516;
	srna->name = "Attribute Group";
	srna->description = "Group of geometry attributes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AttributeGroupMesh_rna_properties;
	{
	rna_AttributeGroupMesh_new_name_ = {
		{&rna_AttributeGroupMesh_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of geometry attribute",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Attribute"
	};
	rna_AttributeGroupMesh_new_type_ = {
		{&rna_AttributeGroupMesh_new_domain, 	&rna_AttributeGroupMesh_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"Attribute type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_type_items, 14, 10
	};
	rna_AttributeGroupMesh_new_domain_ = {
		{&rna_AttributeGroupMesh_new_attribute, 	&rna_AttributeGroupMesh_new_type,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupMesh_new_attribute_ = {
		{nullptr, 	&rna_AttributeGroupMesh_new_domain,
		-1, "attribute", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"New geometry attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupMesh_new_name, &rna_AttributeGroupMesh_new_attribute};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add attribute to geometry";
		func->call = AttributeGroupMesh_new_call;
		func->c_ret = &rna_AttributeGroupMesh_new_attribute;
		rna_AttributeGroupMesh_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupMesh_remove_attribute_ = {
		{nullptr, 	nullptr,
		-1, "attribute", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Geometry Attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupMesh_remove_attribute, &rna_AttributeGroupMesh_remove_attribute};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove attribute from geometry";
		func->call = AttributeGroupMesh_remove_call;
		rna_AttributeGroupMesh_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupMesh_domain_size_domain_ = {
		{&rna_AttributeGroupMesh_domain_size_size, 	nullptr,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupMesh_domain_size_size_ = {
		{nullptr, 	&rna_AttributeGroupMesh_domain_size_domain,
		-1, "size", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Size",
		"Size of the domain",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupMesh_domain_size_domain, &rna_AttributeGroupMesh_domain_size_size};
		func->identifier = "domain_size";
		func->description = "Get the size of a given domain";
		func->call = AttributeGroupMesh_domain_size_call;
		func->c_ret = &rna_AttributeGroupMesh_domain_size_size;
		rna_AttributeGroupMesh_domain_size_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Attribute Group */
static CollectionPropertyRNA rna_AttributeGroupPointCloud_rna_properties_;
PropertyRNA &rna_AttributeGroupPointCloud_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_rna_properties_);

static PointerPropertyRNA rna_AttributeGroupPointCloud_rna_type_;
PropertyRNA &rna_AttributeGroupPointCloud_rna_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_rna_type_);

static PointerPropertyRNA rna_AttributeGroupPointCloud_active_;
PropertyRNA &rna_AttributeGroupPointCloud_active = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_active_);

static IntPropertyRNA rna_AttributeGroupPointCloud_active_index_;
PropertyRNA &rna_AttributeGroupPointCloud_active_index = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_active_index_);

static StringPropertyRNA rna_AttributeGroupPointCloud_new_name_;
PropertyRNA &rna_AttributeGroupPointCloud_new_name = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_new_name_);

static EnumPropertyRNA rna_AttributeGroupPointCloud_new_type_;
PropertyRNA &rna_AttributeGroupPointCloud_new_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_new_type_);

static EnumPropertyRNA rna_AttributeGroupPointCloud_new_domain_;
PropertyRNA &rna_AttributeGroupPointCloud_new_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_new_domain_);

static PointerPropertyRNA rna_AttributeGroupPointCloud_new_attribute_;
PropertyRNA &rna_AttributeGroupPointCloud_new_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_new_attribute_);

FunctionRNA *rna_AttributeGroupPointCloud_new_func;
static PointerPropertyRNA rna_AttributeGroupPointCloud_remove_attribute_;
PropertyRNA &rna_AttributeGroupPointCloud_remove_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_remove_attribute_);

FunctionRNA *rna_AttributeGroupPointCloud_remove_func;
static EnumPropertyRNA rna_AttributeGroupPointCloud_domain_size_domain_;
PropertyRNA &rna_AttributeGroupPointCloud_domain_size_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_domain_size_domain_);

static IntPropertyRNA rna_AttributeGroupPointCloud_domain_size_size_;
PropertyRNA &rna_AttributeGroupPointCloud_domain_size_size = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupPointCloud_domain_size_size_);

FunctionRNA *rna_AttributeGroupPointCloud_domain_size_func;
StructRNA *RNA_AttributeGroupPointCloud;
void register_struct_AttributeGroupPointCloud(BlenderRNA &brna)
{
	rna_AttributeGroupPointCloud_rna_properties_ = {
		{&rna_AttributeGroupPointCloud_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupPointCloud_rna_properties_begin, AttributeGroupPointCloud_rna_properties_next, AttributeGroupPointCloud_rna_properties_end, AttributeGroupPointCloud_rna_properties_get, nullptr, nullptr, AttributeGroupPointCloud_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AttributeGroupPointCloud_rna_type_ = {
		{&rna_AttributeGroupPointCloud_active, 	&rna_AttributeGroupPointCloud_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupPointCloud_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AttributeGroupPointCloud_active_ = {
		{&rna_AttributeGroupPointCloud_active_index, 	&rna_AttributeGroupPointCloud_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute",
		"Active attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupPointCloud_active_get, AttributeGroupPointCloud_active_set, nullptr, nullptr,RNA_Attribute
	};

	rna_AttributeGroupPointCloud_active_index_ = {
		{nullptr, 	&rna_AttributeGroupPointCloud_active,
		-1, "active_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute Index",
		"Active attribute index or -1 when none are active",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupPointCloud_active_index_get, AttributeGroupPointCloud_active_index_set, nullptr, nullptr, rna_AttributeGroupID_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AttributeGroupPointCloud;
	srna->cont.properties = {&rna_AttributeGroupPointCloud_rna_properties, &rna_AttributeGroupPointCloud_active_index};
	srna->identifier = "AttributeGroupPointCloud";
	srna->flag = 516;
	srna->name = "Attribute Group";
	srna->description = "Group of geometry attributes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AttributeGroupPointCloud_rna_properties;
	{
	rna_AttributeGroupPointCloud_new_name_ = {
		{&rna_AttributeGroupPointCloud_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of geometry attribute",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Attribute"
	};
	rna_AttributeGroupPointCloud_new_type_ = {
		{&rna_AttributeGroupPointCloud_new_domain, 	&rna_AttributeGroupPointCloud_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"Attribute type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_type_items, 14, 10
	};
	rna_AttributeGroupPointCloud_new_domain_ = {
		{&rna_AttributeGroupPointCloud_new_attribute, 	&rna_AttributeGroupPointCloud_new_type,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupPointCloud_new_attribute_ = {
		{nullptr, 	&rna_AttributeGroupPointCloud_new_domain,
		-1, "attribute", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"New geometry attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupPointCloud_new_name, &rna_AttributeGroupPointCloud_new_attribute};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add attribute to geometry";
		func->call = AttributeGroupPointCloud_new_call;
		func->c_ret = &rna_AttributeGroupPointCloud_new_attribute;
		rna_AttributeGroupPointCloud_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupPointCloud_remove_attribute_ = {
		{nullptr, 	nullptr,
		-1, "attribute", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Geometry Attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupPointCloud_remove_attribute, &rna_AttributeGroupPointCloud_remove_attribute};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove attribute from geometry";
		func->call = AttributeGroupPointCloud_remove_call;
		rna_AttributeGroupPointCloud_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupPointCloud_domain_size_domain_ = {
		{&rna_AttributeGroupPointCloud_domain_size_size, 	nullptr,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupPointCloud_domain_size_size_ = {
		{nullptr, 	&rna_AttributeGroupPointCloud_domain_size_domain,
		-1, "size", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Size",
		"Size of the domain",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupPointCloud_domain_size_domain, &rna_AttributeGroupPointCloud_domain_size_size};
		func->identifier = "domain_size";
		func->description = "Get the size of a given domain";
		func->call = AttributeGroupPointCloud_domain_size_call;
		func->c_ret = &rna_AttributeGroupPointCloud_domain_size_size;
		rna_AttributeGroupPointCloud_domain_size_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Attribute Group */
static CollectionPropertyRNA rna_AttributeGroupCurves_rna_properties_;
PropertyRNA &rna_AttributeGroupCurves_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_rna_properties_);

static PointerPropertyRNA rna_AttributeGroupCurves_rna_type_;
PropertyRNA &rna_AttributeGroupCurves_rna_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_rna_type_);

static PointerPropertyRNA rna_AttributeGroupCurves_active_;
PropertyRNA &rna_AttributeGroupCurves_active = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_active_);

static IntPropertyRNA rna_AttributeGroupCurves_active_index_;
PropertyRNA &rna_AttributeGroupCurves_active_index = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_active_index_);

static StringPropertyRNA rna_AttributeGroupCurves_new_name_;
PropertyRNA &rna_AttributeGroupCurves_new_name = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_new_name_);

static EnumPropertyRNA rna_AttributeGroupCurves_new_type_;
PropertyRNA &rna_AttributeGroupCurves_new_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_new_type_);

static EnumPropertyRNA rna_AttributeGroupCurves_new_domain_;
PropertyRNA &rna_AttributeGroupCurves_new_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_new_domain_);

static PointerPropertyRNA rna_AttributeGroupCurves_new_attribute_;
PropertyRNA &rna_AttributeGroupCurves_new_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_new_attribute_);

FunctionRNA *rna_AttributeGroupCurves_new_func;
static PointerPropertyRNA rna_AttributeGroupCurves_remove_attribute_;
PropertyRNA &rna_AttributeGroupCurves_remove_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_remove_attribute_);

FunctionRNA *rna_AttributeGroupCurves_remove_func;
static EnumPropertyRNA rna_AttributeGroupCurves_domain_size_domain_;
PropertyRNA &rna_AttributeGroupCurves_domain_size_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_domain_size_domain_);

static IntPropertyRNA rna_AttributeGroupCurves_domain_size_size_;
PropertyRNA &rna_AttributeGroupCurves_domain_size_size = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupCurves_domain_size_size_);

FunctionRNA *rna_AttributeGroupCurves_domain_size_func;
StructRNA *RNA_AttributeGroupCurves;
void register_struct_AttributeGroupCurves(BlenderRNA &brna)
{
	rna_AttributeGroupCurves_rna_properties_ = {
		{&rna_AttributeGroupCurves_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupCurves_rna_properties_begin, AttributeGroupCurves_rna_properties_next, AttributeGroupCurves_rna_properties_end, AttributeGroupCurves_rna_properties_get, nullptr, nullptr, AttributeGroupCurves_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AttributeGroupCurves_rna_type_ = {
		{&rna_AttributeGroupCurves_active, 	&rna_AttributeGroupCurves_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupCurves_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AttributeGroupCurves_active_ = {
		{&rna_AttributeGroupCurves_active_index, 	&rna_AttributeGroupCurves_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute",
		"Active attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupCurves_active_get, AttributeGroupCurves_active_set, nullptr, nullptr,RNA_Attribute
	};

	rna_AttributeGroupCurves_active_index_ = {
		{nullptr, 	&rna_AttributeGroupCurves_active,
		-1, "active_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute Index",
		"Active attribute index or -1 when none are active",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupCurves_active_index_get, AttributeGroupCurves_active_index_set, nullptr, nullptr, rna_AttributeGroupID_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AttributeGroupCurves;
	srna->cont.properties = {&rna_AttributeGroupCurves_rna_properties, &rna_AttributeGroupCurves_active_index};
	srna->identifier = "AttributeGroupCurves";
	srna->flag = 516;
	srna->name = "Attribute Group";
	srna->description = "Group of geometry attributes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AttributeGroupCurves_rna_properties;
	{
	rna_AttributeGroupCurves_new_name_ = {
		{&rna_AttributeGroupCurves_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of geometry attribute",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Attribute"
	};
	rna_AttributeGroupCurves_new_type_ = {
		{&rna_AttributeGroupCurves_new_domain, 	&rna_AttributeGroupCurves_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"Attribute type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_type_items, 14, 10
	};
	rna_AttributeGroupCurves_new_domain_ = {
		{&rna_AttributeGroupCurves_new_attribute, 	&rna_AttributeGroupCurves_new_type,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupCurves_new_attribute_ = {
		{nullptr, 	&rna_AttributeGroupCurves_new_domain,
		-1, "attribute", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"New geometry attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupCurves_new_name, &rna_AttributeGroupCurves_new_attribute};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add attribute to geometry";
		func->call = AttributeGroupCurves_new_call;
		func->c_ret = &rna_AttributeGroupCurves_new_attribute;
		rna_AttributeGroupCurves_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupCurves_remove_attribute_ = {
		{nullptr, 	nullptr,
		-1, "attribute", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Geometry Attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupCurves_remove_attribute, &rna_AttributeGroupCurves_remove_attribute};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove attribute from geometry";
		func->call = AttributeGroupCurves_remove_call;
		rna_AttributeGroupCurves_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupCurves_domain_size_domain_ = {
		{&rna_AttributeGroupCurves_domain_size_size, 	nullptr,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupCurves_domain_size_size_ = {
		{nullptr, 	&rna_AttributeGroupCurves_domain_size_domain,
		-1, "size", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Size",
		"Size of the domain",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupCurves_domain_size_domain, &rna_AttributeGroupCurves_domain_size_size};
		func->identifier = "domain_size";
		func->description = "Get the size of a given domain";
		func->call = AttributeGroupCurves_domain_size_call;
		func->c_ret = &rna_AttributeGroupCurves_domain_size_size;
		rna_AttributeGroupCurves_domain_size_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Attribute Group */
static CollectionPropertyRNA rna_AttributeGroupGreasePencil_rna_properties_;
PropertyRNA &rna_AttributeGroupGreasePencil_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_rna_properties_);

static PointerPropertyRNA rna_AttributeGroupGreasePencil_rna_type_;
PropertyRNA &rna_AttributeGroupGreasePencil_rna_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_rna_type_);

static PointerPropertyRNA rna_AttributeGroupGreasePencil_active_;
PropertyRNA &rna_AttributeGroupGreasePencil_active = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_active_);

static IntPropertyRNA rna_AttributeGroupGreasePencil_active_index_;
PropertyRNA &rna_AttributeGroupGreasePencil_active_index = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_active_index_);

static StringPropertyRNA rna_AttributeGroupGreasePencil_new_name_;
PropertyRNA &rna_AttributeGroupGreasePencil_new_name = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_new_name_);

static EnumPropertyRNA rna_AttributeGroupGreasePencil_new_type_;
PropertyRNA &rna_AttributeGroupGreasePencil_new_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_new_type_);

static EnumPropertyRNA rna_AttributeGroupGreasePencil_new_domain_;
PropertyRNA &rna_AttributeGroupGreasePencil_new_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_new_domain_);

static PointerPropertyRNA rna_AttributeGroupGreasePencil_new_attribute_;
PropertyRNA &rna_AttributeGroupGreasePencil_new_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_new_attribute_);

FunctionRNA *rna_AttributeGroupGreasePencil_new_func;
static PointerPropertyRNA rna_AttributeGroupGreasePencil_remove_attribute_;
PropertyRNA &rna_AttributeGroupGreasePencil_remove_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_remove_attribute_);

FunctionRNA *rna_AttributeGroupGreasePencil_remove_func;
static EnumPropertyRNA rna_AttributeGroupGreasePencil_domain_size_domain_;
PropertyRNA &rna_AttributeGroupGreasePencil_domain_size_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_domain_size_domain_);

static IntPropertyRNA rna_AttributeGroupGreasePencil_domain_size_size_;
PropertyRNA &rna_AttributeGroupGreasePencil_domain_size_size = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencil_domain_size_size_);

FunctionRNA *rna_AttributeGroupGreasePencil_domain_size_func;
StructRNA *RNA_AttributeGroupGreasePencil;
void register_struct_AttributeGroupGreasePencil(BlenderRNA &brna)
{
	rna_AttributeGroupGreasePencil_rna_properties_ = {
		{&rna_AttributeGroupGreasePencil_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupGreasePencil_rna_properties_begin, AttributeGroupGreasePencil_rna_properties_next, AttributeGroupGreasePencil_rna_properties_end, AttributeGroupGreasePencil_rna_properties_get, nullptr, nullptr, AttributeGroupGreasePencil_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AttributeGroupGreasePencil_rna_type_ = {
		{&rna_AttributeGroupGreasePencil_active, 	&rna_AttributeGroupGreasePencil_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupGreasePencil_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AttributeGroupGreasePencil_active_ = {
		{&rna_AttributeGroupGreasePencil_active_index, 	&rna_AttributeGroupGreasePencil_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute",
		"Active attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupGreasePencil_active_get, AttributeGroupGreasePencil_active_set, nullptr, nullptr,RNA_Attribute
	};

	rna_AttributeGroupGreasePencil_active_index_ = {
		{nullptr, 	&rna_AttributeGroupGreasePencil_active,
		-1, "active_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute Index",
		"Active attribute index or -1 when none are active",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupGreasePencil_active_index_get, AttributeGroupGreasePencil_active_index_set, nullptr, nullptr, rna_AttributeGroupID_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AttributeGroupGreasePencil;
	srna->cont.properties = {&rna_AttributeGroupGreasePencil_rna_properties, &rna_AttributeGroupGreasePencil_active_index};
	srna->identifier = "AttributeGroupGreasePencil";
	srna->flag = 516;
	srna->name = "Attribute Group";
	srna->description = "Group of geometry attributes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AttributeGroupGreasePencil_rna_properties;
	{
	rna_AttributeGroupGreasePencil_new_name_ = {
		{&rna_AttributeGroupGreasePencil_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of geometry attribute",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Attribute"
	};
	rna_AttributeGroupGreasePencil_new_type_ = {
		{&rna_AttributeGroupGreasePencil_new_domain, 	&rna_AttributeGroupGreasePencil_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"Attribute type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_type_items, 14, 10
	};
	rna_AttributeGroupGreasePencil_new_domain_ = {
		{&rna_AttributeGroupGreasePencil_new_attribute, 	&rna_AttributeGroupGreasePencil_new_type,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupGreasePencil_new_attribute_ = {
		{nullptr, 	&rna_AttributeGroupGreasePencil_new_domain,
		-1, "attribute", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"New geometry attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupGreasePencil_new_name, &rna_AttributeGroupGreasePencil_new_attribute};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add attribute to geometry";
		func->call = AttributeGroupGreasePencil_new_call;
		func->c_ret = &rna_AttributeGroupGreasePencil_new_attribute;
		rna_AttributeGroupGreasePencil_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupGreasePencil_remove_attribute_ = {
		{nullptr, 	nullptr,
		-1, "attribute", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Geometry Attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupGreasePencil_remove_attribute, &rna_AttributeGroupGreasePencil_remove_attribute};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove attribute from geometry";
		func->call = AttributeGroupGreasePencil_remove_call;
		rna_AttributeGroupGreasePencil_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupGreasePencil_domain_size_domain_ = {
		{&rna_AttributeGroupGreasePencil_domain_size_size, 	nullptr,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupGreasePencil_domain_size_size_ = {
		{nullptr, 	&rna_AttributeGroupGreasePencil_domain_size_domain,
		-1, "size", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Size",
		"Size of the domain",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupGreasePencil_domain_size_domain, &rna_AttributeGroupGreasePencil_domain_size_size};
		func->identifier = "domain_size";
		func->description = "Get the size of a given domain";
		func->call = AttributeGroupGreasePencil_domain_size_call;
		func->c_ret = &rna_AttributeGroupGreasePencil_domain_size_size;
		rna_AttributeGroupGreasePencil_domain_size_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Attribute Group */
static CollectionPropertyRNA rna_AttributeGroupGreasePencilDrawing_rna_properties_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_rna_properties_);

static PointerPropertyRNA rna_AttributeGroupGreasePencilDrawing_rna_type_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_rna_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_rna_type_);

static PointerPropertyRNA rna_AttributeGroupGreasePencilDrawing_active_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_active = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_active_);

static IntPropertyRNA rna_AttributeGroupGreasePencilDrawing_active_index_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_active_index = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_active_index_);

static StringPropertyRNA rna_AttributeGroupGreasePencilDrawing_new_name_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_new_name = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_new_name_);

static EnumPropertyRNA rna_AttributeGroupGreasePencilDrawing_new_type_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_new_type = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_new_type_);

static EnumPropertyRNA rna_AttributeGroupGreasePencilDrawing_new_domain_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_new_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_new_domain_);

static PointerPropertyRNA rna_AttributeGroupGreasePencilDrawing_new_attribute_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_new_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_new_attribute_);

FunctionRNA *rna_AttributeGroupGreasePencilDrawing_new_func;
static PointerPropertyRNA rna_AttributeGroupGreasePencilDrawing_remove_attribute_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_remove_attribute = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_remove_attribute_);

FunctionRNA *rna_AttributeGroupGreasePencilDrawing_remove_func;
static EnumPropertyRNA rna_AttributeGroupGreasePencilDrawing_domain_size_domain_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_domain_size_domain = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_domain_size_domain_);

static IntPropertyRNA rna_AttributeGroupGreasePencilDrawing_domain_size_size_;
PropertyRNA &rna_AttributeGroupGreasePencilDrawing_domain_size_size = reinterpret_cast<PropertyRNA &>(rna_AttributeGroupGreasePencilDrawing_domain_size_size_);

FunctionRNA *rna_AttributeGroupGreasePencilDrawing_domain_size_func;
StructRNA *RNA_AttributeGroupGreasePencilDrawing;
void register_struct_AttributeGroupGreasePencilDrawing(BlenderRNA &brna)
{
	rna_AttributeGroupGreasePencilDrawing_rna_properties_ = {
		{&rna_AttributeGroupGreasePencilDrawing_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupGreasePencilDrawing_rna_properties_begin, AttributeGroupGreasePencilDrawing_rna_properties_next, AttributeGroupGreasePencilDrawing_rna_properties_end, AttributeGroupGreasePencilDrawing_rna_properties_get, nullptr, nullptr, AttributeGroupGreasePencilDrawing_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AttributeGroupGreasePencilDrawing_rna_type_ = {
		{&rna_AttributeGroupGreasePencilDrawing_active, 	&rna_AttributeGroupGreasePencilDrawing_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupGreasePencilDrawing_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AttributeGroupGreasePencilDrawing_active_ = {
		{&rna_AttributeGroupGreasePencilDrawing_active_index, 	&rna_AttributeGroupGreasePencilDrawing_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute",
		"Active attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupGreasePencilDrawing_active_get, AttributeGroupGreasePencilDrawing_active_set, nullptr, rna_AttributeGroupGreasePencilDrawing_active_poll,RNA_Attribute
	};

	rna_AttributeGroupGreasePencilDrawing_active_index_ = {
		{nullptr, 	&rna_AttributeGroupGreasePencilDrawing_active,
		-1, "active_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Attribute Index",
		"Active attribute index or -1 when none are active",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AttributeGroup_update_active, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AttributeGroupGreasePencilDrawing_active_index_get, AttributeGroupGreasePencilDrawing_active_index_set, nullptr, nullptr, rna_AttributeGroupGreasePencilDrawing_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AttributeGroupGreasePencilDrawing;
	srna->cont.properties = {&rna_AttributeGroupGreasePencilDrawing_rna_properties, &rna_AttributeGroupGreasePencilDrawing_active_index};
	srna->identifier = "AttributeGroupGreasePencilDrawing";
	srna->flag = 516;
	srna->name = "Attribute Group";
	srna->description = "Group of geometry attributes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AttributeGroupGreasePencilDrawing_rna_properties;
	{
	rna_AttributeGroupGreasePencilDrawing_new_name_ = {
		{&rna_AttributeGroupGreasePencilDrawing_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of geometry attribute",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Attribute"
	};
	rna_AttributeGroupGreasePencilDrawing_new_type_ = {
		{&rna_AttributeGroupGreasePencilDrawing_new_domain, 	&rna_AttributeGroupGreasePencilDrawing_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"Attribute type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_type_items, 14, 10
	};
	rna_AttributeGroupGreasePencilDrawing_new_domain_ = {
		{&rna_AttributeGroupGreasePencilDrawing_new_attribute, 	&rna_AttributeGroupGreasePencilDrawing_new_type,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupGreasePencilDrawing_new_attribute_ = {
		{nullptr, 	&rna_AttributeGroupGreasePencilDrawing_new_domain,
		-1, "attribute", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"New geometry attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupGreasePencilDrawing_new_name, &rna_AttributeGroupGreasePencilDrawing_new_attribute};
		func->identifier = "new";
		func->flag = 2064;
		func->description = "Add attribute to geometry";
		func->call = AttributeGroupGreasePencilDrawing_new_call;
		func->c_ret = &rna_AttributeGroupGreasePencilDrawing_new_attribute;
		rna_AttributeGroupGreasePencilDrawing_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupGreasePencilDrawing_remove_attribute_ = {
		{nullptr, 	nullptr,
		-1, "attribute", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Geometry Attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Attribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupGreasePencilDrawing_remove_attribute, &rna_AttributeGroupGreasePencilDrawing_remove_attribute};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove attribute from geometry";
		func->call = AttributeGroupGreasePencilDrawing_remove_call;
		rna_AttributeGroupGreasePencilDrawing_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AttributeGroupGreasePencilDrawing_domain_size_domain_ = {
		{&rna_AttributeGroupGreasePencilDrawing_domain_size_size, 	nullptr,
		-1, "domain", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Domain",
		"Type of element that attribute is stored on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_attribute_domain_items, 7, 0
	};
	rna_AttributeGroupGreasePencilDrawing_domain_size_size_ = {
		{nullptr, 	&rna_AttributeGroupGreasePencilDrawing_domain_size_domain,
		-1, "size", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Size",
		"Size of the domain",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AttributeGroupGreasePencilDrawing_domain_size_domain, &rna_AttributeGroupGreasePencilDrawing_domain_size_size};
		func->identifier = "domain_size";
		func->description = "Get the size of a given domain";
		func->call = AttributeGroupGreasePencilDrawing_domain_size_call;
		func->c_ret = &rna_AttributeGroupGreasePencilDrawing_domain_size_size;
		rna_AttributeGroupGreasePencilDrawing_domain_size_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
