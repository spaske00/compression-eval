
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

#include "rna_particle.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_ParticleTarget_rna_properties;
extern PropertyRNA &rna_ParticleTarget_rna_type;
extern PropertyRNA &rna_ParticleTarget_name;
extern PropertyRNA &rna_ParticleTarget_object;
extern PropertyRNA &rna_ParticleTarget_system;
extern PropertyRNA &rna_ParticleTarget_time;
extern PropertyRNA &rna_ParticleTarget_duration;
extern PropertyRNA &rna_ParticleTarget_is_valid;
extern PropertyRNA &rna_ParticleTarget_alliance;


extern PropertyRNA &rna_SPHFluidSettings_rna_properties;
extern PropertyRNA &rna_SPHFluidSettings_rna_type;
extern PropertyRNA &rna_SPHFluidSettings_solver;
extern PropertyRNA &rna_SPHFluidSettings_spring_force;
extern PropertyRNA &rna_SPHFluidSettings_fluid_radius;
extern PropertyRNA &rna_SPHFluidSettings_rest_length;
extern PropertyRNA &rna_SPHFluidSettings_use_viscoelastic_springs;
extern PropertyRNA &rna_SPHFluidSettings_use_initial_rest_length;
extern PropertyRNA &rna_SPHFluidSettings_plasticity;
extern PropertyRNA &rna_SPHFluidSettings_yield_ratio;
extern PropertyRNA &rna_SPHFluidSettings_spring_frames;
extern PropertyRNA &rna_SPHFluidSettings_linear_viscosity;
extern PropertyRNA &rna_SPHFluidSettings_stiff_viscosity;
extern PropertyRNA &rna_SPHFluidSettings_stiffness;
extern PropertyRNA &rna_SPHFluidSettings_repulsion;
extern PropertyRNA &rna_SPHFluidSettings_rest_density;
extern PropertyRNA &rna_SPHFluidSettings_buoyancy;
extern PropertyRNA &rna_SPHFluidSettings_use_factor_repulsion;
extern PropertyRNA &rna_SPHFluidSettings_use_factor_density;
extern PropertyRNA &rna_SPHFluidSettings_use_factor_radius;
extern PropertyRNA &rna_SPHFluidSettings_use_factor_stiff_viscosity;
extern PropertyRNA &rna_SPHFluidSettings_use_factor_rest_length;


extern PropertyRNA &rna_ParticleHairKey_rna_properties;
extern PropertyRNA &rna_ParticleHairKey_rna_type;
extern PropertyRNA &rna_ParticleHairKey_time;
extern PropertyRNA &rna_ParticleHairKey_weight;
extern PropertyRNA &rna_ParticleHairKey_co;
extern PropertyRNA &rna_ParticleHairKey_co_local;

extern FunctionRNA *rna_ParticleHairKey_co_object_func;
extern PropertyRNA &rna_ParticleHairKey_co_object_object;
extern PropertyRNA &rna_ParticleHairKey_co_object_modifier;
extern PropertyRNA &rna_ParticleHairKey_co_object_particle;
extern PropertyRNA &rna_ParticleHairKey_co_object_co;

extern FunctionRNA *rna_ParticleHairKey_co_object_set_func;
extern PropertyRNA &rna_ParticleHairKey_co_object_set_object;
extern PropertyRNA &rna_ParticleHairKey_co_object_set_modifier;
extern PropertyRNA &rna_ParticleHairKey_co_object_set_particle;
extern PropertyRNA &rna_ParticleHairKey_co_object_set_co;



extern PropertyRNA &rna_ParticleKey_rna_properties;
extern PropertyRNA &rna_ParticleKey_rna_type;
extern PropertyRNA &rna_ParticleKey_location;
extern PropertyRNA &rna_ParticleKey_velocity;
extern PropertyRNA &rna_ParticleKey_rotation;
extern PropertyRNA &rna_ParticleKey_angular_velocity;
extern PropertyRNA &rna_ParticleKey_time;


extern PropertyRNA &rna_ChildParticle_rna_properties;
extern PropertyRNA &rna_ChildParticle_rna_type;


extern PropertyRNA &rna_Particle_rna_properties;
extern PropertyRNA &rna_Particle_rna_type;
extern PropertyRNA &rna_Particle_location;
extern PropertyRNA &rna_Particle_velocity;
extern PropertyRNA &rna_Particle_angular_velocity;
extern PropertyRNA &rna_Particle_rotation;
extern PropertyRNA &rna_Particle_prev_location;
extern PropertyRNA &rna_Particle_prev_velocity;
extern PropertyRNA &rna_Particle_prev_angular_velocity;
extern PropertyRNA &rna_Particle_prev_rotation;
extern PropertyRNA &rna_Particle_hair_keys;
extern PropertyRNA &rna_Particle_particle_keys;
extern PropertyRNA &rna_Particle_birth_time;
extern PropertyRNA &rna_Particle_lifetime;
extern PropertyRNA &rna_Particle_die_time;
extern PropertyRNA &rna_Particle_size;
extern PropertyRNA &rna_Particle_is_exist;
extern PropertyRNA &rna_Particle_is_visible;
extern PropertyRNA &rna_Particle_alive_state;

extern FunctionRNA *rna_Particle_uv_on_emitter_func;
extern PropertyRNA &rna_Particle_uv_on_emitter_modifier;
extern PropertyRNA &rna_Particle_uv_on_emitter_uv;



extern PropertyRNA &rna_ParticleDupliWeight_rna_properties;
extern PropertyRNA &rna_ParticleDupliWeight_rna_type;
extern PropertyRNA &rna_ParticleDupliWeight_name;
extern PropertyRNA &rna_ParticleDupliWeight_count;


extern PropertyRNA &rna_ParticleSystem_rna_properties;
extern PropertyRNA &rna_ParticleSystem_rna_type;
extern PropertyRNA &rna_ParticleSystem_name;
extern PropertyRNA &rna_ParticleSystem_settings;
extern PropertyRNA &rna_ParticleSystem_particles;
extern PropertyRNA &rna_ParticleSystem_child_particles;
extern PropertyRNA &rna_ParticleSystem_seed;
extern PropertyRNA &rna_ParticleSystem_child_seed;
extern PropertyRNA &rna_ParticleSystem_is_global_hair;
extern PropertyRNA &rna_ParticleSystem_use_hair_dynamics;
extern PropertyRNA &rna_ParticleSystem_cloth;
extern PropertyRNA &rna_ParticleSystem_reactor_target_object;
extern PropertyRNA &rna_ParticleSystem_reactor_target_particle_system;
extern PropertyRNA &rna_ParticleSystem_use_keyed_timing;
extern PropertyRNA &rna_ParticleSystem_targets;
extern PropertyRNA &rna_ParticleSystem_active_particle_target;
extern PropertyRNA &rna_ParticleSystem_active_particle_target_index;
extern PropertyRNA &rna_ParticleSystem_vertex_group_density;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_density;
extern PropertyRNA &rna_ParticleSystem_vertex_group_velocity;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_velocity;
extern PropertyRNA &rna_ParticleSystem_vertex_group_length;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_length;
extern PropertyRNA &rna_ParticleSystem_vertex_group_clump;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_clump;
extern PropertyRNA &rna_ParticleSystem_vertex_group_kink;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_kink;
extern PropertyRNA &rna_ParticleSystem_vertex_group_roughness_1;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_roughness_1;
extern PropertyRNA &rna_ParticleSystem_vertex_group_roughness_2;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_roughness_2;
extern PropertyRNA &rna_ParticleSystem_vertex_group_roughness_end;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_roughness_end;
extern PropertyRNA &rna_ParticleSystem_vertex_group_size;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_size;
extern PropertyRNA &rna_ParticleSystem_vertex_group_tangent;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_tangent;
extern PropertyRNA &rna_ParticleSystem_vertex_group_rotation;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_rotation;
extern PropertyRNA &rna_ParticleSystem_vertex_group_field;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_field;
extern PropertyRNA &rna_ParticleSystem_vertex_group_twist;
extern PropertyRNA &rna_ParticleSystem_invert_vertex_group_twist;
extern PropertyRNA &rna_ParticleSystem_point_cache;
extern PropertyRNA &rna_ParticleSystem_has_multiple_caches;
extern PropertyRNA &rna_ParticleSystem_parent;
extern PropertyRNA &rna_ParticleSystem_is_editable;
extern PropertyRNA &rna_ParticleSystem_is_edited;
extern PropertyRNA &rna_ParticleSystem_dt_frac;

extern FunctionRNA *rna_ParticleSystem_co_hair_func;
extern PropertyRNA &rna_ParticleSystem_co_hair_object;
extern PropertyRNA &rna_ParticleSystem_co_hair_particle_no;
extern PropertyRNA &rna_ParticleSystem_co_hair_step;
extern PropertyRNA &rna_ParticleSystem_co_hair_co;

extern FunctionRNA *rna_ParticleSystem_uv_on_emitter_func;
extern PropertyRNA &rna_ParticleSystem_uv_on_emitter_modifier;
extern PropertyRNA &rna_ParticleSystem_uv_on_emitter_particle;
extern PropertyRNA &rna_ParticleSystem_uv_on_emitter_particle_no;
extern PropertyRNA &rna_ParticleSystem_uv_on_emitter_uv_no;
extern PropertyRNA &rna_ParticleSystem_uv_on_emitter_uv;

extern FunctionRNA *rna_ParticleSystem_mcol_on_emitter_func;
extern PropertyRNA &rna_ParticleSystem_mcol_on_emitter_modifier;
extern PropertyRNA &rna_ParticleSystem_mcol_on_emitter_particle;
extern PropertyRNA &rna_ParticleSystem_mcol_on_emitter_particle_no;
extern PropertyRNA &rna_ParticleSystem_mcol_on_emitter_vcol_no;
extern PropertyRNA &rna_ParticleSystem_mcol_on_emitter_mcol;



extern PropertyRNA &rna_TextureSlot_rna_properties;
extern PropertyRNA &rna_TextureSlot_rna_type;
extern PropertyRNA &rna_TextureSlot_texture;
extern PropertyRNA &rna_TextureSlot_name;
extern PropertyRNA &rna_TextureSlot_offset;
extern PropertyRNA &rna_TextureSlot_scale;
extern PropertyRNA &rna_TextureSlot_color;
extern PropertyRNA &rna_TextureSlot_blend_type;
extern PropertyRNA &rna_TextureSlot_default_value;
extern PropertyRNA &rna_TextureSlot_output_node;

extern PropertyRNA &rna_ParticleSettingsTextureSlot_texture_coords;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_object;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_uv_layer;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_mapping_x;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_mapping_y;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_mapping_z;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_mapping;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_time;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_life;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_density;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_size;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_velocity;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_field;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_gravity;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_damp;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_clump;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_kink_amp;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_kink_freq;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_rough;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_length;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_twist;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_time_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_life_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_density_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_size_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_velocity_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_field_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_gravity_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_damp_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_length_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_clump_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_kink_amp_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_kink_freq_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_rough_factor;
extern PropertyRNA &rna_ParticleSettingsTextureSlot_twist_factor;


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

extern PropertyRNA &rna_ParticleSettings_texture_slots;
extern PropertyRNA &rna_ParticleSettings_active_texture;
extern PropertyRNA &rna_ParticleSettings_active_texture_index;
extern PropertyRNA &rna_ParticleSettings_is_fluid;
extern PropertyRNA &rna_ParticleSettings_use_react_start_end;
extern PropertyRNA &rna_ParticleSettings_use_react_multiple;
extern PropertyRNA &rna_ParticleSettings_use_regrow_hair;
extern PropertyRNA &rna_ParticleSettings_show_unborn;
extern PropertyRNA &rna_ParticleSettings_use_dead;
extern PropertyRNA &rna_ParticleSettings_use_emit_random;
extern PropertyRNA &rna_ParticleSettings_use_even_distribution;
extern PropertyRNA &rna_ParticleSettings_use_die_on_collision;
extern PropertyRNA &rna_ParticleSettings_use_size_deflect;
extern PropertyRNA &rna_ParticleSettings_use_rotations;
extern PropertyRNA &rna_ParticleSettings_use_dynamic_rotation;
extern PropertyRNA &rna_ParticleSettings_use_multiply_size_mass;
extern PropertyRNA &rna_ParticleSettings_use_advanced_hair;
extern PropertyRNA &rna_ParticleSettings_lock_boids_to_surface;
extern PropertyRNA &rna_ParticleSettings_use_hair_bspline;
extern PropertyRNA &rna_ParticleSettings_invert_grid;
extern PropertyRNA &rna_ParticleSettings_hexagonal_grid;
extern PropertyRNA &rna_ParticleSettings_apply_effector_to_children;
extern PropertyRNA &rna_ParticleSettings_create_long_hair_children;
extern PropertyRNA &rna_ParticleSettings_apply_guide_to_children;
extern PropertyRNA &rna_ParticleSettings_use_self_effect;
extern PropertyRNA &rna_ParticleSettings_type;
extern PropertyRNA &rna_ParticleSettings_emit_from;
extern PropertyRNA &rna_ParticleSettings_distribution;
extern PropertyRNA &rna_ParticleSettings_physics_type;
extern PropertyRNA &rna_ParticleSettings_rotation_mode;
extern PropertyRNA &rna_ParticleSettings_angular_velocity_mode;
extern PropertyRNA &rna_ParticleSettings_react_event;
extern PropertyRNA &rna_ParticleSettings_show_guide_hairs;
extern PropertyRNA &rna_ParticleSettings_show_hair_grid;
extern PropertyRNA &rna_ParticleSettings_show_velocity;
extern PropertyRNA &rna_ParticleSettings_show_size;
extern PropertyRNA &rna_ParticleSettings_show_health;
extern PropertyRNA &rna_ParticleSettings_use_absolute_path_time;
extern PropertyRNA &rna_ParticleSettings_use_parent_particles;
extern PropertyRNA &rna_ParticleSettings_show_number;
extern PropertyRNA &rna_ParticleSettings_use_collection_pick_random;
extern PropertyRNA &rna_ParticleSettings_use_collection_count;
extern PropertyRNA &rna_ParticleSettings_use_global_instance;
extern PropertyRNA &rna_ParticleSettings_use_rotation_instance;
extern PropertyRNA &rna_ParticleSettings_use_scale_instance;
extern PropertyRNA &rna_ParticleSettings_use_render_adaptive;
extern PropertyRNA &rna_ParticleSettings_use_velocity_length;
extern PropertyRNA &rna_ParticleSettings_use_whole_collection;
extern PropertyRNA &rna_ParticleSettings_use_strand_primitive;
extern PropertyRNA &rna_ParticleSettings_display_method;
extern PropertyRNA &rna_ParticleSettings_render_type;
extern PropertyRNA &rna_ParticleSettings_display_color;
extern PropertyRNA &rna_ParticleSettings_display_size;
extern PropertyRNA &rna_ParticleSettings_child_type;
extern PropertyRNA &rna_ParticleSettings_display_step;
extern PropertyRNA &rna_ParticleSettings_render_step;
extern PropertyRNA &rna_ParticleSettings_hair_step;
extern PropertyRNA &rna_ParticleSettings_bending_random;
extern PropertyRNA &rna_ParticleSettings_keys_step;
extern PropertyRNA &rna_ParticleSettings_adaptive_angle;
extern PropertyRNA &rna_ParticleSettings_adaptive_pixel;
extern PropertyRNA &rna_ParticleSettings_display_percentage;
extern PropertyRNA &rna_ParticleSettings_material;
extern PropertyRNA &rna_ParticleSettings_material_slot;
extern PropertyRNA &rna_ParticleSettings_integrator;
extern PropertyRNA &rna_ParticleSettings_kink;
extern PropertyRNA &rna_ParticleSettings_kink_axis;
extern PropertyRNA &rna_ParticleSettings_color_maximum;
extern PropertyRNA &rna_ParticleSettings_frame_start;
extern PropertyRNA &rna_ParticleSettings_frame_end;
extern PropertyRNA &rna_ParticleSettings_lifetime;
extern PropertyRNA &rna_ParticleSettings_lifetime_random;
extern PropertyRNA &rna_ParticleSettings_time_tweak;
extern PropertyRNA &rna_ParticleSettings_timestep;
extern PropertyRNA &rna_ParticleSettings_use_adaptive_subframes;
extern PropertyRNA &rna_ParticleSettings_subframes;
extern PropertyRNA &rna_ParticleSettings_courant_target;
extern PropertyRNA &rna_ParticleSettings_jitter_factor;
extern PropertyRNA &rna_ParticleSettings_effect_hair;
extern PropertyRNA &rna_ParticleSettings_count;
extern PropertyRNA &rna_ParticleSettings_userjit;
extern PropertyRNA &rna_ParticleSettings_grid_resolution;
extern PropertyRNA &rna_ParticleSettings_grid_random;
extern PropertyRNA &rna_ParticleSettings_effector_amount;
extern PropertyRNA &rna_ParticleSettings_normal_factor;
extern PropertyRNA &rna_ParticleSettings_object_factor;
extern PropertyRNA &rna_ParticleSettings_factor_random;
extern PropertyRNA &rna_ParticleSettings_particle_factor;
extern PropertyRNA &rna_ParticleSettings_tangent_factor;
extern PropertyRNA &rna_ParticleSettings_tangent_phase;
extern PropertyRNA &rna_ParticleSettings_reactor_factor;
extern PropertyRNA &rna_ParticleSettings_object_align_factor;
extern PropertyRNA &rna_ParticleSettings_angular_velocity_factor;
extern PropertyRNA &rna_ParticleSettings_phase_factor;
extern PropertyRNA &rna_ParticleSettings_rotation_factor_random;
extern PropertyRNA &rna_ParticleSettings_phase_factor_random;
extern PropertyRNA &rna_ParticleSettings_hair_length;
extern PropertyRNA &rna_ParticleSettings_mass;
extern PropertyRNA &rna_ParticleSettings_particle_size;
extern PropertyRNA &rna_ParticleSettings_size_random;
extern PropertyRNA &rna_ParticleSettings_collision_collection;
extern PropertyRNA &rna_ParticleSettings_drag_factor;
extern PropertyRNA &rna_ParticleSettings_brownian_factor;
extern PropertyRNA &rna_ParticleSettings_damping;
extern PropertyRNA &rna_ParticleSettings_length_random;
extern PropertyRNA &rna_ParticleSettings_child_percent;
extern PropertyRNA &rna_ParticleSettings_rendered_child_count;
extern PropertyRNA &rna_ParticleSettings_virtual_parents;
extern PropertyRNA &rna_ParticleSettings_child_size;
extern PropertyRNA &rna_ParticleSettings_child_size_random;
extern PropertyRNA &rna_ParticleSettings_child_radius;
extern PropertyRNA &rna_ParticleSettings_child_roundness;
extern PropertyRNA &rna_ParticleSettings_clump_factor;
extern PropertyRNA &rna_ParticleSettings_clump_shape;
extern PropertyRNA &rna_ParticleSettings_use_clump_curve;
extern PropertyRNA &rna_ParticleSettings_clump_curve;
extern PropertyRNA &rna_ParticleSettings_use_clump_noise;
extern PropertyRNA &rna_ParticleSettings_clump_noise_size;
extern PropertyRNA &rna_ParticleSettings_kink_amplitude;
extern PropertyRNA &rna_ParticleSettings_kink_amplitude_clump;
extern PropertyRNA &rna_ParticleSettings_kink_amplitude_random;
extern PropertyRNA &rna_ParticleSettings_kink_frequency;
extern PropertyRNA &rna_ParticleSettings_kink_shape;
extern PropertyRNA &rna_ParticleSettings_kink_flat;
extern PropertyRNA &rna_ParticleSettings_kink_extra_steps;
extern PropertyRNA &rna_ParticleSettings_kink_axis_random;
extern PropertyRNA &rna_ParticleSettings_roughness_1;
extern PropertyRNA &rna_ParticleSettings_roughness_1_size;
extern PropertyRNA &rna_ParticleSettings_roughness_2;
extern PropertyRNA &rna_ParticleSettings_roughness_2_size;
extern PropertyRNA &rna_ParticleSettings_roughness_2_threshold;
extern PropertyRNA &rna_ParticleSettings_roughness_endpoint;
extern PropertyRNA &rna_ParticleSettings_roughness_end_shape;
extern PropertyRNA &rna_ParticleSettings_use_roughness_curve;
extern PropertyRNA &rna_ParticleSettings_roughness_curve;
extern PropertyRNA &rna_ParticleSettings_child_length;
extern PropertyRNA &rna_ParticleSettings_child_length_threshold;
extern PropertyRNA &rna_ParticleSettings_child_parting_factor;
extern PropertyRNA &rna_ParticleSettings_child_parting_min;
extern PropertyRNA &rna_ParticleSettings_child_parting_max;
extern PropertyRNA &rna_ParticleSettings_branch_threshold;
extern PropertyRNA &rna_ParticleSettings_line_length_tail;
extern PropertyRNA &rna_ParticleSettings_line_length_head;
extern PropertyRNA &rna_ParticleSettings_path_start;
extern PropertyRNA &rna_ParticleSettings_path_end;
extern PropertyRNA &rna_ParticleSettings_trail_count;
extern PropertyRNA &rna_ParticleSettings_keyed_loops;
extern PropertyRNA &rna_ParticleSettings_use_modifier_stack;
extern PropertyRNA &rna_ParticleSettings_instance_collection;
extern PropertyRNA &rna_ParticleSettings_instance_weights;
extern PropertyRNA &rna_ParticleSettings_active_instanceweight;
extern PropertyRNA &rna_ParticleSettings_active_instanceweight_index;
extern PropertyRNA &rna_ParticleSettings_instance_object;
extern PropertyRNA &rna_ParticleSettings_boids;
extern PropertyRNA &rna_ParticleSettings_fluid;
extern PropertyRNA &rna_ParticleSettings_effector_weights;
extern PropertyRNA &rna_ParticleSettings_animation_data;
extern PropertyRNA &rna_ParticleSettings_force_field_1;
extern PropertyRNA &rna_ParticleSettings_force_field_2;
extern PropertyRNA &rna_ParticleSettings_twist;
extern PropertyRNA &rna_ParticleSettings_use_twist_curve;
extern PropertyRNA &rna_ParticleSettings_twist_curve;
extern PropertyRNA &rna_ParticleSettings_use_close_tip;
extern PropertyRNA &rna_ParticleSettings_shape;
extern PropertyRNA &rna_ParticleSettings_root_radius;
extern PropertyRNA &rna_ParticleSettings_tip_radius;
extern PropertyRNA &rna_ParticleSettings_radius_scale;

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



extern PropertyRNA &rna_ParticleSettingsTextureSlots_rna_properties;
extern PropertyRNA &rna_ParticleSettingsTextureSlots_rna_type;

extern FunctionRNA *rna_ParticleSettingsTextureSlots_add_func;
extern PropertyRNA &rna_ParticleSettingsTextureSlots_add_mtex;

extern FunctionRNA *rna_ParticleSettingsTextureSlots_create_func;
extern PropertyRNA &rna_ParticleSettingsTextureSlots_create_index;
extern PropertyRNA &rna_ParticleSettingsTextureSlots_create_mtex;

extern FunctionRNA *rna_ParticleSettingsTextureSlots_clear_func;
extern PropertyRNA &rna_ParticleSettingsTextureSlots_clear_index;


static PointerRNA ParticleTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleTarget_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleTarget_rna_properties_get(iter);
    }
}

void ParticleTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleTarget_rna_properties_get(iter);
    }
}

void ParticleTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleTarget_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleTarget_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ParticleTarget_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleTarget_name_get;
    fn(ptr, value);
}

int ParticleTarget_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleTarget_name_length;
    return fn(ptr);
}

PointerRNA ParticleTarget_object_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->ob);
}

void ParticleTarget_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob = value.data;
}

int ParticleTarget_system_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (int)(data->psys);
}

void ParticleTarget_system_set(PointerRNA *ptr, int value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    data->psys = (std::remove_reference_t<decltype(data->psys)>)std::clamp(value, 1, INT_MAX);
}

float ParticleTarget_time_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (float)(data->time);
}

void ParticleTarget_time_set(PointerRNA *ptr, float value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    data->time = (std::remove_reference_t<decltype(data->time)>)std::clamp(value, 0.0f, 1048574.0f);
}

float ParticleTarget_duration_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (float)(data->duration);
}

void ParticleTarget_duration_set(PointerRNA *ptr, float value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    data->duration = (std::remove_reference_t<decltype(data->duration)>)std::clamp(value, 0.0f, 1048574.0f);
}

bool ParticleTarget_is_valid_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ParticleTarget_is_valid_set(PointerRNA *ptr, bool value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

int ParticleTarget_alliance_get(PointerRNA *ptr)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    return (int)(data->mode);
}

void ParticleTarget_alliance_set(PointerRNA *ptr, int value)
{
    ParticleTarget *data = (ParticleTarget *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

static PointerRNA SPHFluidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void SPHFluidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_SPHFluidSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = SPHFluidSettings_rna_properties_get(iter);
    }
}

void SPHFluidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = SPHFluidSettings_rna_properties_get(iter);
    }
}

void SPHFluidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool SPHFluidSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA SPHFluidSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int SPHFluidSettings_solver_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (int)(data->solver);
}

void SPHFluidSettings_solver_set(PointerRNA *ptr, int value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->solver = (std::remove_reference_t<decltype(data->solver)>)value;
}

float SPHFluidSettings_spring_force_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->spring_k);
}

void SPHFluidSettings_spring_force_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->spring_k = (std::remove_reference_t<decltype(data->spring_k)>)std::clamp(value, 0.0f, 100.0f);
}

float SPHFluidSettings_fluid_radius_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->radius);
}

void SPHFluidSettings_fluid_radius_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->radius = (std::remove_reference_t<decltype(data->radius)>)std::clamp(value, 0.0f, 20.0f);
}

float SPHFluidSettings_rest_length_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->rest_length);
}

void SPHFluidSettings_rest_length_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->rest_length = (std::remove_reference_t<decltype(data->rest_length)>)std::clamp(value, 0.0f, 2.0f);
}

bool SPHFluidSettings_use_viscoelastic_springs_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void SPHFluidSettings_use_viscoelastic_springs_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool SPHFluidSettings_use_initial_rest_length_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void SPHFluidSettings_use_initial_rest_length_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

float SPHFluidSettings_plasticity_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->plasticity_constant);
}

void SPHFluidSettings_plasticity_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->plasticity_constant = (std::remove_reference_t<decltype(data->plasticity_constant)>)std::clamp(value, 0.0f, 100.0f);
}

float SPHFluidSettings_yield_ratio_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->yield_ratio);
}

void SPHFluidSettings_yield_ratio_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->yield_ratio = (std::remove_reference_t<decltype(data->yield_ratio)>)std::clamp(value, 0.0f, 1.0f);
}

int SPHFluidSettings_spring_frames_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (int)(data->spring_frames);
}

void SPHFluidSettings_spring_frames_set(PointerRNA *ptr, int value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->spring_frames = (std::remove_reference_t<decltype(data->spring_frames)>)std::clamp(value, 0, 100);
}

float SPHFluidSettings_linear_viscosity_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->viscosity_omega);
}

void SPHFluidSettings_linear_viscosity_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->viscosity_omega = (std::remove_reference_t<decltype(data->viscosity_omega)>)std::clamp(value, 0.0f, 100.0f);
}

float SPHFluidSettings_stiff_viscosity_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->viscosity_beta);
}

void SPHFluidSettings_stiff_viscosity_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->viscosity_beta = (std::remove_reference_t<decltype(data->viscosity_beta)>)std::clamp(value, 0.0f, 100.0f);
}

float SPHFluidSettings_stiffness_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->stiffness_k);
}

void SPHFluidSettings_stiffness_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->stiffness_k = (std::remove_reference_t<decltype(data->stiffness_k)>)std::clamp(value, 0.0f, 1000.0f);
}

float SPHFluidSettings_repulsion_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->stiffness_knear);
}

void SPHFluidSettings_repulsion_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->stiffness_knear = (std::remove_reference_t<decltype(data->stiffness_knear)>)std::clamp(value, 0.0f, 100.0f);
}

float SPHFluidSettings_rest_density_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->rest_density);
}

void SPHFluidSettings_rest_density_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->rest_density = (std::remove_reference_t<decltype(data->rest_density)>)std::clamp(value, 0.0f, 10000.0f);
}

float SPHFluidSettings_buoyancy_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return (float)(data->buoyancy);
}

void SPHFluidSettings_buoyancy_set(PointerRNA *ptr, float value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    data->buoyancy = (std::remove_reference_t<decltype(data->buoyancy)>)std::clamp(value, 0.0f, 10.0f);
}

bool SPHFluidSettings_use_factor_repulsion_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void SPHFluidSettings_use_factor_repulsion_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool SPHFluidSettings_use_factor_density_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void SPHFluidSettings_use_factor_density_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool SPHFluidSettings_use_factor_radius_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void SPHFluidSettings_use_factor_radius_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool SPHFluidSettings_use_factor_stiff_viscosity_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void SPHFluidSettings_use_factor_stiff_viscosity_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool SPHFluidSettings_use_factor_rest_length_get(PointerRNA *ptr)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void SPHFluidSettings_use_factor_rest_length_set(PointerRNA *ptr, bool value)
{
    SPHFluidSettings *data = (SPHFluidSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

static PointerRNA ParticleHairKey_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleHairKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleHairKey_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleHairKey_rna_properties_get(iter);
    }
}

void ParticleHairKey_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleHairKey_rna_properties_get(iter);
    }
}

void ParticleHairKey_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleHairKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleHairKey_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float ParticleHairKey_time_get(PointerRNA *ptr)
{
    HairKey *data = (HairKey *)(ptr->data);
    return (float)(data->time);
}

void ParticleHairKey_time_set(PointerRNA *ptr, float value)
{
    HairKey *data = (HairKey *)(ptr->data);
    data->time = (std::remove_reference_t<decltype(data->time)>)std::clamp(value, 0.0f, FLT_MAX);
}

float ParticleHairKey_weight_get(PointerRNA *ptr)
{
    HairKey *data = (HairKey *)(ptr->data);
    return (float)(data->weight);
}

void ParticleHairKey_weight_set(PointerRNA *ptr, float value)
{
    HairKey *data = (HairKey *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0f, 1.0f);
}

void ParticleHairKey_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_ParticleHairKey_location_object_get;
    fn(ptr, values);
}

void ParticleHairKey_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_ParticleHairKey_location_object_set;
    fn(ptr, values);
}

void ParticleHairKey_co_local_get(PointerRNA *ptr, float values[3])
{
    HairKey *data = (HairKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->co)[i]);
    }
}

void ParticleHairKey_co_local_set(PointerRNA *ptr, const float values[3])
{
    HairKey *data = (HairKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->co)[i] = values[i];
    }
}

static PointerRNA ParticleKey_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleKey_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleKey_rna_properties_get(iter);
    }
}

void ParticleKey_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleKey_rna_properties_get(iter);
    }
}

void ParticleKey_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleKey_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleKey_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ParticleKey_location_get(PointerRNA *ptr, float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->co)[i]);
    }
}

void ParticleKey_location_set(PointerRNA *ptr, const float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->co)[i] = values[i];
    }
}

void ParticleKey_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->vel)[i]);
    }
}

void ParticleKey_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->vel)[i] = values[i];
    }
}

void ParticleKey_rotation_get(PointerRNA *ptr, float values[4])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->rot)[i]);
    }
}

void ParticleKey_rotation_set(PointerRNA *ptr, const float values[4])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->rot)[i] = values[i];
    }
}

void ParticleKey_angular_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->ave)[i]);
    }
}

void ParticleKey_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->ave)[i] = values[i];
    }
}

float ParticleKey_time_get(PointerRNA *ptr)
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    return (float)(data->time);
}

void ParticleKey_time_set(PointerRNA *ptr, float value)
{
    ParticleKey *data = (ParticleKey *)(ptr->data);
    data->time = (std::remove_reference_t<decltype(data->time)>)std::clamp(value, 0.0f, FLT_MAX);
}

static PointerRNA ChildParticle_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ChildParticle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ChildParticle_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ChildParticle_rna_properties_get(iter);
    }
}

void ChildParticle_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ChildParticle_rna_properties_get(iter);
    }
}

void ChildParticle_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ChildParticle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ChildParticle_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA Particle_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Particle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Particle_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Particle_rna_properties_get(iter);
    }
}

void Particle_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Particle_rna_properties_get(iter);
    }
}

void Particle_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Particle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Particle_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void Particle_location_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->state.co)[i]);
    }
}

void Particle_location_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->state.co)[i] = values[i];
    }
}

void Particle_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->state.vel)[i]);
    }
}

void Particle_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->state.vel)[i] = values[i];
    }
}

void Particle_angular_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->state.ave)[i]);
    }
}

void Particle_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->state.ave)[i] = values[i];
    }
}

void Particle_rotation_get(PointerRNA *ptr, float values[4])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->state.rot)[i]);
    }
}

void Particle_rotation_set(PointerRNA *ptr, const float values[4])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->state.rot)[i] = values[i];
    }
}

void Particle_prev_location_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->prev_state.co)[i]);
    }
}

void Particle_prev_location_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->prev_state.co)[i] = values[i];
    }
}

void Particle_prev_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->prev_state.vel)[i]);
    }
}

void Particle_prev_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->prev_state.vel)[i] = values[i];
    }
}

void Particle_prev_angular_velocity_get(PointerRNA *ptr, float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->prev_state.ave)[i]);
    }
}

void Particle_prev_angular_velocity_set(PointerRNA *ptr, const float values[3])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->prev_state.ave)[i] = values[i];
    }
}

void Particle_prev_rotation_get(PointerRNA *ptr, float values[4])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->prev_state.rot)[i]);
    }
}

void Particle_prev_rotation_set(PointerRNA *ptr, const float values[4])
{
    ParticleData *data = (ParticleData *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->prev_state.rot)[i] = values[i];
    }
}

int Particle_hair_keys_length(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (data->hair == nullptr) ? 0 : data->totkey;
}

static PointerRNA Particle_hair_keys_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ParticleHairKey, rna_iterator_array_get(iter));
}

void Particle_hair_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Particle_hair_keys;

    rna_iterator_array_begin(iter, ptr, data->hair, sizeof(data->hair[0]), data->totkey, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Particle_hair_keys_get(iter);
    }
}

void Particle_hair_keys_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Particle_hair_keys_get(iter);
    }
}

void Particle_hair_keys_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Particle_hair_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Particle_hair_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = Particle_hair_keys_get(&iter); }
    }

    Particle_hair_keys_end(&iter);

    return found;
}

int Particle_particle_keys_length(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (data->keys == nullptr) ? 0 : data->totkey;
}

