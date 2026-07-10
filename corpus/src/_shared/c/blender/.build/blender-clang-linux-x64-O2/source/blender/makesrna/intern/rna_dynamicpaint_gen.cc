
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

#include "rna_dynamicpaint.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_DynamicPaintCanvasSettings_rna_properties;
extern PropertyRNA &rna_DynamicPaintCanvasSettings_rna_type;
extern PropertyRNA &rna_DynamicPaintCanvasSettings_canvas_surfaces;


extern PropertyRNA &rna_DynamicPaintSurfaces_rna_properties;
extern PropertyRNA &rna_DynamicPaintSurfaces_rna_type;
extern PropertyRNA &rna_DynamicPaintSurfaces_active_index;
extern PropertyRNA &rna_DynamicPaintSurfaces_active;


extern PropertyRNA &rna_DynamicPaintBrushSettings_rna_properties;
extern PropertyRNA &rna_DynamicPaintBrushSettings_rna_type;
extern PropertyRNA &rna_DynamicPaintBrushSettings_paint_color;
extern PropertyRNA &rna_DynamicPaintBrushSettings_paint_alpha;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_absolute_alpha;
extern PropertyRNA &rna_DynamicPaintBrushSettings_paint_wetness;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_paint_erase;
extern PropertyRNA &rna_DynamicPaintBrushSettings_wave_type;
extern PropertyRNA &rna_DynamicPaintBrushSettings_wave_factor;
extern PropertyRNA &rna_DynamicPaintBrushSettings_wave_clamp;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_smudge;
extern PropertyRNA &rna_DynamicPaintBrushSettings_smudge_strength;
extern PropertyRNA &rna_DynamicPaintBrushSettings_velocity_max;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_velocity_alpha;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_velocity_depth;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_velocity_color;
extern PropertyRNA &rna_DynamicPaintBrushSettings_paint_source;
extern PropertyRNA &rna_DynamicPaintBrushSettings_paint_distance;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha;
extern PropertyRNA &rna_DynamicPaintBrushSettings_proximity_falloff;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_proximity_project;
extern PropertyRNA &rna_DynamicPaintBrushSettings_ray_direction;
extern PropertyRNA &rna_DynamicPaintBrushSettings_invert_proximity;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_negative_volume;
extern PropertyRNA &rna_DynamicPaintBrushSettings_particle_system;
extern PropertyRNA &rna_DynamicPaintBrushSettings_use_particle_radius;
extern PropertyRNA &rna_DynamicPaintBrushSettings_solid_radius;
extern PropertyRNA &rna_DynamicPaintBrushSettings_smooth_radius;
extern PropertyRNA &rna_DynamicPaintBrushSettings_paint_ramp;
extern PropertyRNA &rna_DynamicPaintBrushSettings_velocity_ramp;


extern PropertyRNA &rna_DynamicPaintSurface_rna_properties;
extern PropertyRNA &rna_DynamicPaintSurface_rna_type;
extern PropertyRNA &rna_DynamicPaintSurface_surface_format;
extern PropertyRNA &rna_DynamicPaintSurface_surface_type;
extern PropertyRNA &rna_DynamicPaintSurface_is_active;
extern PropertyRNA &rna_DynamicPaintSurface_name;
extern PropertyRNA &rna_DynamicPaintSurface_brush_collection;
extern PropertyRNA &rna_DynamicPaintSurface_use_dissolve;
extern PropertyRNA &rna_DynamicPaintSurface_dissolve_speed;
extern PropertyRNA &rna_DynamicPaintSurface_use_drying;
extern PropertyRNA &rna_DynamicPaintSurface_dry_speed;
extern PropertyRNA &rna_DynamicPaintSurface_image_resolution;
extern PropertyRNA &rna_DynamicPaintSurface_uv_layer;
extern PropertyRNA &rna_DynamicPaintSurface_frame_start;
extern PropertyRNA &rna_DynamicPaintSurface_frame_end;
extern PropertyRNA &rna_DynamicPaintSurface_frame_substeps;
extern PropertyRNA &rna_DynamicPaintSurface_use_antialiasing;
extern PropertyRNA &rna_DynamicPaintSurface_brush_influence_scale;
extern PropertyRNA &rna_DynamicPaintSurface_brush_radius_scale;
extern PropertyRNA &rna_DynamicPaintSurface_init_color_type;
extern PropertyRNA &rna_DynamicPaintSurface_init_color;
extern PropertyRNA &rna_DynamicPaintSurface_init_texture;
extern PropertyRNA &rna_DynamicPaintSurface_init_layername;
extern PropertyRNA &rna_DynamicPaintSurface_effect_ui;
extern PropertyRNA &rna_DynamicPaintSurface_use_dry_log;
extern PropertyRNA &rna_DynamicPaintSurface_use_dissolve_log;
extern PropertyRNA &rna_DynamicPaintSurface_use_spread;
extern PropertyRNA &rna_DynamicPaintSurface_spread_speed;
extern PropertyRNA &rna_DynamicPaintSurface_color_dry_threshold;
extern PropertyRNA &rna_DynamicPaintSurface_color_spread_speed;
extern PropertyRNA &rna_DynamicPaintSurface_use_drip;
extern PropertyRNA &rna_DynamicPaintSurface_use_shrink;
extern PropertyRNA &rna_DynamicPaintSurface_shrink_speed;
extern PropertyRNA &rna_DynamicPaintSurface_effector_weights;
extern PropertyRNA &rna_DynamicPaintSurface_drip_velocity;
extern PropertyRNA &rna_DynamicPaintSurface_drip_acceleration;
extern PropertyRNA &rna_DynamicPaintSurface_use_premultiply;
extern PropertyRNA &rna_DynamicPaintSurface_image_output_path;
extern PropertyRNA &rna_DynamicPaintSurface_output_name_a;
extern PropertyRNA &rna_DynamicPaintSurface_use_output_a;
extern PropertyRNA &rna_DynamicPaintSurface_output_name_b;
extern PropertyRNA &rna_DynamicPaintSurface_use_output_b;
extern PropertyRNA &rna_DynamicPaintSurface_depth_clamp;
extern PropertyRNA &rna_DynamicPaintSurface_displace_factor;
extern PropertyRNA &rna_DynamicPaintSurface_image_fileformat;
extern PropertyRNA &rna_DynamicPaintSurface_displace_type;
extern PropertyRNA &rna_DynamicPaintSurface_use_incremental_displace;
extern PropertyRNA &rna_DynamicPaintSurface_wave_damping;
extern PropertyRNA &rna_DynamicPaintSurface_wave_speed;
extern PropertyRNA &rna_DynamicPaintSurface_wave_timescale;
extern PropertyRNA &rna_DynamicPaintSurface_wave_spring;
extern PropertyRNA &rna_DynamicPaintSurface_wave_smoothness;
extern PropertyRNA &rna_DynamicPaintSurface_use_wave_open_border;
extern PropertyRNA &rna_DynamicPaintSurface_point_cache;
extern PropertyRNA &rna_DynamicPaintSurface_is_cache_user;

extern FunctionRNA *rna_DynamicPaintSurface_output_exists_func;
extern PropertyRNA &rna_DynamicPaintSurface_output_exists_object;
extern PropertyRNA &rna_DynamicPaintSurface_output_exists_index;
extern PropertyRNA &rna_DynamicPaintSurface_output_exists_exists;


static PointerRNA DynamicPaintCanvasSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DynamicPaintCanvasSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DynamicPaintCanvasSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_rna_properties_get(iter);
    }
}

void DynamicPaintCanvasSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_rna_properties_get(iter);
    }
}

void DynamicPaintCanvasSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DynamicPaintCanvasSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DynamicPaintCanvasSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA DynamicPaintCanvasSettings_canvas_surfaces_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_DynamicPaintSurface, rna_iterator_listbase_get(iter));
}

void DynamicPaintCanvasSettings_canvas_surfaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DynamicPaintCanvasSettings_canvas_surfaces;

    PropCollectionBeginFunc fn = rna_DynamicPaint_surfaces_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(iter);
    }
}

void DynamicPaintCanvasSettings_canvas_surfaces_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(iter);
    }
}

void DynamicPaintCanvasSettings_canvas_surfaces_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DynamicPaintCanvasSettings_canvas_surfaces_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    DynamicPaintCanvasSettings_canvas_surfaces_begin(&iter, ptr);

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
        if (found) { *r_ptr = DynamicPaintCanvasSettings_canvas_surfaces_get(&iter); }
    }

    DynamicPaintCanvasSettings_canvas_surfaces_end(&iter);

    return found;
}

static PointerRNA DynamicPaintSurfaces_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DynamicPaintSurfaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DynamicPaintSurfaces_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurfaces_rna_properties_get(iter);
    }
}

void DynamicPaintSurfaces_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurfaces_rna_properties_get(iter);
    }
}

void DynamicPaintSurfaces_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DynamicPaintSurfaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DynamicPaintSurfaces_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int DynamicPaintSurfaces_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Surface_active_point_index_get;
    return fn(ptr);
}

void DynamicPaintSurfaces_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Surface_active_point_index_set;
    fn(ptr, value);
}

PointerRNA DynamicPaintSurfaces_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_PaintSurface_active_get;
    return fn(ptr);
}

static PointerRNA DynamicPaintBrushSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DynamicPaintBrushSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DynamicPaintBrushSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintBrushSettings_rna_properties_get(iter);
    }
}

void DynamicPaintBrushSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintBrushSettings_rna_properties_get(iter);
    }
}

void DynamicPaintBrushSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DynamicPaintBrushSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DynamicPaintBrushSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void DynamicPaintBrushSettings_paint_color_get(PointerRNA *ptr, float values[3])
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

void DynamicPaintBrushSettings_paint_color_set(PointerRNA *ptr, const float values[3])
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->r)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float DynamicPaintBrushSettings_paint_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->alpha);
}

void DynamicPaintBrushSettings_paint_alpha_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)std::clamp(value, 0.0f, 1.0f);
}

bool DynamicPaintBrushSettings_use_absolute_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void DynamicPaintBrushSettings_use_absolute_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

float DynamicPaintBrushSettings_paint_wetness_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wetness);
}

void DynamicPaintBrushSettings_paint_wetness_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->wetness = (std::remove_reference_t<decltype(data->wetness)>)std::clamp(value, 0.0f, 1.0f);
}

bool DynamicPaintBrushSettings_use_paint_erase_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void DynamicPaintBrushSettings_use_paint_erase_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

