
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

#include "rna_meta.cc"
#include "rna_meta_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_MetaElement_rna_properties;
extern PropertyRNA &rna_MetaElement_rna_type;
extern PropertyRNA &rna_MetaElement_type;
extern PropertyRNA &rna_MetaElement_co;
extern PropertyRNA &rna_MetaElement_rotation;
extern PropertyRNA &rna_MetaElement_radius;
extern PropertyRNA &rna_MetaElement_size_x;
extern PropertyRNA &rna_MetaElement_size_y;
extern PropertyRNA &rna_MetaElement_size_z;
extern PropertyRNA &rna_MetaElement_stiffness;
extern PropertyRNA &rna_MetaElement_use_negative;
extern PropertyRNA &rna_MetaElement_use_scale_stiffness;
extern PropertyRNA &rna_MetaElement_select;
extern PropertyRNA &rna_MetaElement_hide;


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

extern PropertyRNA &rna_MetaBall_elements;
extern PropertyRNA &rna_MetaBall_update_method;
extern PropertyRNA &rna_MetaBall_resolution;
extern PropertyRNA &rna_MetaBall_render_resolution;
extern PropertyRNA &rna_MetaBall_threshold;
extern PropertyRNA &rna_MetaBall_use_auto_texspace;
extern PropertyRNA &rna_MetaBall_texspace_location;
extern PropertyRNA &rna_MetaBall_texspace_size;
extern PropertyRNA &rna_MetaBall_materials;
extern PropertyRNA &rna_MetaBall_is_editmode;
extern PropertyRNA &rna_MetaBall_animation_data;

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


extern FunctionRNA *rna_MetaBall_transform_func;
extern PropertyRNA &rna_MetaBall_transform_matrix;

extern FunctionRNA *rna_MetaBall_update_gpu_tag_func;


extern PropertyRNA &rna_MetaBallElements_rna_properties;
extern PropertyRNA &rna_MetaBallElements_rna_type;
extern PropertyRNA &rna_MetaBallElements_active;

extern FunctionRNA *rna_MetaBallElements_new_func;
extern PropertyRNA &rna_MetaBallElements_new_type;
extern PropertyRNA &rna_MetaBallElements_new_element;

extern FunctionRNA *rna_MetaBallElements_remove_func;
extern PropertyRNA &rna_MetaBallElements_remove_element;

extern FunctionRNA *rna_MetaBallElements_clear_func;

static PointerRNA MetaElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MetaElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MetaElement_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MetaElement_rna_properties_get(iter);
    }
}

void MetaElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MetaElement_rna_properties_get(iter);
    }
}

void MetaElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MetaElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MetaElement_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MetaElement_type_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (int)(data->type);
}

void MetaElement_type_set(PointerRNA *ptr, int value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

void MetaElement_co_get(PointerRNA *ptr, float values[3])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void MetaElement_co_set(PointerRNA *ptr, const float values[3])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->x)[i] = values[i];
    }
}

void MetaElement_rotation_get(PointerRNA *ptr, float values[4])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->quat)[i]);
    }
}

void MetaElement_rotation_set(PointerRNA *ptr, const float values[4])
{
    MetaElem *data = (MetaElem *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->quat)[i] = values[i];
    }
}

float MetaElement_radius_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->rad);
}

void MetaElement_radius_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->rad = (std::remove_reference_t<decltype(data->rad)>)std::clamp(value, 0.0f, FLT_MAX);
}

float MetaElement_size_x_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expx);
}

void MetaElement_size_x_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->expx = (std::remove_reference_t<decltype(data->expx)>)std::clamp(value, 0.0f, 20.0f);
}

float MetaElement_size_y_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expy);
}

void MetaElement_size_y_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->expy = (std::remove_reference_t<decltype(data->expy)>)std::clamp(value, 0.0f, 20.0f);
}

float MetaElement_size_z_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->expz);
}

void MetaElement_size_z_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->expz = (std::remove_reference_t<decltype(data->expz)>)std::clamp(value, 0.0f, 20.0f);
}

float MetaElement_stiffness_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return (float)(data->s);
}

void MetaElement_stiffness_set(PointerRNA *ptr, float value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    data->s = (std::remove_reference_t<decltype(data->s)>)std::clamp(value, 0.0f, 10.0f);
}