static PointerRNA Particle_particle_keys_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ParticleKey, rna_iterator_array_get(iter));
}

void Particle_particle_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Particle_particle_keys;

    rna_iterator_array_begin(iter, ptr, data->keys, sizeof(data->keys[0]), data->totkey, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Particle_particle_keys_get(iter);
    }
}

void Particle_particle_keys_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Particle_particle_keys_get(iter);
    }
}

void Particle_particle_keys_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Particle_particle_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Particle_particle_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = Particle_particle_keys_get(&iter); }
    }

    Particle_particle_keys_end(&iter);

    return found;
}

float Particle_birth_time_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (float)(data->time);
}

void Particle_birth_time_set(PointerRNA *ptr, float value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->time = (std::remove_reference_t<decltype(data->time)>)value;
}

float Particle_lifetime_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (float)(data->lifetime);
}

void Particle_lifetime_set(PointerRNA *ptr, float value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->lifetime = (std::remove_reference_t<decltype(data->lifetime)>)value;
}

float Particle_die_time_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (float)(data->dietime);
}

void Particle_die_time_set(PointerRNA *ptr, float value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->dietime = (std::remove_reference_t<decltype(data->dietime)>)value;
}

float Particle_size_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (float)(data->size);
}

void Particle_size_set(PointerRNA *ptr, float value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->size = (std::remove_reference_t<decltype(data->size)>)value;
}

bool Particle_is_exist_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

bool Particle_is_visible_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return !((uint64_t(data->flag) & 2) != 0);
}

int Particle_alive_state_get(PointerRNA *ptr)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    return (int)(data->alive);
}

void Particle_alive_state_set(PointerRNA *ptr, int value)
{
    ParticleData *data = (ParticleData *)(ptr->data);
    data->alive = (std::remove_reference_t<decltype(data->alive)>)value;
}

static PointerRNA ParticleDupliWeight_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleDupliWeight_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleDupliWeight_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleDupliWeight_rna_properties_get(iter);
    }
}

void ParticleDupliWeight_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleDupliWeight_rna_properties_get(iter);
    }
}

void ParticleDupliWeight_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleDupliWeight_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleDupliWeight_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ParticleDupliWeight_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleDupliWeight_name_get;
    fn(ptr, value);
}

int ParticleDupliWeight_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleDupliWeight_name_length;
    return fn(ptr);
}

int ParticleDupliWeight_count_get(PointerRNA *ptr)
{
    ParticleDupliWeight *data = (ParticleDupliWeight *)(ptr->data);
    return (int)(data->count);
}

void ParticleDupliWeight_count_set(PointerRNA *ptr, int value)
{
    ParticleDupliWeight *data = (ParticleDupliWeight *)(ptr->data);
    data->count = (std::remove_reference_t<decltype(data->count)>)std::clamp(value, 0, 32767);
}

static PointerRNA ParticleSystem_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleSystem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleSystem_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSystem_rna_properties_get(iter);
    }
}

void ParticleSystem_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystem_rna_properties_get(iter);
    }
}

void ParticleSystem_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleSystem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleSystem_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ParticleSystem_name_get(PointerRNA *ptr, char *value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int ParticleSystem_name_length(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return strlen(data->name);
}

void ParticleSystem_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleSystem_name_set;
    fn(ptr, value);
}

PointerRNA ParticleSystem_settings_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_particle_settings_get;
    return fn(ptr);
}

void ParticleSystem_settings_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_particle_settings_set;
    fn(ptr, value, reports);
}

int ParticleSystem_particles_length(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (data->particles == nullptr) ? 0 : data->totpart;
}

static PointerRNA ParticleSystem_particles_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Particle, rna_iterator_array_get(iter));
}

void ParticleSystem_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleSystem_particles;

    rna_iterator_array_begin(iter, ptr, data->particles, sizeof(data->particles[0]), data->totpart, 0, nullptr);

    if (iter->valid) {
        iter->ptr = ParticleSystem_particles_get(iter);
    }
}

void ParticleSystem_particles_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystem_particles_get(iter);
    }
}

void ParticleSystem_particles_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ParticleSystem_particles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ParticleSystem_particles_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSystem_particles_get(&iter); }
    }

    ParticleSystem_particles_end(&iter);

    return found;
}

int ParticleSystem_child_particles_length(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (data->child == nullptr) ? 0 : data->totchild;
}

static PointerRNA ParticleSystem_child_particles_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ChildParticle, rna_iterator_array_get(iter));
}

void ParticleSystem_child_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleSystem_child_particles;

    rna_iterator_array_begin(iter, ptr, data->child, sizeof(data->child[0]), data->totchild, 0, nullptr);

    if (iter->valid) {
        iter->ptr = ParticleSystem_child_particles_get(iter);
    }
}

void ParticleSystem_child_particles_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystem_child_particles_get(iter);
    }
}

void ParticleSystem_child_particles_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ParticleSystem_child_particles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ParticleSystem_child_particles_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSystem_child_particles_get(&iter); }
    }

    ParticleSystem_child_particles_end(&iter);

    return found;
}

int ParticleSystem_seed_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (int)(data->seed);
}

void ParticleSystem_seed_set(PointerRNA *ptr, int value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    data->seed = (std::remove_reference_t<decltype(data->seed)>)std::clamp(value, 0, INT_MAX);
}

int ParticleSystem_child_seed_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (int)(data->child_seed);
}

void ParticleSystem_child_seed_set(PointerRNA *ptr, int value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    data->child_seed = (std::remove_reference_t<decltype(data->child_seed)>)std::clamp(value, 0, INT_MAX);
}

bool ParticleSystem_is_global_hair_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

bool ParticleSystem_use_hair_dynamics_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ParticleSystem_use_hair_dynamics_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

PointerRNA ParticleSystem_cloth_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ClothModifier, data->clmd);
}

PointerRNA ParticleSystem_reactor_target_object_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->target_ob);
}

void ParticleSystem_reactor_target_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->target_ob = value.data;
}

int ParticleSystem_reactor_target_particle_system_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (int)(data->target_psys);
}

void ParticleSystem_reactor_target_particle_system_set(PointerRNA *ptr, int value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    data->target_psys = (std::remove_reference_t<decltype(data->target_psys)>)std::clamp(value, 1, 32767);
}

bool ParticleSystem_use_keyed_timing_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void ParticleSystem_use_keyed_timing_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

static PointerRNA ParticleSystem_targets_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ParticleTarget, rna_iterator_listbase_get(iter));
}

void ParticleSystem_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleSystem_targets;

    rna_iterator_listbase_begin(iter, ptr, &data->targets, nullptr);

    if (iter->valid) {
        iter->ptr = ParticleSystem_targets_get(iter);
    }
}

void ParticleSystem_targets_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleSystem_targets_get(iter);
    }
}

void ParticleSystem_targets_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleSystem_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ParticleSystem_targets_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSystem_targets_get(&iter); }
    }

    ParticleSystem_targets_end(&iter);

    return found;
}

int ParticleTarget_name_length(PointerRNA *);
void ParticleTarget_name_get(PointerRNA *, char *);

bool ParticleSystem_targets_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ParticleSystem_targets_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ParticleTarget_name_length(&iter.ptr);
            if (namelen < 1024) {
                ParticleTarget_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ParticleTarget_name_get(&iter.ptr, name);
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
        ParticleSystem_targets_next(&iter);
    }
    ParticleSystem_targets_end(&iter);

    return found;
}

PointerRNA ParticleSystem_active_particle_target_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ParticleSystem_active_particle_target_get;
    return fn(ptr);
}

int ParticleSystem_active_particle_target_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ParticleSystem_active_particle_target_index_get;
    return fn(ptr);
}

void ParticleSystem_active_particle_target_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ParticleSystem_active_particle_target_index_set;
    fn(ptr, value);
}

void ParticleSystem_vertex_group_density_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_0;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_density_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_0;
    return fn(ptr);
}

void ParticleSystem_vertex_group_density_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_0;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_density_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 1) != 0);
}

void ParticleSystem_invert_vertex_group_density_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 1); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(1)); }
}

void ParticleSystem_vertex_group_velocity_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_1;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_velocity_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_1;
    return fn(ptr);
}

void ParticleSystem_vertex_group_velocity_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_1;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_velocity_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 2) != 0);
}

void ParticleSystem_invert_vertex_group_velocity_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 2); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(2)); }
}

void ParticleSystem_vertex_group_length_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_2;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_length_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_2;
    return fn(ptr);
}

void ParticleSystem_vertex_group_length_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_2;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_length_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 4) != 0);
}

void ParticleSystem_invert_vertex_group_length_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 4); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(4)); }
}

void ParticleSystem_vertex_group_clump_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_3;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_clump_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_3;
    return fn(ptr);
}

void ParticleSystem_vertex_group_clump_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_3;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_clump_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 8) != 0);
}

void ParticleSystem_invert_vertex_group_clump_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 8); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(8)); }
}

void ParticleSystem_vertex_group_kink_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_4;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_kink_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_4;
    return fn(ptr);
}

void ParticleSystem_vertex_group_kink_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_4;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_kink_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 16) != 0);
}

void ParticleSystem_invert_vertex_group_kink_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 16); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(16)); }
}

void ParticleSystem_vertex_group_roughness_1_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_5;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_roughness_1_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_5;
    return fn(ptr);
}

void ParticleSystem_vertex_group_roughness_1_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_5;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_roughness_1_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 32) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_1_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 32); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(32)); }
}

void ParticleSystem_vertex_group_roughness_2_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_6;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_roughness_2_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_6;
    return fn(ptr);
}

void ParticleSystem_vertex_group_roughness_2_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_6;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_roughness_2_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 64) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_2_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 64); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(64)); }
}

void ParticleSystem_vertex_group_roughness_end_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_7;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_roughness_end_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_7;
    return fn(ptr);
}

void ParticleSystem_vertex_group_roughness_end_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_7;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_roughness_end_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 128) != 0);
}

void ParticleSystem_invert_vertex_group_roughness_end_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 128); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(128)); }
}

void ParticleSystem_vertex_group_size_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_8;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_size_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_8;
    return fn(ptr);
}

void ParticleSystem_vertex_group_size_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_8;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_size_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 256) != 0);
}

void ParticleSystem_invert_vertex_group_size_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 256); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(256)); }
}

void ParticleSystem_vertex_group_tangent_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_9;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_tangent_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_9;
    return fn(ptr);
}

void ParticleSystem_vertex_group_tangent_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_9;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_tangent_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 512) != 0);
}

void ParticleSystem_invert_vertex_group_tangent_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 512); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(512)); }
}

void ParticleSystem_vertex_group_rotation_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_10;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_rotation_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_10;
    return fn(ptr);
}

void ParticleSystem_vertex_group_rotation_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_10;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_rotation_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 1024) != 0);
}

void ParticleSystem_invert_vertex_group_rotation_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 1024); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(1024)); }
}

void ParticleSystem_vertex_group_field_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_11;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_field_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_11;
    return fn(ptr);
}

void ParticleSystem_vertex_group_field_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_11;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_field_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 2048) != 0);
}

void ParticleSystem_invert_vertex_group_field_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 2048); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(2048)); }
}

void ParticleSystem_vertex_group_twist_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_ParticleVGroup_name_get_12;
    fn(ptr, value);
}

int ParticleSystem_vertex_group_twist_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_ParticleVGroup_name_len_12;
    return fn(ptr);
}

void ParticleSystem_vertex_group_twist_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ParticleVGroup_name_set_12;
    fn(ptr, value);
}

bool ParticleSystem_invert_vertex_group_twist_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return ((uint64_t(data->vg_neg) & 4096) != 0);
}

void ParticleSystem_invert_vertex_group_twist_set(PointerRNA *ptr, bool value)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value) { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) | 4096); }
    else { data->vg_neg = std::remove_reference_t<decltype(data->vg_neg)>(uint64_t(data->vg_neg) & ~uint64_t(4096)); }
}

PointerRNA ParticleSystem_point_cache_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_PointCache, data->pointcache);
}

bool ParticleSystem_has_multiple_caches_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ParticleSystem_multiple_caches_get;
    return fn(ptr);
}

PointerRNA ParticleSystem_parent_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->parent);
}

void ParticleSystem_parent_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->parent = value.data;
}

bool ParticleSystem_is_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ParticleSystem_editable_get;
    return fn(ptr);
}

bool ParticleSystem_is_edited_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_ParticleSystem_edited_get;
    return fn(ptr);
}

float ParticleSystem_dt_frac_get(PointerRNA *ptr)
{
    ParticleSystem *data = (ParticleSystem *)(ptr->data);
    return (float)(data->dt_frac);
}

int ParticleSettingsTextureSlot_texture_coords_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->texco);
}

void ParticleSettingsTextureSlot_texture_coords_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->texco = (std::remove_reference_t<decltype(data->texco)>)value;
}

PointerRNA ParticleSettingsTextureSlot_object_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->object);
}

void ParticleSettingsTextureSlot_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    MTex *data = (MTex *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->object = value.data;
}

void ParticleSettingsTextureSlot_uv_layer_get(PointerRNA *ptr, char *value)
{
    MTex *data = (MTex *)(ptr->data);
    BLI_assert(strlen(data->uvname) < 68);
    strcpy(value, data->uvname);
}

int ParticleSettingsTextureSlot_uv_layer_length(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return strlen(data->uvname);
}

void ParticleSettingsTextureSlot_uv_layer_set(PointerRNA *ptr, const char *value)
{
    MTex *data = (MTex *)(ptr->data);
    BLI_strncpy_utf8(data->uvname, value, 68);
}

int ParticleSettingsTextureSlot_mapping_x_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->projx);
}

void ParticleSettingsTextureSlot_mapping_x_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->projx = (std::remove_reference_t<decltype(data->projx)>)value;
}

int ParticleSettingsTextureSlot_mapping_y_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->projy);
}

void ParticleSettingsTextureSlot_mapping_y_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->projy = (std::remove_reference_t<decltype(data->projy)>)value;
}

int ParticleSettingsTextureSlot_mapping_z_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->projz);
}

void ParticleSettingsTextureSlot_mapping_z_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->projz = (std::remove_reference_t<decltype(data->projz)>)value;
}

int ParticleSettingsTextureSlot_mapping_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (int)(data->mapping);
}

void ParticleSettingsTextureSlot_mapping_set(PointerRNA *ptr, int value)
{
    MTex *data = (MTex *)(ptr->data);
    data->mapping = (std::remove_reference_t<decltype(data->mapping)>)value;
}

bool ParticleSettingsTextureSlot_use_map_time_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 1) != 0);
}

void ParticleSettingsTextureSlot_use_map_time_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 1); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(1)); }
}

bool ParticleSettingsTextureSlot_use_map_life_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 2) != 0);
}

void ParticleSettingsTextureSlot_use_map_life_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 2); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(2)); }
}

bool ParticleSettingsTextureSlot_use_map_density_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 4) != 0);
}

void ParticleSettingsTextureSlot_use_map_density_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 4); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(4)); }
}

bool ParticleSettingsTextureSlot_use_map_size_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 8) != 0);
}

void ParticleSettingsTextureSlot_use_map_size_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 8); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(8)); }
}

bool ParticleSettingsTextureSlot_use_map_velocity_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 32) != 0);
}

void ParticleSettingsTextureSlot_use_map_velocity_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 32); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(32)); }
}

bool ParticleSettingsTextureSlot_use_map_field_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 64) != 0);
}

void ParticleSettingsTextureSlot_use_map_field_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 64); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(64)); }
}

bool ParticleSettingsTextureSlot_use_map_gravity_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 1024) != 0);
}

void ParticleSettingsTextureSlot_use_map_gravity_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 1024); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(1024)); }
}

bool ParticleSettingsTextureSlot_use_map_damp_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 2048) != 0);
}

void ParticleSettingsTextureSlot_use_map_damp_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 2048); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(2048)); }
}

bool ParticleSettingsTextureSlot_use_map_clump_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 128) != 0);
}

void ParticleSettingsTextureSlot_use_map_clump_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 128); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(128)); }
}

bool ParticleSettingsTextureSlot_use_map_kink_amp_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 4096) != 0);
}

void ParticleSettingsTextureSlot_use_map_kink_amp_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 4096); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(4096)); }
}

bool ParticleSettingsTextureSlot_use_map_kink_freq_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 256) != 0);
}

void ParticleSettingsTextureSlot_use_map_kink_freq_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 256); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(256)); }
}

bool ParticleSettingsTextureSlot_use_map_rough_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 512) != 0);
}

void ParticleSettingsTextureSlot_use_map_rough_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 512); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(512)); }
}

bool ParticleSettingsTextureSlot_use_map_length_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 16) != 0);
}

void ParticleSettingsTextureSlot_use_map_length_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 16); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(16)); }
}

bool ParticleSettingsTextureSlot_use_map_twist_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return ((uint64_t(data->mapto) & 8192) != 0);
}

void ParticleSettingsTextureSlot_use_map_twist_set(PointerRNA *ptr, bool value)
{
    MTex *data = (MTex *)(ptr->data);
    if (value) { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) | 8192); }
    else { data->mapto = std::remove_reference_t<decltype(data->mapto)>(uint64_t(data->mapto) & ~uint64_t(8192)); }
}

float ParticleSettingsTextureSlot_time_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->timefac);
}

void ParticleSettingsTextureSlot_time_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->timefac = (std::remove_reference_t<decltype(data->timefac)>)value;
}

float ParticleSettingsTextureSlot_life_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->lifefac);
}

void ParticleSettingsTextureSlot_life_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->lifefac = (std::remove_reference_t<decltype(data->lifefac)>)value;
}

float ParticleSettingsTextureSlot_density_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->padensfac);
}

void ParticleSettingsTextureSlot_density_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->padensfac = (std::remove_reference_t<decltype(data->padensfac)>)value;
}

float ParticleSettingsTextureSlot_size_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->sizefac);
}

void ParticleSettingsTextureSlot_size_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->sizefac = (std::remove_reference_t<decltype(data->sizefac)>)value;
}

float ParticleSettingsTextureSlot_velocity_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->ivelfac);
}

void ParticleSettingsTextureSlot_velocity_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->ivelfac = (std::remove_reference_t<decltype(data->ivelfac)>)value;
}

float ParticleSettingsTextureSlot_field_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->fieldfac);
}

void ParticleSettingsTextureSlot_field_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->fieldfac = (std::remove_reference_t<decltype(data->fieldfac)>)value;
}

float ParticleSettingsTextureSlot_gravity_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->gravityfac);
}

void ParticleSettingsTextureSlot_gravity_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->gravityfac = (std::remove_reference_t<decltype(data->gravityfac)>)value;
}

float ParticleSettingsTextureSlot_damp_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->dampfac);
}

void ParticleSettingsTextureSlot_damp_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->dampfac = (std::remove_reference_t<decltype(data->dampfac)>)value;
}

float ParticleSettingsTextureSlot_length_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->lengthfac);
}

void ParticleSettingsTextureSlot_length_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->lengthfac = (std::remove_reference_t<decltype(data->lengthfac)>)value;
}

float ParticleSettingsTextureSlot_clump_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->clumpfac);
}

void ParticleSettingsTextureSlot_clump_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->clumpfac = (std::remove_reference_t<decltype(data->clumpfac)>)value;
}

float ParticleSettingsTextureSlot_kink_amp_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->kinkampfac);
}

void ParticleSettingsTextureSlot_kink_amp_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->kinkampfac = (std::remove_reference_t<decltype(data->kinkampfac)>)value;
}

float ParticleSettingsTextureSlot_kink_freq_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->kinkfac);
}

void ParticleSettingsTextureSlot_kink_freq_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->kinkfac = (std::remove_reference_t<decltype(data->kinkfac)>)value;
}

float ParticleSettingsTextureSlot_rough_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->roughfac);
}

void ParticleSettingsTextureSlot_rough_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->roughfac = (std::remove_reference_t<decltype(data->roughfac)>)value;
}

float ParticleSettingsTextureSlot_twist_factor_get(PointerRNA *ptr)
{
    MTex *data = (MTex *)(ptr->data);
    return (float)(data->twistfac);
}

void ParticleSettingsTextureSlot_twist_factor_set(PointerRNA *ptr, float value)
{
    MTex *data = (MTex *)(ptr->data);
    data->twistfac = (std::remove_reference_t<decltype(data->twistfac)>)value;
}

static PointerRNA ParticleSettings_texture_slots_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ParticleSettingsTextureSlot, rna_iterator_array_dereference_get(iter));
}

void ParticleSettings_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleSettings_texture_slots;

    PropCollectionBeginFunc fn = rna_ParticleSettings_mtex_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSettings_texture_slots_get(iter);
    }
}

void ParticleSettings_texture_slots_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleSettings_texture_slots_get(iter);
    }
}

void ParticleSettings_texture_slots_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool ParticleSettings_texture_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ParticleSettings_texture_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSettings_texture_slots_get(&iter); }
    }

    ParticleSettings_texture_slots_end(&iter);

    return found;
}

PointerRNA ParticleSettings_active_texture_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ParticleSettings_active_texture_get;
    return fn(ptr);
}

void ParticleSettings_active_texture_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ParticleSettings_active_texture_set;
    fn(ptr, value, reports);
}

int ParticleSettings_active_texture_index_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->texact);
}

void ParticleSettings_active_texture_index_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->texact = (std::remove_reference_t<decltype(data->texact)>)std::clamp(value, 0, 17);
}

bool ParticleSettings_is_fluid_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_PartSettings_is_fluid_get;
    return fn(ptr);
}

bool ParticleSettings_use_react_start_end_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ParticleSettings_use_react_start_end_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ParticleSettings_use_react_multiple_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void ParticleSettings_use_react_multiple_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool ParticleSettings_use_regrow_hair_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void ParticleSettings_use_regrow_hair_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool ParticleSettings_show_unborn_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void ParticleSettings_show_unborn_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool ParticleSettings_use_dead_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void ParticleSettings_use_dead_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool ParticleSettings_use_emit_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void ParticleSettings_use_emit_random_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

bool ParticleSettings_use_even_distribution_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void ParticleSettings_use_even_distribution_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool ParticleSettings_use_die_on_collision_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void ParticleSettings_use_die_on_collision_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool ParticleSettings_use_size_deflect_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void ParticleSettings_use_size_deflect_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool ParticleSettings_use_rotations_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void ParticleSettings_use_rotations_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool ParticleSettings_use_dynamic_rotation_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 16384) != 0);
}

void ParticleSettings_use_dynamic_rotation_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

bool ParticleSettings_use_multiply_size_mass_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 65536) != 0);
}

void ParticleSettings_use_multiply_size_mass_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 65536); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(65536)); }
}

bool ParticleSettings_use_advanced_hair_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return !((uint64_t(data->flag) & 32768) != 0);
}

void ParticleSettings_use_advanced_hair_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32768); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32768)); }
}

bool ParticleSettings_lock_boids_to_surface_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 524288) != 0);
}

void ParticleSettings_lock_boids_to_surface_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 524288); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(524288)); }
}

bool ParticleSettings_use_hair_bspline_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void ParticleSettings_use_hair_bspline_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool ParticleSettings_invert_grid_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 67108864) != 0);
}

void ParticleSettings_invert_grid_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 67108864); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(67108864)); }
}

bool ParticleSettings_hexagonal_grid_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 16777216) != 0);
}

void ParticleSettings_hexagonal_grid_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16777216); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16777216)); }
}

bool ParticleSettings_apply_effector_to_children_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 134217728) != 0);
}

void ParticleSettings_apply_effector_to_children_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 134217728); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(134217728)); }
}

bool ParticleSettings_create_long_hair_children_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 268435456) != 0);
}

void ParticleSettings_create_long_hair_children_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 268435456); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(268435456)); }
}

bool ParticleSettings_apply_guide_to_children_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 1073741824) != 0);
}

void ParticleSettings_apply_guide_to_children_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1073741824); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1073741824)); }
}

bool ParticleSettings_use_self_effect_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->flag) & 4194304) != 0);
}

void ParticleSettings_use_self_effect_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4194304); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4194304)); }
}

int ParticleSettings_type_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->type);
}

void ParticleSettings_type_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

int ParticleSettings_emit_from_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->from);
}

void ParticleSettings_emit_from_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->from = (std::remove_reference_t<decltype(data->from)>)value;
}

int ParticleSettings_distribution_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->distr);
}

void ParticleSettings_distribution_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->distr = (std::remove_reference_t<decltype(data->distr)>)value;
}

int ParticleSettings_physics_type_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->phystype);
}

void ParticleSettings_physics_type_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->phystype = (std::remove_reference_t<decltype(data->phystype)>)value;
}

int ParticleSettings_rotation_mode_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->rotmode);
}

void ParticleSettings_rotation_mode_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rotmode = (std::remove_reference_t<decltype(data->rotmode)>)value;
}

int ParticleSettings_angular_velocity_mode_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->avemode);
}

void ParticleSettings_angular_velocity_mode_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->avemode = (std::remove_reference_t<decltype(data->avemode)>)value;
}

int ParticleSettings_react_event_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->reactevent);
}

void ParticleSettings_react_event_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->reactevent = (std::remove_reference_t<decltype(data->reactevent)>)value;
}

bool ParticleSettings_show_guide_hairs_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 131072) != 0);
}

void ParticleSettings_show_guide_hairs_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 131072); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(131072)); }
}

bool ParticleSettings_show_hair_grid_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 262144) != 0);
}

void ParticleSettings_show_hair_grid_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 262144); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(262144)); }
}

bool ParticleSettings_show_velocity_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 1) != 0);
}

void ParticleSettings_show_velocity_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 1); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(1)); }
}

bool ParticleSettings_show_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 4) != 0);
}

void ParticleSettings_show_size_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 4); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(4)); }
}

bool ParticleSettings_show_health_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 16) != 0);
}

void ParticleSettings_show_health_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 16); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(16)); }
}

bool ParticleSettings_use_absolute_path_time_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 32) != 0);
}

void ParticleSettings_use_absolute_path_time_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 32); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(32)); }
}

bool ParticleSettings_use_parent_particles_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 256) != 0);
}

void ParticleSettings_use_parent_particles_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 256); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(256)); }
}

bool ParticleSettings_show_number_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 512) != 0);
}

void ParticleSettings_show_number_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 512); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(512)); }
}

bool ParticleSettings_use_collection_pick_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 1024) != 0);
}

void ParticleSettings_use_collection_pick_random_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 1024); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(1024)); }
}

bool ParticleSettings_use_collection_count_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 64) != 0);
}

void ParticleSettings_use_collection_count_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 64); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(64)); }
}

bool ParticleSettings_use_global_instance_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 2) != 0);
}

void ParticleSettings_use_global_instance_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 2); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(2)); }
}

bool ParticleSettings_use_rotation_instance_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 128) != 0);
}

void ParticleSettings_use_rotation_instance_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 128); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(128)); }
}

bool ParticleSettings_use_scale_instance_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return !((uint64_t(data->draw) & 65536) != 0);
}

void ParticleSettings_use_scale_instance_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (!value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 65536); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(65536)); }
}

bool ParticleSettings_use_render_adaptive_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 2048) != 0);
}

void ParticleSettings_use_render_adaptive_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 2048); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(2048)); }
}

bool ParticleSettings_use_velocity_length_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 4096) != 0);
}

void ParticleSettings_use_velocity_length_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 4096); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(4096)); }
}

bool ParticleSettings_use_whole_collection_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 16384) != 0);
}

void ParticleSettings_use_whole_collection_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 16384); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(16384)); }
}

bool ParticleSettings_use_strand_primitive_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->draw) & 32768) != 0);
}

void ParticleSettings_use_strand_primitive_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) | 32768); }
    else { data->draw = std::remove_reference_t<decltype(data->draw)>(uint64_t(data->draw) & ~uint64_t(32768)); }
}

int ParticleSettings_display_method_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->draw_as);
}

void ParticleSettings_display_method_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->draw_as = (std::remove_reference_t<decltype(data->draw_as)>)value;
}

int ParticleSettings_render_type_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->ren_as);
}

void ParticleSettings_render_type_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->ren_as = (std::remove_reference_t<decltype(data->ren_as)>)value;
}

int ParticleSettings_display_color_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->draw_col);
}

void ParticleSettings_display_color_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->draw_col = (std::remove_reference_t<decltype(data->draw_col)>)value;
}

float ParticleSettings_display_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->draw_size);
}

void ParticleSettings_display_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->draw_size = (std::remove_reference_t<decltype(data->draw_size)>)std::clamp(value, 0.0f, 1000.0f);
}

int ParticleSettings_child_type_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->childtype);
}

void ParticleSettings_child_type_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childtype = (std::remove_reference_t<decltype(data->childtype)>)value;
}

int ParticleSettings_display_step_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->draw_step);
}

void ParticleSettings_display_step_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->draw_step = (std::remove_reference_t<decltype(data->draw_step)>)std::clamp(value, 0, 10);
}

int ParticleSettings_render_step_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->ren_step);
}

void ParticleSettings_render_step_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->ren_step = (std::remove_reference_t<decltype(data->ren_step)>)std::clamp(value, 0, 20);
}

int ParticleSettings_hair_step_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->hair_step);
}

void ParticleSettings_hair_step_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->hair_step = (std::remove_reference_t<decltype(data->hair_step)>)std::clamp(value, 2, 32767);
}

float ParticleSettings_bending_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->bending_random);
}

void ParticleSettings_bending_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->bending_random = (std::remove_reference_t<decltype(data->bending_random)>)std::clamp(value, 0.0f, 1.0f);
}

int ParticleSettings_keys_step_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->keys_step);
}

void ParticleSettings_keys_step_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->keys_step = (std::remove_reference_t<decltype(data->keys_step)>)std::clamp(value, 0, 32767);
}

int ParticleSettings_adaptive_angle_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->adapt_angle);
}

void ParticleSettings_adaptive_angle_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->adapt_angle = (std::remove_reference_t<decltype(data->adapt_angle)>)std::clamp(value, 0, 45);
}

int ParticleSettings_adaptive_pixel_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->adapt_pix);
}

void ParticleSettings_adaptive_pixel_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->adapt_pix = (std::remove_reference_t<decltype(data->adapt_pix)>)std::clamp(value, 0, 50);
}

int ParticleSettings_display_percentage_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->disp);
}

void ParticleSettings_display_percentage_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->disp = (std::remove_reference_t<decltype(data->disp)>)std::clamp(value, 0, 100);
}

int ParticleSettings_material_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->omat);
}

void ParticleSettings_material_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->omat = (std::remove_reference_t<decltype(data->omat)>)std::clamp(value, 1, 32767);
}

int ParticleSettings_material_slot_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->omat);
}

void ParticleSettings_material_slot_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->omat = (std::remove_reference_t<decltype(data->omat)>)value;
}

int ParticleSettings_integrator_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->integrator);
}

void ParticleSettings_integrator_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->integrator = (std::remove_reference_t<decltype(data->integrator)>)value;
}

int ParticleSettings_kink_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->kink);
}

void ParticleSettings_kink_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink = (std::remove_reference_t<decltype(data->kink)>)value;
}

int ParticleSettings_kink_axis_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->kink_axis);
}

void ParticleSettings_kink_axis_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_axis = (std::remove_reference_t<decltype(data->kink_axis)>)value;
}

float ParticleSettings_color_maximum_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->color_vec_max);
}

void ParticleSettings_color_maximum_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->color_vec_max = (std::remove_reference_t<decltype(data->color_vec_max)>)std::clamp(value, 0.0099999998f, 100.0f);
}

float ParticleSettings_frame_start_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->sta);
}

void ParticleSettings_frame_start_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_PartSettings_start_set;
    fn(ptr, value);
}

float ParticleSettings_frame_end_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->end);
}

void ParticleSettings_frame_end_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_PartSettings_end_set;
    fn(ptr, value);
}

float ParticleSettings_lifetime_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->lifetime);
}

void ParticleSettings_lifetime_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->lifetime = (std::remove_reference_t<decltype(data->lifetime)>)std::clamp(value, 1.0f, 1048574.0f);
}

float ParticleSettings_lifetime_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randlife);
}

void ParticleSettings_lifetime_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randlife = (std::remove_reference_t<decltype(data->randlife)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_time_tweak_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->timetweak);
}

void ParticleSettings_time_tweak_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->timetweak = (std::remove_reference_t<decltype(data->timetweak)>)std::clamp(value, 0.0f, 100.0f);
}

float ParticleSettings_timestep_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_PartSettings_timestep_get;
    return fn(ptr);
}

void ParticleSettings_timestep_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_PartSetings_timestep_set;
    fn(ptr, value);
}

bool ParticleSettings_use_adaptive_subframes_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->time_flag) & 1) != 0);
}

void ParticleSettings_use_adaptive_subframes_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->time_flag = std::remove_reference_t<decltype(data->time_flag)>(uint64_t(data->time_flag) | 1); }
    else { data->time_flag = std::remove_reference_t<decltype(data->time_flag)>(uint64_t(data->time_flag) & ~uint64_t(1)); }
}

int ParticleSettings_subframes_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->subframes);
}

void ParticleSettings_subframes_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->subframes = (std::remove_reference_t<decltype(data->subframes)>)std::clamp(value, 0, 1000);
}

float ParticleSettings_courant_target_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->courant_target);
}

void ParticleSettings_courant_target_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->courant_target = (std::remove_reference_t<decltype(data->courant_target)>)std::clamp(value, 0.0001000000f, 10.0f);
}

float ParticleSettings_jitter_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->jitfac);
}

void ParticleSettings_jitter_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->jitfac = (std::remove_reference_t<decltype(data->jitfac)>)std::clamp(value, 0.0f, 2.0f);
}

float ParticleSettings_effect_hair_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->eff_hair);
}

void ParticleSettings_effect_hair_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->eff_hair = (std::remove_reference_t<decltype(data->eff_hair)>)std::clamp(value, 0.0f, 1.0f);
}

int ParticleSettings_count_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->totpart);
}

void ParticleSettings_count_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->totpart = (std::remove_reference_t<decltype(data->totpart)>)std::clamp(value, 0, INT_MAX);
}

int ParticleSettings_userjit_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->userjit);
}

void ParticleSettings_userjit_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->userjit = (std::remove_reference_t<decltype(data->userjit)>)std::clamp(value, 0, 1000);
}

int ParticleSettings_grid_resolution_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->grid_res);
}

void ParticleSettings_grid_resolution_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->grid_res = (std::remove_reference_t<decltype(data->grid_res)>)std::clamp(value, 1, 250);
}

float ParticleSettings_grid_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->grid_rand);
}

void ParticleSettings_grid_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->grid_rand = (std::remove_reference_t<decltype(data->grid_rand)>)std::clamp(value, 0.0f, 1.0f);
}

int ParticleSettings_effector_amount_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->effector_amount);
}