int DynamicPaintBrushSettings_wave_type_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->wave_type);
}

void DynamicPaintBrushSettings_wave_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->wave_type = (std::remove_reference_t<decltype(data->wave_type)>)value;
}

float DynamicPaintBrushSettings_wave_factor_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wave_factor);
}

void DynamicPaintBrushSettings_wave_factor_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->wave_factor = (std::remove_reference_t<decltype(data->wave_factor)>)std::clamp(value, -2.0f, 2.0f);
}

float DynamicPaintBrushSettings_wave_clamp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->wave_clamp);
}

void DynamicPaintBrushSettings_wave_clamp_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->wave_clamp = (std::remove_reference_t<decltype(data->wave_clamp)>)std::clamp(value, 0.0f, 50.0f);
}

bool DynamicPaintBrushSettings_use_smudge_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 256) != 0);
}

void DynamicPaintBrushSettings_use_smudge_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 256); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(256)); }
}

float DynamicPaintBrushSettings_smudge_strength_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->smudge_strength);
}

void DynamicPaintBrushSettings_smudge_strength_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->smudge_strength = (std::remove_reference_t<decltype(data->smudge_strength)>)std::clamp(value, 0.0f, 1.0f);
}

float DynamicPaintBrushSettings_velocity_max_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->max_velocity);
}

void DynamicPaintBrushSettings_velocity_max_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->max_velocity = (std::remove_reference_t<decltype(data->max_velocity)>)std::clamp(value, 0.0001000000f, 10.0f);
}

bool DynamicPaintBrushSettings_use_velocity_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 512) != 0);
}

void DynamicPaintBrushSettings_use_velocity_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 512); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(512)); }
}

bool DynamicPaintBrushSettings_use_velocity_depth_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 2048) != 0);
}

void DynamicPaintBrushSettings_use_velocity_depth_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2048); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2048)); }
}

bool DynamicPaintBrushSettings_use_velocity_color_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 1024) != 0);
}

void DynamicPaintBrushSettings_use_velocity_color_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1024); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1024)); }
}

int DynamicPaintBrushSettings_paint_source_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->collision);
}

void DynamicPaintBrushSettings_paint_source_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->collision = (std::remove_reference_t<decltype(data->collision)>)value;
}

float DynamicPaintBrushSettings_paint_distance_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->paint_distance);
}

void DynamicPaintBrushSettings_paint_distance_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->paint_distance = (std::remove_reference_t<decltype(data->paint_distance)>)std::clamp(value, 0.0f, 500.0f);
}

bool DynamicPaintBrushSettings_use_proximity_ramp_alpha_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void DynamicPaintBrushSettings_use_proximity_ramp_alpha_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16)); }
}

int DynamicPaintBrushSettings_proximity_falloff_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->proximity_falloff);
}

void DynamicPaintBrushSettings_proximity_falloff_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->proximity_falloff = (std::remove_reference_t<decltype(data->proximity_falloff)>)value;
}

bool DynamicPaintBrushSettings_use_proximity_project_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void DynamicPaintBrushSettings_use_proximity_project_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32)); }
}

int DynamicPaintBrushSettings_ray_direction_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (int)(data->ray_dir);
}

void DynamicPaintBrushSettings_ray_direction_set(PointerRNA *ptr, int value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->ray_dir = (std::remove_reference_t<decltype(data->ray_dir)>)value;
}

bool DynamicPaintBrushSettings_invert_proximity_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 64) != 0);
}

void DynamicPaintBrushSettings_invert_proximity_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 64); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(64)); }
}

bool DynamicPaintBrushSettings_use_negative_volume_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 128) != 0);
}

void DynamicPaintBrushSettings_use_negative_volume_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 128); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(128)); }
}

PointerRNA DynamicPaintBrushSettings_particle_system_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ParticleSystem, data->psys);
}

void DynamicPaintBrushSettings_particle_system_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    *(void **)&data->psys = value.data;
}

bool DynamicPaintBrushSettings_use_particle_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void DynamicPaintBrushSettings_use_particle_radius_set(PointerRNA *ptr, bool value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1)); }
}

float DynamicPaintBrushSettings_solid_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->particle_radius);
}

void DynamicPaintBrushSettings_solid_radius_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->particle_radius = (std::remove_reference_t<decltype(data->particle_radius)>)std::clamp(value, 0.0099999998f, 10.0f);
}

float DynamicPaintBrushSettings_smooth_radius_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return (float)(data->particle_smooth);
}

void DynamicPaintBrushSettings_smooth_radius_set(PointerRNA *ptr, float value)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    data->particle_smooth = (std::remove_reference_t<decltype(data->particle_smooth)>)std::clamp(value, 0.0f, 10.0f);
}

PointerRNA DynamicPaintBrushSettings_paint_ramp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorRamp, data->paint_ramp);
}

PointerRNA DynamicPaintBrushSettings_velocity_ramp_get(PointerRNA *ptr)
{
    DynamicPaintBrushSettings *data = (DynamicPaintBrushSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorRamp, data->vel_ramp);
}

static PointerRNA DynamicPaintSurface_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DynamicPaintSurface_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DynamicPaintSurface_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurface_rna_properties_get(iter);
    }
}

void DynamicPaintSurface_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DynamicPaintSurface_rna_properties_get(iter);
    }
}

void DynamicPaintSurface_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DynamicPaintSurface_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DynamicPaintSurface_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int DynamicPaintSurface_surface_format_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->format);
}

void DynamicPaintSurface_surface_format_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->format = (std::remove_reference_t<decltype(data->format)>)value;
}

int DynamicPaintSurface_surface_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->type);
}

void DynamicPaintSurface_surface_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

bool DynamicPaintSurface_is_active_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void DynamicPaintSurface_is_active_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1)); }
}

void DynamicPaintSurface_name_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int DynamicPaintSurface_name_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->name);
}

void DynamicPaintSurface_name_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

PointerRNA DynamicPaintSurface_brush_collection_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->brush_group);
}

void DynamicPaintSurface_brush_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->brush_group = value.data;
}

bool DynamicPaintSurface_use_dissolve_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void DynamicPaintSurface_use_dissolve_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

int DynamicPaintSurface_dissolve_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->diss_speed);
}

void DynamicPaintSurface_dissolve_speed_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->diss_speed = (std::remove_reference_t<decltype(data->diss_speed)>)std::clamp(value, 1, 10000);
}

bool DynamicPaintSurface_use_drying_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 512) != 0);
}

void DynamicPaintSurface_use_drying_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 512); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(512)); }
}

int DynamicPaintSurface_dry_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->dry_speed);
}

void DynamicPaintSurface_dry_speed_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->dry_speed = (std::remove_reference_t<decltype(data->dry_speed)>)std::clamp(value, 1, 10000);
}

int DynamicPaintSurface_image_resolution_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->image_resolution);
}

void DynamicPaintSurface_image_resolution_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->image_resolution = (std::remove_reference_t<decltype(data->image_resolution)>)std::clamp(value, 16, 4096);
}

void DynamicPaintSurface_uv_layer_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->uvlayer_name) < 68);
    strcpy(value, data->uvlayer_name);
}

int DynamicPaintSurface_uv_layer_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->uvlayer_name);
}

void DynamicPaintSurface_uv_layer_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_DynamicPaint_uvlayer_set;
    fn(ptr, value);
}

int DynamicPaintSurface_frame_start_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->start_frame);
}

void DynamicPaintSurface_frame_start_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->start_frame = (std::remove_reference_t<decltype(data->start_frame)>)std::clamp(value, 1, 1048574);
}

int DynamicPaintSurface_frame_end_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->end_frame);
}

void DynamicPaintSurface_frame_end_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->end_frame = (std::remove_reference_t<decltype(data->end_frame)>)std::clamp(value, 1, 1048574);
}

int DynamicPaintSurface_frame_substeps_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->substeps);
}

void DynamicPaintSurface_frame_substeps_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->substeps = (std::remove_reference_t<decltype(data->substeps)>)std::clamp(value, 0, 20);
}

bool DynamicPaintSurface_use_antialiasing_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void DynamicPaintSurface_use_antialiasing_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

float DynamicPaintSurface_brush_influence_scale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->influence_scale);
}

void DynamicPaintSurface_brush_influence_scale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->influence_scale = (std::remove_reference_t<decltype(data->influence_scale)>)std::clamp(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_brush_radius_scale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->radius_scale);
}

void DynamicPaintSurface_brush_radius_scale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->radius_scale = (std::remove_reference_t<decltype(data->radius_scale)>)std::clamp(value, 0.0f, 10.0f);
}

int DynamicPaintSurface_init_color_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->init_color_type);
}

void DynamicPaintSurface_init_color_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->init_color_type = (std::remove_reference_t<decltype(data->init_color_type)>)value;
}

void DynamicPaintSurface_init_color_get(PointerRNA *ptr, float values[4])
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->init_color)[i]);
    }
}

void DynamicPaintSurface_init_color_set(PointerRNA *ptr, const float values[4])
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->init_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

PointerRNA DynamicPaintSurface_init_texture_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Texture, data->init_texture);
}

void DynamicPaintSurface_init_texture_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->init_texture) {
        id_us_min((ID *)data->init_texture);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->init_texture = value.data;
}

void DynamicPaintSurface_init_layername_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->init_layername) < 68);
    strcpy(value, data->init_layername);
}

int DynamicPaintSurface_init_layername_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->init_layername);
}

void DynamicPaintSurface_init_layername_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->init_layername, value, 68);
}

int DynamicPaintSurface_effect_ui_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->effect_ui);
}

void DynamicPaintSurface_effect_ui_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->effect_ui = (std::remove_reference_t<decltype(data->effect_ui)>)value;
}

bool DynamicPaintSurface_use_dry_log_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void DynamicPaintSurface_use_dry_log_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32)); }
}

bool DynamicPaintSurface_use_dissolve_log_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void DynamicPaintSurface_use_dissolve_log_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16)); }
}

bool DynamicPaintSurface_use_spread_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->effect) & 1) != 0);
}

void DynamicPaintSurface_use_spread_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect = std::remove_reference_t<decltype(data->effect)>(uint64_t(data->effect) | 1); }
    else { data->effect = std::remove_reference_t<decltype(data->effect)>(uint64_t(data->effect) & ~uint64_t(1)); }
}

float DynamicPaintSurface_spread_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->spread_speed);
}