bool MetaElement_use_negative_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MetaElement_use_negative_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool MetaElement_use_scale_stiffness_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return !((uint64_t(data->flag) & 16) != 0);
}

void MetaElement_use_scale_stiffness_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool MetaElement_select_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MetaElement_select_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool MetaElement_hide_get(PointerRNA *ptr)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void MetaElement_hide_set(PointerRNA *ptr, bool value)
{
    MetaElem *data = (MetaElem *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

static PointerRNA MetaBall_elements_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MetaElement, rna_iterator_listbase_get(iter));
}

void MetaBall_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MetaBall_elements;

    rna_iterator_listbase_begin(iter, ptr, &data->elems, nullptr);

    if (iter->valid) {
        iter->ptr = MetaBall_elements_get(iter);
    }
}

void MetaBall_elements_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MetaBall_elements_get(iter);
    }
}

void MetaBall_elements_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MetaBall_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MetaBall_elements_begin(&iter, ptr);

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
        if (found) { *r_ptr = MetaBall_elements_get(&iter); }
    }

    MetaBall_elements_end(&iter);

    return found;
}

int MetaBall_update_method_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (int)(data->flag);
}

void MetaBall_update_method_set(PointerRNA *ptr, int value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    data->flag = (std::remove_reference_t<decltype(data->flag)>)value;
}

float MetaBall_resolution_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->wiresize);
}

void MetaBall_resolution_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    data->wiresize = (std::remove_reference_t<decltype(data->wiresize)>)std::clamp(value, 0.0049999999f, 10000.0f);
}

float MetaBall_render_resolution_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->rendersize);
}

void MetaBall_render_resolution_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    data->rendersize = (std::remove_reference_t<decltype(data->rendersize)>)std::clamp(value, 0.0049999999f, 10000.0f);
}

float MetaBall_threshold_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (float)(data->thresh);
}

void MetaBall_threshold_set(PointerRNA *ptr, float value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    data->thresh = (std::remove_reference_t<decltype(data->thresh)>)std::clamp(value, 0.0f, 5.0f);
}

bool MetaBall_use_auto_texspace_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return ((uint64_t(data->texspace_flag) & 1) != 0);
}

void MetaBall_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    if (value) { data->texspace_flag = std::remove_reference_t<decltype(data->texspace_flag)>(uint64_t(data->texspace_flag) | 1); }
    else { data->texspace_flag = std::remove_reference_t<decltype(data->texspace_flag)>(uint64_t(data->texspace_flag) & ~uint64_t(1)); }
}

void MetaBall_texspace_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Meta_texspace_location_get;
    fn(ptr, values);
}

void MetaBall_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Meta_texspace_location_set;
    fn(ptr, values);
}

void MetaBall_texspace_size_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Meta_texspace_size_get;
    fn(ptr, values);
}

void MetaBall_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Meta_texspace_size_set;
    fn(ptr, values);
}

int MetaBall_materials_length(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA MetaBall_materials_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Material, rna_iterator_array_dereference_get(iter));
}

void MetaBall_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MetaBall_materials;

    rna_iterator_array_begin(iter, ptr, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MetaBall_materials_get(iter);
    }
}

void MetaBall_materials_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MetaBall_materials_get(iter);
    }
}

void MetaBall_materials_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MetaBall_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MetaBall_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = MetaBall_materials_get(&iter); }
    }

    MetaBall_materials_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool MetaBall_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    MetaBall_materials_begin(&iter, ptr);

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
        MetaBall_materials_next(&iter);
    }
    MetaBall_materials_end(&iter);

    return found;
}

bool MetaBall_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Meta_is_editmode_get;
    return fn(ptr);
}

PointerRNA MetaBall_animation_data_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA MetaBallElements_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MetaBallElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MetaBallElements_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MetaBallElements_rna_properties_get(iter);
    }
}

void MetaBallElements_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MetaBallElements_rna_properties_get(iter);
    }
}

void MetaBallElements_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MetaBallElements_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MetaBallElements_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA MetaBallElements_active_get(PointerRNA *ptr)
{
    MetaBall *data = (MetaBall *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MetaElement, data->lastelem);
}


void MetaBall_transform_func(MetaBall *_self, float matrix[16])
{
	rna_Meta_transform(_self, matrix);
}

