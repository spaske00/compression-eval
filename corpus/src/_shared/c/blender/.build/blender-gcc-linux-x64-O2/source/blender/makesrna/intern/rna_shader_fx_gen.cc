
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

#include "rna_shader_fx.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxBlur_size;
extern PropertyRNA &rna_ShaderFxBlur_samples;
extern PropertyRNA &rna_ShaderFxBlur_rotation;
extern PropertyRNA &rna_ShaderFxBlur_use_dof_mode;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxColorize_factor;
extern PropertyRNA &rna_ShaderFxColorize_low_color;
extern PropertyRNA &rna_ShaderFxColorize_high_color;
extern PropertyRNA &rna_ShaderFxColorize_mode;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxWave_orientation;
extern PropertyRNA &rna_ShaderFxWave_amplitude;
extern PropertyRNA &rna_ShaderFxWave_period;
extern PropertyRNA &rna_ShaderFxWave_phase;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxPixel_size;
extern PropertyRNA &rna_ShaderFxPixel_use_antialiasing;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxRim_offset;
extern PropertyRNA &rna_ShaderFxRim_rim_color;
extern PropertyRNA &rna_ShaderFxRim_mask_color;
extern PropertyRNA &rna_ShaderFxRim_mode;
extern PropertyRNA &rna_ShaderFxRim_blur;
extern PropertyRNA &rna_ShaderFxRim_samples;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxShadow_object;
extern PropertyRNA &rna_ShaderFxShadow_offset;
extern PropertyRNA &rna_ShaderFxShadow_scale;
extern PropertyRNA &rna_ShaderFxShadow_shadow_color;
extern PropertyRNA &rna_ShaderFxShadow_orientation;
extern PropertyRNA &rna_ShaderFxShadow_amplitude;
extern PropertyRNA &rna_ShaderFxShadow_period;
extern PropertyRNA &rna_ShaderFxShadow_phase;
extern PropertyRNA &rna_ShaderFxShadow_rotation;
extern PropertyRNA &rna_ShaderFxShadow_blur;
extern PropertyRNA &rna_ShaderFxShadow_samples;
extern PropertyRNA &rna_ShaderFxShadow_use_object;
extern PropertyRNA &rna_ShaderFxShadow_use_wave;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxGlow_glow_color;
extern PropertyRNA &rna_ShaderFxGlow_opacity;
extern PropertyRNA &rna_ShaderFxGlow_select_color;
extern PropertyRNA &rna_ShaderFxGlow_mode;
extern PropertyRNA &rna_ShaderFxGlow_threshold;
extern PropertyRNA &rna_ShaderFxGlow_size;
extern PropertyRNA &rna_ShaderFxGlow_samples;
extern PropertyRNA &rna_ShaderFxGlow_use_glow_under;
extern PropertyRNA &rna_ShaderFxGlow_rotation;
extern PropertyRNA &rna_ShaderFxGlow_blend_mode;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxSwirl_radius;
extern PropertyRNA &rna_ShaderFxSwirl_angle;
extern PropertyRNA &rna_ShaderFxSwirl_use_transparent;
extern PropertyRNA &rna_ShaderFxSwirl_object;


extern PropertyRNA &rna_ShaderFx_rna_properties;
extern PropertyRNA &rna_ShaderFx_rna_type;
extern PropertyRNA &rna_ShaderFx_name;
extern PropertyRNA &rna_ShaderFx_type;
extern PropertyRNA &rna_ShaderFx_show_viewport;
extern PropertyRNA &rna_ShaderFx_show_render;
extern PropertyRNA &rna_ShaderFx_show_in_editmode;
extern PropertyRNA &rna_ShaderFx_show_expanded;

extern PropertyRNA &rna_ShaderFxFlip_use_flip_x;
extern PropertyRNA &rna_ShaderFxFlip_use_flip_y;

static PointerRNA ShaderFx_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ShaderFx_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ShaderFx_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ShaderFx_rna_properties_get(iter);
    }
}

void ShaderFx_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ShaderFx_rna_properties_get(iter);
    }
}

void ShaderFx_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ShaderFx_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ShaderFx_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ShaderFx_name_get(PointerRNA *ptr, char *value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int ShaderFx_name_length(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return strlen(data->name);
}

void ShaderFx_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ShaderFx_name_set;
    fn(ptr, value);
}

int ShaderFx_type_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (int)(data->type);
}

bool ShaderFx_show_viewport_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return ((uint64_t(data->mode) & 1) != 0);
}

void ShaderFx_show_viewport_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 1); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(1)); }
}

bool ShaderFx_show_render_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return ((uint64_t(data->mode) & 2) != 0);
}

void ShaderFx_show_render_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 2); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(2)); }
}

bool ShaderFx_show_in_editmode_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return ((uint64_t(data->mode) & 4) != 0);
}

void ShaderFx_show_in_editmode_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    if (value) { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | 4); }
    else { data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(4)); }
}

bool ShaderFx_show_expanded_get(PointerRNA *ptr)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    return (bool)(data->ui_expand_flag);
}

void ShaderFx_show_expanded_set(PointerRNA *ptr, bool value)
{
    ShaderFxData *data = (ShaderFxData *)(ptr->data);
    data->ui_expand_flag = (std::remove_reference_t<decltype(data->ui_expand_flag)>)value;
}

void ShaderFxBlur_size_get(PointerRNA *ptr, float values[2])
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->radius)[i]);
    }
}

void ShaderFxBlur_size_set(PointerRNA *ptr, const float values[2])
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->radius)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

int ShaderFxBlur_samples_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

void ShaderFxBlur_samples_set(PointerRNA *ptr, int value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    data->samples = (std::remove_reference_t<decltype(data->samples)>)std::clamp(value, 0, 32);
}

float ShaderFxBlur_rotation_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

void ShaderFxBlur_rotation_set(PointerRNA *ptr, float value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)value;
}

bool ShaderFxBlur_use_dof_mode_get(PointerRNA *ptr)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ShaderFxBlur_use_dof_mode_set(PointerRNA *ptr, bool value)
{
    BlurShaderFxData *data = (BlurShaderFxData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

float ShaderFxColorize_factor_get(PointerRNA *ptr)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    return (float)(data->factor);
}

void ShaderFxColorize_factor_set(PointerRNA *ptr, float value)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    data->factor = (std::remove_reference_t<decltype(data->factor)>)std::clamp(value, 0.0f, 1.0f);
}

void ShaderFxColorize_low_color_get(PointerRNA *ptr, float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->low_color)[i]);
    }
}

void ShaderFxColorize_low_color_set(PointerRNA *ptr, const float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->low_color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

void ShaderFxColorize_high_color_get(PointerRNA *ptr, float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->high_color)[i]);
    }
}

void ShaderFxColorize_high_color_set(PointerRNA *ptr, const float values[4])
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->high_color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

int ShaderFxColorize_mode_get(PointerRNA *ptr)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