void DynamicPaintSurface_spread_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->spread_speed = (std::remove_reference_t<decltype(data->spread_speed)>)std::clamp(value, 0.0010000000f, 10.0f);
}

float DynamicPaintSurface_color_dry_threshold_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->color_dry_threshold);
}

void DynamicPaintSurface_color_dry_threshold_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->color_dry_threshold = (std::remove_reference_t<decltype(data->color_dry_threshold)>)std::clamp(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_color_spread_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->color_spread_speed);
}

void DynamicPaintSurface_color_spread_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->color_spread_speed = (std::remove_reference_t<decltype(data->color_spread_speed)>)std::clamp(value, 0.0f, 2.0f);
}

bool DynamicPaintSurface_use_drip_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->effect) & 2) != 0);
}

void DynamicPaintSurface_use_drip_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect = std::remove_reference_t<decltype(data->effect)>(uint64_t(data->effect) | 2); }
    else { data->effect = std::remove_reference_t<decltype(data->effect)>(uint64_t(data->effect) & ~uint64_t(2)); }
}

bool DynamicPaintSurface_use_shrink_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->effect) & 4) != 0);
}

void DynamicPaintSurface_use_shrink_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->effect = std::remove_reference_t<decltype(data->effect)>(uint64_t(data->effect) | 4); }
    else { data->effect = std::remove_reference_t<decltype(data->effect)>(uint64_t(data->effect) & ~uint64_t(4)); }
}

float DynamicPaintSurface_shrink_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->shrink_speed);
}

void DynamicPaintSurface_shrink_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->shrink_speed = (std::remove_reference_t<decltype(data->shrink_speed)>)std::clamp(value, 0.0010000000f, 10.0f);
}

PointerRNA DynamicPaintSurface_effector_weights_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_EffectorWeights, data->effector_weights);
}

float DynamicPaintSurface_drip_velocity_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->drip_vel);
}

void DynamicPaintSurface_drip_velocity_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->drip_vel = (std::remove_reference_t<decltype(data->drip_vel)>)std::clamp(value, -200.0f, 200.0f);
}

float DynamicPaintSurface_drip_acceleration_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->drip_acc);
}

void DynamicPaintSurface_drip_acceleration_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->drip_acc = (std::remove_reference_t<decltype(data->drip_acc)>)std::clamp(value, -200.0f, 200.0f);
}

bool DynamicPaintSurface_use_premultiply_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void DynamicPaintSurface_use_premultiply_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

void DynamicPaintSurface_image_output_path_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->image_output_path) < 1024);
    strcpy(value, data->image_output_path);
}

int DynamicPaintSurface_image_output_path_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->image_output_path);
}

void DynamicPaintSurface_image_output_path_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy(data->image_output_path, value, 1024);
}

void DynamicPaintSurface_output_name_a_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->output_name) < 68);
    strcpy(value, data->output_name);
}

int DynamicPaintSurface_output_name_a_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->output_name);
}

void DynamicPaintSurface_output_name_a_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->output_name, value, 68);
}

bool DynamicPaintSurface_use_output_a_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 1024) != 0);
}

void DynamicPaintSurface_use_output_a_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1024); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1024)); }
}

void DynamicPaintSurface_output_name_b_get(PointerRNA *ptr, char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_assert(strlen(data->output_name2) < 68);
    strcpy(value, data->output_name2);
}

int DynamicPaintSurface_output_name_b_length(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return strlen(data->output_name2);
}

void DynamicPaintSurface_output_name_b_set(PointerRNA *ptr, const char *value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    BLI_strncpy_utf8(data->output_name2, value, 68);
}

bool DynamicPaintSurface_use_output_b_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 2048) != 0);
}

void DynamicPaintSurface_use_output_b_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2048); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2048)); }
}

float DynamicPaintSurface_depth_clamp_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->depth_clamp);
}

void DynamicPaintSurface_depth_clamp_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->depth_clamp = (std::remove_reference_t<decltype(data->depth_clamp)>)std::clamp(value, 0.0f, 50.0f);
}

float DynamicPaintSurface_displace_factor_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->disp_factor);
}

void DynamicPaintSurface_displace_factor_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->disp_factor = (std::remove_reference_t<decltype(data->disp_factor)>)std::clamp(value, -50.0f, 50.0f);
}

int DynamicPaintSurface_image_fileformat_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->image_fileformat);
}

void DynamicPaintSurface_image_fileformat_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->image_fileformat = (std::remove_reference_t<decltype(data->image_fileformat)>)value;
}

int DynamicPaintSurface_displace_type_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (int)(data->disp_type);
}

void DynamicPaintSurface_displace_type_set(PointerRNA *ptr, int value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->disp_type = (std::remove_reference_t<decltype(data->disp_type)>)value;
}

bool DynamicPaintSurface_use_incremental_displace_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 256) != 0);
}

void DynamicPaintSurface_use_incremental_displace_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 256); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(256)); }
}

float DynamicPaintSurface_wave_damping_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_damping);
}

void DynamicPaintSurface_wave_damping_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_damping = (std::remove_reference_t<decltype(data->wave_damping)>)std::clamp(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_wave_speed_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_speed);
}

void DynamicPaintSurface_wave_speed_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_speed = (std::remove_reference_t<decltype(data->wave_speed)>)std::clamp(value, 0.0099999998f, 5.0f);
}

float DynamicPaintSurface_wave_timescale_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_timescale);
}

void DynamicPaintSurface_wave_timescale_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_timescale = (std::remove_reference_t<decltype(data->wave_timescale)>)std::clamp(value, 0.0099999998f, 3.0f);
}

float DynamicPaintSurface_wave_spring_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_spring);
}

void DynamicPaintSurface_wave_spring_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_spring = (std::remove_reference_t<decltype(data->wave_spring)>)std::clamp(value, 0.0f, 1.0f);
}

float DynamicPaintSurface_wave_smoothness_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return (float)(data->wave_smoothness);
}

void DynamicPaintSurface_wave_smoothness_set(PointerRNA *ptr, float value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    data->wave_smoothness = (std::remove_reference_t<decltype(data->wave_smoothness)>)std::clamp(value, 0.0f, 10.0f);
}

bool DynamicPaintSurface_use_wave_open_border_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return ((uint64_t(data->flags) & 128) != 0);
}

void DynamicPaintSurface_use_wave_open_border_set(PointerRNA *ptr, bool value)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 128); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(128)); }
}

PointerRNA DynamicPaintSurface_point_cache_get(PointerRNA *ptr)
{
    DynamicPaintSurface *data = (DynamicPaintSurface *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PointCache, data->pointcache);
}

bool DynamicPaintSurface_is_cache_user_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_DynamicPaint_is_cache_user_get;
    return fn(ptr);
}




bool DynamicPaintSurface_output_exists_func(DynamicPaintSurface *_self, Object *object, int index)
{
	return rna_DynamicPaint_is_output_exists(_self, object, index);
}

static void DynamicPaintSurface_output_exists_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	DynamicPaintSurface *_self;
	Object *object;
	int index;
	bool exists;
	char *_data, *_retdata;
	
	_self = (DynamicPaintSurface *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	exists = rna_DynamicPaint_is_output_exists(_self, object, index);
	*((bool *)_retdata) = exists;
}

/* Repeated prototypes to detect errors */

bool rna_DynamicPaint_is_output_exists(DynamicPaintSurface *_self, Object *object, int index);

/* Canvas Settings */
static CollectionPropertyRNA rna_DynamicPaintCanvasSettings_rna_properties_;
PropertyRNA &rna_DynamicPaintCanvasSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintCanvasSettings_rna_properties_);

static PointerPropertyRNA rna_DynamicPaintCanvasSettings_rna_type_;
PropertyRNA &rna_DynamicPaintCanvasSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintCanvasSettings_rna_type_);

static CollectionPropertyRNA rna_DynamicPaintCanvasSettings_canvas_surfaces_;
PropertyRNA &rna_DynamicPaintCanvasSettings_canvas_surfaces = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintCanvasSettings_canvas_surfaces_);

StructRNA *RNA_DynamicPaintCanvasSettings;
void register_struct_DynamicPaintCanvasSettings(BlenderRNA &brna)
{
	rna_DynamicPaintCanvasSettings_rna_properties_ = {
		{&rna_DynamicPaintCanvasSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintCanvasSettings_rna_properties_begin, DynamicPaintCanvasSettings_rna_properties_next, DynamicPaintCanvasSettings_rna_properties_end, DynamicPaintCanvasSettings_rna_properties_get, nullptr, nullptr, DynamicPaintCanvasSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DynamicPaintCanvasSettings_rna_type_ = {
		{&rna_DynamicPaintCanvasSettings_canvas_surfaces, 	&rna_DynamicPaintCanvasSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintCanvasSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_DynamicPaintCanvasSettings_canvas_surfaces_ = {
		{nullptr, 	&rna_DynamicPaintCanvasSettings_rna_type,
		-1, "canvas_surfaces", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Paint Surface List",
		"Paint surface list",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_DynamicPaintSurfaces},
		DynamicPaintCanvasSettings_canvas_surfaces_begin, DynamicPaintCanvasSettings_canvas_surfaces_next, DynamicPaintCanvasSettings_canvas_surfaces_end, DynamicPaintCanvasSettings_canvas_surfaces_get, nullptr, DynamicPaintCanvasSettings_canvas_surfaces_lookup_int, nullptr, nullptr, RNA_DynamicPaintSurface
	};

	StructRNA *srna = RNA_DynamicPaintCanvasSettings;
	srna->cont.properties = {&rna_DynamicPaintCanvasSettings_rna_properties, &rna_DynamicPaintCanvasSettings_canvas_surfaces};
	srna->identifier = "DynamicPaintCanvasSettings";
	srna->flag = 516;
	srna->name = "Canvas Settings";
	srna->description = "Dynamic Paint canvas settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_DynamicPaintCanvasSettings_rna_properties;
	srna->path = rna_DynamicPaintCanvasSettings_path;
};

/* Canvas Surfaces */
static CollectionPropertyRNA rna_DynamicPaintSurfaces_rna_properties_;
PropertyRNA &rna_DynamicPaintSurfaces_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurfaces_rna_properties_);

static PointerPropertyRNA rna_DynamicPaintSurfaces_rna_type_;
PropertyRNA &rna_DynamicPaintSurfaces_rna_type = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurfaces_rna_type_);

static IntPropertyRNA rna_DynamicPaintSurfaces_active_index_;
PropertyRNA &rna_DynamicPaintSurfaces_active_index = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurfaces_active_index_);

static PointerPropertyRNA rna_DynamicPaintSurfaces_active_;
PropertyRNA &rna_DynamicPaintSurfaces_active = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurfaces_active_);

