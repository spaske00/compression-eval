
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

#include "rna_nla.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_NlaTrack_rna_properties;
extern PropertyRNA &rna_NlaTrack_rna_type;
extern PropertyRNA &rna_NlaTrack_strips;
extern PropertyRNA &rna_NlaTrack_is_override_data;
extern PropertyRNA &rna_NlaTrack_name;
extern PropertyRNA &rna_NlaTrack_active;
extern PropertyRNA &rna_NlaTrack_is_solo;
extern PropertyRNA &rna_NlaTrack_select;
extern PropertyRNA &rna_NlaTrack_mute;
extern PropertyRNA &rna_NlaTrack_lock;


extern PropertyRNA &rna_NlaStrips_rna_properties;
extern PropertyRNA &rna_NlaStrips_rna_type;

extern FunctionRNA *rna_NlaStrips_new_func;
extern PropertyRNA &rna_NlaStrips_new_name;
extern PropertyRNA &rna_NlaStrips_new_start;
extern PropertyRNA &rna_NlaStrips_new_action;
extern PropertyRNA &rna_NlaStrips_new_strip;

extern FunctionRNA *rna_NlaStrips_remove_func;
extern PropertyRNA &rna_NlaStrips_remove_strip;



extern PropertyRNA &rna_NlaStrip_rna_properties;
extern PropertyRNA &rna_NlaStrip_rna_type;
extern PropertyRNA &rna_NlaStrip_name;
extern PropertyRNA &rna_NlaStrip_type;
extern PropertyRNA &rna_NlaStrip_extrapolation;
extern PropertyRNA &rna_NlaStrip_blend_type;
extern PropertyRNA &rna_NlaStrip_frame_start;
extern PropertyRNA &rna_NlaStrip_frame_end;
extern PropertyRNA &rna_NlaStrip_frame_start_raw;
extern PropertyRNA &rna_NlaStrip_frame_end_raw;
extern PropertyRNA &rna_NlaStrip_frame_start_ui;
extern PropertyRNA &rna_NlaStrip_frame_end_ui;
extern PropertyRNA &rna_NlaStrip_blend_in;
extern PropertyRNA &rna_NlaStrip_blend_out;
extern PropertyRNA &rna_NlaStrip_use_auto_blend;
extern PropertyRNA &rna_NlaStrip_action;
extern PropertyRNA &rna_NlaStrip_action_slot_handle;
extern PropertyRNA &rna_NlaStrip_last_slot_identifier;
extern PropertyRNA &rna_NlaStrip_action_slot;
extern PropertyRNA &rna_NlaStrip_action_suitable_slots;
extern PropertyRNA &rna_NlaStrip_action_frame_start;
extern PropertyRNA &rna_NlaStrip_action_frame_end;
extern PropertyRNA &rna_NlaStrip_repeat;
extern PropertyRNA &rna_NlaStrip_scale;
extern PropertyRNA &rna_NlaStrip_fcurves;
extern PropertyRNA &rna_NlaStrip_modifiers;
extern PropertyRNA &rna_NlaStrip_strips;
extern PropertyRNA &rna_NlaStrip_influence;
extern PropertyRNA &rna_NlaStrip_strip_time;
extern PropertyRNA &rna_NlaStrip_use_animated_influence;
extern PropertyRNA &rna_NlaStrip_use_animated_time;
extern PropertyRNA &rna_NlaStrip_use_animated_time_cyclic;
extern PropertyRNA &rna_NlaStrip_active;
extern PropertyRNA &rna_NlaStrip_select;
extern PropertyRNA &rna_NlaStrip_mute;
extern PropertyRNA &rna_NlaStrip_use_reverse;
extern PropertyRNA &rna_NlaStrip_use_sync_length;


extern PropertyRNA &rna_NlaStripFCurves_rna_properties;
extern PropertyRNA &rna_NlaStripFCurves_rna_type;

extern FunctionRNA *rna_NlaStripFCurves_find_func;
extern PropertyRNA &rna_NlaStripFCurves_find_data_path;
extern PropertyRNA &rna_NlaStripFCurves_find_index;
extern PropertyRNA &rna_NlaStripFCurves_find_fcurve;


static PointerRNA NlaTrack_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void NlaTrack_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaTrack_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaTrack_rna_properties_get(iter);
    }
}

void NlaTrack_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaTrack_rna_properties_get(iter);
    }
}

void NlaTrack_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaTrack_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA NlaTrack_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA NlaTrack_strips_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_NlaStrip, rna_iterator_listbase_get(iter));
}

void NlaTrack_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaTrack_strips;

    rna_iterator_listbase_begin(iter, ptr, &data->strips, nullptr);

    if (iter->valid) {
        iter->ptr = NlaTrack_strips_get(iter);
    }
}

void NlaTrack_strips_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaTrack_strips_get(iter);
    }
}

void NlaTrack_strips_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaTrack_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    NlaTrack_strips_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaTrack_strips_get(&iter); }
    }

    NlaTrack_strips_end(&iter);

    return found;
}

int NlaStrip_name_length(PointerRNA *);
void NlaStrip_name_get(PointerRNA *, char *);

bool NlaTrack_strips_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    NlaTrack_strips_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaStrip_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaStrip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                NlaStrip_name_get(&iter.ptr, name);
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
        NlaTrack_strips_next(&iter);
    }
    NlaTrack_strips_end(&iter);

    return found;
}

bool NlaTrack_is_override_data_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return !((uint64_t(data->flag) & 65536) != 0);
}

void NlaTrack_name_get(PointerRNA *ptr, char *value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int NlaTrack_name_length(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return strlen(data->name);
}

void NlaTrack_name_set(PointerRNA *ptr, const char *value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

bool NlaTrack_active_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

bool NlaTrack_is_solo_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void NlaTrack_is_solo_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NlaTrack_solo_set;
    fn(ptr, value);
}

bool NlaTrack_select_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void NlaTrack_select_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool NlaTrack_mute_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void NlaTrack_mute_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool NlaTrack_lock_get(PointerRNA *ptr)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void NlaTrack_lock_set(PointerRNA *ptr, bool value)
{
    NlaTrack *data = (NlaTrack *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

static PointerRNA NlaStrips_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void NlaStrips_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaStrips_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStrips_rna_properties_get(iter);
    }
}

void NlaStrips_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaStrips_rna_properties_get(iter);
    }
}

