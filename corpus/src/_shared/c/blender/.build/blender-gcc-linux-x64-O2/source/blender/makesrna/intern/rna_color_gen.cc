
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

#include "rna_color.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_CurveMapPoint_rna_properties;
extern PropertyRNA &rna_CurveMapPoint_rna_type;
extern PropertyRNA &rna_CurveMapPoint_location;
extern PropertyRNA &rna_CurveMapPoint_handle_type;
extern PropertyRNA &rna_CurveMapPoint_select;


extern PropertyRNA &rna_CurveMap_rna_properties;
extern PropertyRNA &rna_CurveMap_rna_type;
extern PropertyRNA &rna_CurveMap_points;


extern PropertyRNA &rna_CurveMapPoints_rna_properties;
extern PropertyRNA &rna_CurveMapPoints_rna_type;

extern FunctionRNA *rna_CurveMapPoints_new_func;
extern PropertyRNA &rna_CurveMapPoints_new_position;
extern PropertyRNA &rna_CurveMapPoints_new_value;
extern PropertyRNA &rna_CurveMapPoints_new_point;

extern FunctionRNA *rna_CurveMapPoints_remove_func;
extern PropertyRNA &rna_CurveMapPoints_remove_point;



extern PropertyRNA &rna_CurveMapping_rna_properties;
extern PropertyRNA &rna_CurveMapping_rna_type;
extern PropertyRNA &rna_CurveMapping_tone;
extern PropertyRNA &rna_CurveMapping_use_clip;
extern PropertyRNA &rna_CurveMapping_clip_min_x;
extern PropertyRNA &rna_CurveMapping_clip_min_y;
extern PropertyRNA &rna_CurveMapping_clip_max_x;
extern PropertyRNA &rna_CurveMapping_clip_max_y;
extern PropertyRNA &rna_CurveMapping_extend;
extern PropertyRNA &rna_CurveMapping_curves;
extern PropertyRNA &rna_CurveMapping_black_level;
extern PropertyRNA &rna_CurveMapping_white_level;

extern FunctionRNA *rna_CurveMapping_update_func;
extern FunctionRNA *rna_CurveMapping_reset_view_func;
extern FunctionRNA *rna_CurveMapping_initialize_func;
extern FunctionRNA *rna_CurveMapping_evaluate_func;
extern PropertyRNA &rna_CurveMapping_evaluate_curve;
extern PropertyRNA &rna_CurveMapping_evaluate_position;
extern PropertyRNA &rna_CurveMapping_evaluate_value;



extern PropertyRNA &rna_ColorRampElement_rna_properties;
extern PropertyRNA &rna_ColorRampElement_rna_type;
extern PropertyRNA &rna_ColorRampElement_color;
extern PropertyRNA &rna_ColorRampElement_alpha;
extern PropertyRNA &rna_ColorRampElement_position;


extern PropertyRNA &rna_ColorRamp_rna_properties;
extern PropertyRNA &rna_ColorRamp_rna_type;
extern PropertyRNA &rna_ColorRamp_elements;
extern PropertyRNA &rna_ColorRamp_interpolation;
extern PropertyRNA &rna_ColorRamp_hue_interpolation;
extern PropertyRNA &rna_ColorRamp_color_mode;

extern FunctionRNA *rna_ColorRamp_evaluate_func;
extern PropertyRNA &rna_ColorRamp_evaluate_position;
extern PropertyRNA &rna_ColorRamp_evaluate_color;



extern PropertyRNA &rna_ColorRampElements_rna_properties;
extern PropertyRNA &rna_ColorRampElements_rna_type;

extern FunctionRNA *rna_ColorRampElements_new_func;
extern PropertyRNA &rna_ColorRampElements_new_position;
extern PropertyRNA &rna_ColorRampElements_new_element;

extern FunctionRNA *rna_ColorRampElements_remove_func;
extern PropertyRNA &rna_ColorRampElements_remove_element;



extern PropertyRNA &rna_Histogram_rna_properties;
extern PropertyRNA &rna_Histogram_rna_type;
extern PropertyRNA &rna_Histogram_mode;
extern PropertyRNA &rna_Histogram_show_line;


extern PropertyRNA &rna_Scopes_rna_properties;
extern PropertyRNA &rna_Scopes_rna_type;
extern PropertyRNA &rna_Scopes_use_full_resolution;
extern PropertyRNA &rna_Scopes_accuracy;
extern PropertyRNA &rna_Scopes_histogram;
extern PropertyRNA &rna_Scopes_waveform_mode;
extern PropertyRNA &rna_Scopes_waveform_alpha;
extern PropertyRNA &rna_Scopes_vectorscope_mode;
extern PropertyRNA &rna_Scopes_vectorscope_alpha;


extern PropertyRNA &rna_ColorManagedDisplaySettings_rna_properties;
extern PropertyRNA &rna_ColorManagedDisplaySettings_rna_type;
extern PropertyRNA &rna_ColorManagedDisplaySettings_display_device;
extern PropertyRNA &rna_ColorManagedDisplaySettings_emulation;


extern PropertyRNA &rna_ColorManagedViewSettings_rna_properties;
extern PropertyRNA &rna_ColorManagedViewSettings_rna_type;
extern PropertyRNA &rna_ColorManagedViewSettings_look;
extern PropertyRNA &rna_ColorManagedViewSettings_view_transform;
extern PropertyRNA &rna_ColorManagedViewSettings_exposure;
extern PropertyRNA &rna_ColorManagedViewSettings_gamma;
extern PropertyRNA &rna_ColorManagedViewSettings_curve_mapping;
extern PropertyRNA &rna_ColorManagedViewSettings_use_curve_mapping;
extern PropertyRNA &rna_ColorManagedViewSettings_use_white_balance;
extern PropertyRNA &rna_ColorManagedViewSettings_white_balance_temperature;
extern PropertyRNA &rna_ColorManagedViewSettings_white_balance_tint;
extern PropertyRNA &rna_ColorManagedViewSettings_white_balance_whitepoint;
extern PropertyRNA &rna_ColorManagedViewSettings_is_hdr;
extern PropertyRNA &rna_ColorManagedViewSettings_support_emulation;


extern PropertyRNA &rna_ColorManagedInputColorspaceSettings_rna_properties;
extern PropertyRNA &rna_ColorManagedInputColorspaceSettings_rna_type;
extern PropertyRNA &rna_ColorManagedInputColorspaceSettings_name;
extern PropertyRNA &rna_ColorManagedInputColorspaceSettings_is_data;


extern PropertyRNA &rna_ColorManagedSequencerColorspaceSettings_rna_properties;
extern PropertyRNA &rna_ColorManagedSequencerColorspaceSettings_rna_type;
extern PropertyRNA &rna_ColorManagedSequencerColorspaceSettings_name;

static PointerRNA CurveMapPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveMapPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveMapPoint_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMapPoint_rna_properties_get(iter);
    }
}

void CurveMapPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveMapPoint_rna_properties_get(iter);
    }
}

void CurveMapPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveMapPoint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveMapPoint_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void CurveMapPoint_location_get(PointerRNA *ptr, float values[2])
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

void CurveMapPoint_location_set(PointerRNA *ptr, const float values[2])
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        (&data->x)[i] = values[i];
    }
}

int CurveMapPoint_handle_type_get(PointerRNA *ptr)
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    return (uint64_t(data->flag) & 6);
}

void CurveMapPoint_handle_type_set(PointerRNA *ptr, int value)
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(6));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

bool CurveMapPoint_select_get(PointerRNA *ptr)
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CurveMapPoint_select_set(PointerRNA *ptr, bool value)
{
    CurveMapPoint *data = (CurveMapPoint *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

static PointerRNA CurveMap_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveMap_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMap_rna_properties_get(iter);
    }
}

void CurveMap_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveMap_rna_properties_get(iter);
    }
}

void CurveMap_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveMap_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveMap_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int CurveMap_points_length(PointerRNA *ptr)
{
    CurveMap *data = (CurveMap *)(ptr->data);
    return (data->curve == nullptr) ? 0 : data->totpoint;
}

static PointerRNA CurveMap_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CurveMapPoint, rna_iterator_array_get(iter));
}

void CurveMap_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    CurveMap *data = (CurveMap *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveMap_points;

    rna_iterator_array_begin(iter, ptr, data->curve, sizeof(data->curve[0]), data->totpoint, 0, nullptr);

    if (iter->valid) {
        iter->ptr = CurveMap_points_get(iter);
    }
}

void CurveMap_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveMap_points_get(iter);
    }
}

void CurveMap_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool CurveMap_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    CurveMap_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = CurveMap_points_get(&iter); }
    }

    CurveMap_points_end(&iter);

    return found;
}

static PointerRNA CurveMapPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveMapPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveMapPoints_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMapPoints_rna_properties_get(iter);
    }
}

void CurveMapPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveMapPoints_rna_properties_get(iter);
    }
}

void CurveMapPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveMapPoints_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveMapPoints_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA CurveMapping_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void CurveMapping_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveMapping_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMapping_rna_properties_get(iter);
    }
}

void CurveMapping_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveMapping_rna_properties_get(iter);
    }
}

void CurveMapping_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool CurveMapping_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA CurveMapping_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int CurveMapping_tone_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (int)(data->tone);
}

void CurveMapping_tone_set(PointerRNA *ptr, int value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    data->tone = (std::remove_reference_t<decltype(data->tone)>)value;
}

bool CurveMapping_use_clip_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void CurveMapping_use_clip_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_CurveMapping_clip_set;
    fn(ptr, value);
}

float CurveMapping_clip_min_x_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (float)(data->clipr.xmin);
}

void CurveMapping_clip_min_x_set(PointerRNA *ptr, float value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_CurveMapping_clipminx_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->clipr.xmin = (std::remove_reference_t<decltype(data->clipr.xmin)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float CurveMapping_clip_min_y_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (float)(data->clipr.ymin);
}

void CurveMapping_clip_min_y_set(PointerRNA *ptr, float value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_CurveMapping_clipminy_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->clipr.ymin = (std::remove_reference_t<decltype(data->clipr.ymin)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float CurveMapping_clip_max_x_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (float)(data->clipr.xmax);
}

void CurveMapping_clip_max_x_set(PointerRNA *ptr, float value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_CurveMapping_clipmaxx_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->clipr.xmax = (std::remove_reference_t<decltype(data->clipr.xmax)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float CurveMapping_clip_max_y_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (float)(data->clipr.ymax);
}

void CurveMapping_clip_max_y_set(PointerRNA *ptr, float value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_CurveMapping_clipmaxy_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->clipr.ymax = (std::remove_reference_t<decltype(data->clipr.ymax)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int CurveMapping_extend_get(PointerRNA *ptr)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    return (uint64_t(data->flag) & 16);
}

void CurveMapping_extend_set(PointerRNA *ptr, int value)
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int CurveMapping_curves_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_CurveMapping_curves_length;
    return fn(ptr);
}

static PointerRNA CurveMapping_curves_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CurveMap, rna_iterator_array_get(iter));
}

void CurveMapping_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_CurveMapping_curves;

    PropCollectionBeginFunc fn = rna_CurveMapping_curves_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = CurveMapping_curves_get(iter);
    }
}

