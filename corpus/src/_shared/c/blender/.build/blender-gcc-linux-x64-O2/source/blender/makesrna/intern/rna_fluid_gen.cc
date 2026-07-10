
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

#include "rna_fluid.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_FluidDomainSettings_rna_properties;
extern PropertyRNA &rna_FluidDomainSettings_rna_type;
extern PropertyRNA &rna_FluidDomainSettings_effector_weights;
extern PropertyRNA &rna_FluidDomainSettings_effector_group;
extern PropertyRNA &rna_FluidDomainSettings_fluid_group;
extern PropertyRNA &rna_FluidDomainSettings_force_collection;
extern PropertyRNA &rna_FluidDomainSettings_start_point;
extern PropertyRNA &rna_FluidDomainSettings_cell_size;
extern PropertyRNA &rna_FluidDomainSettings_domain_resolution;
extern PropertyRNA &rna_FluidDomainSettings_additional_res;
extern PropertyRNA &rna_FluidDomainSettings_adapt_margin;
extern PropertyRNA &rna_FluidDomainSettings_adapt_threshold;
extern PropertyRNA &rna_FluidDomainSettings_use_adaptive_domain;
extern PropertyRNA &rna_FluidDomainSettings_resolution_max;
extern PropertyRNA &rna_FluidDomainSettings_use_collision_border_front;
extern PropertyRNA &rna_FluidDomainSettings_use_collision_border_back;
extern PropertyRNA &rna_FluidDomainSettings_use_collision_border_right;
extern PropertyRNA &rna_FluidDomainSettings_use_collision_border_left;
extern PropertyRNA &rna_FluidDomainSettings_use_collision_border_top;
extern PropertyRNA &rna_FluidDomainSettings_use_collision_border_bottom;
extern PropertyRNA &rna_FluidDomainSettings_gravity;
extern PropertyRNA &rna_FluidDomainSettings_domain_type;
extern PropertyRNA &rna_FluidDomainSettings_delete_in_obstacle;
extern PropertyRNA &rna_FluidDomainSettings_alpha;
extern PropertyRNA &rna_FluidDomainSettings_beta;
extern PropertyRNA &rna_FluidDomainSettings_dissolve_speed;
extern PropertyRNA &rna_FluidDomainSettings_vorticity;
extern PropertyRNA &rna_FluidDomainSettings_highres_sampling;
extern PropertyRNA &rna_FluidDomainSettings_use_dissolve_smoke;
extern PropertyRNA &rna_FluidDomainSettings_use_dissolve_smoke_log;
extern PropertyRNA &rna_FluidDomainSettings_burning_rate;
extern PropertyRNA &rna_FluidDomainSettings_flame_smoke;
extern PropertyRNA &rna_FluidDomainSettings_flame_vorticity;
extern PropertyRNA &rna_FluidDomainSettings_flame_ignition;
extern PropertyRNA &rna_FluidDomainSettings_flame_max_temp;
extern PropertyRNA &rna_FluidDomainSettings_flame_smoke_color;
extern PropertyRNA &rna_FluidDomainSettings_noise_strength;
extern PropertyRNA &rna_FluidDomainSettings_noise_pos_scale;
extern PropertyRNA &rna_FluidDomainSettings_noise_time_anim;
extern PropertyRNA &rna_FluidDomainSettings_noise_scale;
extern PropertyRNA &rna_FluidDomainSettings_use_noise;
extern PropertyRNA &rna_FluidDomainSettings_simulation_method;
extern PropertyRNA &rna_FluidDomainSettings_flip_ratio;
extern PropertyRNA &rna_FluidDomainSettings_particle_randomness;
extern PropertyRNA &rna_FluidDomainSettings_particle_number;
extern PropertyRNA &rna_FluidDomainSettings_particle_min;
extern PropertyRNA &rna_FluidDomainSettings_particle_max;
extern PropertyRNA &rna_FluidDomainSettings_particle_radius;
extern PropertyRNA &rna_FluidDomainSettings_particle_band_width;
extern PropertyRNA &rna_FluidDomainSettings_use_flip_particles;
extern PropertyRNA &rna_FluidDomainSettings_use_fractions;
extern PropertyRNA &rna_FluidDomainSettings_fractions_threshold;
extern PropertyRNA &rna_FluidDomainSettings_fractions_distance;
extern PropertyRNA &rna_FluidDomainSettings_sys_particle_maximum;
extern PropertyRNA &rna_FluidDomainSettings_use_viscosity;
extern PropertyRNA &rna_FluidDomainSettings_viscosity_value;
extern PropertyRNA &rna_FluidDomainSettings_use_diffusion;
extern PropertyRNA &rna_FluidDomainSettings_surface_tension;
extern PropertyRNA &rna_FluidDomainSettings_viscosity_base;
extern PropertyRNA &rna_FluidDomainSettings_viscosity_exponent;
extern PropertyRNA &rna_FluidDomainSettings_mesh_concave_upper;
extern PropertyRNA &rna_FluidDomainSettings_mesh_concave_lower;
extern PropertyRNA &rna_FluidDomainSettings_mesh_smoothen_pos;
extern PropertyRNA &rna_FluidDomainSettings_mesh_smoothen_neg;
extern PropertyRNA &rna_FluidDomainSettings_mesh_scale;
extern PropertyRNA &rna_FluidDomainSettings_mesh_generator;
extern PropertyRNA &rna_FluidDomainSettings_use_mesh;
extern PropertyRNA &rna_FluidDomainSettings_use_speed_vectors;
extern PropertyRNA &rna_FluidDomainSettings_mesh_particle_radius;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_min_wavecrest;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_max_wavecrest;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_min_trappedair;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_max_trappedair;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_min_energy;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_max_energy;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_sampling_wavecrest;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_sampling_trappedair;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_bubble_buoyancy;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_bubble_drag;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_life_min;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_life_max;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_boundary;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_combined_export;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_radius;
extern PropertyRNA &rna_FluidDomainSettings_sndparticle_update_radius;
extern PropertyRNA &rna_FluidDomainSettings_particle_scale;
extern PropertyRNA &rna_FluidDomainSettings_use_spray_particles;
extern PropertyRNA &rna_FluidDomainSettings_use_bubble_particles;
extern PropertyRNA &rna_FluidDomainSettings_use_foam_particles;
extern PropertyRNA &rna_FluidDomainSettings_use_tracer_particles;
extern PropertyRNA &rna_FluidDomainSettings_guide_alpha;
extern PropertyRNA &rna_FluidDomainSettings_guide_beta;
extern PropertyRNA &rna_FluidDomainSettings_guide_vel_factor;
extern PropertyRNA &rna_FluidDomainSettings_guide_source;
extern PropertyRNA &rna_FluidDomainSettings_guide_parent;
extern PropertyRNA &rna_FluidDomainSettings_use_guide;
extern PropertyRNA &rna_FluidDomainSettings_cache_frame_start;
extern PropertyRNA &rna_FluidDomainSettings_cache_frame_end;
extern PropertyRNA &rna_FluidDomainSettings_cache_frame_offset;
extern PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_data;
extern PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_noise;
extern PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_mesh;
extern PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_particles;
extern PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_guide;
extern PropertyRNA &rna_FluidDomainSettings_cache_mesh_format;
extern PropertyRNA &rna_FluidDomainSettings_cache_data_format;
extern PropertyRNA &rna_FluidDomainSettings_cache_particle_format;
extern PropertyRNA &rna_FluidDomainSettings_cache_noise_format;
extern PropertyRNA &rna_FluidDomainSettings_cache_type;
extern PropertyRNA &rna_FluidDomainSettings_cache_resumable;
extern PropertyRNA &rna_FluidDomainSettings_cache_directory;
extern PropertyRNA &rna_FluidDomainSettings_is_cache_baking_data;
extern PropertyRNA &rna_FluidDomainSettings_has_cache_baked_data;
extern PropertyRNA &rna_FluidDomainSettings_is_cache_baking_noise;
extern PropertyRNA &rna_FluidDomainSettings_has_cache_baked_noise;
extern PropertyRNA &rna_FluidDomainSettings_is_cache_baking_mesh;
extern PropertyRNA &rna_FluidDomainSettings_has_cache_baked_mesh;
extern PropertyRNA &rna_FluidDomainSettings_is_cache_baking_particles;
extern PropertyRNA &rna_FluidDomainSettings_has_cache_baked_particles;
extern PropertyRNA &rna_FluidDomainSettings_is_cache_baking_guide;
extern PropertyRNA &rna_FluidDomainSettings_has_cache_baked_guide;
extern PropertyRNA &rna_FluidDomainSettings_is_cache_baking_any;
extern PropertyRNA &rna_FluidDomainSettings_has_cache_baked_any;
extern PropertyRNA &rna_FluidDomainSettings_export_manta_script;
extern PropertyRNA &rna_FluidDomainSettings_openvdb_cache_compress_type;
extern PropertyRNA &rna_FluidDomainSettings_openvdb_data_depth;
extern PropertyRNA &rna_FluidDomainSettings_time_scale;
extern PropertyRNA &rna_FluidDomainSettings_use_adaptive_timesteps;
extern PropertyRNA &rna_FluidDomainSettings_cfl_condition;
extern PropertyRNA &rna_FluidDomainSettings_timesteps_min;
extern PropertyRNA &rna_FluidDomainSettings_timesteps_max;
extern PropertyRNA &rna_FluidDomainSettings_use_slice;
extern PropertyRNA &rna_FluidDomainSettings_slice_axis;
extern PropertyRNA &rna_FluidDomainSettings_slice_per_voxel;
extern PropertyRNA &rna_FluidDomainSettings_slice_depth;
extern PropertyRNA &rna_FluidDomainSettings_display_thickness;
extern PropertyRNA &rna_FluidDomainSettings_display_interpolation;
extern PropertyRNA &rna_FluidDomainSettings_show_gridlines;
extern PropertyRNA &rna_FluidDomainSettings_show_velocity;
extern PropertyRNA &rna_FluidDomainSettings_vector_display_type;
extern PropertyRNA &rna_FluidDomainSettings_vector_field;
extern PropertyRNA &rna_FluidDomainSettings_vector_scale_with_magnitude;
extern PropertyRNA &rna_FluidDomainSettings_vector_show_mac_x;
extern PropertyRNA &rna_FluidDomainSettings_vector_show_mac_y;
extern PropertyRNA &rna_FluidDomainSettings_vector_show_mac_z;
extern PropertyRNA &rna_FluidDomainSettings_vector_scale;
extern PropertyRNA &rna_FluidDomainSettings_use_color_ramp;
extern PropertyRNA &rna_FluidDomainSettings_color_ramp_field;
extern PropertyRNA &rna_FluidDomainSettings_color_ramp_field_scale;
extern PropertyRNA &rna_FluidDomainSettings_color_ramp;
extern PropertyRNA &rna_FluidDomainSettings_clipping;
extern PropertyRNA &rna_FluidDomainSettings_gridlines_color_field;
extern PropertyRNA &rna_FluidDomainSettings_gridlines_lower_bound;
extern PropertyRNA &rna_FluidDomainSettings_gridlines_upper_bound;
extern PropertyRNA &rna_FluidDomainSettings_gridlines_range_color;
extern PropertyRNA &rna_FluidDomainSettings_gridlines_cell_filter;
extern PropertyRNA &rna_FluidDomainSettings_velocity_scale;


extern PropertyRNA &rna_FluidFlowSettings_rna_properties;
extern PropertyRNA &rna_FluidFlowSettings_rna_type;
extern PropertyRNA &rna_FluidFlowSettings_density;
extern PropertyRNA &rna_FluidFlowSettings_smoke_color;
extern PropertyRNA &rna_FluidFlowSettings_fuel_amount;
extern PropertyRNA &rna_FluidFlowSettings_temperature;
extern PropertyRNA &rna_FluidFlowSettings_particle_system;
extern PropertyRNA &rna_FluidFlowSettings_flow_type;
extern PropertyRNA &rna_FluidFlowSettings_flow_behavior;
extern PropertyRNA &rna_FluidFlowSettings_flow_source;
extern PropertyRNA &rna_FluidFlowSettings_use_absolute;
extern PropertyRNA &rna_FluidFlowSettings_use_initial_velocity;
extern PropertyRNA &rna_FluidFlowSettings_velocity_factor;
extern PropertyRNA &rna_FluidFlowSettings_velocity_normal;
extern PropertyRNA &rna_FluidFlowSettings_velocity_random;
extern PropertyRNA &rna_FluidFlowSettings_velocity_coord;
extern PropertyRNA &rna_FluidFlowSettings_volume_density;
extern PropertyRNA &rna_FluidFlowSettings_surface_distance;
extern PropertyRNA &rna_FluidFlowSettings_use_plane_init;
extern PropertyRNA &rna_FluidFlowSettings_particle_size;
extern PropertyRNA &rna_FluidFlowSettings_use_particle_size;
extern PropertyRNA &rna_FluidFlowSettings_use_inflow;
extern PropertyRNA &rna_FluidFlowSettings_subframes;
extern PropertyRNA &rna_FluidFlowSettings_density_vertex_group;
extern PropertyRNA &rna_FluidFlowSettings_use_texture;
extern PropertyRNA &rna_FluidFlowSettings_texture_map_type;
extern PropertyRNA &rna_FluidFlowSettings_uv_layer;
extern PropertyRNA &rna_FluidFlowSettings_noise_texture;
extern PropertyRNA &rna_FluidFlowSettings_texture_size;
extern PropertyRNA &rna_FluidFlowSettings_texture_offset;


extern PropertyRNA &rna_FluidEffectorSettings_rna_properties;
extern PropertyRNA &rna_FluidEffectorSettings_rna_type;
extern PropertyRNA &rna_FluidEffectorSettings_effector_type;
extern PropertyRNA &rna_FluidEffectorSettings_surface_distance;
extern PropertyRNA &rna_FluidEffectorSettings_use_plane_init;
extern PropertyRNA &rna_FluidEffectorSettings_velocity_factor;
extern PropertyRNA &rna_FluidEffectorSettings_guide_mode;
extern PropertyRNA &rna_FluidEffectorSettings_use_effector;
extern PropertyRNA &rna_FluidEffectorSettings_subframes;

static PointerRNA FluidDomainSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FluidDomainSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FluidDomainSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidDomainSettings_rna_properties_get(iter);
    }
}

void FluidDomainSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FluidDomainSettings_rna_properties_get(iter);
    }
}

void FluidDomainSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FluidDomainSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FluidDomainSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA FluidDomainSettings_effector_weights_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_EffectorWeights, data->effector_weights);
}

PointerRNA FluidDomainSettings_effector_group_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->effector_group);
}

void FluidDomainSettings_effector_group_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->effector_group = value.data;
}

PointerRNA FluidDomainSettings_fluid_group_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->fluid_group);
}

void FluidDomainSettings_fluid_group_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->fluid_group = value.data;
}

PointerRNA FluidDomainSettings_force_collection_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->force_group);
}

void FluidDomainSettings_force_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->force_group = value.data;
}

void FluidDomainSettings_start_point_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->p0)[i]);
    }
}

void FluidDomainSettings_cell_size_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->cell_size)[i]);
    }
}

void FluidDomainSettings_domain_resolution_get(PointerRNA *ptr, int values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int *)data->res)[i]);
    }
}

int FluidDomainSettings_additional_res_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->adapt_res);
}

void FluidDomainSettings_additional_res_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->adapt_res = (std::remove_reference_t<decltype(data->adapt_res)>)std::clamp(value, 0, 512);
}

int FluidDomainSettings_adapt_margin_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->adapt_margin);
}

void FluidDomainSettings_adapt_margin_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->adapt_margin = (std::remove_reference_t<decltype(data->adapt_margin)>)std::clamp(value, 2, 24);
}

float FluidDomainSettings_adapt_threshold_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->adapt_threshold);
}

void FluidDomainSettings_adapt_threshold_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->adapt_threshold = (std::remove_reference_t<decltype(data->adapt_threshold)>)std::clamp(value, 0.0f, 1.0f);
}

bool FluidDomainSettings_use_adaptive_domain_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 128) != 0);
}

void FluidDomainSettings_use_adaptive_domain_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 128); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(128)); }
}

int FluidDomainSettings_resolution_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->maxres);
}

void FluidDomainSettings_resolution_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->maxres = (std::remove_reference_t<decltype(data->maxres)>)std::clamp(value, 6, 10000);
}

bool FluidDomainSettings_use_collision_border_front_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->border_collisions) & 2) != 0);
}

void FluidDomainSettings_use_collision_border_front_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) | 2); }
    else { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) & ~uint64_t(2)); }
}

bool FluidDomainSettings_use_collision_border_back_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->border_collisions) & 4) != 0);
}

void FluidDomainSettings_use_collision_border_back_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) | 4); }
    else { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) & ~uint64_t(4)); }
}

bool FluidDomainSettings_use_collision_border_right_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->border_collisions) & 8) != 0);
}

void FluidDomainSettings_use_collision_border_right_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) | 8); }
    else { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) & ~uint64_t(8)); }
}

bool FluidDomainSettings_use_collision_border_left_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->border_collisions) & 16) != 0);
}

void FluidDomainSettings_use_collision_border_left_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) | 16); }
    else { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) & ~uint64_t(16)); }
}

bool FluidDomainSettings_use_collision_border_top_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->border_collisions) & 32) != 0);
}

void FluidDomainSettings_use_collision_border_top_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) | 32); }
    else { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) & ~uint64_t(32)); }
}

bool FluidDomainSettings_use_collision_border_bottom_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->border_collisions) & 64) != 0);
}

void FluidDomainSettings_use_collision_border_bottom_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) | 64); }
    else { data->border_collisions = std::remove_reference_t<decltype(data->border_collisions)>(uint64_t(data->border_collisions) & ~uint64_t(64)); }
}

void FluidDomainSettings_gravity_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->gravity)[i]);
    }
}

void FluidDomainSettings_gravity_set(PointerRNA *ptr, const float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->gravity)[i] = std::clamp(values[i], -1000.0999755859f, 1000.0999755859f);
    }
}

int FluidDomainSettings_domain_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->type);
}

void FluidDomainSettings_domain_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_domaintype_set;
    fn(ptr, value);
}

bool FluidDomainSettings_delete_in_obstacle_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 16384) != 0);
}

void FluidDomainSettings_delete_in_obstacle_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16384); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16384)); }
}

float FluidDomainSettings_alpha_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->alpha);
}

void FluidDomainSettings_alpha_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->alpha = (std::remove_reference_t<decltype(data->alpha)>)std::clamp(value, -5.0f, 5.0f);
}

float FluidDomainSettings_beta_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->beta);
}

void FluidDomainSettings_beta_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->beta = (std::remove_reference_t<decltype(data->beta)>)std::clamp(value, -5.0f, 5.0f);
}

int FluidDomainSettings_dissolve_speed_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->diss_speed);
}

void FluidDomainSettings_dissolve_speed_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->diss_speed = (std::remove_reference_t<decltype(data->diss_speed)>)std::clamp(value, 1, 10000);
}

float FluidDomainSettings_vorticity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->vorticity);
}

void FluidDomainSettings_vorticity_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vorticity = (std::remove_reference_t<decltype(data->vorticity)>)std::clamp(value, 0.0f, 4.0f);
}

int FluidDomainSettings_highres_sampling_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->highres_sampling);
}

void FluidDomainSettings_highres_sampling_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->highres_sampling = (std::remove_reference_t<decltype(data->highres_sampling)>)value;
}

bool FluidDomainSettings_use_dissolve_smoke_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void FluidDomainSettings_use_dissolve_smoke_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

bool FluidDomainSettings_use_dissolve_smoke_log_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void FluidDomainSettings_use_dissolve_smoke_log_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

float FluidDomainSettings_burning_rate_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->burning_rate);
}

void FluidDomainSettings_burning_rate_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->burning_rate = (std::remove_reference_t<decltype(data->burning_rate)>)std::clamp(value, 0.0099999998f, 4.0f);
}

float FluidDomainSettings_flame_smoke_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_smoke);
}

void FluidDomainSettings_flame_smoke_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flame_smoke = (std::remove_reference_t<decltype(data->flame_smoke)>)std::clamp(value, 0.0f, 8.0f);
}

float FluidDomainSettings_flame_vorticity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_vorticity);
}

void FluidDomainSettings_flame_vorticity_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flame_vorticity = (std::remove_reference_t<decltype(data->flame_vorticity)>)std::clamp(value, 0.0f, 2.0f);
}

float FluidDomainSettings_flame_ignition_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_ignition);
}

void FluidDomainSettings_flame_ignition_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flame_ignition = (std::remove_reference_t<decltype(data->flame_ignition)>)std::clamp(value, 0.5000000000f, 5.0f);
}

float FluidDomainSettings_flame_max_temp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flame_max_temp);
}

void FluidDomainSettings_flame_max_temp_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flame_max_temp = (std::remove_reference_t<decltype(data->flame_max_temp)>)std::clamp(value, 1.0f, 10.0f);
}

void FluidDomainSettings_flame_smoke_color_get(PointerRNA *ptr, float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->flame_smoke_color)[i]);
    }
}

void FluidDomainSettings_flame_smoke_color_set(PointerRNA *ptr, const float values[3])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->flame_smoke_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float FluidDomainSettings_noise_strength_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_strength);
}

void FluidDomainSettings_noise_strength_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->noise_strength = (std::remove_reference_t<decltype(data->noise_strength)>)std::clamp(value, 0.0f, 10.0f);
}

float FluidDomainSettings_noise_pos_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_pos_scale);
}

void FluidDomainSettings_noise_pos_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->noise_pos_scale = (std::remove_reference_t<decltype(data->noise_pos_scale)>)std::clamp(value, 0.0001000000f, 10.0f);
}

float FluidDomainSettings_noise_time_anim_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->noise_time_anim);
}

void FluidDomainSettings_noise_time_anim_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->noise_time_anim = (std::remove_reference_t<decltype(data->noise_time_anim)>)std::clamp(value, 0.0001000000f, 10.0f);
}

int FluidDomainSettings_noise_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->noise_scale);
}

void FluidDomainSettings_noise_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->noise_scale = (std::remove_reference_t<decltype(data->noise_scale)>)std::clamp(value, 1, 100);
}

bool FluidDomainSettings_use_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void FluidDomainSettings_use_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

int FluidDomainSettings_simulation_method_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->simulation_method);
}

void FluidDomainSettings_simulation_method_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->simulation_method = (std::remove_reference_t<decltype(data->simulation_method)>)value;
}

float FluidDomainSettings_flip_ratio_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->flip_ratio);
}

void FluidDomainSettings_flip_ratio_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->flip_ratio = (std::remove_reference_t<decltype(data->flip_ratio)>)std::clamp(value, 0.0f, 1.0f);
}

