
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

#include "rna_animation.cc"
#include "rna_animation_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_AnimData_rna_properties;
extern PropertyRNA &rna_AnimData_rna_type;
extern PropertyRNA &rna_AnimData_nla_tracks;
extern PropertyRNA &rna_AnimData_action;
extern PropertyRNA &rna_AnimData_action_extrapolation;
extern PropertyRNA &rna_AnimData_action_blend_type;
extern PropertyRNA &rna_AnimData_action_influence;
extern PropertyRNA &rna_AnimData_action_tweak_storage;
extern PropertyRNA &rna_AnimData_action_slot_handle_tweak_storage;
extern PropertyRNA &rna_AnimData_drivers;
extern PropertyRNA &rna_AnimData_use_nla;
extern PropertyRNA &rna_AnimData_use_tweak_mode;
extern PropertyRNA &rna_AnimData_use_pin;
extern PropertyRNA &rna_AnimData_action_slot_handle;
extern PropertyRNA &rna_AnimData_last_slot_identifier;
extern PropertyRNA &rna_AnimData_action_slot;
extern PropertyRNA &rna_AnimData_action_suitable_slots;

extern FunctionRNA *rna_AnimData_nla_tweak_strip_time_to_scene_func;
extern PropertyRNA &rna_AnimData_nla_tweak_strip_time_to_scene_frame;
extern PropertyRNA &rna_AnimData_nla_tweak_strip_time_to_scene_invert;
extern PropertyRNA &rna_AnimData_nla_tweak_strip_time_to_scene_result;

extern FunctionRNA *rna_AnimData_fix_paths_rename_all_func;
extern PropertyRNA &rna_AnimData_fix_paths_rename_all_prefix;
extern PropertyRNA &rna_AnimData_fix_paths_rename_all_old_name;
extern PropertyRNA &rna_AnimData_fix_paths_rename_all_new_name;



extern PropertyRNA &rna_NlaTracks_rna_properties;
extern PropertyRNA &rna_NlaTracks_rna_type;
extern PropertyRNA &rna_NlaTracks_active;

extern FunctionRNA *rna_NlaTracks_new_func;
extern PropertyRNA &rna_NlaTracks_new_prev;
extern PropertyRNA &rna_NlaTracks_new_track;

extern FunctionRNA *rna_NlaTracks_remove_func;
extern PropertyRNA &rna_NlaTracks_remove_track;



extern PropertyRNA &rna_AnimDataDrivers_rna_properties;
extern PropertyRNA &rna_AnimDataDrivers_rna_type;

extern FunctionRNA *rna_AnimDataDrivers_new_func;
extern PropertyRNA &rna_AnimDataDrivers_new_data_path;
extern PropertyRNA &rna_AnimDataDrivers_new_index;
extern PropertyRNA &rna_AnimDataDrivers_new_driver;

extern FunctionRNA *rna_AnimDataDrivers_remove_func;
extern PropertyRNA &rna_AnimDataDrivers_remove_driver;

extern FunctionRNA *rna_AnimDataDrivers_from_existing_func;
extern PropertyRNA &rna_AnimDataDrivers_from_existing_src_driver;
extern PropertyRNA &rna_AnimDataDrivers_from_existing_driver;

extern FunctionRNA *rna_AnimDataDrivers_find_func;
extern PropertyRNA &rna_AnimDataDrivers_find_data_path;
extern PropertyRNA &rna_AnimDataDrivers_find_index;
extern PropertyRNA &rna_AnimDataDrivers_find_fcurve;



extern PropertyRNA &rna_KeyingSet_rna_properties;
extern PropertyRNA &rna_KeyingSet_rna_type;
extern PropertyRNA &rna_KeyingSet_bl_idname;
extern PropertyRNA &rna_KeyingSet_bl_label;
extern PropertyRNA &rna_KeyingSet_bl_description;
extern PropertyRNA &rna_KeyingSet_type_info;
extern PropertyRNA &rna_KeyingSet_paths;
extern PropertyRNA &rna_KeyingSet_is_path_absolute;
extern PropertyRNA &rna_KeyingSet_use_insertkey_override_needed;
extern PropertyRNA &rna_KeyingSet_use_insertkey_override_visual;
extern PropertyRNA &rna_KeyingSet_use_insertkey_needed;
extern PropertyRNA &rna_KeyingSet_use_insertkey_visual;

extern FunctionRNA *rna_KeyingSet_refresh_func;


extern PropertyRNA &rna_KeyingSetPaths_rna_properties;
extern PropertyRNA &rna_KeyingSetPaths_rna_type;
extern PropertyRNA &rna_KeyingSetPaths_active;
extern PropertyRNA &rna_KeyingSetPaths_active_index;

extern FunctionRNA *rna_KeyingSetPaths_add_func;
extern PropertyRNA &rna_KeyingSetPaths_add_ksp;
extern PropertyRNA &rna_KeyingSetPaths_add_target_id;
extern PropertyRNA &rna_KeyingSetPaths_add_data_path;
extern PropertyRNA &rna_KeyingSetPaths_add_index;
extern PropertyRNA &rna_KeyingSetPaths_add_group_method;
extern PropertyRNA &rna_KeyingSetPaths_add_group_name;

extern FunctionRNA *rna_KeyingSetPaths_remove_func;
extern PropertyRNA &rna_KeyingSetPaths_remove_path;

extern FunctionRNA *rna_KeyingSetPaths_clear_func;


extern PropertyRNA &rna_KeyingSetPath_rna_properties;
extern PropertyRNA &rna_KeyingSetPath_rna_type;
extern PropertyRNA &rna_KeyingSetPath_id;
extern PropertyRNA &rna_KeyingSetPath_id_type;
extern PropertyRNA &rna_KeyingSetPath_group;
extern PropertyRNA &rna_KeyingSetPath_group_method;
extern PropertyRNA &rna_KeyingSetPath_data_path;
extern PropertyRNA &rna_KeyingSetPath_array_index;
extern PropertyRNA &rna_KeyingSetPath_use_entire_array;
extern PropertyRNA &rna_KeyingSetPath_use_insertkey_override_needed;
extern PropertyRNA &rna_KeyingSetPath_use_insertkey_override_visual;
extern PropertyRNA &rna_KeyingSetPath_use_insertkey_needed;
extern PropertyRNA &rna_KeyingSetPath_use_insertkey_visual;


extern PropertyRNA &rna_KeyingSetInfo_rna_properties;
extern PropertyRNA &rna_KeyingSetInfo_rna_type;
extern PropertyRNA &rna_KeyingSetInfo_bl_idname;
extern PropertyRNA &rna_KeyingSetInfo_bl_label;
extern PropertyRNA &rna_KeyingSetInfo_bl_description;
extern PropertyRNA &rna_KeyingSetInfo_bl_options;

extern FunctionRNA *rna_KeyingSetInfo_poll_func;
extern PropertyRNA &rna_KeyingSetInfo_poll_ok;
extern PropertyRNA &rna_KeyingSetInfo_poll_context;

extern FunctionRNA *rna_KeyingSetInfo_iterator_func;
extern PropertyRNA &rna_KeyingSetInfo_iterator_context;
extern PropertyRNA &rna_KeyingSetInfo_iterator_ks;

extern FunctionRNA *rna_KeyingSetInfo_generate_func;
extern PropertyRNA &rna_KeyingSetInfo_generate_context;
extern PropertyRNA &rna_KeyingSetInfo_generate_ks;
extern PropertyRNA &rna_KeyingSetInfo_generate_data;


static PointerRNA AnimData_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnimData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnimData_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimData_rna_properties_get(iter);
    }
}

void AnimData_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnimData_rna_properties_get(iter);
    }
}

void AnimData_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnimData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnimData_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA AnimData_nla_tracks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_NlaTrack, rna_iterator_listbase_get(iter));
}

void AnimData_nla_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnimData_nla_tracks;

    rna_iterator_listbase_begin(iter, ptr, &data->nla_tracks, nullptr);

    if (iter->valid) {
        iter->ptr = AnimData_nla_tracks_get(iter);
    }
}

void AnimData_nla_tracks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnimData_nla_tracks_get(iter);
    }
}

void AnimData_nla_tracks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnimData_nla_tracks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    AnimData_nla_tracks_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnimData_nla_tracks_get(&iter); }
    }

    AnimData_nla_tracks_end(&iter);

    return found;
}

int NlaTrack_name_length(PointerRNA *);
void NlaTrack_name_get(PointerRNA *, char *);

bool AnimData_nla_tracks_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    AnimData_nla_tracks_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaTrack_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaTrack_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                NlaTrack_name_get(&iter.ptr, name);
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
        AnimData_nla_tracks_next(&iter);
    }
    AnimData_nla_tracks_end(&iter);

    return found;
}

PointerRNA AnimData_action_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AnimData_action_get;
    return fn(ptr);
}

void AnimData_action_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AnimData_action_set;
    fn(ptr, value, reports);
}

int AnimData_action_extrapolation_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (int)(data->act_extendmode);
}

void AnimData_action_extrapolation_set(PointerRNA *ptr, int value)
{
    AnimData *data = (AnimData *)(ptr->data);
    data->act_extendmode = (std::remove_reference_t<decltype(data->act_extendmode)>)value;
}

int AnimData_action_blend_type_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (int)(data->act_blendmode);
}

void AnimData_action_blend_type_set(PointerRNA *ptr, int value)
{
    AnimData *data = (AnimData *)(ptr->data);
    data->act_blendmode = (std::remove_reference_t<decltype(data->act_blendmode)>)value;
}

float AnimData_action_influence_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (float)(data->act_influence);
}

void AnimData_action_influence_set(PointerRNA *ptr, float value)
{
    AnimData *data = (AnimData *)(ptr->data);
    data->act_influence = (std::remove_reference_t<decltype(data->act_influence)>)std::clamp(value, 0.0f, 1.0f);
}

PointerRNA AnimData_action_tweak_storage_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Action, data->tmpact);
}

void AnimData_action_tweak_storage_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AnimData_tmpact_set;
    fn(ptr, value, reports);
}

int AnimData_action_slot_handle_tweak_storage_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (int)(data->tmp_slot_handle);
}

void AnimData_action_slot_handle_tweak_storage_set(PointerRNA *ptr, int value)
{
    AnimData *data = (AnimData *)(ptr->data);
    data->tmp_slot_handle = (std::remove_reference_t<decltype(data->tmp_slot_handle)>)value;
}

static PointerRNA AnimData_drivers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FCurve, rna_iterator_listbase_get(iter));
}

void AnimData_drivers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnimData_drivers;

    rna_iterator_listbase_begin(iter, ptr, &data->drivers, nullptr);

    if (iter->valid) {
        iter->ptr = AnimData_drivers_get(iter);
    }
}

