
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

#include "rna_material.cc"
#include "rna_material_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


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

extern PropertyRNA &rna_Material_surface_render_method;
extern PropertyRNA &rna_Material_displacement_method;
extern PropertyRNA &rna_Material_blend_method;
extern PropertyRNA &rna_Material_alpha_threshold;
extern PropertyRNA &rna_Material_use_transparency_overlap;
extern PropertyRNA &rna_Material_show_transparent_back;
extern PropertyRNA &rna_Material_use_backface_culling;
extern PropertyRNA &rna_Material_use_backface_culling_shadow;
extern PropertyRNA &rna_Material_use_backface_culling_lightprobe_volume;
extern PropertyRNA &rna_Material_use_transparent_shadow;
extern PropertyRNA &rna_Material_use_raytrace_refraction;
extern PropertyRNA &rna_Material_use_screen_refraction;
extern PropertyRNA &rna_Material_use_sss_translucency;
extern PropertyRNA &rna_Material_refraction_depth;
extern PropertyRNA &rna_Material_thickness_mode;
extern PropertyRNA &rna_Material_use_thickness_from_shadow;
extern PropertyRNA &rna_Material_volume_intersection_method;
extern PropertyRNA &rna_Material_max_vertex_displacement;
extern PropertyRNA &rna_Material_preview_render_type;
extern PropertyRNA &rna_Material_use_preview_world;
extern PropertyRNA &rna_Material_pass_index;
extern PropertyRNA &rna_Material_node_tree;
extern PropertyRNA &rna_Material_use_nodes;
extern PropertyRNA &rna_Material_animation_data;
extern PropertyRNA &rna_Material_texture_paint_images;
extern PropertyRNA &rna_Material_texture_paint_slots;
extern PropertyRNA &rna_Material_paint_active_slot;
extern PropertyRNA &rna_Material_paint_clone_slot;
extern PropertyRNA &rna_Material_diffuse_color;
extern PropertyRNA &rna_Material_specular_color;
extern PropertyRNA &rna_Material_roughness;
extern PropertyRNA &rna_Material_specular_intensity;
extern PropertyRNA &rna_Material_metallic;
extern PropertyRNA &rna_Material_line_color;
extern PropertyRNA &rna_Material_line_priority;
extern PropertyRNA &rna_Material_grease_pencil;
extern PropertyRNA &rna_Material_is_grease_pencil;
extern PropertyRNA &rna_Material_lineart;

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



extern PropertyRNA &rna_TexPaintSlot_rna_properties;
extern PropertyRNA &rna_TexPaintSlot_rna_type;
extern PropertyRNA &rna_TexPaintSlot_name;
extern PropertyRNA &rna_TexPaintSlot_icon_value;
extern PropertyRNA &rna_TexPaintSlot_uv_layer;
extern PropertyRNA &rna_TexPaintSlot_is_valid;


extern PropertyRNA &rna_MaterialGPencilStyle_rna_properties;
extern PropertyRNA &rna_MaterialGPencilStyle_rna_type;
extern PropertyRNA &rna_MaterialGPencilStyle_color;
extern PropertyRNA &rna_MaterialGPencilStyle_fill_color;
extern PropertyRNA &rna_MaterialGPencilStyle_mix_color;
extern PropertyRNA &rna_MaterialGPencilStyle_mix_factor;
extern PropertyRNA &rna_MaterialGPencilStyle_mix_stroke_factor;
extern PropertyRNA &rna_MaterialGPencilStyle_texture_angle;
extern PropertyRNA &rna_MaterialGPencilStyle_texture_scale;
extern PropertyRNA &rna_MaterialGPencilStyle_texture_offset;
extern PropertyRNA &rna_MaterialGPencilStyle_pixel_size;
extern PropertyRNA &rna_MaterialGPencilStyle_hide;
extern PropertyRNA &rna_MaterialGPencilStyle_lock;
extern PropertyRNA &rna_MaterialGPencilStyle_ghost;
extern PropertyRNA &rna_MaterialGPencilStyle_texture_clamp;
extern PropertyRNA &rna_MaterialGPencilStyle_flip;
extern PropertyRNA &rna_MaterialGPencilStyle_use_overlap_strokes;
extern PropertyRNA &rna_MaterialGPencilStyle_use_stroke_holdout;
extern PropertyRNA &rna_MaterialGPencilStyle_use_fill_holdout;
extern PropertyRNA &rna_MaterialGPencilStyle_show_stroke;
extern PropertyRNA &rna_MaterialGPencilStyle_show_fill;
extern PropertyRNA &rna_MaterialGPencilStyle_alignment_mode;
extern PropertyRNA &rna_MaterialGPencilStyle_alignment_rotation;
extern PropertyRNA &rna_MaterialGPencilStyle_placement_mode;
extern PropertyRNA &rna_MaterialGPencilStyle_placement_count;
extern PropertyRNA &rna_MaterialGPencilStyle_placement_radius_spacing;
extern PropertyRNA &rna_MaterialGPencilStyle_placement_density;
extern PropertyRNA &rna_MaterialGPencilStyle_use_randomization;
extern PropertyRNA &rna_MaterialGPencilStyle_random_size_factor;
extern PropertyRNA &rna_MaterialGPencilStyle_random_strength_factor;
extern PropertyRNA &rna_MaterialGPencilStyle_random_rotation_factor;
extern PropertyRNA &rna_MaterialGPencilStyle_random_hue_factor;
extern PropertyRNA &rna_MaterialGPencilStyle_random_saturation_factor;
extern PropertyRNA &rna_MaterialGPencilStyle_random_value_factor;
extern PropertyRNA &rna_MaterialGPencilStyle_random_noise_scale;
extern PropertyRNA &rna_MaterialGPencilStyle_pass_index;
extern PropertyRNA &rna_MaterialGPencilStyle_mode;
extern PropertyRNA &rna_MaterialGPencilStyle_stroke_style;
extern PropertyRNA &rna_MaterialGPencilStyle_stroke_image;
extern PropertyRNA &rna_MaterialGPencilStyle_fill_style;
extern PropertyRNA &rna_MaterialGPencilStyle_gradient_type;
extern PropertyRNA &rna_MaterialGPencilStyle_fill_image;
extern PropertyRNA &rna_MaterialGPencilStyle_is_stroke_visible;
extern PropertyRNA &rna_MaterialGPencilStyle_is_fill_visible;


extern PropertyRNA &rna_MaterialLineArt_rna_properties;
extern PropertyRNA &rna_MaterialLineArt_rna_type;
extern PropertyRNA &rna_MaterialLineArt_use_material_mask;
extern PropertyRNA &rna_MaterialLineArt_use_material_mask_bits;
extern PropertyRNA &rna_MaterialLineArt_mat_occlusion;
extern PropertyRNA &rna_MaterialLineArt_intersection_priority;
extern PropertyRNA &rna_MaterialLineArt_use_intersection_priority_override;

int Material_surface_render_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->surface_render_method);
}

void Material_surface_render_method_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Material_render_method_set;
    fn(ptr, value);
}

int Material_displacement_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->displacement_method);
}

void Material_displacement_method_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->displacement_method = (std::remove_reference_t<decltype(data->displacement_method)>)value;
}

int Material_blend_method_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Material_blend_method_get;
    return fn(ptr);
}

void Material_blend_method_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Material_blend_method_set;
    fn(ptr, value);
}

float Material_alpha_threshold_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->alpha_threshold);
}

void Material_alpha_threshold_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->alpha_threshold = (std::remove_reference_t<decltype(data->alpha_threshold)>)std::clamp(value, 0.0f, 1.0f);
}

bool Material_use_transparency_overlap_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return !((uint64_t(data->blend_flag) & 1) != 0);
}

void Material_use_transparency_overlap_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (!value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 1); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(1)); }
}

bool Material_show_transparent_back_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return !((uint64_t(data->blend_flag) & 1) != 0);
}

void Material_show_transparent_back_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (!value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 1); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(1)); }
}

bool Material_use_backface_culling_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return ((uint64_t(data->blend_flag) & 4) != 0);
}

void Material_use_backface_culling_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 4); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(4)); }
}

bool Material_use_backface_culling_shadow_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return ((uint64_t(data->blend_flag) & 32) != 0);
}

void Material_use_backface_culling_shadow_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 32); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(32)); }
}

bool Material_use_backface_culling_lightprobe_volume_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return !((uint64_t(data->blend_flag) & 16) != 0);
}

void Material_use_backface_culling_lightprobe_volume_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (!value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 16); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(16)); }
}

bool Material_use_transparent_shadow_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return ((uint64_t(data->blend_flag) & 64) != 0);
}

void Material_use_transparent_shadow_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Material_transparent_shadow_set;
    fn(ptr, value);
}

bool Material_use_raytrace_refraction_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return ((uint64_t(data->blend_flag) & 2) != 0);
}

void Material_use_raytrace_refraction_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 2); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(2)); }
}

bool Material_use_screen_refraction_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return ((uint64_t(data->blend_flag) & 2) != 0);
}

void Material_use_screen_refraction_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 2); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(2)); }
}

bool Material_use_sss_translucency_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return ((uint64_t(data->blend_flag) & 8) != 0);
}

void Material_use_sss_translucency_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 8); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(8)); }
}

float Material_refraction_depth_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->refract_depth);
}

void Material_refraction_depth_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->refract_depth = (std::remove_reference_t<decltype(data->refract_depth)>)std::clamp(value, 0.0f, FLT_MAX);
}

int Material_thickness_mode_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->thickness_mode);
}

void Material_thickness_mode_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->thickness_mode = (std::remove_reference_t<decltype(data->thickness_mode)>)value;
}

bool Material_use_thickness_from_shadow_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return ((uint64_t(data->blend_flag) & 128) != 0);
}

void Material_use_thickness_from_shadow_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) | 128); }
    else { data->blend_flag = std::remove_reference_t<decltype(data->blend_flag)>(uint64_t(data->blend_flag) & ~uint64_t(128)); }
}

int Material_volume_intersection_method_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->volume_intersection_method);
}

void Material_volume_intersection_method_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->volume_intersection_method = (std::remove_reference_t<decltype(data->volume_intersection_method)>)value;
}

float Material_max_vertex_displacement_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->inflate_bounds);
}

void Material_max_vertex_displacement_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->inflate_bounds = (std::remove_reference_t<decltype(data->inflate_bounds)>)std::clamp(value, 0.0f, FLT_MAX);
}

int Material_preview_render_type_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->pr_type);
}

void Material_preview_render_type_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->pr_type = (std::remove_reference_t<decltype(data->pr_type)>)value;
}

bool Material_use_preview_world_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return ((uint64_t(data->pr_flag) & 1) != 0);
}

void Material_use_preview_world_set(PointerRNA *ptr, bool value)
{
    Material *data = (Material *)(ptr->data);
    if (value) { data->pr_flag = std::remove_reference_t<decltype(data->pr_flag)>(uint64_t(data->pr_flag) | 1); }
    else { data->pr_flag = std::remove_reference_t<decltype(data->pr_flag)>(uint64_t(data->pr_flag) & ~uint64_t(1)); }
}

int Material_pass_index_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->index);
}