static void MetaBall_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MetaBall *_self;
	const float *matrix;
	char *_data;
	
	_self = (MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	
	rna_Meta_transform(_self, matrix);
}

void MetaBall_update_gpu_tag_func(MetaBall *_self)
{
	rna_Mball_update_gpu_tag(_self);
}

static void MetaBall_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MetaBall *_self;
	_self = (MetaBall *)_ptr->data;
	
	rna_Mball_update_gpu_tag(_self);
}

/* Repeated prototypes to detect errors */

void rna_Meta_transform(MetaBall *_self, float matrix[16]);
void rna_Mball_update_gpu_tag(MetaBall *_self);

MetaElem *MetaBallElements_new_func(MetaBall *_self, int type)
{
	return rna_MetaBall_elements_new(_self, type);
}

static void MetaBallElements_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MetaBall *_self;
	int type;
	MetaElem *element;
	char *_data, *_retdata;
	
	_self = (MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	element = rna_MetaBall_elements_new(_self, type);
	*((MetaElem **)_retdata) = element;
}

void MetaBallElements_remove_func(MetaBall *_self, ReportList *reports, PointerRNA *element)
{
	rna_MetaBall_elements_remove(_self, reports, element);
}

static void MetaBallElements_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MetaBall *_self;
	PointerRNA *element;
	char *_data;
	
	_self = (MetaBall *)_ptr->data;
	_data = (char *)_parms->data;
	element = *((PointerRNA **)_data);
	
	rna_MetaBall_elements_remove(_self, reports, element);
}

void MetaBallElements_clear_func(MetaBall *_self)
{
	rna_MetaBall_elements_clear(_self);
}

static void MetaBallElements_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	MetaBall *_self;
	_self = (MetaBall *)_ptr->data;
	
	rna_MetaBall_elements_clear(_self);
}

/* Repeated prototypes to detect errors */

MetaElem *rna_MetaBall_elements_new(MetaBall *_self, int type);
void rna_MetaBall_elements_remove(MetaBall *_self, ReportList *reports, PointerRNA *element);
void rna_MetaBall_elements_clear(MetaBall *_self);

/* Metaball Element */
static CollectionPropertyRNA rna_MetaElement_rna_properties_;
PropertyRNA &rna_MetaElement_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MetaElement_rna_properties_);

static PointerPropertyRNA rna_MetaElement_rna_type_;
PropertyRNA &rna_MetaElement_rna_type = reinterpret_cast<PropertyRNA &>(rna_MetaElement_rna_type_);

static EnumPropertyRNA rna_MetaElement_type_;
PropertyRNA &rna_MetaElement_type = reinterpret_cast<PropertyRNA &>(rna_MetaElement_type_);

static FloatPropertyRNA rna_MetaElement_co_;
PropertyRNA &rna_MetaElement_co = reinterpret_cast<PropertyRNA &>(rna_MetaElement_co_);

static FloatPropertyRNA rna_MetaElement_rotation_;
PropertyRNA &rna_MetaElement_rotation = reinterpret_cast<PropertyRNA &>(rna_MetaElement_rotation_);

static FloatPropertyRNA rna_MetaElement_radius_;
PropertyRNA &rna_MetaElement_radius = reinterpret_cast<PropertyRNA &>(rna_MetaElement_radius_);

static FloatPropertyRNA rna_MetaElement_size_x_;
PropertyRNA &rna_MetaElement_size_x = reinterpret_cast<PropertyRNA &>(rna_MetaElement_size_x_);

static FloatPropertyRNA rna_MetaElement_size_y_;
PropertyRNA &rna_MetaElement_size_y = reinterpret_cast<PropertyRNA &>(rna_MetaElement_size_y_);

static FloatPropertyRNA rna_MetaElement_size_z_;
PropertyRNA &rna_MetaElement_size_z = reinterpret_cast<PropertyRNA &>(rna_MetaElement_size_z_);

static FloatPropertyRNA rna_MetaElement_stiffness_;
PropertyRNA &rna_MetaElement_stiffness = reinterpret_cast<PropertyRNA &>(rna_MetaElement_stiffness_);

static BoolPropertyRNA rna_MetaElement_use_negative_;
PropertyRNA &rna_MetaElement_use_negative = reinterpret_cast<PropertyRNA &>(rna_MetaElement_use_negative_);