void CurveMapping_curves_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = CurveMapping_curves_get(iter);
    }
}

void CurveMapping_curves_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool CurveMapping_curves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    CurveMapping_curves_begin(&iter, ptr);

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
        if (found) { *r_ptr = CurveMapping_curves_get(&iter); }
    }

    CurveMapping_curves_end(&iter);

    return found;
}

void CurveMapping_black_level_get(PointerRNA *ptr, float values[3])
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->black)[i]);
    }
}

void CurveMapping_black_level_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_CurveMapping_black_level_set;
    fn(ptr, values);
}

void CurveMapping_white_level_get(PointerRNA *ptr, float values[3])
{
    CurveMapping *data = (CurveMapping *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->white)[i]);
    }
}

void CurveMapping_white_level_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_CurveMapping_white_level_set;
    fn(ptr, values);
}

static PointerRNA ColorRampElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ColorRampElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorRampElement_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorRampElement_rna_properties_get(iter);
    }
}

void ColorRampElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorRampElement_rna_properties_get(iter);
    }
}

void ColorRampElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ColorRampElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ColorRampElement_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ColorRampElement_color_get(PointerRNA *ptr, float values[4])
{
    CBData *data = (CBData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

void ColorRampElement_color_set(PointerRNA *ptr, const float values[4])
{
    CBData *data = (CBData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        (&data->r)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float ColorRampElement_alpha_get(PointerRNA *ptr)
{
    CBData *data = (CBData *)(ptr->data);
    return (float)(data->a);
}

void ColorRampElement_alpha_set(PointerRNA *ptr, float value)
{
    CBData *data = (CBData *)(ptr->data);
    data->a = (std::remove_reference_t<decltype(data->a)>)std::clamp(value, 0.0f, FLT_MAX);
}

float ColorRampElement_position_get(PointerRNA *ptr)
{
    CBData *data = (CBData *)(ptr->data);
    return (float)(data->pos);
}

void ColorRampElement_position_set(PointerRNA *ptr, float value)
{
    CBData *data = (CBData *)(ptr->data);
    data->pos = (std::remove_reference_t<decltype(data->pos)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA ColorRamp_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ColorRamp_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorRamp_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorRamp_rna_properties_get(iter);
    }
}

void ColorRamp_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorRamp_rna_properties_get(iter);
    }
}

void ColorRamp_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ColorRamp_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ColorRamp_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ColorRamp_elements_length(PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    return data->tot;
}

static PointerRNA ColorRamp_elements_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ColorRampElement, rna_iterator_array_get(iter));
}

void ColorRamp_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorRamp_elements;

    rna_iterator_array_begin(iter, ptr, data->data, sizeof(data->data[0]), data->tot, 0, nullptr);

    if (iter->valid) {
        iter->ptr = ColorRamp_elements_get(iter);
    }
}

void ColorRamp_elements_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorRamp_elements_get(iter);
    }
}

void ColorRamp_elements_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ColorRamp_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ColorRamp_elements_begin(&iter, ptr);

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
        if (found) { *r_ptr = ColorRamp_elements_get(&iter); }
    }

    ColorRamp_elements_end(&iter);

    return found;
}

int ColorRamp_interpolation_get(PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    return (int)(data->ipotype);
}

void ColorRamp_interpolation_set(PointerRNA *ptr, int value)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    data->ipotype = (std::remove_reference_t<decltype(data->ipotype)>)value;
}

int ColorRamp_hue_interpolation_get(PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    return (int)(data->ipotype_hue);
}

void ColorRamp_hue_interpolation_set(PointerRNA *ptr, int value)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    data->ipotype_hue = (std::remove_reference_t<decltype(data->ipotype_hue)>)value;
}

int ColorRamp_color_mode_get(PointerRNA *ptr)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    return (int)(data->color_mode);
}

void ColorRamp_color_mode_set(PointerRNA *ptr, int value)
{
    ColorBand *data = (ColorBand *)(ptr->data);
    data->color_mode = (std::remove_reference_t<decltype(data->color_mode)>)value;
}

static PointerRNA ColorRampElements_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ColorRampElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorRampElements_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorRampElements_rna_properties_get(iter);
    }
}

void ColorRampElements_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorRampElements_rna_properties_get(iter);
    }
}

void ColorRampElements_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ColorRampElements_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ColorRampElements_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA Histogram_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Histogram_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Histogram_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Histogram_rna_properties_get(iter);
    }
}

void Histogram_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Histogram_rna_properties_get(iter);
    }
}

void Histogram_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Histogram_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Histogram_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int Histogram_mode_get(PointerRNA *ptr)
{
    Histogram *data = (Histogram *)(ptr->data);
    return (int)(data->mode);
}

void Histogram_mode_set(PointerRNA *ptr, int value)
{
    Histogram *data = (Histogram *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

bool Histogram_show_line_get(PointerRNA *ptr)
{
    Histogram *data = (Histogram *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void Histogram_show_line_set(PointerRNA *ptr, bool value)
{
    Histogram *data = (Histogram *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

static PointerRNA Scopes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Scopes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Scopes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Scopes_rna_properties_get(iter);
    }
}

void Scopes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Scopes_rna_properties_get(iter);
    }
}

void Scopes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Scopes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Scopes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool Scopes_use_full_resolution_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return ((uint64_t(data->sample_full) & 1) != 0);
}

void Scopes_use_full_resolution_set(PointerRNA *ptr, bool value)
{
    Scopes *data = (Scopes *)(ptr->data);
    if (value) { data->sample_full = std::remove_reference_t<decltype(data->sample_full)>(uint64_t(data->sample_full) | 1); }
    else { data->sample_full = std::remove_reference_t<decltype(data->sample_full)>(uint64_t(data->sample_full) & ~uint64_t(1)); }
}

float Scopes_accuracy_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (float)(data->accuracy);
}

void Scopes_accuracy_set(PointerRNA *ptr, float value)
{
    Scopes *data = (Scopes *)(ptr->data);
    data->accuracy = (std::remove_reference_t<decltype(data->accuracy)>)std::clamp(value, 0.0f, 100.0f);
}

PointerRNA Scopes_histogram_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Histogram, &data->hist);
}

int Scopes_waveform_mode_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (int)(data->wavefrm_mode);
}

void Scopes_waveform_mode_set(PointerRNA *ptr, int value)
{
    Scopes *data = (Scopes *)(ptr->data);
    data->wavefrm_mode = (std::remove_reference_t<decltype(data->wavefrm_mode)>)value;
}

float Scopes_waveform_alpha_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (float)(data->wavefrm_alpha);
}

void Scopes_waveform_alpha_set(PointerRNA *ptr, float value)
{
    Scopes *data = (Scopes *)(ptr->data);
    data->wavefrm_alpha = (std::remove_reference_t<decltype(data->wavefrm_alpha)>)std::clamp(value, 0.0f, 1.0f);
}

int Scopes_vectorscope_mode_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (int)(data->vecscope_mode);
}

void Scopes_vectorscope_mode_set(PointerRNA *ptr, int value)
{
    Scopes *data = (Scopes *)(ptr->data);
    data->vecscope_mode = (std::remove_reference_t<decltype(data->vecscope_mode)>)value;
}

float Scopes_vectorscope_alpha_get(PointerRNA *ptr)
{
    Scopes *data = (Scopes *)(ptr->data);
    return (float)(data->vecscope_alpha);
}

void Scopes_vectorscope_alpha_set(PointerRNA *ptr, float value)
{
    Scopes *data = (Scopes *)(ptr->data);
    data->vecscope_alpha = (std::remove_reference_t<decltype(data->vecscope_alpha)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA ColorManagedDisplaySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ColorManagedDisplaySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorManagedDisplaySettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorManagedDisplaySettings_rna_properties_get(iter);
    }
}

void ColorManagedDisplaySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorManagedDisplaySettings_rna_properties_get(iter);
    }
}

void ColorManagedDisplaySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ColorManagedDisplaySettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ColorManagedDisplaySettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ColorManagedDisplaySettings_display_device_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedDisplaySettings_display_device_get;
    return fn(ptr);
}

void ColorManagedDisplaySettings_display_device_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedDisplaySettings_display_device_set;
    fn(ptr, value);
}

int ColorManagedDisplaySettings_emulation_get(PointerRNA *ptr)
{
    ColorManagedDisplaySettings *data = (ColorManagedDisplaySettings *)(ptr->data);
    return (int)(data->emulation);
}

void ColorManagedDisplaySettings_emulation_set(PointerRNA *ptr, int value)
{
    ColorManagedDisplaySettings *data = (ColorManagedDisplaySettings *)(ptr->data);
    data->emulation = (std::remove_reference_t<decltype(data->emulation)>)value;
}

static PointerRNA ColorManagedViewSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ColorManagedViewSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorManagedViewSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorManagedViewSettings_rna_properties_get(iter);
    }
}

void ColorManagedViewSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorManagedViewSettings_rna_properties_get(iter);
    }
}

void ColorManagedViewSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ColorManagedViewSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ColorManagedViewSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ColorManagedViewSettings_look_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedViewSettings_look_get;
    return fn(ptr);
}

void ColorManagedViewSettings_look_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedViewSettings_look_set;
    fn(ptr, value);
}

int ColorManagedViewSettings_view_transform_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedViewSettings_view_transform_get;
    return fn(ptr);
}

void ColorManagedViewSettings_view_transform_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedViewSettings_view_transform_set;
    fn(ptr, value);
}

float ColorManagedViewSettings_exposure_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return (float)(data->exposure);
}

void ColorManagedViewSettings_exposure_set(PointerRNA *ptr, float value)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    data->exposure = (std::remove_reference_t<decltype(data->exposure)>)std::clamp(value, -32.0f, 32.0f);
}

float ColorManagedViewSettings_gamma_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return (float)(data->gamma);
}

void ColorManagedViewSettings_gamma_set(PointerRNA *ptr, float value)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    data->gamma = (std::remove_reference_t<decltype(data->gamma)>)std::clamp(value, 0.0f, 5.0f);
}

PointerRNA ColorManagedViewSettings_curve_mapping_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->curve_mapping);
}

bool ColorManagedViewSettings_use_curve_mapping_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ColorManagedViewSettings_use_curve_mapping_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ColorManagedViewSettings_use_curves_set;
    fn(ptr, value);
}