void AnimData_drivers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnimData_drivers_get(iter);
    }
}

void AnimData_drivers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnimData_drivers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    AnimData_drivers_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnimData_drivers_get(&iter); }
    }

    AnimData_drivers_end(&iter);

    return found;
}

bool AnimData_use_nla_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return !((uint64_t(data->flag) & 2) != 0);
}

void AnimData_use_nla_set(PointerRNA *ptr, bool value)
{
    AnimData *data = (AnimData *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool AnimData_use_tweak_mode_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void AnimData_use_tweak_mode_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_AnimData_tweakmode_set;
    fn(ptr, value);
}

bool AnimData_use_pin_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return ((uint64_t(data->flag) & 131072) != 0);
}

void AnimData_use_pin_set(PointerRNA *ptr, bool value)
{
    AnimData *data = (AnimData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 131072); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(131072)); }
}

int AnimData_action_slot_handle_get(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return (int)(data->slot_handle);
}

void AnimData_action_slot_handle_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AnimData_action_slot_handle_set;
    fn(ptr, value);
}

void AnimData_last_slot_identifier_get(PointerRNA *ptr, char *value)
{
    AnimData *data = (AnimData *)(ptr->data);
    BLI_assert(strlen(data->last_slot_identifier) < 258);
    strcpy(value, data->last_slot_identifier);
}

int AnimData_last_slot_identifier_length(PointerRNA *ptr)
{
    AnimData *data = (AnimData *)(ptr->data);
    return strlen(data->last_slot_identifier);
}

void AnimData_last_slot_identifier_set(PointerRNA *ptr, const char *value)
{
    AnimData *data = (AnimData *)(ptr->data);
    BLI_strncpy_utf8(data->last_slot_identifier, value, 258);
}

PointerRNA AnimData_action_slot_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AnimData_action_slot_get;
    return fn(ptr);
}

void AnimData_action_slot_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_AnimData_action_slot_set;
    fn(ptr, value, reports);
}

static PointerRNA AnimData_action_suitable_slots_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ActionSlot, rna_iterator_array_dereference_get(iter));
}

void AnimData_action_suitable_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnimData_action_suitable_slots;

    PropCollectionBeginFunc fn = rna_iterator_animdata_action_suitable_slots_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimData_action_suitable_slots_get(iter);
    }
}

void AnimData_action_suitable_slots_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnimData_action_suitable_slots_get(iter);
    }
}

void AnimData_action_suitable_slots_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool AnimData_action_suitable_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    AnimData_action_suitable_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = AnimData_action_suitable_slots_get(&iter); }
    }

    AnimData_action_suitable_slots_end(&iter);

    return found;
}

static PointerRNA NlaTracks_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void NlaTracks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaTracks_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaTracks_rna_properties_get(iter);
    }
}

void NlaTracks_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaTracks_rna_properties_get(iter);
    }
}

void NlaTracks_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaTracks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA NlaTracks_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA NlaTracks_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_NlaTrack_active_get;
    return fn(ptr);
}

void NlaTracks_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_NlaTrack_active_set;
    fn(ptr, value, reports);
}

static PointerRNA AnimDataDrivers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnimDataDrivers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnimDataDrivers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimDataDrivers_rna_properties_get(iter);
    }
}

void AnimDataDrivers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnimDataDrivers_rna_properties_get(iter);
    }
}

void AnimDataDrivers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnimDataDrivers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnimDataDrivers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA KeyingSet_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyingSet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyingSet_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSet_rna_properties_get(iter);
    }
}

void KeyingSet_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyingSet_rna_properties_get(iter);
    }
}

void KeyingSet_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyingSet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyingSet_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void KeyingSet_bl_idname_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_assert(strlen(data->idname) < 64);
    strcpy(value, data->idname);
}

int KeyingSet_bl_idname_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->idname);
}

void KeyingSet_bl_idname_set(PointerRNA *ptr, const char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, 64);
}

void KeyingSet_bl_label_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int KeyingSet_bl_label_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->name);
}

void KeyingSet_bl_label_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_KeyingSet_name_set;
    fn(ptr, value);
}

void KeyingSet_bl_description_get(PointerRNA *ptr, char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_assert(strlen(data->description) < 1024);
    strcpy(value, data->description);
}

int KeyingSet_bl_description_length(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return strlen(data->description);
}

void KeyingSet_bl_description_set(PointerRNA *ptr, const char *value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    BLI_strncpy_utf8(data->description, value, 1024);
}

PointerRNA KeyingSet_type_info_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_KeyingSet_typeinfo_get;
    return fn(ptr);
}

static PointerRNA KeyingSet_paths_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_KeyingSetPath, rna_iterator_listbase_get(iter));
}

void KeyingSet_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyingSet_paths;

    rna_iterator_listbase_begin(iter, ptr, &data->paths, nullptr);

    if (iter->valid) {
        iter->ptr = KeyingSet_paths_get(iter);
    }
}

void KeyingSet_paths_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyingSet_paths_get(iter);
    }
}

void KeyingSet_paths_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyingSet_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    KeyingSet_paths_begin(&iter, ptr);

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
        if (found) { *r_ptr = KeyingSet_paths_get(&iter); }
    }

    KeyingSet_paths_end(&iter);

    return found;
}

int KeyingSetPath_data_path_length(PointerRNA *);
void KeyingSetPath_data_path_get(PointerRNA *, char *);

bool KeyingSet_paths_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    KeyingSet_paths_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = KeyingSetPath_data_path_length(&iter.ptr);
            if (namelen < 1024) {
                KeyingSetPath_data_path_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                KeyingSetPath_data_path_get(&iter.ptr, name);
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
        KeyingSet_paths_next(&iter);
    }
    KeyingSet_paths_end(&iter);

    return found;
}

bool KeyingSet_is_path_absolute_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

bool KeyingSet_use_insertkey_override_needed_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return ((uint64_t(data->keyingoverride) & 1) != 0);
}

void KeyingSet_use_insertkey_override_needed_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingoverride = std::remove_reference_t<decltype(data->keyingoverride)>(uint64_t(data->keyingoverride) | 1); }
    else { data->keyingoverride = std::remove_reference_t<decltype(data->keyingoverride)>(uint64_t(data->keyingoverride) & ~uint64_t(1)); }
}

bool KeyingSet_use_insertkey_override_visual_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return ((uint64_t(data->keyingoverride) & 2) != 0);
}

void KeyingSet_use_insertkey_override_visual_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingoverride = std::remove_reference_t<decltype(data->keyingoverride)>(uint64_t(data->keyingoverride) | 2); }
    else { data->keyingoverride = std::remove_reference_t<decltype(data->keyingoverride)>(uint64_t(data->keyingoverride) & ~uint64_t(2)); }
}

bool KeyingSet_use_insertkey_needed_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return ((uint64_t(data->keyingflag) & 1) != 0);
}

void KeyingSet_use_insertkey_needed_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingflag = std::remove_reference_t<decltype(data->keyingflag)>(uint64_t(data->keyingflag) | 1); }
    else { data->keyingflag = std::remove_reference_t<decltype(data->keyingflag)>(uint64_t(data->keyingflag) & ~uint64_t(1)); }
}

bool KeyingSet_use_insertkey_visual_get(PointerRNA *ptr)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    return ((uint64_t(data->keyingflag) & 2) != 0);
}

void KeyingSet_use_insertkey_visual_set(PointerRNA *ptr, bool value)
{
    KeyingSet *data = (KeyingSet *)(ptr->data);
    if (value) { data->keyingflag = std::remove_reference_t<decltype(data->keyingflag)>(uint64_t(data->keyingflag) | 2); }
    else { data->keyingflag = std::remove_reference_t<decltype(data->keyingflag)>(uint64_t(data->keyingflag) & ~uint64_t(2)); }
}

static PointerRNA KeyingSetPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyingSetPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyingSetPaths_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetPaths_rna_properties_get(iter);
    }
}

void KeyingSetPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetPaths_rna_properties_get(iter);
    }
}

void KeyingSetPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyingSetPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyingSetPaths_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA KeyingSetPaths_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_KeyingSet_active_ksPath_get;
    return fn(ptr);
}

void KeyingSetPaths_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_KeyingSet_active_ksPath_set;
    fn(ptr, value, reports);
}

int KeyingSetPaths_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_KeyingSet_active_ksPath_index_get;
    return fn(ptr);
}

void KeyingSetPaths_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_KeyingSet_active_ksPath_index_set;
    fn(ptr, value);
}

static PointerRNA KeyingSetPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyingSetPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyingSetPath_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetPath_rna_properties_get(iter);
    }
}

void KeyingSetPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetPath_rna_properties_get(iter);
    }
}

void KeyingSetPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyingSetPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyingSetPath_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA KeyingSetPath_id_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ID, data->id);
}

void KeyingSetPath_id_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->id) {
        id_us_min((ID *)data->id);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->id = value.data;
}

int KeyingSetPath_id_type_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->idtype);
}

void KeyingSetPath_id_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ksPath_id_type_set;
    fn(ptr, value);
}

void KeyingSetPath_group_get(PointerRNA *ptr, char *value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    BLI_assert(strlen(data->group) < 64);
    strcpy(value, data->group);
}

int KeyingSetPath_group_length(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return strlen(data->group);
}

void KeyingSetPath_group_set(PointerRNA *ptr, const char *value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    BLI_strncpy_utf8(data->group, value, 64);
}

int KeyingSetPath_group_method_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->groupmode);
}

void KeyingSetPath_group_method_set(PointerRNA *ptr, int value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    data->groupmode = (std::remove_reference_t<decltype(data->groupmode)>)value;
}

void KeyingSetPath_data_path_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ksPath_RnaPath_get;
    fn(ptr, value);
}

int KeyingSetPath_data_path_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ksPath_RnaPath_length;
    return fn(ptr);
}

void KeyingSetPath_data_path_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ksPath_RnaPath_set;
    fn(ptr, value);
}

int KeyingSetPath_array_index_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return (int)(data->array_index);
}

void KeyingSetPath_array_index_set(PointerRNA *ptr, int value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    data->array_index = (std::remove_reference_t<decltype(data->array_index)>)value;
}

bool KeyingSetPath_use_entire_array_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void KeyingSetPath_use_entire_array_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool KeyingSetPath_use_insertkey_override_needed_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return ((uint64_t(data->keyingoverride) & 1) != 0);
}

void KeyingSetPath_use_insertkey_override_needed_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingoverride = std::remove_reference_t<decltype(data->keyingoverride)>(uint64_t(data->keyingoverride) | 1); }
    else { data->keyingoverride = std::remove_reference_t<decltype(data->keyingoverride)>(uint64_t(data->keyingoverride) & ~uint64_t(1)); }
}