void ShaderFxColorize_mode_set(PointerRNA *ptr, int value)
{
    ColorizeShaderFxData *data = (ColorizeShaderFxData *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

int ShaderFxWave_orientation_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (int)(data->orientation);
}

void ShaderFxWave_orientation_set(PointerRNA *ptr, int value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    data->orientation = (std::remove_reference_t<decltype(data->orientation)>)value;
}

float ShaderFxWave_amplitude_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->amplitude);
}

void ShaderFxWave_amplitude_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    data->amplitude = (std::remove_reference_t<decltype(data->amplitude)>)std::clamp(value, 0.0f, FLT_MAX);
}

float ShaderFxWave_period_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->period);
}

void ShaderFxWave_period_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    data->period = (std::remove_reference_t<decltype(data->period)>)std::clamp(value, 0.0f, FLT_MAX);
}

float ShaderFxWave_phase_get(PointerRNA *ptr)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    return (float)(data->phase);
}

void ShaderFxWave_phase_set(PointerRNA *ptr, float value)
{
    WaveShaderFxData *data = (WaveShaderFxData *)(ptr->data);
    data->phase = (std::remove_reference_t<decltype(data->phase)>)value;
}

void ShaderFxPixel_size_get(PointerRNA *ptr, int values[2])
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->size)[i]);
    }
}

void ShaderFxPixel_size_set(PointerRNA *ptr, const int values[2])
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((int *)data->size)[i] = std::clamp(values[i], 1, 32767);
    }
}

bool ShaderFxPixel_use_antialiasing_get(PointerRNA *ptr)
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void ShaderFxPixel_use_antialiasing_set(PointerRNA *ptr, bool value)
{
    PixelShaderFxData *data = (PixelShaderFxData *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

void ShaderFxRim_offset_get(PointerRNA *ptr, int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->offset)[i]);
    }
}

void ShaderFxRim_offset_set(PointerRNA *ptr, const int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((int *)data->offset)[i] = std::clamp(values[i], -32768, 32767);
    }
}

void ShaderFxRim_rim_color_get(PointerRNA *ptr, float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rim_rgb)[i]);
    }
}

void ShaderFxRim_rim_color_set(PointerRNA *ptr, const float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->rim_rgb)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

void ShaderFxRim_mask_color_get(PointerRNA *ptr, float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->mask_rgb)[i]);
    }
}

void ShaderFxRim_mask_color_set(PointerRNA *ptr, const float values[3])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->mask_rgb)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

int ShaderFxRim_mode_get(PointerRNA *ptr)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

void ShaderFxRim_mode_set(PointerRNA *ptr, int value)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

void ShaderFxRim_blur_get(PointerRNA *ptr, int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->blur)[i]);
    }
}

void ShaderFxRim_blur_set(PointerRNA *ptr, const int values[2])
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((int *)data->blur)[i] = std::clamp(values[i], 0, 32767);
    }
}

int ShaderFxRim_samples_get(PointerRNA *ptr)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

void ShaderFxRim_samples_set(PointerRNA *ptr, int value)
{
    RimShaderFxData *data = (RimShaderFxData *)(ptr->data);
    data->samples = (std::remove_reference_t<decltype(data->samples)>)std::clamp(value, 0, 32);
}

PointerRNA ShaderFxShadow_object_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->object);
}

void ShaderFxShadow_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ShadowShaderFx_object_set;
    fn(ptr, value, reports);
}

void ShaderFxShadow_offset_get(PointerRNA *ptr, int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->offset)[i]);
    }
}

void ShaderFxShadow_offset_set(PointerRNA *ptr, const int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((int *)data->offset)[i] = std::clamp(values[i], -32768, 32767);
    }
}

void ShaderFxShadow_scale_get(PointerRNA *ptr, float values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

void ShaderFxShadow_scale_set(PointerRNA *ptr, const float values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

void ShaderFxShadow_shadow_color_get(PointerRNA *ptr, float values[4])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->shadow_rgba)[i]);
    }
}

void ShaderFxShadow_shadow_color_set(PointerRNA *ptr, const float values[4])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->shadow_rgba)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

int ShaderFxShadow_orientation_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (int)(data->orientation);
}

void ShaderFxShadow_orientation_set(PointerRNA *ptr, int value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->orientation = (std::remove_reference_t<decltype(data->orientation)>)value;
}

float ShaderFxShadow_amplitude_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->amplitude);
}

void ShaderFxShadow_amplitude_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->amplitude = (std::remove_reference_t<decltype(data->amplitude)>)std::clamp(value, 0.0f, FLT_MAX);
}

float ShaderFxShadow_period_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->period);
}

void ShaderFxShadow_period_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->period = (std::remove_reference_t<decltype(data->period)>)std::clamp(value, 0.0f, FLT_MAX);
}

float ShaderFxShadow_phase_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->phase);
}

void ShaderFxShadow_phase_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->phase = (std::remove_reference_t<decltype(data->phase)>)value;
}

float ShaderFxShadow_rotation_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

void ShaderFxShadow_rotation_set(PointerRNA *ptr, float value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)std::clamp(value, -6.2831854820f, 6.2831854820f);
}

void ShaderFxShadow_blur_get(PointerRNA *ptr, int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)(((int *)data->blur)[i]);
    }
}

void ShaderFxShadow_blur_set(PointerRNA *ptr, const int values[2])
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((int *)data->blur)[i] = std::clamp(values[i], 0, 32767);
    }
}

int ShaderFxShadow_samples_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

void ShaderFxShadow_samples_set(PointerRNA *ptr, int value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    data->samples = (std::remove_reference_t<decltype(data->samples)>)std::clamp(value, 0, 32);
}

bool ShaderFxShadow_use_object_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ShaderFxShadow_use_object_set(PointerRNA *ptr, bool value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ShaderFxShadow_use_wave_get(PointerRNA *ptr)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ShaderFxShadow_use_wave_set(PointerRNA *ptr, bool value)
{
    ShadowShaderFxData *data = (ShadowShaderFxData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

void ShaderFxGlow_glow_color_get(PointerRNA *ptr, float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->glow_color)[i]);
    }
}

void ShaderFxGlow_glow_color_set(PointerRNA *ptr, const float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->glow_color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

float ShaderFxGlow_opacity_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->glow_color[3]);
}

void ShaderFxGlow_opacity_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->glow_color[3] = (std::remove_reference_t<decltype(data->glow_color[3])>)std::clamp(value, 0.0f, 1.0f);
}

void ShaderFxGlow_select_color_get(PointerRNA *ptr, float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->select_color)[i]);
    }
}

void ShaderFxGlow_select_color_set(PointerRNA *ptr, const float values[3])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->select_color)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

int ShaderFxGlow_mode_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->mode);
}

void ShaderFxGlow_mode_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

float ShaderFxGlow_threshold_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->threshold);
}

void ShaderFxGlow_threshold_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->threshold = (std::remove_reference_t<decltype(data->threshold)>)std::clamp(value, 0.0f, 1.0f);
}