float FluidDomainSettings_particle_randomness_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_randomness);
}

void FluidDomainSettings_particle_randomness_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_randomness = (std::remove_reference_t<decltype(data->particle_randomness)>)std::clamp(value, 0.0f, 10.0f);
}

int FluidDomainSettings_particle_number_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_number);
}

void FluidDomainSettings_particle_number_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_number = (std::remove_reference_t<decltype(data->particle_number)>)std::clamp(value, 1, 5);
}

int FluidDomainSettings_particle_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_minimum);
}

void FluidDomainSettings_particle_min_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_minimum = (std::remove_reference_t<decltype(data->particle_minimum)>)std::clamp(value, 0, 1000);
}

int FluidDomainSettings_particle_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_maximum);
}

void FluidDomainSettings_particle_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_maximum = (std::remove_reference_t<decltype(data->particle_maximum)>)std::clamp(value, 0, 1000);
}

float FluidDomainSettings_particle_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_radius);
}

void FluidDomainSettings_particle_radius_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_radius = (std::remove_reference_t<decltype(data->particle_radius)>)std::clamp(value, 0.0f, 10.0f);
}

float FluidDomainSettings_particle_band_width_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->particle_band_width);
}

void FluidDomainSettings_particle_band_width_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_band_width = (std::remove_reference_t<decltype(data->particle_band_width)>)std::clamp(value, 0.0f, 1000.0f);
}

bool FluidDomainSettings_use_flip_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->particle_type) & 1) != 0);
}

void FluidDomainSettings_use_flip_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) | 1); }
    else { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) & ~uint64_t(1)); }
}

bool FluidDomainSettings_use_fractions_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 8192) != 0);
}

void FluidDomainSettings_use_fractions_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8192); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8192)); }
}

float FluidDomainSettings_fractions_threshold_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->fractions_threshold);
}

void FluidDomainSettings_fractions_threshold_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->fractions_threshold = (std::remove_reference_t<decltype(data->fractions_threshold)>)std::clamp(value, 0.0010000000f, 1.0f);
}

float FluidDomainSettings_fractions_distance_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->fractions_distance);
}

void FluidDomainSettings_fractions_distance_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->fractions_distance = (std::remove_reference_t<decltype(data->fractions_distance)>)std::clamp(value, -5.0f, 5.0f);
}

int FluidDomainSettings_sys_particle_maximum_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sys_particle_maximum);
}

void FluidDomainSettings_sys_particle_maximum_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sys_particle_maximum = (std::remove_reference_t<decltype(data->sys_particle_maximum)>)std::clamp(value, 0, INT_MAX);
}

bool FluidDomainSettings_use_viscosity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 131072) != 0);
}

void FluidDomainSettings_use_viscosity_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 131072); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(131072)); }
}

float FluidDomainSettings_viscosity_value_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->viscosity_value);
}

void FluidDomainSettings_viscosity_value_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->viscosity_value = (std::remove_reference_t<decltype(data->viscosity_value)>)std::clamp(value, 0.0f, 10.0f);
}

bool FluidDomainSettings_use_diffusion_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 32768) != 0);
}

void FluidDomainSettings_use_diffusion_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32768); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32768)); }
}

float FluidDomainSettings_surface_tension_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->surface_tension);
}

void FluidDomainSettings_surface_tension_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->surface_tension = (std::remove_reference_t<decltype(data->surface_tension)>)std::clamp(value, 0.0f, 100.0f);
}

float FluidDomainSettings_viscosity_base_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->viscosity_base);
}

void FluidDomainSettings_viscosity_base_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->viscosity_base = (std::remove_reference_t<decltype(data->viscosity_base)>)std::clamp(value, 0.0f, 10.0f);
}

int FluidDomainSettings_viscosity_exponent_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->viscosity_exponent);
}

void FluidDomainSettings_viscosity_exponent_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->viscosity_exponent = (std::remove_reference_t<decltype(data->viscosity_exponent)>)std::clamp(value, 0, 10);
}

float FluidDomainSettings_mesh_concave_upper_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_concave_upper);
}

void FluidDomainSettings_mesh_concave_upper_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_concave_upper = (std::remove_reference_t<decltype(data->mesh_concave_upper)>)std::clamp(value, 0.0f, 10.0f);
}

float FluidDomainSettings_mesh_concave_lower_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_concave_lower);
}

void FluidDomainSettings_mesh_concave_lower_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_concave_lower = (std::remove_reference_t<decltype(data->mesh_concave_lower)>)std::clamp(value, 0.0f, 10.0f);
}

int FluidDomainSettings_mesh_smoothen_pos_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_smoothen_pos);
}

void FluidDomainSettings_mesh_smoothen_pos_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_smoothen_pos = (std::remove_reference_t<decltype(data->mesh_smoothen_pos)>)std::clamp(value, 0, 100);
}

int FluidDomainSettings_mesh_smoothen_neg_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_smoothen_neg);
}

void FluidDomainSettings_mesh_smoothen_neg_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_smoothen_neg = (std::remove_reference_t<decltype(data->mesh_smoothen_neg)>)std::clamp(value, 0, 100);
}

int FluidDomainSettings_mesh_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_scale);
}

void FluidDomainSettings_mesh_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_scale = (std::remove_reference_t<decltype(data->mesh_scale)>)std::clamp(value, 1, 100);
}

int FluidDomainSettings_mesh_generator_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->mesh_generator);
}

void FluidDomainSettings_mesh_generator_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_generator = (std::remove_reference_t<decltype(data->mesh_generator)>)value;
}

bool FluidDomainSettings_use_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 512) != 0);
}

void FluidDomainSettings_use_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 512); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(512)); }
}

bool FluidDomainSettings_use_speed_vectors_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 2048) != 0);
}

void FluidDomainSettings_use_speed_vectors_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2048); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2048)); }
}

float FluidDomainSettings_mesh_particle_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->mesh_particle_radius);
}

void FluidDomainSettings_mesh_particle_radius_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->mesh_particle_radius = (std::remove_reference_t<decltype(data->mesh_particle_radius)>)std::clamp(value, 0.0f, 10.0f);
}

float FluidDomainSettings_sndparticle_potential_min_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_wc);
}

void FluidDomainSettings_sndparticle_potential_min_wavecrest_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_min_wc = (std::remove_reference_t<decltype(data->sndparticle_tau_min_wc)>)std::clamp(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_max_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_wc);
}

void FluidDomainSettings_sndparticle_potential_max_wavecrest_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_max_wc = (std::remove_reference_t<decltype(data->sndparticle_tau_max_wc)>)std::clamp(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_min_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_ta);
}

void FluidDomainSettings_sndparticle_potential_min_trappedair_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_min_ta = (std::remove_reference_t<decltype(data->sndparticle_tau_min_ta)>)std::clamp(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_max_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_ta);
}

void FluidDomainSettings_sndparticle_potential_max_trappedair_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_max_ta = (std::remove_reference_t<decltype(data->sndparticle_tau_max_ta)>)std::clamp(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_min_energy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_min_k);
}

void FluidDomainSettings_sndparticle_potential_min_energy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_min_k = (std::remove_reference_t<decltype(data->sndparticle_tau_min_k)>)std::clamp(value, 0.0f, 1000.0f);
}

float FluidDomainSettings_sndparticle_potential_max_energy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_tau_max_k);
}

void FluidDomainSettings_sndparticle_potential_max_energy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_tau_max_k = (std::remove_reference_t<decltype(data->sndparticle_tau_max_k)>)std::clamp(value, 0.0f, 1000.0f);
}

int FluidDomainSettings_sndparticle_sampling_wavecrest_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_k_wc);
}

void FluidDomainSettings_sndparticle_sampling_wavecrest_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_k_wc = (std::remove_reference_t<decltype(data->sndparticle_k_wc)>)std::clamp(value, 0, 10000);
}

int FluidDomainSettings_sndparticle_sampling_trappedair_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_k_ta);
}

void FluidDomainSettings_sndparticle_sampling_trappedair_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_k_ta = (std::remove_reference_t<decltype(data->sndparticle_k_ta)>)std::clamp(value, 0, 10000);
}

float FluidDomainSettings_sndparticle_bubble_buoyancy_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_k_b);
}

void FluidDomainSettings_sndparticle_bubble_buoyancy_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_k_b = (std::remove_reference_t<decltype(data->sndparticle_k_b)>)std::clamp(value, 0.0f, 100.0f);
}

float FluidDomainSettings_sndparticle_bubble_drag_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_k_d);
}

void FluidDomainSettings_sndparticle_bubble_drag_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_k_d = (std::remove_reference_t<decltype(data->sndparticle_k_d)>)std::clamp(value, 0.0f, 100.0f);
}

float FluidDomainSettings_sndparticle_life_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_l_min);
}

void FluidDomainSettings_sndparticle_life_min_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_l_min = (std::remove_reference_t<decltype(data->sndparticle_l_min)>)std::clamp(value, 0.0f, 10000.0f);
}

float FluidDomainSettings_sndparticle_life_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->sndparticle_l_max);
}

void FluidDomainSettings_sndparticle_life_max_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_l_max = (std::remove_reference_t<decltype(data->sndparticle_l_max)>)std::clamp(value, 0.0f, 10000.0f);
}

int FluidDomainSettings_sndparticle_boundary_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_boundary);
}

void FluidDomainSettings_sndparticle_boundary_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_boundary = (std::remove_reference_t<decltype(data->sndparticle_boundary)>)value;
}

int FluidDomainSettings_sndparticle_combined_export_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_combined_export);
}

void FluidDomainSettings_sndparticle_combined_export_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_combined_export = (std::remove_reference_t<decltype(data->sndparticle_combined_export)>)value;
}

int FluidDomainSettings_sndparticle_potential_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_potential_radius);
}

void FluidDomainSettings_sndparticle_potential_radius_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_potential_radius = (std::remove_reference_t<decltype(data->sndparticle_potential_radius)>)std::clamp(value, 1, 4);
}

int FluidDomainSettings_sndparticle_update_radius_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->sndparticle_update_radius);
}

void FluidDomainSettings_sndparticle_update_radius_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->sndparticle_update_radius = (std::remove_reference_t<decltype(data->sndparticle_update_radius)>)std::clamp(value, 1, 4);
}

int FluidDomainSettings_particle_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->particle_scale);
}

void FluidDomainSettings_particle_scale_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->particle_scale = (std::remove_reference_t<decltype(data->particle_scale)>)std::clamp(value, 1, 100);
}

bool FluidDomainSettings_use_spray_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->particle_type) & 2) != 0);
}

void FluidDomainSettings_use_spray_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) | 2); }
    else { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) & ~uint64_t(2)); }
}

bool FluidDomainSettings_use_bubble_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->particle_type) & 4) != 0);
}

void FluidDomainSettings_use_bubble_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) | 4); }
    else { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) & ~uint64_t(4)); }
}

bool FluidDomainSettings_use_foam_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->particle_type) & 8) != 0);
}

void FluidDomainSettings_use_foam_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) | 8); }
    else { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) & ~uint64_t(8)); }
}

bool FluidDomainSettings_use_tracer_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->particle_type) & 16) != 0);
}

void FluidDomainSettings_use_tracer_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) | 16); }
    else { data->particle_type = std::remove_reference_t<decltype(data->particle_type)>(uint64_t(data->particle_type) & ~uint64_t(16)); }
}

float FluidDomainSettings_guide_alpha_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->guide_alpha);
}

void FluidDomainSettings_guide_alpha_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->guide_alpha = (std::remove_reference_t<decltype(data->guide_alpha)>)std::clamp(value, 1.0f, 100.0f);
}

int FluidDomainSettings_guide_beta_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->guide_beta);
}

void FluidDomainSettings_guide_beta_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->guide_beta = (std::remove_reference_t<decltype(data->guide_beta)>)std::clamp(value, 1, 50);
}

float FluidDomainSettings_guide_vel_factor_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->guide_vel_factor);
}

void FluidDomainSettings_guide_vel_factor_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->guide_vel_factor = (std::remove_reference_t<decltype(data->guide_vel_factor)>)std::clamp(value, 0.0f, 100.0f);
}

int FluidDomainSettings_guide_source_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->guide_source);
}

void FluidDomainSettings_guide_source_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->guide_source = (std::remove_reference_t<decltype(data->guide_source)>)value;
}

PointerRNA FluidDomainSettings_guide_parent_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->guide_parent);
}

void FluidDomainSettings_guide_parent_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Fluid_guide_parent_set;
    fn(ptr, value, reports);
}

bool FluidDomainSettings_use_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 1024) != 0);
}

void FluidDomainSettings_use_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1024); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1024)); }
}

int FluidDomainSettings_cache_frame_start_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_start);
}

void FluidDomainSettings_cache_frame_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Fluid_cache_startframe_set;
    fn(ptr, value);
}

int FluidDomainSettings_cache_frame_end_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_end);
}

void FluidDomainSettings_cache_frame_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Fluid_cache_endframe_set;
    fn(ptr, value);
}

int FluidDomainSettings_cache_frame_offset_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_offset);
}

void FluidDomainSettings_cache_frame_offset_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_offset = (std::remove_reference_t<decltype(data->cache_frame_offset)>)std::clamp(value, -1048574, 1048574);
}

int FluidDomainSettings_cache_frame_pause_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_data);
}

void FluidDomainSettings_cache_frame_pause_data_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_data = (std::remove_reference_t<decltype(data->cache_frame_pause_data)>)value;
}

int FluidDomainSettings_cache_frame_pause_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_noise);
}

void FluidDomainSettings_cache_frame_pause_noise_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_noise = (std::remove_reference_t<decltype(data->cache_frame_pause_noise)>)value;
}

int FluidDomainSettings_cache_frame_pause_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_mesh);
}

void FluidDomainSettings_cache_frame_pause_mesh_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_mesh = (std::remove_reference_t<decltype(data->cache_frame_pause_mesh)>)value;
}

int FluidDomainSettings_cache_frame_pause_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_particles);
}

void FluidDomainSettings_cache_frame_pause_particles_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_particles = (std::remove_reference_t<decltype(data->cache_frame_pause_particles)>)value;
}

int FluidDomainSettings_cache_frame_pause_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_frame_pause_guide);
}

void FluidDomainSettings_cache_frame_pause_guide_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cache_frame_pause_guide = (std::remove_reference_t<decltype(data->cache_frame_pause_guide)>)value;
}

int FluidDomainSettings_cache_mesh_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_mesh_format);
}

void FluidDomainSettings_cache_mesh_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_mesh_set;
    fn(ptr, value);
}

int FluidDomainSettings_cache_data_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_data_format);
}

void FluidDomainSettings_cache_data_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_data_set;
    fn(ptr, value);
}

int FluidDomainSettings_cache_particle_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_particle_format);
}

void FluidDomainSettings_cache_particle_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_particle_set;
    fn(ptr, value);
}

int FluidDomainSettings_cache_noise_format_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_noise_format);
}

void FluidDomainSettings_cache_noise_format_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_noise_set;
    fn(ptr, value);
}

int FluidDomainSettings_cache_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->cache_type);
}

void FluidDomainSettings_cache_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_cachetype_set;
    fn(ptr, value);
}

bool FluidDomainSettings_cache_resumable_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 65536) != 0);
}

void FluidDomainSettings_cache_resumable_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 65536); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(65536)); }
}

void FluidDomainSettings_cache_directory_get(PointerRNA *ptr, char *value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    BLI_assert(strlen(data->cache_directory) < 1024);
    strcpy(value, data->cache_directory);
}

int FluidDomainSettings_cache_directory_length(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return strlen(data->cache_directory);
}

void FluidDomainSettings_cache_directory_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Fluid_cache_directory_set;
    fn(ptr, value);
}

bool FluidDomainSettings_is_cache_baking_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 1) != 0);
}

void FluidDomainSettings_is_cache_baking_data_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 1); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(1)); }
}

bool FluidDomainSettings_has_cache_baked_data_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 2) != 0);
}

void FluidDomainSettings_has_cache_baked_data_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 2); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(2)); }
}

bool FluidDomainSettings_is_cache_baking_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 4) != 0);
}

void FluidDomainSettings_is_cache_baking_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 4); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(4)); }
}

bool FluidDomainSettings_has_cache_baked_noise_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 8) != 0);
}

void FluidDomainSettings_has_cache_baked_noise_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 8); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(8)); }
}

bool FluidDomainSettings_is_cache_baking_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 16) != 0);
}

void FluidDomainSettings_is_cache_baking_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 16); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(16)); }
}

bool FluidDomainSettings_has_cache_baked_mesh_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 32) != 0);
}

void FluidDomainSettings_has_cache_baked_mesh_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 32); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(32)); }
}

bool FluidDomainSettings_is_cache_baking_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 64) != 0);
}

void FluidDomainSettings_is_cache_baking_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 64); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(64)); }
}

bool FluidDomainSettings_has_cache_baked_particles_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 128) != 0);
}

void FluidDomainSettings_has_cache_baked_particles_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 128); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(128)); }
}

bool FluidDomainSettings_is_cache_baking_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 256) != 0);
}

void FluidDomainSettings_is_cache_baking_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 256); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(256)); }
}

bool FluidDomainSettings_has_cache_baked_guide_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 512) != 0);
}

void FluidDomainSettings_has_cache_baked_guide_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 512); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(512)); }
}

bool FluidDomainSettings_is_cache_baking_any_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 341) != 0);
}

void FluidDomainSettings_is_cache_baking_any_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 341); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(341)); }
}

bool FluidDomainSettings_has_cache_baked_any_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->cache_flag) & 682) != 0);
}

void FluidDomainSettings_has_cache_baked_any_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) | 682); }
    else { data->cache_flag = std::remove_reference_t<decltype(data->cache_flag)>(uint64_t(data->cache_flag) & ~uint64_t(682)); }
}

bool FluidDomainSettings_export_manta_script_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 4096) != 0);
}

void FluidDomainSettings_export_manta_script_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4096); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4096)); }
}

int FluidDomainSettings_openvdb_cache_compress_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->openvdb_compression);
}

void FluidDomainSettings_openvdb_cache_compress_type_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->openvdb_compression = (std::remove_reference_t<decltype(data->openvdb_compression)>)value;
}

int FluidDomainSettings_openvdb_data_depth_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->openvdb_data_depth);
}

void FluidDomainSettings_openvdb_data_depth_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->openvdb_data_depth = (std::remove_reference_t<decltype(data->openvdb_data_depth)>)value;
}

float FluidDomainSettings_time_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->time_scale);
}

void FluidDomainSettings_time_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->time_scale = (std::remove_reference_t<decltype(data->time_scale)>)std::clamp(value, 0.0001000000f, 10.0f);
}

bool FluidDomainSettings_use_adaptive_timesteps_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 256) != 0);
}

void FluidDomainSettings_use_adaptive_timesteps_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 256); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(256)); }
}

float FluidDomainSettings_cfl_condition_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->cfl_condition);
}

void FluidDomainSettings_cfl_condition_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->cfl_condition = (std::remove_reference_t<decltype(data->cfl_condition)>)std::clamp(value, 0.0f, 10.0f);
}

int FluidDomainSettings_timesteps_min_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->timesteps_minimum);
}

void FluidDomainSettings_timesteps_min_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->timesteps_minimum = (std::remove_reference_t<decltype(data->timesteps_minimum)>)std::clamp(value, 1, 100);
}

int FluidDomainSettings_timesteps_max_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->timesteps_maximum);
}

void FluidDomainSettings_timesteps_max_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->timesteps_maximum = (std::remove_reference_t<decltype(data->timesteps_maximum)>)std::clamp(value, 1, 100);
}

bool FluidDomainSettings_use_slice_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->axis_slice_method) & 1) != 0);
}

void FluidDomainSettings_use_slice_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->axis_slice_method = std::remove_reference_t<decltype(data->axis_slice_method)>(uint64_t(data->axis_slice_method) | 1); }
    else { data->axis_slice_method = std::remove_reference_t<decltype(data->axis_slice_method)>(uint64_t(data->axis_slice_method) & ~uint64_t(1)); }
}

int FluidDomainSettings_slice_axis_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->slice_axis);
}

void FluidDomainSettings_slice_axis_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->slice_axis = (std::remove_reference_t<decltype(data->slice_axis)>)value;
}

float FluidDomainSettings_slice_per_voxel_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->slice_per_voxel);
}

void FluidDomainSettings_slice_per_voxel_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->slice_per_voxel = (std::remove_reference_t<decltype(data->slice_per_voxel)>)std::clamp(value, 0.0f, 100.0f);
}

float FluidDomainSettings_slice_depth_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->slice_depth);
}

void FluidDomainSettings_slice_depth_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->slice_depth = (std::remove_reference_t<decltype(data->slice_depth)>)std::clamp(value, 0.0f, 1.0f);
}

float FluidDomainSettings_display_thickness_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->display_thickness);
}

void FluidDomainSettings_display_thickness_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->display_thickness = (std::remove_reference_t<decltype(data->display_thickness)>)std::clamp(value, 0.0010000000f, 1000.0f);
}

int FluidDomainSettings_display_interpolation_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->interp_method);
}

void FluidDomainSettings_display_interpolation_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->interp_method = (std::remove_reference_t<decltype(data->interp_method)>)value;
}

bool FluidDomainSettings_show_gridlines_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->show_gridlines);
}

void FluidDomainSettings_show_gridlines_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->show_gridlines = (std::remove_reference_t<decltype(data->show_gridlines)>)value;
}

bool FluidDomainSettings_show_velocity_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->draw_velocity);
}

void FluidDomainSettings_show_velocity_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->draw_velocity = (std::remove_reference_t<decltype(data->draw_velocity)>)value;
}

int FluidDomainSettings_vector_display_type_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->vector_draw_type);
}

void FluidDomainSettings_vector_display_type_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vector_draw_type = (std::remove_reference_t<decltype(data->vector_draw_type)>)value;
}

int FluidDomainSettings_vector_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->vector_field);
}

void FluidDomainSettings_vector_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vector_field = (std::remove_reference_t<decltype(data->vector_field)>)value;
}

bool FluidDomainSettings_vector_scale_with_magnitude_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->vector_scale_with_magnitude);
}

void FluidDomainSettings_vector_scale_with_magnitude_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vector_scale_with_magnitude = (std::remove_reference_t<decltype(data->vector_scale_with_magnitude)>)value;
}

bool FluidDomainSettings_vector_show_mac_x_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->vector_draw_mac_components) & 1) != 0);
}

void FluidDomainSettings_vector_show_mac_x_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components = std::remove_reference_t<decltype(data->vector_draw_mac_components)>(uint64_t(data->vector_draw_mac_components) | 1); }
    else { data->vector_draw_mac_components = std::remove_reference_t<decltype(data->vector_draw_mac_components)>(uint64_t(data->vector_draw_mac_components) & ~uint64_t(1)); }
}