void ParticleSettings_effector_amount_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->effector_amount = (std::remove_reference_t<decltype(data->effector_amount)>)std::clamp(value, 0, 10000);
}

float ParticleSettings_normal_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->normfac);
}

void ParticleSettings_normal_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->normfac = (std::remove_reference_t<decltype(data->normfac)>)std::clamp(value, -1000.0f, 1000.0f);
}

float ParticleSettings_object_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->obfac);
}

void ParticleSettings_object_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->obfac = (std::remove_reference_t<decltype(data->obfac)>)std::clamp(value, -200.0f, 200.0f);
}

float ParticleSettings_factor_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randfac);
}

void ParticleSettings_factor_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randfac = (std::remove_reference_t<decltype(data->randfac)>)std::clamp(value, 0.0f, 200.0f);
}

float ParticleSettings_particle_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->partfac);
}

void ParticleSettings_particle_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->partfac = (std::remove_reference_t<decltype(data->partfac)>)std::clamp(value, -200.0f, 200.0f);
}

float ParticleSettings_tangent_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->tanfac);
}

void ParticleSettings_tangent_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->tanfac = (std::remove_reference_t<decltype(data->tanfac)>)std::clamp(value, -1000.0f, 1000.0f);
}

float ParticleSettings_tangent_phase_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->tanphase);
}

void ParticleSettings_tangent_phase_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->tanphase = (std::remove_reference_t<decltype(data->tanphase)>)std::clamp(value, -1.0f, 1.0f);
}

float ParticleSettings_reactor_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->reactfac);
}

void ParticleSettings_reactor_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->reactfac = (std::remove_reference_t<decltype(data->reactfac)>)std::clamp(value, -10.0f, 10.0f);
}

void ParticleSettings_object_align_factor_get(PointerRNA *ptr, float values[3])
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->ob_vel)[i]);
    }
}

void ParticleSettings_object_align_factor_set(PointerRNA *ptr, const float values[3])
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->ob_vel)[i] = std::clamp(values[i], -200.0f, 200.0f);
    }
}

float ParticleSettings_angular_velocity_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->avefac);
}

void ParticleSettings_angular_velocity_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->avefac = (std::remove_reference_t<decltype(data->avefac)>)std::clamp(value, -200.0f, 200.0f);
}

float ParticleSettings_phase_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->phasefac);
}

void ParticleSettings_phase_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->phasefac = (std::remove_reference_t<decltype(data->phasefac)>)std::clamp(value, -1.0f, 1.0f);
}

float ParticleSettings_rotation_factor_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randrotfac);
}

void ParticleSettings_rotation_factor_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randrotfac = (std::remove_reference_t<decltype(data->randrotfac)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_phase_factor_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randphasefac);
}

void ParticleSettings_phase_factor_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randphasefac = (std::remove_reference_t<decltype(data->randphasefac)>)std::clamp(value, 0.0f, 2.0f);
}

float ParticleSettings_hair_length_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_PartSetting_hairlength_get;
    return fn(ptr);
}

void ParticleSettings_hair_length_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_PartSetting_hairlength_set;
    fn(ptr, value);
}

float ParticleSettings_mass_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->mass);
}

void ParticleSettings_mass_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->mass = (std::remove_reference_t<decltype(data->mass)>)std::clamp(value, 0.0000000100f, 100000.0f);
}

float ParticleSettings_particle_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->size);
}

void ParticleSettings_particle_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->size = (std::remove_reference_t<decltype(data->size)>)std::clamp(value, 0.0010000000f, 100000.0f);
}

float ParticleSettings_size_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randsize);
}

void ParticleSettings_size_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randsize = (std::remove_reference_t<decltype(data->randsize)>)std::clamp(value, 0.0f, 1.0f);
}

PointerRNA ParticleSettings_collision_collection_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->collision_group);
}

void ParticleSettings_collision_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->collision_group = value.data;
}

float ParticleSettings_drag_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->dragfac);
}

void ParticleSettings_drag_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->dragfac = (std::remove_reference_t<decltype(data->dragfac)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_brownian_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->brownfac);
}

void ParticleSettings_brownian_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->brownfac = (std::remove_reference_t<decltype(data->brownfac)>)std::clamp(value, 0.0f, 200.0f);
}

float ParticleSettings_damping_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->dampfac);
}

void ParticleSettings_damping_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->dampfac = (std::remove_reference_t<decltype(data->dampfac)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_length_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->randlength);
}

void ParticleSettings_length_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->randlength = (std::remove_reference_t<decltype(data->randlength)>)std::clamp(value, 0.0f, 1.0f);
}

int ParticleSettings_child_percent_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->child_percent);
}

void ParticleSettings_child_percent_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->child_percent = (std::remove_reference_t<decltype(data->child_percent)>)std::clamp(value, 0, 100000);
}

int ParticleSettings_rendered_child_count_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->child_render_percent);
}

void ParticleSettings_rendered_child_count_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->child_render_percent = (std::remove_reference_t<decltype(data->child_render_percent)>)std::clamp(value, 0, 100000);
}

float ParticleSettings_virtual_parents_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->parents);
}

void ParticleSettings_virtual_parents_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->parents = (std::remove_reference_t<decltype(data->parents)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_child_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->childsize);
}

void ParticleSettings_child_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childsize = (std::remove_reference_t<decltype(data->childsize)>)std::clamp(value, 0.0010000000f, 100000.0f);
}

float ParticleSettings_child_size_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->childrandsize);
}

void ParticleSettings_child_size_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childrandsize = (std::remove_reference_t<decltype(data->childrandsize)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_child_radius_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->childrad);
}

void ParticleSettings_child_radius_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childrad = (std::remove_reference_t<decltype(data->childrad)>)std::clamp(value, 0.0f, 100000.0f);
}

float ParticleSettings_child_roundness_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->childflat);
}

void ParticleSettings_child_roundness_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->childflat = (std::remove_reference_t<decltype(data->childflat)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_clump_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clumpfac);
}

void ParticleSettings_clump_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clumpfac = (std::remove_reference_t<decltype(data->clumpfac)>)std::clamp(value, -1.0f, 1.0f);
}

float ParticleSettings_clump_shape_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clumppow);
}

void ParticleSettings_clump_shape_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clumppow = (std::remove_reference_t<decltype(data->clumppow)>)std::clamp(value, -0.9990000129f, 0.9990000129f);
}

bool ParticleSettings_use_clump_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->child_flag) & 2) != 0);
}

void ParticleSettings_use_clump_curve_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->child_flag = std::remove_reference_t<decltype(data->child_flag)>(uint64_t(data->child_flag) | 2); }
    else { data->child_flag = std::remove_reference_t<decltype(data->child_flag)>(uint64_t(data->child_flag) & ~uint64_t(2)); }
}

PointerRNA ParticleSettings_clump_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->clumpcurve);
}

bool ParticleSettings_use_clump_noise_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->child_flag) & 1) != 0);
}

void ParticleSettings_use_clump_noise_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->child_flag = std::remove_reference_t<decltype(data->child_flag)>(uint64_t(data->child_flag) | 1); }
    else { data->child_flag = std::remove_reference_t<decltype(data->child_flag)>(uint64_t(data->child_flag) & ~uint64_t(1)); }
}

float ParticleSettings_clump_noise_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clump_noise_size);
}

void ParticleSettings_clump_noise_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clump_noise_size = (std::remove_reference_t<decltype(data->clump_noise_size)>)std::clamp(value, 0.0000100000f, 100000.0f);
}

float ParticleSettings_kink_amplitude_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_amp);
}

void ParticleSettings_kink_amplitude_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_amp = (std::remove_reference_t<decltype(data->kink_amp)>)std::clamp(value, -100000.0f, 100000.0f);
}

float ParticleSettings_kink_amplitude_clump_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_amp_clump);
}

void ParticleSettings_kink_amplitude_clump_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_amp_clump = (std::remove_reference_t<decltype(data->kink_amp_clump)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_kink_amplitude_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_amp_random);
}

void ParticleSettings_kink_amplitude_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_amp_random = (std::remove_reference_t<decltype(data->kink_amp_random)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_kink_frequency_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_freq);
}

void ParticleSettings_kink_frequency_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_freq = (std::remove_reference_t<decltype(data->kink_freq)>)std::clamp(value, -100000.0f, 100000.0f);
}

float ParticleSettings_kink_shape_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_shape);
}

void ParticleSettings_kink_shape_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_shape = (std::remove_reference_t<decltype(data->kink_shape)>)std::clamp(value, -0.9990000129f, 0.9990000129f);
}

float ParticleSettings_kink_flat_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_flat);
}

void ParticleSettings_kink_flat_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_flat = (std::remove_reference_t<decltype(data->kink_flat)>)std::clamp(value, 0.0f, 1.0f);
}

int ParticleSettings_kink_extra_steps_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->kink_extra_steps);
}

void ParticleSettings_kink_extra_steps_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_extra_steps = (std::remove_reference_t<decltype(data->kink_extra_steps)>)std::clamp(value, 1, INT_MAX);
}

float ParticleSettings_kink_axis_random_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->kink_axis_random);
}

void ParticleSettings_kink_axis_random_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->kink_axis_random = (std::remove_reference_t<decltype(data->kink_axis_random)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_roughness_1_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough1);
}

void ParticleSettings_roughness_1_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough1 = (std::remove_reference_t<decltype(data->rough1)>)std::clamp(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_1_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough1_size);
}

void ParticleSettings_roughness_1_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough1_size = (std::remove_reference_t<decltype(data->rough1_size)>)std::clamp(value, 0.0099999998f, 100000.0f);
}

float ParticleSettings_roughness_2_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough2);
}

void ParticleSettings_roughness_2_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough2 = (std::remove_reference_t<decltype(data->rough2)>)std::clamp(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_2_size_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough2_size);
}

void ParticleSettings_roughness_2_size_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough2_size = (std::remove_reference_t<decltype(data->rough2_size)>)std::clamp(value, 0.0099999998f, 100000.0f);
}

float ParticleSettings_roughness_2_threshold_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough2_thres);
}

void ParticleSettings_roughness_2_threshold_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough2_thres = (std::remove_reference_t<decltype(data->rough2_thres)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_roughness_endpoint_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough_end);
}

void ParticleSettings_roughness_endpoint_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough_end = (std::remove_reference_t<decltype(data->rough_end)>)std::clamp(value, 0.0f, 100000.0f);
}

float ParticleSettings_roughness_end_shape_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rough_end_shape);
}

void ParticleSettings_roughness_end_shape_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rough_end_shape = (std::remove_reference_t<decltype(data->rough_end_shape)>)std::clamp(value, 0.0f, 10.0f);
}

bool ParticleSettings_use_roughness_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->child_flag) & 4) != 0);
}

void ParticleSettings_use_roughness_curve_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->child_flag = std::remove_reference_t<decltype(data->child_flag)>(uint64_t(data->child_flag) | 4); }
    else { data->child_flag = std::remove_reference_t<decltype(data->child_flag)>(uint64_t(data->child_flag) & ~uint64_t(4)); }
}

PointerRNA ParticleSettings_roughness_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->roughcurve);
}

float ParticleSettings_child_length_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clength);
}

void ParticleSettings_child_length_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clength = (std::remove_reference_t<decltype(data->clength)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_child_length_threshold_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->clength_thres);
}

void ParticleSettings_child_length_threshold_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->clength_thres = (std::remove_reference_t<decltype(data->clength_thres)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_child_parting_factor_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->parting_fac);
}

void ParticleSettings_child_parting_factor_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->parting_fac = (std::remove_reference_t<decltype(data->parting_fac)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_child_parting_min_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->parting_min);
}

void ParticleSettings_child_parting_min_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->parting_min = (std::remove_reference_t<decltype(data->parting_min)>)std::clamp(value, 0.0f, 180.0f);
}

float ParticleSettings_child_parting_max_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->parting_max);
}

void ParticleSettings_child_parting_max_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->parting_max = (std::remove_reference_t<decltype(data->parting_max)>)std::clamp(value, 0.0f, 180.0f);
}

float ParticleSettings_branch_threshold_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->branch_thres);
}

void ParticleSettings_branch_threshold_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->branch_thres = (std::remove_reference_t<decltype(data->branch_thres)>)std::clamp(value, 0.0f, 1.0f);
}

float ParticleSettings_line_length_tail_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_PartSetting_linelentail_get;
    return fn(ptr);
}

void ParticleSettings_line_length_tail_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_PartSetting_linelentail_set;
    fn(ptr, value);
}

float ParticleSettings_line_length_head_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_PartSetting_linelenhead_get;
    return fn(ptr);
}

void ParticleSettings_line_length_head_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_PartSetting_linelenhead_set;
    fn(ptr, value);
}

float ParticleSettings_path_start_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->path_start);
}

void ParticleSettings_path_start_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_PartSetting_pathstartend_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->path_start = (std::remove_reference_t<decltype(data->path_start)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

float ParticleSettings_path_end_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->path_end);
}

void ParticleSettings_path_end_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
    rna_PartSetting_pathstartend_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
    data->path_end = (std::remove_reference_t<decltype(data->path_end)>)std::clamp(value, prop_clamp_min, prop_clamp_max);
}

int ParticleSettings_trail_count_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->trail_count);
}

void ParticleSettings_trail_count_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->trail_count = (std::remove_reference_t<decltype(data->trail_count)>)std::clamp(value, 1, 100000);
}

int ParticleSettings_keyed_loops_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (int)(data->keyed_loops);
}

void ParticleSettings_keyed_loops_set(PointerRNA *ptr, int value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->keyed_loops = (std::remove_reference_t<decltype(data->keyed_loops)>)std::clamp(value, 1, 10000);
}

bool ParticleSettings_use_modifier_stack_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (bool)(data->use_modifier_stack);
}

void ParticleSettings_use_modifier_stack_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->use_modifier_stack = (std::remove_reference_t<decltype(data->use_modifier_stack)>)value;
}

PointerRNA ParticleSettings_instance_collection_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->instance_collection);
}

void ParticleSettings_instance_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->instance_collection) {
        id_us_min((ID *)data->instance_collection);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->instance_collection = value.data;
}

static PointerRNA ParticleSettings_instance_weights_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ParticleDupliWeight, rna_iterator_listbase_get(iter));
}

void ParticleSettings_instance_weights_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleSettings_instance_weights;

    rna_iterator_listbase_begin(iter, ptr, &data->instance_weights, nullptr);

    if (iter->valid) {
        iter->ptr = ParticleSettings_instance_weights_get(iter);
    }
}

void ParticleSettings_instance_weights_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleSettings_instance_weights_get(iter);
    }
}

void ParticleSettings_instance_weights_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleSettings_instance_weights_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ParticleSettings_instance_weights_begin(&iter, ptr);

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
        if (found) { *r_ptr = ParticleSettings_instance_weights_get(&iter); }
    }

    ParticleSettings_instance_weights_end(&iter);

    return found;
}

int ParticleDupliWeight_name_length(PointerRNA *);
void ParticleDupliWeight_name_get(PointerRNA *, char *);

bool ParticleSettings_instance_weights_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ParticleSettings_instance_weights_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = ParticleDupliWeight_name_length(&iter.ptr);
            if (namelen < 1024) {
                ParticleDupliWeight_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                ParticleDupliWeight_name_get(&iter.ptr, name);
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
        ParticleSettings_instance_weights_next(&iter);
    }
    ParticleSettings_instance_weights_end(&iter);

    return found;
}

PointerRNA ParticleSettings_active_instanceweight_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ParticleDupliWeight_active_get;
    return fn(ptr);
}

int ParticleSettings_active_instanceweight_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ParticleDupliWeight_active_index_get;
    return fn(ptr);
}

void ParticleSettings_active_instanceweight_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ParticleDupliWeight_active_index_set;
    fn(ptr, value);
}

PointerRNA ParticleSettings_instance_object_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->instance_object);
}

void ParticleSettings_instance_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->instance_object = value.data;
}

PointerRNA ParticleSettings_boids_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_BoidSettings, data->boids);
}

PointerRNA ParticleSettings_fluid_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_SPHFluidSettings, data->fluid);
}

PointerRNA ParticleSettings_effector_weights_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_EffectorWeights, data->effector_weights);
}

PointerRNA ParticleSettings_animation_data_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

PointerRNA ParticleSettings_force_field_1_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Particle_field1_get;
    return fn(ptr);
}

PointerRNA ParticleSettings_force_field_2_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Particle_field2_get;
    return fn(ptr);
}

float ParticleSettings_twist_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->twist);
}

void ParticleSettings_twist_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->twist = (std::remove_reference_t<decltype(data->twist)>)std::clamp(value, -100000.0f, 100000.0f);
}

bool ParticleSettings_use_twist_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->child_flag) & 8) != 0);
}

void ParticleSettings_use_twist_curve_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->child_flag = std::remove_reference_t<decltype(data->child_flag)>(uint64_t(data->child_flag) | 8); }
    else { data->child_flag = std::remove_reference_t<decltype(data->child_flag)>(uint64_t(data->child_flag) & ~uint64_t(8)); }
}

PointerRNA ParticleSettings_twist_curve_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_CurveMapping, data->twistcurve);
}

bool ParticleSettings_use_close_tip_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return ((uint64_t(data->shape_flag) & 1) != 0);
}

void ParticleSettings_use_close_tip_set(PointerRNA *ptr, bool value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    if (value) { data->shape_flag = std::remove_reference_t<decltype(data->shape_flag)>(uint64_t(data->shape_flag) | 1); }
    else { data->shape_flag = std::remove_reference_t<decltype(data->shape_flag)>(uint64_t(data->shape_flag) & ~uint64_t(1)); }
}

float ParticleSettings_shape_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->shape);
}

void ParticleSettings_shape_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->shape = (std::remove_reference_t<decltype(data->shape)>)std::clamp(value, -1.0f, 1.0f);
}

float ParticleSettings_root_radius_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rad_root);
}

void ParticleSettings_root_radius_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rad_root = (std::remove_reference_t<decltype(data->rad_root)>)std::clamp(value, 0.0f, FLT_MAX);
}

float ParticleSettings_tip_radius_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rad_tip);
}

void ParticleSettings_tip_radius_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rad_tip = (std::remove_reference_t<decltype(data->rad_tip)>)std::clamp(value, 0.0f, FLT_MAX);
}

float ParticleSettings_radius_scale_get(PointerRNA *ptr)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    return (float)(data->rad_scale);
}

void ParticleSettings_radius_scale_set(PointerRNA *ptr, float value)
{
    ParticleSettings *data = (ParticleSettings *)(ptr->data);
    data->rad_scale = (std::remove_reference_t<decltype(data->rad_scale)>)std::clamp(value, 0.0f, FLT_MAX);
}

static PointerRNA ParticleSettingsTextureSlots_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ParticleSettingsTextureSlots_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ParticleSettingsTextureSlots_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ParticleSettingsTextureSlots_rna_properties_get(iter);
    }
}

void ParticleSettingsTextureSlots_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ParticleSettingsTextureSlots_rna_properties_get(iter);
    }
}

void ParticleSettingsTextureSlots_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ParticleSettingsTextureSlots_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ParticleSettingsTextureSlots_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}



void ParticleHairKey_co_object_func(HairKey *_self, Object *object, ParticleSystemModifierData *modifier, ParticleData *particle, float co[3])
{
	rna_ParticleHairKey_co_object(_self, object, modifier, particle, co);
}

static void ParticleHairKey_co_object_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	HairKey *_self;
	Object *object;
	ParticleSystemModifierData *modifier;
	ParticleData *particle;
	float *co;
	char *_data;
	
	_self = (HairKey *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	_data += 8;
	modifier = *((ParticleSystemModifierData **)_data);
	_data += 8;
	particle = *((ParticleData **)_data);
	_data += 8;
	co = ((float *)_data);
	
	rna_ParticleHairKey_co_object(_self, object, modifier, particle, co);
}

void ParticleHairKey_co_object_set_func(ID *_selfid, HairKey *_self, Object *object, ParticleSystemModifierData *modifier, ParticleData *particle, float co[3])
{
	rna_ParticleHairKey_co_object_set(_selfid, _self, object, modifier, particle, co);
}

static void ParticleHairKey_co_object_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	HairKey *_self;
	Object *object;
	ParticleSystemModifierData *modifier;
	ParticleData *particle;
	const float *co;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (HairKey *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	_data += 8;
	modifier = *((ParticleSystemModifierData **)_data);
	_data += 8;
	particle = *((ParticleData **)_data);
	_data += 8;
	co = ((const float *)_data);
	
	rna_ParticleHairKey_co_object_set(_selfid, _self, object, modifier, particle, co);
}

/* Repeated prototypes to detect errors */

void rna_ParticleHairKey_co_object(HairKey *_self, Object *object, ParticleSystemModifierData *modifier, ParticleData *particle, float co[3]);
void rna_ParticleHairKey_co_object_set(ID *_selfid, HairKey *_self, Object *object, ParticleSystemModifierData *modifier, ParticleData *particle, float co[3]);



void Particle_uv_on_emitter_func(ParticleData *_self, ReportList *reports, ParticleSystemModifierData *modifier, float uv[2])
{
	rna_Particle_uv_on_emitter(_self, reports, modifier, uv);
}

static void Particle_uv_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ParticleData *_self;
	ParticleSystemModifierData *modifier;
	float *uv;
	char *_data;
	
	_self = (ParticleData *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((ParticleSystemModifierData **)_data);
	_data += 8;
	uv = ((float *)_data);
	
	rna_Particle_uv_on_emitter(_self, reports, modifier, uv);
}

/* Repeated prototypes to detect errors */

void rna_Particle_uv_on_emitter(ParticleData *_self, ReportList *reports, ParticleSystemModifierData *modifier, float uv[2]);


void ParticleSystem_co_hair_func(ParticleSystem *_self, Object *object, int particle_no, int step, float co[3])
{
	BKE_particle_co_hair(_self, object, particle_no, step, co);
}

static void ParticleSystem_co_hair_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ParticleSystem *_self;
	Object *object;
	int particle_no;
	int step;
	float *co;
	char *_data;
	
	_self = (ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	_data += 8;
	particle_no = *((int *)_data);
	_data += 8;
	step = *((int *)_data);
	_data += 8;
	co = ((float *)_data);
	
	BKE_particle_co_hair(_self, object, particle_no, step, co);
}

void ParticleSystem_uv_on_emitter_func(ParticleSystem *_self, ReportList *reports, ParticleSystemModifierData *modifier, ParticleData *particle, int particle_no, int uv_no, float uv[2])
{
	BKE_particle_uv_on_emitter(_self, reports, modifier, particle, particle_no, uv_no, uv);
}

static void ParticleSystem_uv_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ParticleSystem *_self;
	ParticleSystemModifierData *modifier;
	ParticleData *particle;
	int particle_no;
	int uv_no;
	float *uv;
	char *_data;
	
	_self = (ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((ParticleSystemModifierData **)_data);
	_data += 8;
	particle = *((ParticleData **)_data);
	_data += 8;
	particle_no = *((int *)_data);
	_data += 8;
	uv_no = *((int *)_data);
	_data += 8;
	uv = ((float *)_data);
	
	BKE_particle_uv_on_emitter(_self, reports, modifier, particle, particle_no, uv_no, uv);
}

void ParticleSystem_mcol_on_emitter_func(ParticleSystem *_self, ReportList *reports, ParticleSystemModifierData *modifier, ParticleData *particle, int particle_no, int vcol_no, float mcol[3])
{
	BKE_particle_mcol_on_emitter(_self, reports, modifier, particle, particle_no, vcol_no, mcol);
}

static void ParticleSystem_mcol_on_emitter_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ParticleSystem *_self;
	ParticleSystemModifierData *modifier;
	ParticleData *particle;
	int particle_no;
	int vcol_no;
	float *mcol;
	char *_data;
	
	_self = (ParticleSystem *)_ptr->data;
	_data = (char *)_parms->data;
	modifier = *((ParticleSystemModifierData **)_data);
	_data += 8;
	particle = *((ParticleData **)_data);
	_data += 8;
	particle_no = *((int *)_data);
	_data += 8;
	vcol_no = *((int *)_data);
	_data += 8;
	mcol = ((float *)_data);
	
	BKE_particle_mcol_on_emitter(_self, reports, modifier, particle, particle_no, vcol_no, mcol);
}

/* Repeated prototypes to detect errors */

void BKE_particle_co_hair(ParticleSystem *_self, Object *object, int particle_no, int step, float co[3]);
void BKE_particle_uv_on_emitter(ParticleSystem *_self, ReportList *reports, ParticleSystemModifierData *modifier, ParticleData *particle, int particle_no, int uv_no, float uv[2]);
void BKE_particle_mcol_on_emitter(ParticleSystem *_self, ReportList *reports, ParticleSystemModifierData *modifier, ParticleData *particle, int particle_no, int vcol_no, float mcol[3]);



MTex *ParticleSettingsTextureSlots_add_func(ID *_selfid, bContext *C, ReportList *reports)
{
	return rna_mtex_texture_slots_add(_selfid, C, reports);
}

static void ParticleSettingsTextureSlots_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_add(_selfid, C, reports);
	*((MTex **)_retdata) = mtex;
}

MTex *ParticleSettingsTextureSlots_create_func(ID *_selfid, bContext *C, ReportList *reports, int index)
{
	return rna_mtex_texture_slots_create(_selfid, C, reports, index);
}

static void ParticleSettingsTextureSlots_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	int index;
	MTex *mtex;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	mtex = rna_mtex_texture_slots_create(_selfid, C, reports, index);
	*((MTex **)_retdata) = mtex;
}

void ParticleSettingsTextureSlots_clear_func(ID *_selfid, bContext *C, ReportList *reports, int index)
{
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

static void ParticleSettingsTextureSlots_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	int index;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_data = (char *)_parms->data;
	index = *((int *)_data);
	
	rna_mtex_texture_slots_clear(_selfid, C, reports, index);
}

/* Repeated prototypes to detect errors */

MTex *rna_mtex_texture_slots_add(ID *_selfid, bContext *C, ReportList *reports);
MTex *rna_mtex_texture_slots_create(ID *_selfid, bContext *C, ReportList *reports, int index);
void rna_mtex_texture_slots_clear(ID *_selfid, bContext *C, ReportList *reports, int index);

/* Particle Target */
static CollectionPropertyRNA rna_ParticleTarget_rna_properties_;
PropertyRNA &rna_ParticleTarget_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_rna_properties_);

static PointerPropertyRNA rna_ParticleTarget_rna_type_;
PropertyRNA &rna_ParticleTarget_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_rna_type_);

static StringPropertyRNA rna_ParticleTarget_name_;
PropertyRNA &rna_ParticleTarget_name = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_name_);

static PointerPropertyRNA rna_ParticleTarget_object_;
PropertyRNA &rna_ParticleTarget_object = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_object_);

static IntPropertyRNA rna_ParticleTarget_system_;
PropertyRNA &rna_ParticleTarget_system = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_system_);

static FloatPropertyRNA rna_ParticleTarget_time_;
PropertyRNA &rna_ParticleTarget_time = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_time_);

static FloatPropertyRNA rna_ParticleTarget_duration_;
PropertyRNA &rna_ParticleTarget_duration = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_duration_);

static BoolPropertyRNA rna_ParticleTarget_is_valid_;
PropertyRNA &rna_ParticleTarget_is_valid = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_is_valid_);

static EnumPropertyRNA rna_ParticleTarget_alliance_;
PropertyRNA &rna_ParticleTarget_alliance = reinterpret_cast<PropertyRNA &>(rna_ParticleTarget_alliance_);

StructRNA *RNA_ParticleTarget;
void register_struct_ParticleTarget(BlenderRNA &brna)
{
	rna_ParticleTarget_rna_properties_ = {
		{&rna_ParticleTarget_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleTarget_rna_properties_begin, ParticleTarget_rna_properties_next, ParticleTarget_rna_properties_end, ParticleTarget_rna_properties_get, nullptr, nullptr, ParticleTarget_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleTarget_rna_type_ = {
		{&rna_ParticleTarget_name, 	&rna_ParticleTarget_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleTarget_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ParticleTarget_name_ = {
		{&rna_ParticleTarget_object, 	&rna_ParticleTarget_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Particle target name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleTarget_name_get, ParticleTarget_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleTarget_object_ = {
		{&rna_ParticleTarget_system, 	&rna_ParticleTarget_name,
		-1, "object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Target Object",
		"The object that has the target particle system (empty if same object)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_target_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleTarget_object_get, ParticleTarget_object_set, nullptr, nullptr,RNA_Object
	};

	rna_ParticleTarget_system_ = {
		{&rna_ParticleTarget_time, 	&rna_ParticleTarget_object,
		-1, "system", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Target Particle System",
		"The index of particle system on the target object",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_target_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleTarget, psys), RawPropertyType(0), nullptr},
		ParticleTarget_system_get, ParticleTarget_system_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleTarget_time_ = {
		{&rna_ParticleTarget_duration, 	&rna_ParticleTarget_system,
		-1, "time", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Time",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_target_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleTarget, time), RawPropertyType(5), nullptr},
		ParticleTarget_time_get, ParticleTarget_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1048574.0f, 0.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleTarget_duration_ = {
		{&rna_ParticleTarget_is_valid, 	&rna_ParticleTarget_time,
		-1, "duration", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Duration",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_target_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleTarget, duration), RawPropertyType(5), nullptr},
		ParticleTarget_duration_get, ParticleTarget_duration_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1048574.0f, 0.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleTarget_is_valid_ = {
		{&rna_ParticleTarget_alliance, 	&rna_ParticleTarget_duration,
		-1, "is_valid", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Valid",
		"Keyed particles target is valid",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleTarget_is_valid_get, ParticleTarget_is_valid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_ParticleTarget_alliance_items[4] = {
		{1, "FRIEND", 0, "Friend", ""	},
		{0, "NEUTRAL", 0, "Neutral", ""	},
		{2, "ENEMY", 0, "Enemy", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleTarget_alliance_ = {
		{nullptr, 	&rna_ParticleTarget_is_valid,
		-1, "alliance", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_target_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleTarget, mode), RawPropertyType(1), nullptr},
		ParticleTarget_alliance_get, ParticleTarget_alliance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleTarget_alliance_items, 3, 0
	};

	StructRNA *srna = RNA_ParticleTarget;
	srna->cont.properties = {&rna_ParticleTarget_rna_properties, &rna_ParticleTarget_alliance};
	srna->identifier = "ParticleTarget";
	srna->flag = 516;
	srna->name = "Particle Target";
	srna->description = "Target particle system";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_ParticleTarget_name;
	srna->iteratorproperty = &rna_ParticleTarget_rna_properties;
};

/* SPH Fluid Settings */
static CollectionPropertyRNA rna_SPHFluidSettings_rna_properties_;
PropertyRNA &rna_SPHFluidSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_rna_properties_);

static PointerPropertyRNA rna_SPHFluidSettings_rna_type_;
PropertyRNA &rna_SPHFluidSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_rna_type_);

static EnumPropertyRNA rna_SPHFluidSettings_solver_;
PropertyRNA &rna_SPHFluidSettings_solver = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_solver_);

static FloatPropertyRNA rna_SPHFluidSettings_spring_force_;
PropertyRNA &rna_SPHFluidSettings_spring_force = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_spring_force_);

static FloatPropertyRNA rna_SPHFluidSettings_fluid_radius_;
PropertyRNA &rna_SPHFluidSettings_fluid_radius = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_fluid_radius_);

static FloatPropertyRNA rna_SPHFluidSettings_rest_length_;
PropertyRNA &rna_SPHFluidSettings_rest_length = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_rest_length_);

static BoolPropertyRNA rna_SPHFluidSettings_use_viscoelastic_springs_;
PropertyRNA &rna_SPHFluidSettings_use_viscoelastic_springs = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_use_viscoelastic_springs_);

static BoolPropertyRNA rna_SPHFluidSettings_use_initial_rest_length_;
PropertyRNA &rna_SPHFluidSettings_use_initial_rest_length = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_use_initial_rest_length_);

static FloatPropertyRNA rna_SPHFluidSettings_plasticity_;
PropertyRNA &rna_SPHFluidSettings_plasticity = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_plasticity_);

static FloatPropertyRNA rna_SPHFluidSettings_yield_ratio_;
PropertyRNA &rna_SPHFluidSettings_yield_ratio = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_yield_ratio_);

static IntPropertyRNA rna_SPHFluidSettings_spring_frames_;
PropertyRNA &rna_SPHFluidSettings_spring_frames = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_spring_frames_);

static FloatPropertyRNA rna_SPHFluidSettings_linear_viscosity_;
PropertyRNA &rna_SPHFluidSettings_linear_viscosity = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_linear_viscosity_);

static FloatPropertyRNA rna_SPHFluidSettings_stiff_viscosity_;
PropertyRNA &rna_SPHFluidSettings_stiff_viscosity = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_stiff_viscosity_);

static FloatPropertyRNA rna_SPHFluidSettings_stiffness_;
PropertyRNA &rna_SPHFluidSettings_stiffness = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_stiffness_);

static FloatPropertyRNA rna_SPHFluidSettings_repulsion_;
PropertyRNA &rna_SPHFluidSettings_repulsion = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_repulsion_);

static FloatPropertyRNA rna_SPHFluidSettings_rest_density_;
PropertyRNA &rna_SPHFluidSettings_rest_density = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_rest_density_);

static FloatPropertyRNA rna_SPHFluidSettings_buoyancy_;
PropertyRNA &rna_SPHFluidSettings_buoyancy = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_buoyancy_);

static BoolPropertyRNA rna_SPHFluidSettings_use_factor_repulsion_;
PropertyRNA &rna_SPHFluidSettings_use_factor_repulsion = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_use_factor_repulsion_);

static BoolPropertyRNA rna_SPHFluidSettings_use_factor_density_;
PropertyRNA &rna_SPHFluidSettings_use_factor_density = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_use_factor_density_);

static BoolPropertyRNA rna_SPHFluidSettings_use_factor_radius_;
PropertyRNA &rna_SPHFluidSettings_use_factor_radius = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_use_factor_radius_);

static BoolPropertyRNA rna_SPHFluidSettings_use_factor_stiff_viscosity_;
PropertyRNA &rna_SPHFluidSettings_use_factor_stiff_viscosity = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_use_factor_stiff_viscosity_);

static BoolPropertyRNA rna_SPHFluidSettings_use_factor_rest_length_;
PropertyRNA &rna_SPHFluidSettings_use_factor_rest_length = reinterpret_cast<PropertyRNA &>(rna_SPHFluidSettings_use_factor_rest_length_);