void NlaStrips_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaStrips_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA NlaStrips_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA NlaStrip_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void NlaStrip_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaStrip_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_rna_properties_get(iter);
    }
}

void NlaStrip_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_rna_properties_get(iter);
    }
}

void NlaStrip_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaStrip_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA NlaStrip_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void NlaStrip_name_get(PointerRNA *ptr, char *value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int NlaStrip_name_length(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return strlen(data->name);
}

void NlaStrip_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_NlaStrip_name_set;
    fn(ptr, value);
}

int NlaStrip_type_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->type);
}

int NlaStrip_extrapolation_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->extendmode);
}

void NlaStrip_extrapolation_set(PointerRNA *ptr, int value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->extendmode = (std::remove_reference_t<decltype(data->extendmode)>)value;
}

int NlaStrip_blend_type_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->blendmode);
}

void NlaStrip_blend_type_set(PointerRNA *ptr, int value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->blendmode = (std::remove_reference_t<decltype(data->blendmode)>)value;
}

float NlaStrip_frame_start_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->start);
}

void NlaStrip_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_start_frame_set;
    fn(ptr, value);
}

float NlaStrip_frame_end_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->end);
}

void NlaStrip_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_end_frame_set;
    fn(ptr, value);
}

float NlaStrip_frame_start_raw_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->start);
}

void NlaStrip_frame_start_raw_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->start = (std::remove_reference_t<decltype(data->start)>)value;
}

float NlaStrip_frame_end_raw_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->end);
}

void NlaStrip_frame_end_raw_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->end = (std::remove_reference_t<decltype(data->end)>)value;
}

float NlaStrip_frame_start_ui_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->start);
}

void NlaStrip_frame_start_ui_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_frame_start_ui_set;
    fn(ptr, value);
}

float NlaStrip_frame_end_ui_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->end);
}

void NlaStrip_frame_end_ui_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_frame_end_ui_set;
    fn(ptr, value);
}

float NlaStrip_blend_in_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->blendin);
}

void NlaStrip_blend_in_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_blend_in_set;
    fn(ptr, value);
}

float NlaStrip_blend_out_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->blendout);
}

void NlaStrip_blend_out_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_blend_out_set;
    fn(ptr, value);
}

bool NlaStrip_use_auto_blend_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void NlaStrip_use_auto_blend_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NlaStrip_use_auto_blend_set;
    fn(ptr, value);
}

PointerRNA NlaStrip_action_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Action, data->act);
}

void NlaStrip_action_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_NlaStrip_action_set;
    fn(ptr, value, reports);
}

int NlaStrip_action_slot_handle_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (int)(data->action_slot_handle);
}

void NlaStrip_action_slot_handle_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_NlaStrip_action_slot_handle_set;
    fn(ptr, value);
}

void NlaStrip_last_slot_identifier_get(PointerRNA *ptr, char *value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    BLI_assert(strlen(data->last_slot_identifier) < 258);
    strcpy(value, data->last_slot_identifier);
}

int NlaStrip_last_slot_identifier_length(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return strlen(data->last_slot_identifier);
}

void NlaStrip_last_slot_identifier_set(PointerRNA *ptr, const char *value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    BLI_strncpy_utf8(data->last_slot_identifier, value, 258);
}

PointerRNA NlaStrip_action_slot_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_NlaStrip_action_slot_get;
    return fn(ptr);
}

void NlaStrip_action_slot_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_NlaStrip_action_slot_set;
    fn(ptr, value, reports);
}

static PointerRNA NlaStrip_action_suitable_slots_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ActionSlot, rna_iterator_array_dereference_get(iter));
}

void NlaStrip_action_suitable_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaStrip_action_suitable_slots;

    PropCollectionBeginFunc fn = rna_iterator_nlastrip_action_suitable_slots_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_action_suitable_slots_get(iter);
    }
}

void NlaStrip_action_suitable_slots_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_action_suitable_slots_get(iter);
    }
}

void NlaStrip_action_suitable_slots_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool NlaStrip_action_suitable_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    NlaStrip_action_suitable_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_action_suitable_slots_get(&iter); }
    }

    NlaStrip_action_suitable_slots_end(&iter);

    return found;
}

float NlaStrip_action_frame_start_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->actstart);
}

void NlaStrip_action_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_action_start_frame_set;
    fn(ptr, value);
}

float NlaStrip_action_frame_end_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->actend);
}

void NlaStrip_action_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_action_end_frame_set;
    fn(ptr, value);
}

float NlaStrip_repeat_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->repeat);
}

void NlaStrip_repeat_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_repeat_set;
    fn(ptr, value);
}

float NlaStrip_scale_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->scale);
}

void NlaStrip_scale_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_NlaStrip_scale_set;
    fn(ptr, value);
}

static PointerRNA NlaStrip_fcurves_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FCurve, rna_iterator_listbase_get(iter));
}

void NlaStrip_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaStrip_fcurves;

    rna_iterator_listbase_begin(iter, ptr, &data->fcurves, nullptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_fcurves_get(iter);
    }
}

void NlaStrip_fcurves_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_fcurves_get(iter);
    }
}

void NlaStrip_fcurves_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaStrip_fcurves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    NlaStrip_fcurves_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_fcurves_get(&iter); }
    }

    NlaStrip_fcurves_end(&iter);

    return found;
}

static PointerRNA NlaStrip_modifiers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FModifier, rna_iterator_listbase_get(iter));
}

void NlaStrip_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaStrip_modifiers;

    rna_iterator_listbase_begin(iter, ptr, &data->modifiers, nullptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_modifiers_get(iter);
    }
}

void NlaStrip_modifiers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_modifiers_get(iter);
    }
}

void NlaStrip_modifiers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaStrip_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    NlaStrip_modifiers_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_modifiers_get(&iter); }
    }

    NlaStrip_modifiers_end(&iter);

    return found;
}

int FModifier_name_length(PointerRNA *);
void FModifier_name_get(PointerRNA *, char *);

bool NlaStrip_modifiers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    NlaStrip_modifiers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = FModifier_name_length(&iter.ptr);
            if (namelen < 1024) {
                FModifier_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                FModifier_name_get(&iter.ptr, name);
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
        NlaStrip_modifiers_next(&iter);
    }
    NlaStrip_modifiers_end(&iter);

    return found;
}