void ShaderFxGlow_size_get(PointerRNA *ptr, float values[2])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->blur)[i]);
    }
}

void ShaderFxGlow_size_set(PointerRNA *ptr, const float values[2])
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->blur)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

int ShaderFxGlow_samples_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->samples);
}

void ShaderFxGlow_samples_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->samples = (std::remove_reference_t<decltype(data->samples)>)std::clamp(value, 1, 32);
}

bool ShaderFxGlow_use_glow_under_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ShaderFxGlow_use_glow_under_set(PointerRNA *ptr, bool value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

float ShaderFxGlow_rotation_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (float)(data->rotation);
}

void ShaderFxGlow_rotation_set(PointerRNA *ptr, float value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->rotation = (std::remove_reference_t<decltype(data->rotation)>)value;
}

int ShaderFxGlow_blend_mode_get(PointerRNA *ptr)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    return (int)(data->blend_mode);
}

void ShaderFxGlow_blend_mode_set(PointerRNA *ptr, int value)
{
    GlowShaderFxData *data = (GlowShaderFxData *)(ptr->data);
    data->blend_mode = (std::remove_reference_t<decltype(data->blend_mode)>)value;
}

int ShaderFxSwirl_radius_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return (int)(data->radius);
}

void ShaderFxSwirl_radius_set(PointerRNA *ptr, int value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    data->radius = (std::remove_reference_t<decltype(data->radius)>)std::clamp(value, 0, 32767);
}

float ShaderFxSwirl_angle_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return (float)(data->angle);
}

void ShaderFxSwirl_angle_set(PointerRNA *ptr, float value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    data->angle = (std::remove_reference_t<decltype(data->angle)>)std::clamp(value, -31.4159259796f, 31.4159259796f);
}

bool ShaderFxSwirl_use_transparent_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ShaderFxSwirl_use_transparent_set(PointerRNA *ptr, bool value)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

PointerRNA ShaderFxSwirl_object_get(PointerRNA *ptr)
{
    SwirlShaderFxData *data = (SwirlShaderFxData *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->object);
}

void ShaderFxSwirl_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_SwirlShaderFx_object_set;
    fn(ptr, value, reports);
}

bool ShaderFxFlip_use_flip_x_get(PointerRNA *ptr)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ShaderFxFlip_use_flip_x_set(PointerRNA *ptr, bool value)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ShaderFxFlip_use_flip_y_get(PointerRNA *ptr)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ShaderFxFlip_use_flip_y_set(PointerRNA *ptr, bool value)
{
    FlipShaderFxData *data = (FlipShaderFxData *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}











/* ShaderFx */
static CollectionPropertyRNA rna_ShaderFx_rna_properties_;
PropertyRNA &rna_ShaderFx_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ShaderFx_rna_properties_);

static PointerPropertyRNA rna_ShaderFx_rna_type_;
PropertyRNA &rna_ShaderFx_rna_type = reinterpret_cast<PropertyRNA &>(rna_ShaderFx_rna_type_);

static StringPropertyRNA rna_ShaderFx_name_;
PropertyRNA &rna_ShaderFx_name = reinterpret_cast<PropertyRNA &>(rna_ShaderFx_name_);

static EnumPropertyRNA rna_ShaderFx_type_;
PropertyRNA &rna_ShaderFx_type = reinterpret_cast<PropertyRNA &>(rna_ShaderFx_type_);

static BoolPropertyRNA rna_ShaderFx_show_viewport_;
PropertyRNA &rna_ShaderFx_show_viewport = reinterpret_cast<PropertyRNA &>(rna_ShaderFx_show_viewport_);

static BoolPropertyRNA rna_ShaderFx_show_render_;
PropertyRNA &rna_ShaderFx_show_render = reinterpret_cast<PropertyRNA &>(rna_ShaderFx_show_render_);

static BoolPropertyRNA rna_ShaderFx_show_in_editmode_;
PropertyRNA &rna_ShaderFx_show_in_editmode = reinterpret_cast<PropertyRNA &>(rna_ShaderFx_show_in_editmode_);

static BoolPropertyRNA rna_ShaderFx_show_expanded_;
PropertyRNA &rna_ShaderFx_show_expanded = reinterpret_cast<PropertyRNA &>(rna_ShaderFx_show_expanded_);