bool KeyingSetPath_use_insertkey_override_visual_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return ((uint64_t(data->keyingoverride) & 2) != 0);
}

void KeyingSetPath_use_insertkey_override_visual_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingoverride = std::remove_reference_t<decltype(data->keyingoverride)>(uint64_t(data->keyingoverride) | 2); }
    else { data->keyingoverride = std::remove_reference_t<decltype(data->keyingoverride)>(uint64_t(data->keyingoverride) & ~uint64_t(2)); }
}

bool KeyingSetPath_use_insertkey_needed_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return ((uint64_t(data->keyingflag) & 1) != 0);
}

void KeyingSetPath_use_insertkey_needed_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingflag = std::remove_reference_t<decltype(data->keyingflag)>(uint64_t(data->keyingflag) | 1); }
    else { data->keyingflag = std::remove_reference_t<decltype(data->keyingflag)>(uint64_t(data->keyingflag) & ~uint64_t(1)); }
}

bool KeyingSetPath_use_insertkey_visual_get(PointerRNA *ptr)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    return ((uint64_t(data->keyingflag) & 2) != 0);
}

void KeyingSetPath_use_insertkey_visual_set(PointerRNA *ptr, bool value)
{
    KS_Path *data = (KS_Path *)(ptr->data);
    if (value) { data->keyingflag = std::remove_reference_t<decltype(data->keyingflag)>(uint64_t(data->keyingflag) | 2); }
    else { data->keyingflag = std::remove_reference_t<decltype(data->keyingflag)>(uint64_t(data->keyingflag) & ~uint64_t(2)); }
}

static PointerRNA KeyingSetInfo_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void KeyingSetInfo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_KeyingSetInfo_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = KeyingSetInfo_rna_properties_get(iter);
    }
}

void KeyingSetInfo_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = KeyingSetInfo_rna_properties_get(iter);
    }
}

void KeyingSetInfo_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool KeyingSetInfo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA KeyingSetInfo_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void KeyingSetInfo_bl_idname_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_assert(strlen(data->idname) < sizeof(data->idname));
    strcpy(value, data->idname);
}

int KeyingSetInfo_bl_idname_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->idname);
}

void KeyingSetInfo_bl_idname_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->idname, value, sizeof(data->idname));
}

void KeyingSetInfo_bl_label_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_assert(strlen(data->name) < sizeof(data->name));
    strcpy(value, data->name);
}

int KeyingSetInfo_bl_label_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->name);
}

void KeyingSetInfo_bl_label_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, sizeof(data->name));
}

void KeyingSetInfo_bl_description_get(PointerRNA *ptr, char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_assert(strlen(data->description) < 1024);
    strcpy(value, data->description);
}

int KeyingSetInfo_bl_description_length(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return strlen(data->description);
}

void KeyingSetInfo_bl_description_set(PointerRNA *ptr, const char *value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    BLI_strncpy_utf8(data->description, value, 1024);
}

int KeyingSetInfo_bl_options_get(PointerRNA *ptr)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    return (int)(data->keyingflag);
}

void KeyingSetInfo_bl_options_set(PointerRNA *ptr, int value)
{
    KeyingSetInfo *data = (KeyingSetInfo *)(ptr->data);
    data->keyingflag = (std::remove_reference_t<decltype(data->keyingflag)>)value;
}

float AnimData_nla_tweak_strip_time_to_scene_func(AnimData *_self, float frame, bool invert)
{
	return rna_AnimData_nla_tweak_strip_time_to_scene(_self, frame, invert);
}

static void AnimData_nla_tweak_strip_time_to_scene_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	AnimData *_self;
	float frame;
	bool invert;
	float result;
	char *_data, *_retdata;
	
	_self = (AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	frame = *((float *)_data);
	_data += 8;
	invert = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_AnimData_nla_tweak_strip_time_to_scene(_self, frame, invert);
	*((float *)_retdata) = result;
}

void AnimData_fix_paths_rename_all_func(ID *_selfid, AnimData *_self, Main *bmain, const char * prefix, const char * old_name, const char * new_name)
{
	rna_id_animdata_fix_paths_rename_all(_selfid, _self, bmain, prefix, old_name, new_name);
}

static void AnimData_fix_paths_rename_all_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	AnimData *_self;
	const char * prefix;
	const char * old_name;
	const char * new_name;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	prefix = *((const char * *)_data);
	_data += 8;
	old_name = *((const char * *)_data);
	_data += 8;
	new_name = *((const char * *)_data);
	
	rna_id_animdata_fix_paths_rename_all(_selfid, _self, CTX_data_main(C), prefix, old_name, new_name);
}

/* Repeated prototypes to detect errors */

float rna_AnimData_nla_tweak_strip_time_to_scene(AnimData *_self, float frame, bool invert);
void rna_id_animdata_fix_paths_rename_all(ID *_selfid, AnimData *_self, Main *bmain, const char * prefix, const char * old_name, const char * new_name);

NlaTrack *NlaTracks_new_func(ID *_selfid, AnimData *_self, Main *bmain, bContext *C, NlaTrack *prev)
{
	return rna_NlaTrack_new(_selfid, _self, bmain, C, prev);
}

static void NlaTracks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	AnimData *_self;
	NlaTrack *prev;
	NlaTrack *track;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	prev = *((NlaTrack **)_data);
	_data += 8;
	_retdata = _data;
	
	track = rna_NlaTrack_new(_selfid, _self, CTX_data_main(C), C, prev);
	*((NlaTrack **)_retdata) = track;
}

void NlaTracks_remove_func(ID *_selfid, AnimData *_self, Main *bmain, bContext *C, ReportList *reports, PointerRNA *track)
{
	rna_NlaTrack_remove(_selfid, _self, bmain, C, reports, track);
}

static void NlaTracks_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	AnimData *_self;
	PointerRNA *track;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	track = *((PointerRNA **)_data);
	
	rna_NlaTrack_remove(_selfid, _self, CTX_data_main(C), C, reports, track);
}

/* Repeated prototypes to detect errors */

NlaTrack *rna_NlaTrack_new(ID *_selfid, AnimData *_self, Main *bmain, bContext *C, NlaTrack *prev);
void rna_NlaTrack_remove(ID *_selfid, AnimData *_self, Main *bmain, bContext *C, ReportList *reports, PointerRNA *track);

FCurve *AnimDataDrivers_new_func(ID *_selfid, AnimData *_self, Main *bmain, ReportList *reports, const char * data_path, int index)
{
	return rna_Driver_new(_selfid, _self, bmain, reports, data_path, index);
}

static void AnimDataDrivers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	AnimData *_self;
	const char * data_path;
	int index;
	FCurve *driver;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	driver = rna_Driver_new(_selfid, _self, CTX_data_main(C), reports, data_path, index);
	*((FCurve **)_retdata) = driver;
}

void AnimDataDrivers_remove_func(AnimData *_self, Main *bmain, ReportList *reports, FCurve *driver)
{
	rna_Driver_remove(_self, bmain, reports, driver);
}

static void AnimDataDrivers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	AnimData *_self;
	FCurve *driver;
	char *_data;
	
	_self = (AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	driver = *((FCurve **)_data);
	
	rna_Driver_remove(_self, CTX_data_main(C), reports, driver);
}

FCurve *AnimDataDrivers_from_existing_func(AnimData *_self, bContext *C, FCurve *src_driver)
{
	return rna_Driver_from_existing(_self, C, src_driver);
}

static void AnimDataDrivers_from_existing_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	AnimData *_self;
	FCurve *src_driver;
	FCurve *driver;
	char *_data, *_retdata;
	
	_self = (AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	src_driver = *((FCurve **)_data);
	_data += 8;
	_retdata = _data;
	
	driver = rna_Driver_from_existing(_self, C, src_driver);
	*((FCurve **)_retdata) = driver;
}

FCurve *AnimDataDrivers_find_func(AnimData *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_Driver_find(_self, reports, data_path, index);
}

static void AnimDataDrivers_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	AnimData *_self;
	const char * data_path;
	int index;
	FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (AnimData *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_Driver_find(_self, reports, data_path, index);
	*((FCurve **)_retdata) = fcurve;
}

/* Repeated prototypes to detect errors */

FCurve *rna_Driver_new(ID *_selfid, AnimData *_self, Main *bmain, ReportList *reports, const char * data_path, int index);
void rna_Driver_remove(AnimData *_self, Main *bmain, ReportList *reports, FCurve *driver);
FCurve *rna_Driver_from_existing(AnimData *_self, bContext *C, FCurve *src_driver);
FCurve *rna_Driver_find(AnimData *_self, ReportList *reports, const char * data_path, int index);

void KeyingSet_refresh_func(KeyingSet *_self, bContext *C, ReportList *reports)
{
	rna_KeyingSet_context_refresh(_self, C, reports);
}

static void KeyingSet_refresh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	KeyingSet *_self;
	_self = (KeyingSet *)_ptr->data;
	
	rna_KeyingSet_context_refresh(_self, C, reports);
}

/* Repeated prototypes to detect errors */

void rna_KeyingSet_context_refresh(KeyingSet *_self, bContext *C, ReportList *reports);

KS_Path *KeyingSetPaths_add_func(KeyingSet *_self, ReportList *reports, ID *target_id, const char * data_path, int index, int group_method, const char * group_name)
{
	return rna_KeyingSet_paths_add(_self, reports, target_id, data_path, index, group_method, group_name);
}

static void KeyingSetPaths_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	KeyingSet *_self;
	KS_Path *ksp;
	ID *target_id;
	const char * data_path;
	int index;
	int group_method;
	const char * group_name;
	char *_data, *_retdata;
	
	_self = (KeyingSet *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	target_id = *((ID **)_data);
	_data += 8;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	group_method = *((int *)_data);
	_data += 8;
	group_name = *((const char * *)_data);
	
	ksp = rna_KeyingSet_paths_add(_self, reports, target_id, data_path, index, group_method, group_name);
	*((KS_Path **)_retdata) = ksp;
}

void KeyingSetPaths_remove_func(KeyingSet *_self, ReportList *reports, PointerRNA *path)
{
	rna_KeyingSet_paths_remove(_self, reports, path);
}

static void KeyingSetPaths_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	KeyingSet *_self;
	PointerRNA *path;
	char *_data;
	
	_self = (KeyingSet *)_ptr->data;
	_data = (char *)_parms->data;
	path = *((PointerRNA **)_data);
	
	rna_KeyingSet_paths_remove(_self, reports, path);
}

void KeyingSetPaths_clear_func(KeyingSet *_self, ReportList *reports)
{
	rna_KeyingSet_paths_clear(_self, reports);
}

static void KeyingSetPaths_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	KeyingSet *_self;
	_self = (KeyingSet *)_ptr->data;
	
	rna_KeyingSet_paths_clear(_self, reports);
}