static PointerRNA NlaStrip_strips_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_NlaStrip, rna_iterator_listbase_get(iter));
}

void NlaStrip_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaStrip_strips;

    rna_iterator_listbase_begin(iter, ptr, &data->strips, nullptr);

    if (iter->valid) {
        iter->ptr = NlaStrip_strips_get(iter);
    }
}

void NlaStrip_strips_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaStrip_strips_get(iter);
    }
}

void NlaStrip_strips_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaStrip_strips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    NlaStrip_strips_begin(&iter, ptr);

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
        if (found) { *r_ptr = NlaStrip_strips_get(&iter); }
    }

    NlaStrip_strips_end(&iter);

    return found;
}

int NlaStrip_name_length(PointerRNA *);
void NlaStrip_name_get(PointerRNA *, char *);

bool NlaStrip_strips_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    NlaStrip_strips_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = NlaStrip_name_length(&iter.ptr);
            if (namelen < 1024) {
                NlaStrip_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                NlaStrip_name_get(&iter.ptr, name);
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
        NlaStrip_strips_next(&iter);
    }
    NlaStrip_strips_end(&iter);

    return found;
}

float NlaStrip_influence_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->influence);
}

void NlaStrip_influence_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->influence = (std::remove_reference_t<decltype(data->influence)>)std::clamp(value, 0.0f, 1.0f);
}

float NlaStrip_strip_time_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return (float)(data->strip_time);
}

void NlaStrip_strip_time_set(PointerRNA *ptr, float value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    data->strip_time = (std::remove_reference_t<decltype(data->strip_time)>)value;
}

bool NlaStrip_use_animated_influence_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void NlaStrip_use_animated_influence_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NlaStrip_animated_influence_set;
    fn(ptr, value);
}

bool NlaStrip_use_animated_time_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void NlaStrip_use_animated_time_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_NlaStrip_animated_time_set;
    fn(ptr, value);
}

bool NlaStrip_use_animated_time_cyclic_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void NlaStrip_use_animated_time_cyclic_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool NlaStrip_active_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

bool NlaStrip_select_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void NlaStrip_select_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool NlaStrip_mute_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void NlaStrip_mute_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool NlaStrip_use_reverse_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void NlaStrip_use_reverse_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool NlaStrip_use_sync_length_get(PointerRNA *ptr)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void NlaStrip_use_sync_length_set(PointerRNA *ptr, bool value)
{
    NlaStrip *data = (NlaStrip *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

static PointerRNA NlaStripFCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void NlaStripFCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_NlaStripFCurves_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = NlaStripFCurves_rna_properties_get(iter);
    }
}

void NlaStripFCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = NlaStripFCurves_rna_properties_get(iter);
    }
}

void NlaStripFCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool NlaStripFCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA NlaStripFCurves_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}


NlaStrip *NlaStrips_new_func(ID *_selfid, NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, const char * name, int start, bAction *action)
{
	return rna_NlaStrip_new(_selfid, _self, bmain, C, reports, name, start, action);
}

static void NlaStrips_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	NlaTrack *_self;
	const char * name;
	int start;
	bAction *action;
	NlaStrip *strip;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (NlaTrack *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	start = *((int *)_data);
	_data += 8;
	action = *((bAction **)_data);
	_data += 8;
	_retdata = _data;
	
	strip = rna_NlaStrip_new(_selfid, _self, CTX_data_main(C), C, reports, name, start, action);
	*((NlaStrip **)_retdata) = strip;
}

void NlaStrips_remove_func(ID *_selfid, NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, PointerRNA *strip)
{
	rna_NlaStrip_remove(_selfid, _self, bmain, C, reports, strip);
}

static void NlaStrips_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	NlaTrack *_self;
	PointerRNA *strip;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (NlaTrack *)_ptr->data;
	_data = (char *)_parms->data;
	strip = *((PointerRNA **)_data);
	
	rna_NlaStrip_remove(_selfid, _self, CTX_data_main(C), C, reports, strip);
}

/* Repeated prototypes to detect errors */

NlaStrip *rna_NlaStrip_new(ID *_selfid, NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, const char * name, int start, bAction *action);
void rna_NlaStrip_remove(ID *_selfid, NlaTrack *_self, Main *bmain, bContext *C, ReportList *reports, PointerRNA *strip);


FCurve *NlaStripFCurves_find_func(NlaStrip *_self, ReportList *reports, const char * data_path, int index)
{
	return rna_NlaStrip_fcurve_find(_self, reports, data_path, index);
}

static void NlaStripFCurves_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	NlaStrip *_self;
	const char * data_path;
	int index;
	FCurve *fcurve;
	char *_data, *_retdata;
	
	_self = (NlaStrip *)_ptr->data;
	_data = (char *)_parms->data;
	data_path = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	fcurve = rna_NlaStrip_fcurve_find(_self, reports, data_path, index);
	*((FCurve **)_retdata) = fcurve;
}

/* Repeated prototypes to detect errors */

FCurve *rna_NlaStrip_fcurve_find(NlaStrip *_self, ReportList *reports, const char * data_path, int index);

/* NLA Track */
static CollectionPropertyRNA rna_NlaTrack_rna_properties_;
PropertyRNA &rna_NlaTrack_rna_properties = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_rna_properties_);

static PointerPropertyRNA rna_NlaTrack_rna_type_;
PropertyRNA &rna_NlaTrack_rna_type = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_rna_type_);

static CollectionPropertyRNA rna_NlaTrack_strips_;
PropertyRNA &rna_NlaTrack_strips = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_strips_);

static BoolPropertyRNA rna_NlaTrack_is_override_data_;
PropertyRNA &rna_NlaTrack_is_override_data = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_is_override_data_);

static StringPropertyRNA rna_NlaTrack_name_;
PropertyRNA &rna_NlaTrack_name = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_name_);

static BoolPropertyRNA rna_NlaTrack_active_;
PropertyRNA &rna_NlaTrack_active = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_active_);

static BoolPropertyRNA rna_NlaTrack_is_solo_;
PropertyRNA &rna_NlaTrack_is_solo = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_is_solo_);

static BoolPropertyRNA rna_NlaTrack_select_;
PropertyRNA &rna_NlaTrack_select = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_select_);

static BoolPropertyRNA rna_NlaTrack_mute_;
PropertyRNA &rna_NlaTrack_mute = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_mute_);