StructRNA *RNA_SPHFluidSettings;
void register_struct_SPHFluidSettings(BlenderRNA &brna)
{
	rna_SPHFluidSettings_rna_properties_ = {
		{&rna_SPHFluidSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_rna_properties_begin, SPHFluidSettings_rna_properties_next, SPHFluidSettings_rna_properties_end, SPHFluidSettings_rna_properties_get, nullptr, nullptr, SPHFluidSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_SPHFluidSettings_rna_type_ = {
		{&rna_SPHFluidSettings_solver, 	&rna_SPHFluidSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_SPHFluidSettings_solver_items[3] = {
		{0, "DDR", 0, "Double-Density", "An artistic solver with strong surface tension effects (original)"	},
		{1, "CLASSICAL", 0, "Classical", "A more physically-accurate solver"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_SPHFluidSettings_solver_ = {
		{&rna_SPHFluidSettings_spring_force, 	&rna_SPHFluidSettings_rna_type,
		-1, "solver", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "SPH Solver",
		"The code used to calculate internal forces on particles",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, solver), RawPropertyType(1), nullptr},
		SPHFluidSettings_solver_get, SPHFluidSettings_solver_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_SPHFluidSettings_solver_items, 2, 0
	};

	rna_SPHFluidSettings_spring_force_ = {
		{&rna_SPHFluidSettings_fluid_radius, 	&rna_SPHFluidSettings_solver,
		-1, "spring_force", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spring Force",
		"Spring force",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, spring_k), RawPropertyType(5), nullptr},
		SPHFluidSettings_spring_force_get, SPHFluidSettings_spring_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_fluid_radius_ = {
		{&rna_SPHFluidSettings_rest_length, 	&rna_SPHFluidSettings_spring_force,
		-1, "fluid_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Interaction Radius",
		"Fluid interaction radius",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, radius), RawPropertyType(5), nullptr},
		SPHFluidSettings_fluid_radius_get, SPHFluidSettings_fluid_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 20.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_rest_length_ = {
		{&rna_SPHFluidSettings_use_viscoelastic_springs, 	&rna_SPHFluidSettings_fluid_radius,
		-1, "rest_length", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rest Length",
		"Spring rest length (factor of particle radius)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, rest_length), RawPropertyType(5), nullptr},
		SPHFluidSettings_rest_length_get, SPHFluidSettings_rest_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_use_viscoelastic_springs_ = {
		{&rna_SPHFluidSettings_use_initial_rest_length, 	&rna_SPHFluidSettings_rest_length,
		-1, "use_viscoelastic_springs", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Viscoelastic Springs",
		"Use viscoelastic springs instead of Hooke\'s springs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_use_viscoelastic_springs_get, SPHFluidSettings_use_viscoelastic_springs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SPHFluidSettings_use_initial_rest_length_ = {
		{&rna_SPHFluidSettings_plasticity, 	&rna_SPHFluidSettings_use_viscoelastic_springs,
		-1, "use_initial_rest_length", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Initial Rest Length",
		"Use the initial length as spring rest length instead of 2 * particle size",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_use_initial_rest_length_get, SPHFluidSettings_use_initial_rest_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SPHFluidSettings_plasticity_ = {
		{&rna_SPHFluidSettings_yield_ratio, 	&rna_SPHFluidSettings_use_initial_rest_length,
		-1, "plasticity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Plasticity",
		"How much the spring rest length can change after the elastic limit is crossed",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, plasticity_constant), RawPropertyType(5), nullptr},
		SPHFluidSettings_plasticity_get, SPHFluidSettings_plasticity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_yield_ratio_ = {
		{&rna_SPHFluidSettings_spring_frames, 	&rna_SPHFluidSettings_plasticity,
		-1, "yield_ratio", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Elastic Limit",
		"How much the spring has to be stretched/compressed in order to change its rest length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, yield_ratio), RawPropertyType(5), nullptr},
		SPHFluidSettings_yield_ratio_get, SPHFluidSettings_yield_ratio_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_spring_frames_ = {
		{&rna_SPHFluidSettings_linear_viscosity, 	&rna_SPHFluidSettings_yield_ratio,
		-1, "spring_frames", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spring Frames",
		"Create springs for this number of frames since particles birth (0 is always)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, spring_frames), RawPropertyType(0), nullptr},
		SPHFluidSettings_spring_frames_get, SPHFluidSettings_spring_frames_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_SPHFluidSettings_linear_viscosity_ = {
		{&rna_SPHFluidSettings_stiff_viscosity, 	&rna_SPHFluidSettings_spring_frames,
		-1, "linear_viscosity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Viscosity",
		"Linear viscosity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, viscosity_omega), RawPropertyType(5), nullptr},
		SPHFluidSettings_linear_viscosity_get, SPHFluidSettings_linear_viscosity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_stiff_viscosity_ = {
		{&rna_SPHFluidSettings_stiffness, 	&rna_SPHFluidSettings_linear_viscosity,
		-1, "stiff_viscosity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stiff Viscosity",
		"Creates viscosity for expanding fluid",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, viscosity_beta), RawPropertyType(5), nullptr},
		SPHFluidSettings_stiff_viscosity_get, SPHFluidSettings_stiff_viscosity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_stiffness_ = {
		{&rna_SPHFluidSettings_repulsion, 	&rna_SPHFluidSettings_stiff_viscosity,
		-1, "stiffness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stiffness",
		"How incompressible the fluid is (speed of sound)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, stiffness_k), RawPropertyType(5), nullptr},
		SPHFluidSettings_stiffness_get, SPHFluidSettings_stiffness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 1000.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_repulsion_ = {
		{&rna_SPHFluidSettings_rest_density, 	&rna_SPHFluidSettings_stiffness,
		-1, "repulsion", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Repulsion Factor",
		"How strongly the fluid tries to keep from clustering (factor of stiffness)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, stiffness_knear), RawPropertyType(5), nullptr},
		SPHFluidSettings_repulsion_get, SPHFluidSettings_repulsion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_rest_density_ = {
		{&rna_SPHFluidSettings_buoyancy, 	&rna_SPHFluidSettings_repulsion,
		-1, "rest_density", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rest Density",
		"Fluid rest density",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, rest_density), RawPropertyType(5), nullptr},
		SPHFluidSettings_rest_density_get, SPHFluidSettings_rest_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 10000.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_buoyancy_ = {
		{&rna_SPHFluidSettings_use_factor_repulsion, 	&rna_SPHFluidSettings_rest_density,
		-1, "buoyancy", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Buoyancy",
		"Artificial buoyancy force in negative gravity direction based on pressure differences inside the fluid",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(SPHFluidSettings, buoyancy), RawPropertyType(5), nullptr},
		SPHFluidSettings_buoyancy_get, SPHFluidSettings_buoyancy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 10.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_SPHFluidSettings_use_factor_repulsion_ = {
		{&rna_SPHFluidSettings_use_factor_density, 	&rna_SPHFluidSettings_buoyancy,
		-1, "use_factor_repulsion", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Factor Repulsion",
		"Repulsion is a factor of stiffness",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_use_factor_repulsion_get, SPHFluidSettings_use_factor_repulsion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SPHFluidSettings_use_factor_density_ = {
		{&rna_SPHFluidSettings_use_factor_radius, 	&rna_SPHFluidSettings_use_factor_repulsion,
		-1, "use_factor_density", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Factor Density",
		"Density is calculated as a factor of default density (depends on particle size)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_use_factor_density_get, SPHFluidSettings_use_factor_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SPHFluidSettings_use_factor_radius_ = {
		{&rna_SPHFluidSettings_use_factor_stiff_viscosity, 	&rna_SPHFluidSettings_use_factor_density,
		-1, "use_factor_radius", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Factor Radius",
		"Interaction radius is a factor of 4 * particle size",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_use_factor_radius_get, SPHFluidSettings_use_factor_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SPHFluidSettings_use_factor_stiff_viscosity_ = {
		{&rna_SPHFluidSettings_use_factor_rest_length, 	&rna_SPHFluidSettings_use_factor_radius,
		-1, "use_factor_stiff_viscosity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Factor Stiff Viscosity",
		"Stiff viscosity is a factor of normal viscosity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_use_factor_stiff_viscosity_get, SPHFluidSettings_use_factor_stiff_viscosity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_SPHFluidSettings_use_factor_rest_length_ = {
		{nullptr, 	&rna_SPHFluidSettings_use_factor_stiff_viscosity,
		-1, "use_factor_rest_length", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Factor Rest Length",
		"Spring rest length is a factor of 2 * particle size",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		SPHFluidSettings_use_factor_rest_length_get, SPHFluidSettings_use_factor_rest_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_SPHFluidSettings;
	srna->cont.properties = {&rna_SPHFluidSettings_rna_properties, &rna_SPHFluidSettings_use_factor_rest_length};
	srna->identifier = "SPHFluidSettings";
	srna->flag = 516;
	srna->name = "SPH Fluid Settings";
	srna->description = "Settings for particle fluids physics";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_SPHFluidSettings_rna_properties;
	srna->path = rna_SPHFluidSettings_path;
};

/* Particle Hair Key */
static CollectionPropertyRNA rna_ParticleHairKey_rna_properties_;
PropertyRNA &rna_ParticleHairKey_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_rna_properties_);

static PointerPropertyRNA rna_ParticleHairKey_rna_type_;
PropertyRNA &rna_ParticleHairKey_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_rna_type_);

static FloatPropertyRNA rna_ParticleHairKey_time_;
PropertyRNA &rna_ParticleHairKey_time = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_time_);

static FloatPropertyRNA rna_ParticleHairKey_weight_;
PropertyRNA &rna_ParticleHairKey_weight = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_weight_);

static FloatPropertyRNA rna_ParticleHairKey_co_;
PropertyRNA &rna_ParticleHairKey_co = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_);

static FloatPropertyRNA rna_ParticleHairKey_co_local_;
PropertyRNA &rna_ParticleHairKey_co_local = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_local_);

static PointerPropertyRNA rna_ParticleHairKey_co_object_object_;
PropertyRNA &rna_ParticleHairKey_co_object_object = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_object_object_);

static PointerPropertyRNA rna_ParticleHairKey_co_object_modifier_;
PropertyRNA &rna_ParticleHairKey_co_object_modifier = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_object_modifier_);

static PointerPropertyRNA rna_ParticleHairKey_co_object_particle_;
PropertyRNA &rna_ParticleHairKey_co_object_particle = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_object_particle_);

static FloatPropertyRNA rna_ParticleHairKey_co_object_co_;
PropertyRNA &rna_ParticleHairKey_co_object_co = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_object_co_);

FunctionRNA *rna_ParticleHairKey_co_object_func;
static PointerPropertyRNA rna_ParticleHairKey_co_object_set_object_;
PropertyRNA &rna_ParticleHairKey_co_object_set_object = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_object_set_object_);

static PointerPropertyRNA rna_ParticleHairKey_co_object_set_modifier_;
PropertyRNA &rna_ParticleHairKey_co_object_set_modifier = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_object_set_modifier_);

static PointerPropertyRNA rna_ParticleHairKey_co_object_set_particle_;
PropertyRNA &rna_ParticleHairKey_co_object_set_particle = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_object_set_particle_);

static FloatPropertyRNA rna_ParticleHairKey_co_object_set_co_;
PropertyRNA &rna_ParticleHairKey_co_object_set_co = reinterpret_cast<PropertyRNA &>(rna_ParticleHairKey_co_object_set_co_);

FunctionRNA *rna_ParticleHairKey_co_object_set_func;
StructRNA *RNA_ParticleHairKey;
void register_struct_ParticleHairKey(BlenderRNA &brna)
{
	rna_ParticleHairKey_rna_properties_ = {
		{&rna_ParticleHairKey_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleHairKey_rna_properties_begin, ParticleHairKey_rna_properties_next, ParticleHairKey_rna_properties_end, ParticleHairKey_rna_properties_get, nullptr, nullptr, ParticleHairKey_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleHairKey_rna_type_ = {
		{&rna_ParticleHairKey_time, 	&rna_ParticleHairKey_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleHairKey_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ParticleHairKey_time_ = {
		{&rna_ParticleHairKey_weight, 	&rna_ParticleHairKey_rna_type,
		-1, "time", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Time",
		"Relative time of key over hair length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(HairKey, time), RawPropertyType(5), nullptr},
		ParticleHairKey_time_get, ParticleHairKey_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleHairKey_weight_ = {
		{&rna_ParticleHairKey_co, 	&rna_ParticleHairKey_time,
		-1, "weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Weight for cloth simulation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(HairKey, weight), RawPropertyType(5), nullptr},
		ParticleHairKey_weight_get, ParticleHairKey_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_ParticleHairKey_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleHairKey_co_ = {
		{&rna_ParticleHairKey_co_local, 	&rna_ParticleHairKey_weight,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Location (Object Space)",
		"Location of the hair key in object space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, ParticleHairKey_co_get, ParticleHairKey_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleHairKey_co_default
	};

	static float rna_ParticleHairKey_co_local_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleHairKey_co_local_ = {
		{nullptr, 	&rna_ParticleHairKey_co,
		-1, "co_local", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"Location of the hair key in its local coordinate system, relative to the emitting face",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(HairKey, co), RawPropertyType(5), nullptr},
		nullptr, nullptr, ParticleHairKey_co_local_get, ParticleHairKey_co_local_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleHairKey_co_local_default
	};

	StructRNA *srna = RNA_ParticleHairKey;
	srna->cont.properties = {&rna_ParticleHairKey_rna_properties, &rna_ParticleHairKey_co_local};
	srna->identifier = "ParticleHairKey";
	srna->flag = 516;
	srna->name = "Particle Hair Key";
	srna->description = "Particle key for hair particle system";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ParticleHairKey_rna_properties;
	{
	rna_ParticleHairKey_co_object_object_ = {
		{&rna_ParticleHairKey_co_object_modifier, 	nullptr,
		-1, "object", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_ParticleHairKey_co_object_modifier_ = {
		{&rna_ParticleHairKey_co_object_particle, 	&rna_ParticleHairKey_co_object_object,
		-1, "modifier", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Particle modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSystemModifier
	};
	rna_ParticleHairKey_co_object_particle_ = {
		{&rna_ParticleHairKey_co_object_co, 	&rna_ParticleHairKey_co_object_modifier,
		-1, "particle", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"hair particle",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Particle
	};
	static float rna_ParticleHairKey_co_object_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleHairKey_co_object_co_ = {
		{nullptr, 	&rna_ParticleHairKey_co_object_particle,
		-1, "co", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Co",
		"Exported hairkey location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleHairKey_co_object_co_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ParticleHairKey_co_object_object, &rna_ParticleHairKey_co_object_co};
		func->identifier = "co_object";
		func->description = "Obtain hairkey location with particle and modifier data";
		func->call = ParticleHairKey_co_object_call;
		rna_ParticleHairKey_co_object_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ParticleHairKey_co_object_set_object_ = {
		{&rna_ParticleHairKey_co_object_set_modifier, 	nullptr,
		-1, "object", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_ParticleHairKey_co_object_set_modifier_ = {
		{&rna_ParticleHairKey_co_object_set_particle, 	&rna_ParticleHairKey_co_object_set_object,
		-1, "modifier", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Particle modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSystemModifier
	};
	rna_ParticleHairKey_co_object_set_particle_ = {
		{&rna_ParticleHairKey_co_object_set_co, 	&rna_ParticleHairKey_co_object_set_modifier,
		-1, "particle", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"hair particle",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Particle
	};
	static float rna_ParticleHairKey_co_object_set_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleHairKey_co_object_set_co_ = {
		{nullptr, 	&rna_ParticleHairKey_co_object_set_particle,
		-1, "co", 8388611, 0, 1, 0, 0, PropertyPathTemplateType(0), "Co",
		"Specified hairkey location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleHairKey_co_object_set_co_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ParticleHairKey_co_object_set_object, &rna_ParticleHairKey_co_object_set_co};
		func->identifier = "co_object_set";
		func->flag = 2048;
		func->description = "Set hairkey location with particle and modifier data";
		func->call = ParticleHairKey_co_object_set_call;
		rna_ParticleHairKey_co_object_set_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Particle Key */
static CollectionPropertyRNA rna_ParticleKey_rna_properties_;
PropertyRNA &rna_ParticleKey_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleKey_rna_properties_);

static PointerPropertyRNA rna_ParticleKey_rna_type_;
PropertyRNA &rna_ParticleKey_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleKey_rna_type_);

static FloatPropertyRNA rna_ParticleKey_location_;
PropertyRNA &rna_ParticleKey_location = reinterpret_cast<PropertyRNA &>(rna_ParticleKey_location_);

static FloatPropertyRNA rna_ParticleKey_velocity_;
PropertyRNA &rna_ParticleKey_velocity = reinterpret_cast<PropertyRNA &>(rna_ParticleKey_velocity_);

static FloatPropertyRNA rna_ParticleKey_rotation_;
PropertyRNA &rna_ParticleKey_rotation = reinterpret_cast<PropertyRNA &>(rna_ParticleKey_rotation_);

static FloatPropertyRNA rna_ParticleKey_angular_velocity_;
PropertyRNA &rna_ParticleKey_angular_velocity = reinterpret_cast<PropertyRNA &>(rna_ParticleKey_angular_velocity_);

static FloatPropertyRNA rna_ParticleKey_time_;
PropertyRNA &rna_ParticleKey_time = reinterpret_cast<PropertyRNA &>(rna_ParticleKey_time_);

StructRNA *RNA_ParticleKey;
void register_struct_ParticleKey(BlenderRNA &brna)
{
	rna_ParticleKey_rna_properties_ = {
		{&rna_ParticleKey_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleKey_rna_properties_begin, ParticleKey_rna_properties_next, ParticleKey_rna_properties_end, ParticleKey_rna_properties_get, nullptr, nullptr, ParticleKey_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleKey_rna_type_ = {
		{&rna_ParticleKey_location, 	&rna_ParticleKey_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleKey_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_ParticleKey_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleKey_location_ = {
		{&rna_ParticleKey_velocity, 	&rna_ParticleKey_rna_type,
		-1, "location", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Location",
		"Key location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleKey, co), RawPropertyType(5), nullptr},
		nullptr, nullptr, ParticleKey_location_get, ParticleKey_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleKey_location_default
	};

	static float rna_ParticleKey_velocity_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleKey_velocity_ = {
		{&rna_ParticleKey_rotation, 	&rna_ParticleKey_location,
		-1, "velocity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Velocity",
		"Key velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleKey, vel), RawPropertyType(5), nullptr},
		nullptr, nullptr, ParticleKey_velocity_get, ParticleKey_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleKey_velocity_default
	};

	static float rna_ParticleKey_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleKey_rotation_ = {
		{&rna_ParticleKey_angular_velocity, 	&rna_ParticleKey_velocity,
		-1, "rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Key rotation quaternion",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleKey, rot), RawPropertyType(5), nullptr},
		nullptr, nullptr, ParticleKey_rotation_get, ParticleKey_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleKey_rotation_default
	};

	static float rna_ParticleKey_angular_velocity_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleKey_angular_velocity_ = {
		{&rna_ParticleKey_time, 	&rna_ParticleKey_rotation,
		-1, "angular_velocity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angular Velocity",
		"Key angular velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleKey, ave), RawPropertyType(5), nullptr},
		nullptr, nullptr, ParticleKey_angular_velocity_get, ParticleKey_angular_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleKey_angular_velocity_default
	};

	rna_ParticleKey_time_ = {
		{nullptr, 	&rna_ParticleKey_angular_velocity,
		-1, "time", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Time",
		"Time of key over the simulation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleKey, time), RawPropertyType(5), nullptr},
		ParticleKey_time_get, ParticleKey_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ParticleKey;
	srna->cont.properties = {&rna_ParticleKey_rna_properties, &rna_ParticleKey_time};
	srna->identifier = "ParticleKey";
	srna->flag = 516;
	srna->name = "Particle Key";
	srna->description = "Key location for a particle over time";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ParticleKey_rna_properties;
};

/* Child Particle */
static CollectionPropertyRNA rna_ChildParticle_rna_properties_;
PropertyRNA &rna_ChildParticle_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ChildParticle_rna_properties_);

static PointerPropertyRNA rna_ChildParticle_rna_type_;
PropertyRNA &rna_ChildParticle_rna_type = reinterpret_cast<PropertyRNA &>(rna_ChildParticle_rna_type_);

StructRNA *RNA_ChildParticle;
void register_struct_ChildParticle(BlenderRNA &brna)
{
	rna_ChildParticle_rna_properties_ = {
		{&rna_ChildParticle_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildParticle_rna_properties_begin, ChildParticle_rna_properties_next, ChildParticle_rna_properties_end, ChildParticle_rna_properties_get, nullptr, nullptr, ChildParticle_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ChildParticle_rna_type_ = {
		{nullptr, 	&rna_ChildParticle_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ChildParticle_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ChildParticle;
	srna->cont.properties = {&rna_ChildParticle_rna_properties, &rna_ChildParticle_rna_type};
	srna->identifier = "ChildParticle";
	srna->flag = 516;
	srna->name = "Child Particle";
	srna->description = "Child particle interpolated from simulated or edited particles";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ChildParticle_rna_properties;
};

/* Particle */
static CollectionPropertyRNA rna_Particle_rna_properties_;
PropertyRNA &rna_Particle_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Particle_rna_properties_);

static PointerPropertyRNA rna_Particle_rna_type_;
PropertyRNA &rna_Particle_rna_type = reinterpret_cast<PropertyRNA &>(rna_Particle_rna_type_);

static FloatPropertyRNA rna_Particle_location_;
PropertyRNA &rna_Particle_location = reinterpret_cast<PropertyRNA &>(rna_Particle_location_);

static FloatPropertyRNA rna_Particle_velocity_;
PropertyRNA &rna_Particle_velocity = reinterpret_cast<PropertyRNA &>(rna_Particle_velocity_);

static FloatPropertyRNA rna_Particle_angular_velocity_;
PropertyRNA &rna_Particle_angular_velocity = reinterpret_cast<PropertyRNA &>(rna_Particle_angular_velocity_);

static FloatPropertyRNA rna_Particle_rotation_;
PropertyRNA &rna_Particle_rotation = reinterpret_cast<PropertyRNA &>(rna_Particle_rotation_);

static FloatPropertyRNA rna_Particle_prev_location_;
PropertyRNA &rna_Particle_prev_location = reinterpret_cast<PropertyRNA &>(rna_Particle_prev_location_);

static FloatPropertyRNA rna_Particle_prev_velocity_;
PropertyRNA &rna_Particle_prev_velocity = reinterpret_cast<PropertyRNA &>(rna_Particle_prev_velocity_);

static FloatPropertyRNA rna_Particle_prev_angular_velocity_;
PropertyRNA &rna_Particle_prev_angular_velocity = reinterpret_cast<PropertyRNA &>(rna_Particle_prev_angular_velocity_);

static FloatPropertyRNA rna_Particle_prev_rotation_;
PropertyRNA &rna_Particle_prev_rotation = reinterpret_cast<PropertyRNA &>(rna_Particle_prev_rotation_);

static CollectionPropertyRNA rna_Particle_hair_keys_;
PropertyRNA &rna_Particle_hair_keys = reinterpret_cast<PropertyRNA &>(rna_Particle_hair_keys_);

static CollectionPropertyRNA rna_Particle_particle_keys_;
PropertyRNA &rna_Particle_particle_keys = reinterpret_cast<PropertyRNA &>(rna_Particle_particle_keys_);

static FloatPropertyRNA rna_Particle_birth_time_;
PropertyRNA &rna_Particle_birth_time = reinterpret_cast<PropertyRNA &>(rna_Particle_birth_time_);

static FloatPropertyRNA rna_Particle_lifetime_;
PropertyRNA &rna_Particle_lifetime = reinterpret_cast<PropertyRNA &>(rna_Particle_lifetime_);

static FloatPropertyRNA rna_Particle_die_time_;
PropertyRNA &rna_Particle_die_time = reinterpret_cast<PropertyRNA &>(rna_Particle_die_time_);

static FloatPropertyRNA rna_Particle_size_;
PropertyRNA &rna_Particle_size = reinterpret_cast<PropertyRNA &>(rna_Particle_size_);

static BoolPropertyRNA rna_Particle_is_exist_;
PropertyRNA &rna_Particle_is_exist = reinterpret_cast<PropertyRNA &>(rna_Particle_is_exist_);

static BoolPropertyRNA rna_Particle_is_visible_;
PropertyRNA &rna_Particle_is_visible = reinterpret_cast<PropertyRNA &>(rna_Particle_is_visible_);

static EnumPropertyRNA rna_Particle_alive_state_;
PropertyRNA &rna_Particle_alive_state = reinterpret_cast<PropertyRNA &>(rna_Particle_alive_state_);

static PointerPropertyRNA rna_Particle_uv_on_emitter_modifier_;
PropertyRNA &rna_Particle_uv_on_emitter_modifier = reinterpret_cast<PropertyRNA &>(rna_Particle_uv_on_emitter_modifier_);

static FloatPropertyRNA rna_Particle_uv_on_emitter_uv_;
PropertyRNA &rna_Particle_uv_on_emitter_uv = reinterpret_cast<PropertyRNA &>(rna_Particle_uv_on_emitter_uv_);

FunctionRNA *rna_Particle_uv_on_emitter_func;
StructRNA *RNA_Particle;
void register_struct_Particle(BlenderRNA &brna)
{
	rna_Particle_rna_properties_ = {
		{&rna_Particle_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Particle_rna_properties_begin, Particle_rna_properties_next, Particle_rna_properties_end, Particle_rna_properties_get, nullptr, nullptr, Particle_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Particle_rna_type_ = {
		{&rna_Particle_location, 	&rna_Particle_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Particle_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_Particle_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Particle_location_ = {
		{&rna_Particle_velocity, 	&rna_Particle_rna_type,
		-1, "location", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Particle Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, state.co), RawPropertyType(5), nullptr},
		nullptr, nullptr, Particle_location_get, Particle_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_location_default
	};

	static float rna_Particle_velocity_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Particle_velocity_ = {
		{&rna_Particle_angular_velocity, 	&rna_Particle_location,
		-1, "velocity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Particle Velocity",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, state.vel), RawPropertyType(5), nullptr},
		nullptr, nullptr, Particle_velocity_get, Particle_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_velocity_default
	};

	static float rna_Particle_angular_velocity_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Particle_angular_velocity_ = {
		{&rna_Particle_rotation, 	&rna_Particle_velocity,
		-1, "angular_velocity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angular Velocity",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, state.ave), RawPropertyType(5), nullptr},
		nullptr, nullptr, Particle_angular_velocity_get, Particle_angular_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_angular_velocity_default
	};

	static float rna_Particle_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Particle_rotation_ = {
		{&rna_Particle_prev_location, 	&rna_Particle_angular_velocity,
		-1, "rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, state.rot), RawPropertyType(5), nullptr},
		nullptr, nullptr, Particle_rotation_get, Particle_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_rotation_default
	};

	static float rna_Particle_prev_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Particle_prev_location_ = {
		{&rna_Particle_prev_velocity, 	&rna_Particle_rotation,
		-1, "prev_location", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Previous Particle Location",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, prev_state.co), RawPropertyType(5), nullptr},
		nullptr, nullptr, Particle_prev_location_get, Particle_prev_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_prev_location_default
	};

	static float rna_Particle_prev_velocity_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Particle_prev_velocity_ = {
		{&rna_Particle_prev_angular_velocity, 	&rna_Particle_prev_location,
		-1, "prev_velocity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Previous Particle Velocity",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, prev_state.vel), RawPropertyType(5), nullptr},
		nullptr, nullptr, Particle_prev_velocity_get, Particle_prev_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_prev_velocity_default
	};

	static float rna_Particle_prev_angular_velocity_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Particle_prev_angular_velocity_ = {
		{&rna_Particle_prev_rotation, 	&rna_Particle_prev_velocity,
		-1, "prev_angular_velocity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Previous Angular Velocity",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, prev_state.ave), RawPropertyType(5), nullptr},
		nullptr, nullptr, Particle_prev_angular_velocity_get, Particle_prev_angular_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_prev_angular_velocity_default
	};

	static float rna_Particle_prev_rotation_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Particle_prev_rotation_ = {
		{&rna_Particle_hair_keys, 	&rna_Particle_prev_angular_velocity,
		-1, "prev_rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Previous Rotation",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_QUATERNION) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, prev_state.rot), RawPropertyType(5), nullptr},
		nullptr, nullptr, Particle_prev_rotation_get, Particle_prev_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_prev_rotation_default
	};

	rna_Particle_hair_keys_ = {
		{&rna_Particle_particle_keys, 	&rna_Particle_prev_rotation,
		-1, "hair_keys", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Hair",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Particle_hair_keys_begin, Particle_hair_keys_next, Particle_hair_keys_end, Particle_hair_keys_get, Particle_hair_keys_length, Particle_hair_keys_lookup_int, nullptr, nullptr, RNA_ParticleHairKey
	};

	rna_Particle_particle_keys_ = {
		{&rna_Particle_birth_time, 	&rna_Particle_hair_keys,
		-1, "particle_keys", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Keyed States",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Particle_particle_keys_begin, Particle_particle_keys_next, Particle_particle_keys_end, Particle_particle_keys_get, Particle_particle_keys_length, Particle_particle_keys_lookup_int, nullptr, nullptr, RNA_ParticleKey
	};

	rna_Particle_birth_time_ = {
		{&rna_Particle_lifetime, 	&rna_Particle_particle_keys,
		-1, "birth_time", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Birth Time",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, time), RawPropertyType(5), nullptr},
		Particle_birth_time_get, Particle_birth_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Particle_lifetime_ = {
		{&rna_Particle_die_time, 	&rna_Particle_birth_time,
		-1, "lifetime", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lifetime",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, lifetime), RawPropertyType(5), nullptr},
		Particle_lifetime_get, Particle_lifetime_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Particle_die_time_ = {
		{&rna_Particle_size, 	&rna_Particle_lifetime,
		-1, "die_time", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Die Time",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, dietime), RawPropertyType(5), nullptr},
		Particle_die_time_get, Particle_die_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Particle_size_ = {
		{&rna_Particle_is_exist, 	&rna_Particle_die_time,
		-1, "size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, size), RawPropertyType(5), nullptr},
		Particle_size_get, Particle_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Particle_is_exist_ = {
		{&rna_Particle_is_visible, 	&rna_Particle_size,
		-1, "is_exist", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Exists",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Particle_is_exist_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Particle_is_visible_ = {
		{&rna_Particle_alive_state, 	&rna_Particle_is_exist,
		-1, "is_visible", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Visible",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Particle_is_visible_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_Particle_alive_state_items[5] = {
		{1, "DEAD", 0, "Dead", ""	},
		{2, "UNBORN", 0, "Unborn", ""	},
		{3, "ALIVE", 0, "Alive", ""	},
		{4, "DYING", 0, "Dying", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Particle_alive_state_ = {
		{nullptr, 	&rna_Particle_is_visible,
		-1, "alive_state", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alive State",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleData, alive), RawPropertyType(1), nullptr},
		Particle_alive_state_get, Particle_alive_state_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Particle_alive_state_items, 4, 1
	};

	StructRNA *srna = RNA_Particle;
	srna->cont.properties = {&rna_Particle_rna_properties, &rna_Particle_alive_state};
	srna->identifier = "Particle";
	srna->flag = 516;
	srna->name = "Particle";
	srna->description = "Particle in a particle system";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Particle_rna_properties;
	{
	rna_Particle_uv_on_emitter_modifier_ = {
		{&rna_Particle_uv_on_emitter_uv, 	nullptr,
		-1, "modifier", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Particle modifier from an evaluated object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSystemModifier
	};
	static float rna_Particle_uv_on_emitter_uv_default[2] = {
		0.0f,
		0.0f
	};
	rna_Particle_uv_on_emitter_uv_ = {
		{nullptr, 	&rna_Particle_uv_on_emitter_modifier,
		-1, "uv", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "uv",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Particle_uv_on_emitter_uv_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Particle_uv_on_emitter_modifier, &rna_Particle_uv_on_emitter_uv};
		func->identifier = "uv_on_emitter";
		func->flag = 16;
		func->description = "Obtain UV coordinates for a particle on an evaluated mesh.";
		func->call = Particle_uv_on_emitter_call;
		rna_Particle_uv_on_emitter_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Particle Instance Object Weight */
static CollectionPropertyRNA rna_ParticleDupliWeight_rna_properties_;
PropertyRNA &rna_ParticleDupliWeight_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleDupliWeight_rna_properties_);

static PointerPropertyRNA rna_ParticleDupliWeight_rna_type_;
PropertyRNA &rna_ParticleDupliWeight_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleDupliWeight_rna_type_);

static StringPropertyRNA rna_ParticleDupliWeight_name_;
PropertyRNA &rna_ParticleDupliWeight_name = reinterpret_cast<PropertyRNA &>(rna_ParticleDupliWeight_name_);

static IntPropertyRNA rna_ParticleDupliWeight_count_;
PropertyRNA &rna_ParticleDupliWeight_count = reinterpret_cast<PropertyRNA &>(rna_ParticleDupliWeight_count_);

StructRNA *RNA_ParticleDupliWeight;
void register_struct_ParticleDupliWeight(BlenderRNA &brna)
{
	rna_ParticleDupliWeight_rna_properties_ = {
		{&rna_ParticleDupliWeight_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleDupliWeight_rna_properties_begin, ParticleDupliWeight_rna_properties_next, ParticleDupliWeight_rna_properties_end, ParticleDupliWeight_rna_properties_get, nullptr, nullptr, ParticleDupliWeight_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleDupliWeight_rna_type_ = {
		{&rna_ParticleDupliWeight_name, 	&rna_ParticleDupliWeight_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleDupliWeight_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ParticleDupliWeight_name_ = {
		{&rna_ParticleDupliWeight_count, 	&rna_ParticleDupliWeight_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Particle instance object name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleDupliWeight_name_get, ParticleDupliWeight_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleDupliWeight_count_ = {
		{nullptr, 	&rna_ParticleDupliWeight_name,
		-1, "count", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Count",
		"The number of times this object is repeated with respect to other objects",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleDupliWeight, count), RawPropertyType(1), nullptr},
		ParticleDupliWeight_count_get, ParticleDupliWeight_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ParticleDupliWeight;
	srna->cont.properties = {&rna_ParticleDupliWeight_rna_properties, &rna_ParticleDupliWeight_count};
	srna->identifier = "ParticleDupliWeight";
	srna->flag = 516;
	srna->name = "Particle Instance Object Weight";
	srna->description = "Weight of a particle instance object in a collection";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_ParticleDupliWeight_name;
	srna->iteratorproperty = &rna_ParticleDupliWeight_rna_properties;
};

/* Particle System */
static CollectionPropertyRNA rna_ParticleSystem_rna_properties_;
PropertyRNA &rna_ParticleSystem_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_rna_properties_);

static PointerPropertyRNA rna_ParticleSystem_rna_type_;
PropertyRNA &rna_ParticleSystem_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_rna_type_);

static StringPropertyRNA rna_ParticleSystem_name_;
PropertyRNA &rna_ParticleSystem_name = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_name_);

static PointerPropertyRNA rna_ParticleSystem_settings_;
PropertyRNA &rna_ParticleSystem_settings = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_settings_);

static CollectionPropertyRNA rna_ParticleSystem_particles_;
PropertyRNA &rna_ParticleSystem_particles = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_particles_);

static CollectionPropertyRNA rna_ParticleSystem_child_particles_;
PropertyRNA &rna_ParticleSystem_child_particles = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_child_particles_);

static IntPropertyRNA rna_ParticleSystem_seed_;
PropertyRNA &rna_ParticleSystem_seed = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_seed_);

static IntPropertyRNA rna_ParticleSystem_child_seed_;
PropertyRNA &rna_ParticleSystem_child_seed = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_child_seed_);

static BoolPropertyRNA rna_ParticleSystem_is_global_hair_;
PropertyRNA &rna_ParticleSystem_is_global_hair = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_is_global_hair_);

static BoolPropertyRNA rna_ParticleSystem_use_hair_dynamics_;
PropertyRNA &rna_ParticleSystem_use_hair_dynamics = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_use_hair_dynamics_);

static PointerPropertyRNA rna_ParticleSystem_cloth_;
PropertyRNA &rna_ParticleSystem_cloth = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_cloth_);

static PointerPropertyRNA rna_ParticleSystem_reactor_target_object_;
PropertyRNA &rna_ParticleSystem_reactor_target_object = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_reactor_target_object_);

static IntPropertyRNA rna_ParticleSystem_reactor_target_particle_system_;
PropertyRNA &rna_ParticleSystem_reactor_target_particle_system = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_reactor_target_particle_system_);

static BoolPropertyRNA rna_ParticleSystem_use_keyed_timing_;
PropertyRNA &rna_ParticleSystem_use_keyed_timing = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_use_keyed_timing_);

static CollectionPropertyRNA rna_ParticleSystem_targets_;
PropertyRNA &rna_ParticleSystem_targets = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_targets_);

static PointerPropertyRNA rna_ParticleSystem_active_particle_target_;
PropertyRNA &rna_ParticleSystem_active_particle_target = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_active_particle_target_);

static IntPropertyRNA rna_ParticleSystem_active_particle_target_index_;
PropertyRNA &rna_ParticleSystem_active_particle_target_index = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_active_particle_target_index_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_density_;
PropertyRNA &rna_ParticleSystem_vertex_group_density = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_density_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_density_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_density = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_density_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_velocity_;
PropertyRNA &rna_ParticleSystem_vertex_group_velocity = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_velocity_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_velocity_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_velocity = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_velocity_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_length_;
PropertyRNA &rna_ParticleSystem_vertex_group_length = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_length_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_length_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_length = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_length_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_clump_;
PropertyRNA &rna_ParticleSystem_vertex_group_clump = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_clump_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_clump_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_clump = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_clump_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_kink_;
PropertyRNA &rna_ParticleSystem_vertex_group_kink = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_kink_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_kink_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_kink = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_kink_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_1_;
PropertyRNA &rna_ParticleSystem_vertex_group_roughness_1 = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_roughness_1_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_1_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_roughness_1 = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_roughness_1_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_2_;
PropertyRNA &rna_ParticleSystem_vertex_group_roughness_2 = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_roughness_2_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_2_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_roughness_2 = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_roughness_2_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_roughness_end_;
PropertyRNA &rna_ParticleSystem_vertex_group_roughness_end = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_roughness_end_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_roughness_end_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_roughness_end = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_roughness_end_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_size_;
PropertyRNA &rna_ParticleSystem_vertex_group_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_size_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_size_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_size_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_tangent_;
PropertyRNA &rna_ParticleSystem_vertex_group_tangent = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_tangent_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_tangent_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_tangent = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_tangent_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_rotation_;
PropertyRNA &rna_ParticleSystem_vertex_group_rotation = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_rotation_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_rotation_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_rotation = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_rotation_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_field_;
PropertyRNA &rna_ParticleSystem_vertex_group_field = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_field_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_field_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_field = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_field_);

static StringPropertyRNA rna_ParticleSystem_vertex_group_twist_;
PropertyRNA &rna_ParticleSystem_vertex_group_twist = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_vertex_group_twist_);

static BoolPropertyRNA rna_ParticleSystem_invert_vertex_group_twist_;
PropertyRNA &rna_ParticleSystem_invert_vertex_group_twist = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_invert_vertex_group_twist_);

static PointerPropertyRNA rna_ParticleSystem_point_cache_;
PropertyRNA &rna_ParticleSystem_point_cache = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_point_cache_);

static BoolPropertyRNA rna_ParticleSystem_has_multiple_caches_;
PropertyRNA &rna_ParticleSystem_has_multiple_caches = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_has_multiple_caches_);

static PointerPropertyRNA rna_ParticleSystem_parent_;
PropertyRNA &rna_ParticleSystem_parent = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_parent_);

static BoolPropertyRNA rna_ParticleSystem_is_editable_;
PropertyRNA &rna_ParticleSystem_is_editable = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_is_editable_);

static BoolPropertyRNA rna_ParticleSystem_is_edited_;
PropertyRNA &rna_ParticleSystem_is_edited = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_is_edited_);

static FloatPropertyRNA rna_ParticleSystem_dt_frac_;
PropertyRNA &rna_ParticleSystem_dt_frac = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_dt_frac_);

static PointerPropertyRNA rna_ParticleSystem_co_hair_object_;
PropertyRNA &rna_ParticleSystem_co_hair_object = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_co_hair_object_);

static IntPropertyRNA rna_ParticleSystem_co_hair_particle_no_;
PropertyRNA &rna_ParticleSystem_co_hair_particle_no = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_co_hair_particle_no_);

static IntPropertyRNA rna_ParticleSystem_co_hair_step_;
PropertyRNA &rna_ParticleSystem_co_hair_step = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_co_hair_step_);

static FloatPropertyRNA rna_ParticleSystem_co_hair_co_;
PropertyRNA &rna_ParticleSystem_co_hair_co = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_co_hair_co_);

FunctionRNA *rna_ParticleSystem_co_hair_func;
static PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_modifier_;
PropertyRNA &rna_ParticleSystem_uv_on_emitter_modifier = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_uv_on_emitter_modifier_);

static PointerPropertyRNA rna_ParticleSystem_uv_on_emitter_particle_;
PropertyRNA &rna_ParticleSystem_uv_on_emitter_particle = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_uv_on_emitter_particle_);

static IntPropertyRNA rna_ParticleSystem_uv_on_emitter_particle_no_;
PropertyRNA &rna_ParticleSystem_uv_on_emitter_particle_no = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_uv_on_emitter_particle_no_);

static IntPropertyRNA rna_ParticleSystem_uv_on_emitter_uv_no_;
PropertyRNA &rna_ParticleSystem_uv_on_emitter_uv_no = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_uv_on_emitter_uv_no_);

static FloatPropertyRNA rna_ParticleSystem_uv_on_emitter_uv_;
PropertyRNA &rna_ParticleSystem_uv_on_emitter_uv = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_uv_on_emitter_uv_);

FunctionRNA *rna_ParticleSystem_uv_on_emitter_func;
static PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_modifier_;
PropertyRNA &rna_ParticleSystem_mcol_on_emitter_modifier = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_mcol_on_emitter_modifier_);

static PointerPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle_;
PropertyRNA &rna_ParticleSystem_mcol_on_emitter_particle = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_mcol_on_emitter_particle_);

static IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_particle_no_;
PropertyRNA &rna_ParticleSystem_mcol_on_emitter_particle_no = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_mcol_on_emitter_particle_no_);

static IntPropertyRNA rna_ParticleSystem_mcol_on_emitter_vcol_no_;
PropertyRNA &rna_ParticleSystem_mcol_on_emitter_vcol_no = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_mcol_on_emitter_vcol_no_);

static FloatPropertyRNA rna_ParticleSystem_mcol_on_emitter_mcol_;
PropertyRNA &rna_ParticleSystem_mcol_on_emitter_mcol = reinterpret_cast<PropertyRNA &>(rna_ParticleSystem_mcol_on_emitter_mcol_);

FunctionRNA *rna_ParticleSystem_mcol_on_emitter_func;
StructRNA *RNA_ParticleSystem;
void register_struct_ParticleSystem(BlenderRNA &brna)
{
	rna_ParticleSystem_rna_properties_ = {
		{&rna_ParticleSystem_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_rna_properties_begin, ParticleSystem_rna_properties_next, ParticleSystem_rna_properties_end, ParticleSystem_rna_properties_get, nullptr, nullptr, ParticleSystem_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleSystem_rna_type_ = {
		{&rna_ParticleSystem_name, 	&rna_ParticleSystem_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ParticleSystem_name_ = {
		{&rna_ParticleSystem_settings, 	&rna_ParticleSystem_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Particle system name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 102236165, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_name_get, ParticleSystem_name_length, ParticleSystem_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ParticleSystem_settings_ = {
		{&rna_ParticleSystem_particles, 	&rna_ParticleSystem_name,
		-1, "settings", 8650881, 1, 0, 0, 0, PropertyPathTemplateType(0), "Settings",
		"Particle system settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset_dependency, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_settings_get, ParticleSystem_settings_set, nullptr, nullptr,RNA_ParticleSettings
	};

	rna_ParticleSystem_particles_ = {
		{&rna_ParticleSystem_child_particles, 	&rna_ParticleSystem_settings,
		-1, "particles", 0, 3, 0, 8, 0, PropertyPathTemplateType(0), "Particles",
		"Particles generated by the particle system",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_particles_begin, ParticleSystem_particles_next, ParticleSystem_particles_end, ParticleSystem_particles_get, ParticleSystem_particles_length, ParticleSystem_particles_lookup_int, nullptr, nullptr, RNA_Particle
	};

	rna_ParticleSystem_child_particles_ = {
		{&rna_ParticleSystem_seed, 	&rna_ParticleSystem_particles,
		-1, "child_particles", 0, 3, 0, 8, 0, PropertyPathTemplateType(0), "Child Particles",
		"Child particles generated by the particle system",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_child_particles_begin, ParticleSystem_child_particles_next, ParticleSystem_child_particles_end, ParticleSystem_child_particles_get, ParticleSystem_child_particles_length, ParticleSystem_child_particles_lookup_int, nullptr, nullptr, RNA_ChildParticle
	};

	rna_ParticleSystem_seed_ = {
		{&rna_ParticleSystem_child_seed, 	&rna_ParticleSystem_child_particles,
		-1, "seed", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Seed",
		"Offset in the random number table, to get a different randomized result",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSystem, seed), RawPropertyType(0), nullptr},
		ParticleSystem_seed_get, ParticleSystem_seed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_child_seed_ = {
		{&rna_ParticleSystem_is_global_hair, 	&rna_ParticleSystem_seed,
		-1, "child_seed", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Child Seed",
		"Offset in the random number table for child particles, to get a different randomized result",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSystem, child_seed), RawPropertyType(0), nullptr},
		ParticleSystem_child_seed_get, ParticleSystem_child_seed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_is_global_hair_ = {
		{&rna_ParticleSystem_use_hair_dynamics, 	&rna_ParticleSystem_child_seed,
		-1, "is_global_hair", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Global Hair",
		"Hair keys are in global coordinate space",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_is_global_hair_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_use_hair_dynamics_ = {
		{&rna_ParticleSystem_cloth, 	&rna_ParticleSystem_is_global_hair,
		-1, "use_hair_dynamics", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Hair Dynamics",
		"Enable hair dynamics using cloth simulation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_hair_dynamics_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_use_hair_dynamics_get, ParticleSystem_use_hair_dynamics_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_cloth_ = {
		{&rna_ParticleSystem_reactor_target_object, 	&rna_ParticleSystem_use_hair_dynamics,
		-1, "cloth", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Cloth",
		"Cloth dynamics for hair",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_cloth_get, nullptr, nullptr, nullptr,RNA_ClothModifier
	};

	rna_ParticleSystem_reactor_target_object_ = {
		{&rna_ParticleSystem_reactor_target_particle_system, 	&rna_ParticleSystem_cloth,
		-1, "reactor_target_object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Reactor Target Object",
		"For reactor systems, the object that has the target particle system (empty if same object)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_reactor_target_object_get, ParticleSystem_reactor_target_object_set, nullptr, nullptr,RNA_Object
	};

	rna_ParticleSystem_reactor_target_particle_system_ = {
		{&rna_ParticleSystem_use_keyed_timing, 	&rna_ParticleSystem_reactor_target_object,
		-1, "reactor_target_particle_system", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Reactor Target Particle System",
		"For reactor systems, index of particle system on the target object",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSystem, target_psys), RawPropertyType(1), nullptr},
		ParticleSystem_reactor_target_particle_system_get, ParticleSystem_reactor_target_particle_system_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 32767, 1, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_use_keyed_timing_ = {
		{&rna_ParticleSystem_targets, 	&rna_ParticleSystem_reactor_target_particle_system,
		-1, "use_keyed_timing", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Keyed Timing",
		"Use key times",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_use_keyed_timing_get, ParticleSystem_use_keyed_timing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_targets_ = {
		{&rna_ParticleSystem_active_particle_target, 	&rna_ParticleSystem_use_keyed_timing,
		-1, "targets", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Targets",
		"Target particle systems",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_targets_begin, ParticleSystem_targets_next, ParticleSystem_targets_end, ParticleSystem_targets_get, nullptr, ParticleSystem_targets_lookup_int, ParticleSystem_targets_lookup_string, nullptr, RNA_ParticleTarget
	};

	rna_ParticleSystem_active_particle_target_ = {
		{&rna_ParticleSystem_active_particle_target_index, 	&rna_ParticleSystem_targets,
		-1, "active_particle_target", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Particle Target",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_active_particle_target_get, nullptr, nullptr, nullptr,RNA_ParticleTarget
	};

	rna_ParticleSystem_active_particle_target_index_ = {
		{&rna_ParticleSystem_vertex_group_density, 	&rna_ParticleSystem_active_particle_target,
		-1, "active_particle_target_index", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Particle Target Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_active_particle_target_index_get, ParticleSystem_active_particle_target_index_set, nullptr, nullptr, rna_ParticleSystem_active_particle_target_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_density_ = {
		{&rna_ParticleSystem_invert_vertex_group_density, 	&rna_ParticleSystem_active_particle_target_index,
		-1, "vertex_group_density", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Density",
		"Vertex group to control density",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_density_get, ParticleSystem_vertex_group_density_length, ParticleSystem_vertex_group_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_density_ = {
		{&rna_ParticleSystem_vertex_group_velocity, 	&rna_ParticleSystem_vertex_group_density,
		-1, "invert_vertex_group_density", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Density Negate",
		"Negate the effect of the density vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_density_get, ParticleSystem_invert_vertex_group_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_velocity_ = {
		{&rna_ParticleSystem_invert_vertex_group_velocity, 	&rna_ParticleSystem_invert_vertex_group_density,
		-1, "vertex_group_velocity", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Velocity",
		"Vertex group to control velocity",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_velocity_get, ParticleSystem_vertex_group_velocity_length, ParticleSystem_vertex_group_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_velocity_ = {
		{&rna_ParticleSystem_vertex_group_length, 	&rna_ParticleSystem_vertex_group_velocity,
		-1, "invert_vertex_group_velocity", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Velocity Negate",
		"Negate the effect of the velocity vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_velocity_get, ParticleSystem_invert_vertex_group_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_length_ = {
		{&rna_ParticleSystem_invert_vertex_group_length, 	&rna_ParticleSystem_invert_vertex_group_velocity,
		-1, "vertex_group_length", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Length",
		"Vertex group to control length",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_length_get, ParticleSystem_vertex_group_length_length, ParticleSystem_vertex_group_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_length_ = {
		{&rna_ParticleSystem_vertex_group_clump, 	&rna_ParticleSystem_vertex_group_length,
		-1, "invert_vertex_group_length", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Length Negate",
		"Negate the effect of the length vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_length_get, ParticleSystem_invert_vertex_group_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_clump_ = {
		{&rna_ParticleSystem_invert_vertex_group_clump, 	&rna_ParticleSystem_invert_vertex_group_length,
		-1, "vertex_group_clump", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Clump",
		"Vertex group to control clump",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_clump_get, ParticleSystem_vertex_group_clump_length, ParticleSystem_vertex_group_clump_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_clump_ = {
		{&rna_ParticleSystem_vertex_group_kink, 	&rna_ParticleSystem_vertex_group_clump,
		-1, "invert_vertex_group_clump", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Clump Negate",
		"Negate the effect of the clump vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_clump_get, ParticleSystem_invert_vertex_group_clump_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_kink_ = {
		{&rna_ParticleSystem_invert_vertex_group_kink, 	&rna_ParticleSystem_invert_vertex_group_clump,
		-1, "vertex_group_kink", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Kink",
		"Vertex group to control kink",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_kink_get, ParticleSystem_vertex_group_kink_length, ParticleSystem_vertex_group_kink_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_kink_ = {
		{&rna_ParticleSystem_vertex_group_roughness_1, 	&rna_ParticleSystem_vertex_group_kink,
		-1, "invert_vertex_group_kink", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Kink Negate",
		"Negate the effect of the kink vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_kink_get, ParticleSystem_invert_vertex_group_kink_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_roughness_1_ = {
		{&rna_ParticleSystem_invert_vertex_group_roughness_1, 	&rna_ParticleSystem_invert_vertex_group_kink,
		-1, "vertex_group_roughness_1", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Roughness 1",
		"Vertex group to control roughness 1",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_roughness_1_get, ParticleSystem_vertex_group_roughness_1_length, ParticleSystem_vertex_group_roughness_1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_roughness_1_ = {
		{&rna_ParticleSystem_vertex_group_roughness_2, 	&rna_ParticleSystem_vertex_group_roughness_1,
		-1, "invert_vertex_group_roughness_1", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Roughness 1 Negate",
		"Negate the effect of the roughness 1 vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_roughness_1_get, ParticleSystem_invert_vertex_group_roughness_1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_roughness_2_ = {
		{&rna_ParticleSystem_invert_vertex_group_roughness_2, 	&rna_ParticleSystem_invert_vertex_group_roughness_1,
		-1, "vertex_group_roughness_2", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Roughness 2",
		"Vertex group to control roughness 2",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_roughness_2_get, ParticleSystem_vertex_group_roughness_2_length, ParticleSystem_vertex_group_roughness_2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_roughness_2_ = {
		{&rna_ParticleSystem_vertex_group_roughness_end, 	&rna_ParticleSystem_vertex_group_roughness_2,
		-1, "invert_vertex_group_roughness_2", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Roughness 2 Negate",
		"Negate the effect of the roughness 2 vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_roughness_2_get, ParticleSystem_invert_vertex_group_roughness_2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_roughness_end_ = {
		{&rna_ParticleSystem_invert_vertex_group_roughness_end, 	&rna_ParticleSystem_invert_vertex_group_roughness_2,
		-1, "vertex_group_roughness_end", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Roughness End",
		"Vertex group to control roughness end",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_roughness_end_get, ParticleSystem_vertex_group_roughness_end_length, ParticleSystem_vertex_group_roughness_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_roughness_end_ = {
		{&rna_ParticleSystem_vertex_group_size, 	&rna_ParticleSystem_vertex_group_roughness_end,
		-1, "invert_vertex_group_roughness_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Roughness End Negate",
		"Negate the effect of the roughness end vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_roughness_end_get, ParticleSystem_invert_vertex_group_roughness_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_size_ = {
		{&rna_ParticleSystem_invert_vertex_group_size, 	&rna_ParticleSystem_invert_vertex_group_roughness_end,
		-1, "vertex_group_size", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Size",
		"Vertex group to control size",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_size_get, ParticleSystem_vertex_group_size_length, ParticleSystem_vertex_group_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_size_ = {
		{&rna_ParticleSystem_vertex_group_tangent, 	&rna_ParticleSystem_vertex_group_size,
		-1, "invert_vertex_group_size", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Size Negate",
		"Negate the effect of the size vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_size_get, ParticleSystem_invert_vertex_group_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_tangent_ = {
		{&rna_ParticleSystem_invert_vertex_group_tangent, 	&rna_ParticleSystem_invert_vertex_group_size,
		-1, "vertex_group_tangent", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Tangent",
		"Vertex group to control tangent",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_tangent_get, ParticleSystem_vertex_group_tangent_length, ParticleSystem_vertex_group_tangent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_tangent_ = {
		{&rna_ParticleSystem_vertex_group_rotation, 	&rna_ParticleSystem_vertex_group_tangent,
		-1, "invert_vertex_group_tangent", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Tangent Negate",
		"Negate the effect of the tangent vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_tangent_get, ParticleSystem_invert_vertex_group_tangent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_rotation_ = {
		{&rna_ParticleSystem_invert_vertex_group_rotation, 	&rna_ParticleSystem_invert_vertex_group_tangent,
		-1, "vertex_group_rotation", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Rotation",
		"Vertex group to control rotation",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_rotation_get, ParticleSystem_vertex_group_rotation_length, ParticleSystem_vertex_group_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_rotation_ = {
		{&rna_ParticleSystem_vertex_group_field, 	&rna_ParticleSystem_vertex_group_rotation,
		-1, "invert_vertex_group_rotation", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Rotation Negate",
		"Negate the effect of the rotation vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_rotation_get, ParticleSystem_invert_vertex_group_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_field_ = {
		{&rna_ParticleSystem_invert_vertex_group_field, 	&rna_ParticleSystem_invert_vertex_group_rotation,
		-1, "vertex_group_field", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Field",
		"Vertex group to control field",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_field_get, ParticleSystem_vertex_group_field_length, ParticleSystem_vertex_group_field_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_field_ = {
		{&rna_ParticleSystem_vertex_group_twist, 	&rna_ParticleSystem_vertex_group_field,
		-1, "invert_vertex_group_field", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Field Negate",
		"Negate the effect of the field vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_field_get, ParticleSystem_invert_vertex_group_field_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_vertex_group_twist_ = {
		{&rna_ParticleSystem_invert_vertex_group_twist, 	&rna_ParticleSystem_invert_vertex_group_field,
		-1, "vertex_group_twist", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Twist",
		"Vertex group to control twist",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_vertex_group_twist_get, ParticleSystem_vertex_group_twist_length, ParticleSystem_vertex_group_twist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_ParticleSystem_invert_vertex_group_twist_ = {
		{&rna_ParticleSystem_point_cache, 	&rna_ParticleSystem_vertex_group_twist,
		-1, "invert_vertex_group_twist", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Group Twist Negate",
		"Negate the effect of the twist vertex group",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_invert_vertex_group_twist_get, ParticleSystem_invert_vertex_group_twist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_point_cache_ = {
		{&rna_ParticleSystem_has_multiple_caches, 	&rna_ParticleSystem_invert_vertex_group_twist,
		-1, "point_cache", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Point Cache",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_point_cache_get, nullptr, nullptr, nullptr,RNA_PointCache
	};

	rna_ParticleSystem_has_multiple_caches_ = {
		{&rna_ParticleSystem_parent, 	&rna_ParticleSystem_point_cache,
		-1, "has_multiple_caches", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Multiple Caches",
		"Particle system has multiple point caches",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_has_multiple_caches_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_parent_ = {
		{&rna_ParticleSystem_is_editable, 	&rna_ParticleSystem_has_multiple_caches,
		-1, "parent", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"Use this object\'s coordinate system instead of global coordinate system",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_parent_get, ParticleSystem_parent_set, nullptr, nullptr,RNA_Object
	};

	rna_ParticleSystem_is_editable_ = {
		{&rna_ParticleSystem_is_edited, 	&rna_ParticleSystem_parent,
		-1, "is_editable", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Editable",
		"Particle system can be edited in particle mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_is_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_is_edited_ = {
		{&rna_ParticleSystem_dt_frac, 	&rna_ParticleSystem_is_editable,
		-1, "is_edited", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Edited",
		"Particle system has been edited in particle mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSystem_is_edited_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSystem_dt_frac_ = {
		{nullptr, 	&rna_ParticleSystem_is_edited,
		-1, "dt_frac", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Timestep",
		"The current simulation time step size, as a fraction of a frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSystem, dt_frac), RawPropertyType(5), nullptr},
		ParticleSystem_dt_frac_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099009899f, 1.0f, 0.0099009899f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_ParticleSystem;
	srna->cont.properties = {&rna_ParticleSystem_rna_properties, &rna_ParticleSystem_dt_frac};
	srna->identifier = "ParticleSystem";
	srna->flag = 516;
	srna->name = "Particle System";
	srna->description = "Particle system in an object";
	srna->translation_context = "*";
	srna->icon = 189;
	srna->nameproperty = &rna_ParticleSystem_name;
	srna->iteratorproperty = &rna_ParticleSystem_rna_properties;
	srna->path = rna_ParticleSystem_path;
	{
	rna_ParticleSystem_co_hair_object_ = {
		{&rna_ParticleSystem_co_hair_particle_no, 	nullptr,
		-1, "object", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_ParticleSystem_co_hair_particle_no_ = {
		{&rna_ParticleSystem_co_hair_step, 	&rna_ParticleSystem_co_hair_object,
		-1, "particle_no", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Particle no",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_ParticleSystem_co_hair_step_ = {
		{&rna_ParticleSystem_co_hair_co, 	&rna_ParticleSystem_co_hair_particle_no,
		-1, "step", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "step no",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_ParticleSystem_co_hair_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleSystem_co_hair_co_ = {
		{nullptr, 	&rna_ParticleSystem_co_hair_step,
		-1, "co", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Co",
		"Exported hairkey location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleSystem_co_hair_co_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ParticleSystem_co_hair_object, &rna_ParticleSystem_co_hair_co};
		func->identifier = "co_hair";
		func->description = "Obtain cache hair data";
		func->call = ParticleSystem_co_hair_call;
		rna_ParticleSystem_co_hair_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ParticleSystem_uv_on_emitter_modifier_ = {
		{&rna_ParticleSystem_uv_on_emitter_particle, 	nullptr,
		-1, "modifier", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Particle modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSystemModifier
	};
	rna_ParticleSystem_uv_on_emitter_particle_ = {
		{&rna_ParticleSystem_uv_on_emitter_particle_no, 	&rna_ParticleSystem_uv_on_emitter_modifier,
		-1, "particle", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Particle",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Particle
	};
	rna_ParticleSystem_uv_on_emitter_particle_no_ = {
		{&rna_ParticleSystem_uv_on_emitter_uv_no, 	&rna_ParticleSystem_uv_on_emitter_particle,
		-1, "particle_no", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Particle no",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_ParticleSystem_uv_on_emitter_uv_no_ = {
		{&rna_ParticleSystem_uv_on_emitter_uv, 	&rna_ParticleSystem_uv_on_emitter_particle_no,
		-1, "uv_no", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV no",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_ParticleSystem_uv_on_emitter_uv_default[2] = {
		0.0f,
		0.0f
	};
	rna_ParticleSystem_uv_on_emitter_uv_ = {
		{nullptr, 	&rna_ParticleSystem_uv_on_emitter_uv_no,
		-1, "uv", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "uv",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleSystem_uv_on_emitter_uv_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ParticleSystem_uv_on_emitter_modifier, &rna_ParticleSystem_uv_on_emitter_uv};
		func->identifier = "uv_on_emitter";
		func->flag = 16;
		func->description = "Obtain uv for all particles";
		func->call = ParticleSystem_uv_on_emitter_call;
		rna_ParticleSystem_uv_on_emitter_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ParticleSystem_mcol_on_emitter_modifier_ = {
		{&rna_ParticleSystem_mcol_on_emitter_particle, 	nullptr,
		-1, "modifier", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Particle modifier",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSystemModifier
	};
	rna_ParticleSystem_mcol_on_emitter_particle_ = {
		{&rna_ParticleSystem_mcol_on_emitter_particle_no, 	&rna_ParticleSystem_mcol_on_emitter_modifier,
		-1, "particle", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Particle",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Particle
	};
	rna_ParticleSystem_mcol_on_emitter_particle_no_ = {
		{&rna_ParticleSystem_mcol_on_emitter_vcol_no, 	&rna_ParticleSystem_mcol_on_emitter_particle,
		-1, "particle_no", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Particle no",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_ParticleSystem_mcol_on_emitter_vcol_no_ = {
		{&rna_ParticleSystem_mcol_on_emitter_mcol, 	&rna_ParticleSystem_mcol_on_emitter_particle_no,
		-1, "vcol_no", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "vcol no",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	static float rna_ParticleSystem_mcol_on_emitter_mcol_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleSystem_mcol_on_emitter_mcol_ = {
		{nullptr, 	&rna_ParticleSystem_mcol_on_emitter_vcol_no,
		-1, "mcol", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "mcol",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleSystem_mcol_on_emitter_mcol_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ParticleSystem_mcol_on_emitter_modifier, &rna_ParticleSystem_mcol_on_emitter_mcol};
		func->identifier = "mcol_on_emitter";
		func->flag = 16;
		func->description = "Obtain mcol for all particles";
		func->call = ParticleSystem_mcol_on_emitter_call;
		rna_ParticleSystem_mcol_on_emitter_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Particle Settings Texture Slot */
static EnumPropertyRNA rna_ParticleSettingsTextureSlot_texture_coords_;
PropertyRNA &rna_ParticleSettingsTextureSlot_texture_coords = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_texture_coords_);

static PointerPropertyRNA rna_ParticleSettingsTextureSlot_object_;
PropertyRNA &rna_ParticleSettingsTextureSlot_object = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_object_);

static StringPropertyRNA rna_ParticleSettingsTextureSlot_uv_layer_;
PropertyRNA &rna_ParticleSettingsTextureSlot_uv_layer = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_uv_layer_);

static EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_x_;
PropertyRNA &rna_ParticleSettingsTextureSlot_mapping_x = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_mapping_x_);

static EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_y_;
PropertyRNA &rna_ParticleSettingsTextureSlot_mapping_y = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_mapping_y_);

static EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_z_;
PropertyRNA &rna_ParticleSettingsTextureSlot_mapping_z = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_mapping_z_);

static EnumPropertyRNA rna_ParticleSettingsTextureSlot_mapping_;
PropertyRNA &rna_ParticleSettingsTextureSlot_mapping = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_mapping_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_time_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_time = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_time_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_life_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_life = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_life_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_density_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_density = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_density_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_size_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_size_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_velocity_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_velocity = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_velocity_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_field_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_field = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_field_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_gravity_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_gravity = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_gravity_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_damp_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_damp = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_damp_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_clump_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_clump = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_clump_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_kink_amp_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_kink_amp = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_kink_amp_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_kink_freq_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_kink_freq = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_kink_freq_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_rough_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_rough = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_rough_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_length_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_length = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_length_);

static BoolPropertyRNA rna_ParticleSettingsTextureSlot_use_map_twist_;
PropertyRNA &rna_ParticleSettingsTextureSlot_use_map_twist = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_use_map_twist_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_time_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_time_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_time_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_life_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_life_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_life_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_density_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_density_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_density_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_size_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_size_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_size_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_velocity_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_velocity_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_velocity_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_field_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_field_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_field_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_gravity_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_gravity_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_gravity_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_damp_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_damp_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_damp_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_length_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_length_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_length_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_clump_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_clump_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_clump_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_kink_amp_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_kink_amp_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_kink_amp_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_kink_freq_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_kink_freq_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_kink_freq_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_rough_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_rough_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_rough_factor_);

static FloatPropertyRNA rna_ParticleSettingsTextureSlot_twist_factor_;
PropertyRNA &rna_ParticleSettingsTextureSlot_twist_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlot_twist_factor_);

StructRNA *RNA_ParticleSettingsTextureSlot;
void register_struct_ParticleSettingsTextureSlot(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_ParticleSettingsTextureSlot_texture_coords_items[6] = {
		{8, "GLOBAL", 0, "Global", "Use global coordinates for the texture coordinates"	},
		{32, "OBJECT", 0, "Object", "Use linked object\'s coordinates for texture coordinates"	},
		{16, "UV", 0, "UV", "Use UV coordinates for texture coordinates"	},
		{1, "ORCO", 0, "Generated", "Use the original undeformed coordinates of the object"	},
		{8192, "STRAND", 0, "Strand / Particle", "Use normalized strand texture coordinate (1D) or particle age (X) and trail position (Y)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettingsTextureSlot_texture_coords_ = {
		{&rna_ParticleSettingsTextureSlot_object, 	nullptr,
		-1, "texture_coords", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Texture Coordinates",
		"Texture coordinates used to map the texture onto the background",
		0, "Texture",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset_dependency, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, texco), RawPropertyType(1), nullptr},
		ParticleSettingsTextureSlot_texture_coords_get, ParticleSettingsTextureSlot_texture_coords_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettingsTextureSlot_texture_coords_items, 5, 16
	};

	rna_ParticleSettingsTextureSlot_object_ = {
		{&rna_ParticleSettingsTextureSlot_uv_layer, 	&rna_ParticleSettingsTextureSlot_texture_coords,
		-1, "object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Object to use for mapping with Object texture coordinates",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset_dependency, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_object_get, ParticleSettingsTextureSlot_object_set, nullptr, nullptr,RNA_Object
	};

	rna_ParticleSettingsTextureSlot_uv_layer_ = {
		{&rna_ParticleSettingsTextureSlot_mapping_x, 	&rna_ParticleSettingsTextureSlot_object,
		-1, "uv_layer", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV Map",
		"UV map to use for mapping with UV texture coordinates",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {68, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_uv_layer_get, ParticleSettingsTextureSlot_uv_layer_length, ParticleSettingsTextureSlot_uv_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 68, ""
	};

	static const EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_x_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{1, "X", 0, "X", ""	},
		{2, "Y", 0, "Y", ""	},
		{3, "Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettingsTextureSlot_mapping_x_ = {
		{&rna_ParticleSettingsTextureSlot_mapping_y, 	&rna_ParticleSettingsTextureSlot_uv_layer,
		-1, "mapping_x", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "X Mapping",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, projx), RawPropertyType(2), nullptr},
		ParticleSettingsTextureSlot_mapping_x_get, ParticleSettingsTextureSlot_mapping_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettingsTextureSlot_mapping_x_items, 4, 1
	};

	static const EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_y_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{1, "X", 0, "X", ""	},
		{2, "Y", 0, "Y", ""	},
		{3, "Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettingsTextureSlot_mapping_y_ = {
		{&rna_ParticleSettingsTextureSlot_mapping_z, 	&rna_ParticleSettingsTextureSlot_mapping_x,
		-1, "mapping_y", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Y Mapping",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, projy), RawPropertyType(2), nullptr},
		ParticleSettingsTextureSlot_mapping_y_get, ParticleSettingsTextureSlot_mapping_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettingsTextureSlot_mapping_y_items, 4, 2
	};

	static const EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_z_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{1, "X", 0, "X", ""	},
		{2, "Y", 0, "Y", ""	},
		{3, "Z", 0, "Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettingsTextureSlot_mapping_z_ = {
		{&rna_ParticleSettingsTextureSlot_mapping, 	&rna_ParticleSettingsTextureSlot_mapping_y,
		-1, "mapping_z", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Z Mapping",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, projz), RawPropertyType(2), nullptr},
		ParticleSettingsTextureSlot_mapping_z_get, ParticleSettingsTextureSlot_mapping_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettingsTextureSlot_mapping_z_items, 4, 3
	};

	static const EnumPropertyItem rna_ParticleSettingsTextureSlot_mapping_items[5] = {
		{0, "FLAT", 0, "Flat", "Map X and Y coordinates directly"	},
		{1, "CUBE", 0, "Cube", "Map using the normal vector"	},
		{2, "TUBE", 0, "Tube", "Map with Z as central axis"	},
		{3, "SPHERE", 0, "Sphere", "Map with Z as central axis"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettingsTextureSlot_mapping_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_time, 	&rna_ParticleSettingsTextureSlot_mapping_z,
		-1, "mapping", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mapping",
		"",
		0, "Image",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, mapping), RawPropertyType(2), nullptr},
		ParticleSettingsTextureSlot_mapping_get, ParticleSettingsTextureSlot_mapping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettingsTextureSlot_mapping_items, 4, 0
	};

	rna_ParticleSettingsTextureSlot_use_map_time_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_life, 	&rna_ParticleSettingsTextureSlot_mapping,
		-1, "use_map_time", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Emission Time",
		"Affect the emission time of the particles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_time_get, ParticleSettingsTextureSlot_use_map_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_life_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_density, 	&rna_ParticleSettingsTextureSlot_use_map_time,
		-1, "use_map_life", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Life Time",
		"Affect the life time of the particles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_life_get, ParticleSettingsTextureSlot_use_map_life_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_density_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_size, 	&rna_ParticleSettingsTextureSlot_use_map_life,
		-1, "use_map_density", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Density",
		"Affect the density of the particles",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_density_get, ParticleSettingsTextureSlot_use_map_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_size_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_velocity, 	&rna_ParticleSettingsTextureSlot_use_map_density,
		-1, "use_map_size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size",
		"Affect the particle size",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_size_get, ParticleSettingsTextureSlot_use_map_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_velocity_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_field, 	&rna_ParticleSettingsTextureSlot_use_map_size,
		-1, "use_map_velocity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Initial Velocity",
		"Affect the particle initial velocity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_velocity_get, ParticleSettingsTextureSlot_use_map_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_field_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_gravity, 	&rna_ParticleSettingsTextureSlot_use_map_velocity,
		-1, "use_map_field", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Force Field",
		"Affect the particle force fields",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_field_get, ParticleSettingsTextureSlot_use_map_field_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_gravity_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_damp, 	&rna_ParticleSettingsTextureSlot_use_map_field,
		-1, "use_map_gravity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Gravity",
		"Affect the particle gravity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_gravity_get, ParticleSettingsTextureSlot_use_map_gravity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_damp_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_clump, 	&rna_ParticleSettingsTextureSlot_use_map_gravity,
		-1, "use_map_damp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Damp",
		"Affect the particle velocity damping",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_damp_get, ParticleSettingsTextureSlot_use_map_damp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_clump_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_kink_amp, 	&rna_ParticleSettingsTextureSlot_use_map_damp,
		-1, "use_map_clump", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clump",
		"Affect the child clumping",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_clump_get, ParticleSettingsTextureSlot_use_map_clump_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_kink_amp_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_kink_freq, 	&rna_ParticleSettingsTextureSlot_use_map_clump,
		-1, "use_map_kink_amp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Kink Amplitude",
		"Affect the child kink amplitude",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_kink_amp_get, ParticleSettingsTextureSlot_use_map_kink_amp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_kink_freq_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_rough, 	&rna_ParticleSettingsTextureSlot_use_map_kink_amp,
		-1, "use_map_kink_freq", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Kink Frequency",
		"Affect the child kink frequency",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_kink_freq_get, ParticleSettingsTextureSlot_use_map_kink_freq_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_rough_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_length, 	&rna_ParticleSettingsTextureSlot_use_map_kink_freq,
		-1, "use_map_rough", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Rough",
		"Affect the child rough",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_rough_get, ParticleSettingsTextureSlot_use_map_rough_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_length_ = {
		{&rna_ParticleSettingsTextureSlot_use_map_twist, 	&rna_ParticleSettingsTextureSlot_use_map_rough,
		-1, "use_map_length", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Length",
		"Affect the child hair length",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_length_get, ParticleSettingsTextureSlot_use_map_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_use_map_twist_ = {
		{&rna_ParticleSettingsTextureSlot_time_factor, 	&rna_ParticleSettingsTextureSlot_use_map_length,
		-1, "use_map_twist", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Twist",
		"Affect the child twist",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlot_use_map_twist_get, ParticleSettingsTextureSlot_use_map_twist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettingsTextureSlot_time_factor_ = {
		{&rna_ParticleSettingsTextureSlot_life_factor, 	&rna_ParticleSettingsTextureSlot_use_map_twist,
		-1, "time_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Emission Time Factor",
		"Amount texture affects particle emission time",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, timefac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_time_factor_get, ParticleSettingsTextureSlot_time_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_life_factor_ = {
		{&rna_ParticleSettingsTextureSlot_density_factor, 	&rna_ParticleSettingsTextureSlot_time_factor,
		-1, "life_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Life Time Factor",
		"Amount texture affects particle life time",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, lifefac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_life_factor_get, ParticleSettingsTextureSlot_life_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_density_factor_ = {
		{&rna_ParticleSettingsTextureSlot_size_factor, 	&rna_ParticleSettingsTextureSlot_life_factor,
		-1, "density_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Density Factor",
		"Amount texture affects particle density",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, padensfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_density_factor_get, ParticleSettingsTextureSlot_density_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_size_factor_ = {
		{&rna_ParticleSettingsTextureSlot_velocity_factor, 	&rna_ParticleSettingsTextureSlot_density_factor,
		-1, "size_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size Factor",
		"Amount texture affects physical particle size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, sizefac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_size_factor_get, ParticleSettingsTextureSlot_size_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_velocity_factor_ = {
		{&rna_ParticleSettingsTextureSlot_field_factor, 	&rna_ParticleSettingsTextureSlot_size_factor,
		-1, "velocity_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Velocity Factor",
		"Amount texture affects particle initial velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, ivelfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_velocity_factor_get, ParticleSettingsTextureSlot_velocity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_field_factor_ = {
		{&rna_ParticleSettingsTextureSlot_gravity_factor, 	&rna_ParticleSettingsTextureSlot_velocity_factor,
		-1, "field_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Field Factor",
		"Amount texture affects particle force fields",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, fieldfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_field_factor_get, ParticleSettingsTextureSlot_field_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_gravity_factor_ = {
		{&rna_ParticleSettingsTextureSlot_damp_factor, 	&rna_ParticleSettingsTextureSlot_field_factor,
		-1, "gravity_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gravity Factor",
		"Amount texture affects particle gravity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, gravityfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_gravity_factor_get, ParticleSettingsTextureSlot_gravity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_damp_factor_ = {
		{&rna_ParticleSettingsTextureSlot_length_factor, 	&rna_ParticleSettingsTextureSlot_gravity_factor,
		-1, "damp_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Damp Factor",
		"Amount texture affects particle damping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, dampfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_damp_factor_get, ParticleSettingsTextureSlot_damp_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_length_factor_ = {
		{&rna_ParticleSettingsTextureSlot_clump_factor, 	&rna_ParticleSettingsTextureSlot_damp_factor,
		-1, "length_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Length Factor",
		"Amount texture affects child hair length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, lengthfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_length_factor_get, ParticleSettingsTextureSlot_length_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_clump_factor_ = {
		{&rna_ParticleSettingsTextureSlot_kink_amp_factor, 	&rna_ParticleSettingsTextureSlot_length_factor,
		-1, "clump_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clump Factor",
		"Amount texture affects child clump",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, clumpfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_clump_factor_get, ParticleSettingsTextureSlot_clump_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_kink_amp_factor_ = {
		{&rna_ParticleSettingsTextureSlot_kink_freq_factor, 	&rna_ParticleSettingsTextureSlot_clump_factor,
		-1, "kink_amp_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Kink Amplitude Factor",
		"Amount texture affects child kink amplitude",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, kinkampfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_kink_amp_factor_get, ParticleSettingsTextureSlot_kink_amp_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_kink_freq_factor_ = {
		{&rna_ParticleSettingsTextureSlot_rough_factor, 	&rna_ParticleSettingsTextureSlot_kink_amp_factor,
		-1, "kink_freq_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Kink Frequency Factor",
		"Amount texture affects child kink frequency",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, kinkfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_kink_freq_factor_get, ParticleSettingsTextureSlot_kink_freq_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_rough_factor_ = {
		{&rna_ParticleSettingsTextureSlot_twist_factor, 	&rna_ParticleSettingsTextureSlot_kink_freq_factor,
		-1, "rough_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rough Factor",
		"Amount texture affects child roughness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, roughfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_rough_factor_get, ParticleSettingsTextureSlot_rough_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettingsTextureSlot_twist_factor_ = {
		{nullptr, 	&rna_ParticleSettingsTextureSlot_rough_factor,
		-1, "twist_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Twist Factor",
		"Amount texture affects child twist",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MTex, twistfac), RawPropertyType(5), nullptr},
		ParticleSettingsTextureSlot_twist_factor_get, ParticleSettingsTextureSlot_twist_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	StructRNA *srna = RNA_ParticleSettingsTextureSlot;
	srna->cont.properties = {&rna_ParticleSettingsTextureSlot_texture_coords, &rna_ParticleSettingsTextureSlot_twist_factor};
	srna->identifier = "ParticleSettingsTextureSlot";
	srna->flag = 516;
	srna->name = "Particle Settings Texture Slot";
	srna->description = "Texture slot for textures in a Particle Settings data-block";
	srna->translation_context = "*";
	srna->icon = 200;
	srna->nameproperty = &rna_TextureSlot_name;
	srna->iteratorproperty = &rna_TextureSlot_rna_properties;
	srna->base = RNA_TextureSlot;
	srna->path = rna_TextureSlot_path;
};

/* Particle Settings */
static CollectionPropertyRNA rna_ParticleSettings_texture_slots_;
PropertyRNA &rna_ParticleSettings_texture_slots = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_texture_slots_);

static PointerPropertyRNA rna_ParticleSettings_active_texture_;
PropertyRNA &rna_ParticleSettings_active_texture = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_active_texture_);

static IntPropertyRNA rna_ParticleSettings_active_texture_index_;
PropertyRNA &rna_ParticleSettings_active_texture_index = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_active_texture_index_);

static BoolPropertyRNA rna_ParticleSettings_is_fluid_;
PropertyRNA &rna_ParticleSettings_is_fluid = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_is_fluid_);

static BoolPropertyRNA rna_ParticleSettings_use_react_start_end_;
PropertyRNA &rna_ParticleSettings_use_react_start_end = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_react_start_end_);

static BoolPropertyRNA rna_ParticleSettings_use_react_multiple_;
PropertyRNA &rna_ParticleSettings_use_react_multiple = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_react_multiple_);

static BoolPropertyRNA rna_ParticleSettings_use_regrow_hair_;
PropertyRNA &rna_ParticleSettings_use_regrow_hair = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_regrow_hair_);

static BoolPropertyRNA rna_ParticleSettings_show_unborn_;
PropertyRNA &rna_ParticleSettings_show_unborn = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_show_unborn_);

static BoolPropertyRNA rna_ParticleSettings_use_dead_;
PropertyRNA &rna_ParticleSettings_use_dead = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_dead_);

static BoolPropertyRNA rna_ParticleSettings_use_emit_random_;
PropertyRNA &rna_ParticleSettings_use_emit_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_emit_random_);

static BoolPropertyRNA rna_ParticleSettings_use_even_distribution_;
PropertyRNA &rna_ParticleSettings_use_even_distribution = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_even_distribution_);

static BoolPropertyRNA rna_ParticleSettings_use_die_on_collision_;
PropertyRNA &rna_ParticleSettings_use_die_on_collision = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_die_on_collision_);

static BoolPropertyRNA rna_ParticleSettings_use_size_deflect_;
PropertyRNA &rna_ParticleSettings_use_size_deflect = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_size_deflect_);

static BoolPropertyRNA rna_ParticleSettings_use_rotations_;
PropertyRNA &rna_ParticleSettings_use_rotations = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_rotations_);

static BoolPropertyRNA rna_ParticleSettings_use_dynamic_rotation_;
PropertyRNA &rna_ParticleSettings_use_dynamic_rotation = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_dynamic_rotation_);

static BoolPropertyRNA rna_ParticleSettings_use_multiply_size_mass_;
PropertyRNA &rna_ParticleSettings_use_multiply_size_mass = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_multiply_size_mass_);

static BoolPropertyRNA rna_ParticleSettings_use_advanced_hair_;
PropertyRNA &rna_ParticleSettings_use_advanced_hair = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_advanced_hair_);

static BoolPropertyRNA rna_ParticleSettings_lock_boids_to_surface_;
PropertyRNA &rna_ParticleSettings_lock_boids_to_surface = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_lock_boids_to_surface_);

static BoolPropertyRNA rna_ParticleSettings_use_hair_bspline_;
PropertyRNA &rna_ParticleSettings_use_hair_bspline = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_hair_bspline_);

static BoolPropertyRNA rna_ParticleSettings_invert_grid_;
PropertyRNA &rna_ParticleSettings_invert_grid = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_invert_grid_);

static BoolPropertyRNA rna_ParticleSettings_hexagonal_grid_;
PropertyRNA &rna_ParticleSettings_hexagonal_grid = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_hexagonal_grid_);

static BoolPropertyRNA rna_ParticleSettings_apply_effector_to_children_;
PropertyRNA &rna_ParticleSettings_apply_effector_to_children = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_apply_effector_to_children_);

static BoolPropertyRNA rna_ParticleSettings_create_long_hair_children_;
PropertyRNA &rna_ParticleSettings_create_long_hair_children = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_create_long_hair_children_);

static BoolPropertyRNA rna_ParticleSettings_apply_guide_to_children_;
PropertyRNA &rna_ParticleSettings_apply_guide_to_children = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_apply_guide_to_children_);

static BoolPropertyRNA rna_ParticleSettings_use_self_effect_;
PropertyRNA &rna_ParticleSettings_use_self_effect = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_self_effect_);

static EnumPropertyRNA rna_ParticleSettings_type_;
PropertyRNA &rna_ParticleSettings_type = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_type_);

static EnumPropertyRNA rna_ParticleSettings_emit_from_;
PropertyRNA &rna_ParticleSettings_emit_from = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_emit_from_);

static EnumPropertyRNA rna_ParticleSettings_distribution_;
PropertyRNA &rna_ParticleSettings_distribution = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_distribution_);

static EnumPropertyRNA rna_ParticleSettings_physics_type_;
PropertyRNA &rna_ParticleSettings_physics_type = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_physics_type_);

static EnumPropertyRNA rna_ParticleSettings_rotation_mode_;
PropertyRNA &rna_ParticleSettings_rotation_mode = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_rotation_mode_);

static EnumPropertyRNA rna_ParticleSettings_angular_velocity_mode_;
PropertyRNA &rna_ParticleSettings_angular_velocity_mode = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_angular_velocity_mode_);

static EnumPropertyRNA rna_ParticleSettings_react_event_;
PropertyRNA &rna_ParticleSettings_react_event = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_react_event_);

static BoolPropertyRNA rna_ParticleSettings_show_guide_hairs_;
PropertyRNA &rna_ParticleSettings_show_guide_hairs = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_show_guide_hairs_);

static BoolPropertyRNA rna_ParticleSettings_show_hair_grid_;
PropertyRNA &rna_ParticleSettings_show_hair_grid = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_show_hair_grid_);

static BoolPropertyRNA rna_ParticleSettings_show_velocity_;
PropertyRNA &rna_ParticleSettings_show_velocity = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_show_velocity_);

static BoolPropertyRNA rna_ParticleSettings_show_size_;
PropertyRNA &rna_ParticleSettings_show_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_show_size_);

static BoolPropertyRNA rna_ParticleSettings_show_health_;
PropertyRNA &rna_ParticleSettings_show_health = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_show_health_);

static BoolPropertyRNA rna_ParticleSettings_use_absolute_path_time_;
PropertyRNA &rna_ParticleSettings_use_absolute_path_time = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_absolute_path_time_);

static BoolPropertyRNA rna_ParticleSettings_use_parent_particles_;
PropertyRNA &rna_ParticleSettings_use_parent_particles = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_parent_particles_);

static BoolPropertyRNA rna_ParticleSettings_show_number_;
PropertyRNA &rna_ParticleSettings_show_number = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_show_number_);

static BoolPropertyRNA rna_ParticleSettings_use_collection_pick_random_;
PropertyRNA &rna_ParticleSettings_use_collection_pick_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_collection_pick_random_);

static BoolPropertyRNA rna_ParticleSettings_use_collection_count_;
PropertyRNA &rna_ParticleSettings_use_collection_count = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_collection_count_);

static BoolPropertyRNA rna_ParticleSettings_use_global_instance_;
PropertyRNA &rna_ParticleSettings_use_global_instance = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_global_instance_);

static BoolPropertyRNA rna_ParticleSettings_use_rotation_instance_;
PropertyRNA &rna_ParticleSettings_use_rotation_instance = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_rotation_instance_);

static BoolPropertyRNA rna_ParticleSettings_use_scale_instance_;
PropertyRNA &rna_ParticleSettings_use_scale_instance = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_scale_instance_);

static BoolPropertyRNA rna_ParticleSettings_use_render_adaptive_;
PropertyRNA &rna_ParticleSettings_use_render_adaptive = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_render_adaptive_);

static BoolPropertyRNA rna_ParticleSettings_use_velocity_length_;
PropertyRNA &rna_ParticleSettings_use_velocity_length = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_velocity_length_);

static BoolPropertyRNA rna_ParticleSettings_use_whole_collection_;
PropertyRNA &rna_ParticleSettings_use_whole_collection = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_whole_collection_);

static BoolPropertyRNA rna_ParticleSettings_use_strand_primitive_;
PropertyRNA &rna_ParticleSettings_use_strand_primitive = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_strand_primitive_);

static EnumPropertyRNA rna_ParticleSettings_display_method_;
PropertyRNA &rna_ParticleSettings_display_method = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_display_method_);

static EnumPropertyRNA rna_ParticleSettings_render_type_;
PropertyRNA &rna_ParticleSettings_render_type = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_render_type_);

static EnumPropertyRNA rna_ParticleSettings_display_color_;
PropertyRNA &rna_ParticleSettings_display_color = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_display_color_);

static FloatPropertyRNA rna_ParticleSettings_display_size_;
PropertyRNA &rna_ParticleSettings_display_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_display_size_);

static EnumPropertyRNA rna_ParticleSettings_child_type_;
PropertyRNA &rna_ParticleSettings_child_type = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_type_);

static IntPropertyRNA rna_ParticleSettings_display_step_;
PropertyRNA &rna_ParticleSettings_display_step = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_display_step_);

static IntPropertyRNA rna_ParticleSettings_render_step_;
PropertyRNA &rna_ParticleSettings_render_step = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_render_step_);

static IntPropertyRNA rna_ParticleSettings_hair_step_;
PropertyRNA &rna_ParticleSettings_hair_step = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_hair_step_);

static FloatPropertyRNA rna_ParticleSettings_bending_random_;
PropertyRNA &rna_ParticleSettings_bending_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_bending_random_);

static IntPropertyRNA rna_ParticleSettings_keys_step_;
PropertyRNA &rna_ParticleSettings_keys_step = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_keys_step_);

static IntPropertyRNA rna_ParticleSettings_adaptive_angle_;
PropertyRNA &rna_ParticleSettings_adaptive_angle = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_adaptive_angle_);

static IntPropertyRNA rna_ParticleSettings_adaptive_pixel_;
PropertyRNA &rna_ParticleSettings_adaptive_pixel = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_adaptive_pixel_);

static IntPropertyRNA rna_ParticleSettings_display_percentage_;
PropertyRNA &rna_ParticleSettings_display_percentage = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_display_percentage_);

static IntPropertyRNA rna_ParticleSettings_material_;
PropertyRNA &rna_ParticleSettings_material = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_material_);

static EnumPropertyRNA rna_ParticleSettings_material_slot_;
PropertyRNA &rna_ParticleSettings_material_slot = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_material_slot_);

static EnumPropertyRNA rna_ParticleSettings_integrator_;
PropertyRNA &rna_ParticleSettings_integrator = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_integrator_);

static EnumPropertyRNA rna_ParticleSettings_kink_;
PropertyRNA &rna_ParticleSettings_kink = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_);

static EnumPropertyRNA rna_ParticleSettings_kink_axis_;
PropertyRNA &rna_ParticleSettings_kink_axis = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_axis_);

static FloatPropertyRNA rna_ParticleSettings_color_maximum_;
PropertyRNA &rna_ParticleSettings_color_maximum = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_color_maximum_);

static FloatPropertyRNA rna_ParticleSettings_frame_start_;
PropertyRNA &rna_ParticleSettings_frame_start = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_frame_start_);

static FloatPropertyRNA rna_ParticleSettings_frame_end_;
PropertyRNA &rna_ParticleSettings_frame_end = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_frame_end_);

static FloatPropertyRNA rna_ParticleSettings_lifetime_;
PropertyRNA &rna_ParticleSettings_lifetime = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_lifetime_);

static FloatPropertyRNA rna_ParticleSettings_lifetime_random_;
PropertyRNA &rna_ParticleSettings_lifetime_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_lifetime_random_);

static FloatPropertyRNA rna_ParticleSettings_time_tweak_;
PropertyRNA &rna_ParticleSettings_time_tweak = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_time_tweak_);

static FloatPropertyRNA rna_ParticleSettings_timestep_;
PropertyRNA &rna_ParticleSettings_timestep = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_timestep_);

static BoolPropertyRNA rna_ParticleSettings_use_adaptive_subframes_;
PropertyRNA &rna_ParticleSettings_use_adaptive_subframes = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_adaptive_subframes_);

static IntPropertyRNA rna_ParticleSettings_subframes_;
PropertyRNA &rna_ParticleSettings_subframes = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_subframes_);

static FloatPropertyRNA rna_ParticleSettings_courant_target_;
PropertyRNA &rna_ParticleSettings_courant_target = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_courant_target_);

static FloatPropertyRNA rna_ParticleSettings_jitter_factor_;
PropertyRNA &rna_ParticleSettings_jitter_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_jitter_factor_);

static FloatPropertyRNA rna_ParticleSettings_effect_hair_;
PropertyRNA &rna_ParticleSettings_effect_hair = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_effect_hair_);

static IntPropertyRNA rna_ParticleSettings_count_;
PropertyRNA &rna_ParticleSettings_count = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_count_);

static IntPropertyRNA rna_ParticleSettings_userjit_;
PropertyRNA &rna_ParticleSettings_userjit = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_userjit_);

static IntPropertyRNA rna_ParticleSettings_grid_resolution_;
PropertyRNA &rna_ParticleSettings_grid_resolution = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_grid_resolution_);

static FloatPropertyRNA rna_ParticleSettings_grid_random_;
PropertyRNA &rna_ParticleSettings_grid_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_grid_random_);

static IntPropertyRNA rna_ParticleSettings_effector_amount_;
PropertyRNA &rna_ParticleSettings_effector_amount = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_effector_amount_);

static FloatPropertyRNA rna_ParticleSettings_normal_factor_;
PropertyRNA &rna_ParticleSettings_normal_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_normal_factor_);

static FloatPropertyRNA rna_ParticleSettings_object_factor_;
PropertyRNA &rna_ParticleSettings_object_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_object_factor_);

static FloatPropertyRNA rna_ParticleSettings_factor_random_;
PropertyRNA &rna_ParticleSettings_factor_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_factor_random_);

static FloatPropertyRNA rna_ParticleSettings_particle_factor_;
PropertyRNA &rna_ParticleSettings_particle_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_particle_factor_);

static FloatPropertyRNA rna_ParticleSettings_tangent_factor_;
PropertyRNA &rna_ParticleSettings_tangent_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_tangent_factor_);

static FloatPropertyRNA rna_ParticleSettings_tangent_phase_;
PropertyRNA &rna_ParticleSettings_tangent_phase = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_tangent_phase_);

static FloatPropertyRNA rna_ParticleSettings_reactor_factor_;
PropertyRNA &rna_ParticleSettings_reactor_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_reactor_factor_);

static FloatPropertyRNA rna_ParticleSettings_object_align_factor_;
PropertyRNA &rna_ParticleSettings_object_align_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_object_align_factor_);

static FloatPropertyRNA rna_ParticleSettings_angular_velocity_factor_;
PropertyRNA &rna_ParticleSettings_angular_velocity_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_angular_velocity_factor_);

static FloatPropertyRNA rna_ParticleSettings_phase_factor_;
PropertyRNA &rna_ParticleSettings_phase_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_phase_factor_);

static FloatPropertyRNA rna_ParticleSettings_rotation_factor_random_;
PropertyRNA &rna_ParticleSettings_rotation_factor_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_rotation_factor_random_);

static FloatPropertyRNA rna_ParticleSettings_phase_factor_random_;
PropertyRNA &rna_ParticleSettings_phase_factor_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_phase_factor_random_);

static FloatPropertyRNA rna_ParticleSettings_hair_length_;
PropertyRNA &rna_ParticleSettings_hair_length = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_hair_length_);

static FloatPropertyRNA rna_ParticleSettings_mass_;
PropertyRNA &rna_ParticleSettings_mass = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_mass_);

static FloatPropertyRNA rna_ParticleSettings_particle_size_;
PropertyRNA &rna_ParticleSettings_particle_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_particle_size_);

static FloatPropertyRNA rna_ParticleSettings_size_random_;
PropertyRNA &rna_ParticleSettings_size_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_size_random_);

static PointerPropertyRNA rna_ParticleSettings_collision_collection_;
PropertyRNA &rna_ParticleSettings_collision_collection = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_collision_collection_);

static FloatPropertyRNA rna_ParticleSettings_drag_factor_;
PropertyRNA &rna_ParticleSettings_drag_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_drag_factor_);

static FloatPropertyRNA rna_ParticleSettings_brownian_factor_;
PropertyRNA &rna_ParticleSettings_brownian_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_brownian_factor_);

static FloatPropertyRNA rna_ParticleSettings_damping_;
PropertyRNA &rna_ParticleSettings_damping = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_damping_);

static FloatPropertyRNA rna_ParticleSettings_length_random_;
PropertyRNA &rna_ParticleSettings_length_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_length_random_);

static IntPropertyRNA rna_ParticleSettings_child_percent_;
PropertyRNA &rna_ParticleSettings_child_percent = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_percent_);

static IntPropertyRNA rna_ParticleSettings_rendered_child_count_;
PropertyRNA &rna_ParticleSettings_rendered_child_count = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_rendered_child_count_);

static FloatPropertyRNA rna_ParticleSettings_virtual_parents_;
PropertyRNA &rna_ParticleSettings_virtual_parents = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_virtual_parents_);

static FloatPropertyRNA rna_ParticleSettings_child_size_;
PropertyRNA &rna_ParticleSettings_child_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_size_);

static FloatPropertyRNA rna_ParticleSettings_child_size_random_;
PropertyRNA &rna_ParticleSettings_child_size_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_size_random_);

static FloatPropertyRNA rna_ParticleSettings_child_radius_;
PropertyRNA &rna_ParticleSettings_child_radius = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_radius_);

static FloatPropertyRNA rna_ParticleSettings_child_roundness_;
PropertyRNA &rna_ParticleSettings_child_roundness = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_roundness_);

static FloatPropertyRNA rna_ParticleSettings_clump_factor_;
PropertyRNA &rna_ParticleSettings_clump_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_clump_factor_);

static FloatPropertyRNA rna_ParticleSettings_clump_shape_;
PropertyRNA &rna_ParticleSettings_clump_shape = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_clump_shape_);

static BoolPropertyRNA rna_ParticleSettings_use_clump_curve_;
PropertyRNA &rna_ParticleSettings_use_clump_curve = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_clump_curve_);

static PointerPropertyRNA rna_ParticleSettings_clump_curve_;
PropertyRNA &rna_ParticleSettings_clump_curve = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_clump_curve_);

static BoolPropertyRNA rna_ParticleSettings_use_clump_noise_;
PropertyRNA &rna_ParticleSettings_use_clump_noise = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_clump_noise_);

static FloatPropertyRNA rna_ParticleSettings_clump_noise_size_;
PropertyRNA &rna_ParticleSettings_clump_noise_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_clump_noise_size_);

static FloatPropertyRNA rna_ParticleSettings_kink_amplitude_;
PropertyRNA &rna_ParticleSettings_kink_amplitude = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_amplitude_);

static FloatPropertyRNA rna_ParticleSettings_kink_amplitude_clump_;
PropertyRNA &rna_ParticleSettings_kink_amplitude_clump = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_amplitude_clump_);

static FloatPropertyRNA rna_ParticleSettings_kink_amplitude_random_;
PropertyRNA &rna_ParticleSettings_kink_amplitude_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_amplitude_random_);

static FloatPropertyRNA rna_ParticleSettings_kink_frequency_;
PropertyRNA &rna_ParticleSettings_kink_frequency = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_frequency_);

static FloatPropertyRNA rna_ParticleSettings_kink_shape_;
PropertyRNA &rna_ParticleSettings_kink_shape = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_shape_);

static FloatPropertyRNA rna_ParticleSettings_kink_flat_;
PropertyRNA &rna_ParticleSettings_kink_flat = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_flat_);

static IntPropertyRNA rna_ParticleSettings_kink_extra_steps_;
PropertyRNA &rna_ParticleSettings_kink_extra_steps = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_extra_steps_);

static FloatPropertyRNA rna_ParticleSettings_kink_axis_random_;
PropertyRNA &rna_ParticleSettings_kink_axis_random = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_kink_axis_random_);

static FloatPropertyRNA rna_ParticleSettings_roughness_1_;
PropertyRNA &rna_ParticleSettings_roughness_1 = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_roughness_1_);

static FloatPropertyRNA rna_ParticleSettings_roughness_1_size_;
PropertyRNA &rna_ParticleSettings_roughness_1_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_roughness_1_size_);

static FloatPropertyRNA rna_ParticleSettings_roughness_2_;
PropertyRNA &rna_ParticleSettings_roughness_2 = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_roughness_2_);

static FloatPropertyRNA rna_ParticleSettings_roughness_2_size_;
PropertyRNA &rna_ParticleSettings_roughness_2_size = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_roughness_2_size_);

static FloatPropertyRNA rna_ParticleSettings_roughness_2_threshold_;
PropertyRNA &rna_ParticleSettings_roughness_2_threshold = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_roughness_2_threshold_);

static FloatPropertyRNA rna_ParticleSettings_roughness_endpoint_;
PropertyRNA &rna_ParticleSettings_roughness_endpoint = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_roughness_endpoint_);

static FloatPropertyRNA rna_ParticleSettings_roughness_end_shape_;
PropertyRNA &rna_ParticleSettings_roughness_end_shape = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_roughness_end_shape_);

static BoolPropertyRNA rna_ParticleSettings_use_roughness_curve_;
PropertyRNA &rna_ParticleSettings_use_roughness_curve = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_roughness_curve_);

static PointerPropertyRNA rna_ParticleSettings_roughness_curve_;
PropertyRNA &rna_ParticleSettings_roughness_curve = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_roughness_curve_);

static FloatPropertyRNA rna_ParticleSettings_child_length_;
PropertyRNA &rna_ParticleSettings_child_length = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_length_);

static FloatPropertyRNA rna_ParticleSettings_child_length_threshold_;
PropertyRNA &rna_ParticleSettings_child_length_threshold = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_length_threshold_);