/* Repeated prototypes to detect errors */

KS_Path *rna_KeyingSet_paths_add(KeyingSet *_self, ReportList *reports, ID *target_id, const char * data_path, int index, int group_method, const char * group_name);
void rna_KeyingSet_paths_remove(KeyingSet *_self, ReportList *reports, PointerRNA *path);
void rna_KeyingSet_paths_clear(KeyingSet *_self, ReportList *reports);



/* Animation Data */
static CollectionPropertyRNA rna_AnimData_rna_properties_;
PropertyRNA &rna_AnimData_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnimData_rna_properties_);

static PointerPropertyRNA rna_AnimData_rna_type_;
PropertyRNA &rna_AnimData_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnimData_rna_type_);

static CollectionPropertyRNA rna_AnimData_nla_tracks_;
PropertyRNA &rna_AnimData_nla_tracks = reinterpret_cast<PropertyRNA &>(rna_AnimData_nla_tracks_);

static PointerPropertyRNA rna_AnimData_action_;
PropertyRNA &rna_AnimData_action = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_);

static EnumPropertyRNA rna_AnimData_action_extrapolation_;
PropertyRNA &rna_AnimData_action_extrapolation = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_extrapolation_);

static EnumPropertyRNA rna_AnimData_action_blend_type_;
PropertyRNA &rna_AnimData_action_blend_type = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_blend_type_);

static FloatPropertyRNA rna_AnimData_action_influence_;
PropertyRNA &rna_AnimData_action_influence = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_influence_);

static PointerPropertyRNA rna_AnimData_action_tweak_storage_;
PropertyRNA &rna_AnimData_action_tweak_storage = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_tweak_storage_);

static IntPropertyRNA rna_AnimData_action_slot_handle_tweak_storage_;
PropertyRNA &rna_AnimData_action_slot_handle_tweak_storage = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_slot_handle_tweak_storage_);

static CollectionPropertyRNA rna_AnimData_drivers_;
PropertyRNA &rna_AnimData_drivers = reinterpret_cast<PropertyRNA &>(rna_AnimData_drivers_);

static BoolPropertyRNA rna_AnimData_use_nla_;
PropertyRNA &rna_AnimData_use_nla = reinterpret_cast<PropertyRNA &>(rna_AnimData_use_nla_);

static BoolPropertyRNA rna_AnimData_use_tweak_mode_;
PropertyRNA &rna_AnimData_use_tweak_mode = reinterpret_cast<PropertyRNA &>(rna_AnimData_use_tweak_mode_);

static BoolPropertyRNA rna_AnimData_use_pin_;
PropertyRNA &rna_AnimData_use_pin = reinterpret_cast<PropertyRNA &>(rna_AnimData_use_pin_);

static IntPropertyRNA rna_AnimData_action_slot_handle_;
PropertyRNA &rna_AnimData_action_slot_handle = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_slot_handle_);

static StringPropertyRNA rna_AnimData_last_slot_identifier_;
PropertyRNA &rna_AnimData_last_slot_identifier = reinterpret_cast<PropertyRNA &>(rna_AnimData_last_slot_identifier_);

static PointerPropertyRNA rna_AnimData_action_slot_;
PropertyRNA &rna_AnimData_action_slot = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_slot_);

static CollectionPropertyRNA rna_AnimData_action_suitable_slots_;
PropertyRNA &rna_AnimData_action_suitable_slots = reinterpret_cast<PropertyRNA &>(rna_AnimData_action_suitable_slots_);

static FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_frame_;
PropertyRNA &rna_AnimData_nla_tweak_strip_time_to_scene_frame = reinterpret_cast<PropertyRNA &>(rna_AnimData_nla_tweak_strip_time_to_scene_frame_);

static BoolPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_invert_;
PropertyRNA &rna_AnimData_nla_tweak_strip_time_to_scene_invert = reinterpret_cast<PropertyRNA &>(rna_AnimData_nla_tweak_strip_time_to_scene_invert_);

static FloatPropertyRNA rna_AnimData_nla_tweak_strip_time_to_scene_result_;
PropertyRNA &rna_AnimData_nla_tweak_strip_time_to_scene_result = reinterpret_cast<PropertyRNA &>(rna_AnimData_nla_tweak_strip_time_to_scene_result_);

FunctionRNA *rna_AnimData_nla_tweak_strip_time_to_scene_func;
static StringPropertyRNA rna_AnimData_fix_paths_rename_all_prefix_;
PropertyRNA &rna_AnimData_fix_paths_rename_all_prefix = reinterpret_cast<PropertyRNA &>(rna_AnimData_fix_paths_rename_all_prefix_);

static StringPropertyRNA rna_AnimData_fix_paths_rename_all_old_name_;
PropertyRNA &rna_AnimData_fix_paths_rename_all_old_name = reinterpret_cast<PropertyRNA &>(rna_AnimData_fix_paths_rename_all_old_name_);

static StringPropertyRNA rna_AnimData_fix_paths_rename_all_new_name_;
PropertyRNA &rna_AnimData_fix_paths_rename_all_new_name = reinterpret_cast<PropertyRNA &>(rna_AnimData_fix_paths_rename_all_new_name_);