static BoolPropertyRNA rna_NlaTrack_lock_;
PropertyRNA &rna_NlaTrack_lock = reinterpret_cast<PropertyRNA &>(rna_NlaTrack_lock_);

StructRNA *RNA_NlaTrack;
void register_struct_NlaTrack(BlenderRNA &brna)
{
	rna_NlaTrack_rna_properties_ = {
		{&rna_NlaTrack_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_rna_properties_begin, NlaTrack_rna_properties_next, NlaTrack_rna_properties_end, NlaTrack_rna_properties_get, nullptr, nullptr, NlaTrack_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_NlaTrack_rna_type_ = {
		{&rna_NlaTrack_strips, 	&rna_NlaTrack_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_NlaTrack_strips_ = {
		{&rna_NlaTrack_is_override_data, 	&rna_NlaTrack_rna_type,
		-1, "strips", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "NLA Strips",
		"NLA Strips on this NLA-track",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_NlaStrips},
		NlaTrack_strips_begin, NlaTrack_strips_next, NlaTrack_strips_end, NlaTrack_strips_get, nullptr, NlaTrack_strips_lookup_int, NlaTrack_strips_lookup_string, nullptr, RNA_NlaStrip
	};

	rna_NlaTrack_is_override_data_ = {
		{&rna_NlaTrack_name, 	&rna_NlaTrack_strips,
		-1, "is_override_data", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Override Track",
		"In a local override data, whether this NLA track comes from the linked reference data, or is local to the override",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_is_override_data_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_NlaTrack_name_ = {
		{&rna_NlaTrack_active, 	&rna_NlaTrack_is_override_data,
		-1, "name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_name_get, NlaTrack_name_length, NlaTrack_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_NlaTrack_active_ = {
		{&rna_NlaTrack_is_solo, 	&rna_NlaTrack_name,
		-1, "active", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"NLA Track is active",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_active_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaTrack_is_solo_ = {
		{&rna_NlaTrack_select, 	&rna_NlaTrack_active,
		-1, "is_solo", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Solo",
		"NLA Track is evaluated itself (i.e. active Action and all other NLA Tracks in the same AnimData block are disabled)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_is_solo_get, NlaTrack_is_solo_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaTrack_select_ = {
		{&rna_NlaTrack_mute, 	&rna_NlaTrack_is_solo,
		-1, "select", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"NLA Track is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_select_get, NlaTrack_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaTrack_mute_ = {
		{&rna_NlaTrack_lock, 	&rna_NlaTrack_select,
		-1, "mute", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Muted",
		"Disable NLA Track evaluation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_mute_get, NlaTrack_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaTrack_lock_ = {
		{nullptr, 	&rna_NlaTrack_mute,
		-1, "lock", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Locked",
		"NLA Track is locked",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaTrack_lock_get, NlaTrack_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_NlaTrack;
	srna->cont.properties = {&rna_NlaTrack_rna_properties, &rna_NlaTrack_lock};
	srna->identifier = "NlaTrack";
	srna->flag = 516;
	srna->name = "NLA Track";
	srna->description = "An animation layer containing Actions referenced as NLA strips";
	srna->translation_context = "*";
	srna->icon = 142;
	srna->nameproperty = &rna_NlaTrack_name;
	srna->iteratorproperty = &rna_NlaTrack_rna_properties;
	srna->path = rna_NlaTrack_path;
};

/* NLA Strips */
static CollectionPropertyRNA rna_NlaStrips_rna_properties_;
PropertyRNA &rna_NlaStrips_rna_properties = reinterpret_cast<PropertyRNA &>(rna_NlaStrips_rna_properties_);

static PointerPropertyRNA rna_NlaStrips_rna_type_;
PropertyRNA &rna_NlaStrips_rna_type = reinterpret_cast<PropertyRNA &>(rna_NlaStrips_rna_type_);

static StringPropertyRNA rna_NlaStrips_new_name_;
PropertyRNA &rna_NlaStrips_new_name = reinterpret_cast<PropertyRNA &>(rna_NlaStrips_new_name_);

static IntPropertyRNA rna_NlaStrips_new_start_;
PropertyRNA &rna_NlaStrips_new_start = reinterpret_cast<PropertyRNA &>(rna_NlaStrips_new_start_);

static PointerPropertyRNA rna_NlaStrips_new_action_;
PropertyRNA &rna_NlaStrips_new_action = reinterpret_cast<PropertyRNA &>(rna_NlaStrips_new_action_);

static PointerPropertyRNA rna_NlaStrips_new_strip_;
PropertyRNA &rna_NlaStrips_new_strip = reinterpret_cast<PropertyRNA &>(rna_NlaStrips_new_strip_);

FunctionRNA *rna_NlaStrips_new_func;
static PointerPropertyRNA rna_NlaStrips_remove_strip_;
PropertyRNA &rna_NlaStrips_remove_strip = reinterpret_cast<PropertyRNA &>(rna_NlaStrips_remove_strip_);

FunctionRNA *rna_NlaStrips_remove_func;
StructRNA *RNA_NlaStrips;
void register_struct_NlaStrips(BlenderRNA &brna)
{
	rna_NlaStrips_rna_properties_ = {
		{&rna_NlaStrips_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrips_rna_properties_begin, NlaStrips_rna_properties_next, NlaStrips_rna_properties_end, NlaStrips_rna_properties_get, nullptr, nullptr, NlaStrips_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_NlaStrips_rna_type_ = {
		{nullptr, 	&rna_NlaStrips_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrips_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_NlaStrips;
	srna->cont.properties = {&rna_NlaStrips_rna_properties, &rna_NlaStrips_rna_type};
	srna->identifier = "NlaStrips";
	srna->flag = 516;
	srna->name = "NLA Strips";
	srna->description = "Collection of NLA Strips";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_NlaStrips_rna_properties;
	{
	rna_NlaStrips_new_name_ = {
		{&rna_NlaStrips_new_start, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Name for the NLA Strip",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "NlaStrip"
	};
	rna_NlaStrips_new_start_ = {
		{&rna_NlaStrips_new_action, 	&rna_NlaStrips_new_name,
		-1, "start", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"Start frame for this strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_NlaStrips_new_action_ = {
		{&rna_NlaStrips_new_strip, 	&rna_NlaStrips_new_start,
		-1, "action", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Action to assign to this strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Action
	};
	rna_NlaStrips_new_strip_ = {
		{nullptr, 	&rna_NlaStrips_new_action,
		-1, "strip", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New NLA Strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_NlaStrip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NlaStrips_new_name, &rna_NlaStrips_new_strip};
		func->identifier = "new";
		func->flag = 2076;
		func->description = "Add a new Action-Clip strip to the track";
		func->call = NlaStrips_new_call;
		func->c_ret = &rna_NlaStrips_new_strip;
		rna_NlaStrips_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_NlaStrips_remove_strip_ = {
		{nullptr, 	nullptr,
		-1, "strip", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"NLA Strip to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_NlaStrip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NlaStrips_remove_strip, &rna_NlaStrips_remove_strip};
		func->identifier = "remove";
		func->flag = 2076;
		func->description = "Remove a NLA Strip";
		func->call = NlaStrips_remove_call;
		rna_NlaStrips_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* NLA Strip */
static CollectionPropertyRNA rna_NlaStrip_rna_properties_;
PropertyRNA &rna_NlaStrip_rna_properties = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_rna_properties_);

static PointerPropertyRNA rna_NlaStrip_rna_type_;
PropertyRNA &rna_NlaStrip_rna_type = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_rna_type_);

static StringPropertyRNA rna_NlaStrip_name_;
PropertyRNA &rna_NlaStrip_name = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_name_);

static EnumPropertyRNA rna_NlaStrip_type_;
PropertyRNA &rna_NlaStrip_type = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_type_);

static EnumPropertyRNA rna_NlaStrip_extrapolation_;
PropertyRNA &rna_NlaStrip_extrapolation = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_extrapolation_);

static EnumPropertyRNA rna_NlaStrip_blend_type_;
PropertyRNA &rna_NlaStrip_blend_type = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_blend_type_);

static FloatPropertyRNA rna_NlaStrip_frame_start_;
PropertyRNA &rna_NlaStrip_frame_start = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_frame_start_);

static FloatPropertyRNA rna_NlaStrip_frame_end_;
PropertyRNA &rna_NlaStrip_frame_end = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_frame_end_);

static FloatPropertyRNA rna_NlaStrip_frame_start_raw_;
PropertyRNA &rna_NlaStrip_frame_start_raw = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_frame_start_raw_);

static FloatPropertyRNA rna_NlaStrip_frame_end_raw_;
PropertyRNA &rna_NlaStrip_frame_end_raw = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_frame_end_raw_);

static FloatPropertyRNA rna_NlaStrip_frame_start_ui_;
PropertyRNA &rna_NlaStrip_frame_start_ui = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_frame_start_ui_);

static FloatPropertyRNA rna_NlaStrip_frame_end_ui_;
PropertyRNA &rna_NlaStrip_frame_end_ui = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_frame_end_ui_);

static FloatPropertyRNA rna_NlaStrip_blend_in_;
PropertyRNA &rna_NlaStrip_blend_in = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_blend_in_);

static FloatPropertyRNA rna_NlaStrip_blend_out_;
PropertyRNA &rna_NlaStrip_blend_out = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_blend_out_);

static BoolPropertyRNA rna_NlaStrip_use_auto_blend_;
PropertyRNA &rna_NlaStrip_use_auto_blend = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_use_auto_blend_);

static PointerPropertyRNA rna_NlaStrip_action_;
PropertyRNA &rna_NlaStrip_action = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_action_);

static IntPropertyRNA rna_NlaStrip_action_slot_handle_;
PropertyRNA &rna_NlaStrip_action_slot_handle = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_action_slot_handle_);

static StringPropertyRNA rna_NlaStrip_last_slot_identifier_;
PropertyRNA &rna_NlaStrip_last_slot_identifier = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_last_slot_identifier_);

static PointerPropertyRNA rna_NlaStrip_action_slot_;
PropertyRNA &rna_NlaStrip_action_slot = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_action_slot_);

static CollectionPropertyRNA rna_NlaStrip_action_suitable_slots_;
PropertyRNA &rna_NlaStrip_action_suitable_slots = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_action_suitable_slots_);

static FloatPropertyRNA rna_NlaStrip_action_frame_start_;
PropertyRNA &rna_NlaStrip_action_frame_start = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_action_frame_start_);

static FloatPropertyRNA rna_NlaStrip_action_frame_end_;
PropertyRNA &rna_NlaStrip_action_frame_end = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_action_frame_end_);

static FloatPropertyRNA rna_NlaStrip_repeat_;
PropertyRNA &rna_NlaStrip_repeat = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_repeat_);

static FloatPropertyRNA rna_NlaStrip_scale_;
PropertyRNA &rna_NlaStrip_scale = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_scale_);

static CollectionPropertyRNA rna_NlaStrip_fcurves_;
PropertyRNA &rna_NlaStrip_fcurves = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_fcurves_);

static CollectionPropertyRNA rna_NlaStrip_modifiers_;
PropertyRNA &rna_NlaStrip_modifiers = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_modifiers_);