void Material_pass_index_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->index = (std::remove_reference_t<decltype(data->index)>)std::clamp(value, 0, 32767);
}

PointerRNA Material_node_tree_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_NodeTree, data->nodetree);
}

bool Material_use_nodes_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Material_use_nodes_get;
    return fn(ptr);
}

void Material_use_nodes_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Material_use_nodes_set;
    fn(ptr, value);
}

PointerRNA Material_animation_data_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA Material_texture_paint_images_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Image, rna_iterator_array_dereference_get(iter));
}

void Material_texture_paint_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Material_texture_paint_images;

    PropCollectionBeginFunc fn = rna_Material_texpaint_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_images_get(iter);
    }
}

void Material_texture_paint_images_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_images_get(iter);
    }
}

void Material_texture_paint_images_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Material_texture_paint_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Material_texture_paint_images_begin(&iter, ptr);

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
        if (found) { *r_ptr = Material_texture_paint_images_get(&iter); }
    }

    Material_texture_paint_images_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool Material_texture_paint_images_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Material_texture_paint_images_begin(&iter, ptr);

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
        Material_texture_paint_images_next(&iter);
    }
    Material_texture_paint_images_end(&iter);

    return found;
}

static PointerRNA Material_texture_paint_slots_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_TexPaintSlot, rna_iterator_array_get(iter));
}

void Material_texture_paint_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Material_texture_paint_slots;

    PropCollectionBeginFunc fn = rna_Material_texpaint_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_slots_get(iter);
    }
}

void Material_texture_paint_slots_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Material_texture_paint_slots_get(iter);
    }
}

void Material_texture_paint_slots_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Material_texture_paint_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Material_texture_paint_slots_begin(&iter, ptr);

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
        if (found) { *r_ptr = Material_texture_paint_slots_get(&iter); }
    }

    Material_texture_paint_slots_end(&iter);

    return found;
}

int Material_paint_active_slot_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->paint_active_slot);
}

void Material_paint_active_slot_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->paint_active_slot = (std::remove_reference_t<decltype(data->paint_active_slot)>)std::clamp(value, 0, 32767);
}

int Material_paint_clone_slot_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->paint_clone_slot);
}

void Material_paint_clone_slot_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->paint_clone_slot = (std::remove_reference_t<decltype(data->paint_clone_slot)>)std::clamp(value, 0, 32767);
}

void Material_diffuse_color_get(PointerRNA *ptr, float values[4])
{
    Material *data = (Material *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)((&data->r)[i]);
    }
}

void Material_diffuse_color_set(PointerRNA *ptr, const float values[4])
{
    Material *data = (Material *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        (&data->r)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void Material_specular_color_get(PointerRNA *ptr, float values[3])
{
    Material *data = (Material *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->specr)[i]);
    }
}

void Material_specular_color_set(PointerRNA *ptr, const float values[3])
{
    Material *data = (Material *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (&data->specr)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float Material_roughness_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->roughness);
}

void Material_roughness_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->roughness = (std::remove_reference_t<decltype(data->roughness)>)std::clamp(value, 0.0f, 1.0f);
}

float Material_specular_intensity_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->spec);
}

void Material_specular_intensity_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->spec = (std::remove_reference_t<decltype(data->spec)>)std::clamp(value, 0.0f, 1.0f);
}

float Material_metallic_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (float)(data->metallic);
}

void Material_metallic_set(PointerRNA *ptr, float value)
{
    Material *data = (Material *)(ptr->data);
    data->metallic = (std::remove_reference_t<decltype(data->metallic)>)std::clamp(value, 0.0f, 1.0f);
}

void Material_line_color_get(PointerRNA *ptr, float values[4])
{
    Material *data = (Material *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->line_col)[i]);
    }
}

void Material_line_color_set(PointerRNA *ptr, const float values[4])
{
    Material *data = (Material *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->line_col)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

int Material_line_priority_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return (int)(data->line_priority);
}

void Material_line_priority_set(PointerRNA *ptr, int value)
{
    Material *data = (Material *)(ptr->data);
    data->line_priority = (std::remove_reference_t<decltype(data->line_priority)>)std::clamp(value, 0, 32767);
}

PointerRNA Material_grease_pencil_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MaterialGPencilStyle, data->gp_style);
}

bool Material_is_grease_pencil_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_is_grease_pencil_get;
    return fn(ptr);
}

PointerRNA Material_lineart_get(PointerRNA *ptr)
{
    Material *data = (Material *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_MaterialLineArt, &data->lineart);
}

static PointerRNA TexPaintSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void TexPaintSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_TexPaintSlot_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = TexPaintSlot_rna_properties_get(iter);
    }
}

void TexPaintSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = TexPaintSlot_rna_properties_get(iter);
    }
}

void TexPaintSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool TexPaintSlot_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA TexPaintSlot_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void TexPaintSlot_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_TexPaintSlot_name_get;
    fn(ptr, value);
}

int TexPaintSlot_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_TexPaintSlot_name_length;
    return fn(ptr);
}

int TexPaintSlot_icon_value_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_TexPaintSlot_icon_get;
    return fn(ptr);
}

void TexPaintSlot_uv_layer_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_TexPaintSlot_uv_layer_get;
    fn(ptr, value);
}

int TexPaintSlot_uv_layer_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_TexPaintSlot_uv_layer_length;
    return fn(ptr);
}

void TexPaintSlot_uv_layer_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_TexPaintSlot_uv_layer_set;
    fn(ptr, value);
}

bool TexPaintSlot_is_valid_get(PointerRNA *ptr)
{
    TexPaintSlot *data = (TexPaintSlot *)(ptr->data);
    return ((uint64_t(data->valid) & 1) != 0);
}

static PointerRNA MaterialGPencilStyle_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaterialGPencilStyle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaterialGPencilStyle_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialGPencilStyle_rna_properties_get(iter);
    }
}

void MaterialGPencilStyle_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaterialGPencilStyle_rna_properties_get(iter);
    }
}

void MaterialGPencilStyle_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaterialGPencilStyle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaterialGPencilStyle_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MaterialGPencilStyle_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->stroke_rgba)[i]);
    }
}

void MaterialGPencilStyle_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->stroke_rgba)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void MaterialGPencilStyle_fill_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->fill_rgba)[i]);
    }
}

void MaterialGPencilStyle_fill_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->fill_rgba)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void MaterialGPencilStyle_mix_color_get(PointerRNA *ptr, float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        values[i] = (float)(((float *)data->mix_rgba)[i]);
    }
}

void MaterialGPencilStyle_mix_color_set(PointerRNA *ptr, const float values[4])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 4; i++) {
        ((float *)data->mix_rgba)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

float MaterialGPencilStyle_mix_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->mix_factor);
}

void MaterialGPencilStyle_mix_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->mix_factor = (std::remove_reference_t<decltype(data->mix_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_mix_stroke_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->mix_stroke_factor);
}

void MaterialGPencilStyle_mix_stroke_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->mix_stroke_factor = (std::remove_reference_t<decltype(data->mix_stroke_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_texture_angle_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->texture_angle);
}

void MaterialGPencilStyle_texture_angle_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->texture_angle = (std::remove_reference_t<decltype(data->texture_angle)>)value;
}

void MaterialGPencilStyle_texture_scale_get(PointerRNA *ptr, float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->texture_scale)[i]);
    }
}

void MaterialGPencilStyle_texture_scale_set(PointerRNA *ptr, const float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->texture_scale)[i] = values[i];
    }
}

void MaterialGPencilStyle_texture_offset_get(PointerRNA *ptr, float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->texture_offset)[i]);
    }
}

void MaterialGPencilStyle_texture_offset_set(PointerRNA *ptr, const float values[2])
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->texture_offset)[i] = values[i];
    }
}

float MaterialGPencilStyle_pixel_size_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->texture_pixsize);
}

void MaterialGPencilStyle_pixel_size_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->texture_pixsize = (std::remove_reference_t<decltype(data->texture_pixsize)>)std::clamp(value, 1.0f, 5000.0f);
}

bool MaterialGPencilStyle_hide_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MaterialGPencilStyle_hide_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool MaterialGPencilStyle_lock_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void MaterialGPencilStyle_lock_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool MaterialGPencilStyle_ghost_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void MaterialGPencilStyle_ghost_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool MaterialGPencilStyle_texture_clamp_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void MaterialGPencilStyle_texture_clamp_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

bool MaterialGPencilStyle_flip_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void MaterialGPencilStyle_flip_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 64); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(64)); }
}

bool MaterialGPencilStyle_use_overlap_strokes_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 4096) != 0);
}

void MaterialGPencilStyle_use_overlap_strokes_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

bool MaterialGPencilStyle_use_stroke_holdout_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void MaterialGPencilStyle_use_stroke_holdout_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool MaterialGPencilStyle_use_fill_holdout_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 16384) != 0);
}

void MaterialGPencilStyle_use_fill_holdout_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

bool MaterialGPencilStyle_show_stroke_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void MaterialGPencilStyle_show_stroke_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool MaterialGPencilStyle_show_fill_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void MaterialGPencilStyle_show_fill_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

int MaterialGPencilStyle_alignment_mode_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (uint64_t(data->alignment_mode) & 3);
}

void MaterialGPencilStyle_alignment_mode_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->alignment_mode = std::remove_reference_t<decltype(data->alignment_mode)>(uint64_t(data->alignment_mode) & ~uint64_t(3));
    data->alignment_mode = std::remove_reference_t<decltype(data->alignment_mode)>(uint64_t(data->alignment_mode) | uint64_t(value));
}

float MaterialGPencilStyle_alignment_rotation_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->alignment_rotation);
}

void MaterialGPencilStyle_alignment_rotation_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->alignment_rotation = (std::remove_reference_t<decltype(data->alignment_rotation)>)std::clamp(value, -1.5707963705f, 1.5707963705f);
}

int MaterialGPencilStyle_placement_mode_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (uint64_t(data->placement_mode) & 3);
}

void MaterialGPencilStyle_placement_mode_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->placement_mode = std::remove_reference_t<decltype(data->placement_mode)>(uint64_t(data->placement_mode) & ~uint64_t(3));
    data->placement_mode = std::remove_reference_t<decltype(data->placement_mode)>(uint64_t(data->placement_mode) | uint64_t(value));
}

int MaterialGPencilStyle_placement_count_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (int)(data->placement_count);
}

void MaterialGPencilStyle_placement_count_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->placement_count = (std::remove_reference_t<decltype(data->placement_count)>)std::clamp(value, 1, INT_MAX);
}

float MaterialGPencilStyle_placement_radius_spacing_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->placement_radius_spacing);
}

void MaterialGPencilStyle_placement_radius_spacing_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->placement_radius_spacing = (std::remove_reference_t<decltype(data->placement_radius_spacing)>)std::clamp(value, 0.0f, FLT_MAX);
}

float MaterialGPencilStyle_placement_density_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->placement_density);
}

void MaterialGPencilStyle_placement_density_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->placement_density = (std::remove_reference_t<decltype(data->placement_density)>)std::clamp(value, 0.0f, FLT_MAX);
}