FunctionRNA *rna_AnimData_fix_paths_rename_all_func;
StructRNA *RNA_AnimData;
void register_struct_AnimData(BlenderRNA &brna)
{
	rna_AnimData_rna_properties_ = {
		{&rna_AnimData_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_rna_properties_begin, AnimData_rna_properties_next, AnimData_rna_properties_end, AnimData_rna_properties_get, nullptr, nullptr, AnimData_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnimData_rna_type_ = {
		{&rna_AnimData_nla_tracks, 	&rna_AnimData_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AnimData_nla_tracks_ = {
		{&rna_AnimData_action, 	&rna_AnimData_rna_type,
		-1, "nla_tracks", 0, 3073, 0, 0, 0, PropertyPathTemplateType(0), "NLA Tracks",
		"NLA Tracks (i.e. Animation Layers)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NLA_tracks_override_apply,
			0, PROP_RAW_UNSET, RNA_NlaTracks},
		AnimData_nla_tracks_begin, AnimData_nla_tracks_next, AnimData_nla_tracks_end, AnimData_nla_tracks_get, nullptr, AnimData_nla_tracks_lookup_int, AnimData_nla_tracks_lookup_string, nullptr, RNA_NlaTrack
	};

	rna_AnimData_action_ = {
		{&rna_AnimData_action_extrapolation, 	&rna_AnimData_nla_tracks,
		-1, "action", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Action",
		"Active Action for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_dependency_update, 256507904, rna_AnimData_action_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_action_get, AnimData_action_set, nullptr, rna_Action_id_poll,RNA_Action
	};

	static const EnumPropertyItem rna_AnimData_action_extrapolation_items[4] = {
		{2, "NOTHING", 0, "Nothing", "Strip has no influence past its extents"	},
		{0, "HOLD", 0, "Hold", "Hold the first frame if no previous strips in track, and always hold last frame"	},
		{1, "HOLD_FORWARD", 0, "Hold Forward", "Only hold last frame"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_AnimData_action_extrapolation_ = {
		{&rna_AnimData_action_blend_type, 	&rna_AnimData_action,
		-1, "action_extrapolation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Action Extrapolation",
		"Action to take for gaps past the Active Action\'s range (when evaluating with NLA)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_update, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(AnimData, act_extendmode), RawPropertyType(1), nullptr},
		AnimData_action_extrapolation_get, AnimData_action_extrapolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimData_action_extrapolation_items, 3, 0
	};

	static const EnumPropertyItem rna_AnimData_action_blend_type_items[7] = {
		{0, "REPLACE", 0, "Replace", "The strip values replace the accumulated results by amount specified by influence"	},
		{4, "COMBINE", 0, "Combine", "The strip values are combined with accumulated results by appropriately using addition, multiplication, or quaternion math, based on channel type"	},
		{0, "", 0, nullptr, nullptr	},
		{1, "ADD", 0, "Add", "Weighted result of strip is added to the accumulated results"	},
		{2, "SUBTRACT", 0, "Subtract", "Weighted result of strip is removed from the accumulated results"	},
		{3, "MULTIPLY", 0, "Multiply", "Weighted result of strip is multiplied with the accumulated results"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_AnimData_action_blend_type_ = {
		{&rna_AnimData_action_influence, 	&rna_AnimData_action_extrapolation,
		-1, "action_blend_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Action Blending",
		"Method used for combining Active Action\'s result with result of NLA stack",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_update, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(AnimData, act_blendmode), RawPropertyType(1), nullptr},
		AnimData_action_blend_type_get, AnimData_action_blend_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimData_action_blend_type_items, 6, 0
	};

	rna_AnimData_action_influence_ = {
		{&rna_AnimData_action_tweak_storage, 	&rna_AnimData_action_blend_type,
		-1, "action_influence", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Action Influence",
		"Amount the Active Action contributes to the result of the NLA stack",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_update, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(AnimData, act_influence), RawPropertyType(5), nullptr},
		AnimData_action_influence_get, AnimData_action_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_AnimData_action_tweak_storage_ = {
		{&rna_AnimData_action_slot_handle_tweak_storage, 	&rna_AnimData_action_influence,
		-1, "action_tweak_storage", 8913089, 1, 0, 64, 0, PropertyPathTemplateType(0), "Tweak Mode Action Storage",
		"Storage to temporarily hold the main action while in tweak mode",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_dependency_update, 256507904, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_action_tweak_storage_get, AnimData_action_tweak_storage_set, nullptr, rna_Action_id_poll,RNA_Action
	};

	rna_AnimData_action_slot_handle_tweak_storage_ = {
		{&rna_AnimData_drivers, 	&rna_AnimData_action_tweak_storage,
		-1, "action_slot_handle_tweak_storage", 524291, 1, 0, 4, 0, PropertyPathTemplateType(0), "Tweak Mode Action Slot Storage",
		"Storage to temporarily hold the main action slot while in tweak mode",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_dependency_update, 256507904, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(AnimData, tmp_slot_handle), RawPropertyType(0), nullptr},
		AnimData_action_slot_handle_tweak_storage_get, AnimData_action_slot_handle_tweak_storage_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnimData_drivers_ = {
		{&rna_AnimData_use_nla, 	&rna_AnimData_action_slot_handle_tweak_storage,
		-1, "drivers", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Drivers",
		"The Drivers/Expressions for this data-block",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AnimDataDrivers},
		AnimData_drivers_begin, AnimData_drivers_next, AnimData_drivers_end, AnimData_drivers_get, nullptr, AnimData_drivers_lookup_int, nullptr, nullptr, RNA_FCurve
	};

	rna_AnimData_use_nla_ = {
		{&rna_AnimData_use_tweak_mode, 	&rna_AnimData_drivers,
		-1, "use_nla", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "NLA Evaluation Enabled",
		"NLA stack is evaluated when evaluating this block",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_update, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_use_nla_get, AnimData_use_nla_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_AnimData_use_tweak_mode_ = {
		{&rna_AnimData_use_pin, 	&rna_AnimData_use_nla,
		-1, "use_tweak_mode", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use NLA Tweak Mode",
		"Whether to enable or disable tweak mode in NLA",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_update, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimData_tweakmode_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_use_tweak_mode_get, AnimData_use_tweak_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnimData_use_pin_ = {
		{&rna_AnimData_action_slot_handle, 	&rna_AnimData_use_tweak_mode,
		-1, "use_pin", 1073741827, 1, 0, 0, 0, PropertyPathTemplateType(0), "Pin in Graph Editor",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256376833, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_use_pin_get, AnimData_use_pin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnimData_action_slot_handle_ = {
		{&rna_AnimData_last_slot_identifier, 	&rna_AnimData_use_pin,
		-1, "action_slot_handle", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action Slot Handle",
		"A number that identifies which sub-set of the Action is considered to be for this data-block",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_dependency_update, 256507904, nullptr, nullptr, nullptr, nullptr, rna_AnimData_slot_handle_override_diff, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_action_slot_handle_get, AnimData_action_slot_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnimData_last_slot_identifier_ = {
		{&rna_AnimData_action_slot, 	&rna_AnimData_action_slot_handle,
		-1, "last_slot_identifier", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Last Action Slot Identifier",
		"The identifier of the most recently assigned action slot. The slot identifies which sub-set of the Action is considered to be for this data-block, and its identifier is used to find the right slot when assigning an Action.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {258, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_last_slot_identifier_get, AnimData_last_slot_identifier_length, AnimData_last_slot_identifier_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 258, ""
	};

	rna_AnimData_action_slot_ = {
		{&rna_AnimData_action_suitable_slots, 	&rna_AnimData_last_slot_identifier,
		-1, "action_slot", 8388609, 5, 0, 0, 0, PropertyPathTemplateType(0), "Action Slot",
		"The slot identifies which sub-set of the Action is considered to be for this data-block, and its name is used to find the right slot when assigning an Action",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_AnimData_action_slot_update, 256507904, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_action_slot_get, AnimData_action_slot_set, nullptr, nullptr,RNA_ActionSlot
	};

	rna_AnimData_action_suitable_slots_ = {
		{nullptr, 	&rna_AnimData_action_slot,
		-1, "action_suitable_slots", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Slots",
		"The list of slots in this animation data-block",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimData_action_suitable_slots_begin, AnimData_action_suitable_slots_next, AnimData_action_suitable_slots_end, AnimData_action_suitable_slots_get, nullptr, AnimData_action_suitable_slots_lookup_int, nullptr, nullptr, RNA_ActionSlot
	};

	StructRNA *srna = RNA_AnimData;
	srna->cont.properties = {&rna_AnimData_rna_properties, &rna_AnimData_action_suitable_slots};
	srna->identifier = "AnimData";
	srna->flag = 516;
	srna->name = "Animation Data";
	srna->description = "Animation data for data-block";
	srna->translation_context = "*";
	srna->icon = 202;
	srna->iteratorproperty = &rna_AnimData_rna_properties;
	srna->path = rna_AnimData_path;
	{
	rna_AnimData_nla_tweak_strip_time_to_scene_frame_ = {
		{&rna_AnimData_nla_tweak_strip_time_to_scene_invert, 	nullptr,
		-1, "frame", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Input time",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_AnimData_nla_tweak_strip_time_to_scene_invert_ = {
		{&rna_AnimData_nla_tweak_strip_time_to_scene_result, 	&rna_AnimData_nla_tweak_strip_time_to_scene_frame,
		-1, "invert", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert",
		"Convert scene time to action time",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_AnimData_nla_tweak_strip_time_to_scene_result_ = {
		{nullptr, 	&rna_AnimData_nla_tweak_strip_time_to_scene_invert,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Converted time",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnimData_nla_tweak_strip_time_to_scene_frame, &rna_AnimData_nla_tweak_strip_time_to_scene_result};
		func->identifier = "nla_tweak_strip_time_to_scene";
		func->description = "Convert a time value from the local time of the tweaked strip to scene time, exactly as done by built-in key editing tools. Returns the input time unchanged if not tweaking.";
		func->call = AnimData_nla_tweak_strip_time_to_scene_call;
		func->c_ret = &rna_AnimData_nla_tweak_strip_time_to_scene_result;
		rna_AnimData_nla_tweak_strip_time_to_scene_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnimData_fix_paths_rename_all_prefix_ = {
		{&rna_AnimData_fix_paths_rename_all_old_name, 	nullptr,
		-1, "prefix", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Prefix",
		"Name prefix",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_AnimData_fix_paths_rename_all_old_name_ = {
		{&rna_AnimData_fix_paths_rename_all_new_name, 	&rna_AnimData_fix_paths_rename_all_prefix,
		-1, "old_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Old Name",
		"Old name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
	rna_AnimData_fix_paths_rename_all_new_name_ = {
		{nullptr, 	&rna_AnimData_fix_paths_rename_all_old_name,
		-1, "new_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "New Name",
		"New name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnimData_fix_paths_rename_all_prefix, &rna_AnimData_fix_paths_rename_all_new_name};
		func->identifier = "fix_paths_rename_all";
		func->flag = 2052;
		func->description = "Rename the property paths in the animation system, since properties are animated via string paths, it\'s needed to keep them valid after properties has been renamed";
		func->call = AnimData_fix_paths_rename_all_call;
		rna_AnimData_fix_paths_rename_all_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* NLA Tracks */
static CollectionPropertyRNA rna_NlaTracks_rna_properties_;
PropertyRNA &rna_NlaTracks_rna_properties = reinterpret_cast<PropertyRNA &>(rna_NlaTracks_rna_properties_);

static PointerPropertyRNA rna_NlaTracks_rna_type_;
PropertyRNA &rna_NlaTracks_rna_type = reinterpret_cast<PropertyRNA &>(rna_NlaTracks_rna_type_);

static PointerPropertyRNA rna_NlaTracks_active_;
PropertyRNA &rna_NlaTracks_active = reinterpret_cast<PropertyRNA &>(rna_NlaTracks_active_);

static PointerPropertyRNA rna_NlaTracks_new_prev_;
PropertyRNA &rna_NlaTracks_new_prev = reinterpret_cast<PropertyRNA &>(rna_NlaTracks_new_prev_);

static PointerPropertyRNA rna_NlaTracks_new_track_;
PropertyRNA &rna_NlaTracks_new_track = reinterpret_cast<PropertyRNA &>(rna_NlaTracks_new_track_);

FunctionRNA *rna_NlaTracks_new_func;
static PointerPropertyRNA rna_NlaTracks_remove_track_;
PropertyRNA &rna_NlaTracks_remove_track = reinterpret_cast<PropertyRNA &>(rna_NlaTracks_remove_track_);

FunctionRNA *rna_NlaTracks_remove_func;
StructRNA *RNA_NlaTracks;
void register_struct_NlaTracks(BlenderRNA &brna)
{
	rna_NlaTracks_rna_properties_ = {
		{&rna_NlaTracks_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTracks_rna_properties_begin, NlaTracks_rna_properties_next, NlaTracks_rna_properties_end, NlaTracks_rna_properties_get, nullptr, nullptr, NlaTracks_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_NlaTracks_rna_type_ = {
		{&rna_NlaTracks_active, 	&rna_NlaTracks_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTracks_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_NlaTracks_active_ = {
		{nullptr, 	&rna_NlaTracks_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Track",
		"Active NLA Track",
		0, "Action",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256442374, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTracks_active_get, NlaTracks_active_set, nullptr, nullptr,RNA_NlaTrack
	};

	StructRNA *srna = RNA_NlaTracks;
	srna->cont.properties = {&rna_NlaTracks_rna_properties, &rna_NlaTracks_active};
	srna->identifier = "NlaTracks";
	srna->flag = 516;
	srna->name = "NLA Tracks";
	srna->description = "Collection of NLA Tracks";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_NlaTracks_rna_properties;
	{
	rna_NlaTracks_new_prev_ = {
		{&rna_NlaTracks_new_track, 	nullptr,
		-1, "prev", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"NLA Track to add the new one after",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_NlaTrack
	};
	rna_NlaTracks_new_track_ = {
		{nullptr, 	&rna_NlaTracks_new_prev,
		-1, "track", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New NLA Track",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_NlaTrack
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NlaTracks_new_prev, &rna_NlaTracks_new_track};
		func->identifier = "new";
		func->flag = 2060;
		func->description = "Add a new NLA Track";
		func->call = NlaTracks_new_call;
		func->c_ret = &rna_NlaTracks_new_track;
		rna_NlaTracks_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_NlaTracks_remove_track_ = {
		{nullptr, 	nullptr,
		-1, "track", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"NLA Track to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_NlaTrack
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NlaTracks_remove_track, &rna_NlaTracks_remove_track};
		func->identifier = "remove";
		func->flag = 2076;
		func->description = "Remove a NLA Track";
		func->call = NlaTracks_remove_call;
		rna_NlaTracks_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Drivers */
static CollectionPropertyRNA rna_AnimDataDrivers_rna_properties_;
PropertyRNA &rna_AnimDataDrivers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_rna_properties_);

static PointerPropertyRNA rna_AnimDataDrivers_rna_type_;
PropertyRNA &rna_AnimDataDrivers_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_rna_type_);

static StringPropertyRNA rna_AnimDataDrivers_new_data_path_;
PropertyRNA &rna_AnimDataDrivers_new_data_path = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_new_data_path_);

static IntPropertyRNA rna_AnimDataDrivers_new_index_;
PropertyRNA &rna_AnimDataDrivers_new_index = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_new_index_);

static PointerPropertyRNA rna_AnimDataDrivers_new_driver_;
PropertyRNA &rna_AnimDataDrivers_new_driver = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_new_driver_);

FunctionRNA *rna_AnimDataDrivers_new_func;
static PointerPropertyRNA rna_AnimDataDrivers_remove_driver_;
PropertyRNA &rna_AnimDataDrivers_remove_driver = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_remove_driver_);

FunctionRNA *rna_AnimDataDrivers_remove_func;
static PointerPropertyRNA rna_AnimDataDrivers_from_existing_src_driver_;
PropertyRNA &rna_AnimDataDrivers_from_existing_src_driver = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_from_existing_src_driver_);

static PointerPropertyRNA rna_AnimDataDrivers_from_existing_driver_;
PropertyRNA &rna_AnimDataDrivers_from_existing_driver = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_from_existing_driver_);

FunctionRNA *rna_AnimDataDrivers_from_existing_func;
static StringPropertyRNA rna_AnimDataDrivers_find_data_path_;
PropertyRNA &rna_AnimDataDrivers_find_data_path = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_find_data_path_);

static IntPropertyRNA rna_AnimDataDrivers_find_index_;
PropertyRNA &rna_AnimDataDrivers_find_index = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_find_index_);

static PointerPropertyRNA rna_AnimDataDrivers_find_fcurve_;
PropertyRNA &rna_AnimDataDrivers_find_fcurve = reinterpret_cast<PropertyRNA &>(rna_AnimDataDrivers_find_fcurve_);

FunctionRNA *rna_AnimDataDrivers_find_func;
StructRNA *RNA_AnimDataDrivers;
void register_struct_AnimDataDrivers(BlenderRNA &brna)
{
	rna_AnimDataDrivers_rna_properties_ = {
		{&rna_AnimDataDrivers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimDataDrivers_rna_properties_begin, AnimDataDrivers_rna_properties_next, AnimDataDrivers_rna_properties_end, AnimDataDrivers_rna_properties_get, nullptr, nullptr, AnimDataDrivers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnimDataDrivers_rna_type_ = {
		{nullptr, 	&rna_AnimDataDrivers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimDataDrivers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_AnimDataDrivers;
	srna->cont.properties = {&rna_AnimDataDrivers_rna_properties, &rna_AnimDataDrivers_rna_type};
	srna->identifier = "AnimDataDrivers";
	srna->flag = 516;
	srna->name = "Drivers";
	srna->description = "Collection of Driver F-Curves";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnimDataDrivers_rna_properties;
	{
	rna_AnimDataDrivers_new_data_path_ = {
		{&rna_AnimDataDrivers_new_index, 	nullptr,
		-1, "data_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path to use",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_AnimDataDrivers_new_index_ = {
		{&rna_AnimDataDrivers_new_driver, 	&rna_AnimDataDrivers_new_data_path,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Array index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_AnimDataDrivers_new_driver_ = {
		{nullptr, 	&rna_AnimDataDrivers_new_index,
		-1, "driver", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly Driver F-Curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnimDataDrivers_new_data_path, &rna_AnimDataDrivers_new_driver};
		func->identifier = "new";
		func->flag = 2068;
		func->description = "new";
		func->call = AnimDataDrivers_new_call;
		func->c_ret = &rna_AnimDataDrivers_new_driver;
		rna_AnimDataDrivers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnimDataDrivers_remove_driver_ = {
		{nullptr, 	nullptr,
		-1, "driver", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnimDataDrivers_remove_driver, &rna_AnimDataDrivers_remove_driver};
		func->identifier = "remove";
		func->flag = 20;
		func->description = "remove";
		func->call = AnimDataDrivers_remove_call;
		rna_AnimDataDrivers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnimDataDrivers_from_existing_src_driver_ = {
		{&rna_AnimDataDrivers_from_existing_driver, 	nullptr,
		-1, "src_driver", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Existing Driver F-Curve to use as template for a new one",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
	rna_AnimDataDrivers_from_existing_driver_ = {
		{nullptr, 	&rna_AnimDataDrivers_from_existing_src_driver,
		-1, "driver", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Driver F-Curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnimDataDrivers_from_existing_src_driver, &rna_AnimDataDrivers_from_existing_driver};
		func->identifier = "from_existing";
		func->flag = 8;
		func->description = "Add a new driver given an existing one";
		func->call = AnimDataDrivers_from_existing_call;
		func->c_ret = &rna_AnimDataDrivers_from_existing_driver;
		rna_AnimDataDrivers_from_existing_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AnimDataDrivers_find_data_path_ = {
		{&rna_AnimDataDrivers_find_index, 	nullptr,
		-1, "data_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_AnimDataDrivers_find_index_ = {
		{&rna_AnimDataDrivers_find_fcurve, 	&rna_AnimDataDrivers_find_data_path,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Array index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_AnimDataDrivers_find_fcurve_ = {
		{nullptr, 	&rna_AnimDataDrivers_find_index,
		-1, "fcurve", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The found F-Curve, or None if it doesn\'t exist",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AnimDataDrivers_find_data_path, &rna_AnimDataDrivers_find_fcurve};
		func->identifier = "find";
		func->flag = 16;
		func->description = "Find a driver F-Curve. Note that this function performs a linear scan of all driver F-Curves.";
		func->call = AnimDataDrivers_find_call;
		func->c_ret = &rna_AnimDataDrivers_find_fcurve;
		rna_AnimDataDrivers_find_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Keying Set */
static CollectionPropertyRNA rna_KeyingSet_rna_properties_;
PropertyRNA &rna_KeyingSet_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_rna_properties_);

static PointerPropertyRNA rna_KeyingSet_rna_type_;
PropertyRNA &rna_KeyingSet_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_rna_type_);

static StringPropertyRNA rna_KeyingSet_bl_idname_;
PropertyRNA &rna_KeyingSet_bl_idname = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_bl_idname_);

static StringPropertyRNA rna_KeyingSet_bl_label_;
PropertyRNA &rna_KeyingSet_bl_label = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_bl_label_);

static StringPropertyRNA rna_KeyingSet_bl_description_;
PropertyRNA &rna_KeyingSet_bl_description = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_bl_description_);

static PointerPropertyRNA rna_KeyingSet_type_info_;
PropertyRNA &rna_KeyingSet_type_info = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_type_info_);

static CollectionPropertyRNA rna_KeyingSet_paths_;
PropertyRNA &rna_KeyingSet_paths = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_paths_);

static BoolPropertyRNA rna_KeyingSet_is_path_absolute_;
PropertyRNA &rna_KeyingSet_is_path_absolute = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_is_path_absolute_);

static BoolPropertyRNA rna_KeyingSet_use_insertkey_override_needed_;
PropertyRNA &rna_KeyingSet_use_insertkey_override_needed = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_use_insertkey_override_needed_);

static BoolPropertyRNA rna_KeyingSet_use_insertkey_override_visual_;
PropertyRNA &rna_KeyingSet_use_insertkey_override_visual = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_use_insertkey_override_visual_);

static BoolPropertyRNA rna_KeyingSet_use_insertkey_needed_;
PropertyRNA &rna_KeyingSet_use_insertkey_needed = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_use_insertkey_needed_);

static BoolPropertyRNA rna_KeyingSet_use_insertkey_visual_;
PropertyRNA &rna_KeyingSet_use_insertkey_visual = reinterpret_cast<PropertyRNA &>(rna_KeyingSet_use_insertkey_visual_);

FunctionRNA *rna_KeyingSet_refresh_func;
StructRNA *RNA_KeyingSet;
void register_struct_KeyingSet(BlenderRNA &brna)
{
	rna_KeyingSet_rna_properties_ = {
		{&rna_KeyingSet_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_rna_properties_begin, KeyingSet_rna_properties_next, KeyingSet_rna_properties_end, KeyingSet_rna_properties_get, nullptr, nullptr, KeyingSet_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyingSet_rna_type_ = {
		{&rna_KeyingSet_bl_idname, 	&rna_KeyingSet_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyingSet_bl_idname_ = {
		{&rna_KeyingSet_bl_label, 	&rna_KeyingSet_rna_type,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID Name",
		"If this is set, the Keying Set gets a custom ID, otherwise it takes the name of the class used to define the Keying Set (for example, if the class name is \"BUILTIN_KSI_location\", and bl_idname is not set by the script, then bl_idname = \"BUILTIN_KSI_location\")",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_bl_idname_get, KeyingSet_bl_idname_length, KeyingSet_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_KeyingSet_bl_label_ = {
		{&rna_KeyingSet_bl_description, 	&rna_KeyingSet_bl_idname,
		-1, "bl_label", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "UI Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 84803589, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_bl_label_get, KeyingSet_bl_label_length, KeyingSet_bl_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_KeyingSet_bl_description_ = {
		{&rna_KeyingSet_type_info, 	&rna_KeyingSet_bl_label,
		-1, "bl_description", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Description",
		"A short description of the keying set",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_bl_description_get, KeyingSet_bl_description_length, KeyingSet_bl_description_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_KeyingSet_type_info_ = {
		{&rna_KeyingSet_paths, 	&rna_KeyingSet_bl_description,
		-1, "type_info", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type Info",
		"Callback function defines for built-in Keying Sets",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_type_info_get, nullptr, nullptr, nullptr,RNA_KeyingSetInfo
	};

	rna_KeyingSet_paths_ = {
		{&rna_KeyingSet_is_path_absolute, 	&rna_KeyingSet_type_info,
		-1, "paths", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Paths",
		"Keying Set Paths to define settings that get keyframed together",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_KeyingSetPaths},
		KeyingSet_paths_begin, KeyingSet_paths_next, KeyingSet_paths_end, KeyingSet_paths_get, nullptr, KeyingSet_paths_lookup_int, KeyingSet_paths_lookup_string, nullptr, RNA_KeyingSetPath
	};

	rna_KeyingSet_is_path_absolute_ = {
		{&rna_KeyingSet_use_insertkey_override_needed, 	&rna_KeyingSet_paths,
		-1, "is_path_absolute", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Absolute",
		"Keying Set defines specific paths/settings to be keyframed (i.e. is not reliant on context info)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_is_path_absolute_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSet_use_insertkey_override_needed_ = {
		{&rna_KeyingSet_use_insertkey_override_visual, 	&rna_KeyingSet_is_path_absolute,
		-1, "use_insertkey_override_needed", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Insert Keyframes Default- Only Needed",
		"Override default setting to only insert keyframes where they\'re needed in the relevant F-Curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_use_insertkey_override_needed_get, KeyingSet_use_insertkey_override_needed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSet_use_insertkey_override_visual_ = {
		{&rna_KeyingSet_use_insertkey_needed, 	&rna_KeyingSet_use_insertkey_override_needed,
		-1, "use_insertkey_override_visual", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Insert Keyframes Default - Visual",
		"Override default setting to insert keyframes based on \'visual transforms\'",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_use_insertkey_override_visual_get, KeyingSet_use_insertkey_override_visual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSet_use_insertkey_needed_ = {
		{&rna_KeyingSet_use_insertkey_visual, 	&rna_KeyingSet_use_insertkey_override_visual,
		-1, "use_insertkey_needed", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Insert Keyframes - Only Needed",
		"Only insert keyframes where they\'re needed in the relevant F-Curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_use_insertkey_needed_get, KeyingSet_use_insertkey_needed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSet_use_insertkey_visual_ = {
		{nullptr, 	&rna_KeyingSet_use_insertkey_needed,
		-1, "use_insertkey_visual", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Insert Keyframes - Visual",
		"Insert keyframes based on \'visual transforms\'",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSet_use_insertkey_visual_get, KeyingSet_use_insertkey_visual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_KeyingSet;
	srna->cont.properties = {&rna_KeyingSet_rna_properties, &rna_KeyingSet_use_insertkey_visual};
	srna->identifier = "KeyingSet";
	srna->flag = 516;
	srna->name = "Keying Set";
	srna->description = "Settings that should be keyframed together";
	srna->translation_context = "*";
	srna->icon = 535;
	srna->nameproperty = &rna_KeyingSet_bl_label;
	srna->iteratorproperty = &rna_KeyingSet_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "refresh";
		func->flag = 24;
		func->description = "Refresh Keying Set to ensure that it is valid for the current context (call before each use of one)";
		func->call = KeyingSet_refresh_call;
		rna_KeyingSet_refresh_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Keying set paths */
static CollectionPropertyRNA rna_KeyingSetPaths_rna_properties_;
PropertyRNA &rna_KeyingSetPaths_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_rna_properties_);

static PointerPropertyRNA rna_KeyingSetPaths_rna_type_;
PropertyRNA &rna_KeyingSetPaths_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_rna_type_);

static PointerPropertyRNA rna_KeyingSetPaths_active_;
PropertyRNA &rna_KeyingSetPaths_active = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_active_);

static IntPropertyRNA rna_KeyingSetPaths_active_index_;
PropertyRNA &rna_KeyingSetPaths_active_index = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_active_index_);

static PointerPropertyRNA rna_KeyingSetPaths_add_ksp_;
PropertyRNA &rna_KeyingSetPaths_add_ksp = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_add_ksp_);

static PointerPropertyRNA rna_KeyingSetPaths_add_target_id_;
PropertyRNA &rna_KeyingSetPaths_add_target_id = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_add_target_id_);

static StringPropertyRNA rna_KeyingSetPaths_add_data_path_;
PropertyRNA &rna_KeyingSetPaths_add_data_path = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_add_data_path_);

static IntPropertyRNA rna_KeyingSetPaths_add_index_;
PropertyRNA &rna_KeyingSetPaths_add_index = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_add_index_);

static EnumPropertyRNA rna_KeyingSetPaths_add_group_method_;
PropertyRNA &rna_KeyingSetPaths_add_group_method = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_add_group_method_);

static StringPropertyRNA rna_KeyingSetPaths_add_group_name_;
PropertyRNA &rna_KeyingSetPaths_add_group_name = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_add_group_name_);

FunctionRNA *rna_KeyingSetPaths_add_func;
static PointerPropertyRNA rna_KeyingSetPaths_remove_path_;
PropertyRNA &rna_KeyingSetPaths_remove_path = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPaths_remove_path_);

FunctionRNA *rna_KeyingSetPaths_remove_func;
FunctionRNA *rna_KeyingSetPaths_clear_func;
StructRNA *RNA_KeyingSetPaths;
void register_struct_KeyingSetPaths(BlenderRNA &brna)
{
	rna_KeyingSetPaths_rna_properties_ = {
		{&rna_KeyingSetPaths_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPaths_rna_properties_begin, KeyingSetPaths_rna_properties_next, KeyingSetPaths_rna_properties_end, KeyingSetPaths_rna_properties_get, nullptr, nullptr, KeyingSetPaths_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyingSetPaths_rna_type_ = {
		{&rna_KeyingSetPaths_active, 	&rna_KeyingSetPaths_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPaths_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyingSetPaths_active_ = {
		{&rna_KeyingSetPaths_active_index, 	&rna_KeyingSetPaths_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Keying Set",
		"Active Keying Set used to insert/delete keyframes",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_KeyingSet_active_ksPath_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPaths_active_get, KeyingSetPaths_active_set, nullptr, nullptr,RNA_KeyingSetPath
	};

	rna_KeyingSetPaths_active_index_ = {
		{nullptr, 	&rna_KeyingSetPaths_active,
		-1, "active_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Path Index",
		"Current Keying Set index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPaths_active_index_get, KeyingSetPaths_active_index_set, nullptr, nullptr, rna_KeyingSet_active_ksPath_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_KeyingSetPaths;
	srna->cont.properties = {&rna_KeyingSetPaths_rna_properties, &rna_KeyingSetPaths_active_index};
	srna->identifier = "KeyingSetPaths";
	srna->flag = 516;
	srna->name = "Keying set paths";
	srna->description = "Collection of keying set paths";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_KeyingSetPaths_rna_properties;
	{
	rna_KeyingSetPaths_add_ksp_ = {
		{&rna_KeyingSetPaths_add_target_id, 	nullptr,
		-1, "ksp", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "New Path",
		"Path created and added to the Keying Set",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyingSetPath
	};
	rna_KeyingSetPaths_add_target_id_ = {
		{&rna_KeyingSetPaths_add_data_path, 	&rna_KeyingSetPaths_add_ksp,
		-1, "target_id", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "Target ID",
		"ID data-block for the destination",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_KeyingSetPaths_add_data_path_ = {
		{&rna_KeyingSetPaths_add_index, 	&rna_KeyingSetPaths_add_target_id,
		-1, "data_path", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Data-Path",
		"RNA-Path to destination property",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};
	rna_KeyingSetPaths_add_index_ = {
		{&rna_KeyingSetPaths_add_group_method, 	&rna_KeyingSetPaths_add_data_path,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"The index of the destination property (i.e. axis of Location/Rotation/etc.), or -1 for the entire array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_KeyingSetPaths_add_group_method_ = {
		{&rna_KeyingSetPaths_add_group_name, 	&rna_KeyingSetPaths_add_index,
		-1, "group_method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grouping Method",
		"Method used to define which Group-name to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_keyingset_path_grouping_items, 3, 2
	};
	rna_KeyingSetPaths_add_group_name_ = {
		{nullptr, 	&rna_KeyingSetPaths_add_group_method,
		-1, "group_name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Group Name",
		"Name of Action Group to assign destination to (only if grouping mode is to use this name)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyingSetPaths_add_ksp, &rna_KeyingSetPaths_add_group_name};
		func->identifier = "add";
		func->flag = 16;
		func->description = "Add a new path for the Keying Set";
		func->call = KeyingSetPaths_add_call;
		func->c_ret = &rna_KeyingSetPaths_add_ksp;
		rna_KeyingSetPaths_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyingSetPaths_remove_path_ = {
		{nullptr, 	nullptr,
		-1, "path", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "Path",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyingSetPath
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyingSetPaths_remove_path, &rna_KeyingSetPaths_remove_path};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove the given path from the Keying Set";
		func->call = KeyingSetPaths_remove_call;
		rna_KeyingSetPaths_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 16;
		func->description = "Remove all the paths from the Keying Set";
		func->call = KeyingSetPaths_clear_call;
		rna_KeyingSetPaths_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Keying Set Path */
static CollectionPropertyRNA rna_KeyingSetPath_rna_properties_;
PropertyRNA &rna_KeyingSetPath_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_rna_properties_);

static PointerPropertyRNA rna_KeyingSetPath_rna_type_;
PropertyRNA &rna_KeyingSetPath_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_rna_type_);

static PointerPropertyRNA rna_KeyingSetPath_id_;
PropertyRNA &rna_KeyingSetPath_id = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_id_);

static EnumPropertyRNA rna_KeyingSetPath_id_type_;
PropertyRNA &rna_KeyingSetPath_id_type = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_id_type_);

static StringPropertyRNA rna_KeyingSetPath_group_;
PropertyRNA &rna_KeyingSetPath_group = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_group_);

static EnumPropertyRNA rna_KeyingSetPath_group_method_;
PropertyRNA &rna_KeyingSetPath_group_method = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_group_method_);

static StringPropertyRNA rna_KeyingSetPath_data_path_;
PropertyRNA &rna_KeyingSetPath_data_path = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_data_path_);

static IntPropertyRNA rna_KeyingSetPath_array_index_;
PropertyRNA &rna_KeyingSetPath_array_index = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_array_index_);

static BoolPropertyRNA rna_KeyingSetPath_use_entire_array_;
PropertyRNA &rna_KeyingSetPath_use_entire_array = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_use_entire_array_);

static BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_needed_;
PropertyRNA &rna_KeyingSetPath_use_insertkey_override_needed = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_use_insertkey_override_needed_);

static BoolPropertyRNA rna_KeyingSetPath_use_insertkey_override_visual_;
PropertyRNA &rna_KeyingSetPath_use_insertkey_override_visual = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_use_insertkey_override_visual_);

static BoolPropertyRNA rna_KeyingSetPath_use_insertkey_needed_;
PropertyRNA &rna_KeyingSetPath_use_insertkey_needed = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_use_insertkey_needed_);

static BoolPropertyRNA rna_KeyingSetPath_use_insertkey_visual_;
PropertyRNA &rna_KeyingSetPath_use_insertkey_visual = reinterpret_cast<PropertyRNA &>(rna_KeyingSetPath_use_insertkey_visual_);

StructRNA *RNA_KeyingSetPath;
void register_struct_KeyingSetPath(BlenderRNA &brna)
{
	rna_KeyingSetPath_rna_properties_ = {
		{&rna_KeyingSetPath_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_rna_properties_begin, KeyingSetPath_rna_properties_next, KeyingSetPath_rna_properties_end, KeyingSetPath_rna_properties_get, nullptr, nullptr, KeyingSetPath_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyingSetPath_rna_type_ = {
		{&rna_KeyingSetPath_id, 	&rna_KeyingSetPath_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyingSetPath_id_ = {
		{&rna_KeyingSetPath_id_type, 	&rna_KeyingSetPath_rna_type,
		-1, "id", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID-Block",
		"ID-Block that keyframes for Keying Set should be added to (for Absolute Keying Sets only)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84803585, rna_ksPath_id_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_id_get, KeyingSetPath_id_set, rna_ksPath_id_typef, nullptr,RNA_ID
	};

	rna_KeyingSetPath_id_type_ = {
		{&rna_KeyingSetPath_group, 	&rna_KeyingSetPath_id,
		-1, "id_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID Type",
		"Type of ID-block that can be used",
		0, "ID",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84803585, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_id_type_get, KeyingSetPath_id_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_id_type_items, 39, 16975
	};

	rna_KeyingSetPath_group_ = {
		{&rna_KeyingSetPath_group_method, 	&rna_KeyingSetPath_id_type,
		-1, "group", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Group Name",
		"Name of Action Group to assign setting(s) for this path to",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 84803585, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_group_get, KeyingSetPath_group_length, KeyingSetPath_group_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_KeyingSetPath_group_method_ = {
		{&rna_KeyingSetPath_data_path, 	&rna_KeyingSetPath_group,
		-1, "group_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Grouping Method",
		"Method used to define which Group-name to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84803585, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(KS_Path, groupmode), RawPropertyType(1), nullptr},
		KeyingSetPath_group_method_get, KeyingSetPath_group_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_keyingset_path_grouping_items, 3, 0
	};

	rna_KeyingSetPath_data_path_ = {
		{&rna_KeyingSetPath_array_index, 	&rna_KeyingSetPath_group_method,
		-1, "data_path", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"Path to property setting",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84803585, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_data_path_get, KeyingSetPath_data_path_length, KeyingSetPath_data_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_KeyingSetPath_array_index_ = {
		{&rna_KeyingSetPath_use_entire_array, 	&rna_KeyingSetPath_data_path,
		-1, "array_index", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "RNA Array Index",
		"Index to the specific setting if applicable",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84803585, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(KS_Path, array_index), RawPropertyType(0), nullptr},
		KeyingSetPath_array_index_get, KeyingSetPath_array_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSetPath_use_entire_array_ = {
		{&rna_KeyingSetPath_use_insertkey_override_needed, 	&rna_KeyingSetPath_array_index,
		-1, "use_entire_array", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Entire Array",
		"When an \'array/vector\' type is chosen (Location, Rotation, Color, etc.), entire array is to be used",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84803585, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_use_entire_array_get, KeyingSetPath_use_entire_array_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSetPath_use_insertkey_override_needed_ = {
		{&rna_KeyingSetPath_use_insertkey_override_visual, 	&rna_KeyingSetPath_use_entire_array,
		-1, "use_insertkey_override_needed", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Insert Keyframes Default- Only Needed",
		"Override default setting to only insert keyframes where they\'re needed in the relevant F-Curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_use_insertkey_override_needed_get, KeyingSetPath_use_insertkey_override_needed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSetPath_use_insertkey_override_visual_ = {
		{&rna_KeyingSetPath_use_insertkey_needed, 	&rna_KeyingSetPath_use_insertkey_override_needed,
		-1, "use_insertkey_override_visual", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Insert Keyframes Default - Visual",
		"Override default setting to insert keyframes based on \'visual transforms\'",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_use_insertkey_override_visual_get, KeyingSetPath_use_insertkey_override_visual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSetPath_use_insertkey_needed_ = {
		{&rna_KeyingSetPath_use_insertkey_visual, 	&rna_KeyingSetPath_use_insertkey_override_visual,
		-1, "use_insertkey_needed", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Insert Keyframes - Only Needed",
		"Only insert keyframes where they\'re needed in the relevant F-Curves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_use_insertkey_needed_get, KeyingSetPath_use_insertkey_needed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_KeyingSetPath_use_insertkey_visual_ = {
		{nullptr, 	&rna_KeyingSetPath_use_insertkey_needed,
		-1, "use_insertkey_visual", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Insert Keyframes - Visual",
		"Insert keyframes based on \'visual transforms\'",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetPath_use_insertkey_visual_get, KeyingSetPath_use_insertkey_visual_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_KeyingSetPath;
	srna->cont.properties = {&rna_KeyingSetPath_rna_properties, &rna_KeyingSetPath_use_insertkey_visual};
	srna->identifier = "KeyingSetPath";
	srna->flag = 516;
	srna->name = "Keying Set Path";
	srna->description = "Path to a setting for use in a Keying Set";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_KeyingSetPath_data_path;
	srna->iteratorproperty = &rna_KeyingSetPath_rna_properties;
};

/* Keying Set Info */
static CollectionPropertyRNA rna_KeyingSetInfo_rna_properties_;
PropertyRNA &rna_KeyingSetInfo_rna_properties = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_rna_properties_);

static PointerPropertyRNA rna_KeyingSetInfo_rna_type_;
PropertyRNA &rna_KeyingSetInfo_rna_type = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_rna_type_);

static StringPropertyRNA rna_KeyingSetInfo_bl_idname_;
PropertyRNA &rna_KeyingSetInfo_bl_idname = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_bl_idname_);

static StringPropertyRNA rna_KeyingSetInfo_bl_label_;
PropertyRNA &rna_KeyingSetInfo_bl_label = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_bl_label_);

static StringPropertyRNA rna_KeyingSetInfo_bl_description_;
PropertyRNA &rna_KeyingSetInfo_bl_description = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_bl_description_);

static EnumPropertyRNA rna_KeyingSetInfo_bl_options_;
PropertyRNA &rna_KeyingSetInfo_bl_options = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_bl_options_);

static BoolPropertyRNA rna_KeyingSetInfo_poll_ok_;
PropertyRNA &rna_KeyingSetInfo_poll_ok = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_poll_ok_);

static PointerPropertyRNA rna_KeyingSetInfo_poll_context_;
PropertyRNA &rna_KeyingSetInfo_poll_context = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_poll_context_);

FunctionRNA *rna_KeyingSetInfo_poll_func;
static PointerPropertyRNA rna_KeyingSetInfo_iterator_context_;
PropertyRNA &rna_KeyingSetInfo_iterator_context = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_iterator_context_);

static PointerPropertyRNA rna_KeyingSetInfo_iterator_ks_;
PropertyRNA &rna_KeyingSetInfo_iterator_ks = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_iterator_ks_);

FunctionRNA *rna_KeyingSetInfo_iterator_func;
static PointerPropertyRNA rna_KeyingSetInfo_generate_context_;
PropertyRNA &rna_KeyingSetInfo_generate_context = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_generate_context_);

static PointerPropertyRNA rna_KeyingSetInfo_generate_ks_;
PropertyRNA &rna_KeyingSetInfo_generate_ks = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_generate_ks_);

static PointerPropertyRNA rna_KeyingSetInfo_generate_data_;
PropertyRNA &rna_KeyingSetInfo_generate_data = reinterpret_cast<PropertyRNA &>(rna_KeyingSetInfo_generate_data_);

FunctionRNA *rna_KeyingSetInfo_generate_func;
StructRNA *RNA_KeyingSetInfo;
void register_struct_KeyingSetInfo(BlenderRNA &brna)
{
	rna_KeyingSetInfo_rna_properties_ = {
		{&rna_KeyingSetInfo_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetInfo_rna_properties_begin, KeyingSetInfo_rna_properties_next, KeyingSetInfo_rna_properties_end, KeyingSetInfo_rna_properties_get, nullptr, nullptr, KeyingSetInfo_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_KeyingSetInfo_rna_type_ = {
		{&rna_KeyingSetInfo_bl_idname, 	&rna_KeyingSetInfo_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetInfo_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_KeyingSetInfo_bl_idname_ = {
		{&rna_KeyingSetInfo_bl_label, 	&rna_KeyingSetInfo_rna_type,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID Name",
		"If this is set, the Keying Set gets a custom ID, otherwise it takes the name of the class used to define the Keying Set (for example, if the class name is \"BUILTIN_KSI_location\", and bl_idname is not set by the script, then bl_idname = \"BUILTIN_KSI_location\")",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetInfo_bl_idname_get, KeyingSetInfo_bl_idname_length, KeyingSetInfo_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_KeyingSetInfo_bl_label_ = {
		{&rna_KeyingSetInfo_bl_description, 	&rna_KeyingSetInfo_bl_idname,
		-1, "bl_label", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "UI Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetInfo_bl_label_get, KeyingSetInfo_bl_label_length, KeyingSetInfo_bl_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_KeyingSetInfo_bl_description_ = {
		{&rna_KeyingSetInfo_bl_options, 	&rna_KeyingSetInfo_bl_label,
		-1, "bl_description", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "Description",
		"A short description of the keying set",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetInfo_bl_description_get, KeyingSetInfo_bl_description_length, KeyingSetInfo_bl_description_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_KeyingSetInfo_bl_options_ = {
		{nullptr, 	&rna_KeyingSetInfo_bl_description,
		-1, "bl_options", 2097203, 0, 0, 0, 0, PropertyPathTemplateType(0), "Options",
		"Keying Set options to use when inserting keyframes",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		KeyingSetInfo_bl_options_get, KeyingSetInfo_bl_options_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_keying_flag_items, 2, 0
	};

	StructRNA *srna = RNA_KeyingSetInfo;
	srna->cont.properties = {&rna_KeyingSetInfo_rna_properties, &rna_KeyingSetInfo_bl_options};
	srna->identifier = "KeyingSetInfo";
	srna->flag = 516;
	srna->name = "Keying Set Info";
	srna->description = "Callback function defines for builtin Keying Sets";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_KeyingSetInfo_bl_label;
	srna->iteratorproperty = &rna_KeyingSetInfo_rna_properties;
	srna->refine = rna_KeyingSetInfo_refine;
	srna->reg = rna_KeyingSetInfo_register;
	srna->unreg = rna_KeyingSetInfo_unregister;
	{
	rna_KeyingSetInfo_poll_ok_ = {
		{&rna_KeyingSetInfo_poll_context, 	nullptr,
		-1, "ok", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_KeyingSetInfo_poll_context_ = {
		{nullptr, 	&rna_KeyingSetInfo_poll_ok,
		-1, "context", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The context",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyingSetInfo_poll_ok, &rna_KeyingSetInfo_poll_context};
		func->identifier = "poll";
		func->flag = 32;
		func->description = "Test if Keying Set can be used or not";
		func->c_ret = &rna_KeyingSetInfo_poll_ok;
		rna_KeyingSetInfo_poll_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyingSetInfo_iterator_context_ = {
		{&rna_KeyingSetInfo_iterator_ks, 	nullptr,
		-1, "context", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The context",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_KeyingSetInfo_iterator_ks_ = {
		{nullptr, 	&rna_KeyingSetInfo_iterator_context,
		-1, "ks", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Keying set this iterator runs on",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyingSet
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyingSetInfo_iterator_context, &rna_KeyingSetInfo_iterator_ks};
		func->identifier = "iterator";
		func->flag = 32;
		func->description = "Call generate() on the structs which have properties to be keyframed";
		rna_KeyingSetInfo_iterator_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_KeyingSetInfo_generate_context_ = {
		{&rna_KeyingSetInfo_generate_ks, 	nullptr,
		-1, "context", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The context",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_KeyingSetInfo_generate_ks_ = {
		{&rna_KeyingSetInfo_generate_data, 	&rna_KeyingSetInfo_generate_context,
		-1, "ks", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Keying set to add paths to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyingSet
	};
	rna_KeyingSetInfo_generate_data_ = {
		{nullptr, 	&rna_KeyingSetInfo_generate_ks,
		-1, "data", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Data to add paths from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnyType
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_KeyingSetInfo_generate_context, &rna_KeyingSetInfo_generate_data};
		func->identifier = "generate";
		func->flag = 32;
		func->description = "Add Paths to the Keying Set to keyframe the properties of the given data";
		rna_KeyingSetInfo_generate_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