static CollectionPropertyRNA rna_NlaStrip_strips_;
PropertyRNA &rna_NlaStrip_strips = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_strips_);

static FloatPropertyRNA rna_NlaStrip_influence_;
PropertyRNA &rna_NlaStrip_influence = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_influence_);

static FloatPropertyRNA rna_NlaStrip_strip_time_;
PropertyRNA &rna_NlaStrip_strip_time = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_strip_time_);

static BoolPropertyRNA rna_NlaStrip_use_animated_influence_;
PropertyRNA &rna_NlaStrip_use_animated_influence = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_use_animated_influence_);

static BoolPropertyRNA rna_NlaStrip_use_animated_time_;
PropertyRNA &rna_NlaStrip_use_animated_time = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_use_animated_time_);

static BoolPropertyRNA rna_NlaStrip_use_animated_time_cyclic_;
PropertyRNA &rna_NlaStrip_use_animated_time_cyclic = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_use_animated_time_cyclic_);

static BoolPropertyRNA rna_NlaStrip_active_;
PropertyRNA &rna_NlaStrip_active = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_active_);

static BoolPropertyRNA rna_NlaStrip_select_;
PropertyRNA &rna_NlaStrip_select = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_select_);

static BoolPropertyRNA rna_NlaStrip_mute_;
PropertyRNA &rna_NlaStrip_mute = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_mute_);