bool MaterialGPencilStyle_use_randomization_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return ((uint64_t(data->flag) & -32768) != 0);
}

void MaterialGPencilStyle_use_randomization_set(PointerRNA *ptr, bool value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | -32768); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(-32768)); }
}

float MaterialGPencilStyle_random_size_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->random_size_factor);
}

void MaterialGPencilStyle_random_size_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->random_size_factor = (std::remove_reference_t<decltype(data->random_size_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_random_strength_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->random_strength_factor);
}

void MaterialGPencilStyle_random_strength_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->random_strength_factor = (std::remove_reference_t<decltype(data->random_strength_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_random_rotation_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->random_rotation_factor);
}

void MaterialGPencilStyle_random_rotation_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->random_rotation_factor = (std::remove_reference_t<decltype(data->random_rotation_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_random_hue_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->random_hue_factor);
}

void MaterialGPencilStyle_random_hue_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->random_hue_factor = (std::remove_reference_t<decltype(data->random_hue_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_random_saturation_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->random_saturation_factor);
}

void MaterialGPencilStyle_random_saturation_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->random_saturation_factor = (std::remove_reference_t<decltype(data->random_saturation_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_random_value_factor_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->random_value_factor);
}

void MaterialGPencilStyle_random_value_factor_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->random_value_factor = (std::remove_reference_t<decltype(data->random_value_factor)>)std::clamp(value, 0.0f, 1.0f);
}

float MaterialGPencilStyle_random_noise_scale_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (float)(data->random_noise_scale);
}

void MaterialGPencilStyle_random_noise_scale_set(PointerRNA *ptr, float value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->random_noise_scale = (std::remove_reference_t<decltype(data->random_noise_scale)>)std::clamp(value, 0.0f, FLT_MAX);
}

int MaterialGPencilStyle_pass_index_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (int)(data->index);
}

void MaterialGPencilStyle_pass_index_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->index = (std::remove_reference_t<decltype(data->index)>)std::clamp(value, 0, 32767);
}

int MaterialGPencilStyle_mode_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (uint64_t(data->mode) & 3);
}

void MaterialGPencilStyle_mode_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) & ~uint64_t(3));
    data->mode = std::remove_reference_t<decltype(data->mode)>(uint64_t(data->mode) | uint64_t(value));
}

int MaterialGPencilStyle_stroke_style_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (uint64_t(data->stroke_style) & 1);
}

void MaterialGPencilStyle_stroke_style_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->stroke_style = std::remove_reference_t<decltype(data->stroke_style)>(uint64_t(data->stroke_style) & ~uint64_t(1));
    data->stroke_style = std::remove_reference_t<decltype(data->stroke_style)>(uint64_t(data->stroke_style) | uint64_t(value));
}

PointerRNA MaterialGPencilStyle_stroke_image_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->sima);
}

void MaterialGPencilStyle_stroke_image_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_GpencilColorData_stroke_image_set;
    fn(ptr, value, reports);
}

int MaterialGPencilStyle_fill_style_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (uint64_t(data->fill_style) & 3);
}

void MaterialGPencilStyle_fill_style_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->fill_style = std::remove_reference_t<decltype(data->fill_style)>(uint64_t(data->fill_style) & ~uint64_t(3));
    data->fill_style = std::remove_reference_t<decltype(data->fill_style)>(uint64_t(data->fill_style) | uint64_t(value));
}

int MaterialGPencilStyle_gradient_type_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return (uint64_t(data->gradient_type) & 1);
}

void MaterialGPencilStyle_gradient_type_set(PointerRNA *ptr, int value)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    data->gradient_type = std::remove_reference_t<decltype(data->gradient_type)>(uint64_t(data->gradient_type) & ~uint64_t(1));
    data->gradient_type = std::remove_reference_t<decltype(data->gradient_type)>(uint64_t(data->gradient_type) | uint64_t(value));
}

PointerRNA MaterialGPencilStyle_fill_image_get(PointerRNA *ptr)
{
    MaterialGPencilStyle *data = (MaterialGPencilStyle *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Image, data->ima);
}

void MaterialGPencilStyle_fill_image_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_GpencilColorData_fill_image_set;
    fn(ptr, value, reports);
}

bool MaterialGPencilStyle_is_stroke_visible_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GpencilColorData_is_stroke_visible_get;
    return fn(ptr);
}

bool MaterialGPencilStyle_is_fill_visible_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_GpencilColorData_is_fill_visible_get;
    return fn(ptr);
}

static PointerRNA MaterialLineArt_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MaterialLineArt_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MaterialLineArt_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MaterialLineArt_rna_properties_get(iter);
    }
}

void MaterialLineArt_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MaterialLineArt_rna_properties_get(iter);
    }
}

void MaterialLineArt_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MaterialLineArt_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MaterialLineArt_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

bool MaterialLineArt_use_material_mask_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void MaterialLineArt_use_material_mask_set(PointerRNA *ptr, bool value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1)); }
}

void MaterialLineArt_use_material_mask_bits_get(PointerRNA *ptr, bool values[8])
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 8; i++) {
        values[i] = ((uint64_t(data->material_mask_bits) & (uint64_t(1) << i)) != 0);
    }
}

void MaterialLineArt_use_material_mask_bits_set(PointerRNA *ptr, const bool values[8])
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 8; i++) {
        if (values[i]) { data->material_mask_bits = std::remove_reference_t<decltype(data->material_mask_bits)>(uint64_t(data->material_mask_bits) | (uint64_t(1) << i)); }
        else { data->material_mask_bits = std::remove_reference_t<decltype(data->material_mask_bits)>(uint64_t(data->material_mask_bits) & ~(uint64_t(1) << i)); }
    }
}

int MaterialLineArt_mat_occlusion_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (int)(data->mat_occlusion);
}

void MaterialLineArt_mat_occlusion_set(PointerRNA *ptr, int value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    data->mat_occlusion = (std::remove_reference_t<decltype(data->mat_occlusion)>)std::clamp(value, 0, 255);
}

int MaterialLineArt_intersection_priority_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return (int)(data->intersection_priority);
}

void MaterialLineArt_intersection_priority_set(PointerRNA *ptr, int value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    data->intersection_priority = (std::remove_reference_t<decltype(data->intersection_priority)>)std::clamp(value, 0, 255);
}

bool MaterialLineArt_use_intersection_priority_override_get(PointerRNA *ptr)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void MaterialLineArt_use_intersection_priority_override_set(PointerRNA *ptr, bool value)
{
    MaterialLineArt *data = (MaterialLineArt *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}





/* Material */
static EnumPropertyRNA rna_Material_surface_render_method_;
PropertyRNA &rna_Material_surface_render_method = reinterpret_cast<PropertyRNA &>(rna_Material_surface_render_method_);

static EnumPropertyRNA rna_Material_displacement_method_;
PropertyRNA &rna_Material_displacement_method = reinterpret_cast<PropertyRNA &>(rna_Material_displacement_method_);

static EnumPropertyRNA rna_Material_blend_method_;
PropertyRNA &rna_Material_blend_method = reinterpret_cast<PropertyRNA &>(rna_Material_blend_method_);

static FloatPropertyRNA rna_Material_alpha_threshold_;
PropertyRNA &rna_Material_alpha_threshold = reinterpret_cast<PropertyRNA &>(rna_Material_alpha_threshold_);

static BoolPropertyRNA rna_Material_use_transparency_overlap_;
PropertyRNA &rna_Material_use_transparency_overlap = reinterpret_cast<PropertyRNA &>(rna_Material_use_transparency_overlap_);

static BoolPropertyRNA rna_Material_show_transparent_back_;
PropertyRNA &rna_Material_show_transparent_back = reinterpret_cast<PropertyRNA &>(rna_Material_show_transparent_back_);

static BoolPropertyRNA rna_Material_use_backface_culling_;
PropertyRNA &rna_Material_use_backface_culling = reinterpret_cast<PropertyRNA &>(rna_Material_use_backface_culling_);

static BoolPropertyRNA rna_Material_use_backface_culling_shadow_;
PropertyRNA &rna_Material_use_backface_culling_shadow = reinterpret_cast<PropertyRNA &>(rna_Material_use_backface_culling_shadow_);

static BoolPropertyRNA rna_Material_use_backface_culling_lightprobe_volume_;
PropertyRNA &rna_Material_use_backface_culling_lightprobe_volume = reinterpret_cast<PropertyRNA &>(rna_Material_use_backface_culling_lightprobe_volume_);

static BoolPropertyRNA rna_Material_use_transparent_shadow_;
PropertyRNA &rna_Material_use_transparent_shadow = reinterpret_cast<PropertyRNA &>(rna_Material_use_transparent_shadow_);

static BoolPropertyRNA rna_Material_use_raytrace_refraction_;
PropertyRNA &rna_Material_use_raytrace_refraction = reinterpret_cast<PropertyRNA &>(rna_Material_use_raytrace_refraction_);

static BoolPropertyRNA rna_Material_use_screen_refraction_;
PropertyRNA &rna_Material_use_screen_refraction = reinterpret_cast<PropertyRNA &>(rna_Material_use_screen_refraction_);

static BoolPropertyRNA rna_Material_use_sss_translucency_;
PropertyRNA &rna_Material_use_sss_translucency = reinterpret_cast<PropertyRNA &>(rna_Material_use_sss_translucency_);

static FloatPropertyRNA rna_Material_refraction_depth_;
PropertyRNA &rna_Material_refraction_depth = reinterpret_cast<PropertyRNA &>(rna_Material_refraction_depth_);

static EnumPropertyRNA rna_Material_thickness_mode_;
PropertyRNA &rna_Material_thickness_mode = reinterpret_cast<PropertyRNA &>(rna_Material_thickness_mode_);

static BoolPropertyRNA rna_Material_use_thickness_from_shadow_;
PropertyRNA &rna_Material_use_thickness_from_shadow = reinterpret_cast<PropertyRNA &>(rna_Material_use_thickness_from_shadow_);

static EnumPropertyRNA rna_Material_volume_intersection_method_;
PropertyRNA &rna_Material_volume_intersection_method = reinterpret_cast<PropertyRNA &>(rna_Material_volume_intersection_method_);

static FloatPropertyRNA rna_Material_max_vertex_displacement_;
PropertyRNA &rna_Material_max_vertex_displacement = reinterpret_cast<PropertyRNA &>(rna_Material_max_vertex_displacement_);

static EnumPropertyRNA rna_Material_preview_render_type_;
PropertyRNA &rna_Material_preview_render_type = reinterpret_cast<PropertyRNA &>(rna_Material_preview_render_type_);

static BoolPropertyRNA rna_Material_use_preview_world_;
PropertyRNA &rna_Material_use_preview_world = reinterpret_cast<PropertyRNA &>(rna_Material_use_preview_world_);

static IntPropertyRNA rna_Material_pass_index_;
PropertyRNA &rna_Material_pass_index = reinterpret_cast<PropertyRNA &>(rna_Material_pass_index_);

static PointerPropertyRNA rna_Material_node_tree_;
PropertyRNA &rna_Material_node_tree = reinterpret_cast<PropertyRNA &>(rna_Material_node_tree_);

static BoolPropertyRNA rna_Material_use_nodes_;
PropertyRNA &rna_Material_use_nodes = reinterpret_cast<PropertyRNA &>(rna_Material_use_nodes_);

static PointerPropertyRNA rna_Material_animation_data_;
PropertyRNA &rna_Material_animation_data = reinterpret_cast<PropertyRNA &>(rna_Material_animation_data_);

static CollectionPropertyRNA rna_Material_texture_paint_images_;
PropertyRNA &rna_Material_texture_paint_images = reinterpret_cast<PropertyRNA &>(rna_Material_texture_paint_images_);

static CollectionPropertyRNA rna_Material_texture_paint_slots_;
PropertyRNA &rna_Material_texture_paint_slots = reinterpret_cast<PropertyRNA &>(rna_Material_texture_paint_slots_);

static IntPropertyRNA rna_Material_paint_active_slot_;
PropertyRNA &rna_Material_paint_active_slot = reinterpret_cast<PropertyRNA &>(rna_Material_paint_active_slot_);

static IntPropertyRNA rna_Material_paint_clone_slot_;
PropertyRNA &rna_Material_paint_clone_slot = reinterpret_cast<PropertyRNA &>(rna_Material_paint_clone_slot_);

static FloatPropertyRNA rna_Material_diffuse_color_;
PropertyRNA &rna_Material_diffuse_color = reinterpret_cast<PropertyRNA &>(rna_Material_diffuse_color_);

static FloatPropertyRNA rna_Material_specular_color_;
PropertyRNA &rna_Material_specular_color = reinterpret_cast<PropertyRNA &>(rna_Material_specular_color_);

static FloatPropertyRNA rna_Material_roughness_;
PropertyRNA &rna_Material_roughness = reinterpret_cast<PropertyRNA &>(rna_Material_roughness_);

static FloatPropertyRNA rna_Material_specular_intensity_;
PropertyRNA &rna_Material_specular_intensity = reinterpret_cast<PropertyRNA &>(rna_Material_specular_intensity_);

static FloatPropertyRNA rna_Material_metallic_;
PropertyRNA &rna_Material_metallic = reinterpret_cast<PropertyRNA &>(rna_Material_metallic_);

static FloatPropertyRNA rna_Material_line_color_;
PropertyRNA &rna_Material_line_color = reinterpret_cast<PropertyRNA &>(rna_Material_line_color_);

static IntPropertyRNA rna_Material_line_priority_;
PropertyRNA &rna_Material_line_priority = reinterpret_cast<PropertyRNA &>(rna_Material_line_priority_);

static PointerPropertyRNA rna_Material_grease_pencil_;
PropertyRNA &rna_Material_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_Material_grease_pencil_);