StructRNA *RNA_DynamicPaintSurfaces;
void register_struct_DynamicPaintSurfaces(BlenderRNA &brna)
{
	rna_DynamicPaintSurfaces_rna_properties_ = {
		{&rna_DynamicPaintSurfaces_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurfaces_rna_properties_begin, DynamicPaintSurfaces_rna_properties_next, DynamicPaintSurfaces_rna_properties_end, DynamicPaintSurfaces_rna_properties_get, nullptr, nullptr, DynamicPaintSurfaces_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DynamicPaintSurfaces_rna_type_ = {
		{&rna_DynamicPaintSurfaces_active_index, 	&rna_DynamicPaintSurfaces_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurfaces_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_DynamicPaintSurfaces_active_index_ = {
		{&rna_DynamicPaintSurfaces_active, 	&rna_DynamicPaintSurfaces_rna_type,
		-1, "active_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Point Cache Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurfaces_active_index_get, DynamicPaintSurfaces_active_index_set, nullptr, nullptr, rna_Surface_active_point_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurfaces_active_ = {
		{nullptr, 	&rna_DynamicPaintSurfaces_active_index,
		-1, "active", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Surface",
		"Active Dynamic Paint surface being displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurfaces_active_get, nullptr, nullptr, nullptr,RNA_DynamicPaintSurface
	};

	StructRNA *srna = RNA_DynamicPaintSurfaces;
	srna->cont.properties = {&rna_DynamicPaintSurfaces_rna_properties, &rna_DynamicPaintSurfaces_active};
	srna->identifier = "DynamicPaintSurfaces";
	srna->flag = 516;
	srna->name = "Canvas Surfaces";
	srna->description = "Collection of Dynamic Paint Canvas surfaces";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_DynamicPaintSurfaces_rna_properties;
};

/* Brush Settings */
static CollectionPropertyRNA rna_DynamicPaintBrushSettings_rna_properties_;
PropertyRNA &rna_DynamicPaintBrushSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_rna_properties_);

static PointerPropertyRNA rna_DynamicPaintBrushSettings_rna_type_;
PropertyRNA &rna_DynamicPaintBrushSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_rna_type_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_color_;
PropertyRNA &rna_DynamicPaintBrushSettings_paint_color = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_paint_color_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_alpha_;
PropertyRNA &rna_DynamicPaintBrushSettings_paint_alpha = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_paint_alpha_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_absolute_alpha_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_absolute_alpha = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_absolute_alpha_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_wetness_;
PropertyRNA &rna_DynamicPaintBrushSettings_paint_wetness = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_paint_wetness_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_paint_erase_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_paint_erase = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_paint_erase_);

static EnumPropertyRNA rna_DynamicPaintBrushSettings_wave_type_;
PropertyRNA &rna_DynamicPaintBrushSettings_wave_type = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_wave_type_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_factor_;
PropertyRNA &rna_DynamicPaintBrushSettings_wave_factor = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_wave_factor_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_wave_clamp_;
PropertyRNA &rna_DynamicPaintBrushSettings_wave_clamp = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_wave_clamp_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_smudge_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_smudge = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_smudge_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_smudge_strength_;
PropertyRNA &rna_DynamicPaintBrushSettings_smudge_strength = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_smudge_strength_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_velocity_max_;
PropertyRNA &rna_DynamicPaintBrushSettings_velocity_max = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_velocity_max_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_alpha_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_velocity_alpha = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_velocity_alpha_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_depth_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_velocity_depth = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_velocity_depth_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_velocity_color_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_velocity_color = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_velocity_color_);

static EnumPropertyRNA rna_DynamicPaintBrushSettings_paint_source_;
PropertyRNA &rna_DynamicPaintBrushSettings_paint_source = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_paint_source_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_paint_distance_;
PropertyRNA &rna_DynamicPaintBrushSettings_paint_distance = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_paint_distance_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha_);

static EnumPropertyRNA rna_DynamicPaintBrushSettings_proximity_falloff_;
PropertyRNA &rna_DynamicPaintBrushSettings_proximity_falloff = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_proximity_falloff_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_proximity_project_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_proximity_project = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_proximity_project_);

static EnumPropertyRNA rna_DynamicPaintBrushSettings_ray_direction_;
PropertyRNA &rna_DynamicPaintBrushSettings_ray_direction = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_ray_direction_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_invert_proximity_;
PropertyRNA &rna_DynamicPaintBrushSettings_invert_proximity = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_invert_proximity_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_negative_volume_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_negative_volume = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_negative_volume_);

static PointerPropertyRNA rna_DynamicPaintBrushSettings_particle_system_;
PropertyRNA &rna_DynamicPaintBrushSettings_particle_system = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_particle_system_);

static BoolPropertyRNA rna_DynamicPaintBrushSettings_use_particle_radius_;
PropertyRNA &rna_DynamicPaintBrushSettings_use_particle_radius = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_use_particle_radius_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_solid_radius_;
PropertyRNA &rna_DynamicPaintBrushSettings_solid_radius = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_solid_radius_);

static FloatPropertyRNA rna_DynamicPaintBrushSettings_smooth_radius_;
PropertyRNA &rna_DynamicPaintBrushSettings_smooth_radius = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_smooth_radius_);

static PointerPropertyRNA rna_DynamicPaintBrushSettings_paint_ramp_;
PropertyRNA &rna_DynamicPaintBrushSettings_paint_ramp = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_paint_ramp_);

static PointerPropertyRNA rna_DynamicPaintBrushSettings_velocity_ramp_;
PropertyRNA &rna_DynamicPaintBrushSettings_velocity_ramp = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintBrushSettings_velocity_ramp_);