bool FluidDomainSettings_vector_show_mac_y_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->vector_draw_mac_components) & 2) != 0);
}

void FluidDomainSettings_vector_show_mac_y_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components = std::remove_reference_t<decltype(data->vector_draw_mac_components)>(uint64_t(data->vector_draw_mac_components) | 2); }
    else { data->vector_draw_mac_components = std::remove_reference_t<decltype(data->vector_draw_mac_components)>(uint64_t(data->vector_draw_mac_components) & ~uint64_t(2)); }
}

bool FluidDomainSettings_vector_show_mac_z_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return ((uint64_t(data->vector_draw_mac_components) & 4) != 0);
}

void FluidDomainSettings_vector_show_mac_z_set(PointerRNA *ptr, bool value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    if (value) { data->vector_draw_mac_components = std::remove_reference_t<decltype(data->vector_draw_mac_components)>(uint64_t(data->vector_draw_mac_components) | 4); }
    else { data->vector_draw_mac_components = std::remove_reference_t<decltype(data->vector_draw_mac_components)>(uint64_t(data->vector_draw_mac_components) & ~uint64_t(4)); }
}

float FluidDomainSettings_vector_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->vector_scale);
}

void FluidDomainSettings_vector_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->vector_scale = (std::remove_reference_t<decltype(data->vector_scale)>)std::clamp(value, 0.0f, 1000.0f);
}

bool FluidDomainSettings_use_color_ramp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (bool)(data->use_coba);
}

void FluidDomainSettings_use_color_ramp_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Fluid_use_color_ramp_set;
    fn(ptr, value);
}

int FluidDomainSettings_color_ramp_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->coba_field);
}

void FluidDomainSettings_color_ramp_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->coba_field = (std::remove_reference_t<decltype(data->coba_field)>)value;
}

float FluidDomainSettings_color_ramp_field_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->grid_scale);
}

void FluidDomainSettings_color_ramp_field_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->grid_scale = (std::remove_reference_t<decltype(data->grid_scale)>)std::clamp(value, 0.0010000000f, 100000.0f);
}

PointerRNA FluidDomainSettings_color_ramp_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ColorRamp, data->coba);
}

float FluidDomainSettings_clipping_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->clipping);
}

void FluidDomainSettings_clipping_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->clipping = (std::remove_reference_t<decltype(data->clipping)>)std::clamp(value, 0.0f, 1.0f);
}

int FluidDomainSettings_gridlines_color_field_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->gridlines_color_field);
}

void FluidDomainSettings_gridlines_color_field_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->gridlines_color_field = (std::remove_reference_t<decltype(data->gridlines_color_field)>)value;
}

float FluidDomainSettings_gridlines_lower_bound_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->gridlines_lower_bound);
}

void FluidDomainSettings_gridlines_lower_bound_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->gridlines_lower_bound = (std::remove_reference_t<decltype(data->gridlines_lower_bound)>)value;
}

float FluidDomainSettings_gridlines_upper_bound_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->gridlines_upper_bound);
}

void FluidDomainSettings_gridlines_upper_bound_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->gridlines_upper_bound = (std::remove_reference_t<decltype(data->gridlines_upper_bound)>)value;
}

void FluidDomainSettings_gridlines_range_color_get(PointerRNA *ptr, float values[4])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->gridlines_range_color)[i]);
    }
}

void FluidDomainSettings_gridlines_range_color_set(PointerRNA *ptr, const float values[4])
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->gridlines_range_color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

int FluidDomainSettings_gridlines_cell_filter_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (int)(data->gridlines_cell_filter);
}

void FluidDomainSettings_gridlines_cell_filter_set(PointerRNA *ptr, int value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->gridlines_cell_filter = (std::remove_reference_t<decltype(data->gridlines_cell_filter)>)value;
}

float FluidDomainSettings_velocity_scale_get(PointerRNA *ptr)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    return (float)(data->velocity_scale);
}

void FluidDomainSettings_velocity_scale_set(PointerRNA *ptr, float value)
{
    FluidDomainSettings *data = (FluidDomainSettings *)(ptr->data);
    data->velocity_scale = (std::remove_reference_t<decltype(data->velocity_scale)>)std::clamp(value, 0.0f, FLT_MAX);
}

static PointerRNA FluidFlowSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FluidFlowSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FluidFlowSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidFlowSettings_rna_properties_get(iter);
    }
}

void FluidFlowSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FluidFlowSettings_rna_properties_get(iter);
    }
}

void FluidFlowSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FluidFlowSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FluidFlowSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float FluidFlowSettings_density_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->density);
}

void FluidFlowSettings_density_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->density = (std::remove_reference_t<decltype(data->density)>)std::clamp(value, 0.0f, 10.0f);
}

void FluidFlowSettings_smoke_color_get(PointerRNA *ptr, float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void FluidFlowSettings_smoke_color_set(PointerRNA *ptr, const float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float FluidFlowSettings_fuel_amount_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->fuel_amount);
}

void FluidFlowSettings_fuel_amount_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->fuel_amount = (std::remove_reference_t<decltype(data->fuel_amount)>)std::clamp(value, 0.0f, 10.0f);
}

float FluidFlowSettings_temperature_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->temperature);
}

void FluidFlowSettings_temperature_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->temperature = (std::remove_reference_t<decltype(data->temperature)>)std::clamp(value, -10.0f, 10.0f);
}

PointerRNA FluidFlowSettings_particle_system_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ParticleSystem, data->psys);
}

void FluidFlowSettings_particle_system_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    *(void **)&data->psys = value.data;
}

int FluidFlowSettings_flow_type_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->type);
}

void FluidFlowSettings_flow_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_flowtype_set;
    fn(ptr, value);
}

int FluidFlowSettings_flow_behavior_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->behavior);
}

void FluidFlowSettings_flow_behavior_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->behavior = (std::remove_reference_t<decltype(data->behavior)>)value;
}

int FluidFlowSettings_flow_source_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->source);
}

void FluidFlowSettings_flow_source_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Fluid_flowsource_set;
    fn(ptr, value);
}

bool FluidFlowSettings_use_absolute_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void FluidFlowSettings_use_absolute_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

bool FluidFlowSettings_use_initial_velocity_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void FluidFlowSettings_use_initial_velocity_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

float FluidFlowSettings_velocity_factor_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_multi);
}

void FluidFlowSettings_velocity_factor_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->vel_multi = (std::remove_reference_t<decltype(data->vel_multi)>)std::clamp(value, -100.0f, 100.0f);
}

float FluidFlowSettings_velocity_normal_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_normal);
}

void FluidFlowSettings_velocity_normal_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->vel_normal = (std::remove_reference_t<decltype(data->vel_normal)>)std::clamp(value, -100.0f, 100.0f);
}

float FluidFlowSettings_velocity_random_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->vel_random);
}

void FluidFlowSettings_velocity_random_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->vel_random = (std::remove_reference_t<decltype(data->vel_random)>)std::clamp(value, 0.0f, 10.0f);
}

void FluidFlowSettings_velocity_coord_get(PointerRNA *ptr, float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->vel_coord)[i]);
    }
}

void FluidFlowSettings_velocity_coord_set(PointerRNA *ptr, const float values[3])
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->vel_coord)[i] = std::clamp(values[i], -1000.0999755859f, 1000.0999755859f);
    }
}

float FluidFlowSettings_volume_density_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->volume_density);
}

void FluidFlowSettings_volume_density_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->volume_density = (std::remove_reference_t<decltype(data->volume_density)>)std::clamp(value, 0.0f, 1.0f);
}

float FluidFlowSettings_surface_distance_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->surface_distance);
}

void FluidFlowSettings_surface_distance_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->surface_distance = (std::remove_reference_t<decltype(data->surface_distance)>)std::clamp(value, 0.0f, 10.0f);
}

bool FluidFlowSettings_use_plane_init_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 64) != 0);
}

void FluidFlowSettings_use_plane_init_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 64); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(64)); }
}

float FluidFlowSettings_particle_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->particle_size);
}

void FluidFlowSettings_particle_size_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->particle_size = (std::remove_reference_t<decltype(data->particle_size)>)std::clamp(value, 0.1000000015f, FLT_MAX);
}

bool FluidFlowSettings_use_particle_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void FluidFlowSettings_use_particle_size_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 16); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16)); }
}

bool FluidFlowSettings_use_inflow_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void FluidFlowSettings_use_inflow_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32)); }
}

int FluidFlowSettings_subframes_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->subframes);
}

void FluidFlowSettings_subframes_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->subframes = (std::remove_reference_t<decltype(data->subframes)>)std::clamp(value, 0, 200);
}

void FluidFlowSettings_density_vertex_group_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_FluidFlow_density_vgroup_get;
    fn(ptr, value);
}

int FluidFlowSettings_density_vertex_group_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_FluidFlow_density_vgroup_length;
    return fn(ptr);
}

void FluidFlowSettings_density_vertex_group_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_FluidFlow_density_vgroup_set;
    fn(ptr, value);
}

bool FluidFlowSettings_use_texture_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void FluidFlowSettings_use_texture_set(PointerRNA *ptr, bool value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

int FluidFlowSettings_texture_map_type_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (int)(data->texture_type);
}

void FluidFlowSettings_texture_map_type_set(PointerRNA *ptr, int value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->texture_type = (std::remove_reference_t<decltype(data->texture_type)>)value;
}

void FluidFlowSettings_uv_layer_get(PointerRNA *ptr, char *value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    BLI_assert(strlen(data->uvlayer_name) < 68);
    strcpy(value, data->uvlayer_name);
}

int FluidFlowSettings_uv_layer_length(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return strlen(data->uvlayer_name);
}

void FluidFlowSettings_uv_layer_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_FluidFlow_uvlayer_set;
    fn(ptr, value);
}

PointerRNA FluidFlowSettings_noise_texture_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Texture, data->noise_texture);
}

void FluidFlowSettings_noise_texture_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->noise_texture) {
        id_us_min((ID *)data->noise_texture);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->noise_texture = value.data;
}

float FluidFlowSettings_texture_size_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->texture_size);
}

void FluidFlowSettings_texture_size_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->texture_size = (std::remove_reference_t<decltype(data->texture_size)>)std::clamp(value, 0.0099999998f, 10.0f);
}

float FluidFlowSettings_texture_offset_get(PointerRNA *ptr)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    return (float)(data->texture_offset);
}

void FluidFlowSettings_texture_offset_set(PointerRNA *ptr, float value)
{
    FluidFlowSettings *data = (FluidFlowSettings *)(ptr->data);
    data->texture_offset = (std::remove_reference_t<decltype(data->texture_offset)>)std::clamp(value, 0.0f, 200.0f);
}

static PointerRNA FluidEffectorSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FluidEffectorSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FluidEffectorSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FluidEffectorSettings_rna_properties_get(iter);
    }
}

void FluidEffectorSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FluidEffectorSettings_rna_properties_get(iter);
    }
}

void FluidEffectorSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FluidEffectorSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FluidEffectorSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int FluidEffectorSettings_effector_type_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->type);
}

void FluidEffectorSettings_effector_type_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

float FluidEffectorSettings_surface_distance_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (float)(data->surface_distance);
}

void FluidEffectorSettings_surface_distance_set(PointerRNA *ptr, float value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->surface_distance = (std::remove_reference_t<decltype(data->surface_distance)>)std::clamp(value, 0.0f, 10.0f);
}

bool FluidEffectorSettings_use_plane_init_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void FluidEffectorSettings_use_plane_init_set(PointerRNA *ptr, bool value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

float FluidEffectorSettings_velocity_factor_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (float)(data->vel_multi);
}

void FluidEffectorSettings_velocity_factor_set(PointerRNA *ptr, float value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->vel_multi = (std::remove_reference_t<decltype(data->vel_multi)>)std::clamp(value, -100.0f, 100.0f);
}

int FluidEffectorSettings_guide_mode_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->guide_mode);
}

void FluidEffectorSettings_guide_mode_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->guide_mode = (std::remove_reference_t<decltype(data->guide_mode)>)value;
}

bool FluidEffectorSettings_use_effector_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void FluidEffectorSettings_use_effector_set(PointerRNA *ptr, bool value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

int FluidEffectorSettings_subframes_get(PointerRNA *ptr)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    return (int)(data->subframes);
}

void FluidEffectorSettings_subframes_set(PointerRNA *ptr, int value)
{
    FluidEffectorSettings *data = (FluidEffectorSettings *)(ptr->data);
    data->subframes = (std::remove_reference_t<decltype(data->subframes)>)std::clamp(value, 0, 200);
}




/* Domain Settings */
static CollectionPropertyRNA rna_FluidDomainSettings_rna_properties_;
PropertyRNA &rna_FluidDomainSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_rna_properties_);

static PointerPropertyRNA rna_FluidDomainSettings_rna_type_;
PropertyRNA &rna_FluidDomainSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_rna_type_);

static PointerPropertyRNA rna_FluidDomainSettings_effector_weights_;
PropertyRNA &rna_FluidDomainSettings_effector_weights = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_effector_weights_);

static PointerPropertyRNA rna_FluidDomainSettings_effector_group_;
PropertyRNA &rna_FluidDomainSettings_effector_group = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_effector_group_);

static PointerPropertyRNA rna_FluidDomainSettings_fluid_group_;
PropertyRNA &rna_FluidDomainSettings_fluid_group = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_fluid_group_);

static PointerPropertyRNA rna_FluidDomainSettings_force_collection_;
PropertyRNA &rna_FluidDomainSettings_force_collection = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_force_collection_);

static FloatPropertyRNA rna_FluidDomainSettings_start_point_;
PropertyRNA &rna_FluidDomainSettings_start_point = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_start_point_);

static FloatPropertyRNA rna_FluidDomainSettings_cell_size_;
PropertyRNA &rna_FluidDomainSettings_cell_size = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cell_size_);

static IntPropertyRNA rna_FluidDomainSettings_domain_resolution_;
PropertyRNA &rna_FluidDomainSettings_domain_resolution = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_domain_resolution_);

static IntPropertyRNA rna_FluidDomainSettings_additional_res_;
PropertyRNA &rna_FluidDomainSettings_additional_res = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_additional_res_);

static IntPropertyRNA rna_FluidDomainSettings_adapt_margin_;
PropertyRNA &rna_FluidDomainSettings_adapt_margin = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_adapt_margin_);

static FloatPropertyRNA rna_FluidDomainSettings_adapt_threshold_;
PropertyRNA &rna_FluidDomainSettings_adapt_threshold = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_adapt_threshold_);

static BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_domain_;
PropertyRNA &rna_FluidDomainSettings_use_adaptive_domain = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_adaptive_domain_);

static IntPropertyRNA rna_FluidDomainSettings_resolution_max_;
PropertyRNA &rna_FluidDomainSettings_resolution_max = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_resolution_max_);

static BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_front_;
PropertyRNA &rna_FluidDomainSettings_use_collision_border_front = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_collision_border_front_);

static BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_back_;
PropertyRNA &rna_FluidDomainSettings_use_collision_border_back = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_collision_border_back_);

static BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_right_;
PropertyRNA &rna_FluidDomainSettings_use_collision_border_right = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_collision_border_right_);

static BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_left_;
PropertyRNA &rna_FluidDomainSettings_use_collision_border_left = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_collision_border_left_);

static BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_top_;
PropertyRNA &rna_FluidDomainSettings_use_collision_border_top = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_collision_border_top_);

static BoolPropertyRNA rna_FluidDomainSettings_use_collision_border_bottom_;
PropertyRNA &rna_FluidDomainSettings_use_collision_border_bottom = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_collision_border_bottom_);

static FloatPropertyRNA rna_FluidDomainSettings_gravity_;
PropertyRNA &rna_FluidDomainSettings_gravity = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_gravity_);

static EnumPropertyRNA rna_FluidDomainSettings_domain_type_;
PropertyRNA &rna_FluidDomainSettings_domain_type = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_domain_type_);

static BoolPropertyRNA rna_FluidDomainSettings_delete_in_obstacle_;
PropertyRNA &rna_FluidDomainSettings_delete_in_obstacle = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_delete_in_obstacle_);

static FloatPropertyRNA rna_FluidDomainSettings_alpha_;
PropertyRNA &rna_FluidDomainSettings_alpha = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_alpha_);

static FloatPropertyRNA rna_FluidDomainSettings_beta_;
PropertyRNA &rna_FluidDomainSettings_beta = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_beta_);

static IntPropertyRNA rna_FluidDomainSettings_dissolve_speed_;
PropertyRNA &rna_FluidDomainSettings_dissolve_speed = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_dissolve_speed_);

static FloatPropertyRNA rna_FluidDomainSettings_vorticity_;
PropertyRNA &rna_FluidDomainSettings_vorticity = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_vorticity_);

static EnumPropertyRNA rna_FluidDomainSettings_highres_sampling_;
PropertyRNA &rna_FluidDomainSettings_highres_sampling = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_highres_sampling_);

static BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke_;
PropertyRNA &rna_FluidDomainSettings_use_dissolve_smoke = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_dissolve_smoke_);

static BoolPropertyRNA rna_FluidDomainSettings_use_dissolve_smoke_log_;
PropertyRNA &rna_FluidDomainSettings_use_dissolve_smoke_log = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_dissolve_smoke_log_);

static FloatPropertyRNA rna_FluidDomainSettings_burning_rate_;
PropertyRNA &rna_FluidDomainSettings_burning_rate = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_burning_rate_);

static FloatPropertyRNA rna_FluidDomainSettings_flame_smoke_;
PropertyRNA &rna_FluidDomainSettings_flame_smoke = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_flame_smoke_);

static FloatPropertyRNA rna_FluidDomainSettings_flame_vorticity_;
PropertyRNA &rna_FluidDomainSettings_flame_vorticity = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_flame_vorticity_);

static FloatPropertyRNA rna_FluidDomainSettings_flame_ignition_;
PropertyRNA &rna_FluidDomainSettings_flame_ignition = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_flame_ignition_);

static FloatPropertyRNA rna_FluidDomainSettings_flame_max_temp_;
PropertyRNA &rna_FluidDomainSettings_flame_max_temp = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_flame_max_temp_);

static FloatPropertyRNA rna_FluidDomainSettings_flame_smoke_color_;
PropertyRNA &rna_FluidDomainSettings_flame_smoke_color = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_flame_smoke_color_);

static FloatPropertyRNA rna_FluidDomainSettings_noise_strength_;
PropertyRNA &rna_FluidDomainSettings_noise_strength = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_noise_strength_);

static FloatPropertyRNA rna_FluidDomainSettings_noise_pos_scale_;
PropertyRNA &rna_FluidDomainSettings_noise_pos_scale = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_noise_pos_scale_);

static FloatPropertyRNA rna_FluidDomainSettings_noise_time_anim_;
PropertyRNA &rna_FluidDomainSettings_noise_time_anim = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_noise_time_anim_);

static IntPropertyRNA rna_FluidDomainSettings_noise_scale_;
PropertyRNA &rna_FluidDomainSettings_noise_scale = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_noise_scale_);

static BoolPropertyRNA rna_FluidDomainSettings_use_noise_;
PropertyRNA &rna_FluidDomainSettings_use_noise = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_noise_);

static EnumPropertyRNA rna_FluidDomainSettings_simulation_method_;
PropertyRNA &rna_FluidDomainSettings_simulation_method = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_simulation_method_);

static FloatPropertyRNA rna_FluidDomainSettings_flip_ratio_;
PropertyRNA &rna_FluidDomainSettings_flip_ratio = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_flip_ratio_);

static FloatPropertyRNA rna_FluidDomainSettings_particle_randomness_;
PropertyRNA &rna_FluidDomainSettings_particle_randomness = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_particle_randomness_);

static IntPropertyRNA rna_FluidDomainSettings_particle_number_;
PropertyRNA &rna_FluidDomainSettings_particle_number = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_particle_number_);

static IntPropertyRNA rna_FluidDomainSettings_particle_min_;
PropertyRNA &rna_FluidDomainSettings_particle_min = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_particle_min_);

static IntPropertyRNA rna_FluidDomainSettings_particle_max_;
PropertyRNA &rna_FluidDomainSettings_particle_max = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_particle_max_);

static FloatPropertyRNA rna_FluidDomainSettings_particle_radius_;
PropertyRNA &rna_FluidDomainSettings_particle_radius = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_particle_radius_);

static FloatPropertyRNA rna_FluidDomainSettings_particle_band_width_;
PropertyRNA &rna_FluidDomainSettings_particle_band_width = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_particle_band_width_);

static BoolPropertyRNA rna_FluidDomainSettings_use_flip_particles_;
PropertyRNA &rna_FluidDomainSettings_use_flip_particles = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_flip_particles_);

static BoolPropertyRNA rna_FluidDomainSettings_use_fractions_;
PropertyRNA &rna_FluidDomainSettings_use_fractions = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_fractions_);

static FloatPropertyRNA rna_FluidDomainSettings_fractions_threshold_;
PropertyRNA &rna_FluidDomainSettings_fractions_threshold = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_fractions_threshold_);

static FloatPropertyRNA rna_FluidDomainSettings_fractions_distance_;
PropertyRNA &rna_FluidDomainSettings_fractions_distance = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_fractions_distance_);

static IntPropertyRNA rna_FluidDomainSettings_sys_particle_maximum_;
PropertyRNA &rna_FluidDomainSettings_sys_particle_maximum = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sys_particle_maximum_);

static BoolPropertyRNA rna_FluidDomainSettings_use_viscosity_;
PropertyRNA &rna_FluidDomainSettings_use_viscosity = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_viscosity_);

static FloatPropertyRNA rna_FluidDomainSettings_viscosity_value_;
PropertyRNA &rna_FluidDomainSettings_viscosity_value = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_viscosity_value_);

static BoolPropertyRNA rna_FluidDomainSettings_use_diffusion_;
PropertyRNA &rna_FluidDomainSettings_use_diffusion = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_diffusion_);

static FloatPropertyRNA rna_FluidDomainSettings_surface_tension_;
PropertyRNA &rna_FluidDomainSettings_surface_tension = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_surface_tension_);

static FloatPropertyRNA rna_FluidDomainSettings_viscosity_base_;
PropertyRNA &rna_FluidDomainSettings_viscosity_base = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_viscosity_base_);

static IntPropertyRNA rna_FluidDomainSettings_viscosity_exponent_;
PropertyRNA &rna_FluidDomainSettings_viscosity_exponent = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_viscosity_exponent_);

static FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_upper_;
PropertyRNA &rna_FluidDomainSettings_mesh_concave_upper = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_mesh_concave_upper_);

static FloatPropertyRNA rna_FluidDomainSettings_mesh_concave_lower_;
PropertyRNA &rna_FluidDomainSettings_mesh_concave_lower = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_mesh_concave_lower_);

static IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_pos_;
PropertyRNA &rna_FluidDomainSettings_mesh_smoothen_pos = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_mesh_smoothen_pos_);

static IntPropertyRNA rna_FluidDomainSettings_mesh_smoothen_neg_;
PropertyRNA &rna_FluidDomainSettings_mesh_smoothen_neg = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_mesh_smoothen_neg_);

static IntPropertyRNA rna_FluidDomainSettings_mesh_scale_;
PropertyRNA &rna_FluidDomainSettings_mesh_scale = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_mesh_scale_);

static EnumPropertyRNA rna_FluidDomainSettings_mesh_generator_;
PropertyRNA &rna_FluidDomainSettings_mesh_generator = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_mesh_generator_);

static BoolPropertyRNA rna_FluidDomainSettings_use_mesh_;
PropertyRNA &rna_FluidDomainSettings_use_mesh = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_mesh_);

static BoolPropertyRNA rna_FluidDomainSettings_use_speed_vectors_;
PropertyRNA &rna_FluidDomainSettings_use_speed_vectors = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_speed_vectors_);

static FloatPropertyRNA rna_FluidDomainSettings_mesh_particle_radius_;
PropertyRNA &rna_FluidDomainSettings_mesh_particle_radius = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_mesh_particle_radius_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_wavecrest_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_min_wavecrest = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_potential_min_wavecrest_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_wavecrest_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_max_wavecrest = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_potential_max_wavecrest_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_trappedair_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_min_trappedair = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_potential_min_trappedair_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_trappedair_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_max_trappedair = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_potential_max_trappedair_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_min_energy_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_min_energy = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_potential_min_energy_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_potential_max_energy_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_max_energy = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_potential_max_energy_);

static IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_wavecrest_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_sampling_wavecrest = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_sampling_wavecrest_);

static IntPropertyRNA rna_FluidDomainSettings_sndparticle_sampling_trappedair_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_sampling_trappedair = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_sampling_trappedair_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_buoyancy_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_bubble_buoyancy = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_bubble_buoyancy_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_bubble_drag_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_bubble_drag = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_bubble_drag_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_min_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_life_min = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_life_min_);

static FloatPropertyRNA rna_FluidDomainSettings_sndparticle_life_max_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_life_max = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_life_max_);

static EnumPropertyRNA rna_FluidDomainSettings_sndparticle_boundary_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_boundary = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_boundary_);

static EnumPropertyRNA rna_FluidDomainSettings_sndparticle_combined_export_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_combined_export = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_combined_export_);

static IntPropertyRNA rna_FluidDomainSettings_sndparticle_potential_radius_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_potential_radius = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_potential_radius_);

static IntPropertyRNA rna_FluidDomainSettings_sndparticle_update_radius_;
PropertyRNA &rna_FluidDomainSettings_sndparticle_update_radius = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_sndparticle_update_radius_);

static IntPropertyRNA rna_FluidDomainSettings_particle_scale_;
PropertyRNA &rna_FluidDomainSettings_particle_scale = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_particle_scale_);

static BoolPropertyRNA rna_FluidDomainSettings_use_spray_particles_;
PropertyRNA &rna_FluidDomainSettings_use_spray_particles = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_spray_particles_);

static BoolPropertyRNA rna_FluidDomainSettings_use_bubble_particles_;
PropertyRNA &rna_FluidDomainSettings_use_bubble_particles = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_bubble_particles_);

static BoolPropertyRNA rna_FluidDomainSettings_use_foam_particles_;
PropertyRNA &rna_FluidDomainSettings_use_foam_particles = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_foam_particles_);

static BoolPropertyRNA rna_FluidDomainSettings_use_tracer_particles_;
PropertyRNA &rna_FluidDomainSettings_use_tracer_particles = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_tracer_particles_);

static FloatPropertyRNA rna_FluidDomainSettings_guide_alpha_;
PropertyRNA &rna_FluidDomainSettings_guide_alpha = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_guide_alpha_);

static IntPropertyRNA rna_FluidDomainSettings_guide_beta_;
PropertyRNA &rna_FluidDomainSettings_guide_beta = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_guide_beta_);

static FloatPropertyRNA rna_FluidDomainSettings_guide_vel_factor_;
PropertyRNA &rna_FluidDomainSettings_guide_vel_factor = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_guide_vel_factor_);

static EnumPropertyRNA rna_FluidDomainSettings_guide_source_;
PropertyRNA &rna_FluidDomainSettings_guide_source = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_guide_source_);

static PointerPropertyRNA rna_FluidDomainSettings_guide_parent_;
PropertyRNA &rna_FluidDomainSettings_guide_parent = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_guide_parent_);

static BoolPropertyRNA rna_FluidDomainSettings_use_guide_;
PropertyRNA &rna_FluidDomainSettings_use_guide = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_guide_);

static IntPropertyRNA rna_FluidDomainSettings_cache_frame_start_;
PropertyRNA &rna_FluidDomainSettings_cache_frame_start = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_frame_start_);

static IntPropertyRNA rna_FluidDomainSettings_cache_frame_end_;
PropertyRNA &rna_FluidDomainSettings_cache_frame_end = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_frame_end_);

static IntPropertyRNA rna_FluidDomainSettings_cache_frame_offset_;
PropertyRNA &rna_FluidDomainSettings_cache_frame_offset = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_frame_offset_);

static IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_data_;
PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_data = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_frame_pause_data_);

static IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_noise_;
PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_noise = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_frame_pause_noise_);

static IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_mesh_;
PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_mesh = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_frame_pause_mesh_);

static IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_particles_;
PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_particles = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_frame_pause_particles_);

static IntPropertyRNA rna_FluidDomainSettings_cache_frame_pause_guide_;
PropertyRNA &rna_FluidDomainSettings_cache_frame_pause_guide = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_frame_pause_guide_);

static EnumPropertyRNA rna_FluidDomainSettings_cache_mesh_format_;
PropertyRNA &rna_FluidDomainSettings_cache_mesh_format = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_mesh_format_);

static EnumPropertyRNA rna_FluidDomainSettings_cache_data_format_;
PropertyRNA &rna_FluidDomainSettings_cache_data_format = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_data_format_);

static EnumPropertyRNA rna_FluidDomainSettings_cache_particle_format_;
PropertyRNA &rna_FluidDomainSettings_cache_particle_format = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_particle_format_);

static EnumPropertyRNA rna_FluidDomainSettings_cache_noise_format_;
PropertyRNA &rna_FluidDomainSettings_cache_noise_format = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_noise_format_);

static EnumPropertyRNA rna_FluidDomainSettings_cache_type_;
PropertyRNA &rna_FluidDomainSettings_cache_type = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_type_);

static BoolPropertyRNA rna_FluidDomainSettings_cache_resumable_;
PropertyRNA &rna_FluidDomainSettings_cache_resumable = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_resumable_);

static StringPropertyRNA rna_FluidDomainSettings_cache_directory_;
PropertyRNA &rna_FluidDomainSettings_cache_directory = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cache_directory_);

static BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_data_;
PropertyRNA &rna_FluidDomainSettings_is_cache_baking_data = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_is_cache_baking_data_);

static BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_data_;
PropertyRNA &rna_FluidDomainSettings_has_cache_baked_data = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_has_cache_baked_data_);

static BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_noise_;
PropertyRNA &rna_FluidDomainSettings_is_cache_baking_noise = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_is_cache_baking_noise_);

static BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_noise_;
PropertyRNA &rna_FluidDomainSettings_has_cache_baked_noise = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_has_cache_baked_noise_);

static BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_mesh_;
PropertyRNA &rna_FluidDomainSettings_is_cache_baking_mesh = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_is_cache_baking_mesh_);

static BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_mesh_;
PropertyRNA &rna_FluidDomainSettings_has_cache_baked_mesh = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_has_cache_baked_mesh_);

static BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_particles_;
PropertyRNA &rna_FluidDomainSettings_is_cache_baking_particles = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_is_cache_baking_particles_);

static BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_particles_;
PropertyRNA &rna_FluidDomainSettings_has_cache_baked_particles = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_has_cache_baked_particles_);

static BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_guide_;
PropertyRNA &rna_FluidDomainSettings_is_cache_baking_guide = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_is_cache_baking_guide_);

static BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_guide_;
PropertyRNA &rna_FluidDomainSettings_has_cache_baked_guide = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_has_cache_baked_guide_);

static BoolPropertyRNA rna_FluidDomainSettings_is_cache_baking_any_;
PropertyRNA &rna_FluidDomainSettings_is_cache_baking_any = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_is_cache_baking_any_);

static BoolPropertyRNA rna_FluidDomainSettings_has_cache_baked_any_;
PropertyRNA &rna_FluidDomainSettings_has_cache_baked_any = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_has_cache_baked_any_);

static BoolPropertyRNA rna_FluidDomainSettings_export_manta_script_;
PropertyRNA &rna_FluidDomainSettings_export_manta_script = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_export_manta_script_);

static EnumPropertyRNA rna_FluidDomainSettings_openvdb_cache_compress_type_;
PropertyRNA &rna_FluidDomainSettings_openvdb_cache_compress_type = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_openvdb_cache_compress_type_);

static EnumPropertyRNA rna_FluidDomainSettings_openvdb_data_depth_;
PropertyRNA &rna_FluidDomainSettings_openvdb_data_depth = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_openvdb_data_depth_);

static FloatPropertyRNA rna_FluidDomainSettings_time_scale_;
PropertyRNA &rna_FluidDomainSettings_time_scale = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_time_scale_);

static BoolPropertyRNA rna_FluidDomainSettings_use_adaptive_timesteps_;
PropertyRNA &rna_FluidDomainSettings_use_adaptive_timesteps = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_adaptive_timesteps_);

static FloatPropertyRNA rna_FluidDomainSettings_cfl_condition_;
PropertyRNA &rna_FluidDomainSettings_cfl_condition = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_cfl_condition_);

static IntPropertyRNA rna_FluidDomainSettings_timesteps_min_;
PropertyRNA &rna_FluidDomainSettings_timesteps_min = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_timesteps_min_);

static IntPropertyRNA rna_FluidDomainSettings_timesteps_max_;
PropertyRNA &rna_FluidDomainSettings_timesteps_max = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_timesteps_max_);

static BoolPropertyRNA rna_FluidDomainSettings_use_slice_;
PropertyRNA &rna_FluidDomainSettings_use_slice = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_slice_);

static EnumPropertyRNA rna_FluidDomainSettings_slice_axis_;
PropertyRNA &rna_FluidDomainSettings_slice_axis = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_slice_axis_);

static FloatPropertyRNA rna_FluidDomainSettings_slice_per_voxel_;
PropertyRNA &rna_FluidDomainSettings_slice_per_voxel = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_slice_per_voxel_);

static FloatPropertyRNA rna_FluidDomainSettings_slice_depth_;
PropertyRNA &rna_FluidDomainSettings_slice_depth = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_slice_depth_);

static FloatPropertyRNA rna_FluidDomainSettings_display_thickness_;
PropertyRNA &rna_FluidDomainSettings_display_thickness = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_display_thickness_);

static EnumPropertyRNA rna_FluidDomainSettings_display_interpolation_;
PropertyRNA &rna_FluidDomainSettings_display_interpolation = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_display_interpolation_);

static BoolPropertyRNA rna_FluidDomainSettings_show_gridlines_;
PropertyRNA &rna_FluidDomainSettings_show_gridlines = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_show_gridlines_);

static BoolPropertyRNA rna_FluidDomainSettings_show_velocity_;
PropertyRNA &rna_FluidDomainSettings_show_velocity = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_show_velocity_);

static EnumPropertyRNA rna_FluidDomainSettings_vector_display_type_;
PropertyRNA &rna_FluidDomainSettings_vector_display_type = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_vector_display_type_);

static EnumPropertyRNA rna_FluidDomainSettings_vector_field_;
PropertyRNA &rna_FluidDomainSettings_vector_field = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_vector_field_);

static BoolPropertyRNA rna_FluidDomainSettings_vector_scale_with_magnitude_;
PropertyRNA &rna_FluidDomainSettings_vector_scale_with_magnitude = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_vector_scale_with_magnitude_);

static BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_x_;
PropertyRNA &rna_FluidDomainSettings_vector_show_mac_x = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_vector_show_mac_x_);

static BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_y_;
PropertyRNA &rna_FluidDomainSettings_vector_show_mac_y = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_vector_show_mac_y_);

static BoolPropertyRNA rna_FluidDomainSettings_vector_show_mac_z_;
PropertyRNA &rna_FluidDomainSettings_vector_show_mac_z = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_vector_show_mac_z_);

static FloatPropertyRNA rna_FluidDomainSettings_vector_scale_;
PropertyRNA &rna_FluidDomainSettings_vector_scale = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_vector_scale_);

static BoolPropertyRNA rna_FluidDomainSettings_use_color_ramp_;
PropertyRNA &rna_FluidDomainSettings_use_color_ramp = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_use_color_ramp_);

static EnumPropertyRNA rna_FluidDomainSettings_color_ramp_field_;
PropertyRNA &rna_FluidDomainSettings_color_ramp_field = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_color_ramp_field_);

static FloatPropertyRNA rna_FluidDomainSettings_color_ramp_field_scale_;
PropertyRNA &rna_FluidDomainSettings_color_ramp_field_scale = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_color_ramp_field_scale_);

static PointerPropertyRNA rna_FluidDomainSettings_color_ramp_;
PropertyRNA &rna_FluidDomainSettings_color_ramp = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_color_ramp_);

static FloatPropertyRNA rna_FluidDomainSettings_clipping_;
PropertyRNA &rna_FluidDomainSettings_clipping = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_clipping_);

static EnumPropertyRNA rna_FluidDomainSettings_gridlines_color_field_;
PropertyRNA &rna_FluidDomainSettings_gridlines_color_field = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_gridlines_color_field_);

static FloatPropertyRNA rna_FluidDomainSettings_gridlines_lower_bound_;
PropertyRNA &rna_FluidDomainSettings_gridlines_lower_bound = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_gridlines_lower_bound_);

static FloatPropertyRNA rna_FluidDomainSettings_gridlines_upper_bound_;
PropertyRNA &rna_FluidDomainSettings_gridlines_upper_bound = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_gridlines_upper_bound_);

static FloatPropertyRNA rna_FluidDomainSettings_gridlines_range_color_;
PropertyRNA &rna_FluidDomainSettings_gridlines_range_color = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_gridlines_range_color_);

static EnumPropertyRNA rna_FluidDomainSettings_gridlines_cell_filter_;
PropertyRNA &rna_FluidDomainSettings_gridlines_cell_filter = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_gridlines_cell_filter_);

static FloatPropertyRNA rna_FluidDomainSettings_velocity_scale_;
PropertyRNA &rna_FluidDomainSettings_velocity_scale = reinterpret_cast<PropertyRNA &>(rna_FluidDomainSettings_velocity_scale_);