static FloatPropertyRNA rna_ParticleSettings_child_parting_factor_;
PropertyRNA &rna_ParticleSettings_child_parting_factor = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_parting_factor_);

static FloatPropertyRNA rna_ParticleSettings_child_parting_min_;
PropertyRNA &rna_ParticleSettings_child_parting_min = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_parting_min_);

static FloatPropertyRNA rna_ParticleSettings_child_parting_max_;
PropertyRNA &rna_ParticleSettings_child_parting_max = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_child_parting_max_);

static FloatPropertyRNA rna_ParticleSettings_branch_threshold_;
PropertyRNA &rna_ParticleSettings_branch_threshold = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_branch_threshold_);

static FloatPropertyRNA rna_ParticleSettings_line_length_tail_;
PropertyRNA &rna_ParticleSettings_line_length_tail = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_line_length_tail_);

static FloatPropertyRNA rna_ParticleSettings_line_length_head_;
PropertyRNA &rna_ParticleSettings_line_length_head = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_line_length_head_);

static FloatPropertyRNA rna_ParticleSettings_path_start_;
PropertyRNA &rna_ParticleSettings_path_start = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_path_start_);

static FloatPropertyRNA rna_ParticleSettings_path_end_;
PropertyRNA &rna_ParticleSettings_path_end = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_path_end_);