static BoolPropertyRNA rna_Material_is_grease_pencil_;
PropertyRNA &rna_Material_is_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_Material_is_grease_pencil_);

static PointerPropertyRNA rna_Material_lineart_;
PropertyRNA &rna_Material_lineart = reinterpret_cast<PropertyRNA &>(rna_Material_lineart_);

StructRNA *RNA_Material;
void register_struct_Material(BlenderRNA &brna)
{
	static const EnumPropertyItem rna_Material_surface_render_method_items[3] = {
		{0, "DITHERED", 0, "Dithered", "Allows for grayscale hashed transparency, and compatible with render passes and raytracing. Also known as deferred rendering."	},
		{1, "BLENDED", 0, "Blended", "Allows for colored transparency, but incompatible with render passes and raytracing. Also known as forward rendering."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Material_surface_render_method_ = {
		{&rna_Material_displacement_method, 	nullptr,
		-1, "surface_render_method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Surface Render Method",
		"Controls the blending and the compatibility with certain features",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_surface_render_method_get, Material_surface_render_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Material_surface_render_method_items, 2, 0
	};

	static const EnumPropertyItem rna_Material_displacement_method_items[4] = {
		{0, "BUMP", 0, "Bump Only", "Bump mapping to simulate the appearance of displacement"	},
		{1, "DISPLACEMENT", 0, "Displacement Only", "Use true displacement of surface only, requires fine subdivision"	},
		{2, "BOTH", 0, "Displacement and Bump", "Combination of true displacement and bump mapping for finer detail"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Material_displacement_method_ = {
		{&rna_Material_blend_method, 	&rna_Material_surface_render_method,
		-1, "displacement_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Displacement Method",
		"Method to use for the displacement",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, displacement_method), RawPropertyType(2), nullptr},
		Material_displacement_method_get, Material_displacement_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Material_displacement_method_items, 3, 0
	};

	static const EnumPropertyItem rna_Material_blend_method_items[5] = {
		{0, "OPAQUE", 0, "Opaque", "Render surface without transparency"	},
		{3, "CLIP", 0, "Alpha Clip", "Use the alpha threshold to clip the visibility (binary visibility)"	},
		{4, "HASHED", 0, "Alpha Hashed", "Use noise to dither the binary visibility (works well with multi-samples)"	},
		{5, "BLEND", 0, "Alpha Blend", "Render polygon transparent, depending on alpha channel of the texture"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Material_blend_method_ = {
		{&rna_Material_alpha_threshold, 	&rna_Material_displacement_method,
		-1, "blend_method", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Blend Mode",
		"Blend Mode for Transparent Faces (Deprecated: use \'surface_render_method\')",
		0, "Material",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_blend_method_get, Material_blend_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Material_blend_method_items, 4, 0
	};

	rna_Material_alpha_threshold_ = {
		{&rna_Material_use_transparency_overlap, 	&rna_Material_blend_method,
		-1, "alpha_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clip Threshold",
		"A pixel is rendered only if its alpha value is above this threshold",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, alpha_threshold), RawPropertyType(5), nullptr},
		Material_alpha_threshold_get, Material_alpha_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_Material_use_transparency_overlap_ = {
		{&rna_Material_show_transparent_back, 	&rna_Material_alpha_threshold,
		-1, "use_transparency_overlap", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Transparency Overlap",
		"Render multiple transparent layers (may introduce transparency sorting problems)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_transparency_overlap_get, Material_use_transparency_overlap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Material_show_transparent_back_ = {
		{&rna_Material_use_backface_culling, 	&rna_Material_use_transparency_overlap,
		-1, "show_transparent_back", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Backface",
		"Render multiple transparent layers (may introduce transparency sorting problems) (Deprecated: use \'use_tranparency_overlap\')",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_show_transparent_back_get, Material_show_transparent_back_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Material_use_backface_culling_ = {
		{&rna_Material_use_backface_culling_shadow, 	&rna_Material_show_transparent_back,
		-1, "use_backface_culling", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Backface Culling",
		"Use back face culling to hide the back side of faces",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_backface_culling_get, Material_use_backface_culling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Material_use_backface_culling_shadow_ = {
		{&rna_Material_use_backface_culling_lightprobe_volume, 	&rna_Material_use_backface_culling,
		-1, "use_backface_culling_shadow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shadow Backface Culling",
		"Use back face culling when casting shadows",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_backface_culling_shadow_get, Material_use_backface_culling_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Material_use_backface_culling_lightprobe_volume_ = {
		{&rna_Material_use_transparent_shadow, 	&rna_Material_use_backface_culling_shadow,
		-1, "use_backface_culling_lightprobe_volume", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Light Probe Volume Backface Culling",
		"Consider material single sided for light probe volume capture. Additionally helps rejecting probes inside the object to avoid light leaks.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_backface_culling_lightprobe_volume_get, Material_use_backface_culling_lightprobe_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Material_use_transparent_shadow_ = {
		{&rna_Material_use_raytrace_refraction, 	&rna_Material_use_backface_culling_lightprobe_volume,
		-1, "use_transparent_shadow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transparent Shadows",
		"Use transparent shadows for this material if it contains a Transparent BSDF, disabling will render faster but not give accurate shadows",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_transparent_shadow_get, Material_use_transparent_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Material_use_raytrace_refraction_ = {
		{&rna_Material_use_screen_refraction, 	&rna_Material_use_transparent_shadow,
		-1, "use_raytrace_refraction", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Raytrace Transmission",
		"Use raytracing to determine transmitted color instead of using only light probes. This prevents the surface from contributing to the lighting of surfaces not using this setting.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_raytrace_refraction_get, Material_use_raytrace_refraction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Material_use_screen_refraction_ = {
		{&rna_Material_use_sss_translucency, 	&rna_Material_use_raytrace_refraction,
		-1, "use_screen_refraction", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Raytrace Transmission",
		"Use raytracing to determine transmitted color instead of using only light probes. This prevents the surface from contributing to the lighting of surfaces not using this setting. Deprecated: use \'use_raytrace_refraction\'.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_screen_refraction_get, Material_use_screen_refraction_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Material_use_sss_translucency_ = {
		{&rna_Material_refraction_depth, 	&rna_Material_use_screen_refraction,
		-1, "use_sss_translucency", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subsurface Translucency",
		"Add translucency effect to subsurface (Deprecated)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_sss_translucency_get, Material_use_sss_translucency_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Material_refraction_depth_ = {
		{&rna_Material_thickness_mode, 	&rna_Material_use_sss_translucency,
		-1, "refraction_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Refraction Depth",
		"Approximate the thickness of the object to compute two refraction events (0 is disabled) (Deprecated)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, refract_depth), RawPropertyType(5), nullptr},
		Material_refraction_depth_get, Material_refraction_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_Material_thickness_mode_items[3] = {
		{0, "SPHERE", 0, "Sphere", "Approximate the object as a sphere whose diameter is equal to the thickness defined by the node tree"	},
		{1, "SLAB", 0, "Slab", "Approximate the object as an infinite slab of thickness defined by the node tree"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Material_thickness_mode_ = {
		{&rna_Material_use_thickness_from_shadow, 	&rna_Material_refraction_depth,
		-1, "thickness_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Thickness Mode",
		"Approximation used to model the light interactions inside the object",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, thickness_mode), RawPropertyType(2), nullptr},
		Material_thickness_mode_get, Material_thickness_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Material_thickness_mode_items, 2, 0
	};

	rna_Material_use_thickness_from_shadow_ = {
		{&rna_Material_volume_intersection_method, 	&rna_Material_thickness_mode,
		-1, "use_thickness_from_shadow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Thickness From Shadow",
		"Use the shadow maps from shadow casting lights to refine the thickness defined by the material node tree",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_thickness_from_shadow_get, Material_use_thickness_from_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Material_volume_intersection_method_items[3] = {
		{0, "FAST", 0, "Fast", "Each face is considered as a medium interface. Gives correct results for manifold geometry that contains no inner parts."	},
		{1, "ACCURATE", 0, "Accurate", "Faces are considered as medium interface only when they have different consecutive facing. Gives correct results as long as the max ray depth is not exceeded. Have significant memory overhead compared to the fast method."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Material_volume_intersection_method_ = {
		{&rna_Material_max_vertex_displacement, 	&rna_Material_use_thickness_from_shadow,
		-1, "volume_intersection_method", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Volume Intersection Method",
		"Determines which inner part of the mesh will produce volumetric effect",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, volume_intersection_method), RawPropertyType(2), nullptr},
		Material_volume_intersection_method_get, Material_volume_intersection_method_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Material_volume_intersection_method_items, 2, 0
	};

	rna_Material_max_vertex_displacement_ = {
		{&rna_Material_preview_render_type, 	&rna_Material_volume_intersection_method,
		-1, "max_vertex_displacement", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Vertex Displacement",
		"The max distance a vertex can be displaced. Displacements over this threshold may cause visibility issues.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, inflate_bounds), RawPropertyType(5), nullptr},
		Material_max_vertex_displacement_get, Material_max_vertex_displacement_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_Material_preview_render_type_items[8] = {
		{0, "FLAT", 713, "Flat", "Flat XY plane"	},
		{1, "SPHERE", 715, "Sphere", "Sphere"	},
		{2, "CUBE", 711, "Cube", "Cube"	},
		{10, "HAIR", 325, "Hair", "Hair strands"	},
		{3, "SHADERBALL", 714, "Shader Ball", "Shader ball"	},
		{12, "CLOTH", 710, "Cloth", "Cloth"	},
		{13, "FLUID", 712, "Fluid", "Fluid"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Material_preview_render_type_ = {
		{&rna_Material_use_preview_world, 	&rna_Material_max_vertex_displacement,
		-1, "preview_render_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Preview Render Type",
		"Type of preview render",
		0, "Material",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_update_previews, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, pr_type), RawPropertyType(2), nullptr},
		Material_preview_render_type_get, Material_preview_render_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Material_preview_render_type_items, 7, 1
	};

	rna_Material_use_preview_world_ = {
		{&rna_Material_pass_index, 	&rna_Material_preview_render_type,
		-1, "use_preview_world", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Preview World",
		"Use the current world background to light the preview render",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_update_previews, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_preview_world_get, Material_use_preview_world_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Material_pass_index_ = {
		{&rna_Material_node_tree, 	&rna_Material_use_preview_world,
		-1, "pass_index", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pass Index",
		"Index number for the \"Material Index\" render pass",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_update, 100663296, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, index), RawPropertyType(1), nullptr},
		Material_pass_index_get, Material_pass_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Material_node_tree_ = {
		{&rna_Material_use_nodes, 	&rna_Material_pass_index,
		-1, "node_tree", 8388672, 1, 0, 32, 0, PropertyPathTemplateType(0), "Node Tree",
		"Node tree for node based materials",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_node_tree_get, nullptr, nullptr, nullptr,RNA_NodeTree
	};

	static const DeprecatedRNA rna_Material_use_nodes_deprecated = {
	"Unused but kept for compatibility reasons. Setting the property has no effect, and getting it always returns True.",
		500, 600,
};

	rna_Material_use_nodes_ = {
		{&rna_Material_animation_data, 	&rna_Material_node_tree,
		-1, "use_nodes", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Nodes",
		"Use shader nodes to render the material",
		0, "*",
		&rna_Material_use_nodes_deprecated,		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_use_nodes_get, Material_use_nodes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Material_animation_data_ = {
		{&rna_Material_texture_paint_images, 	&rna_Material_use_nodes,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Material_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	rna_Material_texture_paint_images_ = {
		{&rna_Material_texture_paint_slots, 	&rna_Material_animation_data,
		-1, "texture_paint_images", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture Slot Images",
		"Texture images used for texture painting",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_texture_paint_images_begin, Material_texture_paint_images_next, Material_texture_paint_images_end, Material_texture_paint_images_get, nullptr, Material_texture_paint_images_lookup_int, Material_texture_paint_images_lookup_string, nullptr, RNA_Image
	};

	rna_Material_texture_paint_slots_ = {
		{&rna_Material_paint_active_slot, 	&rna_Material_texture_paint_images,
		-1, "texture_paint_slots", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Texture Slots",
		"Texture slots defining the mapping and influence of textures",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_texture_paint_slots_begin, Material_texture_paint_slots_next, Material_texture_paint_slots_end, Material_texture_paint_slots_get, nullptr, Material_texture_paint_slots_lookup_int, nullptr, nullptr, RNA_TexPaintSlot
	};

	rna_Material_paint_active_slot_ = {
		{&rna_Material_paint_clone_slot, 	&rna_Material_texture_paint_slots,
		-1, "paint_active_slot", 4194307, 0, 0, 4, 0, PropertyPathTemplateType(0), "Active Paint Texture Index",
		"Index of active texture paint slot",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Material_active_paint_texture_index_update, 119537664, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, paint_active_slot), RawPropertyType(1), nullptr},
		Material_paint_active_slot_get, Material_paint_active_slot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Material_paint_clone_slot_ = {
		{&rna_Material_diffuse_color, 	&rna_Material_paint_active_slot,
		-1, "paint_clone_slot", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Clone Paint Texture Index",
		"Index of clone texture paint slot",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 119537664, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, paint_clone_slot), RawPropertyType(1), nullptr},
		Material_paint_clone_slot_get, Material_paint_clone_slot_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_Material_diffuse_color_default[4] = {
		0.8000000119f,
		0.8000000119f,
		0.8000000119f,
		1.0f
	};
	rna_Material_diffuse_color_ = {
		{&rna_Material_specular_color, 	&rna_Material_paint_clone_slot,
		-1, "diffuse_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Diffuse Color",
		"Diffuse color of the material",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, r), RawPropertyType(5), nullptr},
		nullptr, nullptr, Material_diffuse_color_get, Material_diffuse_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.8000000119f, rna_Material_diffuse_color_default
	};

	static float rna_Material_specular_color_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Material_specular_color_ = {
		{&rna_Material_roughness, 	&rna_Material_diffuse_color,
		-1, "specular_color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Specular Color",
		"Specular color of the material",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, specr), RawPropertyType(5), nullptr},
		nullptr, nullptr, Material_specular_color_get, Material_specular_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 1.0f, rna_Material_specular_color_default
	};

	rna_Material_roughness_ = {
		{&rna_Material_specular_intensity, 	&rna_Material_specular_color,
		-1, "roughness", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Roughness",
		"Roughness of the material",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, roughness), RawPropertyType(5), nullptr},
		Material_roughness_get, Material_roughness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.4000000060f, nullptr
	};

	rna_Material_specular_intensity_ = {
		{&rna_Material_metallic, 	&rna_Material_roughness,
		-1, "specular_intensity", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Specular",
		"How intense (bright) the specular reflection is",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_draw_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, spec), RawPropertyType(5), nullptr},
		Material_specular_intensity_get, Material_specular_intensity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_Material_metallic_ = {
		{&rna_Material_line_color, 	&rna_Material_specular_intensity,
		-1, "metallic", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Metallic",
		"Amount of mirror reflection for raytrace",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, metallic), RawPropertyType(5), nullptr},
		Material_metallic_get, Material_metallic_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_Material_line_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_Material_line_color_ = {
		{&rna_Material_line_priority, 	&rna_Material_metallic,
		-1, "line_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Line Color",
		"Line color used for Freestyle line rendering",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Material_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, line_col), RawPropertyType(5), nullptr},
		nullptr, nullptr, Material_line_color_get, Material_line_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Material_line_color_default
	};

	rna_Material_line_priority_ = {
		{&rna_Material_grease_pencil, 	&rna_Material_line_color,
		-1, "line_priority", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Line Priority",
		"The line color of a higher priority is used at material boundaries",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Material, line_priority), RawPropertyType(1), nullptr},
		Material_line_priority_get, Material_line_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Material_grease_pencil_ = {
		{&rna_Material_is_grease_pencil, 	&rna_Material_line_priority,
		-1, "grease_pencil", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grease Pencil Settings",
		"Grease Pencil color settings for material",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_grease_pencil_get, nullptr, nullptr, nullptr,RNA_MaterialGPencilStyle
	};

	rna_Material_is_grease_pencil_ = {
		{&rna_Material_lineart, 	&rna_Material_grease_pencil,
		-1, "is_grease_pencil", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Grease Pencil",
		"True if this material has Grease Pencil data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_is_grease_pencil_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Material_lineart_ = {
		{nullptr, 	&rna_Material_is_grease_pencil,
		-1, "lineart", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Line Art Settings",
		"Line Art settings for material",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Material_lineart_get, nullptr, nullptr, nullptr,RNA_MaterialLineArt
	};

	StructRNA *srna = RNA_Material;
	srna->cont.properties = {&rna_Material_surface_render_method, &rna_Material_lineart};
	srna->identifier = "Material";
	srna->flag = 519;
	srna->name = "Material";
	srna->description = "Material data-block to define the appearance of geometric objects for rendering";
	srna->translation_context = "*";
	srna->icon = 199;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
};

/* Texture Paint Slot */
static CollectionPropertyRNA rna_TexPaintSlot_rna_properties_;
PropertyRNA &rna_TexPaintSlot_rna_properties = reinterpret_cast<PropertyRNA &>(rna_TexPaintSlot_rna_properties_);

static PointerPropertyRNA rna_TexPaintSlot_rna_type_;
PropertyRNA &rna_TexPaintSlot_rna_type = reinterpret_cast<PropertyRNA &>(rna_TexPaintSlot_rna_type_);

static StringPropertyRNA rna_TexPaintSlot_name_;
PropertyRNA &rna_TexPaintSlot_name = reinterpret_cast<PropertyRNA &>(rna_TexPaintSlot_name_);

static IntPropertyRNA rna_TexPaintSlot_icon_value_;
PropertyRNA &rna_TexPaintSlot_icon_value = reinterpret_cast<PropertyRNA &>(rna_TexPaintSlot_icon_value_);

static StringPropertyRNA rna_TexPaintSlot_uv_layer_;
PropertyRNA &rna_TexPaintSlot_uv_layer = reinterpret_cast<PropertyRNA &>(rna_TexPaintSlot_uv_layer_);

static BoolPropertyRNA rna_TexPaintSlot_is_valid_;
PropertyRNA &rna_TexPaintSlot_is_valid = reinterpret_cast<PropertyRNA &>(rna_TexPaintSlot_is_valid_);

StructRNA *RNA_TexPaintSlot;
void register_struct_TexPaintSlot(BlenderRNA &brna)
{
	rna_TexPaintSlot_rna_properties_ = {
		{&rna_TexPaintSlot_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexPaintSlot_rna_properties_begin, TexPaintSlot_rna_properties_next, TexPaintSlot_rna_properties_end, TexPaintSlot_rna_properties_get, nullptr, nullptr, TexPaintSlot_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_TexPaintSlot_rna_type_ = {
		{&rna_TexPaintSlot_name, 	&rna_TexPaintSlot_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexPaintSlot_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_TexPaintSlot_name_ = {
		{&rna_TexPaintSlot_icon_value, 	&rna_TexPaintSlot_rna_type,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the slot",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexPaintSlot_name_get, TexPaintSlot_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_TexPaintSlot_icon_value_ = {
		{&rna_TexPaintSlot_uv_layer, 	&rna_TexPaintSlot_name,
		-1, "icon_value", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Icon",
		"Paint slot icon",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexPaintSlot_icon_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_TexPaintSlot_uv_layer_ = {
		{&rna_TexPaintSlot_is_valid, 	&rna_TexPaintSlot_icon_value,
		-1, "uv_layer", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV Map",
		"Name of UV map",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Material_update, 291176448, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexPaintSlot_uv_layer_get, TexPaintSlot_uv_layer_length, TexPaintSlot_uv_layer_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_TexPaintSlot_is_valid_ = {
		{nullptr, 	&rna_TexPaintSlot_uv_layer,
		-1, "is_valid", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Valid",
		"Slot has a valid image and UV map",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		TexPaintSlot_is_valid_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_TexPaintSlot;
	srna->cont.properties = {&rna_TexPaintSlot_rna_properties, &rna_TexPaintSlot_is_valid};
	srna->identifier = "TexPaintSlot";
	srna->flag = 516;
	srna->name = "Texture Paint Slot";
	srna->description = "Slot that contains information about texture painting";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_TexPaintSlot_name;
	srna->iteratorproperty = &rna_TexPaintSlot_rna_properties;
};

/* Grease Pencil Color */
static CollectionPropertyRNA rna_MaterialGPencilStyle_rna_properties_;
PropertyRNA &rna_MaterialGPencilStyle_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_rna_properties_);

static PointerPropertyRNA rna_MaterialGPencilStyle_rna_type_;
PropertyRNA &rna_MaterialGPencilStyle_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_rna_type_);

static FloatPropertyRNA rna_MaterialGPencilStyle_color_;
PropertyRNA &rna_MaterialGPencilStyle_color = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_color_);

static FloatPropertyRNA rna_MaterialGPencilStyle_fill_color_;
PropertyRNA &rna_MaterialGPencilStyle_fill_color = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_fill_color_);

static FloatPropertyRNA rna_MaterialGPencilStyle_mix_color_;
PropertyRNA &rna_MaterialGPencilStyle_mix_color = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_mix_color_);

static FloatPropertyRNA rna_MaterialGPencilStyle_mix_factor_;
PropertyRNA &rna_MaterialGPencilStyle_mix_factor = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_mix_factor_);

static FloatPropertyRNA rna_MaterialGPencilStyle_mix_stroke_factor_;
PropertyRNA &rna_MaterialGPencilStyle_mix_stroke_factor = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_mix_stroke_factor_);

static FloatPropertyRNA rna_MaterialGPencilStyle_texture_angle_;
PropertyRNA &rna_MaterialGPencilStyle_texture_angle = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_texture_angle_);

static FloatPropertyRNA rna_MaterialGPencilStyle_texture_scale_;
PropertyRNA &rna_MaterialGPencilStyle_texture_scale = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_texture_scale_);

static FloatPropertyRNA rna_MaterialGPencilStyle_texture_offset_;
PropertyRNA &rna_MaterialGPencilStyle_texture_offset = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_texture_offset_);

static FloatPropertyRNA rna_MaterialGPencilStyle_pixel_size_;
PropertyRNA &rna_MaterialGPencilStyle_pixel_size = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_pixel_size_);

static BoolPropertyRNA rna_MaterialGPencilStyle_hide_;
PropertyRNA &rna_MaterialGPencilStyle_hide = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_hide_);

static BoolPropertyRNA rna_MaterialGPencilStyle_lock_;
PropertyRNA &rna_MaterialGPencilStyle_lock = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_lock_);

static BoolPropertyRNA rna_MaterialGPencilStyle_ghost_;
PropertyRNA &rna_MaterialGPencilStyle_ghost = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_ghost_);

static BoolPropertyRNA rna_MaterialGPencilStyle_texture_clamp_;
PropertyRNA &rna_MaterialGPencilStyle_texture_clamp = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_texture_clamp_);

static BoolPropertyRNA rna_MaterialGPencilStyle_flip_;
PropertyRNA &rna_MaterialGPencilStyle_flip = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_flip_);

static BoolPropertyRNA rna_MaterialGPencilStyle_use_overlap_strokes_;
PropertyRNA &rna_MaterialGPencilStyle_use_overlap_strokes = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_use_overlap_strokes_);

static BoolPropertyRNA rna_MaterialGPencilStyle_use_stroke_holdout_;
PropertyRNA &rna_MaterialGPencilStyle_use_stroke_holdout = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_use_stroke_holdout_);

static BoolPropertyRNA rna_MaterialGPencilStyle_use_fill_holdout_;
PropertyRNA &rna_MaterialGPencilStyle_use_fill_holdout = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_use_fill_holdout_);

static BoolPropertyRNA rna_MaterialGPencilStyle_show_stroke_;
PropertyRNA &rna_MaterialGPencilStyle_show_stroke = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_show_stroke_);

static BoolPropertyRNA rna_MaterialGPencilStyle_show_fill_;
PropertyRNA &rna_MaterialGPencilStyle_show_fill = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_show_fill_);

static EnumPropertyRNA rna_MaterialGPencilStyle_alignment_mode_;
PropertyRNA &rna_MaterialGPencilStyle_alignment_mode = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_alignment_mode_);

static FloatPropertyRNA rna_MaterialGPencilStyle_alignment_rotation_;
PropertyRNA &rna_MaterialGPencilStyle_alignment_rotation = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_alignment_rotation_);

static EnumPropertyRNA rna_MaterialGPencilStyle_placement_mode_;
PropertyRNA &rna_MaterialGPencilStyle_placement_mode = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_placement_mode_);

static IntPropertyRNA rna_MaterialGPencilStyle_placement_count_;
PropertyRNA &rna_MaterialGPencilStyle_placement_count = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_placement_count_);

static FloatPropertyRNA rna_MaterialGPencilStyle_placement_radius_spacing_;
PropertyRNA &rna_MaterialGPencilStyle_placement_radius_spacing = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_placement_radius_spacing_);

static FloatPropertyRNA rna_MaterialGPencilStyle_placement_density_;
PropertyRNA &rna_MaterialGPencilStyle_placement_density = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_placement_density_);

static BoolPropertyRNA rna_MaterialGPencilStyle_use_randomization_;
PropertyRNA &rna_MaterialGPencilStyle_use_randomization = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_use_randomization_);

static FloatPropertyRNA rna_MaterialGPencilStyle_random_size_factor_;
PropertyRNA &rna_MaterialGPencilStyle_random_size_factor = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_random_size_factor_);

static FloatPropertyRNA rna_MaterialGPencilStyle_random_strength_factor_;
PropertyRNA &rna_MaterialGPencilStyle_random_strength_factor = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_random_strength_factor_);

static FloatPropertyRNA rna_MaterialGPencilStyle_random_rotation_factor_;
PropertyRNA &rna_MaterialGPencilStyle_random_rotation_factor = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_random_rotation_factor_);

static FloatPropertyRNA rna_MaterialGPencilStyle_random_hue_factor_;
PropertyRNA &rna_MaterialGPencilStyle_random_hue_factor = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_random_hue_factor_);

static FloatPropertyRNA rna_MaterialGPencilStyle_random_saturation_factor_;
PropertyRNA &rna_MaterialGPencilStyle_random_saturation_factor = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_random_saturation_factor_);

static FloatPropertyRNA rna_MaterialGPencilStyle_random_value_factor_;
PropertyRNA &rna_MaterialGPencilStyle_random_value_factor = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_random_value_factor_);

static FloatPropertyRNA rna_MaterialGPencilStyle_random_noise_scale_;
PropertyRNA &rna_MaterialGPencilStyle_random_noise_scale = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_random_noise_scale_);

static IntPropertyRNA rna_MaterialGPencilStyle_pass_index_;
PropertyRNA &rna_MaterialGPencilStyle_pass_index = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_pass_index_);

static EnumPropertyRNA rna_MaterialGPencilStyle_mode_;
PropertyRNA &rna_MaterialGPencilStyle_mode = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_mode_);

static EnumPropertyRNA rna_MaterialGPencilStyle_stroke_style_;
PropertyRNA &rna_MaterialGPencilStyle_stroke_style = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_stroke_style_);

static PointerPropertyRNA rna_MaterialGPencilStyle_stroke_image_;
PropertyRNA &rna_MaterialGPencilStyle_stroke_image = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_stroke_image_);

static EnumPropertyRNA rna_MaterialGPencilStyle_fill_style_;
PropertyRNA &rna_MaterialGPencilStyle_fill_style = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_fill_style_);

static EnumPropertyRNA rna_MaterialGPencilStyle_gradient_type_;
PropertyRNA &rna_MaterialGPencilStyle_gradient_type = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_gradient_type_);

static PointerPropertyRNA rna_MaterialGPencilStyle_fill_image_;
PropertyRNA &rna_MaterialGPencilStyle_fill_image = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_fill_image_);

static BoolPropertyRNA rna_MaterialGPencilStyle_is_stroke_visible_;
PropertyRNA &rna_MaterialGPencilStyle_is_stroke_visible = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_is_stroke_visible_);

static BoolPropertyRNA rna_MaterialGPencilStyle_is_fill_visible_;
PropertyRNA &rna_MaterialGPencilStyle_is_fill_visible = reinterpret_cast<PropertyRNA &>(rna_MaterialGPencilStyle_is_fill_visible_);

StructRNA *RNA_MaterialGPencilStyle;
void register_struct_MaterialGPencilStyle(BlenderRNA &brna)
{
	rna_MaterialGPencilStyle_rna_properties_ = {
		{&rna_MaterialGPencilStyle_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_rna_properties_begin, MaterialGPencilStyle_rna_properties_next, MaterialGPencilStyle_rna_properties_end, MaterialGPencilStyle_rna_properties_get, nullptr, nullptr, MaterialGPencilStyle_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaterialGPencilStyle_rna_type_ = {
		{&rna_MaterialGPencilStyle_color, 	&rna_MaterialGPencilStyle_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MaterialGPencilStyle_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_MaterialGPencilStyle_color_ = {
		{&rna_MaterialGPencilStyle_fill_color, 	&rna_MaterialGPencilStyle_rna_type,
		-1, "color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, stroke_rgba), RawPropertyType(5), nullptr},
		nullptr, nullptr, MaterialGPencilStyle_color_get, MaterialGPencilStyle_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, rna_MaterialGPencilStyle_color_default
	};

	static float rna_MaterialGPencilStyle_fill_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_MaterialGPencilStyle_fill_color_ = {
		{&rna_MaterialGPencilStyle_mix_color, 	&rna_MaterialGPencilStyle_color,
		-1, "fill_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fill Color",
		"Color for filling region bounded by each stroke",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, fill_rgba), RawPropertyType(5), nullptr},
		nullptr, nullptr, MaterialGPencilStyle_fill_color_get, MaterialGPencilStyle_fill_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, rna_MaterialGPencilStyle_fill_color_default
	};

	static float rna_MaterialGPencilStyle_mix_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_MaterialGPencilStyle_mix_color_ = {
		{&rna_MaterialGPencilStyle_mix_factor, 	&rna_MaterialGPencilStyle_fill_color,
		-1, "mix_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mix Color",
		"Color for mixing with primary filling color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, mix_rgba), RawPropertyType(5), nullptr},
		nullptr, nullptr, MaterialGPencilStyle_mix_color_get, MaterialGPencilStyle_mix_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, rna_MaterialGPencilStyle_mix_color_default
	};

	rna_MaterialGPencilStyle_mix_factor_ = {
		{&rna_MaterialGPencilStyle_mix_stroke_factor, 	&rna_MaterialGPencilStyle_mix_color,
		-1, "mix_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mix",
		"Mix Factor",
		0, "GPencil",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, mix_factor), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_mix_factor_get, MaterialGPencilStyle_mix_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_mix_stroke_factor_ = {
		{&rna_MaterialGPencilStyle_texture_angle, 	&rna_MaterialGPencilStyle_mix_factor,
		-1, "mix_stroke_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mix",
		"Mix Stroke Factor",
		0, "GPencil",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, mix_stroke_factor), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_mix_stroke_factor_get, MaterialGPencilStyle_mix_stroke_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_texture_angle_ = {
		{&rna_MaterialGPencilStyle_texture_scale, 	&rna_MaterialGPencilStyle_mix_stroke_factor,
		-1, "texture_angle", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Angle",
		"Texture Orientation Angle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, texture_angle), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_texture_angle_get, MaterialGPencilStyle_texture_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_MaterialGPencilStyle_texture_scale_default[2] = {
		0.0f,
		0.0f
	};
	rna_MaterialGPencilStyle_texture_scale_ = {
		{&rna_MaterialGPencilStyle_texture_offset, 	&rna_MaterialGPencilStyle_texture_angle,
		-1, "texture_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Scale Factor for Texture",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, texture_scale), RawPropertyType(5), nullptr},
		nullptr, nullptr, MaterialGPencilStyle_texture_scale_get, MaterialGPencilStyle_texture_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MaterialGPencilStyle_texture_scale_default
	};

	static float rna_MaterialGPencilStyle_texture_offset_default[2] = {
		0.0f,
		0.0f
	};
	rna_MaterialGPencilStyle_texture_offset_ = {
		{&rna_MaterialGPencilStyle_pixel_size, 	&rna_MaterialGPencilStyle_texture_scale,
		-1, "texture_offset", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Offset",
		"Shift Texture in 2d Space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COORDS) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, texture_offset), RawPropertyType(5), nullptr},
		nullptr, nullptr, MaterialGPencilStyle_texture_offset_get, MaterialGPencilStyle_texture_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MaterialGPencilStyle_texture_offset_default
	};

	rna_MaterialGPencilStyle_pixel_size_ = {
		{&rna_MaterialGPencilStyle_hide, 	&rna_MaterialGPencilStyle_texture_offset,
		-1, "pixel_size", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "UV Factor",
		"Texture Pixel Size factor along the stroke",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, texture_pixsize), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_pixel_size_get, MaterialGPencilStyle_pixel_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 5000.0f, 1.0f, 5000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_hide_ = {
		{&rna_MaterialGPencilStyle_lock, 	&rna_MaterialGPencilStyle_pixel_size,
		-1, "hide", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Set color Visibility",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_hide_get, MaterialGPencilStyle_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_lock_ = {
		{&rna_MaterialGPencilStyle_ghost, 	&rna_MaterialGPencilStyle_hide,
		-1, "lock", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Locked",
		"Protect color from further editing and/or frame changes",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_lock_get, MaterialGPencilStyle_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_ghost_ = {
		{&rna_MaterialGPencilStyle_texture_clamp, 	&rna_MaterialGPencilStyle_lock,
		-1, "ghost", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show in Ghosts",
		"Display strokes using this color when showing onion skins",
		76, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_ghost_get, MaterialGPencilStyle_ghost_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_texture_clamp_ = {
		{&rna_MaterialGPencilStyle_flip, 	&rna_MaterialGPencilStyle_ghost,
		-1, "texture_clamp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clamp",
		"Do not repeat texture and clamp to one instance only",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_texture_clamp_get, MaterialGPencilStyle_texture_clamp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_flip_ = {
		{&rna_MaterialGPencilStyle_use_overlap_strokes, 	&rna_MaterialGPencilStyle_texture_clamp,
		-1, "flip", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Flip",
		"Flip filling colors",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_flip_get, MaterialGPencilStyle_flip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_use_overlap_strokes_ = {
		{&rna_MaterialGPencilStyle_use_stroke_holdout, 	&rna_MaterialGPencilStyle_flip,
		-1, "use_overlap_strokes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Self Overlap",
		"Disable stencil and overlap self intersections with alpha materials",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_use_overlap_strokes_get, MaterialGPencilStyle_use_overlap_strokes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_use_stroke_holdout_ = {
		{&rna_MaterialGPencilStyle_use_fill_holdout, 	&rna_MaterialGPencilStyle_use_overlap_strokes,
		-1, "use_stroke_holdout", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Holdout",
		"Remove the color from underneath this stroke by using it as a mask",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_use_stroke_holdout_get, MaterialGPencilStyle_use_stroke_holdout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_use_fill_holdout_ = {
		{&rna_MaterialGPencilStyle_show_stroke, 	&rna_MaterialGPencilStyle_use_stroke_holdout,
		-1, "use_fill_holdout", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Holdout",
		"Remove the color from underneath this stroke by using it as a mask",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_use_fill_holdout_get, MaterialGPencilStyle_use_fill_holdout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_MaterialGPencilStyle_show_stroke_deprecated = {
	"Unused but kept for compatibility with older versions of Blender.",
		510, 600,
};

	rna_MaterialGPencilStyle_show_stroke_ = {
		{&rna_MaterialGPencilStyle_show_fill, 	&rna_MaterialGPencilStyle_use_fill_holdout,
		-1, "show_stroke", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Stroke",
		"Show stroke lines of this material",
		0, "*",
		&rna_MaterialGPencilStyle_show_stroke_deprecated,		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_show_stroke_get, MaterialGPencilStyle_show_stroke_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const DeprecatedRNA rna_MaterialGPencilStyle_show_fill_deprecated = {
	"Unused but kept for compatibility with older versions of Blender.",
		510, 600,
};

	rna_MaterialGPencilStyle_show_fill_ = {
		{&rna_MaterialGPencilStyle_alignment_mode, 	&rna_MaterialGPencilStyle_show_stroke,
		-1, "show_fill", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Fill",
		"Show stroke fills of this material",
		0, "*",
		&rna_MaterialGPencilStyle_show_fill_deprecated,		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_show_fill_get, MaterialGPencilStyle_show_fill_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MaterialGPencilStyle_alignment_mode_items[4] = {
		{0, "PATH", 0, "Path", "Follow stroke drawing path and object rotation"	},
		{1, "OBJECT", 0, "Object", "Follow object rotation only"	},
		{2, "FIXED", 0, "Fixed", "Do not follow drawing path or object rotation and keeps aligned with viewport"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaterialGPencilStyle_alignment_mode_ = {
		{&rna_MaterialGPencilStyle_alignment_rotation, 	&rna_MaterialGPencilStyle_show_fill,
		-1, "alignment_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alignment",
		"Defines how align Dots and Boxes with drawing path and object rotation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, alignment_mode), RawPropertyType(0), nullptr},
		MaterialGPencilStyle_alignment_mode_get, MaterialGPencilStyle_alignment_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_alignment_mode_items, 3, 0
	};

	rna_MaterialGPencilStyle_alignment_rotation_ = {
		{&rna_MaterialGPencilStyle_placement_mode, 	&rna_MaterialGPencilStyle_alignment_mode,
		-1, "alignment_rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Additional rotation applied to dots and square texture of strokes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, alignment_rotation), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_alignment_rotation_get, MaterialGPencilStyle_alignment_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.5707963705f, 1.5707963705f, -1.5707963705f, 1.5707963705f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_MaterialGPencilStyle_placement_mode_items[4] = {
		{0, "COUNT", 0, "Count", "Place dots evenly along each segment of the stroke"	},
		{1, "RADIUS", 0, "Radius", "Place dots evenly with respect to radius"	},
		{2, "DENSITY", 0, "Density", "Place dots evenly along the length of the stroke"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaterialGPencilStyle_placement_mode_ = {
		{&rna_MaterialGPencilStyle_placement_count, 	&rna_MaterialGPencilStyle_alignment_rotation,
		-1, "placement_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Placement",
		"Defines how Dots or Squares are placed along strokes",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, placement_mode), RawPropertyType(0), nullptr},
		MaterialGPencilStyle_placement_mode_get, MaterialGPencilStyle_placement_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_placement_mode_items, 3, 1
	};

	rna_MaterialGPencilStyle_placement_count_ = {
		{&rna_MaterialGPencilStyle_placement_radius_spacing, 	&rna_MaterialGPencilStyle_placement_mode,
		-1, "placement_count", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Count",
		"Number of dots placed per segment",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, placement_count), RawPropertyType(0), nullptr},
		MaterialGPencilStyle_placement_count_get, MaterialGPencilStyle_placement_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_placement_radius_spacing_ = {
		{&rna_MaterialGPencilStyle_placement_density, 	&rna_MaterialGPencilStyle_placement_count,
		-1, "placement_radius_spacing", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Spacing",
		"Spacing between dots as a percentage of the diameter",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PERCENTAGE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, placement_radius_spacing), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_placement_radius_spacing_get, MaterialGPencilStyle_placement_radius_spacing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 1.0f, 200.0f, 0.0f, FLT_MAX, 10.0f, 0, nullptr, nullptr, 100.0f, nullptr
	};

	rna_MaterialGPencilStyle_placement_density_ = {
		{&rna_MaterialGPencilStyle_use_randomization, 	&rna_MaterialGPencilStyle_placement_radius_spacing,
		-1, "placement_density", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Density",
		"Density of dots along the stroke",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, placement_density), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_placement_density_get, MaterialGPencilStyle_placement_density_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 10.0f, nullptr
	};

	rna_MaterialGPencilStyle_use_randomization_ = {
		{&rna_MaterialGPencilStyle_random_size_factor, 	&rna_MaterialGPencilStyle_placement_density,
		-1, "use_randomization", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Randomization",
		"Use material randomization",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_use_randomization_get, MaterialGPencilStyle_use_randomization_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_random_size_factor_ = {
		{&rna_MaterialGPencilStyle_random_strength_factor, 	&rna_MaterialGPencilStyle_use_randomization,
		-1, "random_size_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Size",
		"Randomize the size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, random_size_factor), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_random_size_factor_get, MaterialGPencilStyle_random_size_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_random_strength_factor_ = {
		{&rna_MaterialGPencilStyle_random_rotation_factor, 	&rna_MaterialGPencilStyle_random_size_factor,
		-1, "random_strength_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Randomize strength",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, random_strength_factor), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_random_strength_factor_get, MaterialGPencilStyle_random_strength_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_random_rotation_factor_ = {
		{&rna_MaterialGPencilStyle_random_hue_factor, 	&rna_MaterialGPencilStyle_random_strength_factor,
		-1, "random_rotation_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Randomize texture rotation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, random_rotation_factor), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_random_rotation_factor_get, MaterialGPencilStyle_random_rotation_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_random_hue_factor_ = {
		{&rna_MaterialGPencilStyle_random_saturation_factor, 	&rna_MaterialGPencilStyle_random_rotation_factor,
		-1, "random_hue_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Hue",
		"Randomize color hue",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, random_hue_factor), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_random_hue_factor_get, MaterialGPencilStyle_random_hue_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_random_saturation_factor_ = {
		{&rna_MaterialGPencilStyle_random_value_factor, 	&rna_MaterialGPencilStyle_random_hue_factor,
		-1, "random_saturation_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Saturation",
		"Randomize color saturation",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, random_saturation_factor), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_random_saturation_factor_get, MaterialGPencilStyle_random_saturation_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_random_value_factor_ = {
		{&rna_MaterialGPencilStyle_random_noise_scale, 	&rna_MaterialGPencilStyle_random_saturation_factor,
		-1, "random_value_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value",
		"Randomize color value",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, random_value_factor), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_random_value_factor_get, MaterialGPencilStyle_random_value_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MaterialGPencilStyle_random_noise_scale_ = {
		{&rna_MaterialGPencilStyle_pass_index, 	&rna_MaterialGPencilStyle_random_value_factor,
		-1, "random_noise_scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Noise Scale",
		"Scale the noise frequency",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, random_noise_scale), RawPropertyType(5), nullptr},
		MaterialGPencilStyle_random_noise_scale_get, MaterialGPencilStyle_random_noise_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_MaterialGPencilStyle_pass_index_ = {
		{&rna_MaterialGPencilStyle_mode, 	&rna_MaterialGPencilStyle_random_noise_scale,
		-1, "pass_index", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pass Index",
		"Index number for the \"Color Index\" pass",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, index), RawPropertyType(1), nullptr},
		MaterialGPencilStyle_pass_index_get, MaterialGPencilStyle_pass_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_MaterialGPencilStyle_mode_items[4] = {
		{0, "LINE", 0, "Line", "Draw strokes using a continuous line"	},
		{1, "DOTS", 0, "Dots", "Draw strokes using separated dots"	},
		{2, "BOX", 0, "Squares", "Draw strokes using separated squares"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaterialGPencilStyle_mode_ = {
		{&rna_MaterialGPencilStyle_stroke_style, 	&rna_MaterialGPencilStyle_pass_index,
		-1, "mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Line Type",
		"Select line type for strokes",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, mode), RawPropertyType(0), nullptr},
		MaterialGPencilStyle_mode_get, MaterialGPencilStyle_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_MaterialGPencilStyle_stroke_style_items[3] = {
		{0, "SOLID", 0, "Solid", "Draw strokes with solid color"	},
		{1, "TEXTURE", 0, "Texture", "Draw strokes using texture"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaterialGPencilStyle_stroke_style_ = {
		{&rna_MaterialGPencilStyle_stroke_image, 	&rna_MaterialGPencilStyle_mode,
		-1, "stroke_style", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stroke Style",
		"Select style used to draw strokes",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, stroke_style), RawPropertyType(1), nullptr},
		MaterialGPencilStyle_stroke_style_get, MaterialGPencilStyle_stroke_style_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_stroke_style_items, 2, 0
	};

	rna_MaterialGPencilStyle_stroke_image_ = {
		{&rna_MaterialGPencilStyle_fill_style, 	&rna_MaterialGPencilStyle_stroke_style,
		-1, "stroke_image", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Image",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_stroke_image_get, MaterialGPencilStyle_stroke_image_set, nullptr, nullptr,RNA_Image
	};

	static const EnumPropertyItem rna_MaterialGPencilStyle_fill_style_items[4] = {
		{0, "SOLID", 0, "Solid", "Fill area with solid color"	},
		{1, "GRADIENT", 0, "Gradient", "Fill area with gradient color"	},
		{3, "TEXTURE", 0, "Texture", "Fill area with image texture"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaterialGPencilStyle_fill_style_ = {
		{&rna_MaterialGPencilStyle_gradient_type, 	&rna_MaterialGPencilStyle_stroke_image,
		-1, "fill_style", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fill Style",
		"Select style used to fill strokes",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, fill_style), RawPropertyType(1), nullptr},
		MaterialGPencilStyle_fill_style_get, MaterialGPencilStyle_fill_style_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_fill_style_items, 3, 0
	};

	static const EnumPropertyItem rna_MaterialGPencilStyle_gradient_type_items[3] = {
		{0, "LINEAR", 0, "Linear", "Fill area with gradient color"	},
		{1, "RADIAL", 0, "Radial", "Fill area with radial gradient"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_MaterialGPencilStyle_gradient_type_ = {
		{&rna_MaterialGPencilStyle_fill_image, 	&rna_MaterialGPencilStyle_fill_style,
		-1, "gradient_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Gradient Type",
		"Select type of gradient used to fill strokes",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialGPencilStyle, gradient_type), RawPropertyType(0), nullptr},
		MaterialGPencilStyle_gradient_type_get, MaterialGPencilStyle_gradient_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_MaterialGPencilStyle_gradient_type_items, 2, 0
	};

	rna_MaterialGPencilStyle_fill_image_ = {
		{&rna_MaterialGPencilStyle_is_stroke_visible, 	&rna_MaterialGPencilStyle_gradient_type,
		-1, "fill_image", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Image",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialGpencil_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_fill_image_get, MaterialGPencilStyle_fill_image_set, nullptr, nullptr,RNA_Image
	};

	rna_MaterialGPencilStyle_is_stroke_visible_ = {
		{&rna_MaterialGPencilStyle_is_fill_visible, 	&rna_MaterialGPencilStyle_fill_image,
		-1, "is_stroke_visible", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Stroke Visible",
		"True when opacity of stroke is set high enough to be visible",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_is_stroke_visible_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialGPencilStyle_is_fill_visible_ = {
		{nullptr, 	&rna_MaterialGPencilStyle_is_stroke_visible,
		-1, "is_fill_visible", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Fill Visible",
		"True when opacity of fill is set high enough to be visible",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialGPencilStyle_is_fill_visible_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MaterialGPencilStyle;
	srna->cont.properties = {&rna_MaterialGPencilStyle_rna_properties, &rna_MaterialGPencilStyle_is_fill_visible};
	srna->identifier = "MaterialGPencilStyle";
	srna->flag = 516;
	srna->name = "Grease Pencil Color";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaterialGPencilStyle_rna_properties;
	srna->path = rna_GpencilColorData_path;
};

/* Material Line Art */
static CollectionPropertyRNA rna_MaterialLineArt_rna_properties_;
PropertyRNA &rna_MaterialLineArt_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MaterialLineArt_rna_properties_);

static PointerPropertyRNA rna_MaterialLineArt_rna_type_;
PropertyRNA &rna_MaterialLineArt_rna_type = reinterpret_cast<PropertyRNA &>(rna_MaterialLineArt_rna_type_);

static BoolPropertyRNA rna_MaterialLineArt_use_material_mask_;
PropertyRNA &rna_MaterialLineArt_use_material_mask = reinterpret_cast<PropertyRNA &>(rna_MaterialLineArt_use_material_mask_);

static BoolPropertyRNA rna_MaterialLineArt_use_material_mask_bits_;
PropertyRNA &rna_MaterialLineArt_use_material_mask_bits = reinterpret_cast<PropertyRNA &>(rna_MaterialLineArt_use_material_mask_bits_);

static IntPropertyRNA rna_MaterialLineArt_mat_occlusion_;
PropertyRNA &rna_MaterialLineArt_mat_occlusion = reinterpret_cast<PropertyRNA &>(rna_MaterialLineArt_mat_occlusion_);

static IntPropertyRNA rna_MaterialLineArt_intersection_priority_;
PropertyRNA &rna_MaterialLineArt_intersection_priority = reinterpret_cast<PropertyRNA &>(rna_MaterialLineArt_intersection_priority_);

static BoolPropertyRNA rna_MaterialLineArt_use_intersection_priority_override_;
PropertyRNA &rna_MaterialLineArt_use_intersection_priority_override = reinterpret_cast<PropertyRNA &>(rna_MaterialLineArt_use_intersection_priority_override_);

StructRNA *RNA_MaterialLineArt;
void register_struct_MaterialLineArt(BlenderRNA &brna)
{
	rna_MaterialLineArt_rna_properties_ = {
		{&rna_MaterialLineArt_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialLineArt_rna_properties_begin, MaterialLineArt_rna_properties_next, MaterialLineArt_rna_properties_end, MaterialLineArt_rna_properties_get, nullptr, nullptr, MaterialLineArt_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MaterialLineArt_rna_type_ = {
		{&rna_MaterialLineArt_use_material_mask, 	&rna_MaterialLineArt_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialLineArt_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MaterialLineArt_use_material_mask_ = {
		{&rna_MaterialLineArt_use_material_mask_bits, 	&rna_MaterialLineArt_rna_type,
		-1, "use_material_mask", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Material Mask",
		"Use material masks to filter out occluded strokes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialLineArt_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialLineArt_use_material_mask_get, MaterialLineArt_use_material_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static bool rna_MaterialLineArt_use_material_mask_bits_default[8] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	rna_MaterialLineArt_use_material_mask_bits_ = {
		{&rna_MaterialLineArt_mat_occlusion, 	&rna_MaterialLineArt_use_material_mask,
		-1, "use_material_mask_bits", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mask",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {8, 0, 0}, 8,
		rna_MaterialLineArt_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MaterialLineArt_use_material_mask_bits_get, MaterialLineArt_use_material_mask_bits_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_MaterialLineArt_use_material_mask_bits_default
	};

	rna_MaterialLineArt_mat_occlusion_ = {
		{&rna_MaterialLineArt_intersection_priority, 	&rna_MaterialLineArt_use_material_mask_bits,
		-1, "mat_occlusion", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Effectiveness",
		"Faces with this material will behave as if it has set number of layers in occlusion",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialLineArt_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialLineArt, mat_occlusion), RawPropertyType(2), nullptr},
		MaterialLineArt_mat_occlusion_get, MaterialLineArt_mat_occlusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 5, 0, 255, 1, nullptr, nullptr, 1, nullptr
	};

	rna_MaterialLineArt_intersection_priority_ = {
		{&rna_MaterialLineArt_use_intersection_priority_override, 	&rna_MaterialLineArt_mat_occlusion,
		-1, "intersection_priority", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Intersection Priority",
		"The intersection line will be included into the object with the higher intersection priority value",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialLineArt_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MaterialLineArt, intersection_priority), RawPropertyType(2), nullptr},
		MaterialLineArt_intersection_priority_get, MaterialLineArt_intersection_priority_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MaterialLineArt_use_intersection_priority_override_ = {
		{nullptr, 	&rna_MaterialLineArt_intersection_priority,
		-1, "use_intersection_priority_override", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Intersection Priority",
		"Override object and collection intersection priority value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_MaterialLineArt_update, 387842048, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MaterialLineArt_use_intersection_priority_override_get, MaterialLineArt_use_intersection_priority_override_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MaterialLineArt;
	srna->cont.properties = {&rna_MaterialLineArt_rna_properties, &rna_MaterialLineArt_use_intersection_priority_override};
	srna->identifier = "MaterialLineArt";
	srna->flag = 516;
	srna->name = "Material Line Art";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MaterialLineArt_rna_properties;
	srna->path = rna_MaterialLineArt_path;
};


}  // namespace blender