StructRNA *RNA_ShaderFx;
void register_struct_ShaderFx(BlenderRNA &brna)
{
	rna_ShaderFx_rna_properties_ = {
		{&rna_ShaderFx_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFx_rna_properties_begin, ShaderFx_rna_properties_next, ShaderFx_rna_properties_end, ShaderFx_rna_properties_get, nullptr, nullptr, ShaderFx_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ShaderFx_rna_type_ = {
		{&rna_ShaderFx_name, 	&rna_ShaderFx_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFx_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ShaderFx_name_ = {
		{&rna_ShaderFx_type, 	&rna_ShaderFx_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Effect name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 102760453, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFx_name_get, ShaderFx_name_length, ShaderFx_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ShaderFx_type_ = {
		{&rna_ShaderFx_show_viewport, 	&rna_ShaderFx_name,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "ID",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShaderFxData, type), RawPropertyType(0), nullptr},
		ShaderFx_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_shaderfx_type_items, 9, 1
	};

	rna_ShaderFx_show_viewport_ = {
		{&rna_ShaderFx_show_render, 	&rna_ShaderFx_type,
		-1, "show_viewport", 69635, 1, 0, 0, 0, PropertyPathTemplateType(0), "Realtime",
		"Display effect in viewport",
		31, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFx_show_viewport_get, ShaderFx_show_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShaderFx_show_render_ = {
		{&rna_ShaderFx_show_in_editmode, 	&rna_ShaderFx_show_viewport,
		-1, "show_render", 4099, 1, 0, 0, 0, PropertyPathTemplateType(0), "Render",
		"Use effect during render",
		27, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFx_show_render_get, ShaderFx_show_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShaderFx_show_in_editmode_ = {
		{&rna_ShaderFx_show_expanded, 	&rna_ShaderFx_show_render,
		-1, "show_in_editmode", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edit Mode",
		"Display effect in Edit mode",
		157, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFx_show_in_editmode_get, ShaderFx_show_in_editmode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShaderFx_show_expanded_ = {
		{nullptr, 	&rna_ShaderFx_show_in_editmode,
		-1, "show_expanded", 1073745923, 1, 0, 4, 0, PropertyPathTemplateType(0), "Expanded",
		"Set effect expansion in the user interface",
		33, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShaderFxData, ui_expand_flag), RawPropertyType(1), nullptr},
		ShaderFx_show_expanded_get, ShaderFx_show_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ShaderFx;
	srna->cont.properties = {&rna_ShaderFx_rna_properties, &rna_ShaderFx_show_expanded};
	srna->identifier = "ShaderFx";
	srna->flag = 516;
	srna->name = "ShaderFx";
	srna->description = "Effect affecting the Grease Pencil object";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Gaussian Blur Effect */
static FloatPropertyRNA rna_ShaderFxBlur_size_;
PropertyRNA &rna_ShaderFxBlur_size = reinterpret_cast<PropertyRNA &>(rna_ShaderFxBlur_size_);

static IntPropertyRNA rna_ShaderFxBlur_samples_;
PropertyRNA &rna_ShaderFxBlur_samples = reinterpret_cast<PropertyRNA &>(rna_ShaderFxBlur_samples_);

static FloatPropertyRNA rna_ShaderFxBlur_rotation_;
PropertyRNA &rna_ShaderFxBlur_rotation = reinterpret_cast<PropertyRNA &>(rna_ShaderFxBlur_rotation_);

static BoolPropertyRNA rna_ShaderFxBlur_use_dof_mode_;
PropertyRNA &rna_ShaderFxBlur_use_dof_mode = reinterpret_cast<PropertyRNA &>(rna_ShaderFxBlur_use_dof_mode_);

StructRNA *RNA_ShaderFxBlur;
void register_struct_ShaderFxBlur(BlenderRNA &brna)
{
	static float rna_ShaderFxBlur_size_default[2] = {
		0.0f,
		0.0f
	};
	rna_ShaderFxBlur_size_ = {
		{&rna_ShaderFxBlur_samples, 	nullptr,
		-1, "size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Factor of Blur",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BlurShaderFxData, radius), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxBlur_size_get, ShaderFxBlur_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxBlur_size_default
	};

	rna_ShaderFxBlur_samples_ = {
		{&rna_ShaderFxBlur_rotation, 	&rna_ShaderFxBlur_size,
		-1, "samples", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Samples",
		"Number of Blur Samples (zero, disable blur)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BlurShaderFxData, samples), RawPropertyType(0), nullptr},
		ShaderFxBlur_samples_get, ShaderFxBlur_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32, 0, 32, 2, nullptr, nullptr, 4, nullptr
	};

	rna_ShaderFxBlur_rotation_ = {
		{&rna_ShaderFxBlur_use_dof_mode, 	&rna_ShaderFxBlur_samples,
		-1, "rotation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Rotation of the effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BlurShaderFxData, rotation), RawPropertyType(5), nullptr},
		ShaderFxBlur_rotation_get, ShaderFxBlur_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShaderFxBlur_use_dof_mode_ = {
		{nullptr, 	&rna_ShaderFxBlur_rotation,
		-1, "use_dof_mode", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use as Depth Of Field",
		"Blur using camera depth of field",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxBlur_use_dof_mode_get, ShaderFxBlur_use_dof_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ShaderFxBlur;
	srna->cont.properties = {&rna_ShaderFxBlur_size, &rna_ShaderFxBlur_use_dof_mode};
	srna->identifier = "ShaderFxBlur";
	srna->flag = 516;
	srna->name = "Gaussian Blur Effect";
	srna->description = "Gaussian Blur effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Colorize Effect */
static FloatPropertyRNA rna_ShaderFxColorize_factor_;
PropertyRNA &rna_ShaderFxColorize_factor = reinterpret_cast<PropertyRNA &>(rna_ShaderFxColorize_factor_);

static FloatPropertyRNA rna_ShaderFxColorize_low_color_;
PropertyRNA &rna_ShaderFxColorize_low_color = reinterpret_cast<PropertyRNA &>(rna_ShaderFxColorize_low_color_);

static FloatPropertyRNA rna_ShaderFxColorize_high_color_;
PropertyRNA &rna_ShaderFxColorize_high_color = reinterpret_cast<PropertyRNA &>(rna_ShaderFxColorize_high_color_);

static EnumPropertyRNA rna_ShaderFxColorize_mode_;
PropertyRNA &rna_ShaderFxColorize_mode = reinterpret_cast<PropertyRNA &>(rna_ShaderFxColorize_mode_);

StructRNA *RNA_ShaderFxColorize;
void register_struct_ShaderFxColorize(BlenderRNA &brna)
{
	rna_ShaderFxColorize_factor_ = {
		{&rna_ShaderFxColorize_low_color, 	nullptr,
		-1, "factor", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Factor",
		"Mix factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorizeShaderFxData, factor), RawPropertyType(5), nullptr},
		ShaderFxColorize_factor_get, ShaderFxColorize_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_ShaderFxColorize_low_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShaderFxColorize_low_color_ = {
		{&rna_ShaderFxColorize_high_color, 	&rna_ShaderFxColorize_factor,
		-1, "low_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Low Color",
		"First color used for effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorizeShaderFxData, low_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxColorize_low_color_get, ShaderFxColorize_low_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxColorize_low_color_default
	};

	static float rna_ShaderFxColorize_high_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShaderFxColorize_high_color_ = {
		{&rna_ShaderFxColorize_mode, 	&rna_ShaderFxColorize_low_color,
		-1, "high_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "High Color",
		"Second color used for effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorizeShaderFxData, high_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxColorize_high_color_get, ShaderFxColorize_high_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxColorize_high_color_default
	};

	static const EnumPropertyItem rna_ShaderFxColorize_mode_items[6] = {
		{0, "GRAYSCALE", 0, "Gray Scale", ""	},
		{1, "SEPIA", 0, "Sepia", ""	},
		{2, "DUOTONE", 0, "Duotone", ""	},
		{4, "TRANSPARENT", 0, "Transparent", ""	},
		{3, "CUSTOM", 0, "Custom", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShaderFxColorize_mode_ = {
		{nullptr, 	&rna_ShaderFxColorize_high_color,
		-1, "mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Effect mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ColorizeShaderFxData, mode), RawPropertyType(0), nullptr},
		ShaderFxColorize_mode_get, ShaderFxColorize_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShaderFxColorize_mode_items, 5, 0
	};

	StructRNA *srna = RNA_ShaderFxColorize;
	srna->cont.properties = {&rna_ShaderFxColorize_factor, &rna_ShaderFxColorize_mode};
	srna->identifier = "ShaderFxColorize";
	srna->flag = 516;
	srna->name = "Colorize Effect";
	srna->description = "Colorize effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Wave Deformation Effect */
static EnumPropertyRNA rna_ShaderFxWave_orientation_;
PropertyRNA &rna_ShaderFxWave_orientation = reinterpret_cast<PropertyRNA &>(rna_ShaderFxWave_orientation_);

static FloatPropertyRNA rna_ShaderFxWave_amplitude_;
PropertyRNA &rna_ShaderFxWave_amplitude = reinterpret_cast<PropertyRNA &>(rna_ShaderFxWave_amplitude_);

static FloatPropertyRNA rna_ShaderFxWave_period_;
PropertyRNA &rna_ShaderFxWave_period = reinterpret_cast<PropertyRNA &>(rna_ShaderFxWave_period_);

static FloatPropertyRNA rna_ShaderFxWave_phase_;
PropertyRNA &rna_ShaderFxWave_phase = reinterpret_cast<PropertyRNA &>(rna_ShaderFxWave_phase_);

StructRNA *RNA_ShaderFxWave;
void register_struct_ShaderFxWave(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_ShaderFxWave_orientation_items[3] = {
		{0, "HORIZONTAL", 0, "Horizontal", ""	},
		{1, "VERTICAL", 0, "Vertical", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShaderFxWave_orientation_ = {
		{&rna_ShaderFxWave_amplitude, 	nullptr,
		-1, "orientation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Orientation",
		"Direction of the wave",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WaveShaderFxData, orientation), RawPropertyType(0), nullptr},
		ShaderFxWave_orientation_get, ShaderFxWave_orientation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShaderFxWave_orientation_items, 2, 0
	};

	rna_ShaderFxWave_amplitude_ = {
		{&rna_ShaderFxWave_period, 	&rna_ShaderFxWave_orientation,
		-1, "amplitude", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Amplitude",
		"Amplitude of Wave",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WaveShaderFxData, amplitude), RawPropertyType(5), nullptr},
		ShaderFxWave_amplitude_get, ShaderFxWave_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShaderFxWave_period_ = {
		{&rna_ShaderFxWave_phase, 	&rna_ShaderFxWave_amplitude,
		-1, "period", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Period",
		"Period of Wave",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WaveShaderFxData, period), RawPropertyType(5), nullptr},
		ShaderFxWave_period_get, ShaderFxWave_period_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShaderFxWave_phase_ = {
		{nullptr, 	&rna_ShaderFxWave_period,
		-1, "phase", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Phase",
		"Phase Shift of Wave",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(WaveShaderFxData, phase), RawPropertyType(5), nullptr},
		ShaderFxWave_phase_get, ShaderFxWave_phase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ShaderFxWave;
	srna->cont.properties = {&rna_ShaderFxWave_orientation, &rna_ShaderFxWave_phase};
	srna->identifier = "ShaderFxWave";
	srna->flag = 516;
	srna->name = "Wave Deformation Effect";
	srna->description = "Wave Deformation effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Pixelate Effect */
static IntPropertyRNA rna_ShaderFxPixel_size_;
PropertyRNA &rna_ShaderFxPixel_size = reinterpret_cast<PropertyRNA &>(rna_ShaderFxPixel_size_);

static BoolPropertyRNA rna_ShaderFxPixel_use_antialiasing_;
PropertyRNA &rna_ShaderFxPixel_use_antialiasing = reinterpret_cast<PropertyRNA &>(rna_ShaderFxPixel_use_antialiasing_);

StructRNA *RNA_ShaderFxPixel;
void register_struct_ShaderFxPixel(BlenderRNA &brna)
{
	static int rna_ShaderFxPixel_size_default[2] = {
		0,
		0
	};
	rna_ShaderFxPixel_size_ = {
		{&rna_ShaderFxPixel_use_antialiasing, 	nullptr,
		-1, "size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Pixel size",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(PixelShaderFxData, size), RawPropertyType(0), nullptr},
		nullptr, nullptr, ShaderFxPixel_size_get, ShaderFxPixel_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 32767, 1, 32767, 1, nullptr, nullptr, 0, rna_ShaderFxPixel_size_default
	};

	rna_ShaderFxPixel_use_antialiasing_ = {
		{nullptr, 	&rna_ShaderFxPixel_size,
		-1, "use_antialiasing", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Antialiasing",
		"Antialias pixels",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxPixel_use_antialiasing_get, ShaderFxPixel_use_antialiasing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	StructRNA *srna = RNA_ShaderFxPixel;
	srna->cont.properties = {&rna_ShaderFxPixel_size, &rna_ShaderFxPixel_use_antialiasing};
	srna->identifier = "ShaderFxPixel";
	srna->flag = 516;
	srna->name = "Pixelate Effect";
	srna->description = "Pixelate effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Rim Effect */
static IntPropertyRNA rna_ShaderFxRim_offset_;
PropertyRNA &rna_ShaderFxRim_offset = reinterpret_cast<PropertyRNA &>(rna_ShaderFxRim_offset_);

static FloatPropertyRNA rna_ShaderFxRim_rim_color_;
PropertyRNA &rna_ShaderFxRim_rim_color = reinterpret_cast<PropertyRNA &>(rna_ShaderFxRim_rim_color_);

static FloatPropertyRNA rna_ShaderFxRim_mask_color_;
PropertyRNA &rna_ShaderFxRim_mask_color = reinterpret_cast<PropertyRNA &>(rna_ShaderFxRim_mask_color_);

static EnumPropertyRNA rna_ShaderFxRim_mode_;
PropertyRNA &rna_ShaderFxRim_mode = reinterpret_cast<PropertyRNA &>(rna_ShaderFxRim_mode_);

static IntPropertyRNA rna_ShaderFxRim_blur_;
PropertyRNA &rna_ShaderFxRim_blur = reinterpret_cast<PropertyRNA &>(rna_ShaderFxRim_blur_);

static IntPropertyRNA rna_ShaderFxRim_samples_;
PropertyRNA &rna_ShaderFxRim_samples = reinterpret_cast<PropertyRNA &>(rna_ShaderFxRim_samples_);

StructRNA *RNA_ShaderFxRim;
void register_struct_ShaderFxRim(BlenderRNA &brna)
{
	static int rna_ShaderFxRim_offset_default[2] = {
		0,
		0
	};
	rna_ShaderFxRim_offset_ = {
		{&rna_ShaderFxRim_rim_color, 	nullptr,
		-1, "offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Offset of the rim",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RimShaderFxData, offset), RawPropertyType(0), nullptr},
		nullptr, nullptr, ShaderFxRim_offset_get, ShaderFxRim_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, rna_ShaderFxRim_offset_default
	};

	static float rna_ShaderFxRim_rim_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShaderFxRim_rim_color_ = {
		{&rna_ShaderFxRim_mask_color, 	&rna_ShaderFxRim_offset,
		-1, "rim_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rim Color",
		"Color used for Rim",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RimShaderFxData, rim_rgb), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxRim_rim_color_get, ShaderFxRim_rim_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxRim_rim_color_default
	};

	static float rna_ShaderFxRim_mask_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShaderFxRim_mask_color_ = {
		{&rna_ShaderFxRim_mode, 	&rna_ShaderFxRim_rim_color,
		-1, "mask_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mask Color",
		"Color that must be kept",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RimShaderFxData, mask_rgb), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxRim_mask_color_get, ShaderFxRim_mask_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxRim_mask_color_default
	};

	static const EnumPropertyItem rna_ShaderFxRim_mode_items[7] = {
		{0, "NORMAL", 0, "Regular", ""	},
		{1, "OVERLAY", 0, "Overlay", ""	},
		{2, "ADD", 0, "Add", ""	},
		{3, "SUBTRACT", 0, "Subtract", ""	},
		{4, "MULTIPLY", 0, "Multiply", ""	},
		{5, "DIVIDE", 0, "Divide", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShaderFxRim_mode_ = {
		{&rna_ShaderFxRim_blur, 	&rna_ShaderFxRim_mask_color,
		-1, "mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Blend mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RimShaderFxData, mode), RawPropertyType(0), nullptr},
		ShaderFxRim_mode_get, ShaderFxRim_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShaderFxRim_mode_items, 6, 0
	};

	static int rna_ShaderFxRim_blur_default[2] = {
		0,
		0
	};
	rna_ShaderFxRim_blur_ = {
		{&rna_ShaderFxRim_samples, 	&rna_ShaderFxRim_mode,
		-1, "blur", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Blur",
		"Number of pixels for blurring rim (set to 0 to disable)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RimShaderFxData, blur), RawPropertyType(0), nullptr},
		nullptr, nullptr, ShaderFxRim_blur_get, ShaderFxRim_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, rna_ShaderFxRim_blur_default
	};

	rna_ShaderFxRim_samples_ = {
		{nullptr, 	&rna_ShaderFxRim_blur,
		-1, "samples", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Samples",
		"Number of Blur Samples (zero, disable blur)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(RimShaderFxData, samples), RawPropertyType(0), nullptr},
		ShaderFxRim_samples_get, ShaderFxRim_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32, 0, 32, 2, nullptr, nullptr, 4, nullptr
	};

	StructRNA *srna = RNA_ShaderFxRim;
	srna->cont.properties = {&rna_ShaderFxRim_offset, &rna_ShaderFxRim_samples};
	srna->identifier = "ShaderFxRim";
	srna->flag = 516;
	srna->name = "Rim Effect";
	srna->description = "Rim effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Shadow Effect */
static PointerPropertyRNA rna_ShaderFxShadow_object_;
PropertyRNA &rna_ShaderFxShadow_object = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_object_);

static IntPropertyRNA rna_ShaderFxShadow_offset_;
PropertyRNA &rna_ShaderFxShadow_offset = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_offset_);

static FloatPropertyRNA rna_ShaderFxShadow_scale_;
PropertyRNA &rna_ShaderFxShadow_scale = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_scale_);

static FloatPropertyRNA rna_ShaderFxShadow_shadow_color_;
PropertyRNA &rna_ShaderFxShadow_shadow_color = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_shadow_color_);

static EnumPropertyRNA rna_ShaderFxShadow_orientation_;
PropertyRNA &rna_ShaderFxShadow_orientation = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_orientation_);

static FloatPropertyRNA rna_ShaderFxShadow_amplitude_;
PropertyRNA &rna_ShaderFxShadow_amplitude = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_amplitude_);

static FloatPropertyRNA rna_ShaderFxShadow_period_;
PropertyRNA &rna_ShaderFxShadow_period = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_period_);

static FloatPropertyRNA rna_ShaderFxShadow_phase_;
PropertyRNA &rna_ShaderFxShadow_phase = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_phase_);

static FloatPropertyRNA rna_ShaderFxShadow_rotation_;
PropertyRNA &rna_ShaderFxShadow_rotation = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_rotation_);

static IntPropertyRNA rna_ShaderFxShadow_blur_;
PropertyRNA &rna_ShaderFxShadow_blur = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_blur_);

static IntPropertyRNA rna_ShaderFxShadow_samples_;
PropertyRNA &rna_ShaderFxShadow_samples = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_samples_);

static BoolPropertyRNA rna_ShaderFxShadow_use_object_;
PropertyRNA &rna_ShaderFxShadow_use_object = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_use_object_);

static BoolPropertyRNA rna_ShaderFxShadow_use_wave_;
PropertyRNA &rna_ShaderFxShadow_use_wave = reinterpret_cast<PropertyRNA &>(rna_ShaderFxShadow_use_wave_);

StructRNA *RNA_ShaderFxShadow;
void register_struct_ShaderFxShadow(BlenderRNA &brna)
{
	rna_ShaderFxShadow_object_ = {
		{&rna_ShaderFxShadow_offset, 	nullptr,
		-1, "object", 9437313, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Object to determine center of rotation",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxShadow_object_get, ShaderFxShadow_object_set, nullptr, nullptr,RNA_Object
	};

	static int rna_ShaderFxShadow_offset_default[2] = {
		0,
		0
	};
	rna_ShaderFxShadow_offset_ = {
		{&rna_ShaderFxShadow_scale, 	&rna_ShaderFxShadow_object,
		-1, "offset", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Offset of the shadow",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, offset), RawPropertyType(0), nullptr},
		nullptr, nullptr, ShaderFxShadow_offset_get, ShaderFxShadow_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -32768, 32767, -32768, 32767, 1, nullptr, nullptr, 0, rna_ShaderFxShadow_offset_default
	};

	static float rna_ShaderFxShadow_scale_default[2] = {
		0.0f,
		0.0f
	};
	rna_ShaderFxShadow_scale_ = {
		{&rna_ShaderFxShadow_shadow_color, 	&rna_ShaderFxShadow_offset,
		-1, "scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Scale of the shadow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, scale), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxShadow_scale_get, ShaderFxShadow_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxShadow_scale_default
	};

	static float rna_ShaderFxShadow_shadow_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShaderFxShadow_shadow_color_ = {
		{&rna_ShaderFxShadow_orientation, 	&rna_ShaderFxShadow_scale,
		-1, "shadow_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Shadow Color",
		"Color used for Shadow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, shadow_rgba), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxShadow_shadow_color_get, ShaderFxShadow_shadow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxShadow_shadow_color_default
	};

	static const EnumPropertyItem rna_ShaderFxShadow_orientation_items[3] = {
		{0, "HORIZONTAL", 0, "Horizontal", ""	},
		{1, "VERTICAL", 0, "Vertical", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShaderFxShadow_orientation_ = {
		{&rna_ShaderFxShadow_amplitude, 	&rna_ShaderFxShadow_shadow_color,
		-1, "orientation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Orientation",
		"Direction of the wave",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, orientation), RawPropertyType(0), nullptr},
		ShaderFxShadow_orientation_get, ShaderFxShadow_orientation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShaderFxShadow_orientation_items, 2, 0
	};

	rna_ShaderFxShadow_amplitude_ = {
		{&rna_ShaderFxShadow_period, 	&rna_ShaderFxShadow_orientation,
		-1, "amplitude", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Amplitude",
		"Amplitude of Wave",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, amplitude), RawPropertyType(5), nullptr},
		ShaderFxShadow_amplitude_get, ShaderFxShadow_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShaderFxShadow_period_ = {
		{&rna_ShaderFxShadow_phase, 	&rna_ShaderFxShadow_amplitude,
		-1, "period", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Period",
		"Period of Wave",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, period), RawPropertyType(5), nullptr},
		ShaderFxShadow_period_get, ShaderFxShadow_period_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShaderFxShadow_phase_ = {
		{&rna_ShaderFxShadow_rotation, 	&rna_ShaderFxShadow_period,
		-1, "phase", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Phase",
		"Phase Shift of Wave",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, phase), RawPropertyType(5), nullptr},
		ShaderFxShadow_phase_get, ShaderFxShadow_phase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShaderFxShadow_rotation_ = {
		{&rna_ShaderFxShadow_blur, 	&rna_ShaderFxShadow_phase,
		-1, "rotation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Rotation around center or object",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, rotation), RawPropertyType(5), nullptr},
		ShaderFxShadow_rotation_get, ShaderFxShadow_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 5.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	static int rna_ShaderFxShadow_blur_default[2] = {
		0,
		0
	};
	rna_ShaderFxShadow_blur_ = {
		{&rna_ShaderFxShadow_samples, 	&rna_ShaderFxShadow_rotation,
		-1, "blur", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Blur",
		"Number of pixels for blurring shadow (set to 0 to disable)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, blur), RawPropertyType(0), nullptr},
		nullptr, nullptr, ShaderFxShadow_blur_get, ShaderFxShadow_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, rna_ShaderFxShadow_blur_default
	};

	rna_ShaderFxShadow_samples_ = {
		{&rna_ShaderFxShadow_use_object, 	&rna_ShaderFxShadow_blur,
		-1, "samples", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Samples",
		"Number of Blur Samples (zero, disable blur)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ShadowShaderFxData, samples), RawPropertyType(0), nullptr},
		ShaderFxShadow_samples_get, ShaderFxShadow_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32, 0, 32, 2, nullptr, nullptr, 4, nullptr
	};

	rna_ShaderFxShadow_use_object_ = {
		{&rna_ShaderFxShadow_use_wave, 	&rna_ShaderFxShadow_samples,
		-1, "use_object", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Use Object",
		"Use object as center of rotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxShadow_use_object_get, ShaderFxShadow_use_object_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShaderFxShadow_use_wave_ = {
		{nullptr, 	&rna_ShaderFxShadow_use_object,
		-1, "use_wave", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Wave",
		"Use wave effect",
		0, "GPencil",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxShadow_use_wave_get, ShaderFxShadow_use_wave_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ShaderFxShadow;
	srna->cont.properties = {&rna_ShaderFxShadow_object, &rna_ShaderFxShadow_use_wave};
	srna->identifier = "ShaderFxShadow";
	srna->flag = 516;
	srna->name = "Shadow Effect";
	srna->description = "Shadow effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Glow Effect */
static FloatPropertyRNA rna_ShaderFxGlow_glow_color_;
PropertyRNA &rna_ShaderFxGlow_glow_color = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_glow_color_);

static FloatPropertyRNA rna_ShaderFxGlow_opacity_;
PropertyRNA &rna_ShaderFxGlow_opacity = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_opacity_);

static FloatPropertyRNA rna_ShaderFxGlow_select_color_;
PropertyRNA &rna_ShaderFxGlow_select_color = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_select_color_);

static EnumPropertyRNA rna_ShaderFxGlow_mode_;
PropertyRNA &rna_ShaderFxGlow_mode = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_mode_);

static FloatPropertyRNA rna_ShaderFxGlow_threshold_;
PropertyRNA &rna_ShaderFxGlow_threshold = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_threshold_);

static FloatPropertyRNA rna_ShaderFxGlow_size_;
PropertyRNA &rna_ShaderFxGlow_size = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_size_);

static IntPropertyRNA rna_ShaderFxGlow_samples_;
PropertyRNA &rna_ShaderFxGlow_samples = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_samples_);

static BoolPropertyRNA rna_ShaderFxGlow_use_glow_under_;
PropertyRNA &rna_ShaderFxGlow_use_glow_under = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_use_glow_under_);

static FloatPropertyRNA rna_ShaderFxGlow_rotation_;
PropertyRNA &rna_ShaderFxGlow_rotation = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_rotation_);

static EnumPropertyRNA rna_ShaderFxGlow_blend_mode_;
PropertyRNA &rna_ShaderFxGlow_blend_mode = reinterpret_cast<PropertyRNA &>(rna_ShaderFxGlow_blend_mode_);

StructRNA *RNA_ShaderFxGlow;
void register_struct_ShaderFxGlow(BlenderRNA &brna)
{
	static float rna_ShaderFxGlow_glow_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShaderFxGlow_glow_color_ = {
		{&rna_ShaderFxGlow_opacity, 	nullptr,
		-1, "glow_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Glow Color",
		"Color used for generated glow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, glow_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxGlow_glow_color_get, ShaderFxGlow_glow_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxGlow_glow_color_default
	};

	rna_ShaderFxGlow_opacity_ = {
		{&rna_ShaderFxGlow_select_color, 	&rna_ShaderFxGlow_glow_color,
		-1, "opacity", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Opacity",
		"Effect Opacity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, glow_color[3]), RawPropertyType(5), nullptr},
		ShaderFxGlow_opacity_get, ShaderFxGlow_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_ShaderFxGlow_select_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ShaderFxGlow_select_color_ = {
		{&rna_ShaderFxGlow_mode, 	&rna_ShaderFxGlow_opacity,
		-1, "select_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Select Color",
		"Color selected to apply glow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, select_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxGlow_select_color_get, ShaderFxGlow_select_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxGlow_select_color_default
	};

	static const EnumPropertyItem rna_ShaderFxGlow_mode_items[3] = {
		{0, "LUMINANCE", 0, "Luminance", ""	},
		{1, "COLOR", 0, "Color", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShaderFxGlow_mode_ = {
		{&rna_ShaderFxGlow_threshold, 	&rna_ShaderFxGlow_select_color,
		-1, "mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Glow mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, mode), RawPropertyType(0), nullptr},
		ShaderFxGlow_mode_get, ShaderFxGlow_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShaderFxGlow_mode_items, 2, 0
	};

	rna_ShaderFxGlow_threshold_ = {
		{&rna_ShaderFxGlow_size, 	&rna_ShaderFxGlow_mode,
		-1, "threshold", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Limit to select color for glow effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, threshold), RawPropertyType(5), nullptr},
		ShaderFxGlow_threshold_get, ShaderFxGlow_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_ShaderFxGlow_size_default[2] = {
		0.0f,
		0.0f
	};
	rna_ShaderFxGlow_size_ = {
		{&rna_ShaderFxGlow_samples, 	&rna_ShaderFxGlow_threshold,
		-1, "size", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Size of the effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, blur), RawPropertyType(5), nullptr},
		nullptr, nullptr, ShaderFxGlow_size_get, ShaderFxGlow_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ShaderFxGlow_size_default
	};

	rna_ShaderFxGlow_samples_ = {
		{&rna_ShaderFxGlow_use_glow_under, 	&rna_ShaderFxGlow_size,
		-1, "samples", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Samples",
		"Number of Blur Samples",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, samples), RawPropertyType(0), nullptr},
		ShaderFxGlow_samples_get, ShaderFxGlow_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 32, 1, 32, 2, nullptr, nullptr, 4, nullptr
	};

	rna_ShaderFxGlow_use_glow_under_ = {
		{&rna_ShaderFxGlow_rotation, 	&rna_ShaderFxGlow_samples,
		-1, "use_glow_under", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Glow Under",
		"Glow only areas with alpha (not supported with Regular blend mode)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxGlow_use_glow_under_get, ShaderFxGlow_use_glow_under_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShaderFxGlow_rotation_ = {
		{&rna_ShaderFxGlow_blend_mode, 	&rna_ShaderFxGlow_use_glow_under,
		-1, "rotation", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Rotation of the effect",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, rotation), RawPropertyType(5), nullptr},
		ShaderFxGlow_rotation_get, ShaderFxGlow_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_ShaderFxGlow_blend_mode_items[6] = {
		{0, "REGULAR", 0, "Regular", ""	},
		{2, "ADD", 0, "Add", ""	},
		{3, "SUBTRACT", 0, "Subtract", ""	},
		{4, "MULTIPLY", 0, "Multiply", ""	},
		{5, "DIVIDE", 0, "Divide", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ShaderFxGlow_blend_mode_ = {
		{nullptr, 	&rna_ShaderFxGlow_rotation,
		-1, "blend_mode", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Blend Mode",
		"Blend mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GlowShaderFxData, blend_mode), RawPropertyType(0), nullptr},
		ShaderFxGlow_blend_mode_get, ShaderFxGlow_blend_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ShaderFxGlow_blend_mode_items, 5, 0
	};

	StructRNA *srna = RNA_ShaderFxGlow;
	srna->cont.properties = {&rna_ShaderFxGlow_glow_color, &rna_ShaderFxGlow_blend_mode};
	srna->identifier = "ShaderFxGlow";
	srna->flag = 516;
	srna->name = "Glow Effect";
	srna->description = "Glow effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Swirl Effect */
static IntPropertyRNA rna_ShaderFxSwirl_radius_;
PropertyRNA &rna_ShaderFxSwirl_radius = reinterpret_cast<PropertyRNA &>(rna_ShaderFxSwirl_radius_);

static FloatPropertyRNA rna_ShaderFxSwirl_angle_;
PropertyRNA &rna_ShaderFxSwirl_angle = reinterpret_cast<PropertyRNA &>(rna_ShaderFxSwirl_angle_);

static BoolPropertyRNA rna_ShaderFxSwirl_use_transparent_;
PropertyRNA &rna_ShaderFxSwirl_use_transparent = reinterpret_cast<PropertyRNA &>(rna_ShaderFxSwirl_use_transparent_);

static PointerPropertyRNA rna_ShaderFxSwirl_object_;
PropertyRNA &rna_ShaderFxSwirl_object = reinterpret_cast<PropertyRNA &>(rna_ShaderFxSwirl_object_);

StructRNA *RNA_ShaderFxSwirl;
void register_struct_ShaderFxSwirl(BlenderRNA &brna)
{
	rna_ShaderFxSwirl_radius_ = {
		{&rna_ShaderFxSwirl_angle, 	nullptr,
		-1, "radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Radius",
		"Radius to apply",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SwirlShaderFxData, radius), RawPropertyType(0), nullptr},
		ShaderFxSwirl_radius_get, ShaderFxSwirl_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ShaderFxSwirl_angle_ = {
		{&rna_ShaderFxSwirl_use_transparent, 	&rna_ShaderFxSwirl_radius,
		-1, "angle", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Angle",
		"Angle of rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SwirlShaderFxData, angle), RawPropertyType(5), nullptr},
		ShaderFxSwirl_angle_get, ShaderFxSwirl_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -31.4159259796f, 31.4159259796f, -31.4159259796f, 31.4159259796f, 5.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ShaderFxSwirl_use_transparent_ = {
		{&rna_ShaderFxSwirl_object, 	&rna_ShaderFxSwirl_angle,
		-1, "use_transparent", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Transparent",
		"Make image transparent outside of radius",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxSwirl_use_transparent_get, ShaderFxSwirl_use_transparent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShaderFxSwirl_object_ = {
		{nullptr, 	&rna_ShaderFxSwirl_use_transparent,
		-1, "object", 9437313, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Object to determine center location",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxSwirl_object_get, ShaderFxSwirl_object_set, nullptr, nullptr,RNA_Object
	};

	StructRNA *srna = RNA_ShaderFxSwirl;
	srna->cont.properties = {&rna_ShaderFxSwirl_radius, &rna_ShaderFxSwirl_object};
	srna->identifier = "ShaderFxSwirl";
	srna->flag = 516;
	srna->name = "Swirl Effect";
	srna->description = "Swirl effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};

/* Flip Effect */
static BoolPropertyRNA rna_ShaderFxFlip_use_flip_x_;
PropertyRNA &rna_ShaderFxFlip_use_flip_x = reinterpret_cast<PropertyRNA &>(rna_ShaderFxFlip_use_flip_x_);

static BoolPropertyRNA rna_ShaderFxFlip_use_flip_y_;
PropertyRNA &rna_ShaderFxFlip_use_flip_y = reinterpret_cast<PropertyRNA &>(rna_ShaderFxFlip_use_flip_y_);

StructRNA *RNA_ShaderFxFlip;
void register_struct_ShaderFxFlip(BlenderRNA &brna)
{
	rna_ShaderFxFlip_use_flip_x_ = {
		{&rna_ShaderFxFlip_use_flip_y, 	nullptr,
		-1, "use_flip_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Horizontal",
		"Flip image horizontally",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxFlip_use_flip_x_get, ShaderFxFlip_use_flip_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ShaderFxFlip_use_flip_y_ = {
		{nullptr, 	&rna_ShaderFxFlip_use_flip_x,
		-1, "use_flip_y", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertical",
		"Flip image vertically",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ShaderFx_update, 102760448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ShaderFxFlip_use_flip_y_get, ShaderFxFlip_use_flip_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ShaderFxFlip;
	srna->cont.properties = {&rna_ShaderFxFlip_use_flip_x, &rna_ShaderFxFlip_use_flip_y};
	srna->identifier = "ShaderFxFlip";
	srna->flag = 516;
	srna->name = "Flip Effect";
	srna->description = "Flip effect";
	srna->translation_context = "*";
	srna->icon = 121;
	srna->nameproperty = &rna_ShaderFx_name;
	srna->iteratorproperty = &rna_ShaderFx_rna_properties;
	srna->base = RNA_ShaderFx;
	srna->refine = rna_ShaderFx_refine;
	srna->path = rna_ShaderFx_path;
};


}  // namespace blender