static IntPropertyRNA rna_ParticleSettings_trail_count_;
PropertyRNA &rna_ParticleSettings_trail_count = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_trail_count_);

static IntPropertyRNA rna_ParticleSettings_keyed_loops_;
PropertyRNA &rna_ParticleSettings_keyed_loops = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_keyed_loops_);

static BoolPropertyRNA rna_ParticleSettings_use_modifier_stack_;
PropertyRNA &rna_ParticleSettings_use_modifier_stack = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_modifier_stack_);

static PointerPropertyRNA rna_ParticleSettings_instance_collection_;
PropertyRNA &rna_ParticleSettings_instance_collection = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_instance_collection_);

static CollectionPropertyRNA rna_ParticleSettings_instance_weights_;
PropertyRNA &rna_ParticleSettings_instance_weights = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_instance_weights_);

static PointerPropertyRNA rna_ParticleSettings_active_instanceweight_;
PropertyRNA &rna_ParticleSettings_active_instanceweight = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_active_instanceweight_);

static IntPropertyRNA rna_ParticleSettings_active_instanceweight_index_;
PropertyRNA &rna_ParticleSettings_active_instanceweight_index = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_active_instanceweight_index_);

static PointerPropertyRNA rna_ParticleSettings_instance_object_;
PropertyRNA &rna_ParticleSettings_instance_object = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_instance_object_);