StructRNA *RNA_FluidDomainSettings;
void register_struct_FluidDomainSettings(BlenderRNA &brna)
{
	rna_FluidDomainSettings_rna_properties_ = {
		{&rna_FluidDomainSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_rna_properties_begin, FluidDomainSettings_rna_properties_next, FluidDomainSettings_rna_properties_end, FluidDomainSettings_rna_properties_get, nullptr, nullptr, FluidDomainSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FluidDomainSettings_rna_type_ = {
		{&rna_FluidDomainSettings_effector_weights, 	&rna_FluidDomainSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FluidDomainSettings_effector_weights_ = {
		{&rna_FluidDomainSettings_effector_group, 	&rna_FluidDomainSettings_rna_type,
		-1, "effector_weights", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Effector Weights",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_effector_weights_get, nullptr, nullptr, nullptr,RNA_EffectorWeights
	};

	rna_FluidDomainSettings_effector_group_ = {
		{&rna_FluidDomainSettings_fluid_group, 	&rna_FluidDomainSettings_effector_weights,
		-1, "effector_group", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Effector Collection",
		"Limit effectors to this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_reset_dependency, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_effector_group_get, FluidDomainSettings_effector_group_set, nullptr, nullptr,RNA_Collection
	};

	rna_FluidDomainSettings_fluid_group_ = {
		{&rna_FluidDomainSettings_force_collection, 	&rna_FluidDomainSettings_effector_group,
		-1, "fluid_group", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fluid Collection",
		"Limit fluid objects to this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_reset_dependency, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_fluid_group_get, FluidDomainSettings_fluid_group_set, nullptr, nullptr,RNA_Collection
	};

	rna_FluidDomainSettings_force_collection_ = {
		{&rna_FluidDomainSettings_start_point, 	&rna_FluidDomainSettings_fluid_group,
		-1, "force_collection", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Force Collection",
		"Limit forces to this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_reset_dependency, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_force_collection_get, FluidDomainSettings_force_collection_set, nullptr, nullptr,RNA_Collection
	};

	static float rna_FluidDomainSettings_start_point_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_FluidDomainSettings_start_point_ = {
		{&rna_FluidDomainSettings_cell_size, 	&rna_FluidDomainSettings_force_collection,
		-1, "start_point", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "p0",
		"Start point",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, p0), RawPropertyType(5), nullptr},
		nullptr, nullptr, FluidDomainSettings_start_point_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FluidDomainSettings_start_point_default
	};

	static float rna_FluidDomainSettings_cell_size_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_FluidDomainSettings_cell_size_ = {
		{&rna_FluidDomainSettings_domain_resolution, 	&rna_FluidDomainSettings_start_point,
		-1, "cell_size", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "cell_size",
		"Cell Size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, cell_size), RawPropertyType(5), nullptr},
		nullptr, nullptr, FluidDomainSettings_cell_size_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FluidDomainSettings_cell_size_default
	};

	static int rna_FluidDomainSettings_domain_resolution_default[3] = {
		0,
		0,
		0
	};
	rna_FluidDomainSettings_domain_resolution_ = {
		{&rna_FluidDomainSettings_additional_res, 	&rna_FluidDomainSettings_cell_size,
		-1, "domain_resolution", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "res",
		"Smoke Grid Resolution",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, res), RawPropertyType(0), nullptr},
		nullptr, nullptr, FluidDomainSettings_domain_resolution_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_FluidDomainSettings_domain_resolution_default
	};

	rna_FluidDomainSettings_additional_res_ = {
		{&rna_FluidDomainSettings_adapt_margin, 	&rna_FluidDomainSettings_domain_resolution,
		-1, "additional_res", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Additional",
		"Maximum number of additional cells",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, adapt_res), RawPropertyType(0), nullptr},
		FluidDomainSettings_additional_res_get, FluidDomainSettings_additional_res_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 512, 0, 512, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_adapt_margin_ = {
		{&rna_FluidDomainSettings_adapt_threshold, 	&rna_FluidDomainSettings_additional_res,
		-1, "adapt_margin", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Margin",
		"Margin added around fluid to minimize boundary interference",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, adapt_margin), RawPropertyType(0), nullptr},
		FluidDomainSettings_adapt_margin_get, FluidDomainSettings_adapt_margin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 2, 24, 2, 24, 1, nullptr, nullptr, 4, nullptr
	};

	rna_FluidDomainSettings_adapt_threshold_ = {
		{&rna_FluidDomainSettings_use_adaptive_domain, 	&rna_FluidDomainSettings_adapt_margin,
		-1, "adapt_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Minimum amount of fluid grid values (smoke density, fuel and heat) a cell can contain, before it is considered empty",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, adapt_threshold), RawPropertyType(5), nullptr},
		FluidDomainSettings_adapt_threshold_get, FluidDomainSettings_adapt_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0020000001f, 6, nullptr, nullptr, 0.0020000001f, nullptr
	};

	rna_FluidDomainSettings_use_adaptive_domain_ = {
		{&rna_FluidDomainSettings_resolution_max, 	&rna_FluidDomainSettings_adapt_threshold,
		-1, "use_adaptive_domain", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Adaptive Domain",
		"Adapt simulation resolution and size to fluid",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_adaptive_domain_get, FluidDomainSettings_use_adaptive_domain_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_resolution_max_ = {
		{&rna_FluidDomainSettings_use_collision_border_front, 	&rna_FluidDomainSettings_use_adaptive_domain,
		-1, "resolution_max", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Resolution",
		"Resolution used for the fluid domain. Value corresponds to the longest domain side (resolution for other domain sides is calculated automatically).",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, maxres), RawPropertyType(0), nullptr},
		FluidDomainSettings_resolution_max_get, FluidDomainSettings_resolution_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 24, 10000, 6, 10000, 2, nullptr, nullptr, 32, nullptr
	};

	rna_FluidDomainSettings_use_collision_border_front_ = {
		{&rna_FluidDomainSettings_use_collision_border_back, 	&rna_FluidDomainSettings_resolution_max,
		-1, "use_collision_border_front", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Front",
		"Enable collisions with front domain border",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_collision_border_front_get, FluidDomainSettings_use_collision_border_front_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_collision_border_back_ = {
		{&rna_FluidDomainSettings_use_collision_border_right, 	&rna_FluidDomainSettings_use_collision_border_front,
		-1, "use_collision_border_back", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Back",
		"Enable collisions with back domain border",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_collision_border_back_get, FluidDomainSettings_use_collision_border_back_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_collision_border_right_ = {
		{&rna_FluidDomainSettings_use_collision_border_left, 	&rna_FluidDomainSettings_use_collision_border_back,
		-1, "use_collision_border_right", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Right",
		"Enable collisions with right domain border",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_collision_border_right_get, FluidDomainSettings_use_collision_border_right_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_collision_border_left_ = {
		{&rna_FluidDomainSettings_use_collision_border_top, 	&rna_FluidDomainSettings_use_collision_border_right,
		-1, "use_collision_border_left", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Left",
		"Enable collisions with left domain border",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_collision_border_left_get, FluidDomainSettings_use_collision_border_left_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_collision_border_top_ = {
		{&rna_FluidDomainSettings_use_collision_border_bottom, 	&rna_FluidDomainSettings_use_collision_border_left,
		-1, "use_collision_border_top", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Top",
		"Enable collisions with top domain border",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_collision_border_top_get, FluidDomainSettings_use_collision_border_top_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_collision_border_bottom_ = {
		{&rna_FluidDomainSettings_gravity, 	&rna_FluidDomainSettings_use_collision_border_top,
		-1, "use_collision_border_bottom", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bottom",
		"Enable collisions with bottom domain border",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_collision_border_bottom_get, FluidDomainSettings_use_collision_border_bottom_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_FluidDomainSettings_gravity_default[3] = {
		0.0f,
		0.0f,
		-9.8100004196f
	};
	rna_FluidDomainSettings_gravity_ = {
		{&rna_FluidDomainSettings_domain_type, 	&rna_FluidDomainSettings_use_collision_border_bottom,
		-1, "gravity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gravity",
		"Gravity in X, Y and Z direction",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ACCELERATION) | int(PROP_UNIT_ACCELERATION)), nullptr, 1, {3, 0, 0}, 3,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, gravity), RawPropertyType(5), nullptr},
		nullptr, nullptr, FluidDomainSettings_gravity_get, FluidDomainSettings_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FluidDomainSettings_gravity_default
	};

	static const EnumPropertyItem rna_FluidDomainSettings_domain_type_items[3] = {
		{0, "GAS", 0, "Gas", "Create domain for gases"	},
		{1, "LIQUID", 0, "Liquid", "Create domain for liquids"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_domain_type_ = {
		{&rna_FluidDomainSettings_delete_in_obstacle, 	&rna_FluidDomainSettings_gravity,
		-1, "domain_type", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Domain Type",
		"Change domain type of the simulation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flip_parts_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_domain_type_get, FluidDomainSettings_domain_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_domain_type_items, 2, 0
	};

	rna_FluidDomainSettings_delete_in_obstacle_ = {
		{&rna_FluidDomainSettings_alpha, 	&rna_FluidDomainSettings_domain_type,
		-1, "delete_in_obstacle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clear In Obstacle",
		"Delete fluid inside obstacles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_delete_in_obstacle_get, FluidDomainSettings_delete_in_obstacle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_alpha_ = {
		{&rna_FluidDomainSettings_beta, 	&rna_FluidDomainSettings_delete_in_obstacle,
		-1, "alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Buoyancy Density",
		"Buoyant force based on smoke density (higher value results in faster rising smoke)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, alpha), RawPropertyType(5), nullptr},
		FluidDomainSettings_alpha_get, FluidDomainSettings_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_beta_ = {
		{&rna_FluidDomainSettings_dissolve_speed, 	&rna_FluidDomainSettings_alpha,
		-1, "beta", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Buoyancy Heat",
		"Buoyant force based on smoke heat (higher value results in faster rising smoke)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, beta), RawPropertyType(5), nullptr},
		FluidDomainSettings_beta_get, FluidDomainSettings_beta_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_dissolve_speed_ = {
		{&rna_FluidDomainSettings_vorticity, 	&rna_FluidDomainSettings_beta,
		-1, "dissolve_speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Dissolve Speed",
		"Determine how quickly the smoke dissolves (lower value makes smoke disappear faster)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, diss_speed), RawPropertyType(0), nullptr},
		FluidDomainSettings_dissolve_speed_get, FluidDomainSettings_dissolve_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, 10000, 1, nullptr, nullptr, 5, nullptr
	};

	rna_FluidDomainSettings_vorticity_ = {
		{&rna_FluidDomainSettings_highres_sampling, 	&rna_FluidDomainSettings_dissolve_speed,
		-1, "vorticity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vorticity",
		"Amount of turbulence and rotation in smoke",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, vorticity), RawPropertyType(5), nullptr},
		FluidDomainSettings_vorticity_get, FluidDomainSettings_vorticity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 4.0f, 0.0f, 4.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_highres_sampling_items[4] = {
		{2, "FULLSAMPLE", 0, "Full Sample", ""	},
		{1, "LINEAR", 0, "Linear", ""	},
		{0, "NEAREST", 0, "Nearest", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_highres_sampling_ = {
		{&rna_FluidDomainSettings_use_dissolve_smoke, 	&rna_FluidDomainSettings_vorticity,
		-1, "highres_sampling", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Emitter",
		"Method for sampling the high resolution flow",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, highres_sampling), RawPropertyType(0), nullptr},
		FluidDomainSettings_highres_sampling_get, FluidDomainSettings_highres_sampling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_highres_sampling_items, 3, 2
	};

	rna_FluidDomainSettings_use_dissolve_smoke_ = {
		{&rna_FluidDomainSettings_use_dissolve_smoke_log, 	&rna_FluidDomainSettings_highres_sampling,
		-1, "use_dissolve_smoke", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dissolve Smoke",
		"Let smoke disappear over time",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_dissolve_smoke_get, FluidDomainSettings_use_dissolve_smoke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_dissolve_smoke_log_ = {
		{&rna_FluidDomainSettings_burning_rate, 	&rna_FluidDomainSettings_use_dissolve_smoke,
		-1, "use_dissolve_smoke_log", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Logarithmic Dissolve",
		"Dissolve smoke in a logarithmic fashion. Dissolves quickly at first, but lingers longer.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_dissolve_smoke_log_get, FluidDomainSettings_use_dissolve_smoke_log_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_burning_rate_ = {
		{&rna_FluidDomainSettings_flame_smoke, 	&rna_FluidDomainSettings_use_dissolve_smoke_log,
		-1, "burning_rate", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Speed",
		"Speed of the burning reaction (higher value results in smaller flames)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, burning_rate), RawPropertyType(5), nullptr},
		FluidDomainSettings_burning_rate_get, FluidDomainSettings_burning_rate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 2.0f, 0.0099999998f, 4.0f, 1.0f, 5, nullptr, nullptr, 0.7500000000f, nullptr
	};

	rna_FluidDomainSettings_flame_smoke_ = {
		{&rna_FluidDomainSettings_flame_vorticity, 	&rna_FluidDomainSettings_burning_rate,
		-1, "flame_smoke", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smoke",
		"Amount of smoke created by burning fuel",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, flame_smoke), RawPropertyType(5), nullptr},
		FluidDomainSettings_flame_smoke_get, FluidDomainSettings_flame_smoke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 4.0f, 0.0f, 8.0f, 1.0f, 5, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_flame_vorticity_ = {
		{&rna_FluidDomainSettings_flame_ignition, 	&rna_FluidDomainSettings_flame_smoke,
		-1, "flame_vorticity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vorticity",
		"Additional vorticity for the flames",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, flame_vorticity), RawPropertyType(5), nullptr},
		FluidDomainSettings_flame_vorticity_get, FluidDomainSettings_flame_vorticity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 2.0f, 1.0f, 5, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_FluidDomainSettings_flame_ignition_ = {
		{&rna_FluidDomainSettings_flame_max_temp, 	&rna_FluidDomainSettings_flame_vorticity,
		-1, "flame_ignition", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum",
		"Minimum temperature of the flames (higher value results in faster rising flames)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, flame_ignition), RawPropertyType(5), nullptr},
		FluidDomainSettings_flame_ignition_get, FluidDomainSettings_flame_ignition_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 2.5000000000f, 0.5000000000f, 5.0f, 1.0f, 5, nullptr, nullptr, 1.5000000000f, nullptr
	};

	rna_FluidDomainSettings_flame_max_temp_ = {
		{&rna_FluidDomainSettings_flame_smoke_color, 	&rna_FluidDomainSettings_flame_ignition,
		-1, "flame_max_temp", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum",
		"Maximum temperature of the flames (higher value results in faster rising flames)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, flame_max_temp), RawPropertyType(5), nullptr},
		FluidDomainSettings_flame_max_temp_get, FluidDomainSettings_flame_max_temp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 5.0f, 1.0f, 10.0f, 1.0f, 5, nullptr, nullptr, 3.0f, nullptr
	};

	static float rna_FluidDomainSettings_flame_smoke_color_default[3] = {
		0.6999999881f,
		0.6999999881f,
		0.6999999881f
	};
	rna_FluidDomainSettings_flame_smoke_color_ = {
		{&rna_FluidDomainSettings_noise_strength, 	&rna_FluidDomainSettings_flame_max_temp,
		-1, "flame_smoke_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smoke Color",
		"Color of smoke emitted from burning fuel",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, flame_smoke_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, FluidDomainSettings_flame_smoke_color_get, FluidDomainSettings_flame_smoke_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FluidDomainSettings_flame_smoke_color_default
	};

	rna_FluidDomainSettings_noise_strength_ = {
		{&rna_FluidDomainSettings_noise_pos_scale, 	&rna_FluidDomainSettings_flame_smoke_color,
		-1, "noise_strength", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Strength of noise",
		0, "Amount",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_noisecache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, noise_strength), RawPropertyType(5), nullptr},
		FluidDomainSettings_noise_strength_get, FluidDomainSettings_noise_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 1.0f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_noise_pos_scale_ = {
		{&rna_FluidDomainSettings_noise_time_anim, 	&rna_FluidDomainSettings_noise_strength,
		-1, "noise_pos_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Scale of noise (higher value results in larger vortices)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_noisecache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, noise_pos_scale), RawPropertyType(5), nullptr},
		FluidDomainSettings_noise_pos_scale_get, FluidDomainSettings_noise_pos_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	rna_FluidDomainSettings_noise_time_anim_ = {
		{&rna_FluidDomainSettings_noise_scale, 	&rna_FluidDomainSettings_noise_pos_scale,
		-1, "noise_time_anim", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Time",
		"Animation time of noise",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_noisecache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, noise_time_anim), RawPropertyType(5), nullptr},
		FluidDomainSettings_noise_time_anim_get, FluidDomainSettings_noise_time_anim_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_FluidDomainSettings_noise_scale_ = {
		{&rna_FluidDomainSettings_use_noise, 	&rna_FluidDomainSettings_noise_time_anim,
		-1, "noise_scale", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Scale",
		"The noise simulation is scaled up by this factor (compared to the base resolution of the domain)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_noise_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, noise_scale), RawPropertyType(0), nullptr},
		FluidDomainSettings_noise_scale_get, FluidDomainSettings_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10, 1, 100, 1, nullptr, nullptr, 2, nullptr
	};

	rna_FluidDomainSettings_use_noise_ = {
		{&rna_FluidDomainSettings_simulation_method, 	&rna_FluidDomainSettings_noise_scale,
		-1, "use_noise", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Noise",
		"Enable fluid noise (using amplification)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_update, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_noise_get, FluidDomainSettings_use_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_simulation_method_items[3] = {
		{1, "FLIP", 0, "FLIP", "Use FLIP as the simulation method (more splashy behavior)"	},
		{2, "APIC", 0, "APIC", "Use APIC as the simulation method (more energetic and stable behavior)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_simulation_method_ = {
		{&rna_FluidDomainSettings_flip_ratio, 	&rna_FluidDomainSettings_use_noise,
		-1, "simulation_method", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Simulation Method",
		"Change the underlying simulation method",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, simulation_method), RawPropertyType(1), nullptr},
		FluidDomainSettings_simulation_method_get, FluidDomainSettings_simulation_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_simulation_method_items, 2, 1
	};

	rna_FluidDomainSettings_flip_ratio_ = {
		{&rna_FluidDomainSettings_particle_randomness, 	&rna_FluidDomainSettings_simulation_method,
		-1, "flip_ratio", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "FLIP Ratio",
		"PIC/FLIP Ratio. A value of 1.0 will result in a completely FLIP based simulation. Use a lower value for simulations which should produce smaller splashes.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, flip_ratio), RawPropertyType(5), nullptr},
		FluidDomainSettings_flip_ratio_get, FluidDomainSettings_flip_ratio_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.9700000286f, nullptr
	};

	rna_FluidDomainSettings_particle_randomness_ = {
		{&rna_FluidDomainSettings_particle_number, 	&rna_FluidDomainSettings_flip_ratio,
		-1, "particle_randomness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Randomness",
		"Randomness factor for particle sampling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, particle_randomness), RawPropertyType(5), nullptr},
		FluidDomainSettings_particle_randomness_get, FluidDomainSettings_particle_randomness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_FluidDomainSettings_particle_number_ = {
		{&rna_FluidDomainSettings_particle_min, 	&rna_FluidDomainSettings_particle_randomness,
		-1, "particle_number", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Number",
		"Particle number factor (higher value results in more particles)",
		0, "Amount",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, particle_number), RawPropertyType(0), nullptr},
		FluidDomainSettings_particle_number_get, FluidDomainSettings_particle_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 5, 1, 5, 1, nullptr, nullptr, 2, nullptr
	};

	rna_FluidDomainSettings_particle_min_ = {
		{&rna_FluidDomainSettings_particle_max, 	&rna_FluidDomainSettings_particle_number,
		-1, "particle_min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum",
		"Minimum number of particles per cell (ensures that each cell has at least this amount of particles)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, particle_minimum), RawPropertyType(0), nullptr},
		FluidDomainSettings_particle_min_get, FluidDomainSettings_particle_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1000, 0, 1000, 1, nullptr, nullptr, 8, nullptr
	};

	rna_FluidDomainSettings_particle_max_ = {
		{&rna_FluidDomainSettings_particle_radius, 	&rna_FluidDomainSettings_particle_min,
		-1, "particle_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum",
		"Maximum number of particles per cell (ensures that each cell has at most this amount of particles)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, particle_maximum), RawPropertyType(0), nullptr},
		FluidDomainSettings_particle_max_get, FluidDomainSettings_particle_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1000, 0, 1000, 1, nullptr, nullptr, 16, nullptr
	};

	rna_FluidDomainSettings_particle_radius_ = {
		{&rna_FluidDomainSettings_particle_band_width, 	&rna_FluidDomainSettings_particle_max,
		-1, "particle_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Radius",
		"Particle radius factor. Increase this value if the simulation appears to leak volume, decrease it if the simulation seems to gain volume.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, particle_radius), RawPropertyType(5), nullptr},
		FluidDomainSettings_particle_radius_get, FluidDomainSettings_particle_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_particle_band_width_ = {
		{&rna_FluidDomainSettings_use_flip_particles, 	&rna_FluidDomainSettings_particle_radius,
		-1, "particle_band_width", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Width",
		"Particle (narrow) band width (higher value results in thicker band and more particles)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, particle_band_width), RawPropertyType(5), nullptr},
		FluidDomainSettings_particle_band_width_get, FluidDomainSettings_particle_band_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 3.0f, nullptr
	};

	rna_FluidDomainSettings_use_flip_particles_ = {
		{&rna_FluidDomainSettings_use_fractions, 	&rna_FluidDomainSettings_particle_band_width,
		-1, "use_flip_particles", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "FLIP",
		"Create liquid particle system",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flip_parts_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_flip_particles_get, FluidDomainSettings_use_flip_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_fractions_ = {
		{&rna_FluidDomainSettings_fractions_threshold, 	&rna_FluidDomainSettings_use_flip_particles,
		-1, "use_fractions", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fractional Obstacles",
		"Fractional obstacles improve and smoothen the fluid-obstacle boundary",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_fractions_get, FluidDomainSettings_use_fractions_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_fractions_threshold_ = {
		{&rna_FluidDomainSettings_fractions_distance, 	&rna_FluidDomainSettings_use_fractions,
		-1, "fractions_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Obstacle Threshold",
		"Determines how much fluid is allowed in an obstacle cell (higher values will tag a boundary cell as an obstacle easier and reduce the boundary smoothening effect)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, fractions_threshold), RawPropertyType(5), nullptr},
		FluidDomainSettings_fractions_threshold_get, FluidDomainSettings_fractions_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 1.0f, 0.0010000000f, 1.0f, 0.0500000007f, -1, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_FluidDomainSettings_fractions_distance_ = {
		{&rna_FluidDomainSettings_sys_particle_maximum, 	&rna_FluidDomainSettings_fractions_threshold,
		-1, "fractions_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Obstacle Distance",
		"Determines how far apart fluid and obstacle are (higher values will result in fluid being further away from obstacles, smaller values will let fluid move towards the inside of obstacles)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, fractions_distance), RawPropertyType(5), nullptr},
		FluidDomainSettings_fractions_distance_get, FluidDomainSettings_fractions_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 5.0f, -5.0f, 5.0f, 0.1000000015f, -1, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_FluidDomainSettings_sys_particle_maximum_ = {
		{&rna_FluidDomainSettings_use_viscosity, 	&rna_FluidDomainSettings_fractions_distance,
		-1, "sys_particle_maximum", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "System Maximum",
		"Maximum number of fluid particles that are allowed in this simulation",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sys_particle_maximum), RawPropertyType(0), nullptr},
		FluidDomainSettings_sys_particle_maximum_get, FluidDomainSettings_sys_particle_maximum_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_viscosity_ = {
		{&rna_FluidDomainSettings_viscosity_value, 	&rna_FluidDomainSettings_sys_particle_maximum,
		-1, "use_viscosity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Viscosity",
		"Simulate fluids with high viscosity using a special solver",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_viscosity_get, FluidDomainSettings_use_viscosity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_viscosity_value_ = {
		{&rna_FluidDomainSettings_use_diffusion, 	&rna_FluidDomainSettings_use_viscosity,
		-1, "viscosity_value", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Viscosity of liquid (higher values result in more viscous fluids, a value of 0 will still apply some viscosity)",
		0, "Amount",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, viscosity_value), RawPropertyType(5), nullptr},
		FluidDomainSettings_viscosity_value_get, FluidDomainSettings_viscosity_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 10.0f, 1.0f, 3, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_FluidDomainSettings_use_diffusion_ = {
		{&rna_FluidDomainSettings_surface_tension, 	&rna_FluidDomainSettings_viscosity_value,
		-1, "use_diffusion", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Diffusion",
		"Enable fluid diffusion settings (e.g. viscosity, surface tension)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_diffusion_get, FluidDomainSettings_use_diffusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_surface_tension_ = {
		{&rna_FluidDomainSettings_viscosity_base, 	&rna_FluidDomainSettings_use_diffusion,
		-1, "surface_tension", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tension",
		"Surface tension of liquid (higher value results in greater hydrophobic behavior)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, surface_tension), RawPropertyType(5), nullptr},
		FluidDomainSettings_surface_tension_get, FluidDomainSettings_surface_tension_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FluidDomainSettings_viscosity_base_ = {
		{&rna_FluidDomainSettings_viscosity_exponent, 	&rna_FluidDomainSettings_surface_tension,
		-1, "viscosity_base", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viscosity Base",
		"Viscosity setting: value that is multiplied by 10 to the power of (exponent*-1)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, viscosity_base), RawPropertyType(5), nullptr},
		FluidDomainSettings_viscosity_base_get, FluidDomainSettings_viscosity_base_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_viscosity_exponent_ = {
		{&rna_FluidDomainSettings_mesh_concave_upper, 	&rna_FluidDomainSettings_viscosity_base,
		-1, "viscosity_exponent", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viscosity Exponent",
		"Negative exponent for the viscosity value (to simplify entering small values e.g. 5*10^-6)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, viscosity_exponent), RawPropertyType(0), nullptr},
		FluidDomainSettings_viscosity_exponent_get, FluidDomainSettings_viscosity_exponent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10, 0, 10, 1, nullptr, nullptr, 6, nullptr
	};

	rna_FluidDomainSettings_mesh_concave_upper_ = {
		{&rna_FluidDomainSettings_mesh_concave_lower, 	&rna_FluidDomainSettings_viscosity_exponent,
		-1, "mesh_concave_upper", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Upper Concavity",
		"Upper mesh concavity bound (high values tend to smoothen and fill out concave regions)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, mesh_concave_upper), RawPropertyType(5), nullptr},
		FluidDomainSettings_mesh_concave_upper_get, FluidDomainSettings_mesh_concave_upper_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 3.5000000000f, nullptr
	};

	rna_FluidDomainSettings_mesh_concave_lower_ = {
		{&rna_FluidDomainSettings_mesh_smoothen_pos, 	&rna_FluidDomainSettings_mesh_concave_upper,
		-1, "mesh_concave_lower", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lower Concavity",
		"Lower mesh concavity bound (high values tend to smoothen and fill out concave regions)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, mesh_concave_lower), RawPropertyType(5), nullptr},
		FluidDomainSettings_mesh_concave_lower_get, FluidDomainSettings_mesh_concave_lower_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.4000000060f, nullptr
	};

	rna_FluidDomainSettings_mesh_smoothen_pos_ = {
		{&rna_FluidDomainSettings_mesh_smoothen_neg, 	&rna_FluidDomainSettings_mesh_concave_lower,
		-1, "mesh_smoothen_pos", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smoothen Pos",
		"Positive mesh smoothening",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, mesh_smoothen_pos), RawPropertyType(0), nullptr},
		FluidDomainSettings_mesh_smoothen_pos_get, FluidDomainSettings_mesh_smoothen_pos_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_mesh_smoothen_neg_ = {
		{&rna_FluidDomainSettings_mesh_scale, 	&rna_FluidDomainSettings_mesh_smoothen_pos,
		-1, "mesh_smoothen_neg", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smoothen Neg",
		"Negative mesh smoothening",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, mesh_smoothen_neg), RawPropertyType(0), nullptr},
		FluidDomainSettings_mesh_smoothen_neg_get, FluidDomainSettings_mesh_smoothen_neg_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_mesh_scale_ = {
		{&rna_FluidDomainSettings_mesh_generator, 	&rna_FluidDomainSettings_mesh_smoothen_neg,
		-1, "mesh_scale", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mesh scale",
		"The mesh simulation is scaled up by this factor (compared to the base resolution of the domain). For best meshing, it is recommended to adjust the mesh particle radius alongside this value.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_mesh_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, mesh_scale), RawPropertyType(0), nullptr},
		FluidDomainSettings_mesh_scale_get, FluidDomainSettings_mesh_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10, 1, 100, 1, nullptr, nullptr, 2, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_mesh_generator_items[3] = {
		{0, "IMPROVED", 0, "Final", "Use improved particle level set (slower but more precise and with mesh smoothening options)"	},
		{1, "UNION", 0, "Preview", "Use union particle level set (faster but lower quality)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_mesh_generator_ = {
		{&rna_FluidDomainSettings_use_mesh, 	&rna_FluidDomainSettings_mesh_scale,
		-1, "mesh_generator", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mesh generator",
		"Which particle level set generator to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, mesh_generator), RawPropertyType(1), nullptr},
		FluidDomainSettings_mesh_generator_get, FluidDomainSettings_mesh_generator_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_mesh_generator_items, 2, 0
	};

	rna_FluidDomainSettings_use_mesh_ = {
		{&rna_FluidDomainSettings_use_speed_vectors, 	&rna_FluidDomainSettings_mesh_generator,
		-1, "use_mesh", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Mesh",
		"Enable fluid mesh (using amplification)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_update, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_mesh_get, FluidDomainSettings_use_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_use_speed_vectors_ = {
		{&rna_FluidDomainSettings_mesh_particle_radius, 	&rna_FluidDomainSettings_use_mesh,
		-1, "use_speed_vectors", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Speed Vectors",
		"Caches velocities of mesh vertices. These will be used (automatically) when rendering with motion blur enabled.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_speed_vectors_get, FluidDomainSettings_use_speed_vectors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_mesh_particle_radius_ = {
		{&rna_FluidDomainSettings_sndparticle_potential_min_wavecrest, 	&rna_FluidDomainSettings_use_speed_vectors,
		-1, "mesh_particle_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Radius",
		"Particle radius factor (higher value results in larger (meshed) particles). Needs to be adjusted after changing the mesh scale.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, mesh_particle_radius), RawPropertyType(5), nullptr},
		FluidDomainSettings_mesh_particle_radius_get, FluidDomainSettings_mesh_particle_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_potential_min_wavecrest_ = {
		{&rna_FluidDomainSettings_sndparticle_potential_max_wavecrest, 	&rna_FluidDomainSettings_mesh_particle_radius,
		-1, "sndparticle_potential_min_wavecrest", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Wave Crest Potential",
		"Lower clamping threshold for marking fluid cells as wave crests (lower value results in more marked cells)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_tau_min_wc), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_potential_min_wavecrest_get, FluidDomainSettings_sndparticle_potential_min_wavecrest_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_potential_max_wavecrest_ = {
		{&rna_FluidDomainSettings_sndparticle_potential_min_trappedair, 	&rna_FluidDomainSettings_sndparticle_potential_min_wavecrest,
		-1, "sndparticle_potential_max_wavecrest", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Wave Crest Potential",
		"Upper clamping threshold for marking fluid cells as wave crests (higher value results in less marked cells)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_tau_max_wc), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_potential_max_wavecrest_get, FluidDomainSettings_sndparticle_potential_max_wavecrest_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, nullptr, nullptr, 8.0f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_potential_min_trappedair_ = {
		{&rna_FluidDomainSettings_sndparticle_potential_max_trappedair, 	&rna_FluidDomainSettings_sndparticle_potential_max_wavecrest,
		-1, "sndparticle_potential_min_trappedair", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Trapped Air Potential",
		"Lower clamping threshold for marking fluid cells where air is trapped (lower value results in more marked cells)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_tau_min_ta), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_potential_min_trappedair_get, FluidDomainSettings_sndparticle_potential_min_trappedair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 1000.0f, 100.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_potential_max_trappedair_ = {
		{&rna_FluidDomainSettings_sndparticle_potential_min_energy, 	&rna_FluidDomainSettings_sndparticle_potential_min_trappedair,
		-1, "sndparticle_potential_max_trappedair", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Trapped Air Potential",
		"Upper clamping threshold for marking fluid cells where air is trapped (higher value results in less marked cells)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_tau_max_ta), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_potential_max_trappedair_get, FluidDomainSettings_sndparticle_potential_max_trappedair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, nullptr, nullptr, 20.0f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_potential_min_energy_ = {
		{&rna_FluidDomainSettings_sndparticle_potential_max_energy, 	&rna_FluidDomainSettings_sndparticle_potential_max_trappedair,
		-1, "sndparticle_potential_min_energy", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Kinetic Energy Potential",
		"Lower clamping threshold that indicates the fluid speed where cells start to emit particles (lower values result in generally more particles)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_tau_min_k), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_potential_min_energy_get, FluidDomainSettings_sndparticle_potential_min_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_potential_max_energy_ = {
		{&rna_FluidDomainSettings_sndparticle_sampling_wavecrest, 	&rna_FluidDomainSettings_sndparticle_potential_min_energy,
		-1, "sndparticle_potential_max_energy", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Kinetic Energy Potential",
		"Upper clamping threshold that indicates the fluid speed where cells no longer emit more particles (higher value results in generally less particles)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_tau_max_k), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_potential_max_energy_get, FluidDomainSettings_sndparticle_potential_max_energy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 100.0f, 3, nullptr, nullptr, 5.0f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_sampling_wavecrest_ = {
		{&rna_FluidDomainSettings_sndparticle_sampling_trappedair, 	&rna_FluidDomainSettings_sndparticle_potential_max_energy,
		-1, "sndparticle_sampling_wavecrest", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wave Crest Sampling",
		"Maximum number of particles generated per wave crest cell per frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_k_wc), RawPropertyType(0), nullptr},
		FluidDomainSettings_sndparticle_sampling_wavecrest_get, FluidDomainSettings_sndparticle_sampling_wavecrest_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, 10000, 1, nullptr, nullptr, 200, nullptr
	};

	rna_FluidDomainSettings_sndparticle_sampling_trappedair_ = {
		{&rna_FluidDomainSettings_sndparticle_bubble_buoyancy, 	&rna_FluidDomainSettings_sndparticle_sampling_wavecrest,
		-1, "sndparticle_sampling_trappedair", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Trapped Air Sampling",
		"Maximum number of particles generated per trapped air cell per frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_k_ta), RawPropertyType(0), nullptr},
		FluidDomainSettings_sndparticle_sampling_trappedair_get, FluidDomainSettings_sndparticle_sampling_trappedair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, 10000, 1, nullptr, nullptr, 40, nullptr
	};

	rna_FluidDomainSettings_sndparticle_bubble_buoyancy_ = {
		{&rna_FluidDomainSettings_sndparticle_bubble_drag, 	&rna_FluidDomainSettings_sndparticle_sampling_trappedair,
		-1, "sndparticle_bubble_buoyancy", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bubble Buoyancy",
		"Amount of buoyancy force that rises bubbles (high value results in bubble movement mainly upwards)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_k_b), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_bubble_buoyancy_get, FluidDomainSettings_sndparticle_bubble_buoyancy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 2, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_bubble_drag_ = {
		{&rna_FluidDomainSettings_sndparticle_life_min, 	&rna_FluidDomainSettings_sndparticle_bubble_buoyancy,
		-1, "sndparticle_bubble_drag", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Bubble Drag",
		"Amount of drag force that moves bubbles along with the fluid (high value results in bubble movement mainly along with the fluid)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_k_d), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_bubble_drag_get, FluidDomainSettings_sndparticle_bubble_drag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 2, nullptr, nullptr, 0.6000000238f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_life_min_ = {
		{&rna_FluidDomainSettings_sndparticle_life_max, 	&rna_FluidDomainSettings_sndparticle_bubble_drag,
		-1, "sndparticle_life_min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum Lifetime",
		"Lowest possible particle lifetime",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_l_min), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_life_min_get, FluidDomainSettings_sndparticle_life_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 100.0f, 1, nullptr, nullptr, 10.0f, nullptr
	};

	rna_FluidDomainSettings_sndparticle_life_max_ = {
		{&rna_FluidDomainSettings_sndparticle_boundary, 	&rna_FluidDomainSettings_sndparticle_life_min,
		-1, "sndparticle_life_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum Lifetime",
		"Highest possible particle lifetime",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_l_max), RawPropertyType(5), nullptr},
		FluidDomainSettings_sndparticle_life_max_get, FluidDomainSettings_sndparticle_life_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, 10000.0f, 100.0f, 1, nullptr, nullptr, 25.0f, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_sndparticle_boundary_items[3] = {
		{0, "DELETE", 0, "Delete", "Delete secondary particles that are inside obstacles or left the domain"	},
		{1, "PUSHOUT", 0, "Push Out", "Push secondary particles that left the domain back into the domain"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_sndparticle_boundary_ = {
		{&rna_FluidDomainSettings_sndparticle_combined_export, 	&rna_FluidDomainSettings_sndparticle_life_max,
		-1, "sndparticle_boundary", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Particles in Boundary",
		"How particles that left the domain are treated",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_boundary), RawPropertyType(2), nullptr},
		FluidDomainSettings_sndparticle_boundary_get, FluidDomainSettings_sndparticle_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_sndparticle_boundary_items, 2, 0
	};

	static const EnumPropertyItem rna_FluidDomainSettings_sndparticle_combined_export_items[6] = {
		{0, "OFF", 0, "Off", "Create a separate particle system for every secondary particle type"	},
		{1, "SPRAY_FOAM", 0, "Spray + Foam", "Spray and foam particles are saved in the same particle system"	},
		{2, "SPRAY_BUBBLES", 0, "Spray + Bubbles", "Spray and bubble particles are saved in the same particle system"	},
		{3, "FOAM_BUBBLES", 0, "Foam + Bubbles", "Foam and bubbles particles are saved in the same particle system"	},
		{4, "SPRAY_FOAM_BUBBLES", 0, "Spray + Foam + Bubbles", "Create one particle system that contains all three secondary particle types"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_sndparticle_combined_export_ = {
		{&rna_FluidDomainSettings_sndparticle_potential_radius, 	&rna_FluidDomainSettings_sndparticle_boundary,
		-1, "sndparticle_combined_export", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Combined Export",
		"Determines which particle systems are created from secondary particles",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_combined_export_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_combined_export), RawPropertyType(2), nullptr},
		FluidDomainSettings_sndparticle_combined_export_get, FluidDomainSettings_sndparticle_combined_export_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_sndparticle_combined_export_items, 5, 0
	};

	rna_FluidDomainSettings_sndparticle_potential_radius_ = {
		{&rna_FluidDomainSettings_sndparticle_update_radius, 	&rna_FluidDomainSettings_sndparticle_combined_export,
		-1, "sndparticle_potential_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Potential Radius",
		"Radius to compute potential for each cell (higher values are slower but create smoother potential grids)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_potential_radius), RawPropertyType(0), nullptr},
		FluidDomainSettings_sndparticle_potential_radius_get, FluidDomainSettings_sndparticle_potential_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 4, 1, 4, 1, nullptr, nullptr, 2, nullptr
	};

	rna_FluidDomainSettings_sndparticle_update_radius_ = {
		{&rna_FluidDomainSettings_particle_scale, 	&rna_FluidDomainSettings_sndparticle_potential_radius,
		-1, "sndparticle_update_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Update Radius",
		"Radius to compute position update for each particle (higher values are slower but particles move less chaotic)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, sndparticle_update_radius), RawPropertyType(0), nullptr},
		FluidDomainSettings_sndparticle_update_radius_get, FluidDomainSettings_sndparticle_update_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 4, 1, 4, 1, nullptr, nullptr, 2, nullptr
	};

	rna_FluidDomainSettings_particle_scale_ = {
		{&rna_FluidDomainSettings_use_spray_particles, 	&rna_FluidDomainSettings_sndparticle_update_radius,
		-1, "particle_scale", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Particle scale",
		"The particle simulation is scaled up by this factor (compared to the base resolution of the domain)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_particles_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, particle_scale), RawPropertyType(0), nullptr},
		FluidDomainSettings_particle_scale_get, FluidDomainSettings_particle_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10, 1, 100, 1, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_use_spray_particles_ = {
		{&rna_FluidDomainSettings_use_bubble_particles, 	&rna_FluidDomainSettings_particle_scale,
		-1, "use_spray_particles", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Spray",
		"Create spray particle system",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_spray_parts_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_spray_particles_get, FluidDomainSettings_use_spray_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_bubble_particles_ = {
		{&rna_FluidDomainSettings_use_foam_particles, 	&rna_FluidDomainSettings_use_spray_particles,
		-1, "use_bubble_particles", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bubble",
		"Create bubble particle system",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_bubble_parts_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_bubble_particles_get, FluidDomainSettings_use_bubble_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_foam_particles_ = {
		{&rna_FluidDomainSettings_use_tracer_particles, 	&rna_FluidDomainSettings_use_bubble_particles,
		-1, "use_foam_particles", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Foam",
		"Create foam particle system",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_foam_parts_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_foam_particles_get, FluidDomainSettings_use_foam_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_use_tracer_particles_ = {
		{&rna_FluidDomainSettings_guide_alpha, 	&rna_FluidDomainSettings_use_foam_particles,
		-1, "use_tracer_particles", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tracer",
		"Create tracer particle system",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_tracer_parts_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_tracer_particles_get, FluidDomainSettings_use_tracer_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_guide_alpha_ = {
		{&rna_FluidDomainSettings_guide_beta, 	&rna_FluidDomainSettings_use_tracer_particles,
		-1, "guide_alpha", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Guiding weight (higher value results in greater lag)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, guide_alpha), RawPropertyType(5), nullptr},
		FluidDomainSettings_guide_alpha_get, FluidDomainSettings_guide_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 100.0f, 1.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	rna_FluidDomainSettings_guide_beta_ = {
		{&rna_FluidDomainSettings_guide_vel_factor, 	&rna_FluidDomainSettings_guide_alpha,
		-1, "guide_beta", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Guiding size (higher value results in larger vortices)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, guide_beta), RawPropertyType(0), nullptr},
		FluidDomainSettings_guide_beta_get, FluidDomainSettings_guide_beta_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 50, 1, 50, 1, nullptr, nullptr, 5, nullptr
	};

	rna_FluidDomainSettings_guide_vel_factor_ = {
		{&rna_FluidDomainSettings_guide_source, 	&rna_FluidDomainSettings_guide_beta,
		-1, "guide_vel_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Velocity Factor",
		"Guiding velocity factor (higher value results in greater guiding velocities)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, guide_vel_factor), RawPropertyType(5), nullptr},
		FluidDomainSettings_guide_vel_factor_get, FluidDomainSettings_guide_vel_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_guide_source_items[3] = {
		{0, "DOMAIN", 0, "Domain", "Use a fluid domain for guiding (domain needs to be baked already so that velocities can be extracted). Guiding domain can be of any type (i.e. gas or liquid)."	},
		{1, "EFFECTOR", 0, "Effector", "Use guiding (effector) objects to create fluid guiding (guiding objects should be animated and baked once set up completely)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_guide_source_ = {
		{&rna_FluidDomainSettings_guide_parent, 	&rna_FluidDomainSettings_guide_vel_factor,
		-1, "guide_source", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Guiding source",
		"Choose where to get guiding velocities from",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, guide_source), RawPropertyType(1), nullptr},
		FluidDomainSettings_guide_source_get, FluidDomainSettings_guide_source_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_guide_source_items, 2, 0
	};

	rna_FluidDomainSettings_guide_parent_ = {
		{&rna_FluidDomainSettings_use_guide, 	&rna_FluidDomainSettings_guide_source,
		-1, "guide_parent", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Use velocities from this object for the guiding effect (object needs to have fluid modifier and be of type domain))",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_guidingcache_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_guide_parent_get, FluidDomainSettings_guide_parent_set, nullptr, nullptr,RNA_Object
	};

	rna_FluidDomainSettings_use_guide_ = {
		{&rna_FluidDomainSettings_cache_frame_start, 	&rna_FluidDomainSettings_guide_parent,
		-1, "use_guide", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Guiding",
		"Enable fluid guiding",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_update, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_guide_get, FluidDomainSettings_use_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_cache_frame_start_ = {
		{&rna_FluidDomainSettings_cache_frame_end, 	&rna_FluidDomainSettings_use_guide,
		-1, "cache_frame_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start",
		"Frame on which the simulation starts (first frame baked)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_frame_start_get, FluidDomainSettings_cache_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_cache_frame_end_ = {
		{&rna_FluidDomainSettings_cache_frame_offset, 	&rna_FluidDomainSettings_cache_frame_start,
		-1, "cache_frame_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "End",
		"Frame on which the simulation stops (last frame baked)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_frame_end_get, FluidDomainSettings_cache_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 250, nullptr
	};

	rna_FluidDomainSettings_cache_frame_offset_ = {
		{&rna_FluidDomainSettings_cache_frame_pause_data, 	&rna_FluidDomainSettings_cache_frame_end,
		-1, "cache_frame_offset", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Frame offset that is used when loading the simulation from the cache. It is not considered when baking the simulation, only when loading it.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, cache_frame_offset), RawPropertyType(0), nullptr},
		FluidDomainSettings_cache_frame_offset_get, FluidDomainSettings_cache_frame_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_cache_frame_pause_data_ = {
		{&rna_FluidDomainSettings_cache_frame_pause_noise, 	&rna_FluidDomainSettings_cache_frame_offset,
		-1, "cache_frame_pause_data", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "cache_frame_pause_data",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, cache_frame_pause_data), RawPropertyType(0), nullptr},
		FluidDomainSettings_cache_frame_pause_data_get, FluidDomainSettings_cache_frame_pause_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_cache_frame_pause_noise_ = {
		{&rna_FluidDomainSettings_cache_frame_pause_mesh, 	&rna_FluidDomainSettings_cache_frame_pause_data,
		-1, "cache_frame_pause_noise", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "cache_frame_pause_noise",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, cache_frame_pause_noise), RawPropertyType(0), nullptr},
		FluidDomainSettings_cache_frame_pause_noise_get, FluidDomainSettings_cache_frame_pause_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_cache_frame_pause_mesh_ = {
		{&rna_FluidDomainSettings_cache_frame_pause_particles, 	&rna_FluidDomainSettings_cache_frame_pause_noise,
		-1, "cache_frame_pause_mesh", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "cache_frame_pause_mesh",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, cache_frame_pause_mesh), RawPropertyType(0), nullptr},
		FluidDomainSettings_cache_frame_pause_mesh_get, FluidDomainSettings_cache_frame_pause_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_cache_frame_pause_particles_ = {
		{&rna_FluidDomainSettings_cache_frame_pause_guide, 	&rna_FluidDomainSettings_cache_frame_pause_mesh,
		-1, "cache_frame_pause_particles", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "cache_frame_pause_particles",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, cache_frame_pause_particles), RawPropertyType(0), nullptr},
		FluidDomainSettings_cache_frame_pause_particles_get, FluidDomainSettings_cache_frame_pause_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_cache_frame_pause_guide_ = {
		{&rna_FluidDomainSettings_cache_mesh_format, 	&rna_FluidDomainSettings_cache_frame_pause_particles,
		-1, "cache_frame_pause_guide", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "cache_frame_pause_guide",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, cache_frame_pause_guide), RawPropertyType(0), nullptr},
		FluidDomainSettings_cache_frame_pause_guide_get, FluidDomainSettings_cache_frame_pause_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_cache_mesh_format_items[4] = {
		{1, "UNI", 0, "Uni Cache", "Uni file format (.uni)"	},
		{2, "OPENVDB", 0, "OpenVDB", "OpenVDB file format (.vdb)"	},
		{4, "RAW", 0, "Raw Cache", "Raw file format (.raw)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_cache_mesh_format_ = {
		{&rna_FluidDomainSettings_cache_data_format, 	&rna_FluidDomainSettings_cache_frame_pause_guide,
		-1, "cache_mesh_format", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Format",
		"Select the file format to be used for caching surface data",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_meshcache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_mesh_format_get, FluidDomainSettings_cache_mesh_format_set, rna_Fluid_cachetype_mesh_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_cache_mesh_format_items, 3, 1
	};

	static const EnumPropertyItem rna_FluidDomainSettings_cache_data_format_items[4] = {
		{1, "UNI", 0, "Uni Cache", "Uni file format (.uni)"	},
		{2, "OPENVDB", 0, "OpenVDB", "OpenVDB file format (.vdb)"	},
		{4, "RAW", 0, "Raw Cache", "Raw file format (.raw)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_cache_data_format_ = {
		{&rna_FluidDomainSettings_cache_particle_format, 	&rna_FluidDomainSettings_cache_mesh_format,
		-1, "cache_data_format", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Format",
		"Select the file format to be used for caching volumetric data",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_data_format_get, FluidDomainSettings_cache_data_format_set, rna_Fluid_cachetype_volume_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_cache_data_format_items, 3, 2
	};

	static const EnumPropertyItem rna_FluidDomainSettings_cache_particle_format_items[4] = {
		{1, "UNI", 0, "Uni Cache", "Uni file format (.uni)"	},
		{2, "OPENVDB", 0, "OpenVDB", "OpenVDB file format (.vdb)"	},
		{4, "RAW", 0, "Raw Cache", "Raw file format (.raw)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_cache_particle_format_ = {
		{&rna_FluidDomainSettings_cache_noise_format, 	&rna_FluidDomainSettings_cache_data_format,
		-1, "cache_particle_format", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Format",
		"Select the file format to be used for caching particle data",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_particlescache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_particle_format_get, FluidDomainSettings_cache_particle_format_set, rna_Fluid_cachetype_particle_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_cache_particle_format_items, 3, 2
	};

	static const EnumPropertyItem rna_FluidDomainSettings_cache_noise_format_items[4] = {
		{1, "UNI", 0, "Uni Cache", "Uni file format (.uni)"	},
		{2, "OPENVDB", 0, "OpenVDB", "OpenVDB file format (.vdb)"	},
		{4, "RAW", 0, "Raw Cache", "Raw file format (.raw)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_cache_noise_format_ = {
		{&rna_FluidDomainSettings_cache_type, 	&rna_FluidDomainSettings_cache_particle_format,
		-1, "cache_noise_format", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Format",
		"Select the file format to be used for caching noise data",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_noisecache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_noise_format_get, FluidDomainSettings_cache_noise_format_set, rna_Fluid_cachetype_volume_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_cache_noise_format_items, 3, 2
	};

	static const EnumPropertyItem rna_FluidDomainSettings_cache_type_items[4] = {
		{0, "REPLAY", 0, "Replay", "Use the timeline to bake the scene"	},
		{1, "MODULAR", 0, "Modular", "Bake every stage of the simulation separately"	},
		{2, "ALL", 0, "All", "Bake all simulation settings at once"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_cache_type_ = {
		{&rna_FluidDomainSettings_cache_resumable, 	&rna_FluidDomainSettings_cache_noise_format,
		-1, "cache_type", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"Change the cache type of the simulation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_data_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_type_get, FluidDomainSettings_cache_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_cache_type_items, 3, 0
	};

	rna_FluidDomainSettings_cache_resumable_ = {
		{&rna_FluidDomainSettings_cache_directory, 	&rna_FluidDomainSettings_cache_type,
		-1, "cache_resumable", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Resumable",
		"Additional data will be saved so that the bake jobs can be resumed after pausing. Because more data will be written to disk it is recommended to avoid enabling this option when baking at high resolutions.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_resumable_get, FluidDomainSettings_cache_resumable_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_cache_directory_ = {
		{&rna_FluidDomainSettings_is_cache_baking_data, 	&rna_FluidDomainSettings_cache_resumable,
		-1, "cache_directory", 294913, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cache directory",
		"Directory that contains fluid cache files",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {1024, 0, 0}, 0,
		rna_Fluid_update, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_cache_directory_get, FluidDomainSettings_cache_directory_length, FluidDomainSettings_cache_directory_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_FluidDomainSettings_is_cache_baking_data_ = {
		{&rna_FluidDomainSettings_has_cache_baked_data, 	&rna_FluidDomainSettings_cache_directory,
		-1, "is_cache_baking_data", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "is_cache_baking_data",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_is_cache_baking_data_get, FluidDomainSettings_is_cache_baking_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_has_cache_baked_data_ = {
		{&rna_FluidDomainSettings_is_cache_baking_noise, 	&rna_FluidDomainSettings_is_cache_baking_data,
		-1, "has_cache_baked_data", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "has_cache_baked_data",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_has_cache_baked_data_get, FluidDomainSettings_has_cache_baked_data_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_is_cache_baking_noise_ = {
		{&rna_FluidDomainSettings_has_cache_baked_noise, 	&rna_FluidDomainSettings_has_cache_baked_data,
		-1, "is_cache_baking_noise", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "is_cache_baking_noise",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_is_cache_baking_noise_get, FluidDomainSettings_is_cache_baking_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_has_cache_baked_noise_ = {
		{&rna_FluidDomainSettings_is_cache_baking_mesh, 	&rna_FluidDomainSettings_is_cache_baking_noise,
		-1, "has_cache_baked_noise", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "has_cache_baked_noise",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_has_cache_baked_noise_get, FluidDomainSettings_has_cache_baked_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_is_cache_baking_mesh_ = {
		{&rna_FluidDomainSettings_has_cache_baked_mesh, 	&rna_FluidDomainSettings_has_cache_baked_noise,
		-1, "is_cache_baking_mesh", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "is_cache_baking_mesh",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_is_cache_baking_mesh_get, FluidDomainSettings_is_cache_baking_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_has_cache_baked_mesh_ = {
		{&rna_FluidDomainSettings_is_cache_baking_particles, 	&rna_FluidDomainSettings_is_cache_baking_mesh,
		-1, "has_cache_baked_mesh", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "has_cache_baked_mesh",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_has_cache_baked_mesh_get, FluidDomainSettings_has_cache_baked_mesh_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_is_cache_baking_particles_ = {
		{&rna_FluidDomainSettings_has_cache_baked_particles, 	&rna_FluidDomainSettings_has_cache_baked_mesh,
		-1, "is_cache_baking_particles", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "is_cache_baking_particles",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_is_cache_baking_particles_get, FluidDomainSettings_is_cache_baking_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_has_cache_baked_particles_ = {
		{&rna_FluidDomainSettings_is_cache_baking_guide, 	&rna_FluidDomainSettings_is_cache_baking_particles,
		-1, "has_cache_baked_particles", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "has_cache_baked_particles",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_has_cache_baked_particles_get, FluidDomainSettings_has_cache_baked_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_is_cache_baking_guide_ = {
		{&rna_FluidDomainSettings_has_cache_baked_guide, 	&rna_FluidDomainSettings_has_cache_baked_particles,
		-1, "is_cache_baking_guide", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "is_cache_baking_guide",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_is_cache_baking_guide_get, FluidDomainSettings_is_cache_baking_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_has_cache_baked_guide_ = {
		{&rna_FluidDomainSettings_is_cache_baking_any, 	&rna_FluidDomainSettings_is_cache_baking_guide,
		-1, "has_cache_baked_guide", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "has_cache_baked_guide",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_has_cache_baked_guide_get, FluidDomainSettings_has_cache_baked_guide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_is_cache_baking_any_ = {
		{&rna_FluidDomainSettings_has_cache_baked_any, 	&rna_FluidDomainSettings_has_cache_baked_guide,
		-1, "is_cache_baking_any", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "is_cache_baking_any",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_is_cache_baking_any_get, FluidDomainSettings_is_cache_baking_any_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_has_cache_baked_any_ = {
		{&rna_FluidDomainSettings_export_manta_script, 	&rna_FluidDomainSettings_is_cache_baking_any,
		-1, "has_cache_baked_any", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "has_cache_baked_any",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_has_cache_baked_any_get, FluidDomainSettings_has_cache_baked_any_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_export_manta_script_ = {
		{&rna_FluidDomainSettings_openvdb_cache_compress_type, 	&rna_FluidDomainSettings_has_cache_baked_any,
		-1, "export_manta_script", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Export Mantaflow Script",
		"Generate and export Mantaflow script from current domain settings during bake. This is only needed if you plan to analyze the cache (e.g. view grids, velocity vectors, particles) in Mantaflow directly (outside of Blender) after baking the simulation.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_export_manta_script_get, FluidDomainSettings_export_manta_script_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_openvdb_cache_compress_type_items[3] = {
		{1, "ZIP", 0, "Zip", "Effective but slow compression"	},
		{2, "NONE", 0, "None", "Do not use any compression"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_openvdb_cache_compress_type_ = {
		{&rna_FluidDomainSettings_openvdb_data_depth, 	&rna_FluidDomainSettings_export_manta_script,
		-1, "openvdb_cache_compress_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Compression",
		"Compression method to be used",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, openvdb_compression), RawPropertyType(0), nullptr},
		FluidDomainSettings_openvdb_cache_compress_type_get, FluidDomainSettings_openvdb_cache_compress_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_openvdb_cache_compress_type_items, 2, 1
	};

	static const EnumPropertyItem rna_FluidDomainSettings_openvdb_data_depth_items[2] = {
		{0, "NONE", 0, "", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_openvdb_data_depth_ = {
		{&rna_FluidDomainSettings_time_scale, 	&rna_FluidDomainSettings_openvdb_cache_compress_type,
		-1, "openvdb_data_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Data Depth",
		"Bit depth for fluid particles and grids (lower bit values reduce file size)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, openvdb_data_depth), RawPropertyType(2), nullptr},
		FluidDomainSettings_openvdb_data_depth_get, FluidDomainSettings_openvdb_data_depth_set, rna_Fluid_data_depth_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_openvdb_data_depth_items, 1, 0
	};

	rna_FluidDomainSettings_time_scale_ = {
		{&rna_FluidDomainSettings_use_adaptive_timesteps, 	&rna_FluidDomainSettings_openvdb_data_depth,
		-1, "time_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Time Scale",
		"Adjust simulation speed",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, time_scale), RawPropertyType(5), nullptr},
		FluidDomainSettings_time_scale_get, FluidDomainSettings_time_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_use_adaptive_timesteps_ = {
		{&rna_FluidDomainSettings_cfl_condition, 	&rna_FluidDomainSettings_time_scale,
		-1, "use_adaptive_timesteps", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Adaptive Time Steps",
		"Automatically decide when to perform multiple simulation steps per frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_adaptive_timesteps_get, FluidDomainSettings_use_adaptive_timesteps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_cfl_condition_ = {
		{&rna_FluidDomainSettings_timesteps_min, 	&rna_FluidDomainSettings_use_adaptive_timesteps,
		-1, "cfl_condition", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "CFL",
		"Maximal velocity per cell (greater CFL numbers will minimize the number of simulation steps and the computation time.)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, cfl_condition), RawPropertyType(5), nullptr},
		FluidDomainSettings_cfl_condition_get, FluidDomainSettings_cfl_condition_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	rna_FluidDomainSettings_timesteps_min_ = {
		{&rna_FluidDomainSettings_timesteps_max, 	&rna_FluidDomainSettings_cfl_condition,
		-1, "timesteps_min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Minimum",
		"Minimum number of simulation steps to perform for one frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, timesteps_minimum), RawPropertyType(0), nullptr},
		FluidDomainSettings_timesteps_min_get, FluidDomainSettings_timesteps_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 1, 100, 1, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_timesteps_max_ = {
		{&rna_FluidDomainSettings_use_slice, 	&rna_FluidDomainSettings_timesteps_min,
		-1, "timesteps_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Maximum",
		"Maximum number of simulation steps to perform for one frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_datacache_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, timesteps_maximum), RawPropertyType(0), nullptr},
		FluidDomainSettings_timesteps_max_get, FluidDomainSettings_timesteps_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 1, 100, 1, nullptr, nullptr, 4, nullptr
	};

	rna_FluidDomainSettings_use_slice_ = {
		{&rna_FluidDomainSettings_slice_axis, 	&rna_FluidDomainSettings_timesteps_max,
		-1, "use_slice", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Slice",
		"Perform a single slice of the domain object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_slice_get, FluidDomainSettings_use_slice_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_slice_axis_items[5] = {
		{0, "AUTO", 0, "Auto", "Adjust slice direction according to the view direction"	},
		{1, "X", 0, "X", "Slice along the X axis"	},
		{2, "Y", 0, "Y", "Slice along the Y axis"	},
		{3, "Z", 0, "Z", "Slice along the Z axis"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_slice_axis_ = {
		{&rna_FluidDomainSettings_slice_per_voxel, 	&rna_FluidDomainSettings_use_slice,
		-1, "slice_axis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Axis",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, slice_axis), RawPropertyType(2), nullptr},
		FluidDomainSettings_slice_axis_get, FluidDomainSettings_slice_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_slice_axis_items, 4, 0
	};

	rna_FluidDomainSettings_slice_per_voxel_ = {
		{&rna_FluidDomainSettings_slice_depth, 	&rna_FluidDomainSettings_slice_axis,
		-1, "slice_per_voxel", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Slice Per Voxel",
		"How many slices per voxel should be generated",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, slice_per_voxel), RawPropertyType(5), nullptr},
		FluidDomainSettings_slice_per_voxel_get, FluidDomainSettings_slice_per_voxel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 100.0f, 0.1000000015f, 1, nullptr, nullptr, 5.0f, nullptr
	};

	rna_FluidDomainSettings_slice_depth_ = {
		{&rna_FluidDomainSettings_display_thickness, 	&rna_FluidDomainSettings_slice_per_voxel,
		-1, "slice_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Position",
		"Position of the slice",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, slice_depth), RawPropertyType(5), nullptr},
		FluidDomainSettings_slice_depth_get, FluidDomainSettings_slice_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_FluidDomainSettings_display_thickness_ = {
		{&rna_FluidDomainSettings_display_interpolation, 	&rna_FluidDomainSettings_slice_depth,
		-1, "display_thickness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Thickness",
		"Thickness of smoke display in the viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, display_thickness), RawPropertyType(5), nullptr},
		FluidDomainSettings_display_thickness_get, FluidDomainSettings_display_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 100.0f, 0.0010000000f, 1000.0f, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_display_interpolation_items[4] = {
		{0, "LINEAR", 0, "Linear", "Good smoothness and speed"	},
		{1, "CUBIC", 0, "Cubic", "Smoothed high quality interpolation, but slower"	},
		{2, "CLOSEST", 0, "Closest", "No interpolation"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_display_interpolation_ = {
		{&rna_FluidDomainSettings_show_gridlines, 	&rna_FluidDomainSettings_display_thickness,
		-1, "display_interpolation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interpolation",
		"Interpolation method to use for smoke/fire volumes in solid mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, interp_method), RawPropertyType(2), nullptr},
		FluidDomainSettings_display_interpolation_get, FluidDomainSettings_display_interpolation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_display_interpolation_items, 3, 0
	};

	rna_FluidDomainSettings_show_gridlines_ = {
		{&rna_FluidDomainSettings_show_velocity, 	&rna_FluidDomainSettings_display_interpolation,
		-1, "show_gridlines", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gridlines",
		"Show gridlines",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, show_gridlines), RawPropertyType(3), nullptr},
		FluidDomainSettings_show_gridlines_get, FluidDomainSettings_show_gridlines_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_show_velocity_ = {
		{&rna_FluidDomainSettings_vector_display_type, 	&rna_FluidDomainSettings_show_gridlines,
		-1, "show_velocity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vector Display",
		"Visualize vector fields",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, draw_velocity), RawPropertyType(3), nullptr},
		FluidDomainSettings_show_velocity_get, FluidDomainSettings_show_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_vector_display_type_items[4] = {
		{0, "NEEDLE", 0, "Needle", "Display vectors as needles"	},
		{1, "STREAMLINE", 0, "Streamlines", "Display vectors as streamlines"	},
		{2, "MAC", 0, "MAC Grid", "Display vector field as MAC grid"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_vector_display_type_ = {
		{&rna_FluidDomainSettings_vector_field, 	&rna_FluidDomainSettings_show_velocity,
		-1, "vector_display_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, vector_draw_type), RawPropertyType(2), nullptr},
		FluidDomainSettings_vector_display_type_get, FluidDomainSettings_vector_display_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_vector_display_type_items, 3, 0
	};

	static const EnumPropertyItem rna_FluidDomainSettings_vector_field_items[4] = {
		{0, "FLUID_VELOCITY", 0, "Fluid Velocity", "Velocity field of the fluid domain"	},
		{1, "GUIDE_VELOCITY", 0, "Guide Velocity", "Guide velocity field of the fluid domain"	},
		{2, "FORCE", 0, "Force", "Force field of the fluid domain"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_vector_field_ = {
		{&rna_FluidDomainSettings_vector_scale_with_magnitude, 	&rna_FluidDomainSettings_vector_display_type,
		-1, "vector_field", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Field",
		"Vector field to be represented by the display vectors",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, vector_field), RawPropertyType(2), nullptr},
		FluidDomainSettings_vector_field_get, FluidDomainSettings_vector_field_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_vector_field_items, 3, 0
	};

	rna_FluidDomainSettings_vector_scale_with_magnitude_ = {
		{&rna_FluidDomainSettings_vector_show_mac_x, 	&rna_FluidDomainSettings_vector_field,
		-1, "vector_scale_with_magnitude", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Magnitude",
		"Scale vectors with their magnitudes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, vector_scale_with_magnitude), RawPropertyType(3), nullptr},
		FluidDomainSettings_vector_scale_with_magnitude_get, FluidDomainSettings_vector_scale_with_magnitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidDomainSettings_vector_show_mac_x_ = {
		{&rna_FluidDomainSettings_vector_show_mac_y, 	&rna_FluidDomainSettings_vector_scale_with_magnitude,
		-1, "vector_show_mac_x", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "X",
		"Show X-component of MAC Grid",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_vector_show_mac_x_get, FluidDomainSettings_vector_show_mac_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_vector_show_mac_y_ = {
		{&rna_FluidDomainSettings_vector_show_mac_z, 	&rna_FluidDomainSettings_vector_show_mac_x,
		-1, "vector_show_mac_y", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y",
		"Show Y-component of MAC Grid",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_vector_show_mac_y_get, FluidDomainSettings_vector_show_mac_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_vector_show_mac_z_ = {
		{&rna_FluidDomainSettings_vector_scale, 	&rna_FluidDomainSettings_vector_show_mac_y,
		-1, "vector_show_mac_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z",
		"Show Z-component of MAC Grid",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_vector_show_mac_z_get, FluidDomainSettings_vector_show_mac_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidDomainSettings_vector_scale_ = {
		{&rna_FluidDomainSettings_use_color_ramp, 	&rna_FluidDomainSettings_vector_show_mac_z,
		-1, "vector_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Multiplier for scaling the vectors",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, vector_scale), RawPropertyType(5), nullptr},
		FluidDomainSettings_vector_scale_get, FluidDomainSettings_vector_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 1000.0f, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_use_color_ramp_ = {
		{&rna_FluidDomainSettings_color_ramp_field, 	&rna_FluidDomainSettings_vector_scale,
		-1, "use_color_ramp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grid Display",
		"Render a simulation field while mapping its voxels values to the colors of a ramp or using a predefined color code",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_use_color_ramp_get, FluidDomainSettings_use_color_ramp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_color_ramp_field_items[2] = {
		{0, "NONE", 0, "", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_color_ramp_field_ = {
		{&rna_FluidDomainSettings_color_ramp_field_scale, 	&rna_FluidDomainSettings_use_color_ramp,
		-1, "color_ramp_field", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Field",
		"Simulation field to color map",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, coba_field), RawPropertyType(2), nullptr},
		FluidDomainSettings_color_ramp_field_get, FluidDomainSettings_color_ramp_field_set, rna_Fluid_cobafield_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_color_ramp_field_items, 1, 0
	};

	rna_FluidDomainSettings_color_ramp_field_scale_ = {
		{&rna_FluidDomainSettings_color_ramp, 	&rna_FluidDomainSettings_color_ramp_field,
		-1, "color_ramp_field_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Multiplier for scaling the selected field to color map",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, grid_scale), RawPropertyType(5), nullptr},
		FluidDomainSettings_color_ramp_field_scale_get, FluidDomainSettings_color_ramp_field_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 1000.0f, 0.0010000000f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidDomainSettings_color_ramp_ = {
		{&rna_FluidDomainSettings_clipping, 	&rna_FluidDomainSettings_color_ramp_field_scale,
		-1, "color_ramp", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Ramp",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidDomainSettings_color_ramp_get, nullptr, nullptr, nullptr,RNA_ColorRamp
	};

	rna_FluidDomainSettings_clipping_ = {
		{&rna_FluidDomainSettings_gridlines_color_field, 	&rna_FluidDomainSettings_color_ramp,
		-1, "clipping", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clipping",
		"Value under which voxels are considered empty space to optimize rendering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, clipping), RawPropertyType(5), nullptr},
		FluidDomainSettings_clipping_get, FluidDomainSettings_clipping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.1000000015f, 6, nullptr, nullptr, 0.0000010000f, nullptr
	};

	static const EnumPropertyItem rna_FluidDomainSettings_gridlines_color_field_items[4] = {
		{0, "NONE", 0, "None", "None"	},
		{1, "FLAGS", 0, "Flags", "Flag grid of the fluid domain"	},
		{2, "RANGE", 0, "Highlight Range", "Highlight the voxels with values of the color mapped field within the range"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_gridlines_color_field_ = {
		{&rna_FluidDomainSettings_gridlines_lower_bound, 	&rna_FluidDomainSettings_clipping,
		-1, "gridlines_color_field", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color Gridlines",
		"Simulation field to color map onto gridlines",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, gridlines_color_field), RawPropertyType(2), nullptr},
		FluidDomainSettings_gridlines_color_field_get, FluidDomainSettings_gridlines_color_field_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_gridlines_color_field_items, 3, 0
	};

	rna_FluidDomainSettings_gridlines_lower_bound_ = {
		{&rna_FluidDomainSettings_gridlines_upper_bound, 	&rna_FluidDomainSettings_gridlines_color_field,
		-1, "gridlines_lower_bound", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lower Bound",
		"Lower bound of the highlighting range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, gridlines_lower_bound), RawPropertyType(5), nullptr},
		FluidDomainSettings_gridlines_lower_bound_get, FluidDomainSettings_gridlines_lower_bound_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FluidDomainSettings_gridlines_upper_bound_ = {
		{&rna_FluidDomainSettings_gridlines_range_color, 	&rna_FluidDomainSettings_gridlines_lower_bound,
		-1, "gridlines_upper_bound", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Upper Bound",
		"Upper bound of the highlighting range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, gridlines_upper_bound), RawPropertyType(5), nullptr},
		FluidDomainSettings_gridlines_upper_bound_get, FluidDomainSettings_gridlines_upper_bound_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 0.1000000015f, 6, nullptr, nullptr, 1.0f, nullptr
	};

	static float rna_FluidDomainSettings_gridlines_range_color_default[4] = {
		1.0f,
		0.0f,
		0.0f,
		1.0f
	};
	rna_FluidDomainSettings_gridlines_range_color_ = {
		{&rna_FluidDomainSettings_gridlines_cell_filter, 	&rna_FluidDomainSettings_gridlines_upper_bound,
		-1, "gridlines_range_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"Color used to highlight the range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, gridlines_range_color), RawPropertyType(5), nullptr},
		nullptr, nullptr, FluidDomainSettings_gridlines_range_color_get, FluidDomainSettings_gridlines_range_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FluidDomainSettings_gridlines_range_color_default
	};

	static const EnumPropertyItem rna_FluidDomainSettings_gridlines_cell_filter_items[7] = {
		{0, "NONE", 0, "None", "Highlight the cells regardless of their type"	},
		{1, "FLUID", 0, "Fluid", "Highlight only the cells of type Fluid"	},
		{2, "OBSTACLE", 0, "Obstacle", "Highlight only the cells of type Obstacle"	},
		{4, "EMPTY", 0, "Empty", "Highlight only the cells of type Empty"	},
		{8, "INFLOW", 0, "Inflow", "Highlight only the cells of type Inflow"	},
		{16, "OUTFLOW", 0, "Outflow", "Highlight only the cells of type Outflow"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidDomainSettings_gridlines_cell_filter_ = {
		{&rna_FluidDomainSettings_velocity_scale, 	&rna_FluidDomainSettings_gridlines_range_color,
		-1, "gridlines_cell_filter", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Cell Type",
		"Cell type to be highlighted",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, gridlines_cell_filter), RawPropertyType(2), nullptr},
		FluidDomainSettings_gridlines_cell_filter_get, FluidDomainSettings_gridlines_cell_filter_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidDomainSettings_gridlines_cell_filter_items, 6, 0
	};

	rna_FluidDomainSettings_velocity_scale_ = {
		{nullptr, 	&rna_FluidDomainSettings_gridlines_cell_filter,
		-1, "velocity_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Velocity Scale",
		"Factor to control the amount of motion blur",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_update, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidDomainSettings, velocity_scale), RawPropertyType(5), nullptr},
		FluidDomainSettings_velocity_scale_get, FluidDomainSettings_velocity_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	StructRNA *srna = RNA_FluidDomainSettings;
	srna->cont.properties = {&rna_FluidDomainSettings_rna_properties, &rna_FluidDomainSettings_velocity_scale};
	srna->identifier = "FluidDomainSettings";
	srna->flag = 516;
	srna->name = "Domain Settings";
	srna->description = "Fluid domain settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FluidDomainSettings_rna_properties;
	srna->path = rna_FluidDomainSettings_path;
};

/* Flow Settings */
static CollectionPropertyRNA rna_FluidFlowSettings_rna_properties_;
PropertyRNA &rna_FluidFlowSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_rna_properties_);

static PointerPropertyRNA rna_FluidFlowSettings_rna_type_;
PropertyRNA &rna_FluidFlowSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_rna_type_);

static FloatPropertyRNA rna_FluidFlowSettings_density_;
PropertyRNA &rna_FluidFlowSettings_density = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_density_);

static FloatPropertyRNA rna_FluidFlowSettings_smoke_color_;
PropertyRNA &rna_FluidFlowSettings_smoke_color = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_smoke_color_);

static FloatPropertyRNA rna_FluidFlowSettings_fuel_amount_;
PropertyRNA &rna_FluidFlowSettings_fuel_amount = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_fuel_amount_);

static FloatPropertyRNA rna_FluidFlowSettings_temperature_;
PropertyRNA &rna_FluidFlowSettings_temperature = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_temperature_);

static PointerPropertyRNA rna_FluidFlowSettings_particle_system_;
PropertyRNA &rna_FluidFlowSettings_particle_system = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_particle_system_);

static EnumPropertyRNA rna_FluidFlowSettings_flow_type_;
PropertyRNA &rna_FluidFlowSettings_flow_type = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_flow_type_);

static EnumPropertyRNA rna_FluidFlowSettings_flow_behavior_;
PropertyRNA &rna_FluidFlowSettings_flow_behavior = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_flow_behavior_);

static EnumPropertyRNA rna_FluidFlowSettings_flow_source_;
PropertyRNA &rna_FluidFlowSettings_flow_source = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_flow_source_);

static BoolPropertyRNA rna_FluidFlowSettings_use_absolute_;
PropertyRNA &rna_FluidFlowSettings_use_absolute = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_use_absolute_);

static BoolPropertyRNA rna_FluidFlowSettings_use_initial_velocity_;
PropertyRNA &rna_FluidFlowSettings_use_initial_velocity = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_use_initial_velocity_);

static FloatPropertyRNA rna_FluidFlowSettings_velocity_factor_;
PropertyRNA &rna_FluidFlowSettings_velocity_factor = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_velocity_factor_);

static FloatPropertyRNA rna_FluidFlowSettings_velocity_normal_;
PropertyRNA &rna_FluidFlowSettings_velocity_normal = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_velocity_normal_);

static FloatPropertyRNA rna_FluidFlowSettings_velocity_random_;
PropertyRNA &rna_FluidFlowSettings_velocity_random = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_velocity_random_);

static FloatPropertyRNA rna_FluidFlowSettings_velocity_coord_;
PropertyRNA &rna_FluidFlowSettings_velocity_coord = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_velocity_coord_);

static FloatPropertyRNA rna_FluidFlowSettings_volume_density_;
PropertyRNA &rna_FluidFlowSettings_volume_density = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_volume_density_);

static FloatPropertyRNA rna_FluidFlowSettings_surface_distance_;
PropertyRNA &rna_FluidFlowSettings_surface_distance = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_surface_distance_);

static BoolPropertyRNA rna_FluidFlowSettings_use_plane_init_;
PropertyRNA &rna_FluidFlowSettings_use_plane_init = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_use_plane_init_);

static FloatPropertyRNA rna_FluidFlowSettings_particle_size_;
PropertyRNA &rna_FluidFlowSettings_particle_size = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_particle_size_);

static BoolPropertyRNA rna_FluidFlowSettings_use_particle_size_;
PropertyRNA &rna_FluidFlowSettings_use_particle_size = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_use_particle_size_);

static BoolPropertyRNA rna_FluidFlowSettings_use_inflow_;
PropertyRNA &rna_FluidFlowSettings_use_inflow = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_use_inflow_);

static IntPropertyRNA rna_FluidFlowSettings_subframes_;
PropertyRNA &rna_FluidFlowSettings_subframes = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_subframes_);

static StringPropertyRNA rna_FluidFlowSettings_density_vertex_group_;
PropertyRNA &rna_FluidFlowSettings_density_vertex_group = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_density_vertex_group_);

static BoolPropertyRNA rna_FluidFlowSettings_use_texture_;
PropertyRNA &rna_FluidFlowSettings_use_texture = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_use_texture_);

static EnumPropertyRNA rna_FluidFlowSettings_texture_map_type_;
PropertyRNA &rna_FluidFlowSettings_texture_map_type = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_texture_map_type_);

static StringPropertyRNA rna_FluidFlowSettings_uv_layer_;
PropertyRNA &rna_FluidFlowSettings_uv_layer = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_uv_layer_);

static PointerPropertyRNA rna_FluidFlowSettings_noise_texture_;
PropertyRNA &rna_FluidFlowSettings_noise_texture = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_noise_texture_);

static FloatPropertyRNA rna_FluidFlowSettings_texture_size_;
PropertyRNA &rna_FluidFlowSettings_texture_size = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_texture_size_);

static FloatPropertyRNA rna_FluidFlowSettings_texture_offset_;
PropertyRNA &rna_FluidFlowSettings_texture_offset = reinterpret_cast<PropertyRNA &>(rna_FluidFlowSettings_texture_offset_);

StructRNA *RNA_FluidFlowSettings;
void register_struct_FluidFlowSettings(BlenderRNA &brna)
{
	rna_FluidFlowSettings_rna_properties_ = {
		{&rna_FluidFlowSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_rna_properties_begin, FluidFlowSettings_rna_properties_next, FluidFlowSettings_rna_properties_end, FluidFlowSettings_rna_properties_get, nullptr, nullptr, FluidFlowSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FluidFlowSettings_rna_type_ = {
		{&rna_FluidFlowSettings_density, 	&rna_FluidFlowSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FluidFlowSettings_density_ = {
		{&rna_FluidFlowSettings_smoke_color, 	&rna_FluidFlowSettings_rna_type,
		-1, "density", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Density",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, density), RawPropertyType(5), nullptr},
		FluidFlowSettings_density_get, FluidFlowSettings_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 4, nullptr, nullptr, 1.0f, nullptr
	};

	static float rna_FluidFlowSettings_smoke_color_default[3] = {
		0.6999999881f,
		0.6999999881f,
		0.6999999881f
	};
	rna_FluidFlowSettings_smoke_color_ = {
		{&rna_FluidFlowSettings_fuel_amount, 	&rna_FluidFlowSettings_density,
		-1, "smoke_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Smoke Color",
		"Color of smoke",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, FluidFlowSettings_smoke_color_get, FluidFlowSettings_smoke_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FluidFlowSettings_smoke_color_default
	};

	rna_FluidFlowSettings_fuel_amount_ = {
		{&rna_FluidFlowSettings_temperature, 	&rna_FluidFlowSettings_smoke_color,
		-1, "fuel_amount", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Flame Rate",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, fuel_amount), RawPropertyType(5), nullptr},
		FluidFlowSettings_fuel_amount_get, FluidFlowSettings_fuel_amount_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 5.0f, 0.0f, 10.0f, 1.0f, 4, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidFlowSettings_temperature_ = {
		{&rna_FluidFlowSettings_particle_system, 	&rna_FluidFlowSettings_fuel_amount,
		-1, "temperature", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Temperature Difference",
		"Temperature difference to ambient temperature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, temperature), RawPropertyType(5), nullptr},
		FluidFlowSettings_temperature_get, FluidFlowSettings_temperature_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 1, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidFlowSettings_particle_system_ = {
		{&rna_FluidFlowSettings_flow_type, 	&rna_FluidFlowSettings_temperature,
		-1, "particle_system", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Particle Systems",
		"Particle systems emitted from the object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_reset_dependency, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_particle_system_get, FluidFlowSettings_particle_system_set, nullptr, nullptr,RNA_ParticleSystem
	};

	static const EnumPropertyItem rna_FluidFlowSettings_flow_type_items[5] = {
		{1, "SMOKE", 0, "Smoke", "Add smoke"	},
		{3, "BOTH", 0, "Fire + Smoke", "Add fire and smoke"	},
		{2, "FIRE", 0, "Fire", "Add fire"	},
		{4, "LIQUID", 0, "Liquid", "Add liquid"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidFlowSettings_flow_type_ = {
		{&rna_FluidFlowSettings_flow_behavior, 	&rna_FluidFlowSettings_particle_system,
		-1, "flow_type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flow Type",
		"Change type of fluid in the simulation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_flow_type_get, FluidFlowSettings_flow_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidFlowSettings_flow_type_items, 4, 1
	};

	static const EnumPropertyItem rna_FluidFlowSettings_flow_behavior_items[4] = {
		{0, "INFLOW", 0, "Inflow", "Add fluid to simulation"	},
		{1, "OUTFLOW", 0, "Outflow", "Delete fluid from simulation"	},
		{2, "GEOMETRY", 0, "Geometry", "Only use given geometry for fluid"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidFlowSettings_flow_behavior_ = {
		{&rna_FluidFlowSettings_flow_source, 	&rna_FluidFlowSettings_flow_type,
		-1, "flow_behavior", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Flow Behavior",
		"Change flow behavior in the simulation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, behavior), RawPropertyType(1), nullptr},
		FluidFlowSettings_flow_behavior_get, FluidFlowSettings_flow_behavior_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidFlowSettings_flow_behavior_items, 3, 2
	};

	static const EnumPropertyItem rna_FluidFlowSettings_flow_source_items[2] = {
		{0, "NONE", 0, "", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidFlowSettings_flow_source_ = {
		{&rna_FluidFlowSettings_use_absolute, 	&rna_FluidFlowSettings_flow_behavior,
		-1, "flow_source", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Source",
		"Change how fluid is emitted",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_flow_source_get, FluidFlowSettings_flow_source_set, rna_Fluid_flowsource_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidFlowSettings_flow_source_items, 1, 0
	};

	rna_FluidFlowSettings_use_absolute_ = {
		{&rna_FluidFlowSettings_use_initial_velocity, 	&rna_FluidFlowSettings_flow_source,
		-1, "use_absolute", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Density",
		"Only allow given density value in emitter area and will not add up",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_use_absolute_get, FluidFlowSettings_use_absolute_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidFlowSettings_use_initial_velocity_ = {
		{&rna_FluidFlowSettings_velocity_factor, 	&rna_FluidFlowSettings_use_absolute,
		-1, "use_initial_velocity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Initial Velocity",
		"Fluid has some initial velocity when it is emitted",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_use_initial_velocity_get, FluidFlowSettings_use_initial_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidFlowSettings_velocity_factor_ = {
		{&rna_FluidFlowSettings_velocity_normal, 	&rna_FluidFlowSettings_use_initial_velocity,
		-1, "velocity_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Source",
		"Multiplier of source velocity passed to fluid (source velocity is non-zero only if object is moving)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, vel_multi), RawPropertyType(5), nullptr},
		FluidFlowSettings_velocity_factor_get, FluidFlowSettings_velocity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -100.0f, 100.0f, 0.0500000007f, 5, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidFlowSettings_velocity_normal_ = {
		{&rna_FluidFlowSettings_velocity_random, 	&rna_FluidFlowSettings_velocity_factor,
		-1, "velocity_normal", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Normal",
		"Amount of normal directional velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, vel_normal), RawPropertyType(5), nullptr},
		FluidFlowSettings_velocity_normal_get, FluidFlowSettings_velocity_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -2.0f, 2.0f, -100.0f, 100.0f, 0.0500000007f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FluidFlowSettings_velocity_random_ = {
		{&rna_FluidFlowSettings_velocity_coord, 	&rna_FluidFlowSettings_velocity_normal,
		-1, "velocity_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random",
		"Amount of random velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, vel_random), RawPropertyType(5), nullptr},
		FluidFlowSettings_velocity_random_get, FluidFlowSettings_velocity_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 10.0f, 0.0500000007f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_FluidFlowSettings_velocity_coord_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_FluidFlowSettings_velocity_coord_ = {
		{&rna_FluidFlowSettings_volume_density, 	&rna_FluidFlowSettings_velocity_random,
		-1, "velocity_coord", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Initial",
		"Additional initial velocity in X, Y and Z direction (added to source velocity)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, vel_coord), RawPropertyType(5), nullptr},
		nullptr, nullptr, FluidFlowSettings_velocity_coord_get, FluidFlowSettings_velocity_coord_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_FluidFlowSettings_velocity_coord_default
	};

	rna_FluidFlowSettings_volume_density_ = {
		{&rna_FluidFlowSettings_surface_distance, 	&rna_FluidFlowSettings_velocity_coord,
		-1, "volume_density", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Volume Emission",
		"Controls fluid emission from within the mesh (higher value results in greater emissions from inside the mesh)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, volume_density), RawPropertyType(5), nullptr},
		FluidFlowSettings_volume_density_get, FluidFlowSettings_volume_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0500000007f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FluidFlowSettings_surface_distance_ = {
		{&rna_FluidFlowSettings_use_plane_init, 	&rna_FluidFlowSettings_volume_density,
		-1, "surface_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Surface Emission",
		"Height (in domain grid units) of fluid emission above the mesh surface. Higher values result in emission further away from the mesh surface. If this value and the emitter size are smaller than the domain grid unit, fluid will not be created",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, surface_distance), RawPropertyType(5), nullptr},
		FluidFlowSettings_surface_distance_get, FluidFlowSettings_surface_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 0.0500000007f, 5, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidFlowSettings_use_plane_init_ = {
		{&rna_FluidFlowSettings_particle_size, 	&rna_FluidFlowSettings_surface_distance,
		-1, "use_plane_init", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Planar",
		"Treat this object as a planar and unclosed mesh. Fluid will only be emitted from the mesh surface and based on the surface emission value.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_use_plane_init_get, FluidFlowSettings_use_plane_init_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidFlowSettings_particle_size_ = {
		{&rna_FluidFlowSettings_use_particle_size, 	&rna_FluidFlowSettings_use_plane_init,
		-1, "particle_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Particle size in simulation cells",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, particle_size), RawPropertyType(5), nullptr},
		FluidFlowSettings_particle_size_get, FluidFlowSettings_particle_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.5000000000f, 5.0f, 0.1000000015f, FLT_MAX, 0.0500000007f, 5, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidFlowSettings_use_particle_size_ = {
		{&rna_FluidFlowSettings_use_inflow, 	&rna_FluidFlowSettings_particle_size,
		-1, "use_particle_size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Set Size",
		"Set particle size in simulation cells or use nearest cell",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_use_particle_size_get, FluidFlowSettings_use_particle_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidFlowSettings_use_inflow_ = {
		{&rna_FluidFlowSettings_subframes, 	&rna_FluidFlowSettings_use_particle_size,
		-1, "use_inflow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Flow",
		"Control when to apply fluid flow",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_use_inflow_get, FluidFlowSettings_use_inflow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidFlowSettings_subframes_ = {
		{&rna_FluidFlowSettings_density_vertex_group, 	&rna_FluidFlowSettings_use_inflow,
		-1, "subframes", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Subframes",
		"Number of additional samples to take between frames to improve quality of fast moving flows",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, subframes), RawPropertyType(0), nullptr},
		FluidFlowSettings_subframes_get, FluidFlowSettings_subframes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10, 0, 200, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FluidFlowSettings_density_vertex_group_ = {
		{&rna_FluidFlowSettings_use_texture, 	&rna_FluidFlowSettings_subframes,
		-1, "density_vertex_group", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group",
		"Name of vertex group which determines surface emission rate",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_density_vertex_group_get, FluidFlowSettings_density_vertex_group_length, FluidFlowSettings_density_vertex_group_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_FluidFlowSettings_use_texture_ = {
		{&rna_FluidFlowSettings_texture_map_type, 	&rna_FluidFlowSettings_density_vertex_group,
		-1, "use_texture", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Texture",
		"Use a texture to control emission strength",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_use_texture_get, FluidFlowSettings_use_texture_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FluidFlowSettings_texture_map_type_items[3] = {
		{0, "AUTO", 0, "Generated", "Generated coordinates centered to flow object"	},
		{1, "UV", 0, "UV", "Use UV layer for texture coordinates"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidFlowSettings_texture_map_type_ = {
		{&rna_FluidFlowSettings_uv_layer, 	&rna_FluidFlowSettings_use_texture,
		-1, "texture_map_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mapping",
		"Texture mapping type",
		0, "Texture",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, texture_type), RawPropertyType(1), nullptr},
		FluidFlowSettings_texture_map_type_get, FluidFlowSettings_texture_map_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidFlowSettings_texture_map_type_items, 2, 0
	};

	rna_FluidFlowSettings_uv_layer_ = {
		{&rna_FluidFlowSettings_noise_texture, 	&rna_FluidFlowSettings_texture_map_type,
		-1, "uv_layer", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV Map",
		"UV map name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {68, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_uv_layer_get, FluidFlowSettings_uv_layer_length, FluidFlowSettings_uv_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 68, ""
	};

	rna_FluidFlowSettings_noise_texture_ = {
		{&rna_FluidFlowSettings_texture_size, 	&rna_FluidFlowSettings_uv_layer,
		-1, "noise_texture", 8388801, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture",
		"Texture that controls emission strength",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidFlowSettings_noise_texture_get, FluidFlowSettings_noise_texture_set, nullptr, nullptr,RNA_Texture
	};

	rna_FluidFlowSettings_texture_size_ = {
		{&rna_FluidFlowSettings_texture_offset, 	&rna_FluidFlowSettings_noise_texture,
		-1, "texture_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Size of texture mapping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, texture_size), RawPropertyType(5), nullptr},
		FluidFlowSettings_texture_size_get, FluidFlowSettings_texture_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.1000000015f, 5.0f, 0.0099999998f, 10.0f, 0.0500000007f, 5, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FluidFlowSettings_texture_offset_ = {
		{nullptr, 	&rna_FluidFlowSettings_texture_size,
		-1, "texture_offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Z-offset of texture mapping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_flow_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidFlowSettings, texture_offset), RawPropertyType(5), nullptr},
		FluidFlowSettings_texture_offset_get, FluidFlowSettings_texture_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 200.0f, 0.0500000007f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_FluidFlowSettings;
	srna->cont.properties = {&rna_FluidFlowSettings_rna_properties, &rna_FluidFlowSettings_texture_offset};
	srna->identifier = "FluidFlowSettings";
	srna->flag = 516;
	srna->name = "Flow Settings";
	srna->description = "Fluid flow settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FluidFlowSettings_rna_properties;
	srna->path = rna_FluidFlowSettings_path;
};

/* Effector Settings */
static CollectionPropertyRNA rna_FluidEffectorSettings_rna_properties_;
PropertyRNA &rna_FluidEffectorSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_rna_properties_);

static PointerPropertyRNA rna_FluidEffectorSettings_rna_type_;
PropertyRNA &rna_FluidEffectorSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_rna_type_);

static EnumPropertyRNA rna_FluidEffectorSettings_effector_type_;
PropertyRNA &rna_FluidEffectorSettings_effector_type = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_effector_type_);

static FloatPropertyRNA rna_FluidEffectorSettings_surface_distance_;
PropertyRNA &rna_FluidEffectorSettings_surface_distance = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_surface_distance_);

static BoolPropertyRNA rna_FluidEffectorSettings_use_plane_init_;
PropertyRNA &rna_FluidEffectorSettings_use_plane_init = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_use_plane_init_);

static FloatPropertyRNA rna_FluidEffectorSettings_velocity_factor_;
PropertyRNA &rna_FluidEffectorSettings_velocity_factor = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_velocity_factor_);

static EnumPropertyRNA rna_FluidEffectorSettings_guide_mode_;
PropertyRNA &rna_FluidEffectorSettings_guide_mode = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_guide_mode_);

static BoolPropertyRNA rna_FluidEffectorSettings_use_effector_;
PropertyRNA &rna_FluidEffectorSettings_use_effector = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_use_effector_);

static IntPropertyRNA rna_FluidEffectorSettings_subframes_;
PropertyRNA &rna_FluidEffectorSettings_subframes = reinterpret_cast<PropertyRNA &>(rna_FluidEffectorSettings_subframes_);

StructRNA *RNA_FluidEffectorSettings;
void register_struct_FluidEffectorSettings(BlenderRNA &brna)
{
	rna_FluidEffectorSettings_rna_properties_ = {
		{&rna_FluidEffectorSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidEffectorSettings_rna_properties_begin, FluidEffectorSettings_rna_properties_next, FluidEffectorSettings_rna_properties_end, FluidEffectorSettings_rna_properties_get, nullptr, nullptr, FluidEffectorSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FluidEffectorSettings_rna_type_ = {
		{&rna_FluidEffectorSettings_effector_type, 	&rna_FluidEffectorSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidEffectorSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_FluidEffectorSettings_effector_type_items[3] = {
		{0, "COLLISION", 0, "Collision", "Create collision object"	},
		{1, "GUIDE", 0, "Guide", "Create guide object"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidEffectorSettings_effector_type_ = {
		{&rna_FluidEffectorSettings_surface_distance, 	&rna_FluidEffectorSettings_rna_type,
		-1, "effector_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Effector Type",
		"Change type of effector in the simulation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_effector_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidEffectorSettings, type), RawPropertyType(1), nullptr},
		FluidEffectorSettings_effector_type_get, FluidEffectorSettings_effector_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidEffectorSettings_effector_type_items, 2, 0
	};

	rna_FluidEffectorSettings_surface_distance_ = {
		{&rna_FluidEffectorSettings_use_plane_init, 	&rna_FluidEffectorSettings_effector_type,
		-1, "surface_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Surface",
		"Additional distance around mesh surface to consider as effector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_effector_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidEffectorSettings, surface_distance), RawPropertyType(5), nullptr},
		FluidEffectorSettings_surface_distance_get, FluidEffectorSettings_surface_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 0.0500000007f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FluidEffectorSettings_use_plane_init_ = {
		{&rna_FluidEffectorSettings_velocity_factor, 	&rna_FluidEffectorSettings_surface_distance,
		-1, "use_plane_init", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Planar",
		"Treat this object as a planar, unclosed mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_domain_data_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidEffectorSettings_use_plane_init_get, FluidEffectorSettings_use_plane_init_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FluidEffectorSettings_velocity_factor_ = {
		{&rna_FluidEffectorSettings_guide_mode, 	&rna_FluidEffectorSettings_use_plane_init,
		-1, "velocity_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Source",
		"Multiplier of obstacle velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_effector_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidEffectorSettings, vel_multi), RawPropertyType(5), nullptr},
		FluidEffectorSettings_velocity_factor_get, FluidEffectorSettings_velocity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	static const EnumPropertyItem rna_FluidEffectorSettings_guide_mode_items[5] = {
		{0, "MAXIMUM", 0, "Maximize", "Compare velocities from previous frame with new velocities from current frame and keep the maximum"	},
		{1, "MINIMUM", 0, "Minimize", "Compare velocities from previous frame with new velocities from current frame and keep the minimum"	},
		{2, "OVERRIDE", 0, "Override", "Always write new guide velocities for every frame (each frame only contains current velocities from guiding objects)"	},
		{3, "AVERAGED", 0, "Averaged", "Take average of velocities from previous frame and new velocities from current frame"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FluidEffectorSettings_guide_mode_ = {
		{&rna_FluidEffectorSettings_use_effector, 	&rna_FluidEffectorSettings_velocity_factor,
		-1, "guide_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Guiding mode",
		"How to create guiding velocities",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_effector_reset, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidEffectorSettings, guide_mode), RawPropertyType(1), nullptr},
		FluidEffectorSettings_guide_mode_get, FluidEffectorSettings_guide_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FluidEffectorSettings_guide_mode_items, 4, 2
	};

	rna_FluidEffectorSettings_use_effector_ = {
		{&rna_FluidEffectorSettings_subframes, 	&rna_FluidEffectorSettings_guide_mode,
		-1, "use_effector", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Control when to apply the effector",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_effector_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FluidEffectorSettings_use_effector_get, FluidEffectorSettings_use_effector_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_FluidEffectorSettings_subframes_ = {
		{nullptr, 	&rna_FluidEffectorSettings_use_effector,
		-1, "subframes", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Subframes",
		"Number of additional samples to take between frames to improve quality of fast moving effector objects",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Fluid_effector_reset, 102236160, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FluidEffectorSettings, subframes), RawPropertyType(0), nullptr},
		FluidEffectorSettings_subframes_get, FluidEffectorSettings_subframes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10, 0, 200, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FluidEffectorSettings;
	srna->cont.properties = {&rna_FluidEffectorSettings_rna_properties, &rna_FluidEffectorSettings_subframes};
	srna->identifier = "FluidEffectorSettings";
	srna->flag = 516;
	srna->name = "Effector Settings";
	srna->description = "Smoke collision settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FluidEffectorSettings_rna_properties;
	srna->path = rna_FluidEffectorSettings_path;
};


}  // namespace blender