bool ColorManagedViewSettings_use_white_balance_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ColorManagedViewSettings_use_white_balance_set(PointerRNA *ptr, bool value)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

float ColorManagedViewSettings_white_balance_temperature_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return (float)(data->temperature);
}

void ColorManagedViewSettings_white_balance_temperature_set(PointerRNA *ptr, float value)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    data->temperature = (std::remove_reference_t<decltype(data->temperature)>)std::clamp(value, 1800.0f, 100000.0f);
}

float ColorManagedViewSettings_white_balance_tint_get(PointerRNA *ptr)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    return (float)(data->tint);
}

void ColorManagedViewSettings_white_balance_tint_set(PointerRNA *ptr, float value)
{
    ColorManagedViewSettings *data = (ColorManagedViewSettings *)(ptr->data);
    data->tint = (std::remove_reference_t<decltype(data->tint)>)std::clamp(value, -500.0f, 500.0f);
}

void ColorManagedViewSettings_white_balance_whitepoint_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ColorManagedViewSettings_whitepoint_get;
    fn(ptr, values);
}

void ColorManagedViewSettings_white_balance_whitepoint_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ColorManagedViewSettings_whitepoint_set;
    fn(ptr, values);
}

bool ColorManagedViewSettings_is_hdr_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ColorManagedViewSettings_is_hdr_get;
    return fn(ptr);
}

bool ColorManagedViewSettings_support_emulation_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ColorManagedViewSettings_support_emulation_get;
    return fn(ptr);
}

static PointerRNA ColorManagedInputColorspaceSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ColorManagedInputColorspaceSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorManagedInputColorspaceSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorManagedInputColorspaceSettings_rna_properties_get(iter);
    }
}

void ColorManagedInputColorspaceSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorManagedInputColorspaceSettings_rna_properties_get(iter);
    }
}

void ColorManagedInputColorspaceSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ColorManagedInputColorspaceSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ColorManagedInputColorspaceSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ColorManagedInputColorspaceSettings_name_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedColorspaceSettings_colorspace_get;
    return fn(ptr);
}

void ColorManagedInputColorspaceSettings_name_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedColorspaceSettings_colorspace_set;
    fn(ptr, value);
}

bool ColorManagedInputColorspaceSettings_is_data_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ColorManagedColorspaceSettings_is_data_get;
    return fn(ptr);
}

void ColorManagedInputColorspaceSettings_is_data_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_ColorManagedColorspaceSettings_is_data_set;
    fn(ptr, value);
}

static PointerRNA ColorManagedSequencerColorspaceSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ColorManagedSequencerColorspaceSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ColorManagedSequencerColorspaceSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ColorManagedSequencerColorspaceSettings_rna_properties_get(iter);
    }
}

void ColorManagedSequencerColorspaceSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ColorManagedSequencerColorspaceSettings_rna_properties_get(iter);
    }
}

void ColorManagedSequencerColorspaceSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ColorManagedSequencerColorspaceSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ColorManagedSequencerColorspaceSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ColorManagedSequencerColorspaceSettings_name_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_ColorManagedColorspaceSettings_colorspace_get;
    return fn(ptr);
}

void ColorManagedSequencerColorspaceSettings_name_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_ColorManagedColorspaceSettings_colorspace_set;
    fn(ptr, value);
}



CurveMapPoint *CurveMapPoints_new_func(CurveMap *_self, float position, float value)
{
	return BKE_curvemap_insert(_self, position, value);
}

static void CurveMapPoints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveMap *_self;
	float position;
	float value;
	CurveMapPoint *point;
	char *_data, *_retdata;
	
	_self = (CurveMap *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 8;
	value = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	point = BKE_curvemap_insert(_self, position, value);
	*((CurveMapPoint **)_retdata) = point;
}

void CurveMapPoints_remove_func(CurveMap *_self, ReportList *reports, PointerRNA *point)
{
	rna_CurveMap_remove_point(_self, reports, point);
}

static void CurveMapPoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveMap *_self;
	PointerRNA *point;
	char *_data;
	
	_self = (CurveMap *)_ptr->data;
	_data = (char *)_parms->data;
	point = *((PointerRNA **)_data);
	
	rna_CurveMap_remove_point(_self, reports, point);
}

/* Repeated prototypes to detect errors */

CurveMapPoint *BKE_curvemap_insert(CurveMap *_self, float position, float value);
void rna_CurveMap_remove_point(CurveMap *_self, ReportList *reports, PointerRNA *point);

void CurveMapping_update_func(CurveMapping *_self)
{
	BKE_curvemapping_changed_all(_self);
}

static void CurveMapping_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveMapping *_self;
	_self = (CurveMapping *)_ptr->data;
	
	BKE_curvemapping_changed_all(_self);
}

void CurveMapping_reset_view_func(CurveMapping *_self)
{
	BKE_curvemapping_reset_view(_self);
}

static void CurveMapping_reset_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveMapping *_self;
	_self = (CurveMapping *)_ptr->data;
	
	BKE_curvemapping_reset_view(_self);
}

void CurveMapping_initialize_func(CurveMapping *_self)
{
	rna_CurveMap_initialize(_self);
}

static void CurveMapping_initialize_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveMapping *_self;
	_self = (CurveMapping *)_ptr->data;
	
	rna_CurveMap_initialize(_self);
}

float CurveMapping_evaluate_func(CurveMapping *_self, ReportList *reports, CurveMap *curve, float position)
{
	return rna_CurveMapping_evaluateF(_self, reports, curve, position);
}

static void CurveMapping_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	CurveMapping *_self;
	CurveMap *curve;
	float position;
	float value;
	char *_data, *_retdata;
	
	_self = (CurveMapping *)_ptr->data;
	_data = (char *)_parms->data;
	curve = *((CurveMap **)_data);
	_data += 8;
	position = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	value = rna_CurveMapping_evaluateF(_self, reports, curve, position);
	*((float *)_retdata) = value;
}

/* Repeated prototypes to detect errors */

void BKE_curvemapping_changed_all(CurveMapping *_self);
void BKE_curvemapping_reset_view(CurveMapping *_self);
void rna_CurveMap_initialize(CurveMapping *_self);
float rna_CurveMapping_evaluateF(CurveMapping *_self, ReportList *reports, CurveMap *curve, float position);


void ColorRamp_evaluate_func(ColorBand *_self, float position, float color[4])
{
	rna_ColorRamp_eval(_self, position, color);
}

static void ColorRamp_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ColorBand *_self;
	float position;
	float *color;
	char *_data;
	
	_self = (ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 8;
	color = ((float *)_data);
	
	rna_ColorRamp_eval(_self, position, color);
}

/* Repeated prototypes to detect errors */

void rna_ColorRamp_eval(ColorBand *_self, float position, float color[4]);

CBData *ColorRampElements_new_func(ColorBand *_self, ReportList *reports, float position)
{
	return rna_ColorRampElement_new(_self, reports, position);
}

static void ColorRampElements_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ColorBand *_self;
	float position;
	CBData *element;
	char *_data, *_retdata;
	
	_self = (ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	position = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	element = rna_ColorRampElement_new(_self, reports, position);
	*((CBData **)_retdata) = element;
}

void ColorRampElements_remove_func(ColorBand *_self, ReportList *reports, PointerRNA *element)
{
	rna_ColorRampElement_remove(_self, reports, element);
}

static void ColorRampElements_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ColorBand *_self;
	PointerRNA *element;
	char *_data;
	
	_self = (ColorBand *)_ptr->data;
	_data = (char *)_parms->data;
	element = *((PointerRNA **)_data);
	
	rna_ColorRampElement_remove(_self, reports, element);
}

/* Repeated prototypes to detect errors */

CBData *rna_ColorRampElement_new(ColorBand *_self, ReportList *reports, float position);
void rna_ColorRampElement_remove(ColorBand *_self, ReportList *reports, PointerRNA *element);







/* CurveMapPoint */
static CollectionPropertyRNA rna_CurveMapPoint_rna_properties_;
PropertyRNA &rna_CurveMapPoint_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoint_rna_properties_);

static PointerPropertyRNA rna_CurveMapPoint_rna_type_;
PropertyRNA &rna_CurveMapPoint_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoint_rna_type_);

static FloatPropertyRNA rna_CurveMapPoint_location_;
PropertyRNA &rna_CurveMapPoint_location = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoint_location_);

static EnumPropertyRNA rna_CurveMapPoint_handle_type_;
PropertyRNA &rna_CurveMapPoint_handle_type = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoint_handle_type_);

static BoolPropertyRNA rna_CurveMapPoint_select_;
PropertyRNA &rna_CurveMapPoint_select = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoint_select_);