static PointerPropertyRNA rna_ParticleSettings_boids_;
PropertyRNA &rna_ParticleSettings_boids = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_boids_);

static PointerPropertyRNA rna_ParticleSettings_fluid_;
PropertyRNA &rna_ParticleSettings_fluid = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_fluid_);

static PointerPropertyRNA rna_ParticleSettings_effector_weights_;
PropertyRNA &rna_ParticleSettings_effector_weights = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_effector_weights_);

static PointerPropertyRNA rna_ParticleSettings_animation_data_;
PropertyRNA &rna_ParticleSettings_animation_data = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_animation_data_);

static PointerPropertyRNA rna_ParticleSettings_force_field_1_;
PropertyRNA &rna_ParticleSettings_force_field_1 = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_force_field_1_);

static PointerPropertyRNA rna_ParticleSettings_force_field_2_;
PropertyRNA &rna_ParticleSettings_force_field_2 = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_force_field_2_);

static FloatPropertyRNA rna_ParticleSettings_twist_;
PropertyRNA &rna_ParticleSettings_twist = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_twist_);

static BoolPropertyRNA rna_ParticleSettings_use_twist_curve_;
PropertyRNA &rna_ParticleSettings_use_twist_curve = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_twist_curve_);

static PointerPropertyRNA rna_ParticleSettings_twist_curve_;
PropertyRNA &rna_ParticleSettings_twist_curve = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_twist_curve_);

static BoolPropertyRNA rna_ParticleSettings_use_close_tip_;
PropertyRNA &rna_ParticleSettings_use_close_tip = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_use_close_tip_);

static FloatPropertyRNA rna_ParticleSettings_shape_;
PropertyRNA &rna_ParticleSettings_shape = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_shape_);

static FloatPropertyRNA rna_ParticleSettings_root_radius_;
PropertyRNA &rna_ParticleSettings_root_radius = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_root_radius_);

static FloatPropertyRNA rna_ParticleSettings_tip_radius_;
PropertyRNA &rna_ParticleSettings_tip_radius = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_tip_radius_);

static FloatPropertyRNA rna_ParticleSettings_radius_scale_;
PropertyRNA &rna_ParticleSettings_radius_scale = reinterpret_cast<PropertyRNA &>(rna_ParticleSettings_radius_scale_);