static BoolPropertyRNA rna_NlaStrip_use_reverse_;
PropertyRNA &rna_NlaStrip_use_reverse = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_use_reverse_);

static BoolPropertyRNA rna_NlaStrip_use_sync_length_;
PropertyRNA &rna_NlaStrip_use_sync_length = reinterpret_cast<PropertyRNA &>(rna_NlaStrip_use_sync_length_);

StructRNA *RNA_NlaStrip;
void register_struct_NlaStrip(BlenderRNA &brna)
{
	rna_NlaStrip_rna_properties_ = {
		{&rna_NlaStrip_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_rna_properties_begin, NlaStrip_rna_properties_next, NlaStrip_rna_properties_end, NlaStrip_rna_properties_get, nullptr, nullptr, NlaStrip_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_NlaStrip_rna_type_ = {
		{&rna_NlaStrip_name, 	&rna_NlaStrip_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_NlaStrip_name_ = {
		{&rna_NlaStrip_type, 	&rna_NlaStrip_rna_type,
		-1, "name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_name_get, NlaStrip_name_length, NlaStrip_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	static const EnumPropertyItem rna_NlaStrip_type_items[5] = {
		{0, "CLIP", 0, "Action Clip", "NLA Strip references some Action"	},
		{1, "TRANSITION", 0, "Transition", "NLA Strip \'transitions\' between adjacent strips"	},
		{2, "META", 0, "Meta", "NLA Strip acts as a container for adjacent strips"	},
		{3, "SOUND", 0, "Sound Clip", "NLA Strip representing a sound event for speakers"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_NlaStrip_type_ = {
		{&rna_NlaStrip_extrapolation, 	&rna_NlaStrip_name,
		-1, "type", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Type of NLA Strip",
		0, "Action",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(NlaStrip, type), RawPropertyType(1), nullptr},
		NlaStrip_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NlaStrip_type_items, 4, 0
	};

	static const EnumPropertyItem rna_NlaStrip_extrapolation_items[4] = {
		{2, "NOTHING", 0, "Nothing", "Strip has no influence past its extents"	},
		{0, "HOLD", 0, "Hold", "Hold the first frame if no previous strips in track, and always hold last frame"	},
		{1, "HOLD_FORWARD", 0, "Hold Forward", "Only hold last frame"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_NlaStrip_extrapolation_ = {
		{&rna_NlaStrip_blend_type, 	&rna_NlaStrip_type,
		-1, "extrapolation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Extrapolation",
		"Action to take for gaps past the strip extents",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(NlaStrip, extendmode), RawPropertyType(1), nullptr},
		NlaStrip_extrapolation_get, NlaStrip_extrapolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NlaStrip_extrapolation_items, 3, 0
	};

	static const EnumPropertyItem rna_NlaStrip_blend_type_items[7] = {
		{0, "REPLACE", 0, "Replace", "The strip values replace the accumulated results by amount specified by influence"	},
		{4, "COMBINE", 0, "Combine", "The strip values are combined with accumulated results by appropriately using addition, multiplication, or quaternion math, based on channel type"	},
		{0, "", 0, nullptr, nullptr	},
		{1, "ADD", 0, "Add", "Weighted result of strip is added to the accumulated results"	},
		{2, "SUBTRACT", 0, "Subtract", "Weighted result of strip is removed from the accumulated results"	},
		{3, "MULTIPLY", 0, "Multiply", "Weighted result of strip is multiplied with the accumulated results"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_NlaStrip_blend_type_ = {
		{&rna_NlaStrip_frame_start, 	&rna_NlaStrip_extrapolation,
		-1, "blend_type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Blending",
		"Method used for combining strip\'s result with accumulated result",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(NlaStrip, blendmode), RawPropertyType(1), nullptr},
		NlaStrip_blend_type_get, NlaStrip_blend_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_NlaStrip_blend_type_items, 6, 0
	};

	rna_NlaStrip_frame_start_ = {
		{&rna_NlaStrip_frame_end, 	&rna_NlaStrip_blend_type,
		-1, "frame_start", 3, 3, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_frame_start_get, NlaStrip_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_frame_end_ = {
		{&rna_NlaStrip_frame_start_raw, 	&rna_NlaStrip_frame_start,
		-1, "frame_end", 3, 3, 0, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_frame_end_get, NlaStrip_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_frame_start_raw_ = {
		{&rna_NlaStrip_frame_end_raw, 	&rna_NlaStrip_frame_end,
		-1, "frame_start_raw", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Start Frame (raw value)",
		"Same as frame_start, except that any value can be set, including ones that create an invalid state",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(NlaStrip, start), RawPropertyType(5), nullptr},
		NlaStrip_frame_start_raw_get, NlaStrip_frame_start_raw_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_frame_end_raw_ = {
		{&rna_NlaStrip_frame_start_ui, 	&rna_NlaStrip_frame_start_raw,
		-1, "frame_end_raw", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "End Frame (raw value)",
		"Same as frame_end, except that any value can be set, including ones that create an invalid state",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(NlaStrip, end), RawPropertyType(5), nullptr},
		NlaStrip_frame_end_raw_get, NlaStrip_frame_end_raw_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_frame_start_ui_ = {
		{&rna_NlaStrip_frame_end_ui, 	&rna_NlaStrip_frame_end_raw,
		-1, "frame_start_ui", 3, 5, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame (manipulated from UI)",
		"Start frame of the NLA strip. Note: changing this value also updates the value of the strip\'s end frame. If only the start frame should be changed, see the \"frame_start\" property instead.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_frame_start_ui_get, NlaStrip_frame_start_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_frame_end_ui_ = {
		{&rna_NlaStrip_blend_in, 	&rna_NlaStrip_frame_start_ui,
		-1, "frame_end_ui", 3, 5, 0, 0, 0, PropertyPathTemplateType(0), "End Frame (manipulated from UI)",
		"End frame of the NLA strip. Note: changing this value also updates the value of the strip\'s repeats or its action\'s end frame. If only the end frame should be changed, see the \"frame_end\" property instead.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_frame_end_ui_get, NlaStrip_frame_end_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_blend_in_ = {
		{&rna_NlaStrip_blend_out, 	&rna_NlaStrip_frame_end_ui,
		-1, "blend_in", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Blend In",
		"Number of frames at start of strip to fade in influence",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_blend_in_get, NlaStrip_blend_in_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_blend_out_ = {
		{&rna_NlaStrip_use_auto_blend, 	&rna_NlaStrip_blend_in,
		-1, "blend_out", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Blend Out",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_blend_out_get, NlaStrip_blend_out_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_use_auto_blend_ = {
		{&rna_NlaStrip_action, 	&rna_NlaStrip_blend_out,
		-1, "use_auto_blend", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Auto Blend In/Out",
		"Number of frames for Blending In/Out is automatically determined from overlapping strips",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_use_auto_blend_get, NlaStrip_use_auto_blend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_action_ = {
		{&rna_NlaStrip_action_slot_handle, 	&rna_NlaStrip_use_auto_blend,
		-1, "action", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action",
		"Action referenced by this strip",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_dependency_update, 256442369, rna_NlaStrip_action_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_action_get, NlaStrip_action_set, nullptr, rna_Action_id_poll,RNA_Action
	};

	rna_NlaStrip_action_slot_handle_ = {
		{&rna_NlaStrip_last_slot_identifier, 	&rna_NlaStrip_action,
		-1, "action_slot_handle", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action Slot Handle",
		"A number that identifies which sub-set of the Action is considered to be for this NLA strip",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_dependency_update, 256507904, nullptr, nullptr, nullptr, nullptr, rna_NlaStrip_action_slot_handle_override_diff, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_action_slot_handle_get, NlaStrip_action_slot_handle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_last_slot_identifier_ = {
		{&rna_NlaStrip_action_slot, 	&rna_NlaStrip_action_slot_handle,
		-1, "last_slot_identifier", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Last Action Slot Identifier",
		"The identifier of the most recently assigned action slot. The slot identifies which sub-set of the Action is considered to be for this strip, and its identifier is used to find the right slot when assigning an Action.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {258, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_last_slot_identifier_get, NlaStrip_last_slot_identifier_length, NlaStrip_last_slot_identifier_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 258, ""
	};

	rna_NlaStrip_action_slot_ = {
		{&rna_NlaStrip_action_suitable_slots, 	&rna_NlaStrip_last_slot_identifier,
		-1, "action_slot", 8388609, 5, 0, 0, 0, PropertyPathTemplateType(0), "Action Slot",
		"The slot identifies which sub-set of the Action is considered to be for this strip, and its name is used to find the right slot when assigning another Action",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_dependency_update, 256507904, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_action_slot_get, NlaStrip_action_slot_set, nullptr, nullptr,RNA_ActionSlot
	};

	rna_NlaStrip_action_suitable_slots_ = {
		{&rna_NlaStrip_action_frame_start, 	&rna_NlaStrip_action_slot,
		-1, "action_suitable_slots", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action Slots",
		"The list of action slots suitable for this NLA strip",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_action_suitable_slots_begin, NlaStrip_action_suitable_slots_next, NlaStrip_action_suitable_slots_end, NlaStrip_action_suitable_slots_get, nullptr, NlaStrip_action_suitable_slots_lookup_int, nullptr, nullptr, RNA_ActionSlot
	};

	rna_NlaStrip_action_frame_start_ = {
		{&rna_NlaStrip_action_frame_end, 	&rna_NlaStrip_action_suitable_slots,
		-1, "action_frame_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action Start Frame",
		"First frame from action to use",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_action_frame_start_get, NlaStrip_action_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_action_frame_end_ = {
		{&rna_NlaStrip_repeat, 	&rna_NlaStrip_action_frame_start,
		-1, "action_frame_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Action End Frame",
		"Last frame from action to use",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_action_frame_end_get, NlaStrip_action_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_repeat_ = {
		{&rna_NlaStrip_scale, 	&rna_NlaStrip_action_frame_end,
		-1, "repeat", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Repeat",
		"Number of times to repeat the action range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_repeat_get, NlaStrip_repeat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 1000.0f, 0.1000000015f, 1000.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_NlaStrip_scale_ = {
		{&rna_NlaStrip_fcurves, 	&rna_NlaStrip_repeat,
		-1, "scale", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Scale",
		"Scaling factor for action",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_scale_get, NlaStrip_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 1000.0f, 0.0001000000f, 1000.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_NlaStrip_fcurves_ = {
		{&rna_NlaStrip_modifiers, 	&rna_NlaStrip_scale,
		-1, "fcurves", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "F-Curves",
		"F-Curves for controlling the strip\'s influence and timing",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_NlaStripFCurves},
		NlaStrip_fcurves_begin, NlaStrip_fcurves_next, NlaStrip_fcurves_end, NlaStrip_fcurves_get, nullptr, NlaStrip_fcurves_lookup_int, nullptr, nullptr, RNA_FCurve
	};

	rna_NlaStrip_modifiers_ = {
		{&rna_NlaStrip_strips, 	&rna_NlaStrip_fcurves,
		-1, "modifiers", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Modifiers",
		"Modifiers affecting all the F-Curves in the referenced Action",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_modifiers_begin, NlaStrip_modifiers_next, NlaStrip_modifiers_end, NlaStrip_modifiers_get, nullptr, NlaStrip_modifiers_lookup_int, NlaStrip_modifiers_lookup_string, nullptr, RNA_FModifier
	};

	rna_NlaStrip_strips_ = {
		{&rna_NlaStrip_influence, 	&rna_NlaStrip_modifiers,
		-1, "strips", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "NLA Strips",
		"NLA Strips that this strip acts as a container for (if it is of type Meta)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_strips_begin, NlaStrip_strips_next, NlaStrip_strips_end, NlaStrip_strips_get, nullptr, NlaStrip_strips_lookup_int, NlaStrip_strips_lookup_string, nullptr, RNA_NlaStrip
	};

	rna_NlaStrip_influence_ = {
		{&rna_NlaStrip_strip_time, 	&rna_NlaStrip_strips,
		-1, "influence", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Influence",
		"Amount the strip contributes to the current result",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(NlaStrip, influence), RawPropertyType(5), nullptr},
		NlaStrip_influence_get, NlaStrip_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_strip_time_ = {
		{&rna_NlaStrip_use_animated_influence, 	&rna_NlaStrip_influence,
		-1, "strip_time", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Strip Time",
		"Frame of referenced Action to evaluate",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(NlaStrip, strip_time), RawPropertyType(5), nullptr},
		NlaStrip_strip_time_get, NlaStrip_strip_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_NlaStrip_use_animated_influence_ = {
		{&rna_NlaStrip_use_animated_time, 	&rna_NlaStrip_strip_time,
		-1, "use_animated_influence", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animated Influence",
		"Influence setting is controlled by an F-Curve rather than automatically determined",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_use_animated_influence_get, NlaStrip_use_animated_influence_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_use_animated_time_ = {
		{&rna_NlaStrip_use_animated_time_cyclic, 	&rna_NlaStrip_use_animated_influence,
		-1, "use_animated_time", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animated Strip Time",
		"Strip time is controlled by an F-Curve rather than automatically determined",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_use_animated_time_get, NlaStrip_use_animated_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_use_animated_time_cyclic_ = {
		{&rna_NlaStrip_active, 	&rna_NlaStrip_use_animated_time,
		-1, "use_animated_time_cyclic", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Cyclic Strip Time",
		"Cycle the animated time within the action start and end",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_transform_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_use_animated_time_cyclic_get, NlaStrip_use_animated_time_cyclic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_active_ = {
		{&rna_NlaStrip_select, 	&rna_NlaStrip_use_animated_time_cyclic,
		-1, "active", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"NLA Strip is active",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_active_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_select_ = {
		{&rna_NlaStrip_mute, 	&rna_NlaStrip_active,
		-1, "select", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"NLA Strip is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 256442368, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_select_get, NlaStrip_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_mute_ = {
		{&rna_NlaStrip_use_reverse, 	&rna_NlaStrip_select,
		-1, "mute", 4355, 1, 0, 0, 0, PropertyPathTemplateType(0), "Mute",
		"Disable NLA Strip evaluation",
		8, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_mute_get, NlaStrip_mute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_use_reverse_ = {
		{&rna_NlaStrip_use_sync_length, 	&rna_NlaStrip_mute,
		-1, "use_reverse", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Reversed",
		"NLA Strip is played back in reverse order (only when timing is automatically determined)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_use_reverse_get, NlaStrip_use_reverse_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_NlaStrip_use_sync_length_ = {
		{nullptr, 	&rna_NlaStrip_use_reverse,
		-1, "use_sync_length", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Sync Action Length",
		"Update range of frames referenced from action after tweaking strip and its keyframes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_NlaStrip_update, 256442369, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStrip_use_sync_length_get, NlaStrip_use_sync_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_NlaStrip;
	srna->cont.properties = {&rna_NlaStrip_rna_properties, &rna_NlaStrip_use_sync_length};
	srna->identifier = "NlaStrip";
	srna->flag = 516;
	srna->name = "NLA Strip";
	srna->description = "A container referencing an existing Action";
	srna->translation_context = "*";
	srna->icon = 142;
	srna->nameproperty = &rna_NlaStrip_name;
	srna->iteratorproperty = &rna_NlaStrip_rna_properties;
	srna->path = rna_NlaStrip_path;
};

/* NLA-Strip F-Curves */
static CollectionPropertyRNA rna_NlaStripFCurves_rna_properties_;
PropertyRNA &rna_NlaStripFCurves_rna_properties = reinterpret_cast<PropertyRNA &>(rna_NlaStripFCurves_rna_properties_);

static PointerPropertyRNA rna_NlaStripFCurves_rna_type_;
PropertyRNA &rna_NlaStripFCurves_rna_type = reinterpret_cast<PropertyRNA &>(rna_NlaStripFCurves_rna_type_);

static StringPropertyRNA rna_NlaStripFCurves_find_data_path_;
PropertyRNA &rna_NlaStripFCurves_find_data_path = reinterpret_cast<PropertyRNA &>(rna_NlaStripFCurves_find_data_path_);

static IntPropertyRNA rna_NlaStripFCurves_find_index_;
PropertyRNA &rna_NlaStripFCurves_find_index = reinterpret_cast<PropertyRNA &>(rna_NlaStripFCurves_find_index_);

static PointerPropertyRNA rna_NlaStripFCurves_find_fcurve_;
PropertyRNA &rna_NlaStripFCurves_find_fcurve = reinterpret_cast<PropertyRNA &>(rna_NlaStripFCurves_find_fcurve_);

FunctionRNA *rna_NlaStripFCurves_find_func;
StructRNA *RNA_NlaStripFCurves;
void register_struct_NlaStripFCurves(BlenderRNA &brna)
{
	rna_NlaStripFCurves_rna_properties_ = {
		{&rna_NlaStripFCurves_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStripFCurves_rna_properties_begin, NlaStripFCurves_rna_properties_next, NlaStripFCurves_rna_properties_end, NlaStripFCurves_rna_properties_get, nullptr, nullptr, NlaStripFCurves_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_NlaStripFCurves_rna_type_ = {
		{nullptr, 	&rna_NlaStripFCurves_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		NlaStripFCurves_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_NlaStripFCurves;
	srna->cont.properties = {&rna_NlaStripFCurves_rna_properties, &rna_NlaStripFCurves_rna_type};
	srna->identifier = "NlaStripFCurves";
	srna->flag = 516;
	srna->name = "NLA-Strip F-Curves";
	srna->description = "Collection of NLA strip F-Curves";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_NlaStripFCurves_rna_properties;
	{
	rna_NlaStripFCurves_find_data_path_ = {
		{&rna_NlaStripFCurves_find_index, 	nullptr,
		-1, "data_path", 262145, 1, 1, 0, 0, PropertyPathTemplateType(0), "Data Path",
		"F-Curve data path",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_NlaStripFCurves_find_index_ = {
		{&rna_NlaStripFCurves_find_fcurve, 	&rna_NlaStripFCurves_find_data_path,
		-1, "index", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Array index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_NlaStripFCurves_find_fcurve_ = {
		{nullptr, 	&rna_NlaStripFCurves_find_index,
		-1, "fcurve", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The found F-Curve, or None if it doesn\'t exist",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FCurve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_NlaStripFCurves_find_data_path, &rna_NlaStripFCurves_find_fcurve};
		func->identifier = "find";
		func->flag = 16;
		func->description = "Find an F-Curve. Note that this function performs a linear scan of all F-Curves in the NLA strip.";
		func->call = NlaStripFCurves_find_call;
		func->c_ret = &rna_NlaStripFCurves_find_fcurve;
		rna_NlaStripFCurves_find_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