StructRNA *RNA_CurveMapPoint;
void register_struct_CurveMapPoint(BlenderRNA &brna)
{
	rna_CurveMapPoint_rna_properties_ = {
		{&rna_CurveMapPoint_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapPoint_rna_properties_begin, CurveMapPoint_rna_properties_next, CurveMapPoint_rna_properties_end, CurveMapPoint_rna_properties_get, nullptr, nullptr, CurveMapPoint_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveMapPoint_rna_type_ = {
		{&rna_CurveMapPoint_location, 	&rna_CurveMapPoint_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapPoint_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_CurveMapPoint_location_default[2] = {
		0.0f,
		0.0f
	};
	rna_CurveMapPoint_location_ = {
		{&rna_CurveMapPoint_handle_type, 	&rna_CurveMapPoint_rna_type,
		-1, "location", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"X/Y coordinates of the curve point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveMapPoint, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, CurveMapPoint_location_get, CurveMapPoint_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_CurveMapPoint_location_default
	};

	static const EnumPropertyItem rna_CurveMapPoint_handle_type_items[4] = {
		{0, "AUTO", 0, "Auto Handle", ""	},
		{4, "AUTO_CLAMPED", 0, "Auto-Clamped Handle", ""	},
		{2, "VECTOR", 0, "Vector Handle", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CurveMapPoint_handle_type_ = {
		{&rna_CurveMapPoint_select, 	&rna_CurveMapPoint_location,
		-1, "handle_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Handle Type",
		"Curve interpolation at this point: Bézier or vector",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveMapPoint, flag), RawPropertyType(1), nullptr},
		CurveMapPoint_handle_type_get, CurveMapPoint_handle_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CurveMapPoint_handle_type_items, 3, 0
	};

	rna_CurveMapPoint_select_ = {
		{nullptr, 	&rna_CurveMapPoint_handle_type,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Selection state of the curve point",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapPoint_select_get, CurveMapPoint_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_CurveMapPoint;
	srna->cont.properties = {&rna_CurveMapPoint_rna_properties, &rna_CurveMapPoint_select};
	srna->identifier = "CurveMapPoint";
	srna->flag = 516;
	srna->name = "CurveMapPoint";
	srna->description = "Point of a curve used for a curve mapping";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveMapPoint_rna_properties;
};

/* CurveMap */
static CollectionPropertyRNA rna_CurveMap_rna_properties_;
PropertyRNA &rna_CurveMap_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveMap_rna_properties_);

static PointerPropertyRNA rna_CurveMap_rna_type_;
PropertyRNA &rna_CurveMap_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveMap_rna_type_);

static CollectionPropertyRNA rna_CurveMap_points_;
PropertyRNA &rna_CurveMap_points = reinterpret_cast<PropertyRNA &>(rna_CurveMap_points_);

StructRNA *RNA_CurveMap;
void register_struct_CurveMap(BlenderRNA &brna)
{
	rna_CurveMap_rna_properties_ = {
		{&rna_CurveMap_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMap_rna_properties_begin, CurveMap_rna_properties_next, CurveMap_rna_properties_end, CurveMap_rna_properties_get, nullptr, nullptr, CurveMap_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveMap_rna_type_ = {
		{&rna_CurveMap_points, 	&rna_CurveMap_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMap_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_CurveMap_points_ = {
		{nullptr, 	&rna_CurveMap_rna_type,
		-1, "points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Points",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_CurveMapPoints},
		CurveMap_points_begin, CurveMap_points_next, CurveMap_points_end, CurveMap_points_get, CurveMap_points_length, CurveMap_points_lookup_int, nullptr, nullptr, RNA_CurveMapPoint
	};

	StructRNA *srna = RNA_CurveMap;
	srna->cont.properties = {&rna_CurveMap_rna_properties, &rna_CurveMap_points};
	srna->identifier = "CurveMap";
	srna->flag = 516;
	srna->name = "CurveMap";
	srna->description = "Curve in a curve mapping";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveMap_rna_properties;
};

/* Curve Map Point */
static CollectionPropertyRNA rna_CurveMapPoints_rna_properties_;
PropertyRNA &rna_CurveMapPoints_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoints_rna_properties_);

static PointerPropertyRNA rna_CurveMapPoints_rna_type_;
PropertyRNA &rna_CurveMapPoints_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoints_rna_type_);

static FloatPropertyRNA rna_CurveMapPoints_new_position_;
PropertyRNA &rna_CurveMapPoints_new_position = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoints_new_position_);

static FloatPropertyRNA rna_CurveMapPoints_new_value_;
PropertyRNA &rna_CurveMapPoints_new_value = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoints_new_value_);

static PointerPropertyRNA rna_CurveMapPoints_new_point_;
PropertyRNA &rna_CurveMapPoints_new_point = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoints_new_point_);

FunctionRNA *rna_CurveMapPoints_new_func;
static PointerPropertyRNA rna_CurveMapPoints_remove_point_;
PropertyRNA &rna_CurveMapPoints_remove_point = reinterpret_cast<PropertyRNA &>(rna_CurveMapPoints_remove_point_);

FunctionRNA *rna_CurveMapPoints_remove_func;
StructRNA *RNA_CurveMapPoints;
void register_struct_CurveMapPoints(BlenderRNA &brna)
{
	rna_CurveMapPoints_rna_properties_ = {
		{&rna_CurveMapPoints_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapPoints_rna_properties_begin, CurveMapPoints_rna_properties_next, CurveMapPoints_rna_properties_end, CurveMapPoints_rna_properties_get, nullptr, nullptr, CurveMapPoints_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveMapPoints_rna_type_ = {
		{nullptr, 	&rna_CurveMapPoints_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapPoints_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_CurveMapPoints;
	srna->cont.properties = {&rna_CurveMapPoints_rna_properties, &rna_CurveMapPoints_rna_type};
	srna->identifier = "CurveMapPoints";
	srna->flag = 516;
	srna->name = "Curve Map Point";
	srna->description = "Collection of Curve Map Points";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveMapPoints_rna_properties;
	{
	rna_CurveMapPoints_new_position_ = {
		{&rna_CurveMapPoints_new_value, 	nullptr,
		-1, "position", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Position",
		"Position to add point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_CurveMapPoints_new_value_ = {
		{&rna_CurveMapPoints_new_point, 	&rna_CurveMapPoints_new_position,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"Value of point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_CurveMapPoints_new_point_ = {
		{nullptr, 	&rna_CurveMapPoints_new_value,
		-1, "point", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New point",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CurveMapPoint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveMapPoints_new_position, &rna_CurveMapPoints_new_point};
		func->identifier = "new";
		func->description = "Add point to CurveMap";
		func->call = CurveMapPoints_new_call;
		func->c_ret = &rna_CurveMapPoints_new_point;
		rna_CurveMapPoints_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CurveMapPoints_remove_point_ = {
		{nullptr, 	nullptr,
		-1, "point", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"PointElement to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CurveMapPoint
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveMapPoints_remove_point, &rna_CurveMapPoints_remove_point};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Delete point from CurveMap";
		func->call = CurveMapPoints_remove_call;
		rna_CurveMapPoints_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* CurveMapping */
static CollectionPropertyRNA rna_CurveMapping_rna_properties_;
PropertyRNA &rna_CurveMapping_rna_properties = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_rna_properties_);

static PointerPropertyRNA rna_CurveMapping_rna_type_;
PropertyRNA &rna_CurveMapping_rna_type = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_rna_type_);

static EnumPropertyRNA rna_CurveMapping_tone_;
PropertyRNA &rna_CurveMapping_tone = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_tone_);

static BoolPropertyRNA rna_CurveMapping_use_clip_;
PropertyRNA &rna_CurveMapping_use_clip = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_use_clip_);

static FloatPropertyRNA rna_CurveMapping_clip_min_x_;
PropertyRNA &rna_CurveMapping_clip_min_x = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_clip_min_x_);

static FloatPropertyRNA rna_CurveMapping_clip_min_y_;
PropertyRNA &rna_CurveMapping_clip_min_y = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_clip_min_y_);

static FloatPropertyRNA rna_CurveMapping_clip_max_x_;
PropertyRNA &rna_CurveMapping_clip_max_x = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_clip_max_x_);

static FloatPropertyRNA rna_CurveMapping_clip_max_y_;
PropertyRNA &rna_CurveMapping_clip_max_y = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_clip_max_y_);

static EnumPropertyRNA rna_CurveMapping_extend_;
PropertyRNA &rna_CurveMapping_extend = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_extend_);

static CollectionPropertyRNA rna_CurveMapping_curves_;
PropertyRNA &rna_CurveMapping_curves = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_curves_);

static FloatPropertyRNA rna_CurveMapping_black_level_;
PropertyRNA &rna_CurveMapping_black_level = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_black_level_);

static FloatPropertyRNA rna_CurveMapping_white_level_;
PropertyRNA &rna_CurveMapping_white_level = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_white_level_);

FunctionRNA *rna_CurveMapping_update_func;
FunctionRNA *rna_CurveMapping_reset_view_func;
FunctionRNA *rna_CurveMapping_initialize_func;
static PointerPropertyRNA rna_CurveMapping_evaluate_curve_;
PropertyRNA &rna_CurveMapping_evaluate_curve = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_evaluate_curve_);

static FloatPropertyRNA rna_CurveMapping_evaluate_position_;
PropertyRNA &rna_CurveMapping_evaluate_position = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_evaluate_position_);

static FloatPropertyRNA rna_CurveMapping_evaluate_value_;
PropertyRNA &rna_CurveMapping_evaluate_value = reinterpret_cast<PropertyRNA &>(rna_CurveMapping_evaluate_value_);

FunctionRNA *rna_CurveMapping_evaluate_func;
StructRNA *RNA_CurveMapping;
void register_struct_CurveMapping(BlenderRNA &brna)
{
	rna_CurveMapping_rna_properties_ = {
		{&rna_CurveMapping_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapping_rna_properties_begin, CurveMapping_rna_properties_next, CurveMapping_rna_properties_end, CurveMapping_rna_properties_get, nullptr, nullptr, CurveMapping_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_CurveMapping_rna_type_ = {
		{&rna_CurveMapping_tone, 	&rna_CurveMapping_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapping_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_CurveMapping_tone_items[3] = {
		{0, "STANDARD", 0, "Standard", "Combined curve is applied to each channel individually, which may result in a change of hue"	},
		{2, "FILMLIKE", 0, "Filmlike", "Keeps the hue constant"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CurveMapping_tone_ = {
		{&rna_CurveMapping_use_clip, 	&rna_CurveMapping_rna_type,
		-1, "tone", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tone",
		"Tone of the curve",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CurveMapping_tone_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveMapping, tone), RawPropertyType(1), nullptr},
		CurveMapping_tone_get, CurveMapping_tone_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CurveMapping_tone_items, 2, 0
	};

	rna_CurveMapping_use_clip_ = {
		{&rna_CurveMapping_clip_min_x, 	&rna_CurveMapping_tone,
		-1, "use_clip", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clip",
		"Force the curve view to fit a defined boundary",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapping_use_clip_get, CurveMapping_use_clip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_CurveMapping_clip_min_x_ = {
		{&rna_CurveMapping_clip_min_y, 	&rna_CurveMapping_use_clip,
		-1, "clip_min_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip Min X",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveMapping, clipr.xmin), RawPropertyType(5), nullptr},
		CurveMapping_clip_min_x_get, CurveMapping_clip_min_x_set, nullptr, nullptr, rna_CurveMapping_clipminx_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CurveMapping_clip_min_y_ = {
		{&rna_CurveMapping_clip_max_x, 	&rna_CurveMapping_clip_min_x,
		-1, "clip_min_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip Min Y",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveMapping, clipr.ymin), RawPropertyType(5), nullptr},
		CurveMapping_clip_min_y_get, CurveMapping_clip_min_y_set, nullptr, nullptr, rna_CurveMapping_clipminy_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CurveMapping_clip_max_x_ = {
		{&rna_CurveMapping_clip_max_y, 	&rna_CurveMapping_clip_min_y,
		-1, "clip_max_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip Max X",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveMapping, clipr.xmax), RawPropertyType(5), nullptr},
		CurveMapping_clip_max_x_get, CurveMapping_clip_max_x_set, nullptr, nullptr, rna_CurveMapping_clipmaxx_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_CurveMapping_clip_max_y_ = {
		{&rna_CurveMapping_extend, 	&rna_CurveMapping_clip_max_x,
		-1, "clip_max_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip Max Y",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveMapping, clipr.ymax), RawPropertyType(5), nullptr},
		CurveMapping_clip_max_y_get, CurveMapping_clip_max_y_set, nullptr, nullptr, rna_CurveMapping_clipmaxy_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_CurveMapping_extend_items[3] = {
		{0, "HORIZONTAL", 0, "Horizontal", ""	},
		{16, "EXTRAPOLATED", 0, "Extrapolated", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_CurveMapping_extend_ = {
		{&rna_CurveMapping_curves, 	&rna_CurveMapping_clip_max_y,
		-1, "extend", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Extend",
		"Extrapolate the curve or extend it horizontally",
		0, "Curve",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_CurveMapping_extend_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CurveMapping, flag), RawPropertyType(0), nullptr},
		CurveMapping_extend_get, CurveMapping_extend_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_CurveMapping_extend_items, 2, 0
	};

	rna_CurveMapping_curves_ = {
		{&rna_CurveMapping_black_level, 	&rna_CurveMapping_extend,
		-1, "curves", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Curves",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		CurveMapping_curves_begin, CurveMapping_curves_next, CurveMapping_curves_end, CurveMapping_curves_get, CurveMapping_curves_length, CurveMapping_curves_lookup_int, nullptr, nullptr, RNA_CurveMap
	};

	static float rna_CurveMapping_black_level_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_CurveMapping_black_level_ = {
		{&rna_CurveMapping_white_level, 	&rna_CurveMapping_curves,
		-1, "black_level", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Black Level",
		"For RGB curves, the color that black is mapped to",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, CurveMapping_black_level_get, CurveMapping_black_level_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_CurveMapping_black_level_default
	};

	static float rna_CurveMapping_white_level_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_CurveMapping_white_level_ = {
		{nullptr, 	&rna_CurveMapping_black_level,
		-1, "white_level", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "White Level",
		"For RGB curves, the color that white is mapped to",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, CurveMapping_white_level_get, CurveMapping_white_level_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_CurveMapping_white_level_default
	};

	StructRNA *srna = RNA_CurveMapping;
	srna->cont.properties = {&rna_CurveMapping_rna_properties, &rna_CurveMapping_white_level};
	srna->identifier = "CurveMapping";
	srna->flag = 516;
	srna->name = "CurveMapping";
	srna->description = "Curve mapping to map color, vector and scalar values to other values using a user defined curve";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_CurveMapping_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update";
		func->description = "Update curve mapping after making changes";
		func->call = CurveMapping_update_call;
		rna_CurveMapping_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "reset_view";
		func->description = "Reset the curve mapping grid to its clipping size";
		func->call = CurveMapping_reset_view_call;
		rna_CurveMapping_reset_view_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "initialize";
		func->description = "Initialize curve";
		func->call = CurveMapping_initialize_call;
		rna_CurveMapping_initialize_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_CurveMapping_evaluate_curve_ = {
		{&rna_CurveMapping_evaluate_position, 	nullptr,
		-1, "curve", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "curve",
		"Curve to evaluate",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_CurveMap
	};
	rna_CurveMapping_evaluate_position_ = {
		{&rna_CurveMapping_evaluate_value, 	&rna_CurveMapping_evaluate_curve,
		-1, "position", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Position",
		"Position to evaluate curve at",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_CurveMapping_evaluate_value_ = {
		{nullptr, 	&rna_CurveMapping_evaluate_position,
		-1, "value", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Value",
		"Value of curve at given location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_CurveMapping_evaluate_curve, &rna_CurveMapping_evaluate_value};
		func->identifier = "evaluate";
		func->flag = 16;
		func->description = "Evaluate curve at given location";
		func->call = CurveMapping_evaluate_call;
		func->c_ret = &rna_CurveMapping_evaluate_value;
		rna_CurveMapping_evaluate_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Color Ramp Element */
static CollectionPropertyRNA rna_ColorRampElement_rna_properties_;
PropertyRNA &rna_ColorRampElement_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ColorRampElement_rna_properties_);

static PointerPropertyRNA rna_ColorRampElement_rna_type_;
PropertyRNA &rna_ColorRampElement_rna_type = reinterpret_cast<PropertyRNA &>(rna_ColorRampElement_rna_type_);

static FloatPropertyRNA rna_ColorRampElement_color_;
PropertyRNA &rna_ColorRampElement_color = reinterpret_cast<PropertyRNA &>(rna_ColorRampElement_color_);

static FloatPropertyRNA rna_ColorRampElement_alpha_;
PropertyRNA &rna_ColorRampElement_alpha = reinterpret_cast<PropertyRNA &>(rna_ColorRampElement_alpha_);

static FloatPropertyRNA rna_ColorRampElement_position_;
PropertyRNA &rna_ColorRampElement_position = reinterpret_cast<PropertyRNA &>(rna_ColorRampElement_position_);

StructRNA *RNA_ColorRampElement;
void register_struct_ColorRampElement(BlenderRNA &brna)
{
	rna_ColorRampElement_rna_properties_ = {
		{&rna_ColorRampElement_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorRampElement_rna_properties_begin, ColorRampElement_rna_properties_next, ColorRampElement_rna_properties_end, ColorRampElement_rna_properties_get, nullptr, nullptr, ColorRampElement_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ColorRampElement_rna_type_ = {
		{&rna_ColorRampElement_color, 	&rna_ColorRampElement_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorRampElement_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_ColorRampElement_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_ColorRampElement_color_ = {
		{&rna_ColorRampElement_alpha, 	&rna_ColorRampElement_rna_type,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Set color of selected color stop",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_ColorRamp_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CBData, r), RawPropertyType(5), nullptr},
		nullptr, nullptr, ColorRampElement_color_get, ColorRampElement_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ColorRampElement_color_default
	};

	rna_ColorRampElement_alpha_ = {
		{&rna_ColorRampElement_position, 	&rna_ColorRampElement_color,
		-1, "alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha",
		"Set alpha of selected color stop",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorRamp_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CBData, a), RawPropertyType(5), nullptr},
		ColorRampElement_alpha_get, ColorRampElement_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ColorRampElement_position_ = {
		{nullptr, 	&rna_ColorRampElement_alpha,
		-1, "position", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Position",
		"Set position of selected color stop",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorRamp_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(CBData, pos), RawPropertyType(5), nullptr},
		ColorRampElement_position_get, ColorRampElement_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ColorRampElement;
	srna->cont.properties = {&rna_ColorRampElement_rna_properties, &rna_ColorRampElement_position};
	srna->identifier = "ColorRampElement";
	srna->flag = 516;
	srna->name = "Color Ramp Element";
	srna->description = "Element defining a color at a position in the color ramp";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ColorRampElement_rna_properties;
	srna->path = rna_ColorRampElement_path;
};

/* Color Ramp */
static CollectionPropertyRNA rna_ColorRamp_rna_properties_;
PropertyRNA &rna_ColorRamp_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ColorRamp_rna_properties_);

static PointerPropertyRNA rna_ColorRamp_rna_type_;
PropertyRNA &rna_ColorRamp_rna_type = reinterpret_cast<PropertyRNA &>(rna_ColorRamp_rna_type_);

static CollectionPropertyRNA rna_ColorRamp_elements_;
PropertyRNA &rna_ColorRamp_elements = reinterpret_cast<PropertyRNA &>(rna_ColorRamp_elements_);

static EnumPropertyRNA rna_ColorRamp_interpolation_;
PropertyRNA &rna_ColorRamp_interpolation = reinterpret_cast<PropertyRNA &>(rna_ColorRamp_interpolation_);

static EnumPropertyRNA rna_ColorRamp_hue_interpolation_;
PropertyRNA &rna_ColorRamp_hue_interpolation = reinterpret_cast<PropertyRNA &>(rna_ColorRamp_hue_interpolation_);

static EnumPropertyRNA rna_ColorRamp_color_mode_;
PropertyRNA &rna_ColorRamp_color_mode = reinterpret_cast<PropertyRNA &>(rna_ColorRamp_color_mode_);

static FloatPropertyRNA rna_ColorRamp_evaluate_position_;
PropertyRNA &rna_ColorRamp_evaluate_position = reinterpret_cast<PropertyRNA &>(rna_ColorRamp_evaluate_position_);

static FloatPropertyRNA rna_ColorRamp_evaluate_color_;
PropertyRNA &rna_ColorRamp_evaluate_color = reinterpret_cast<PropertyRNA &>(rna_ColorRamp_evaluate_color_);

FunctionRNA *rna_ColorRamp_evaluate_func;
StructRNA *RNA_ColorRamp;
void register_struct_ColorRamp(BlenderRNA &brna)
{
	rna_ColorRamp_rna_properties_ = {
		{&rna_ColorRamp_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorRamp_rna_properties_begin, ColorRamp_rna_properties_next, ColorRamp_rna_properties_end, ColorRamp_rna_properties_get, nullptr, nullptr, ColorRamp_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ColorRamp_rna_type_ = {
		{&rna_ColorRamp_elements, 	&rna_ColorRamp_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorRamp_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ColorRamp_elements_ = {
		{&rna_ColorRamp_interpolation, 	&rna_ColorRamp_rna_type,
		-1, "elements", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Elements",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {32, 0, 0}, 0,
		rna_ColorRamp_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ColorRampElements},
		ColorRamp_elements_begin, ColorRamp_elements_next, ColorRamp_elements_end, ColorRamp_elements_get, ColorRamp_elements_length, ColorRamp_elements_lookup_int, nullptr, nullptr, RNA_ColorRampElement
	};

	static const EnumPropertyItem rna_ColorRamp_interpolation_items[6] = {
		{1, "EASE", 0, "Ease", ""	},
		{3, "CARDINAL", 0, "Cardinal", ""	},
		{0, "LINEAR", 0, "Linear", ""	},
		{2, "B_SPLINE", 0, "B-Spline", ""	},
		{4, "CONSTANT", 0, "Constant", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorRamp_interpolation_ = {
		{&rna_ColorRamp_hue_interpolation, 	&rna_ColorRamp_elements,
		-1, "interpolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation",
		"Set interpolation between color stops",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorRamp_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorBand, ipotype), RawPropertyType(2), nullptr},
		ColorRamp_interpolation_get, ColorRamp_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorRamp_interpolation_items, 5, 0
	};

	static const EnumPropertyItem rna_ColorRamp_hue_interpolation_items[5] = {
		{0, "NEAR", 0, "Near", ""	},
		{1, "FAR", 0, "Far", ""	},
		{2, "CW", 0, "Clockwise", ""	},
		{3, "CCW", 0, "Counter-Clockwise", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorRamp_hue_interpolation_ = {
		{&rna_ColorRamp_color_mode, 	&rna_ColorRamp_interpolation,
		-1, "hue_interpolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color Interpolation",
		"Set color interpolation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorRamp_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorBand, ipotype_hue), RawPropertyType(2), nullptr},
		ColorRamp_hue_interpolation_get, ColorRamp_hue_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorRamp_hue_interpolation_items, 4, 0
	};

	static const EnumPropertyItem rna_ColorRamp_color_mode_items[4] = {
		{0, "RGB", 0, "RGB", ""	},
		{1, "HSV", 0, "HSV", ""	},
		{2, "HSL", 0, "HSL", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorRamp_color_mode_ = {
		{nullptr, 	&rna_ColorRamp_hue_interpolation,
		-1, "color_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color Mode",
		"Set color mode to use for interpolation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorRamp_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorBand, color_mode), RawPropertyType(2), nullptr},
		ColorRamp_color_mode_get, ColorRamp_color_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorRamp_color_mode_items, 3, 0
	};

	StructRNA *srna = RNA_ColorRamp;
	srna->cont.properties = {&rna_ColorRamp_rna_properties, &rna_ColorRamp_color_mode};
	srna->identifier = "ColorRamp";
	srna->flag = 516;
	srna->name = "Color Ramp";
	srna->description = "Color ramp mapping a scalar value to a color";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ColorRamp_rna_properties;
	srna->path = rna_ColorRamp_path;
	{
	rna_ColorRamp_evaluate_position_ = {
		{&rna_ColorRamp_evaluate_color, 	nullptr,
		-1, "position", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Position",
		"Evaluate Color Ramp at position",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};
	static float rna_ColorRamp_evaluate_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_ColorRamp_evaluate_color_ = {
		{nullptr, 	&rna_ColorRamp_evaluate_position,
		-1, "color", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Color",
		"Color at given position",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_ColorRamp_evaluate_color_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ColorRamp_evaluate_position, &rna_ColorRamp_evaluate_color};
		func->identifier = "evaluate";
		func->description = "Evaluate Color Ramp";
		func->call = ColorRamp_evaluate_call;
		rna_ColorRamp_evaluate_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Color Ramp Elements */
static CollectionPropertyRNA rna_ColorRampElements_rna_properties_;
PropertyRNA &rna_ColorRampElements_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ColorRampElements_rna_properties_);

static PointerPropertyRNA rna_ColorRampElements_rna_type_;
PropertyRNA &rna_ColorRampElements_rna_type = reinterpret_cast<PropertyRNA &>(rna_ColorRampElements_rna_type_);

static FloatPropertyRNA rna_ColorRampElements_new_position_;
PropertyRNA &rna_ColorRampElements_new_position = reinterpret_cast<PropertyRNA &>(rna_ColorRampElements_new_position_);

static PointerPropertyRNA rna_ColorRampElements_new_element_;
PropertyRNA &rna_ColorRampElements_new_element = reinterpret_cast<PropertyRNA &>(rna_ColorRampElements_new_element_);

FunctionRNA *rna_ColorRampElements_new_func;
static PointerPropertyRNA rna_ColorRampElements_remove_element_;
PropertyRNA &rna_ColorRampElements_remove_element = reinterpret_cast<PropertyRNA &>(rna_ColorRampElements_remove_element_);

FunctionRNA *rna_ColorRampElements_remove_func;
StructRNA *RNA_ColorRampElements;
void register_struct_ColorRampElements(BlenderRNA &brna)
{
	rna_ColorRampElements_rna_properties_ = {
		{&rna_ColorRampElements_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorRampElements_rna_properties_begin, ColorRampElements_rna_properties_next, ColorRampElements_rna_properties_end, ColorRampElements_rna_properties_get, nullptr, nullptr, ColorRampElements_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ColorRampElements_rna_type_ = {
		{nullptr, 	&rna_ColorRampElements_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorRampElements_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ColorRampElements;
	srna->cont.properties = {&rna_ColorRampElements_rna_properties, &rna_ColorRampElements_rna_type};
	srna->identifier = "ColorRampElements";
	srna->flag = 516;
	srna->name = "Color Ramp Elements";
	srna->description = "Collection of Color Ramp Elements";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ColorRampElements_rna_properties;
	srna->path = rna_ColorRampElement_path;
	{
	rna_ColorRampElements_new_position_ = {
		{&rna_ColorRampElements_new_element, 	nullptr,
		-1, "position", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Position",
		"Position to add element",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_ColorRampElements_new_element_ = {
		{nullptr, 	&rna_ColorRampElements_new_position,
		-1, "element", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New element",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ColorRampElement
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ColorRampElements_new_position, &rna_ColorRampElements_new_element};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add element to Color Ramp";
		func->call = ColorRampElements_new_call;
		func->c_ret = &rna_ColorRampElements_new_element;
		rna_ColorRampElements_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ColorRampElements_remove_element_ = {
		{nullptr, 	nullptr,
		-1, "element", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Element to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ColorRampElement
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ColorRampElements_remove_element, &rna_ColorRampElements_remove_element};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Delete element from Color Ramp";
		func->call = ColorRampElements_remove_call;
		rna_ColorRampElements_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Histogram */
static CollectionPropertyRNA rna_Histogram_rna_properties_;
PropertyRNA &rna_Histogram_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Histogram_rna_properties_);

static PointerPropertyRNA rna_Histogram_rna_type_;
PropertyRNA &rna_Histogram_rna_type = reinterpret_cast<PropertyRNA &>(rna_Histogram_rna_type_);

static EnumPropertyRNA rna_Histogram_mode_;
PropertyRNA &rna_Histogram_mode = reinterpret_cast<PropertyRNA &>(rna_Histogram_mode_);

static BoolPropertyRNA rna_Histogram_show_line_;
PropertyRNA &rna_Histogram_show_line = reinterpret_cast<PropertyRNA &>(rna_Histogram_show_line_);

StructRNA *RNA_Histogram;
void register_struct_Histogram(BlenderRNA &brna)
{
	rna_Histogram_rna_properties_ = {
		{&rna_Histogram_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Histogram_rna_properties_begin, Histogram_rna_properties_next, Histogram_rna_properties_end, Histogram_rna_properties_get, nullptr, nullptr, Histogram_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Histogram_rna_type_ = {
		{&rna_Histogram_mode, 	&rna_Histogram_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Histogram_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_Histogram_mode_items[7] = {
		{0, "LUMA", 0, "Luma", "Luma"	},
		{1, "RGB", 0, "RGB", "Red Green Blue"	},
		{2, "R", 0, "R", "Red"	},
		{3, "G", 0, "G", "Green"	},
		{4, "B", 0, "B", "Blue"	},
		{5, "A", 0, "A", "Alpha"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Histogram_mode_ = {
		{&rna_Histogram_show_line, 	&rna_Histogram_rna_type,
		-1, "mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Channels to display in the histogram",
		0, "Color",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Histogram, mode), RawPropertyType(1), nullptr},
		Histogram_mode_get, Histogram_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Histogram_mode_items, 6, 0
	};

	rna_Histogram_show_line_ = {
		{nullptr, 	&rna_Histogram_mode,
		-1, "show_line", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Line",
		"Display lines rather than filled shapes",
		139, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Histogram_show_line_get, Histogram_show_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Histogram;
	srna->cont.properties = {&rna_Histogram_rna_properties, &rna_Histogram_show_line};
	srna->identifier = "Histogram";
	srna->flag = 516;
	srna->name = "Histogram";
	srna->description = "Statistical view of the levels of color in an image";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Histogram_rna_properties;
};

/* Scopes */
static CollectionPropertyRNA rna_Scopes_rna_properties_;
PropertyRNA &rna_Scopes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Scopes_rna_properties_);

static PointerPropertyRNA rna_Scopes_rna_type_;
PropertyRNA &rna_Scopes_rna_type = reinterpret_cast<PropertyRNA &>(rna_Scopes_rna_type_);

static BoolPropertyRNA rna_Scopes_use_full_resolution_;
PropertyRNA &rna_Scopes_use_full_resolution = reinterpret_cast<PropertyRNA &>(rna_Scopes_use_full_resolution_);

static FloatPropertyRNA rna_Scopes_accuracy_;
PropertyRNA &rna_Scopes_accuracy = reinterpret_cast<PropertyRNA &>(rna_Scopes_accuracy_);

static PointerPropertyRNA rna_Scopes_histogram_;
PropertyRNA &rna_Scopes_histogram = reinterpret_cast<PropertyRNA &>(rna_Scopes_histogram_);

static EnumPropertyRNA rna_Scopes_waveform_mode_;
PropertyRNA &rna_Scopes_waveform_mode = reinterpret_cast<PropertyRNA &>(rna_Scopes_waveform_mode_);

static FloatPropertyRNA rna_Scopes_waveform_alpha_;
PropertyRNA &rna_Scopes_waveform_alpha = reinterpret_cast<PropertyRNA &>(rna_Scopes_waveform_alpha_);

static EnumPropertyRNA rna_Scopes_vectorscope_mode_;
PropertyRNA &rna_Scopes_vectorscope_mode = reinterpret_cast<PropertyRNA &>(rna_Scopes_vectorscope_mode_);

static FloatPropertyRNA rna_Scopes_vectorscope_alpha_;
PropertyRNA &rna_Scopes_vectorscope_alpha = reinterpret_cast<PropertyRNA &>(rna_Scopes_vectorscope_alpha_);

StructRNA *RNA_Scopes;
void register_struct_Scopes(BlenderRNA &brna)
{
	rna_Scopes_rna_properties_ = {
		{&rna_Scopes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Scopes_rna_properties_begin, Scopes_rna_properties_next, Scopes_rna_properties_end, Scopes_rna_properties_get, nullptr, nullptr, Scopes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Scopes_rna_type_ = {
		{&rna_Scopes_use_full_resolution, 	&rna_Scopes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Scopes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Scopes_use_full_resolution_ = {
		{&rna_Scopes_accuracy, 	&rna_Scopes_rna_type,
		-1, "use_full_resolution", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Full Sample",
		"Sample every pixel of the image",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scopes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Scopes_use_full_resolution_get, Scopes_use_full_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Scopes_accuracy_ = {
		{&rna_Scopes_histogram, 	&rna_Scopes_use_full_resolution,
		-1, "accuracy", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Accuracy",
		"Proportion of original image source pixel lines to sample",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scopes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Scopes, accuracy), RawPropertyType(5), nullptr},
		Scopes_accuracy_get, Scopes_accuracy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Scopes_histogram_ = {
		{&rna_Scopes_waveform_mode, 	&rna_Scopes_accuracy,
		-1, "histogram", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Histogram",
		"Histogram for viewing image statistics",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Scopes_histogram_get, nullptr, nullptr, nullptr,RNA_Histogram
	};

	static const EnumPropertyItem rna_Scopes_waveform_mode_items[7] = {
		{0, "LUMA", 59, "Luma", ""	},
		{1, "PARADE", 59, "Parade", ""	},
		{2, "YCBCR601", 59, "YCbCr (ITU 601)", ""	},
		{3, "YCBCR709", 59, "YCbCr (ITU 709)", ""	},
		{4, "YCBCRJPG", 59, "YCbCr (JPEG)", ""	},
		{5, "RGB", 59, "Red Green Blue", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Scopes_waveform_mode_ = {
		{&rna_Scopes_waveform_alpha, 	&rna_Scopes_histogram,
		-1, "waveform_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Waveform Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scopes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Scopes, wavefrm_mode), RawPropertyType(0), nullptr},
		Scopes_waveform_mode_get, Scopes_waveform_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Scopes_waveform_mode_items, 6, 0
	};

	rna_Scopes_waveform_alpha_ = {
		{&rna_Scopes_vectorscope_mode, 	&rna_Scopes_waveform_mode,
		-1, "waveform_alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Waveform Opacity",
		"Opacity of the points",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Scopes, wavefrm_alpha), RawPropertyType(5), nullptr},
		Scopes_waveform_alpha_get, Scopes_waveform_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_Scopes_vectorscope_mode_items[3] = {
		{1, "LUMA", 59, "Luma", ""	},
		{0, "RGB", 59, "Red Green Blue", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Scopes_vectorscope_mode_ = {
		{&rna_Scopes_vectorscope_alpha, 	&rna_Scopes_waveform_alpha,
		-1, "vectorscope_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vectorscope Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scopes_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Scopes, vecscope_mode), RawPropertyType(0), nullptr},
		Scopes_vectorscope_mode_get, Scopes_vectorscope_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Scopes_vectorscope_mode_items, 2, 0
	};

	rna_Scopes_vectorscope_alpha_ = {
		{nullptr, 	&rna_Scopes_vectorscope_mode,
		-1, "vectorscope_alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vectorscope Opacity",
		"Opacity of the points",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Scopes, vecscope_alpha), RawPropertyType(5), nullptr},
		Scopes_vectorscope_alpha_get, Scopes_vectorscope_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_Scopes;
	srna->cont.properties = {&rna_Scopes_rna_properties, &rna_Scopes_vectorscope_alpha};
	srna->identifier = "Scopes";
	srna->flag = 516;
	srna->name = "Scopes";
	srna->description = "Scopes for statistical view of an image";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Scopes_rna_properties;
};

/* ColorManagedDisplaySettings */
static CollectionPropertyRNA rna_ColorManagedDisplaySettings_rna_properties_;
PropertyRNA &rna_ColorManagedDisplaySettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ColorManagedDisplaySettings_rna_properties_);

static PointerPropertyRNA rna_ColorManagedDisplaySettings_rna_type_;
PropertyRNA &rna_ColorManagedDisplaySettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_ColorManagedDisplaySettings_rna_type_);

static EnumPropertyRNA rna_ColorManagedDisplaySettings_display_device_;
PropertyRNA &rna_ColorManagedDisplaySettings_display_device = reinterpret_cast<PropertyRNA &>(rna_ColorManagedDisplaySettings_display_device_);

static EnumPropertyRNA rna_ColorManagedDisplaySettings_emulation_;
PropertyRNA &rna_ColorManagedDisplaySettings_emulation = reinterpret_cast<PropertyRNA &>(rna_ColorManagedDisplaySettings_emulation_);

StructRNA *RNA_ColorManagedDisplaySettings;
void register_struct_ColorManagedDisplaySettings(BlenderRNA &brna)
{
	rna_ColorManagedDisplaySettings_rna_properties_ = {
		{&rna_ColorManagedDisplaySettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedDisplaySettings_rna_properties_begin, ColorManagedDisplaySettings_rna_properties_next, ColorManagedDisplaySettings_rna_properties_end, ColorManagedDisplaySettings_rna_properties_get, nullptr, nullptr, ColorManagedDisplaySettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ColorManagedDisplaySettings_rna_type_ = {
		{&rna_ColorManagedDisplaySettings_display_device, 	&rna_ColorManagedDisplaySettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedDisplaySettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_ColorManagedDisplaySettings_display_device_items[2] = {
		{0, "NONE", 0, "None", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorManagedDisplaySettings_display_device_ = {
		{&rna_ColorManagedDisplaySettings_emulation, 	&rna_ColorManagedDisplaySettings_rna_type,
		-1, "display_device", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Display",
		"Display name. For viewing, this is the display device that will be emulated by limiting the gamut and HDR colors. For image and video output, this is the display space used for writing.",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_ColorManagedDisplaySettings_display_device_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedDisplaySettings_display_device_get, ColorManagedDisplaySettings_display_device_set, rna_ColorManagedDisplaySettings_display_device_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorManagedDisplaySettings_display_device_items, 1, 0
	};

	static const EnumPropertyItem rna_ColorManagedDisplaySettings_emulation_items[3] = {
		{1, "OFF", 0, "Off", "Directly output image as produced by OpenColorIO. This is not correct in general, but may be used when the system configuration and actual display device is known to match the chosen display"	},
		{0, "AUTO", 0, "Automatic", "Display images consistent with most other applications, to preview images and video for export. A best effort is made to emulate the chosen display on the actual display device."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorManagedDisplaySettings_emulation_ = {
		{nullptr, 	&rna_ColorManagedDisplaySettings_display_device,
		-1, "emulation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display Emulation",
		"Control how images in the chosen display are mapped to the physical display",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagedDisplaySettings_display_device_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorManagedDisplaySettings, emulation), RawPropertyType(2), nullptr},
		ColorManagedDisplaySettings_emulation_get, ColorManagedDisplaySettings_emulation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorManagedDisplaySettings_emulation_items, 2, 0
	};

	StructRNA *srna = RNA_ColorManagedDisplaySettings;
	srna->cont.properties = {&rna_ColorManagedDisplaySettings_rna_properties, &rna_ColorManagedDisplaySettings_emulation};
	srna->identifier = "ColorManagedDisplaySettings";
	srna->flag = 516;
	srna->name = "ColorManagedDisplaySettings";
	srna->description = "Color management specific to display device";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ColorManagedDisplaySettings_rna_properties;
	srna->path = rna_ColorManagedDisplaySettings_path;
};

/* ColorManagedViewSettings */
static CollectionPropertyRNA rna_ColorManagedViewSettings_rna_properties_;
PropertyRNA &rna_ColorManagedViewSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_rna_properties_);

static PointerPropertyRNA rna_ColorManagedViewSettings_rna_type_;
PropertyRNA &rna_ColorManagedViewSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_rna_type_);

static EnumPropertyRNA rna_ColorManagedViewSettings_look_;
PropertyRNA &rna_ColorManagedViewSettings_look = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_look_);

static EnumPropertyRNA rna_ColorManagedViewSettings_view_transform_;
PropertyRNA &rna_ColorManagedViewSettings_view_transform = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_view_transform_);

static FloatPropertyRNA rna_ColorManagedViewSettings_exposure_;
PropertyRNA &rna_ColorManagedViewSettings_exposure = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_exposure_);

static FloatPropertyRNA rna_ColorManagedViewSettings_gamma_;
PropertyRNA &rna_ColorManagedViewSettings_gamma = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_gamma_);

static PointerPropertyRNA rna_ColorManagedViewSettings_curve_mapping_;
PropertyRNA &rna_ColorManagedViewSettings_curve_mapping = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_curve_mapping_);

static BoolPropertyRNA rna_ColorManagedViewSettings_use_curve_mapping_;
PropertyRNA &rna_ColorManagedViewSettings_use_curve_mapping = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_use_curve_mapping_);

static BoolPropertyRNA rna_ColorManagedViewSettings_use_white_balance_;
PropertyRNA &rna_ColorManagedViewSettings_use_white_balance = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_use_white_balance_);

static FloatPropertyRNA rna_ColorManagedViewSettings_white_balance_temperature_;
PropertyRNA &rna_ColorManagedViewSettings_white_balance_temperature = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_white_balance_temperature_);

static FloatPropertyRNA rna_ColorManagedViewSettings_white_balance_tint_;
PropertyRNA &rna_ColorManagedViewSettings_white_balance_tint = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_white_balance_tint_);

static FloatPropertyRNA rna_ColorManagedViewSettings_white_balance_whitepoint_;
PropertyRNA &rna_ColorManagedViewSettings_white_balance_whitepoint = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_white_balance_whitepoint_);

static BoolPropertyRNA rna_ColorManagedViewSettings_is_hdr_;
PropertyRNA &rna_ColorManagedViewSettings_is_hdr = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_is_hdr_);

static BoolPropertyRNA rna_ColorManagedViewSettings_support_emulation_;
PropertyRNA &rna_ColorManagedViewSettings_support_emulation = reinterpret_cast<PropertyRNA &>(rna_ColorManagedViewSettings_support_emulation_);

StructRNA *RNA_ColorManagedViewSettings;
void register_struct_ColorManagedViewSettings(BlenderRNA &brna)
{
	rna_ColorManagedViewSettings_rna_properties_ = {
		{&rna_ColorManagedViewSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_rna_properties_begin, ColorManagedViewSettings_rna_properties_next, ColorManagedViewSettings_rna_properties_end, ColorManagedViewSettings_rna_properties_get, nullptr, nullptr, ColorManagedViewSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ColorManagedViewSettings_rna_type_ = {
		{&rna_ColorManagedViewSettings_look, 	&rna_ColorManagedViewSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_ColorManagedViewSettings_look_items[2] = {
		{0, "NONE", 0, "None", "Do not modify image in an artistic manner"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorManagedViewSettings_look_ = {
		{&rna_ColorManagedViewSettings_view_transform, 	&rna_ColorManagedViewSettings_rna_type,
		-1, "look", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Look",
		"Additional transform applied before view transform for artistic needs",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_look_get, ColorManagedViewSettings_look_set, rna_ColorManagedViewSettings_look_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorManagedViewSettings_look_items, 1, 0
	};

	static const EnumPropertyItem rna_ColorManagedViewSettings_view_transform_items[2] = {
		{0, "NONE", 0, "None", "Do not perform any color transform on display, use old non-color managed technique for display"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ColorManagedViewSettings_view_transform_ = {
		{&rna_ColorManagedViewSettings_exposure, 	&rna_ColorManagedViewSettings_look,
		-1, "view_transform", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "View",
		"View used when converting image to a display space",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_view_transform_get, ColorManagedViewSettings_view_transform_set, rna_ColorManagedViewSettings_view_transform_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ColorManagedViewSettings_view_transform_items, 1, 0
	};

	rna_ColorManagedViewSettings_exposure_ = {
		{&rna_ColorManagedViewSettings_gamma, 	&rna_ColorManagedViewSettings_view_transform,
		-1, "exposure", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Exposure",
		"Exposure (stops) applied before display transform, multiplying by 2^exposure",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, rna_ViewSettings_only_view_look_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorManagedViewSettings, exposure), RawPropertyType(5), nullptr},
		ColorManagedViewSettings_exposure_get, ColorManagedViewSettings_exposure_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -32.0f, 32.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ColorManagedViewSettings_gamma_ = {
		{&rna_ColorManagedViewSettings_curve_mapping, 	&rna_ColorManagedViewSettings_exposure,
		-1, "gamma", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gamma",
		"Additional gamma encoding after display transform, for output with custom gamma",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, rna_ViewSettings_only_view_look_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorManagedViewSettings, gamma), RawPropertyType(5), nullptr},
		ColorManagedViewSettings_gamma_get, ColorManagedViewSettings_gamma_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ColorManagedViewSettings_curve_mapping_ = {
		{&rna_ColorManagedViewSettings_use_curve_mapping, 	&rna_ColorManagedViewSettings_gamma,
		-1, "curve_mapping", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curve",
		"Color curve mapping applied before display transform",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_curve_mapping_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_ColorManagedViewSettings_use_curve_mapping_ = {
		{&rna_ColorManagedViewSettings_use_white_balance, 	&rna_ColorManagedViewSettings_curve_mapping,
		-1, "use_curve_mapping", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Curves",
		"Use RGB curved for pre-display transformation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, rna_ViewSettings_only_view_look_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_use_curve_mapping_get, ColorManagedViewSettings_use_curve_mapping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ColorManagedViewSettings_use_white_balance_ = {
		{&rna_ColorManagedViewSettings_white_balance_temperature, 	&rna_ColorManagedViewSettings_use_curve_mapping,
		-1, "use_white_balance", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use White Balance",
		"Perform chromatic adaption from a different white point",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, rna_ViewSettings_only_view_look_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_use_white_balance_get, ColorManagedViewSettings_use_white_balance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ColorManagedViewSettings_white_balance_temperature_ = {
		{&rna_ColorManagedViewSettings_white_balance_tint, 	&rna_ColorManagedViewSettings_use_white_balance,
		-1, "white_balance_temperature", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Temperature",
		"Color temperature of the scene\'s white point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_TEMPERATURE) | int(PROP_UNIT_COLOR_TEMPERATURE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, rna_ViewSettings_only_view_look_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorManagedViewSettings, temperature), RawPropertyType(5), nullptr},
		ColorManagedViewSettings_white_balance_temperature_get, ColorManagedViewSettings_white_balance_temperature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 2000.0f, 11000.0f, 1800.0f, 100000.0f, 100.0f, 0, nullptr, nullptr, 6500.0f, nullptr
	};

	rna_ColorManagedViewSettings_white_balance_tint_ = {
		{&rna_ColorManagedViewSettings_white_balance_whitepoint, 	&rna_ColorManagedViewSettings_white_balance_temperature,
		-1, "white_balance_tint", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tint",
		"Color tint of the scene\'s white point (the default of 10 matches daylight)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagement_update, 33554432, rna_ViewSettings_only_view_look_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorManagedViewSettings, tint), RawPropertyType(5), nullptr},
		ColorManagedViewSettings_white_balance_tint_get, ColorManagedViewSettings_white_balance_tint_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -150.0f, 150.0f, -500.0f, 500.0f, 1.0f, 1, nullptr, nullptr, 10.0f, nullptr
	};

	static float rna_ColorManagedViewSettings_white_balance_whitepoint_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ColorManagedViewSettings_white_balance_whitepoint_ = {
		{&rna_ColorManagedViewSettings_is_hdr, 	&rna_ColorManagedViewSettings_white_balance_tint,
		-1, "white_balance_whitepoint", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "White Point",
		"The color which gets mapped to white (automatically converted to/from temperature and tint)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_ColorManagement_update, 33554432, rna_ViewSettings_only_view_look_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ColorManagedViewSettings_white_balance_whitepoint_get, ColorManagedViewSettings_white_balance_whitepoint_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ColorManagedViewSettings_white_balance_whitepoint_default
	};

	rna_ColorManagedViewSettings_is_hdr_ = {
		{&rna_ColorManagedViewSettings_support_emulation, 	&rna_ColorManagedViewSettings_white_balance_whitepoint,
		-1, "is_hdr", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is HDR",
		"The display and view transform supports high dynamic range colors",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_is_hdr_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ColorManagedViewSettings_support_emulation_ = {
		{nullptr, 	&rna_ColorManagedViewSettings_is_hdr,
		-1, "support_emulation", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Support Emulation",
		"The display and view transform supports automatic emulation for another display device, using the display color spaces mechanism in OpenColorIO v2 configurations",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedViewSettings_support_emulation_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ColorManagedViewSettings;
	srna->cont.properties = {&rna_ColorManagedViewSettings_rna_properties, &rna_ColorManagedViewSettings_support_emulation};
	srna->identifier = "ColorManagedViewSettings";
	srna->flag = 516;
	srna->name = "ColorManagedViewSettings";
	srna->description = "Color management settings used for displaying images on the display";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ColorManagedViewSettings_rna_properties;
	srna->path = rna_ColorManagedViewSettings_path;
};

/* ColorManagedInputColorspaceSettings */
static CollectionPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_properties_;
PropertyRNA &rna_ColorManagedInputColorspaceSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ColorManagedInputColorspaceSettings_rna_properties_);

static PointerPropertyRNA rna_ColorManagedInputColorspaceSettings_rna_type_;
PropertyRNA &rna_ColorManagedInputColorspaceSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_ColorManagedInputColorspaceSettings_rna_type_);

static EnumPropertyRNA rna_ColorManagedInputColorspaceSettings_name_;
PropertyRNA &rna_ColorManagedInputColorspaceSettings_name = reinterpret_cast<PropertyRNA &>(rna_ColorManagedInputColorspaceSettings_name_);

static BoolPropertyRNA rna_ColorManagedInputColorspaceSettings_is_data_;
PropertyRNA &rna_ColorManagedInputColorspaceSettings_is_data = reinterpret_cast<PropertyRNA &>(rna_ColorManagedInputColorspaceSettings_is_data_);

StructRNA *RNA_ColorManagedInputColorspaceSettings;
void register_struct_ColorManagedInputColorspaceSettings(BlenderRNA &brna)
{
	rna_ColorManagedInputColorspaceSettings_rna_properties_ = {
		{&rna_ColorManagedInputColorspaceSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedInputColorspaceSettings_rna_properties_begin, ColorManagedInputColorspaceSettings_rna_properties_next, ColorManagedInputColorspaceSettings_rna_properties_end, ColorManagedInputColorspaceSettings_rna_properties_get, nullptr, nullptr, ColorManagedInputColorspaceSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ColorManagedInputColorspaceSettings_rna_type_ = {
		{&rna_ColorManagedInputColorspaceSettings_name, 	&rna_ColorManagedInputColorspaceSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedInputColorspaceSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ColorManagedInputColorspaceSettings_name_ = {
		{&rna_ColorManagedInputColorspaceSettings_is_data, 	&rna_ColorManagedInputColorspaceSettings_rna_type,
		-1, "name", 16777217, 0, 0, 0, 0, PropertyPathTemplateType(0), "Input Color Space",
		"Color space in the image file, to convert to and from when saving and loading the image",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagedColorspaceSettings_reload_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedInputColorspaceSettings_name_get, ColorManagedInputColorspaceSettings_name_set, rna_ColorManagedColorspaceSettings_colorspace_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_color_space_convert_default_items, 1, 0
	};

	rna_ColorManagedInputColorspaceSettings_is_data_ = {
		{nullptr, 	&rna_ColorManagedInputColorspaceSettings_name,
		-1, "is_data", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Data",
		"Treat image as non-color data without color management, like normal or displacement maps",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagedColorspaceSettings_reload_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedInputColorspaceSettings_is_data_get, ColorManagedInputColorspaceSettings_is_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ColorManagedInputColorspaceSettings;
	srna->cont.properties = {&rna_ColorManagedInputColorspaceSettings_rna_properties, &rna_ColorManagedInputColorspaceSettings_is_data};
	srna->identifier = "ColorManagedInputColorspaceSettings";
	srna->flag = 516;
	srna->name = "ColorManagedInputColorspaceSettings";
	srna->description = "Input color space settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ColorManagedInputColorspaceSettings_rna_properties;
	srna->path = rna_ColorManagedInputColorspaceSettings_path;
};

/* ColorManagedSequencerColorspaceSettings */
static CollectionPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_properties_;
PropertyRNA &rna_ColorManagedSequencerColorspaceSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ColorManagedSequencerColorspaceSettings_rna_properties_);

static PointerPropertyRNA rna_ColorManagedSequencerColorspaceSettings_rna_type_;
PropertyRNA &rna_ColorManagedSequencerColorspaceSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_ColorManagedSequencerColorspaceSettings_rna_type_);

static EnumPropertyRNA rna_ColorManagedSequencerColorspaceSettings_name_;
PropertyRNA &rna_ColorManagedSequencerColorspaceSettings_name = reinterpret_cast<PropertyRNA &>(rna_ColorManagedSequencerColorspaceSettings_name_);

StructRNA *RNA_ColorManagedSequencerColorspaceSettings;
void register_struct_ColorManagedSequencerColorspaceSettings(BlenderRNA &brna)
{
	rna_ColorManagedSequencerColorspaceSettings_rna_properties_ = {
		{&rna_ColorManagedSequencerColorspaceSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedSequencerColorspaceSettings_rna_properties_begin, ColorManagedSequencerColorspaceSettings_rna_properties_next, ColorManagedSequencerColorspaceSettings_rna_properties_end, ColorManagedSequencerColorspaceSettings_rna_properties_get, nullptr, nullptr, ColorManagedSequencerColorspaceSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ColorManagedSequencerColorspaceSettings_rna_type_ = {
		{&rna_ColorManagedSequencerColorspaceSettings_name, 	&rna_ColorManagedSequencerColorspaceSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedSequencerColorspaceSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ColorManagedSequencerColorspaceSettings_name_ = {
		{nullptr, 	&rna_ColorManagedSequencerColorspaceSettings_rna_type,
		-1, "name", 16777219, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Space",
		"Color space that the sequencer operates in",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ColorManagedColorspaceSettings_reload_update, 33554432, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ColorManagedSequencerColorspaceSettings_name_get, ColorManagedSequencerColorspaceSettings_name_set, rna_ColorManagedColorspaceSettings_colorspace_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_color_space_convert_default_items, 1, 0
	};

	StructRNA *srna = RNA_ColorManagedSequencerColorspaceSettings;
	srna->cont.properties = {&rna_ColorManagedSequencerColorspaceSettings_rna_properties, &rna_ColorManagedSequencerColorspaceSettings_name};
	srna->identifier = "ColorManagedSequencerColorspaceSettings";
	srna->flag = 516;
	srna->name = "ColorManagedSequencerColorspaceSettings";
	srna->description = "Input color space settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ColorManagedSequencerColorspaceSettings_rna_properties;
	srna->path = rna_ColorManagedSequencerColorspaceSettings_path;
};


}  // namespace blender