static BoolPropertyRNA rna_MetaElement_use_scale_stiffness_;
PropertyRNA &rna_MetaElement_use_scale_stiffness = reinterpret_cast<PropertyRNA &>(rna_MetaElement_use_scale_stiffness_);

static BoolPropertyRNA rna_MetaElement_select_;
PropertyRNA &rna_MetaElement_select = reinterpret_cast<PropertyRNA &>(rna_MetaElement_select_);

static BoolPropertyRNA rna_MetaElement_hide_;
PropertyRNA &rna_MetaElement_hide = reinterpret_cast<PropertyRNA &>(rna_MetaElement_hide_);

StructRNA *RNA_MetaElement;
void register_struct_MetaElement(BlenderRNA &brna)
{
	rna_MetaElement_rna_properties_ = {
		{&rna_MetaElement_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaElement_rna_properties_begin, MetaElement_rna_properties_next, MetaElement_rna_properties_end, MetaElement_rna_properties_get, nullptr, nullptr, MetaElement_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MetaElement_rna_type_ = {
		{&rna_MetaElement_type, 	&rna_MetaElement_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaElement_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MetaElement_type_ = {
		{&rna_MetaElement_co, 	&rna_MetaElement_rna_type,
		-1, "type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Metaball type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaElem, type), RawPropertyType(1), nullptr},
		MetaElement_type_get, MetaElement_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_metaelem_type_items, 5, 0
	};

	static float rna_MetaElement_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MetaElement_co_ = {
		{&rna_MetaElement_rotation, 	&rna_MetaElement_type,
		-1, "co", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaElem, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, MetaElement_co_get, MetaElement_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MetaElement_co_default
	};

	static float rna_MetaElement_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_MetaElement_rotation_ = {
		{&rna_MetaElement_radius, 	&rna_MetaElement_co,
		-1, "rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Normalized quaternion rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_MetaBall_update_rotation, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaElem, quat), RawPropertyType(5), nullptr},
		nullptr, nullptr, MetaElement_rotation_get, MetaElement_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MetaElement_rotation_default
	};

	rna_MetaElement_radius_ = {
		{&rna_MetaElement_size_x, 	&rna_MetaElement_rotation,
		-1, "radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Radius",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaElem, rad), RawPropertyType(5), nullptr},
		MetaElement_radius_get, MetaElement_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MetaElement_size_x_ = {
		{&rna_MetaElement_size_y, 	&rna_MetaElement_radius,
		-1, "size_x", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size X",
		"Size of element, use of components depends on element type",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaElem, expx), RawPropertyType(5), nullptr},
		MetaElement_size_x_get, MetaElement_size_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MetaElement_size_y_ = {
		{&rna_MetaElement_size_z, 	&rna_MetaElement_size_x,
		-1, "size_y", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size Y",
		"Size of element, use of components depends on element type",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaElem, expy), RawPropertyType(5), nullptr},
		MetaElement_size_y_get, MetaElement_size_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MetaElement_size_z_ = {
		{&rna_MetaElement_stiffness, 	&rna_MetaElement_size_y,
		-1, "size_z", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size Z",
		"Size of element, use of components depends on element type",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaElem, expz), RawPropertyType(5), nullptr},
		MetaElement_size_z_get, MetaElement_size_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MetaElement_stiffness_ = {
		{&rna_MetaElement_use_negative, 	&rna_MetaElement_size_z,
		-1, "stiffness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stiffness",
		"Stiffness defines how much of the element to fill",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaElem, s), RawPropertyType(5), nullptr},
		MetaElement_stiffness_get, MetaElement_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MetaElement_use_negative_ = {
		{&rna_MetaElement_use_scale_stiffness, 	&rna_MetaElement_stiffness,
		-1, "use_negative", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Negative",
		"Set metaball as negative one",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaElement_use_negative_get, MetaElement_use_negative_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaElement_use_scale_stiffness_ = {
		{&rna_MetaElement_select, 	&rna_MetaElement_use_negative,
		-1, "use_scale_stiffness", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale Stiffness",
		"Scale stiffness instead of radius",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaElement_use_scale_stiffness_get, MetaElement_use_scale_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_MetaElement_select_ = {
		{&rna_MetaElement_hide, 	&rna_MetaElement_use_scale_stiffness,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Select element",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaElement_select_get, MetaElement_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaElement_hide_ = {
		{nullptr, 	&rna_MetaElement_select,
		-1, "hide", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Hide element",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaElement_hide_get, MetaElement_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MetaElement;
	srna->cont.properties = {&rna_MetaElement_rna_properties, &rna_MetaElement_hide};
	srna->identifier = "MetaElement";
	srna->flag = 516;
	srna->name = "Metaball Element";
	srna->description = "Blobby element in a metaball data-block";
	srna->translation_context = "*";
	srna->icon = 267;
	srna->iteratorproperty = &rna_MetaElement_rna_properties;
	srna->path = rna_MetaElement_path;
};

/* MetaBall */
static CollectionPropertyRNA rna_MetaBall_elements_;
PropertyRNA &rna_MetaBall_elements = reinterpret_cast<PropertyRNA &>(rna_MetaBall_elements_);

static EnumPropertyRNA rna_MetaBall_update_method_;
PropertyRNA &rna_MetaBall_update_method = reinterpret_cast<PropertyRNA &>(rna_MetaBall_update_method_);

static FloatPropertyRNA rna_MetaBall_resolution_;
PropertyRNA &rna_MetaBall_resolution = reinterpret_cast<PropertyRNA &>(rna_MetaBall_resolution_);

static FloatPropertyRNA rna_MetaBall_render_resolution_;
PropertyRNA &rna_MetaBall_render_resolution = reinterpret_cast<PropertyRNA &>(rna_MetaBall_render_resolution_);

static FloatPropertyRNA rna_MetaBall_threshold_;
PropertyRNA &rna_MetaBall_threshold = reinterpret_cast<PropertyRNA &>(rna_MetaBall_threshold_);

static BoolPropertyRNA rna_MetaBall_use_auto_texspace_;
PropertyRNA &rna_MetaBall_use_auto_texspace = reinterpret_cast<PropertyRNA &>(rna_MetaBall_use_auto_texspace_);

static FloatPropertyRNA rna_MetaBall_texspace_location_;
PropertyRNA &rna_MetaBall_texspace_location = reinterpret_cast<PropertyRNA &>(rna_MetaBall_texspace_location_);

static FloatPropertyRNA rna_MetaBall_texspace_size_;
PropertyRNA &rna_MetaBall_texspace_size = reinterpret_cast<PropertyRNA &>(rna_MetaBall_texspace_size_);

static CollectionPropertyRNA rna_MetaBall_materials_;
PropertyRNA &rna_MetaBall_materials = reinterpret_cast<PropertyRNA &>(rna_MetaBall_materials_);

static BoolPropertyRNA rna_MetaBall_is_editmode_;
PropertyRNA &rna_MetaBall_is_editmode = reinterpret_cast<PropertyRNA &>(rna_MetaBall_is_editmode_);

static PointerPropertyRNA rna_MetaBall_animation_data_;
PropertyRNA &rna_MetaBall_animation_data = reinterpret_cast<PropertyRNA &>(rna_MetaBall_animation_data_);

static FloatPropertyRNA rna_MetaBall_transform_matrix_;
PropertyRNA &rna_MetaBall_transform_matrix = reinterpret_cast<PropertyRNA &>(rna_MetaBall_transform_matrix_);

FunctionRNA *rna_MetaBall_transform_func;
FunctionRNA *rna_MetaBall_update_gpu_tag_func;
StructRNA *RNA_MetaBall;
void register_struct_MetaBall(BlenderRNA &brna)
{
	rna_MetaBall_elements_ = {
		{&rna_MetaBall_update_method, 	nullptr,
		-1, "elements", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Elements",
		"Metaball elements",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MetaBallElements},
		MetaBall_elements_begin, MetaBall_elements_next, MetaBall_elements_end, MetaBall_elements_get, nullptr, MetaBall_elements_lookup_int, nullptr, nullptr, RNA_MetaElement
	};

	static const EnumPropertyItem rna_MetaBall_update_method_items[5] = {
		{0, "UPDATE_ALWAYS", 0, "Always", "While editing, update metaball always"	},
		{1, "HALFRES", 0, "Half", "While editing, update metaball in half resolution"	},
		{2, "FAST", 0, "Fast", "While editing, update metaball without polygonization"	},
		{3, "NEVER", 0, "Never", "While editing, don\'t update metaball at all"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MetaBall_update_method_ = {
		{&rna_MetaBall_resolution, 	&rna_MetaBall_elements,
		-1, "update_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Update",
		"Metaball edit update behavior",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaBall, flag), RawPropertyType(2), nullptr},
		MetaBall_update_method_get, MetaBall_update_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MetaBall_update_method_items, 4, 0
	};

	rna_MetaBall_resolution_ = {
		{&rna_MetaBall_render_resolution, 	&rna_MetaBall_update_method,
		-1, "resolution", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viewport Size",
		"Polygonization resolution in the 3D viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaBall, wiresize), RawPropertyType(5), nullptr},
		MetaBall_resolution_get, MetaBall_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0500000007f, 1000.0f, 0.0049999999f, 10000.0f, 2.5000000000f, 3, nullptr, nullptr, 0.4000000060f, nullptr
	};

	rna_MetaBall_render_resolution_ = {
		{&rna_MetaBall_threshold, 	&rna_MetaBall_resolution,
		-1, "render_resolution", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Render Size",
		"Polygonization resolution in rendering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaBall, rendersize), RawPropertyType(5), nullptr},
		MetaBall_render_resolution_get, MetaBall_render_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0250000004f, 1000.0f, 0.0049999999f, 10000.0f, 2.5000000000f, 3, nullptr, nullptr, 0.2000000030f, nullptr
	};

	rna_MetaBall_threshold_ = {
		{&rna_MetaBall_use_auto_texspace, 	&rna_MetaBall_render_resolution,
		-1, "threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Influence of metaball elements",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MetaBall_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MetaBall, thresh), RawPropertyType(5), nullptr},
		MetaBall_threshold_get, MetaBall_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, nullptr, nullptr, 0.6000000238f, nullptr
	};

	rna_MetaBall_use_auto_texspace_ = {
		{&rna_MetaBall_texspace_location, 	&rna_MetaBall_threshold,
		-1, "use_auto_texspace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto Texture Space",
		"Adjust active object\'s texture space automatically when transforming object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaBall_use_auto_texspace_get, MetaBall_use_auto_texspace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static float rna_MetaBall_texspace_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MetaBall_texspace_location_ = {
		{&rna_MetaBall_texspace_size, 	&rna_MetaBall_use_auto_texspace,
		-1, "texspace_location", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture Space Location",
		"Texture space location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_MetaBall_update_data, 0, rna_Meta_texspace_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MetaBall_texspace_location_get, MetaBall_texspace_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MetaBall_texspace_location_default
	};

	static float rna_MetaBall_texspace_size_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_MetaBall_texspace_size_ = {
		{&rna_MetaBall_materials, 	&rna_MetaBall_texspace_location,
		-1, "texspace_size", 67108867, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture Space Size",
		"Texture space size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_MetaBall_update_data, 0, rna_Meta_texspace_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MetaBall_texspace_size_get, MetaBall_texspace_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MetaBall_texspace_size_default
	};

	rna_MetaBall_materials_ = {
		{&rna_MetaBall_is_editmode, 	&rna_MetaBall_texspace_size,
		-1, "materials", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Materials",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_IDMaterials},
		MetaBall_materials_begin, MetaBall_materials_next, MetaBall_materials_end, MetaBall_materials_get, MetaBall_materials_length, MetaBall_materials_lookup_int, MetaBall_materials_lookup_string, rna_IDMaterials_assign_int, RNA_Material
	};

	rna_MetaBall_is_editmode_ = {
		{&rna_MetaBall_animation_data, 	&rna_MetaBall_materials,
		-1, "is_editmode", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Editmode",
		"True when used in editmode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaBall_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MetaBall_animation_data_ = {
		{nullptr, 	&rna_MetaBall_is_editmode,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		MetaBall_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	StructRNA *srna = RNA_MetaBall;
	srna->cont.properties = {&rna_MetaBall_elements, &rna_MetaBall_animation_data};
	srna->identifier = "MetaBall";
	srna->flag = 519;
	srna->name = "MetaBall";
	srna->description = "Metaball data-block to define blobby surfaces";
	srna->translation_context = "*";
	srna->icon = 188;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	static float rna_MetaBall_transform_matrix_default[16] = {
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
	rna_MetaBall_transform_matrix_ = {
		{nullptr, 	nullptr,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_MetaBall_transform_matrix_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MetaBall_transform_matrix, &rna_MetaBall_transform_matrix};
		func->identifier = "transform";
		func->description = "Transform metaball elements by a matrix";
		func->call = MetaBall_transform_call;
		rna_MetaBall_transform_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update_gpu_tag";
		func->description = "update_gpu_tag";
		func->call = MetaBall_update_gpu_tag_call;
		rna_MetaBall_update_gpu_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Metaball Elements */
static CollectionPropertyRNA rna_MetaBallElements_rna_properties_;
PropertyRNA &rna_MetaBallElements_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MetaBallElements_rna_properties_);

static PointerPropertyRNA rna_MetaBallElements_rna_type_;
PropertyRNA &rna_MetaBallElements_rna_type = reinterpret_cast<PropertyRNA &>(rna_MetaBallElements_rna_type_);

static PointerPropertyRNA rna_MetaBallElements_active_;
PropertyRNA &rna_MetaBallElements_active = reinterpret_cast<PropertyRNA &>(rna_MetaBallElements_active_);

static EnumPropertyRNA rna_MetaBallElements_new_type_;
PropertyRNA &rna_MetaBallElements_new_type = reinterpret_cast<PropertyRNA &>(rna_MetaBallElements_new_type_);

static PointerPropertyRNA rna_MetaBallElements_new_element_;
PropertyRNA &rna_MetaBallElements_new_element = reinterpret_cast<PropertyRNA &>(rna_MetaBallElements_new_element_);

FunctionRNA *rna_MetaBallElements_new_func;
static PointerPropertyRNA rna_MetaBallElements_remove_element_;
PropertyRNA &rna_MetaBallElements_remove_element = reinterpret_cast<PropertyRNA &>(rna_MetaBallElements_remove_element_);

FunctionRNA *rna_MetaBallElements_remove_func;
FunctionRNA *rna_MetaBallElements_clear_func;
StructRNA *RNA_MetaBallElements;
void register_struct_MetaBallElements(BlenderRNA &brna)
{
	rna_MetaBallElements_rna_properties_ = {
		{&rna_MetaBallElements_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaBallElements_rna_properties_begin, MetaBallElements_rna_properties_next, MetaBallElements_rna_properties_end, MetaBallElements_rna_properties_get, nullptr, nullptr, MetaBallElements_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MetaBallElements_rna_type_ = {
		{&rna_MetaBallElements_active, 	&rna_MetaBallElements_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaBallElements_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MetaBallElements_active_ = {
		{nullptr, 	&rna_MetaBallElements_rna_type,
		-1, "active", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Element",
		"Last selected element",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MetaBallElements_active_get, nullptr, nullptr, nullptr,RNA_MetaElement
	};

	StructRNA *srna = RNA_MetaBallElements;
	srna->cont.properties = {&rna_MetaBallElements_rna_properties, &rna_MetaBallElements_active};
	srna->identifier = "MetaBallElements";
	srna->flag = 516;
	srna->name = "Metaball Elements";
	srna->description = "Collection of metaball elements";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MetaBallElements_rna_properties;
	{
	rna_MetaBallElements_new_type_ = {
		{&rna_MetaBallElements_new_element, 	nullptr,
		-1, "type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Type for the new metaball element",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_metaelem_type_items, 5, 0
	};
	rna_MetaBallElements_new_element_ = {
		{nullptr, 	&rna_MetaBallElements_new_type,
		-1, "element", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created metaball element",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MetaElement
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MetaBallElements_new_type, &rna_MetaBallElements_new_element};
		func->identifier = "new";
		func->description = "Add a new element to the metaball";
		func->call = MetaBallElements_new_call;
		func->c_ret = &rna_MetaBallElements_new_element;
		rna_MetaBallElements_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_MetaBallElements_remove_element_ = {
		{nullptr, 	nullptr,
		-1, "element", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The element to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MetaElement
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MetaBallElements_remove_element, &rna_MetaBallElements_remove_element};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an element from the metaball";
		func->call = MetaBallElements_remove_call;
		rna_MetaBallElements_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "Remove all elements from the metaball";
		func->call = MetaBallElements_clear_call;
		rna_MetaBallElements_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