StructRNA *RNA_DynamicPaintBrushSettings;
void register_struct_DynamicPaintBrushSettings(BlenderRNA &brna)
{
	rna_DynamicPaintBrushSettings_rna_properties_ = {
		{&rna_DynamicPaintBrushSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_rna_properties_begin, DynamicPaintBrushSettings_rna_properties_next, DynamicPaintBrushSettings_rna_properties_end, DynamicPaintBrushSettings_rna_properties_get, nullptr, nullptr, DynamicPaintBrushSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DynamicPaintBrushSettings_rna_type_ = {
		{&rna_DynamicPaintBrushSettings_paint_color, 	&rna_DynamicPaintBrushSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_DynamicPaintBrushSettings_paint_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_DynamicPaintBrushSettings_paint_color_ = {
		{&rna_DynamicPaintBrushSettings_paint_alpha, 	&rna_DynamicPaintBrushSettings_rna_type,
		-1, "paint_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Paint Color",
		"Color of the paint",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, r), RawPropertyType(5), nullptr},
		nullptr, nullptr, DynamicPaintBrushSettings_paint_color_get, DynamicPaintBrushSettings_paint_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_DynamicPaintBrushSettings_paint_color_default
	};

	rna_DynamicPaintBrushSettings_paint_alpha_ = {
		{&rna_DynamicPaintBrushSettings_use_absolute_alpha, 	&rna_DynamicPaintBrushSettings_paint_color,
		-1, "paint_alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Paint Alpha",
		"Paint alpha",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, alpha), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_paint_alpha_get, DynamicPaintBrushSettings_paint_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_use_absolute_alpha_ = {
		{&rna_DynamicPaintBrushSettings_paint_wetness, 	&rna_DynamicPaintBrushSettings_paint_alpha,
		-1, "use_absolute_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Alpha",
		"Only increase alpha value if paint alpha is higher than existing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_absolute_alpha_get, DynamicPaintBrushSettings_use_absolute_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintBrushSettings_paint_wetness_ = {
		{&rna_DynamicPaintBrushSettings_use_paint_erase, 	&rna_DynamicPaintBrushSettings_use_absolute_alpha,
		-1, "paint_wetness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Paint Wetness",
		"Paint wetness, visible in wetmap (some effects only affect wet paint)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, wetness), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_paint_wetness_get, DynamicPaintBrushSettings_paint_wetness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_use_paint_erase_ = {
		{&rna_DynamicPaintBrushSettings_wave_type, 	&rna_DynamicPaintBrushSettings_paint_wetness,
		-1, "use_paint_erase", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Erase Paint",
		"Erase / remove paint instead of adding it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_paint_erase_get, DynamicPaintBrushSettings_use_paint_erase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_DynamicPaintBrushSettings_wave_type_items[5] = {
		{3, "CHANGE", 0, "Depth Change", ""	},
		{0, "DEPTH", 0, "Obstacle", ""	},
		{1, "FORCE", 0, "Force", ""	},
		{2, "REFLECT", 0, "Reflect Only", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintBrushSettings_wave_type_ = {
		{&rna_DynamicPaintBrushSettings_wave_factor, 	&rna_DynamicPaintBrushSettings_use_paint_erase,
		-1, "wave_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wave Type",
		"",
		0, "Simulation",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, wave_type), RawPropertyType(1), nullptr},
		DynamicPaintBrushSettings_wave_type_get, DynamicPaintBrushSettings_wave_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintBrushSettings_wave_type_items, 4, 0
	};

	rna_DynamicPaintBrushSettings_wave_factor_ = {
		{&rna_DynamicPaintBrushSettings_wave_clamp, 	&rna_DynamicPaintBrushSettings_wave_type,
		-1, "wave_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Factor",
		"Multiplier for wave influence of this brush",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, wave_factor), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_wave_factor_get, DynamicPaintBrushSettings_wave_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -2.0f, 2.0f, 5.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_wave_clamp_ = {
		{&rna_DynamicPaintBrushSettings_use_smudge, 	&rna_DynamicPaintBrushSettings_wave_factor,
		-1, "wave_clamp", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clamp Waves",
		"Maximum level of surface intersection used to influence waves (use 0.0 to disable)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, wave_clamp), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_wave_clamp_get, DynamicPaintBrushSettings_wave_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 50.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_use_smudge_ = {
		{&rna_DynamicPaintBrushSettings_smudge_strength, 	&rna_DynamicPaintBrushSettings_wave_clamp,
		-1, "use_smudge", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Do Smudge",
		"Make this brush to smudge existing paint as it moves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_smudge_get, DynamicPaintBrushSettings_use_smudge_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintBrushSettings_smudge_strength_ = {
		{&rna_DynamicPaintBrushSettings_velocity_max, 	&rna_DynamicPaintBrushSettings_use_smudge,
		-1, "smudge_strength", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smudge Strength",
		"Smudge effect strength",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, smudge_strength), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_smudge_strength_get, DynamicPaintBrushSettings_smudge_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 5.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_velocity_max_ = {
		{&rna_DynamicPaintBrushSettings_use_velocity_alpha, 	&rna_DynamicPaintBrushSettings_smudge_strength,
		-1, "velocity_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Velocity",
		"Velocity considered as maximum influence (Blender units per frame)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, max_velocity), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_velocity_max_get, DynamicPaintBrushSettings_velocity_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 2.0f, 0.0001000000f, 10.0f, 5.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_use_velocity_alpha_ = {
		{&rna_DynamicPaintBrushSettings_use_velocity_depth, 	&rna_DynamicPaintBrushSettings_velocity_max,
		-1, "use_velocity_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Alpha",
		"Multiply brush influence by velocity color ramp alpha",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_velocity_alpha_get, DynamicPaintBrushSettings_use_velocity_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintBrushSettings_use_velocity_depth_ = {
		{&rna_DynamicPaintBrushSettings_use_velocity_color, 	&rna_DynamicPaintBrushSettings_use_velocity_alpha,
		-1, "use_velocity_depth", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Depth",
		"Multiply brush intersection depth (displace, waves) by velocity ramp alpha",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_velocity_depth_get, DynamicPaintBrushSettings_use_velocity_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintBrushSettings_use_velocity_color_ = {
		{&rna_DynamicPaintBrushSettings_paint_source, 	&rna_DynamicPaintBrushSettings_use_velocity_depth,
		-1, "use_velocity_color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Replace Color",
		"Replace brush color by velocity color ramp",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_velocity_color_get, DynamicPaintBrushSettings_use_velocity_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_DynamicPaintBrushSettings_paint_source_items[6] = {
		{3, "PARTICLE_SYSTEM", 119, "Particle System", ""	},
		{4, "POINT", 327, "Object Center", ""	},
		{1, "DISTANCE", 64, "Proximity", ""	},
		{2, "VOLUME_DISTANCE", 342, "Mesh Volume + Proximity", ""	},
		{0, "VOLUME", 332, "Mesh Volume", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintBrushSettings_paint_source_ = {
		{&rna_DynamicPaintBrushSettings_paint_distance, 	&rna_DynamicPaintBrushSettings_use_velocity_color,
		-1, "paint_source", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Paint Source",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, collision), RawPropertyType(0), nullptr},
		DynamicPaintBrushSettings_paint_source_get, DynamicPaintBrushSettings_paint_source_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintBrushSettings_paint_source_items, 5, 0
	};

	rna_DynamicPaintBrushSettings_paint_distance_ = {
		{&rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha, 	&rna_DynamicPaintBrushSettings_paint_source,
		-1, "paint_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Proximity Distance",
		"Maximum distance from brush to mesh surface to affect paint",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, paint_distance), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_paint_distance_get, DynamicPaintBrushSettings_paint_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 500.0f, 0.0f, 500.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha_ = {
		{&rna_DynamicPaintBrushSettings_proximity_falloff, 	&rna_DynamicPaintBrushSettings_paint_distance,
		-1, "use_proximity_ramp_alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Only Use Alpha",
		"Only read color ramp alpha",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_proximity_ramp_alpha_get, DynamicPaintBrushSettings_use_proximity_ramp_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_DynamicPaintBrushSettings_proximity_falloff_items[4] = {
		{1, "SMOOTH", 585, "Smooth", ""	},
		{0, "CONSTANT", 568, "Constant", ""	},
		{2, "RAMP", 59, "Color Ramp", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintBrushSettings_proximity_falloff_ = {
		{&rna_DynamicPaintBrushSettings_use_proximity_project, 	&rna_DynamicPaintBrushSettings_use_proximity_ramp_alpha,
		-1, "proximity_falloff", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Falloff",
		"Proximity falloff type",
		0, "Brush",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, proximity_falloff), RawPropertyType(1), nullptr},
		DynamicPaintBrushSettings_proximity_falloff_get, DynamicPaintBrushSettings_proximity_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintBrushSettings_proximity_falloff_items, 3, 0
	};

	rna_DynamicPaintBrushSettings_use_proximity_project_ = {
		{&rna_DynamicPaintBrushSettings_ray_direction, 	&rna_DynamicPaintBrushSettings_proximity_falloff,
		-1, "use_proximity_project", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Project",
		"Brush is projected to canvas from defined direction within brush proximity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_proximity_project_get, DynamicPaintBrushSettings_use_proximity_project_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_DynamicPaintBrushSettings_ray_direction_items[4] = {
		{0, "CANVAS", 0, "Canvas Normal", ""	},
		{1, "BRUSH", 0, "Brush Normal", ""	},
		{2, "Z_AXIS", 0, "Z-Axis", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintBrushSettings_ray_direction_ = {
		{&rna_DynamicPaintBrushSettings_invert_proximity, 	&rna_DynamicPaintBrushSettings_use_proximity_project,
		-1, "ray_direction", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ray Direction",
		"Ray direction to use for projection (if brush object is located in that direction it\'s painted)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, ray_dir), RawPropertyType(1), nullptr},
		DynamicPaintBrushSettings_ray_direction_get, DynamicPaintBrushSettings_ray_direction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintBrushSettings_ray_direction_items, 3, 0
	};

	rna_DynamicPaintBrushSettings_invert_proximity_ = {
		{&rna_DynamicPaintBrushSettings_use_negative_volume, 	&rna_DynamicPaintBrushSettings_ray_direction,
		-1, "invert_proximity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inner Proximity",
		"Proximity falloff is applied inside the volume",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_invert_proximity_get, DynamicPaintBrushSettings_invert_proximity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintBrushSettings_use_negative_volume_ = {
		{&rna_DynamicPaintBrushSettings_particle_system, 	&rna_DynamicPaintBrushSettings_invert_proximity,
		-1, "use_negative_volume", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Negate Volume",
		"Negate influence inside the volume",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_negative_volume_get, DynamicPaintBrushSettings_use_negative_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintBrushSettings_particle_system_ = {
		{&rna_DynamicPaintBrushSettings_use_particle_radius, 	&rna_DynamicPaintBrushSettings_use_negative_volume,
		-1, "particle_system", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Particle Systems",
		"The particle system to paint with",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_reset_dependency, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_particle_system_get, DynamicPaintBrushSettings_particle_system_set, nullptr, nullptr,RNA_ParticleSystem
	};

	rna_DynamicPaintBrushSettings_use_particle_radius_ = {
		{&rna_DynamicPaintBrushSettings_solid_radius, 	&rna_DynamicPaintBrushSettings_particle_system,
		-1, "use_particle_radius", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Particle Radius",
		"Use radius from particle settings",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_use_particle_radius_get, DynamicPaintBrushSettings_use_particle_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintBrushSettings_solid_radius_ = {
		{&rna_DynamicPaintBrushSettings_smooth_radius, 	&rna_DynamicPaintBrushSettings_use_particle_radius,
		-1, "solid_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Solid Radius",
		"Radius that will be painted solid",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, particle_radius), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_solid_radius_get, DynamicPaintBrushSettings_solid_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 2.0f, 0.0099999998f, 10.0f, 5.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_smooth_radius_ = {
		{&rna_DynamicPaintBrushSettings_paint_ramp, 	&rna_DynamicPaintBrushSettings_solid_radius,
		-1, "smooth_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smooth Radius",
		"Smooth falloff added after solid radius",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintBrushSettings, particle_smooth), RawPropertyType(5), nullptr},
		DynamicPaintBrushSettings_smooth_radius_get, DynamicPaintBrushSettings_smooth_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 5.0f, -1, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintBrushSettings_paint_ramp_ = {
		{&rna_DynamicPaintBrushSettings_velocity_ramp, 	&rna_DynamicPaintBrushSettings_smooth_radius,
		-1, "paint_ramp", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Paint Color Ramp",
		"Color ramp used to define proximity falloff",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_paint_ramp_get, nullptr, nullptr, nullptr,RNA_ColorRamp
	};

	rna_DynamicPaintBrushSettings_velocity_ramp_ = {
		{nullptr, 	&rna_DynamicPaintBrushSettings_paint_ramp,
		-1, "velocity_ramp", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Velocity Color Ramp",
		"Color ramp used to define brush velocity effect",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintBrushSettings_velocity_ramp_get, nullptr, nullptr, nullptr,RNA_ColorRamp
	};

	StructRNA *srna = RNA_DynamicPaintBrushSettings;
	srna->cont.properties = {&rna_DynamicPaintBrushSettings_rna_properties, &rna_DynamicPaintBrushSettings_velocity_ramp};
	srna->identifier = "DynamicPaintBrushSettings";
	srna->flag = 516;
	srna->name = "Brush Settings";
	srna->description = "Brush settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_DynamicPaintBrushSettings_rna_properties;
	srna->path = rna_DynamicPaintBrushSettings_path;
};

/* Paint Surface */
static CollectionPropertyRNA rna_DynamicPaintSurface_rna_properties_;
PropertyRNA &rna_DynamicPaintSurface_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_rna_properties_);

static PointerPropertyRNA rna_DynamicPaintSurface_rna_type_;
PropertyRNA &rna_DynamicPaintSurface_rna_type = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_rna_type_);

static EnumPropertyRNA rna_DynamicPaintSurface_surface_format_;
PropertyRNA &rna_DynamicPaintSurface_surface_format = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_surface_format_);

static EnumPropertyRNA rna_DynamicPaintSurface_surface_type_;
PropertyRNA &rna_DynamicPaintSurface_surface_type = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_surface_type_);

static BoolPropertyRNA rna_DynamicPaintSurface_is_active_;
PropertyRNA &rna_DynamicPaintSurface_is_active = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_is_active_);

static StringPropertyRNA rna_DynamicPaintSurface_name_;
PropertyRNA &rna_DynamicPaintSurface_name = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_name_);

static PointerPropertyRNA rna_DynamicPaintSurface_brush_collection_;
PropertyRNA &rna_DynamicPaintSurface_brush_collection = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_brush_collection_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve_;
PropertyRNA &rna_DynamicPaintSurface_use_dissolve = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_dissolve_);

static IntPropertyRNA rna_DynamicPaintSurface_dissolve_speed_;
PropertyRNA &rna_DynamicPaintSurface_dissolve_speed = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_dissolve_speed_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_drying_;
PropertyRNA &rna_DynamicPaintSurface_use_drying = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_drying_);

static IntPropertyRNA rna_DynamicPaintSurface_dry_speed_;
PropertyRNA &rna_DynamicPaintSurface_dry_speed = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_dry_speed_);

static IntPropertyRNA rna_DynamicPaintSurface_image_resolution_;
PropertyRNA &rna_DynamicPaintSurface_image_resolution = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_image_resolution_);

static StringPropertyRNA rna_DynamicPaintSurface_uv_layer_;
PropertyRNA &rna_DynamicPaintSurface_uv_layer = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_uv_layer_);

static IntPropertyRNA rna_DynamicPaintSurface_frame_start_;
PropertyRNA &rna_DynamicPaintSurface_frame_start = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_frame_start_);

static IntPropertyRNA rna_DynamicPaintSurface_frame_end_;
PropertyRNA &rna_DynamicPaintSurface_frame_end = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_frame_end_);

static IntPropertyRNA rna_DynamicPaintSurface_frame_substeps_;
PropertyRNA &rna_DynamicPaintSurface_frame_substeps = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_frame_substeps_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_antialiasing_;
PropertyRNA &rna_DynamicPaintSurface_use_antialiasing = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_antialiasing_);

static FloatPropertyRNA rna_DynamicPaintSurface_brush_influence_scale_;
PropertyRNA &rna_DynamicPaintSurface_brush_influence_scale = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_brush_influence_scale_);

static FloatPropertyRNA rna_DynamicPaintSurface_brush_radius_scale_;
PropertyRNA &rna_DynamicPaintSurface_brush_radius_scale = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_brush_radius_scale_);

static EnumPropertyRNA rna_DynamicPaintSurface_init_color_type_;
PropertyRNA &rna_DynamicPaintSurface_init_color_type = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_init_color_type_);

static FloatPropertyRNA rna_DynamicPaintSurface_init_color_;
PropertyRNA &rna_DynamicPaintSurface_init_color = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_init_color_);

static PointerPropertyRNA rna_DynamicPaintSurface_init_texture_;
PropertyRNA &rna_DynamicPaintSurface_init_texture = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_init_texture_);

static StringPropertyRNA rna_DynamicPaintSurface_init_layername_;
PropertyRNA &rna_DynamicPaintSurface_init_layername = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_init_layername_);

static EnumPropertyRNA rna_DynamicPaintSurface_effect_ui_;
PropertyRNA &rna_DynamicPaintSurface_effect_ui = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_effect_ui_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_dry_log_;
PropertyRNA &rna_DynamicPaintSurface_use_dry_log = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_dry_log_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_dissolve_log_;
PropertyRNA &rna_DynamicPaintSurface_use_dissolve_log = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_dissolve_log_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_spread_;
PropertyRNA &rna_DynamicPaintSurface_use_spread = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_spread_);

static FloatPropertyRNA rna_DynamicPaintSurface_spread_speed_;
PropertyRNA &rna_DynamicPaintSurface_spread_speed = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_spread_speed_);

static FloatPropertyRNA rna_DynamicPaintSurface_color_dry_threshold_;
PropertyRNA &rna_DynamicPaintSurface_color_dry_threshold = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_color_dry_threshold_);

static FloatPropertyRNA rna_DynamicPaintSurface_color_spread_speed_;
PropertyRNA &rna_DynamicPaintSurface_color_spread_speed = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_color_spread_speed_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_drip_;
PropertyRNA &rna_DynamicPaintSurface_use_drip = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_drip_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_shrink_;
PropertyRNA &rna_DynamicPaintSurface_use_shrink = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_shrink_);

static FloatPropertyRNA rna_DynamicPaintSurface_shrink_speed_;
PropertyRNA &rna_DynamicPaintSurface_shrink_speed = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_shrink_speed_);

static PointerPropertyRNA rna_DynamicPaintSurface_effector_weights_;
PropertyRNA &rna_DynamicPaintSurface_effector_weights = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_effector_weights_);

static FloatPropertyRNA rna_DynamicPaintSurface_drip_velocity_;
PropertyRNA &rna_DynamicPaintSurface_drip_velocity = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_drip_velocity_);

static FloatPropertyRNA rna_DynamicPaintSurface_drip_acceleration_;
PropertyRNA &rna_DynamicPaintSurface_drip_acceleration = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_drip_acceleration_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_premultiply_;
PropertyRNA &rna_DynamicPaintSurface_use_premultiply = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_premultiply_);

static StringPropertyRNA rna_DynamicPaintSurface_image_output_path_;
PropertyRNA &rna_DynamicPaintSurface_image_output_path = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_image_output_path_);

static StringPropertyRNA rna_DynamicPaintSurface_output_name_a_;
PropertyRNA &rna_DynamicPaintSurface_output_name_a = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_output_name_a_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_output_a_;
PropertyRNA &rna_DynamicPaintSurface_use_output_a = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_output_a_);

static StringPropertyRNA rna_DynamicPaintSurface_output_name_b_;
PropertyRNA &rna_DynamicPaintSurface_output_name_b = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_output_name_b_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_output_b_;
PropertyRNA &rna_DynamicPaintSurface_use_output_b = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_output_b_);

static FloatPropertyRNA rna_DynamicPaintSurface_depth_clamp_;
PropertyRNA &rna_DynamicPaintSurface_depth_clamp = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_depth_clamp_);

static FloatPropertyRNA rna_DynamicPaintSurface_displace_factor_;
PropertyRNA &rna_DynamicPaintSurface_displace_factor = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_displace_factor_);

static EnumPropertyRNA rna_DynamicPaintSurface_image_fileformat_;
PropertyRNA &rna_DynamicPaintSurface_image_fileformat = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_image_fileformat_);

static EnumPropertyRNA rna_DynamicPaintSurface_displace_type_;
PropertyRNA &rna_DynamicPaintSurface_displace_type = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_displace_type_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_incremental_displace_;
PropertyRNA &rna_DynamicPaintSurface_use_incremental_displace = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_incremental_displace_);

static FloatPropertyRNA rna_DynamicPaintSurface_wave_damping_;
PropertyRNA &rna_DynamicPaintSurface_wave_damping = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_wave_damping_);

static FloatPropertyRNA rna_DynamicPaintSurface_wave_speed_;
PropertyRNA &rna_DynamicPaintSurface_wave_speed = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_wave_speed_);

static FloatPropertyRNA rna_DynamicPaintSurface_wave_timescale_;
PropertyRNA &rna_DynamicPaintSurface_wave_timescale = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_wave_timescale_);

static FloatPropertyRNA rna_DynamicPaintSurface_wave_spring_;
PropertyRNA &rna_DynamicPaintSurface_wave_spring = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_wave_spring_);

static FloatPropertyRNA rna_DynamicPaintSurface_wave_smoothness_;
PropertyRNA &rna_DynamicPaintSurface_wave_smoothness = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_wave_smoothness_);