StructRNA *RNA_ParticleSettings;
void register_struct_ParticleSettings(BlenderRNA &brna)
{
	rna_ParticleSettings_texture_slots_ = {
		{&rna_ParticleSettings_active_texture, 	nullptr,
		-1, "texture_slots", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Textures",
		"Texture slots defining the mapping and influence of textures",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ParticleSettingsTextureSlots},
		ParticleSettings_texture_slots_begin, ParticleSettings_texture_slots_next, ParticleSettings_texture_slots_end, ParticleSettings_texture_slots_get, nullptr, ParticleSettings_texture_slots_lookup_int, nullptr, nullptr, RNA_ParticleSettingsTextureSlot
	};

	rna_ParticleSettings_active_texture_ = {
		{&rna_ParticleSettings_active_texture_index, 	&rna_ParticleSettings_texture_slots,
		-1, "active_texture", 8388801, 0, 0, 64, 0, PropertyPathTemplateType(0), "Active Texture",
		"Active texture slot being displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset_dependency, 119537664, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_active_texture_get, ParticleSettings_active_texture_set, nullptr, nullptr,RNA_Texture
	};

	rna_ParticleSettings_active_texture_index_ = {
		{&rna_ParticleSettings_is_fluid, 	&rna_ParticleSettings_active_texture,
		-1, "active_texture_index", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Active Texture Index",
		"Index of active texture slot",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119537664, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, texact), RawPropertyType(1), nullptr},
		ParticleSettings_active_texture_index_get, ParticleSettings_active_texture_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 17, 0, 17, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_is_fluid_ = {
		{&rna_ParticleSettings_use_react_start_end, 	&rna_ParticleSettings_active_texture_index,
		-1, "is_fluid", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fluid",
		"Particles were created by a fluid simulation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_is_fluid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_react_start_end_ = {
		{&rna_ParticleSettings_use_react_multiple, 	&rna_ParticleSettings_is_fluid,
		-1, "use_react_start_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start/End",
		"Give birth to unreacted particles eventually",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_react_start_end_get, ParticleSettings_use_react_start_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_react_multiple_ = {
		{&rna_ParticleSettings_use_regrow_hair, 	&rna_ParticleSettings_use_react_start_end,
		-1, "use_react_multiple", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Multi React",
		"React multiple times",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_react_multiple_get, ParticleSettings_use_react_multiple_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_regrow_hair_ = {
		{&rna_ParticleSettings_show_unborn, 	&rna_ParticleSettings_use_react_multiple,
		-1, "use_regrow_hair", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Regrow",
		"Regrow hair for each frame",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_regrow_hair_get, ParticleSettings_use_regrow_hair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_show_unborn_ = {
		{&rna_ParticleSettings_use_dead, 	&rna_ParticleSettings_use_regrow_hair,
		-1, "show_unborn", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Unborn",
		"Show particles before they are emitted",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_show_unborn_get, ParticleSettings_show_unborn_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_dead_ = {
		{&rna_ParticleSettings_use_emit_random, 	&rna_ParticleSettings_show_unborn,
		-1, "use_dead", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Died",
		"Show particles after they have died",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_dead_get, ParticleSettings_use_dead_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_emit_random_ = {
		{&rna_ParticleSettings_use_even_distribution, 	&rna_ParticleSettings_use_dead,
		-1, "use_emit_random", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Random",
		"Emit in random order of elements",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_emit_random_get, ParticleSettings_use_emit_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleSettings_use_even_distribution_ = {
		{&rna_ParticleSettings_use_die_on_collision, 	&rna_ParticleSettings_use_emit_random,
		-1, "use_even_distribution", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Even Distribution",
		"Use even distribution from faces based on face areas or edge lengths",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_even_distribution_get, ParticleSettings_use_even_distribution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleSettings_use_die_on_collision_ = {
		{&rna_ParticleSettings_use_size_deflect, 	&rna_ParticleSettings_use_even_distribution,
		-1, "use_die_on_collision", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Die on Hit",
		"Particles die when they collide with a deflector object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_die_on_collision_get, ParticleSettings_use_die_on_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_size_deflect_ = {
		{&rna_ParticleSettings_use_rotations, 	&rna_ParticleSettings_use_die_on_collision,
		-1, "use_size_deflect", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size Deflect",
		"Use particle\'s size in deflection",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_size_deflect_get, ParticleSettings_use_size_deflect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_rotations_ = {
		{&rna_ParticleSettings_use_dynamic_rotation, 	&rna_ParticleSettings_use_size_deflect,
		-1, "use_rotations", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Rotations",
		"Calculate particle rotations",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_rotations_get, ParticleSettings_use_rotations_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_dynamic_rotation_ = {
		{&rna_ParticleSettings_use_multiply_size_mass, 	&rna_ParticleSettings_use_rotations,
		-1, "use_dynamic_rotation", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dynamic",
		"Particle rotations are affected by collisions and effectors",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_dynamic_rotation_get, ParticleSettings_use_dynamic_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_multiply_size_mass_ = {
		{&rna_ParticleSettings_use_advanced_hair, 	&rna_ParticleSettings_use_dynamic_rotation,
		-1, "use_multiply_size_mass", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mass from Size",
		"Multiply mass by particle size",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_multiply_size_mass_get, ParticleSettings_use_multiply_size_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_advanced_hair_ = {
		{&rna_ParticleSettings_lock_boids_to_surface, 	&rna_ParticleSettings_use_multiply_size_mass,
		-1, "use_advanced_hair", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Advanced",
		"Use full physics calculations for growing hair",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_advanced_hair_get, ParticleSettings_use_advanced_hair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_lock_boids_to_surface_ = {
		{&rna_ParticleSettings_use_hair_bspline, 	&rna_ParticleSettings_use_advanced_hair,
		-1, "lock_boids_to_surface", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Boids 2D",
		"Constrain boids to a surface",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_lock_boids_to_surface_get, ParticleSettings_lock_boids_to_surface_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_hair_bspline_ = {
		{&rna_ParticleSettings_invert_grid, 	&rna_ParticleSettings_lock_boids_to_surface,
		-1, "use_hair_bspline", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "B-Spline",
		"Interpolate hair using B-Splines",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_hair_bspline_get, ParticleSettings_use_hair_bspline_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_invert_grid_ = {
		{&rna_ParticleSettings_hexagonal_grid, 	&rna_ParticleSettings_use_hair_bspline,
		-1, "invert_grid", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert Grid",
		"Invert what is considered object and what is not",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_invert_grid_get, ParticleSettings_invert_grid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_hexagonal_grid_ = {
		{&rna_ParticleSettings_apply_effector_to_children, 	&rna_ParticleSettings_invert_grid,
		-1, "hexagonal_grid", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hexagonal Grid",
		"Create the grid in a hexagonal pattern",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_hexagonal_grid_get, ParticleSettings_hexagonal_grid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_apply_effector_to_children_ = {
		{&rna_ParticleSettings_create_long_hair_children, 	&rna_ParticleSettings_hexagonal_grid,
		-1, "apply_effector_to_children", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Affect Children",
		"Apply effectors to children",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_apply_effector_to_children_get, ParticleSettings_apply_effector_to_children_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_create_long_hair_children_ = {
		{&rna_ParticleSettings_apply_guide_to_children, 	&rna_ParticleSettings_apply_effector_to_children,
		-1, "create_long_hair_children", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Long Hair",
		"Calculate children that suit long hair well",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_create_long_hair_children_get, ParticleSettings_create_long_hair_children_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_apply_guide_to_children_ = {
		{&rna_ParticleSettings_use_self_effect, 	&rna_ParticleSettings_create_long_hair_children,
		-1, "apply_guide_to_children", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "apply_guide_to_children",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_apply_guide_to_children_get, ParticleSettings_apply_guide_to_children_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_self_effect_ = {
		{&rna_ParticleSettings_type, 	&rna_ParticleSettings_apply_guide_to_children,
		-1, "use_self_effect", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Self Effect",
		"Particle effectors affect themselves",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_self_effect_get, ParticleSettings_use_self_effect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_ParticleSettings_type_items[3] = {
		{0, "EMITTER", 0, "Emitter", ""	},
		{2, "HAIR", 0, "Hair", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_type_ = {
		{&rna_ParticleSettings_emit_from, 	&rna_ParticleSettings_use_self_effect,
		-1, "type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Particle type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_change_type, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, type), RawPropertyType(1), nullptr},
		ParticleSettings_type_get, ParticleSettings_type_set, rna_Particle_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_type_items, 2, 0
	};

	static const EnumPropertyItem rna_ParticleSettings_emit_from_items[4] = {
		{0, "VERT", 0, "Vertices", ""	},
		{1, "FACE", 0, "Faces", ""	},
		{2, "VOLUME", 0, "Volume", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_emit_from_ = {
		{&rna_ParticleSettings_distribution, 	&rna_ParticleSettings_type,
		-1, "emit_from", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Emit From",
		"Where to emit particles from",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, from), RawPropertyType(1), nullptr},
		ParticleSettings_emit_from_get, ParticleSettings_emit_from_set, rna_Particle_from_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_emit_from_items, 3, 1
	};

	static const EnumPropertyItem rna_ParticleSettings_distribution_items[4] = {
		{0, "JIT", 0, "Jittered", ""	},
		{1, "RAND", 0, "Random", ""	},
		{2, "GRID", 0, "Grid", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_distribution_ = {
		{&rna_ParticleSettings_physics_type, 	&rna_ParticleSettings_emit_from,
		-1, "distribution", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distribution",
		"How to distribute particles on selected element",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, distr), RawPropertyType(1), nullptr},
		ParticleSettings_distribution_get, ParticleSettings_distribution_set, rna_Particle_dist_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_distribution_items, 3, 0
	};

	static const EnumPropertyItem rna_ParticleSettings_physics_type_items[6] = {
		{0, "NO", 0, "None", ""	},
		{1, "NEWTON", 0, "Newtonian", ""	},
		{2, "KEYED", 0, "Keyed", ""	},
		{3, "BOIDS", 0, "Boids", ""	},
		{4, "FLUID", 0, "Fluid", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_physics_type_ = {
		{&rna_ParticleSettings_rotation_mode, 	&rna_ParticleSettings_distribution,
		-1, "physics_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Physics Type",
		"Particle physics type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_change_physics_type, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, phystype), RawPropertyType(1), nullptr},
		ParticleSettings_physics_type_get, ParticleSettings_physics_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_physics_type_items, 5, 1
	};

	static const EnumPropertyItem rna_ParticleSettings_rotation_mode_items[11] = {
		{0, "NONE", 0, "None", ""	},
		{1, "NOR", 0, "Normal", ""	},
		{9, "NOR_TAN", 0, "Normal-Tangent", ""	},
		{2, "VEL", 0, "Velocity / Hair", ""	},
		{3, "GLOB_X", 0, "Global X", ""	},
		{4, "GLOB_Y", 0, "Global Y", ""	},
		{5, "GLOB_Z", 0, "Global Z", ""	},
		{6, "OB_X", 0, "Object X", ""	},
		{7, "OB_Y", 0, "Object Y", ""	},
		{8, "OB_Z", 0, "Object Z", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_rotation_mode_ = {
		{&rna_ParticleSettings_angular_velocity_mode, 	&rna_ParticleSettings_physics_type,
		-1, "rotation_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Orientation Axis",
		"Particle orientation axis (does not affect Explode modifier\'s results)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rotmode), RawPropertyType(1), nullptr},
		ParticleSettings_rotation_mode_get, ParticleSettings_rotation_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_rotation_mode_items, 10, 2
	};

	static const EnumPropertyItem rna_ParticleSettings_angular_velocity_mode_items[9] = {
		{0, "NONE", 0, "None", ""	},
		{1, "VELOCITY", 0, "Velocity", ""	},
		{3, "HORIZONTAL", 0, "Horizontal", ""	},
		{4, "VERTICAL", 0, "Vertical", ""	},
		{5, "GLOBAL_X", 0, "Global X", ""	},
		{6, "GLOBAL_Y", 0, "Global Y", ""	},
		{7, "GLOBAL_Z", 0, "Global Z", ""	},
		{2, "RAND", 0, "Random", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_angular_velocity_mode_ = {
		{&rna_ParticleSettings_react_event, 	&rna_ParticleSettings_rotation_mode,
		-1, "angular_velocity_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angular Velocity Axis",
		"What axis is used to change particle rotation with time",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, avemode), RawPropertyType(1), nullptr},
		ParticleSettings_angular_velocity_mode_get, ParticleSettings_angular_velocity_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_angular_velocity_mode_items, 8, 1
	};

	static const EnumPropertyItem rna_ParticleSettings_react_event_items[4] = {
		{0, "DEATH", 0, "Death", ""	},
		{1, "COLLIDE", 0, "Collision", ""	},
		{2, "NEAR", 0, "Proximity", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_react_event_ = {
		{&rna_ParticleSettings_show_guide_hairs, 	&rna_ParticleSettings_angular_velocity_mode,
		-1, "react_event", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "React On",
		"The event of target particles to react on",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, reactevent), RawPropertyType(1), nullptr},
		ParticleSettings_react_event_get, ParticleSettings_react_event_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_react_event_items, 3, 0
	};

	rna_ParticleSettings_show_guide_hairs_ = {
		{&rna_ParticleSettings_show_hair_grid, 	&rna_ParticleSettings_react_event,
		-1, "show_guide_hairs", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Guide Hairs",
		"Show guide hairs",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_show_guide_hairs_get, ParticleSettings_show_guide_hairs_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_show_hair_grid_ = {
		{&rna_ParticleSettings_show_velocity, 	&rna_ParticleSettings_show_guide_hairs,
		-1, "show_hair_grid", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Guide Hairs",
		"Show hair simulation grid",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_show_hair_grid_get, ParticleSettings_show_hair_grid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_show_velocity_ = {
		{&rna_ParticleSettings_show_size, 	&rna_ParticleSettings_show_hair_grid,
		-1, "show_velocity", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Velocity",
		"Show particle velocity",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_show_velocity_get, ParticleSettings_show_velocity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_show_size_ = {
		{&rna_ParticleSettings_show_health, 	&rna_ParticleSettings_show_velocity,
		-1, "show_size", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Size",
		"Show particle size",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_show_size_get, ParticleSettings_show_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_show_health_ = {
		{&rna_ParticleSettings_use_absolute_path_time, 	&rna_ParticleSettings_show_size,
		-1, "show_health", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Health",
		"Display boid health",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_show_health_get, ParticleSettings_show_health_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_absolute_path_time_ = {
		{&rna_ParticleSettings_use_parent_particles, 	&rna_ParticleSettings_show_health,
		-1, "use_absolute_path_time", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Absolute Path Time",
		"Path timing is in absolute frames",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_abspathtime_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_absolute_path_time_get, ParticleSettings_use_absolute_path_time_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_parent_particles_ = {
		{&rna_ParticleSettings_show_number, 	&rna_ParticleSettings_use_absolute_path_time,
		-1, "use_parent_particles", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parents",
		"Render parent particles",
		0, "ParticleSettings",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_parent_particles_get, ParticleSettings_use_parent_particles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_show_number_ = {
		{&rna_ParticleSettings_use_collection_pick_random, 	&rna_ParticleSettings_use_parent_particles,
		-1, "show_number", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Number",
		"Show particle number",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_show_number_get, ParticleSettings_show_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_collection_pick_random_ = {
		{&rna_ParticleSettings_use_collection_count, 	&rna_ParticleSettings_show_number,
		-1, "use_collection_pick_random", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pick Random",
		"Pick objects from collection randomly",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_collection_pick_random_get, ParticleSettings_use_collection_pick_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_collection_count_ = {
		{&rna_ParticleSettings_use_global_instance, 	&rna_ParticleSettings_use_collection_pick_random,
		-1, "use_collection_count", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Count",
		"Use object multiple times in the same collection",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_count, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_collection_count_get, ParticleSettings_use_collection_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_global_instance_ = {
		{&rna_ParticleSettings_use_rotation_instance, 	&rna_ParticleSettings_use_collection_count,
		-1, "use_global_instance", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Global",
		"Use object\'s global coordinates for duplication",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_global_instance_get, ParticleSettings_use_global_instance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_rotation_instance_ = {
		{&rna_ParticleSettings_use_scale_instance, 	&rna_ParticleSettings_use_global_instance,
		-1, "use_rotation_instance", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Rotation",
		"Use object\'s rotation for duplication (global x-axis is aligned particle rotation axis)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_rotation_instance_get, ParticleSettings_use_rotation_instance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_scale_instance_ = {
		{&rna_ParticleSettings_use_render_adaptive, 	&rna_ParticleSettings_use_rotation_instance,
		-1, "use_scale_instance", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale",
		"Use object\'s scale for duplication",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_scale_instance_get, ParticleSettings_use_scale_instance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleSettings_use_render_adaptive_ = {
		{&rna_ParticleSettings_use_velocity_length, 	&rna_ParticleSettings_use_scale_instance,
		-1, "use_render_adaptive", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Adaptive Render",
		"Display steps of the particle path",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_render_adaptive_get, ParticleSettings_use_render_adaptive_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_velocity_length_ = {
		{&rna_ParticleSettings_use_whole_collection, 	&rna_ParticleSettings_use_render_adaptive,
		-1, "use_velocity_length", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Speed",
		"Multiply line length by particle speed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_velocity_length_get, ParticleSettings_use_velocity_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_whole_collection_ = {
		{&rna_ParticleSettings_use_strand_primitive, 	&rna_ParticleSettings_use_velocity_length,
		-1, "use_whole_collection", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Whole Collection",
		"Use whole collection at once",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_whole_collection_get, ParticleSettings_use_whole_collection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_use_strand_primitive_ = {
		{&rna_ParticleSettings_display_method, 	&rna_ParticleSettings_use_whole_collection,
		-1, "use_strand_primitive", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strand Render",
		"Use the strand primitive for rendering",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_strand_primitive_get, ParticleSettings_use_strand_primitive_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_ParticleSettings_display_method_items[7] = {
		{0, "NONE", 0, "None", ""	},
		{10, "RENDER", 0, "Rendered", ""	},
		{1, "DOT", 0, "Point", ""	},
		{2, "CIRC", 0, "Circle", ""	},
		{3, "CROSS", 0, "Cross", ""	},
		{4, "AXIS", 0, "Axis", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_display_method_ = {
		{&rna_ParticleSettings_render_type, 	&rna_ParticleSettings_use_strand_primitive,
		-1, "display_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Particle Display",
		"How particles are displayed in viewport",
		0, "ParticleSettings",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, draw_as), RawPropertyType(1), nullptr},
		ParticleSettings_display_method_get, ParticleSettings_display_method_set, rna_Particle_draw_as_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_display_method_items, 6, 10
	};

	static const EnumPropertyItem rna_ParticleSettings_render_type_items[7] = {
		{0, "NONE", 0, "None", ""	},
		{1, "HALO", 0, "Halo", ""	},
		{5, "LINE", 0, "Line", ""	},
		{6, "PATH", 0, "Path", ""	},
		{7, "OBJECT", 0, "Object", ""	},
		{8, "COLLECTION", 0, "Collection", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_render_type_ = {
		{&rna_ParticleSettings_display_color, 	&rna_ParticleSettings_display_method,
		-1, "render_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Particle Rendering",
		"How particles are rendered",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, ren_as), RawPropertyType(1), nullptr},
		ParticleSettings_render_type_get, ParticleSettings_render_type_set, rna_Particle_ren_as_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_render_type_items, 6, 1
	};

	static const EnumPropertyItem rna_ParticleSettings_display_color_items[5] = {
		{0, "NONE", 0, "None", ""	},
		{1, "MATERIAL", 0, "Material", ""	},
		{2, "VELOCITY", 0, "Velocity", ""	},
		{3, "ACCELERATION", 0, "Acceleration", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_display_color_ = {
		{&rna_ParticleSettings_display_size, 	&rna_ParticleSettings_render_type,
		-1, "display_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display Color",
		"Display additional particle data as a color",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, draw_col), RawPropertyType(1), nullptr},
		ParticleSettings_display_color_get, ParticleSettings_display_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_display_color_items, 4, 1
	};

	rna_ParticleSettings_display_size_ = {
		{&rna_ParticleSettings_child_type, 	&rna_ParticleSettings_display_color,
		-1, "display_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display Size",
		"Size of particles on viewport",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, draw_size), RawPropertyType(5), nullptr},
		ParticleSettings_display_size_get, ParticleSettings_display_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 1000.0f, 1.0f, -1, nullptr, nullptr, 0.1000000015f, nullptr
	};

	static const EnumPropertyItem rna_ParticleSettings_child_type_items[4] = {
		{0, "NONE", 0, "None", ""	},
		{1, "SIMPLE", 0, "Simple", ""	},
		{2, "INTERPOLATED", 0, "Interpolated", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_child_type_ = {
		{&rna_ParticleSettings_display_step, 	&rna_ParticleSettings_display_size,
		-1, "child_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Children From",
		"Create child particles",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, childtype), RawPropertyType(1), nullptr},
		ParticleSettings_child_type_get, ParticleSettings_child_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_child_type_items, 3, 0
	};

	rna_ParticleSettings_display_step_ = {
		{&rna_ParticleSettings_render_step, 	&rna_ParticleSettings_child_type,
		-1, "display_step", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Steps",
		"How many steps paths are displayed with (power of 2)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, draw_step), RawPropertyType(1), nullptr},
		ParticleSettings_display_step_get, ParticleSettings_display_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 7, 0, 10, 1, nullptr, nullptr, 2, nullptr
	};

	rna_ParticleSettings_render_step_ = {
		{&rna_ParticleSettings_hair_step, 	&rna_ParticleSettings_display_step,
		-1, "render_step", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Render",
		"How many steps paths are rendered with (power of 2)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, ren_step), RawPropertyType(1), nullptr},
		ParticleSettings_render_step_get, ParticleSettings_render_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 9, 0, 20, 1, nullptr, nullptr, 3, nullptr
	};

	rna_ParticleSettings_hair_step_ = {
		{&rna_ParticleSettings_bending_random, 	&rna_ParticleSettings_render_step,
		-1, "hair_step", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Segments",
		"Number of hair segments",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, hair_step), RawPropertyType(1), nullptr},
		ParticleSettings_hair_step_get, ParticleSettings_hair_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 2, 50, 2, 32767, 1, nullptr, nullptr, 5, nullptr
	};

	rna_ParticleSettings_bending_random_ = {
		{&rna_ParticleSettings_keys_step, 	&rna_ParticleSettings_hair_step,
		-1, "bending_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random Bending Stiffness",
		"Random stiffness of hairs",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_cloth_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, bending_random), RawPropertyType(5), nullptr},
		ParticleSettings_bending_random_get, ParticleSettings_bending_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_keys_step_ = {
		{&rna_ParticleSettings_adaptive_angle, 	&rna_ParticleSettings_bending_random,
		-1, "keys_step", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Keys Step",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, keys_step), RawPropertyType(1), nullptr},
		ParticleSettings_keys_step_get, ParticleSettings_keys_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 5, nullptr
	};

	rna_ParticleSettings_adaptive_angle_ = {
		{&rna_ParticleSettings_adaptive_pixel, 	&rna_ParticleSettings_keys_step,
		-1, "adaptive_angle", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Degrees",
		"How many degrees path has to curve to make another render segment",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, adapt_angle), RawPropertyType(1), nullptr},
		ParticleSettings_adaptive_angle_get, ParticleSettings_adaptive_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 45, 0, 45, 1, nullptr, nullptr, 5, nullptr
	};

	rna_ParticleSettings_adaptive_pixel_ = {
		{&rna_ParticleSettings_display_percentage, 	&rna_ParticleSettings_adaptive_angle,
		-1, "adaptive_pixel", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pixel",
		"How many pixels path has to cover to make another render segment",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, adapt_pix), RawPropertyType(1), nullptr},
		ParticleSettings_adaptive_pixel_get, ParticleSettings_adaptive_pixel_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 50, 0, 50, 1, nullptr, nullptr, 3, nullptr
	};

	rna_ParticleSettings_display_percentage_ = {
		{&rna_ParticleSettings_material, 	&rna_ParticleSettings_adaptive_pixel,
		-1, "display_percentage", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Display",
		"Percentage of particles to display in 3D view",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, disp), RawPropertyType(1), nullptr},
		ParticleSettings_display_percentage_get, ParticleSettings_display_percentage_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 100, nullptr
	};

	rna_ParticleSettings_material_ = {
		{&rna_ParticleSettings_material_slot, 	&rna_ParticleSettings_display_percentage,
		-1, "material", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Material Index",
		"Index of material slot used for rendering particles",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, omat), RawPropertyType(1), nullptr},
		ParticleSettings_material_get, ParticleSettings_material_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 32767, 1, 32767, 1, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleSettings_material_slot_ = {
		{&rna_ParticleSettings_integrator, 	&rna_ParticleSettings_material,
		-1, "material_slot", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Material Slot",
		"Material slot used for rendering particles",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, omat), RawPropertyType(1), nullptr},
		ParticleSettings_material_slot_get, ParticleSettings_material_slot_set, rna_Particle_Material_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};

	static const EnumPropertyItem rna_ParticleSettings_integrator_items[5] = {
		{0, "EULER", 0, "Euler", ""	},
		{3, "VERLET", 0, "Verlet", ""	},
		{1, "MIDPOINT", 0, "Midpoint", ""	},
		{2, "RK4", 0, "RK4", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_integrator_ = {
		{&rna_ParticleSettings_kink, 	&rna_ParticleSettings_material_slot,
		-1, "integrator", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Integration",
		"Algorithm used to calculate physics, from the fastest to the most stable and accurate: Midpoint, Euler, Verlet, RK4",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, integrator), RawPropertyType(1), nullptr},
		ParticleSettings_integrator_get, ParticleSettings_integrator_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_integrator_items, 4, 1
	};

	static const EnumPropertyItem rna_ParticleSettings_kink_items[7] = {
		{0, "NO", 0, "Nothing", ""	},
		{1, "CURL", 0, "Curl", ""	},
		{2, "RADIAL", 0, "Radial", ""	},
		{3, "WAVE", 0, "Wave", ""	},
		{4, "BRAID", 0, "Braid", ""	},
		{5, "SPIRAL", 0, "Spiral", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_ParticleSettings_kink_ = {
		{&rna_ParticleSettings_kink_axis, 	&rna_ParticleSettings_integrator,
		-1, "kink", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Kink",
		"Type of periodic offset on the path",
		0, "ParticleSettings",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink), RawPropertyType(1), nullptr},
		ParticleSettings_kink_get, ParticleSettings_kink_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_ParticleSettings_kink_items, 6, 0
	};

	rna_ParticleSettings_kink_axis_ = {
		{&rna_ParticleSettings_color_maximum, 	&rna_ParticleSettings_kink,
		-1, "kink_axis", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Axis",
		"Which axis to use for offset",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_axis), RawPropertyType(1), nullptr},
		ParticleSettings_kink_axis_get, ParticleSettings_kink_axis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_axis_xyz_items, 3, 2
	};

	rna_ParticleSettings_color_maximum_ = {
		{&rna_ParticleSettings_frame_start, 	&rna_ParticleSettings_kink_axis,
		-1, "color_maximum", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color Maximum",
		"Maximum length of the particle color vector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, color_vec_max), RawPropertyType(5), nullptr},
		ParticleSettings_color_maximum_get, ParticleSettings_color_maximum_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_frame_start_ = {
		{&rna_ParticleSettings_frame_end, 	&rna_ParticleSettings_color_maximum,
		-1, "frame_start", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Start",
		"Frame number to start emitting particles",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_frame_start_get, ParticleSettings_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_frame_end_ = {
		{&rna_ParticleSettings_lifetime, 	&rna_ParticleSettings_frame_start,
		-1, "frame_end", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "End",
		"Frame number to stop emitting particles",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_frame_end_get, ParticleSettings_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1048574.0f, 1048574.0f, -1048574.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 200.0f, nullptr
	};

	rna_ParticleSettings_lifetime_ = {
		{&rna_ParticleSettings_lifetime_random, 	&rna_ParticleSettings_frame_end,
		-1, "lifetime", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Lifetime",
		"Life span of the particles",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, lifetime), RawPropertyType(5), nullptr},
		ParticleSettings_lifetime_get, ParticleSettings_lifetime_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 1048574.0f, 1.0f, 1048574.0f, 10.0f, 3, nullptr, nullptr, 50.0f, nullptr
	};

	rna_ParticleSettings_lifetime_random_ = {
		{&rna_ParticleSettings_time_tweak, 	&rna_ParticleSettings_lifetime,
		-1, "lifetime_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random",
		"Give the particle life a random variation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, randlife), RawPropertyType(5), nullptr},
		ParticleSettings_lifetime_random_get, ParticleSettings_lifetime_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_time_tweak_ = {
		{&rna_ParticleSettings_timestep, 	&rna_ParticleSettings_lifetime_random,
		-1, "time_tweak", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tweak",
		"A multiplier for physics timestep (1.0 means one frame = 1/25 seconds)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, timetweak), RawPropertyType(5), nullptr},
		ParticleSettings_time_tweak_get, ParticleSettings_time_tweak_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_timestep_ = {
		{&rna_ParticleSettings_use_adaptive_subframes, 	&rna_ParticleSettings_time_tweak,
		-1, "timestep", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Timestep",
		"The simulation timestep per frame (seconds per frame)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_timestep_get, ParticleSettings_timestep_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0001000000f, 100.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_use_adaptive_subframes_ = {
		{&rna_ParticleSettings_subframes, 	&rna_ParticleSettings_timestep,
		-1, "use_adaptive_subframes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Automatic Subframes",
		"Automatically set the number of subframes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_adaptive_subframes_get, ParticleSettings_use_adaptive_subframes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_subframes_ = {
		{&rna_ParticleSettings_courant_target, 	&rna_ParticleSettings_use_adaptive_subframes,
		-1, "subframes", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Subframes",
		"Subframes to simulate for improved stability and finer granularity simulations (dt = timestep / (subframes + 1))",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, subframes), RawPropertyType(1), nullptr},
		ParticleSettings_subframes_get, ParticleSettings_subframes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1000, 0, 1000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_courant_target_ = {
		{&rna_ParticleSettings_jitter_factor, 	&rna_ParticleSettings_subframes,
		-1, "courant_target", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Adaptive Subframe Threshold",
		"The relative distance a particle can move before requiring more subframes (target Courant number); 0.01 to 0.3 is the recommended range",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, courant_target), RawPropertyType(5), nullptr},
		ParticleSettings_courant_target_get, ParticleSettings_courant_target_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, 10.0f, 0.0001000000f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.2000000030f, nullptr
	};

	rna_ParticleSettings_jitter_factor_ = {
		{&rna_ParticleSettings_effect_hair, 	&rna_ParticleSettings_courant_target,
		-1, "jitter_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Amount",
		"Amount of jitter applied to the sampling",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, jitfac), RawPropertyType(5), nullptr},
		ParticleSettings_jitter_factor_get, ParticleSettings_jitter_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_effect_hair_ = {
		{&rna_ParticleSettings_count, 	&rna_ParticleSettings_jitter_factor,
		-1, "effect_hair", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stiffness",
		"Hair stiffness for effectors",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, eff_hair), RawPropertyType(5), nullptr},
		ParticleSettings_effect_hair_get, ParticleSettings_effect_hair_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_count_ = {
		{&rna_ParticleSettings_userjit, 	&rna_ParticleSettings_effect_hair,
		-1, "count", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Number",
		"Total number of particles",
		0, "Amount",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, totpart), RawPropertyType(0), nullptr},
		ParticleSettings_count_get, ParticleSettings_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1000000, 0, INT_MAX, 1, nullptr, nullptr, 1000, nullptr
	};

	rna_ParticleSettings_userjit_ = {
		{&rna_ParticleSettings_grid_resolution, 	&rna_ParticleSettings_count,
		-1, "userjit", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Particles/Face",
		"Emission locations per face (0 = automatic)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, userjit), RawPropertyType(0), nullptr},
		ParticleSettings_userjit_get, ParticleSettings_userjit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1000, 0, 1000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_grid_resolution_ = {
		{&rna_ParticleSettings_grid_random, 	&rna_ParticleSettings_userjit,
		-1, "grid_resolution", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Resolution",
		"The resolution of the particle grid",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, grid_res), RawPropertyType(0), nullptr},
		ParticleSettings_grid_resolution_get, ParticleSettings_grid_resolution_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 50, 1, 250, 1, nullptr, nullptr, 10, nullptr
	};

	rna_ParticleSettings_grid_random_ = {
		{&rna_ParticleSettings_effector_amount, 	&rna_ParticleSettings_grid_resolution,
		-1, "grid_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Grid Randomness",
		"Add random offset to the grid locations",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, grid_rand), RawPropertyType(5), nullptr},
		ParticleSettings_grid_random_get, ParticleSettings_grid_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_effector_amount_ = {
		{&rna_ParticleSettings_normal_factor, 	&rna_ParticleSettings_grid_random,
		-1, "effector_amount", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Effector Number",
		"How many particles are effectors (0 is all particles)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, effector_amount), RawPropertyType(0), nullptr},
		ParticleSettings_effector_amount_get, ParticleSettings_effector_amount_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 10000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_normal_factor_ = {
		{&rna_ParticleSettings_object_factor, 	&rna_ParticleSettings_effector_amount,
		-1, "normal_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Normal",
		"Let the surface normal give the particle a starting velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, normfac), RawPropertyType(5), nullptr},
		ParticleSettings_normal_factor_get, ParticleSettings_normal_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, -1000.0f, 1000.0f, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_object_factor_ = {
		{&rna_ParticleSettings_factor_random, 	&rna_ParticleSettings_normal_factor,
		-1, "object_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Object Velocity",
		"Let the object give the particle a starting velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, obfac), RawPropertyType(5), nullptr},
		ParticleSettings_object_factor_get, ParticleSettings_object_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_factor_random_ = {
		{&rna_ParticleSettings_particle_factor, 	&rna_ParticleSettings_object_factor,
		-1, "factor_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random",
		"Give the starting velocity a random variation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, randfac), RawPropertyType(5), nullptr},
		ParticleSettings_factor_random_get, ParticleSettings_factor_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 200.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_particle_factor_ = {
		{&rna_ParticleSettings_tangent_factor, 	&rna_ParticleSettings_factor_random,
		-1, "particle_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Particle",
		"Let the target particle give the particle a starting velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, partfac), RawPropertyType(5), nullptr},
		ParticleSettings_particle_factor_get, ParticleSettings_particle_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_tangent_factor_ = {
		{&rna_ParticleSettings_tangent_phase, 	&rna_ParticleSettings_particle_factor,
		-1, "tangent_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tangent",
		"Let the surface tangent give the particle a starting velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, tanfac), RawPropertyType(5), nullptr},
		ParticleSettings_tangent_factor_get, ParticleSettings_tangent_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -1000.0f, 1000.0f, 1.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_tangent_phase_ = {
		{&rna_ParticleSettings_reactor_factor, 	&rna_ParticleSettings_tangent_factor,
		-1, "tangent_phase", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Rotate the surface tangent",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, tanphase), RawPropertyType(5), nullptr},
		ParticleSettings_tangent_phase_get, ParticleSettings_tangent_phase_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_reactor_factor_ = {
		{&rna_ParticleSettings_object_align_factor, 	&rna_ParticleSettings_tangent_phase,
		-1, "reactor_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Reactor",
		"Let the vector away from the target particle\'s location give the particle a starting velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, reactfac), RawPropertyType(5), nullptr},
		ParticleSettings_reactor_factor_get, ParticleSettings_reactor_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_ParticleSettings_object_align_factor_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_ParticleSettings_object_align_factor_ = {
		{&rna_ParticleSettings_angular_velocity_factor, 	&rna_ParticleSettings_reactor_factor,
		-1, "object_align_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Object Aligned",
		"Let the emitter object orientation give the particle a starting velocity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_VELOCITY) | int(PROP_UNIT_VELOCITY)), nullptr, 1, {3, 0, 0}, 3,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, ob_vel), RawPropertyType(5), nullptr},
		nullptr, nullptr, ParticleSettings_object_align_factor_get, ParticleSettings_object_align_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -200.0f, 200.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_ParticleSettings_object_align_factor_default
	};

	rna_ParticleSettings_angular_velocity_factor_ = {
		{&rna_ParticleSettings_phase_factor, 	&rna_ParticleSettings_object_align_factor,
		-1, "angular_velocity_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angular Velocity",
		"Angular velocity amount (in radians per second)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, avefac), RawPropertyType(5), nullptr},
		ParticleSettings_angular_velocity_factor_get, ParticleSettings_angular_velocity_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -100.0f, 100.0f, -200.0f, 200.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_phase_factor_ = {
		{&rna_ParticleSettings_rotation_factor_random, 	&rna_ParticleSettings_angular_velocity_factor,
		-1, "phase_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Phase",
		"Rotation around the chosen orientation axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, phasefac), RawPropertyType(5), nullptr},
		ParticleSettings_phase_factor_get, ParticleSettings_phase_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_rotation_factor_random_ = {
		{&rna_ParticleSettings_phase_factor_random, 	&rna_ParticleSettings_phase_factor,
		-1, "rotation_factor_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random Orientation",
		"Randomize particle orientation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, randrotfac), RawPropertyType(5), nullptr},
		ParticleSettings_rotation_factor_random_get, ParticleSettings_rotation_factor_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_phase_factor_random_ = {
		{&rna_ParticleSettings_hair_length, 	&rna_ParticleSettings_rotation_factor_random,
		-1, "phase_factor_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random Phase",
		"Randomize rotation around the chosen orientation axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, randphasefac), RawPropertyType(5), nullptr},
		ParticleSettings_phase_factor_random_get, ParticleSettings_phase_factor_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_hair_length_ = {
		{&rna_ParticleSettings_mass, 	&rna_ParticleSettings_phase_factor_random,
		-1, "hair_length", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hair Length",
		"Length of the hair",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_hair_length_get, ParticleSettings_hair_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 1000.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_mass_ = {
		{&rna_ParticleSettings_particle_size, 	&rna_ParticleSettings_hair_length,
		-1, "mass", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mass",
		"Mass of the particles",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MASS) | int(PROP_UNIT_MASS)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, mass), RawPropertyType(5), nullptr},
		ParticleSettings_mass_get, ParticleSettings_mass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0000000100f, 100000.0f, 1.0f, 4, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_particle_size_ = {
		{&rna_ParticleSettings_size_random, 	&rna_ParticleSettings_mass,
		-1, "particle_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"The size of the particles",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, size), RawPropertyType(5), nullptr},
		ParticleSettings_particle_size_get, ParticleSettings_particle_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0010000000f, 100000.0f, 1.0f, 3, nullptr, nullptr, 0.0500000007f, nullptr
	};

	rna_ParticleSettings_size_random_ = {
		{&rna_ParticleSettings_collision_collection, 	&rna_ParticleSettings_particle_size,
		-1, "size_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random Size",
		"Give the particle size a random variation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, randsize), RawPropertyType(5), nullptr},
		ParticleSettings_size_random_get, ParticleSettings_size_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_collision_collection_ = {
		{&rna_ParticleSettings_drag_factor, 	&rna_ParticleSettings_size_random,
		-1, "collision_collection", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Collision Collection",
		"Limit colliders to this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset_dependency, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_collision_collection_get, ParticleSettings_collision_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_ParticleSettings_drag_factor_ = {
		{&rna_ParticleSettings_brownian_factor, 	&rna_ParticleSettings_collision_collection,
		-1, "drag_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Drag",
		"Amount of air drag",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, dragfac), RawPropertyType(5), nullptr},
		ParticleSettings_drag_factor_get, ParticleSettings_drag_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_brownian_factor_ = {
		{&rna_ParticleSettings_damping, 	&rna_ParticleSettings_drag_factor,
		-1, "brownian_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Brownian",
		"Amount of random, erratic particle movement",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, brownfac), RawPropertyType(5), nullptr},
		ParticleSettings_brownian_factor_get, ParticleSettings_brownian_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 20.0f, 0.0f, 200.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_damping_ = {
		{&rna_ParticleSettings_length_random, 	&rna_ParticleSettings_brownian_factor,
		-1, "damping", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Damp",
		"Amount of damping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, dampfac), RawPropertyType(5), nullptr},
		ParticleSettings_damping_get, ParticleSettings_damping_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_length_random_ = {
		{&rna_ParticleSettings_child_percent, 	&rna_ParticleSettings_damping,
		-1, "length_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random Length",
		"Give path length a random variation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, randlength), RawPropertyType(5), nullptr},
		ParticleSettings_length_random_get, ParticleSettings_length_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_child_percent_ = {
		{&rna_ParticleSettings_rendered_child_count, 	&rna_ParticleSettings_length_random,
		-1, "child_percent", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Children Per Parent",
		"Number of children per parent",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, child_percent), RawPropertyType(0), nullptr},
		ParticleSettings_child_percent_get, ParticleSettings_child_percent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 1000, 0, 100000, 1, nullptr, nullptr, 10, nullptr
	};

	rna_ParticleSettings_rendered_child_count_ = {
		{&rna_ParticleSettings_virtual_parents, 	&rna_ParticleSettings_child_percent,
		-1, "rendered_child_count", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rendered Children",
		"Number of children per parent for rendering",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, child_render_percent), RawPropertyType(0), nullptr},
		ParticleSettings_rendered_child_count_get, ParticleSettings_rendered_child_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, 100000, 1, nullptr, nullptr, 100, nullptr
	};

	rna_ParticleSettings_virtual_parents_ = {
		{&rna_ParticleSettings_child_size, 	&rna_ParticleSettings_rendered_child_count,
		-1, "virtual_parents", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Virtual Parents",
		"Relative amount of virtual parents",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, parents), RawPropertyType(5), nullptr},
		ParticleSettings_virtual_parents_get, ParticleSettings_virtual_parents_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_child_size_ = {
		{&rna_ParticleSettings_child_size_random, 	&rna_ParticleSettings_virtual_parents,
		-1, "child_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Child Size",
		"A multiplier for the child particle size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, childsize), RawPropertyType(5), nullptr},
		ParticleSettings_child_size_get, ParticleSettings_child_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, 0.0010000000f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_child_size_random_ = {
		{&rna_ParticleSettings_child_radius, 	&rna_ParticleSettings_child_size,
		-1, "child_size_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Random Child Size",
		"Random variation to the size of the child particles",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, childrandsize), RawPropertyType(5), nullptr},
		ParticleSettings_child_size_random_get, ParticleSettings_child_size_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_child_radius_ = {
		{&rna_ParticleSettings_child_roundness, 	&rna_ParticleSettings_child_size_random,
		-1, "child_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Child Radius",
		"Radius of children around parent",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, childrad), RawPropertyType(5), nullptr},
		ParticleSettings_child_radius_get, ParticleSettings_child_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 0.2000000030f, nullptr
	};

	rna_ParticleSettings_child_roundness_ = {
		{&rna_ParticleSettings_clump_factor, 	&rna_ParticleSettings_child_radius,
		-1, "child_roundness", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Child Roundness",
		"Roundness of children around parent",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, childflat), RawPropertyType(5), nullptr},
		ParticleSettings_child_roundness_get, ParticleSettings_child_roundness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_clump_factor_ = {
		{&rna_ParticleSettings_clump_shape, 	&rna_ParticleSettings_child_roundness,
		-1, "clump_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clump",
		"Amount of clumping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, clumpfac), RawPropertyType(5), nullptr},
		ParticleSettings_clump_factor_get, ParticleSettings_clump_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_clump_shape_ = {
		{&rna_ParticleSettings_use_clump_curve, 	&rna_ParticleSettings_clump_factor,
		-1, "clump_shape", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Shape of clumping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, clumppow), RawPropertyType(5), nullptr},
		ParticleSettings_clump_shape_get, ParticleSettings_clump_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_use_clump_curve_ = {
		{&rna_ParticleSettings_clump_curve, 	&rna_ParticleSettings_clump_shape,
		-1, "use_clump_curve", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Clump Curve",
		"Use a curve to define clump tapering",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ParticleSettings_use_clump_curve_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_clump_curve_get, ParticleSettings_use_clump_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_clump_curve_ = {
		{&rna_ParticleSettings_use_clump_noise, 	&rna_ParticleSettings_use_clump_curve,
		-1, "clump_curve", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clump Curve",
		"Curve defining clump tapering",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_clump_curve_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_ParticleSettings_use_clump_noise_ = {
		{&rna_ParticleSettings_clump_noise_size, 	&rna_ParticleSettings_clump_curve,
		-1, "use_clump_noise", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Clump Noise",
		"Create random clumps around the parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_clump_noise_get, ParticleSettings_use_clump_noise_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_clump_noise_size_ = {
		{&rna_ParticleSettings_kink_amplitude, 	&rna_ParticleSettings_use_clump_noise,
		-1, "clump_noise_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clump Noise Size",
		"Size of clump noise",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, clump_noise_size), RawPropertyType(5), nullptr},
		ParticleSettings_clump_noise_size_get, ParticleSettings_clump_noise_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0000100000f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_kink_amplitude_ = {
		{&rna_ParticleSettings_kink_amplitude_clump, 	&rna_ParticleSettings_clump_noise_size,
		-1, "kink_amplitude", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Amplitude",
		"The amplitude of the offset",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_amp), RawPropertyType(5), nullptr},
		ParticleSettings_kink_amplitude_get, ParticleSettings_kink_amplitude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -100000.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 0.2000000030f, nullptr
	};

	rna_ParticleSettings_kink_amplitude_clump_ = {
		{&rna_ParticleSettings_kink_amplitude_random, 	&rna_ParticleSettings_kink_amplitude,
		-1, "kink_amplitude_clump", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Amplitude Clump",
		"How much clump affects kink amplitude",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_amp_clump), RawPropertyType(5), nullptr},
		ParticleSettings_kink_amplitude_clump_get, ParticleSettings_kink_amplitude_clump_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_kink_amplitude_random_ = {
		{&rna_ParticleSettings_kink_frequency, 	&rna_ParticleSettings_kink_amplitude_clump,
		-1, "kink_amplitude_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Amplitude Random",
		"Random variation of the amplitude",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_amp_random), RawPropertyType(5), nullptr},
		ParticleSettings_kink_amplitude_random_get, ParticleSettings_kink_amplitude_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_kink_frequency_ = {
		{&rna_ParticleSettings_kink_shape, 	&rna_ParticleSettings_kink_amplitude_random,
		-1, "kink_frequency", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frequency",
		"The frequency of the offset (1/total length)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_freq), RawPropertyType(5), nullptr},
		ParticleSettings_kink_frequency_get, ParticleSettings_kink_frequency_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -100000.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 2.0f, nullptr
	};

	rna_ParticleSettings_kink_shape_ = {
		{&rna_ParticleSettings_kink_flat, 	&rna_ParticleSettings_kink_frequency,
		-1, "kink_shape", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Adjust the offset to the beginning/end",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_shape), RawPropertyType(5), nullptr},
		ParticleSettings_kink_shape_get, ParticleSettings_kink_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_kink_flat_ = {
		{&rna_ParticleSettings_kink_extra_steps, 	&rna_ParticleSettings_kink_shape,
		-1, "kink_flat", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Flatness",
		"How flat the hairs are",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_flat), RawPropertyType(5), nullptr},
		ParticleSettings_kink_flat_get, ParticleSettings_kink_flat_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_kink_extra_steps_ = {
		{&rna_ParticleSettings_kink_axis_random, 	&rna_ParticleSettings_kink_flat,
		-1, "kink_extra_steps", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Extra Steps",
		"Extra steps for resolution of special kink features",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_extra_steps), RawPropertyType(0), nullptr},
		ParticleSettings_kink_extra_steps_get, ParticleSettings_kink_extra_steps_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, INT_MAX, 1, nullptr, nullptr, 4, nullptr
	};

	rna_ParticleSettings_kink_axis_random_ = {
		{&rna_ParticleSettings_roughness_1, 	&rna_ParticleSettings_kink_extra_steps,
		-1, "kink_axis_random", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Axis Random",
		"Random variation of the orientation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, kink_axis_random), RawPropertyType(5), nullptr},
		ParticleSettings_kink_axis_random_get, ParticleSettings_kink_axis_random_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_roughness_1_ = {
		{&rna_ParticleSettings_roughness_1_size, 	&rna_ParticleSettings_kink_axis_random,
		-1, "roughness_1", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Roughness 1",
		"Amount of location dependent roughness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rough1), RawPropertyType(5), nullptr},
		ParticleSettings_roughness_1_get, ParticleSettings_roughness_1_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_roughness_1_size_ = {
		{&rna_ParticleSettings_roughness_2, 	&rna_ParticleSettings_roughness_1,
		-1, "roughness_1_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size 1",
		"Size of location dependent roughness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rough1_size), RawPropertyType(5), nullptr},
		ParticleSettings_roughness_1_size_get, ParticleSettings_roughness_1_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0099999998f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_roughness_2_ = {
		{&rna_ParticleSettings_roughness_2_size, 	&rna_ParticleSettings_roughness_1_size,
		-1, "roughness_2", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Roughness 2",
		"Amount of random roughness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rough2), RawPropertyType(5), nullptr},
		ParticleSettings_roughness_2_get, ParticleSettings_roughness_2_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_roughness_2_size_ = {
		{&rna_ParticleSettings_roughness_2_threshold, 	&rna_ParticleSettings_roughness_2,
		-1, "roughness_2_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size 2",
		"Size of random roughness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rough2_size), RawPropertyType(5), nullptr},
		ParticleSettings_roughness_2_size_get, ParticleSettings_roughness_2_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 10.0f, 0.0099999998f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_roughness_2_threshold_ = {
		{&rna_ParticleSettings_roughness_endpoint, 	&rna_ParticleSettings_roughness_2_size,
		-1, "roughness_2_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Amount of particles left untouched by random roughness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rough2_thres), RawPropertyType(5), nullptr},
		ParticleSettings_roughness_2_threshold_get, ParticleSettings_roughness_2_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_roughness_endpoint_ = {
		{&rna_ParticleSettings_roughness_end_shape, 	&rna_ParticleSettings_roughness_2_threshold,
		-1, "roughness_endpoint", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Roughness Endpoint",
		"Amount of endpoint roughness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rough_end), RawPropertyType(5), nullptr},
		ParticleSettings_roughness_endpoint_get, ParticleSettings_roughness_endpoint_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_roughness_end_shape_ = {
		{&rna_ParticleSettings_use_roughness_curve, 	&rna_ParticleSettings_roughness_endpoint,
		-1, "roughness_end_shape", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Shape of endpoint roughness",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rough_end_shape), RawPropertyType(5), nullptr},
		ParticleSettings_roughness_end_shape_get, ParticleSettings_roughness_end_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_use_roughness_curve_ = {
		{&rna_ParticleSettings_roughness_curve, 	&rna_ParticleSettings_roughness_end_shape,
		-1, "use_roughness_curve", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Roughness Curve",
		"Use a curve to define roughness",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ParticleSettings_use_roughness_curve_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_roughness_curve_get, ParticleSettings_use_roughness_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_roughness_curve_ = {
		{&rna_ParticleSettings_child_length, 	&rna_ParticleSettings_use_roughness_curve,
		-1, "roughness_curve", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Roughness Curve",
		"Curve defining roughness",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_roughness_curve_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_ParticleSettings_child_length_ = {
		{&rna_ParticleSettings_child_length_threshold, 	&rna_ParticleSettings_roughness_curve,
		-1, "child_length", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Length",
		"Length of child paths",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, clength), RawPropertyType(5), nullptr},
		ParticleSettings_child_length_get, ParticleSettings_child_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_child_length_threshold_ = {
		{&rna_ParticleSettings_child_parting_factor, 	&rna_ParticleSettings_child_length,
		-1, "child_length_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Amount of particles left untouched by child path length",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, clength_thres), RawPropertyType(5), nullptr},
		ParticleSettings_child_length_threshold_get, ParticleSettings_child_length_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_child_parting_factor_ = {
		{&rna_ParticleSettings_child_parting_min, 	&rna_ParticleSettings_child_length_threshold,
		-1, "child_parting_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Parting Factor",
		"Create parting in the children based on parent strands",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, parting_fac), RawPropertyType(5), nullptr},
		ParticleSettings_child_parting_factor_get, ParticleSettings_child_parting_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_child_parting_min_ = {
		{&rna_ParticleSettings_child_parting_max, 	&rna_ParticleSettings_child_parting_factor,
		-1, "child_parting_min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Parting Minimum",
		"Minimum root to tip angle (tip distance/root distance for long hair)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, parting_min), RawPropertyType(5), nullptr},
		ParticleSettings_child_parting_min_get, ParticleSettings_child_parting_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 180.0f, 0.0f, 180.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_child_parting_max_ = {
		{&rna_ParticleSettings_branch_threshold, 	&rna_ParticleSettings_child_parting_min,
		-1, "child_parting_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Parting Maximum",
		"Maximum root to tip angle (tip distance/root distance for long hair)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, parting_max), RawPropertyType(5), nullptr},
		ParticleSettings_child_parting_max_get, ParticleSettings_child_parting_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 180.0f, 0.0f, 180.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_branch_threshold_ = {
		{&rna_ParticleSettings_line_length_tail, 	&rna_ParticleSettings_child_parting_max,
		-1, "branch_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Threshold",
		"Threshold of branching",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, branch_thres), RawPropertyType(5), nullptr},
		ParticleSettings_branch_threshold_get, ParticleSettings_branch_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_line_length_tail_ = {
		{&rna_ParticleSettings_line_length_head, 	&rna_ParticleSettings_branch_threshold,
		-1, "line_length_tail", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tail",
		"Length of the line\'s tail",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_line_length_tail_get, ParticleSettings_line_length_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_line_length_head_ = {
		{&rna_ParticleSettings_path_start, 	&rna_ParticleSettings_line_length_tail,
		-1, "line_length_head", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Head",
		"Length of the line\'s head",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_line_length_head_get, ParticleSettings_line_length_head_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_path_start_ = {
		{&rna_ParticleSettings_path_end, 	&rna_ParticleSettings_line_length_head,
		-1, "path_start", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Path Start",
		"Starting time of path",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, path_start), RawPropertyType(5), nullptr},
		ParticleSettings_path_start_get, ParticleSettings_path_start_set, nullptr, nullptr, rna_PartSetting_pathstartend_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_path_end_ = {
		{&rna_ParticleSettings_trail_count, 	&rna_ParticleSettings_path_start,
		-1, "path_end", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Path End",
		"End time of path",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, path_end), RawPropertyType(5), nullptr},
		ParticleSettings_path_end_get, ParticleSettings_path_end_set, nullptr, nullptr, rna_PartSetting_pathstartend_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_trail_count_ = {
		{&rna_ParticleSettings_keyed_loops, 	&rna_ParticleSettings_path_end,
		-1, "trail_count", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Trail Count",
		"Number of trail particles",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, trail_count), RawPropertyType(0), nullptr},
		ParticleSettings_trail_count_get, ParticleSettings_trail_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 100000, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_keyed_loops_ = {
		{&rna_ParticleSettings_use_modifier_stack, 	&rna_ParticleSettings_trail_count,
		-1, "keyed_loops", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Loop Count",
		"Number of times the keys are looped",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, keyed_loops), RawPropertyType(0), nullptr},
		ParticleSettings_keyed_loops_get, ParticleSettings_keyed_loops_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 10000, 1, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleSettings_use_modifier_stack_ = {
		{&rna_ParticleSettings_instance_collection, 	&rna_ParticleSettings_keyed_loops,
		-1, "use_modifier_stack", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Use Modifier Stack",
		"Emit particles from mesh with modifiers applied (must use same subdivision surface level for viewport and render for correct results)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_change_type, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, use_modifier_stack), RawPropertyType(1), nullptr},
		ParticleSettings_use_modifier_stack_get, ParticleSettings_use_modifier_stack_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_instance_collection_ = {
		{&rna_ParticleSettings_instance_weights, 	&rna_ParticleSettings_use_modifier_stack,
		-1, "instance_collection", 8388801, 1, 0, 64, 0, PropertyPathTemplateType(0), "Instance Collection",
		"Show objects in this collection in place of particles",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_count, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_instance_collection_get, ParticleSettings_instance_collection_set, nullptr, nullptr,RNA_Collection
	};

	rna_ParticleSettings_instance_weights_ = {
		{&rna_ParticleSettings_active_instanceweight, 	&rna_ParticleSettings_instance_collection,
		-1, "instance_weights", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Instance Collection Weights",
		"Weights for all of the objects in the instance collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_instance_weights_begin, ParticleSettings_instance_weights_next, ParticleSettings_instance_weights_end, ParticleSettings_instance_weights_get, nullptr, ParticleSettings_instance_weights_lookup_int, ParticleSettings_instance_weights_lookup_string, nullptr, RNA_ParticleDupliWeight
	};

	rna_ParticleSettings_active_instanceweight_ = {
		{&rna_ParticleSettings_active_instanceweight_index, 	&rna_ParticleSettings_instance_weights,
		-1, "active_instanceweight", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Instance Object",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_active_instanceweight_get, nullptr, nullptr, nullptr,RNA_ParticleDupliWeight
	};

	rna_ParticleSettings_active_instanceweight_index_ = {
		{&rna_ParticleSettings_instance_object, 	&rna_ParticleSettings_active_instanceweight,
		-1, "active_instanceweight_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Instance Object Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_active_instanceweight_index_get, ParticleSettings_active_instanceweight_index_set, nullptr, nullptr, rna_ParticleDupliWeight_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_instance_object_ = {
		{&rna_ParticleSettings_boids, 	&rna_ParticleSettings_active_instanceweight_index,
		-1, "instance_object", 8388737, 1, 0, 0, 0, PropertyPathTemplateType(0), "Instance Object",
		"Show this object in place of particles",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_dependency, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_instance_object_get, ParticleSettings_instance_object_set, nullptr, nullptr,RNA_Object
	};

	rna_ParticleSettings_boids_ = {
		{&rna_ParticleSettings_fluid, 	&rna_ParticleSettings_instance_object,
		-1, "boids", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Boid Settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_boids_get, nullptr, nullptr, nullptr,RNA_BoidSettings
	};

	rna_ParticleSettings_fluid_ = {
		{&rna_ParticleSettings_effector_weights, 	&rna_ParticleSettings_boids,
		-1, "fluid", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "SPH Fluid Settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_fluid_get, nullptr, nullptr, nullptr,RNA_SPHFluidSettings
	};

	rna_ParticleSettings_effector_weights_ = {
		{&rna_ParticleSettings_animation_data, 	&rna_ParticleSettings_fluid,
		-1, "effector_weights", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Effector Weights",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_effector_weights_get, nullptr, nullptr, nullptr,RNA_EffectorWeights
	};

	rna_ParticleSettings_animation_data_ = {
		{&rna_ParticleSettings_force_field_1, 	&rna_ParticleSettings_effector_weights,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	rna_ParticleSettings_force_field_1_ = {
		{&rna_ParticleSettings_force_field_2, 	&rna_ParticleSettings_animation_data,
		-1, "force_field_1", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Force Field 1",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_force_field_1_get, nullptr, nullptr, nullptr,RNA_FieldSettings
	};

	rna_ParticleSettings_force_field_2_ = {
		{&rna_ParticleSettings_twist, 	&rna_ParticleSettings_force_field_1,
		-1, "force_field_2", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Force Field 2",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_force_field_2_get, nullptr, nullptr, nullptr,RNA_FieldSettings
	};

	rna_ParticleSettings_twist_ = {
		{&rna_ParticleSettings_use_twist_curve, 	&rna_ParticleSettings_force_field_2,
		-1, "twist", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Twist",
		"Number of turns around parent along the strand",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, twist), RawPropertyType(5), nullptr},
		ParticleSettings_twist_get, ParticleSettings_twist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10.0f, 10.0f, -100000.0f, 100000.0f, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_use_twist_curve_ = {
		{&rna_ParticleSettings_twist_curve, 	&rna_ParticleSettings_twist,
		-1, "use_twist_curve", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Twist Curve",
		"Use a curve to define twist",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ParticleSettings_use_twist_curve_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_twist_curve_get, ParticleSettings_use_twist_curve_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ParticleSettings_twist_curve_ = {
		{&rna_ParticleSettings_use_close_tip, 	&rna_ParticleSettings_use_twist_curve,
		-1, "twist_curve", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Twist Curve",
		"Curve defining twist",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo_child, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_twist_curve_get, nullptr, nullptr, nullptr,RNA_CurveMapping
	};

	rna_ParticleSettings_use_close_tip_ = {
		{&rna_ParticleSettings_shape, 	&rna_ParticleSettings_twist_curve,
		-1, "use_close_tip", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Close Tip",
		"Set tip radius to zero",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettings_use_close_tip_get, ParticleSettings_use_close_tip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ParticleSettings_shape_ = {
		{&rna_ParticleSettings_root_radius, 	&rna_ParticleSettings_use_close_tip,
		-1, "shape", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Shape",
		"Strand shape parameter",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, shape), RawPropertyType(5), nullptr},
		ParticleSettings_shape_get, ParticleSettings_shape_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_root_radius_ = {
		{&rna_ParticleSettings_tip_radius, 	&rna_ParticleSettings_shape,
		-1, "root_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Root Diameter",
		"Strand diameter width at the root",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rad_root), RawPropertyType(5), nullptr},
		ParticleSettings_root_radius_get, ParticleSettings_root_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 2, nullptr, nullptr, 1.0f, nullptr
	};

	rna_ParticleSettings_tip_radius_ = {
		{&rna_ParticleSettings_radius_scale, 	&rna_ParticleSettings_root_radius,
		-1, "tip_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Tip Diameter",
		"Strand diameter width at the tip",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rad_tip), RawPropertyType(5), nullptr},
		ParticleSettings_tip_radius_get, ParticleSettings_tip_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_ParticleSettings_radius_scale_ = {
		{nullptr, 	&rna_ParticleSettings_tip_radius,
		-1, "radius_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Diameter Scale",
		"Multiplier of diameter properties",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Particle_redo, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ParticleSettings, rad_scale), RawPropertyType(5), nullptr},
		ParticleSettings_radius_scale_get, ParticleSettings_radius_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, FLT_MAX, 0.1000000015f, 2, nullptr, nullptr, 0.0099999998f, nullptr
	};

	StructRNA *srna = RNA_ParticleSettings;
	srna->cont.properties = {&rna_ParticleSettings_texture_slots, &rna_ParticleSettings_radius_scale};
	srna->identifier = "ParticleSettings";
	srna->flag = 519;
	srna->name = "Particle Settings";
	srna->description = "Particle settings, reusable by multiple particle systems";
	srna->translation_context = "*";
	srna->icon = 189;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Texture Slots */
static CollectionPropertyRNA rna_ParticleSettingsTextureSlots_rna_properties_;
PropertyRNA &rna_ParticleSettingsTextureSlots_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlots_rna_properties_);

static PointerPropertyRNA rna_ParticleSettingsTextureSlots_rna_type_;
PropertyRNA &rna_ParticleSettingsTextureSlots_rna_type = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlots_rna_type_);

static PointerPropertyRNA rna_ParticleSettingsTextureSlots_add_mtex_;
PropertyRNA &rna_ParticleSettingsTextureSlots_add_mtex = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlots_add_mtex_);

FunctionRNA *rna_ParticleSettingsTextureSlots_add_func;
static IntPropertyRNA rna_ParticleSettingsTextureSlots_create_index_;
PropertyRNA &rna_ParticleSettingsTextureSlots_create_index = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlots_create_index_);

static PointerPropertyRNA rna_ParticleSettingsTextureSlots_create_mtex_;
PropertyRNA &rna_ParticleSettingsTextureSlots_create_mtex = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlots_create_mtex_);

FunctionRNA *rna_ParticleSettingsTextureSlots_create_func;
static IntPropertyRNA rna_ParticleSettingsTextureSlots_clear_index_;
PropertyRNA &rna_ParticleSettingsTextureSlots_clear_index = reinterpret_cast<PropertyRNA &>(rna_ParticleSettingsTextureSlots_clear_index_);

FunctionRNA *rna_ParticleSettingsTextureSlots_clear_func;
StructRNA *RNA_ParticleSettingsTextureSlots;
void register_struct_ParticleSettingsTextureSlots(BlenderRNA &brna)
{
	rna_ParticleSettingsTextureSlots_rna_properties_ = {
		{&rna_ParticleSettingsTextureSlots_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlots_rna_properties_begin, ParticleSettingsTextureSlots_rna_properties_next, ParticleSettingsTextureSlots_rna_properties_end, ParticleSettingsTextureSlots_rna_properties_get, nullptr, nullptr, ParticleSettingsTextureSlots_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ParticleSettingsTextureSlots_rna_type_ = {
		{nullptr, 	&rna_ParticleSettingsTextureSlots_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ParticleSettingsTextureSlots_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_ParticleSettingsTextureSlots;
	srna->cont.properties = {&rna_ParticleSettingsTextureSlots_rna_properties, &rna_ParticleSettingsTextureSlots_rna_type};
	srna->identifier = "ParticleSettingsTextureSlots";
	srna->flag = 516;
	srna->name = "Texture Slots";
	srna->description = "Collection of texture slots";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ParticleSettingsTextureSlots_rna_properties;
	{
	rna_ParticleSettingsTextureSlots_add_mtex_ = {
		{nullptr, 	nullptr,
		-1, "mtex", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly initialized mtex",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSettingsTextureSlot
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ParticleSettingsTextureSlots_add_mtex, &rna_ParticleSettingsTextureSlots_add_mtex};
		func->identifier = "add";
		func->flag = 2073;
		func->description = "add";
		func->call = ParticleSettingsTextureSlots_add_call;
		func->c_ret = &rna_ParticleSettingsTextureSlots_add_mtex;
		rna_ParticleSettingsTextureSlots_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ParticleSettingsTextureSlots_create_index_ = {
		{&rna_ParticleSettingsTextureSlots_create_mtex, 	nullptr,
		-1, "index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"Slot index to initialize",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
	rna_ParticleSettingsTextureSlots_create_mtex_ = {
		{nullptr, 	&rna_ParticleSettingsTextureSlots_create_index,
		-1, "mtex", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly initialized mtex",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSettingsTextureSlot
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ParticleSettingsTextureSlots_create_index, &rna_ParticleSettingsTextureSlots_create_mtex};
		func->identifier = "create";
		func->flag = 2073;
		func->description = "create";
		func->call = ParticleSettingsTextureSlots_create_call;
		func->c_ret = &rna_ParticleSettingsTextureSlots_create_mtex;
		rna_ParticleSettingsTextureSlots_create_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ParticleSettingsTextureSlots_clear_index_ = {
		{nullptr, 	nullptr,
		-1, "index", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Index",
		"Slot index to clear",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ParticleSettingsTextureSlots_clear_index, &rna_ParticleSettingsTextureSlots_clear_index};
		func->identifier = "clear";
		func->flag = 2073;
		func->description = "clear";
		func->call = ParticleSettingsTextureSlots_clear_call;
		rna_ParticleSettingsTextureSlots_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