static BoolPropertyRNA rna_DynamicPaintSurface_use_wave_open_border_;
PropertyRNA &rna_DynamicPaintSurface_use_wave_open_border = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_use_wave_open_border_);

static PointerPropertyRNA rna_DynamicPaintSurface_point_cache_;
PropertyRNA &rna_DynamicPaintSurface_point_cache = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_point_cache_);

static BoolPropertyRNA rna_DynamicPaintSurface_is_cache_user_;
PropertyRNA &rna_DynamicPaintSurface_is_cache_user = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_is_cache_user_);

static PointerPropertyRNA rna_DynamicPaintSurface_output_exists_object_;
PropertyRNA &rna_DynamicPaintSurface_output_exists_object = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_output_exists_object_);

static IntPropertyRNA rna_DynamicPaintSurface_output_exists_index_;
PropertyRNA &rna_DynamicPaintSurface_output_exists_index = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_output_exists_index_);

static BoolPropertyRNA rna_DynamicPaintSurface_output_exists_exists_;
PropertyRNA &rna_DynamicPaintSurface_output_exists_exists = reinterpret_cast<PropertyRNA &>(rna_DynamicPaintSurface_output_exists_exists_);

FunctionRNA *rna_DynamicPaintSurface_output_exists_func;
StructRNA *RNA_DynamicPaintSurface;
void register_struct_DynamicPaintSurface(BlenderRNA &brna)
{
	rna_DynamicPaintSurface_rna_properties_ = {
		{&rna_DynamicPaintSurface_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_rna_properties_begin, DynamicPaintSurface_rna_properties_next, DynamicPaintSurface_rna_properties_end, DynamicPaintSurface_rna_properties_get, nullptr, nullptr, DynamicPaintSurface_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DynamicPaintSurface_rna_type_ = {
		{&rna_DynamicPaintSurface_surface_format, 	&rna_DynamicPaintSurface_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_DynamicPaintSurface_surface_format_items[3] = {
		{1, "VERTEX", 266, "Vertex", ""	},
		{2, "IMAGE", 674, "Image Sequence", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintSurface_surface_format_ = {
		{&rna_DynamicPaintSurface_surface_type, 	&rna_DynamicPaintSurface_rna_type,
		-1, "surface_format", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Format",
		"Surface Format",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurfaces_changeFormat, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, format), RawPropertyType(1), nullptr},
		DynamicPaintSurface_surface_format_get, DynamicPaintSurface_surface_format_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_surface_format_items, 2, 1
	};

	static const EnumPropertyItem rna_DynamicPaintSurface_surface_type_items[2] = {
		{0, "PAINT", 0, "Paint", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintSurface_surface_type_ = {
		{&rna_DynamicPaintSurface_is_active, 	&rna_DynamicPaintSurface_surface_format,
		-1, "surface_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Surface Type",
		"Surface Type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_changeType, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, type), RawPropertyType(1), nullptr},
		DynamicPaintSurface_surface_type_get, DynamicPaintSurface_surface_type_set, rna_DynamicPaint_surface_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_surface_type_items, 1, 0
	};

	rna_DynamicPaintSurface_is_active_ = {
		{&rna_DynamicPaintSurface_name, 	&rna_DynamicPaintSurface_surface_type,
		-1, "is_active", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Active",
		"Toggle whether surface is processed or ignored",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_is_active_get, DynamicPaintSurface_is_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_name_ = {
		{&rna_DynamicPaintSurface_brush_collection, 	&rna_DynamicPaintSurface_is_active,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Surface name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_DynamicPaintSurface_uniqueName, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_name_get, DynamicPaintSurface_name_length, DynamicPaintSurface_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_DynamicPaintSurface_brush_collection_ = {
		{&rna_DynamicPaintSurface_use_dissolve, 	&rna_DynamicPaintSurface_name,
		-1, "brush_collection", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brush Collection",
		"Only use brush objects from this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_reset_dependency, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_brush_collection_get, DynamicPaintSurface_brush_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_DynamicPaintSurface_use_dissolve_ = {
		{&rna_DynamicPaintSurface_dissolve_speed, 	&rna_DynamicPaintSurface_brush_collection,
		-1, "use_dissolve", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dissolve",
		"Enable to make surface changes disappear over time",
		0, "Simulation",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_dissolve_get, DynamicPaintSurface_use_dissolve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_dissolve_speed_ = {
		{&rna_DynamicPaintSurface_use_drying, 	&rna_DynamicPaintSurface_use_dissolve,
		-1, "dissolve_speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dissolve Time",
		"Approximately in how many frames should dissolve happen",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, diss_speed), RawPropertyType(0), nullptr},
		DynamicPaintSurface_dissolve_speed_get, DynamicPaintSurface_dissolve_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 5, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_use_drying_ = {
		{&rna_DynamicPaintSurface_dry_speed, 	&rna_DynamicPaintSurface_dissolve_speed,
		-1, "use_drying", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dry",
		"Enable to make surface wetness dry over time",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_drying_get, DynamicPaintSurface_use_drying_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_dry_speed_ = {
		{&rna_DynamicPaintSurface_image_resolution, 	&rna_DynamicPaintSurface_use_drying,
		-1, "dry_speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dry Time",
		"Approximately in how many frames should drying happen",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, dry_speed), RawPropertyType(0), nullptr},
		DynamicPaintSurface_dry_speed_get, DynamicPaintSurface_dry_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 5, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_image_resolution_ = {
		{&rna_DynamicPaintSurface_uv_layer, 	&rna_DynamicPaintSurface_dry_speed,
		-1, "image_resolution", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution",
		"Output image resolution",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, image_resolution), RawPropertyType(0), nullptr},
		DynamicPaintSurface_image_resolution_get, DynamicPaintSurface_image_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 16, 4096, 16, 4096, 1, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_uv_layer_ = {
		{&rna_DynamicPaintSurface_frame_start, 	&rna_DynamicPaintSurface_image_resolution,
		-1, "uv_layer", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV Map",
		"UV map name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {68, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_uv_layer_get, DynamicPaintSurface_uv_layer_length, DynamicPaintSurface_uv_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 68, ""
	};

	rna_DynamicPaintSurface_frame_start_ = {
		{&rna_DynamicPaintSurface_frame_end, 	&rna_DynamicPaintSurface_uv_layer,
		-1, "frame_start", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Start Frame",
		"Simulation start frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurfaces_updateFrames, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, start_frame), RawPropertyType(0), nullptr},
		DynamicPaintSurface_frame_start_get, DynamicPaintSurface_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 9999, 1, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_frame_end_ = {
		{&rna_DynamicPaintSurface_frame_substeps, 	&rna_DynamicPaintSurface_frame_start,
		-1, "frame_end", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "End Frame",
		"Simulation end frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurfaces_updateFrames, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, end_frame), RawPropertyType(0), nullptr},
		DynamicPaintSurface_frame_end_get, DynamicPaintSurface_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 9999, 1, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_frame_substeps_ = {
		{&rna_DynamicPaintSurface_use_antialiasing, 	&rna_DynamicPaintSurface_frame_end,
		-1, "frame_substeps", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sub-Steps",
		"Do extra frames between scene frames to ensure smooth motion",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, substeps), RawPropertyType(0), nullptr},
		DynamicPaintSurface_frame_substeps_get, DynamicPaintSurface_frame_substeps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10, 0, 20, 1, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_use_antialiasing_ = {
		{&rna_DynamicPaintSurface_brush_influence_scale, 	&rna_DynamicPaintSurface_frame_substeps,
		-1, "use_antialiasing", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Anti-Aliasing",
		"Use 5× multisampling to smooth paint edges",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_antialiasing_get, DynamicPaintSurface_use_antialiasing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_brush_influence_scale_ = {
		{&rna_DynamicPaintSurface_brush_radius_scale, 	&rna_DynamicPaintSurface_use_antialiasing,
		-1, "brush_influence_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Influence Scale",
		"Adjust influence brush objects have on this surface",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, influence_scale), RawPropertyType(5), nullptr},
		DynamicPaintSurface_brush_influence_scale_get, DynamicPaintSurface_brush_influence_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_brush_radius_scale_ = {
		{&rna_DynamicPaintSurface_init_color_type, 	&rna_DynamicPaintSurface_brush_influence_scale,
		-1, "brush_radius_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Radius Scale",
		"Adjust radius of proximity brushes or particles for this surface",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, radius_scale), RawPropertyType(5), nullptr},
		DynamicPaintSurface_brush_radius_scale_get, DynamicPaintSurface_brush_radius_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_DynamicPaintSurface_init_color_type_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{1, "COLOR", 59, "Color", ""	},
		{2, "TEXTURE", 128, "UV Texture", ""	},
		{3, "VERTEX_COLOR", 213, "Vertex Color", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintSurface_init_color_type_ = {
		{&rna_DynamicPaintSurface_init_color, 	&rna_DynamicPaintSurface_brush_radius_scale,
		-1, "init_color_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Initial Color",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_initialcolortype, 119472128, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, init_color_type), RawPropertyType(1), nullptr},
		DynamicPaintSurface_init_color_type_get, DynamicPaintSurface_init_color_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_init_color_type_items, 4, 0
	};

	static float rna_DynamicPaintSurface_init_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_DynamicPaintSurface_init_color_ = {
		{&rna_DynamicPaintSurface_init_texture, 	&rna_DynamicPaintSurface_init_color_type,
		-1, "init_color", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Initial color of the surface",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_DynamicPaintSurface_reset, 119472128, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, init_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, DynamicPaintSurface_init_color_get, DynamicPaintSurface_init_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_DynamicPaintSurface_init_color_default
	};

	rna_DynamicPaintSurface_init_texture_ = {
		{&rna_DynamicPaintSurface_init_layername, 	&rna_DynamicPaintSurface_init_color,
		-1, "init_texture", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_reset, 119472128, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_init_texture_get, DynamicPaintSurface_init_texture_set, nullptr, nullptr,RNA_Texture
	};

	rna_DynamicPaintSurface_init_layername_ = {
		{&rna_DynamicPaintSurface_effect_ui, 	&rna_DynamicPaintSurface_init_texture,
		-1, "init_layername", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Data Layer",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {68, 0, 0}, 0,
		rna_DynamicPaintSurface_reset, 119472128, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_init_layername_get, DynamicPaintSurface_init_layername_length, DynamicPaintSurface_init_layername_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 68, ""
	};

	static const EnumPropertyItem rna_DynamicPaintSurface_effect_ui_items[4] = {
		{1, "SPREAD", 0, "Spread", ""	},
		{2, "DRIP", 0, "Drip", ""	},
		{3, "SHRINK", 0, "Shrink", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintSurface_effect_ui_ = {
		{&rna_DynamicPaintSurface_use_dry_log, 	&rna_DynamicPaintSurface_init_layername,
		-1, "effect_ui", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Effect Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, effect_ui), RawPropertyType(1), nullptr},
		DynamicPaintSurface_effect_ui_get, DynamicPaintSurface_effect_ui_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_effect_ui_items, 3, 1
	};

	rna_DynamicPaintSurface_use_dry_log_ = {
		{&rna_DynamicPaintSurface_use_dissolve_log, 	&rna_DynamicPaintSurface_effect_ui,
		-1, "use_dry_log", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slow",
		"Use logarithmic drying (makes high values to dry faster than low values)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_dry_log_get, DynamicPaintSurface_use_dry_log_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_use_dissolve_log_ = {
		{&rna_DynamicPaintSurface_use_spread, 	&rna_DynamicPaintSurface_use_dry_log,
		-1, "use_dissolve_log", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slow",
		"Use logarithmic dissolve (makes high values to fade faster than low values)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_dissolve_log_get, DynamicPaintSurface_use_dissolve_log_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_use_spread_ = {
		{&rna_DynamicPaintSurface_spread_speed, 	&rna_DynamicPaintSurface_use_dissolve_log,
		-1, "use_spread", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Spread",
		"Process spread effect (spread wet paint around surface)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_spread_get, DynamicPaintSurface_use_spread_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_spread_speed_ = {
		{&rna_DynamicPaintSurface_color_dry_threshold, 	&rna_DynamicPaintSurface_use_spread,
		-1, "spread_speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spread Speed",
		"How fast spread effect moves on the canvas surface",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, spread_speed), RawPropertyType(5), nullptr},
		DynamicPaintSurface_spread_speed_get, DynamicPaintSurface_spread_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 5.0f, 0.0010000000f, 10.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_color_dry_threshold_ = {
		{&rna_DynamicPaintSurface_color_spread_speed, 	&rna_DynamicPaintSurface_spread_speed,
		-1, "color_dry_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color Dry",
		"The wetness level when colors start to shift to the background",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, color_dry_threshold), RawPropertyType(5), nullptr},
		DynamicPaintSurface_color_dry_threshold_get, DynamicPaintSurface_color_dry_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_color_spread_speed_ = {
		{&rna_DynamicPaintSurface_use_drip, 	&rna_DynamicPaintSurface_color_dry_threshold,
		-1, "color_spread_speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color Spread",
		"How fast colors get mixed within wet paint",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, color_spread_speed), RawPropertyType(5), nullptr},
		DynamicPaintSurface_color_spread_speed_get, DynamicPaintSurface_color_spread_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_use_drip_ = {
		{&rna_DynamicPaintSurface_use_shrink, 	&rna_DynamicPaintSurface_color_spread_speed,
		-1, "use_drip", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Drip",
		"Process drip effect (drip wet paint to gravity direction)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_drip_get, DynamicPaintSurface_use_drip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_use_shrink_ = {
		{&rna_DynamicPaintSurface_shrink_speed, 	&rna_DynamicPaintSurface_use_drip,
		-1, "use_shrink", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Shrink",
		"Process shrink effect (shrink paint areas)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_shrink_get, DynamicPaintSurface_use_shrink_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_shrink_speed_ = {
		{&rna_DynamicPaintSurface_effector_weights, 	&rna_DynamicPaintSurface_use_shrink,
		-1, "shrink_speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shrink Speed",
		"How fast shrink effect moves on the canvas surface",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, shrink_speed), RawPropertyType(5), nullptr},
		DynamicPaintSurface_shrink_speed_get, DynamicPaintSurface_shrink_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 5.0f, 0.0010000000f, 10.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_effector_weights_ = {
		{&rna_DynamicPaintSurface_drip_velocity, 	&rna_DynamicPaintSurface_shrink_speed,
		-1, "effector_weights", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Effector Weights",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_effector_weights_get, nullptr, nullptr, nullptr,RNA_EffectorWeights
	};

	rna_DynamicPaintSurface_drip_velocity_ = {
		{&rna_DynamicPaintSurface_drip_acceleration, 	&rna_DynamicPaintSurface_effector_weights,
		-1, "drip_velocity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Velocity",
		"How much surface velocity affects dripping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, drip_vel), RawPropertyType(5), nullptr},
		DynamicPaintSurface_drip_velocity_get, DynamicPaintSurface_drip_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_drip_acceleration_ = {
		{&rna_DynamicPaintSurface_use_premultiply, 	&rna_DynamicPaintSurface_drip_velocity,
		-1, "drip_acceleration", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Acceleration",
		"How much surface acceleration affects dripping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, drip_acc), RawPropertyType(5), nullptr},
		DynamicPaintSurface_drip_acceleration_get, DynamicPaintSurface_drip_acceleration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_use_premultiply_ = {
		{&rna_DynamicPaintSurface_image_output_path, 	&rna_DynamicPaintSurface_drip_acceleration,
		-1, "use_premultiply", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Premultiply Alpha",
		"Multiply color by alpha (recommended for Blender input)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_premultiply_get, DynamicPaintSurface_use_premultiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_image_output_path_ = {
		{&rna_DynamicPaintSurface_output_name_a, 	&rna_DynamicPaintSurface_use_premultiply,
		-1, "image_output_path", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "Output Path",
		"Directory to save the textures",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_image_output_path_get, DynamicPaintSurface_image_output_path_length, DynamicPaintSurface_image_output_path_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_DynamicPaintSurface_output_name_a_ = {
		{&rna_DynamicPaintSurface_use_output_a, 	&rna_DynamicPaintSurface_image_output_path,
		-1, "output_name_a", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Output Name",
		"Name used to save output from this surface",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {68, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_output_name_a_get, DynamicPaintSurface_output_name_a_length, DynamicPaintSurface_output_name_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 68, ""
	};

	rna_DynamicPaintSurface_use_output_a_ = {
		{&rna_DynamicPaintSurface_output_name_b, 	&rna_DynamicPaintSurface_output_name_a,
		-1, "use_output_a", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Output",
		"Save this output layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_output_a_get, DynamicPaintSurface_use_output_a_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_output_name_b_ = {
		{&rna_DynamicPaintSurface_use_output_b, 	&rna_DynamicPaintSurface_use_output_a,
		-1, "output_name_b", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Output Name",
		"Name used to save output from this surface",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {68, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_output_name_b_get, DynamicPaintSurface_output_name_b_length, DynamicPaintSurface_output_name_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 68, ""
	};

	rna_DynamicPaintSurface_use_output_b_ = {
		{&rna_DynamicPaintSurface_depth_clamp, 	&rna_DynamicPaintSurface_output_name_b,
		-1, "use_output_b", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Output",
		"Save this output layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_output_b_get, DynamicPaintSurface_use_output_b_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_depth_clamp_ = {
		{&rna_DynamicPaintSurface_displace_factor, 	&rna_DynamicPaintSurface_use_output_b,
		-1, "depth_clamp", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Displace",
		"Maximum level of depth intersection in object space (use 0.0 to disable)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, depth_clamp), RawPropertyType(5), nullptr},
		DynamicPaintSurface_depth_clamp_get, DynamicPaintSurface_depth_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 50.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_displace_factor_ = {
		{&rna_DynamicPaintSurface_image_fileformat, 	&rna_DynamicPaintSurface_depth_clamp,
		-1, "displace_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Displace Factor",
		"Strength of displace when applied to the mesh",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaint_redoModifier, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, disp_factor), RawPropertyType(5), nullptr},
		DynamicPaintSurface_displace_factor_get, DynamicPaintSurface_displace_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -50.0f, 50.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_DynamicPaintSurface_image_fileformat_items[3] = {
		{0, "PNG", 0, "PNG", ""	},
		{1, "OPENEXR", 0, "OpenEXR", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintSurface_image_fileformat_ = {
		{&rna_DynamicPaintSurface_displace_type, 	&rna_DynamicPaintSurface_displace_factor,
		-1, "image_fileformat", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "File Format",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, image_fileformat), RawPropertyType(1), nullptr},
		DynamicPaintSurface_image_fileformat_get, DynamicPaintSurface_image_fileformat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_image_fileformat_items, 2, 0
	};

	static const EnumPropertyItem rna_DynamicPaintSurface_displace_type_items[3] = {
		{0, "DISPLACE", 0, "Displacement", ""	},
		{1, "DEPTH", 0, "Depth", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_DynamicPaintSurface_displace_type_ = {
		{&rna_DynamicPaintSurface_use_incremental_displace, 	&rna_DynamicPaintSurface_image_fileformat,
		-1, "displace_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Data Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, disp_type), RawPropertyType(1), nullptr},
		DynamicPaintSurface_displace_type_get, DynamicPaintSurface_displace_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_DynamicPaintSurface_displace_type_items, 2, 0
	};

	rna_DynamicPaintSurface_use_incremental_displace_ = {
		{&rna_DynamicPaintSurface_wave_damping, 	&rna_DynamicPaintSurface_displace_type,
		-1, "use_incremental_displace", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Incremental",
		"New displace is added cumulatively on top of existing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_DynamicPaintSurface_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_incremental_displace_get, DynamicPaintSurface_use_incremental_displace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_wave_damping_ = {
		{&rna_DynamicPaintSurface_wave_speed, 	&rna_DynamicPaintSurface_use_incremental_displace,
		-1, "wave_damping", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Damping",
		"Wave damping factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, wave_damping), RawPropertyType(5), nullptr},
		DynamicPaintSurface_wave_damping_get, DynamicPaintSurface_wave_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_wave_speed_ = {
		{&rna_DynamicPaintSurface_wave_timescale, 	&rna_DynamicPaintSurface_wave_damping,
		-1, "wave_speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Speed",
		"Wave propagation speed",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, wave_speed), RawPropertyType(5), nullptr},
		DynamicPaintSurface_wave_speed_get, DynamicPaintSurface_wave_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.2000000030f, 4.0f, 0.0099999998f, 5.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_wave_timescale_ = {
		{&rna_DynamicPaintSurface_wave_spring, 	&rna_DynamicPaintSurface_wave_speed,
		-1, "wave_timescale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Timescale",
		"Wave time scaling factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, wave_timescale), RawPropertyType(5), nullptr},
		DynamicPaintSurface_wave_timescale_get, DynamicPaintSurface_wave_timescale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.5000000000f, 0.0099999998f, 3.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_wave_spring_ = {
		{&rna_DynamicPaintSurface_wave_smoothness, 	&rna_DynamicPaintSurface_wave_timescale,
		-1, "wave_spring", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spring",
		"Spring force that pulls water level back to zero",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, wave_spring), RawPropertyType(5), nullptr},
		DynamicPaintSurface_wave_spring_get, DynamicPaintSurface_wave_spring_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0f, 1.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_wave_smoothness_ = {
		{&rna_DynamicPaintSurface_use_wave_open_border, 	&rna_DynamicPaintSurface_wave_spring,
		-1, "wave_smoothness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smoothness",
		"Limit maximum steepness of wave slope between simulation points (use higher values for smoother waves at expense of reduced detail)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(DynamicPaintSurface, wave_smoothness), RawPropertyType(5), nullptr},
		DynamicPaintSurface_wave_smoothness_get, DynamicPaintSurface_wave_smoothness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5.0f, 0.0f, 10.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_DynamicPaintSurface_use_wave_open_border_ = {
		{&rna_DynamicPaintSurface_point_cache, 	&rna_DynamicPaintSurface_wave_smoothness,
		-1, "use_wave_open_border", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Open Borders",
		"Pass waves through mesh edges",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_use_wave_open_border_get, DynamicPaintSurface_use_wave_open_border_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DynamicPaintSurface_point_cache_ = {
		{&rna_DynamicPaintSurface_is_cache_user, 	&rna_DynamicPaintSurface_use_wave_open_border,
		-1, "point_cache", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Point Cache",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_point_cache_get, nullptr, nullptr, nullptr,RNA_PointCache
	};

	rna_DynamicPaintSurface_is_cache_user_ = {
		{nullptr, 	&rna_DynamicPaintSurface_point_cache,
		-1, "is_cache_user", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Cache",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DynamicPaintSurface_is_cache_user_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_DynamicPaintSurface;
	srna->cont.properties = {&rna_DynamicPaintSurface_rna_properties, &rna_DynamicPaintSurface_is_cache_user};
	srna->identifier = "DynamicPaintSurface";
	srna->flag = 516;
	srna->name = "Paint Surface";
	srna->description = "A canvas surface layer";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_DynamicPaintSurface_name;
	srna->iteratorproperty = &rna_DynamicPaintSurface_rna_properties;
	srna->path = rna_DynamicPaintSurface_path;
	{
	rna_DynamicPaintSurface_output_exists_object_ = {
		{&rna_DynamicPaintSurface_output_exists_index, 	nullptr,
		-1, "object", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_DynamicPaintSurface_output_exists_index_ = {
		{&rna_DynamicPaintSurface_output_exists_exists, 	&rna_DynamicPaintSurface_output_exists_object,
		-1, "index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1, 0, 1, 1, nullptr, nullptr, 0, nullptr
	};
	rna_DynamicPaintSurface_output_exists_exists_ = {
		{nullptr, 	&rna_DynamicPaintSurface_output_exists_index,
		-1, "exists", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_DynamicPaintSurface_output_exists_object, &rna_DynamicPaintSurface_output_exists_exists};
		func->identifier = "output_exists";
		func->description = "Checks if surface output layer of given name exists";
		func->call = DynamicPaintSurface_output_exists_call;
		func->c_ret = &rna_DynamicPaintSurface_output_exists_exists;
		rna_DynamicPaintSurface_output_exists_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
