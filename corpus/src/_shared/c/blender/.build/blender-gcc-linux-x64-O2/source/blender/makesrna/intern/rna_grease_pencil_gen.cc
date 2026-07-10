
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

#include "rna_grease_pencil.cc"
#include "rna_grease_pencil_api.cc"

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

extern PropertyRNA &rna_GreasePencil_attributes;
extern PropertyRNA &rna_GreasePencil_color_attributes;
extern PropertyRNA &rna_GreasePencil_animation_data;
extern PropertyRNA &rna_GreasePencil_materials;
extern PropertyRNA &rna_GreasePencil_layers;
extern PropertyRNA &rna_GreasePencil_layer_groups;
extern PropertyRNA &rna_GreasePencil_root_nodes;
extern PropertyRNA &rna_GreasePencil_use_autolock_layers;
extern PropertyRNA &rna_GreasePencil_stroke_depth_order;
extern PropertyRNA &rna_GreasePencil_ghost_before_range;
extern PropertyRNA &rna_GreasePencil_ghost_after_range;
extern PropertyRNA &rna_GreasePencil_use_ghost_custom_colors;
extern PropertyRNA &rna_GreasePencil_before_color;
extern PropertyRNA &rna_GreasePencil_after_color;
extern PropertyRNA &rna_GreasePencil_onion_mode;
extern PropertyRNA &rna_GreasePencil_onion_keyframe_type;
extern PropertyRNA &rna_GreasePencil_use_onion_fade;
extern PropertyRNA &rna_GreasePencil_use_onion_loop;
extern PropertyRNA &rna_GreasePencil_onion_factor;

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


extern FunctionRNA *rna_GreasePencil_unit_test_compare_func;
extern PropertyRNA &rna_GreasePencil_unit_test_compare_grease_pencil;
extern PropertyRNA &rna_GreasePencil_unit_test_compare_threshold;
extern PropertyRNA &rna_GreasePencil_unit_test_compare_result;



extern PropertyRNA &rna_GreasePencilv3Layers_rna_properties;
extern PropertyRNA &rna_GreasePencilv3Layers_rna_type;
extern PropertyRNA &rna_GreasePencilv3Layers_active;

extern FunctionRNA *rna_GreasePencilv3Layers_new_func;
extern PropertyRNA &rna_GreasePencilv3Layers_new_name;
extern PropertyRNA &rna_GreasePencilv3Layers_new_set_active;
extern PropertyRNA &rna_GreasePencilv3Layers_new_layer_group;
extern PropertyRNA &rna_GreasePencilv3Layers_new_layer;

extern FunctionRNA *rna_GreasePencilv3Layers_remove_func;
extern PropertyRNA &rna_GreasePencilv3Layers_remove_layer;

extern FunctionRNA *rna_GreasePencilv3Layers_move_func;
extern PropertyRNA &rna_GreasePencilv3Layers_move_layer;
extern PropertyRNA &rna_GreasePencilv3Layers_move_type;

extern FunctionRNA *rna_GreasePencilv3Layers_move_top_func;
extern PropertyRNA &rna_GreasePencilv3Layers_move_top_layer;

extern FunctionRNA *rna_GreasePencilv3Layers_move_bottom_func;
extern PropertyRNA &rna_GreasePencilv3Layers_move_bottom_layer;

extern FunctionRNA *rna_GreasePencilv3Layers_move_to_layer_group_func;
extern PropertyRNA &rna_GreasePencilv3Layers_move_to_layer_group_layer;
extern PropertyRNA &rna_GreasePencilv3Layers_move_to_layer_group_layer_group;



extern PropertyRNA &rna_GreasePencilv3LayerGroup_rna_properties;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_rna_type;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_active;

extern FunctionRNA *rna_GreasePencilv3LayerGroup_new_func;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_new_name;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_new_parent_group;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_new_layer_group;

extern FunctionRNA *rna_GreasePencilv3LayerGroup_remove_func;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_remove_layer_group;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_remove_keep_children;

extern FunctionRNA *rna_GreasePencilv3LayerGroup_move_func;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_move_layer_group;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_move_type;

extern FunctionRNA *rna_GreasePencilv3LayerGroup_move_top_func;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_move_top_layer_group;

extern FunctionRNA *rna_GreasePencilv3LayerGroup_move_bottom_func;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_move_bottom_layer_group;

extern FunctionRNA *rna_GreasePencilv3LayerGroup_move_to_layer_group_func;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_move_to_layer_group_layer_group;
extern PropertyRNA &rna_GreasePencilv3LayerGroup_move_to_layer_group_parent_group;



extern PropertyRNA &rna_GreasePencilTreeNode_rna_properties;
extern PropertyRNA &rna_GreasePencilTreeNode_rna_type;
extern PropertyRNA &rna_GreasePencilTreeNode_name;
extern PropertyRNA &rna_GreasePencilTreeNode_hide;
extern PropertyRNA &rna_GreasePencilTreeNode_lock;
extern PropertyRNA &rna_GreasePencilTreeNode_select;
extern PropertyRNA &rna_GreasePencilTreeNode_use_onion_skinning;
extern PropertyRNA &rna_GreasePencilTreeNode_use_masks;
extern PropertyRNA &rna_GreasePencilTreeNode_channel_color;
extern PropertyRNA &rna_GreasePencilTreeNode_next_node;
extern PropertyRNA &rna_GreasePencilTreeNode_prev_node;
extern PropertyRNA &rna_GreasePencilTreeNode_parent_group;


extern PropertyRNA &rna_GreasePencilTreeNode_rna_properties;
extern PropertyRNA &rna_GreasePencilTreeNode_rna_type;
extern PropertyRNA &rna_GreasePencilTreeNode_name;
extern PropertyRNA &rna_GreasePencilTreeNode_hide;
extern PropertyRNA &rna_GreasePencilTreeNode_lock;
extern PropertyRNA &rna_GreasePencilTreeNode_select;
extern PropertyRNA &rna_GreasePencilTreeNode_use_onion_skinning;
extern PropertyRNA &rna_GreasePencilTreeNode_use_masks;
extern PropertyRNA &rna_GreasePencilTreeNode_channel_color;
extern PropertyRNA &rna_GreasePencilTreeNode_next_node;
extern PropertyRNA &rna_GreasePencilTreeNode_prev_node;
extern PropertyRNA &rna_GreasePencilTreeNode_parent_group;

extern PropertyRNA &rna_GreasePencilLayer_frames;
extern PropertyRNA &rna_GreasePencilLayer_mask_layers;
extern PropertyRNA &rna_GreasePencilLayer_lock_frame;
extern PropertyRNA &rna_GreasePencilLayer_opacity;
extern PropertyRNA &rna_GreasePencilLayer_tint_color;
extern PropertyRNA &rna_GreasePencilLayer_tint_factor;
extern PropertyRNA &rna_GreasePencilLayer_radius_offset;
extern PropertyRNA &rna_GreasePencilLayer_use_lights;
extern PropertyRNA &rna_GreasePencilLayer_pass_index;
extern PropertyRNA &rna_GreasePencilLayer_parent;
extern PropertyRNA &rna_GreasePencilLayer_parent_bone;
extern PropertyRNA &rna_GreasePencilLayer_translation;
extern PropertyRNA &rna_GreasePencilLayer_rotation;
extern PropertyRNA &rna_GreasePencilLayer_scale;
extern PropertyRNA &rna_GreasePencilLayer_viewlayer_render;
extern PropertyRNA &rna_GreasePencilLayer_use_viewlayer_masks;
extern PropertyRNA &rna_GreasePencilLayer_blend_mode;
extern PropertyRNA &rna_GreasePencilLayer_ignore_locked_materials;
extern PropertyRNA &rna_GreasePencilLayer_matrix_local;
extern PropertyRNA &rna_GreasePencilLayer_matrix_parent_inverse;

extern FunctionRNA *rna_GreasePencilLayer_get_frame_at_func;
extern PropertyRNA &rna_GreasePencilLayer_get_frame_at_frame_number;
extern PropertyRNA &rna_GreasePencilLayer_get_frame_at_frame;

extern FunctionRNA *rna_GreasePencilLayer_current_frame_func;
extern PropertyRNA &rna_GreasePencilLayer_current_frame_frame;



extern PropertyRNA &rna_GreasePencilFrames_rna_properties;
extern PropertyRNA &rna_GreasePencilFrames_rna_type;

extern FunctionRNA *rna_GreasePencilFrames_new_func;
extern PropertyRNA &rna_GreasePencilFrames_new_frame_number;
extern PropertyRNA &rna_GreasePencilFrames_new_frame;

extern FunctionRNA *rna_GreasePencilFrames_remove_func;
extern PropertyRNA &rna_GreasePencilFrames_remove_frame_number;

extern FunctionRNA *rna_GreasePencilFrames_copy_func;
extern PropertyRNA &rna_GreasePencilFrames_copy_from_frame_number;
extern PropertyRNA &rna_GreasePencilFrames_copy_to_frame_number;
extern PropertyRNA &rna_GreasePencilFrames_copy_instance_drawing;
extern PropertyRNA &rna_GreasePencilFrames_copy_copy;

extern FunctionRNA *rna_GreasePencilFrames_move_func;
extern PropertyRNA &rna_GreasePencilFrames_move_from_frame_number;
extern PropertyRNA &rna_GreasePencilFrames_move_to_frame_number;
extern PropertyRNA &rna_GreasePencilFrames_move_moved;



extern PropertyRNA &rna_GreasePencilLayerMasks_rna_properties;
extern PropertyRNA &rna_GreasePencilLayerMasks_rna_type;
extern PropertyRNA &rna_GreasePencilLayerMasks_active_mask_index;

extern FunctionRNA *rna_GreasePencilLayerMasks_add_func;
extern PropertyRNA &rna_GreasePencilLayerMasks_add_layer;
extern PropertyRNA &rna_GreasePencilLayerMasks_add_mask;

extern FunctionRNA *rna_GreasePencilLayerMasks_remove_func;
extern PropertyRNA &rna_GreasePencilLayerMasks_remove_mask;



extern PropertyRNA &rna_GreasePencilLayerMask_rna_properties;
extern PropertyRNA &rna_GreasePencilLayerMask_rna_type;
extern PropertyRNA &rna_GreasePencilLayerMask_name;
extern PropertyRNA &rna_GreasePencilLayerMask_hide;
extern PropertyRNA &rna_GreasePencilLayerMask_invert;


extern PropertyRNA &rna_GreasePencilTreeNode_rna_properties;
extern PropertyRNA &rna_GreasePencilTreeNode_rna_type;
extern PropertyRNA &rna_GreasePencilTreeNode_name;
extern PropertyRNA &rna_GreasePencilTreeNode_hide;
extern PropertyRNA &rna_GreasePencilTreeNode_lock;
extern PropertyRNA &rna_GreasePencilTreeNode_select;
extern PropertyRNA &rna_GreasePencilTreeNode_use_onion_skinning;
extern PropertyRNA &rna_GreasePencilTreeNode_use_masks;
extern PropertyRNA &rna_GreasePencilTreeNode_channel_color;
extern PropertyRNA &rna_GreasePencilTreeNode_next_node;
extern PropertyRNA &rna_GreasePencilTreeNode_prev_node;
extern PropertyRNA &rna_GreasePencilTreeNode_parent_group;

extern PropertyRNA &rna_GreasePencilLayerGroup_is_expanded;
extern PropertyRNA &rna_GreasePencilLayerGroup_color_tag;
extern PropertyRNA &rna_GreasePencilLayerGroup_children;


extern PropertyRNA &rna_GreasePencilFrame_rna_properties;
extern PropertyRNA &rna_GreasePencilFrame_rna_type;
extern PropertyRNA &rna_GreasePencilFrame_drawing;
extern PropertyRNA &rna_GreasePencilFrame_frame_number;
extern PropertyRNA &rna_GreasePencilFrame_select;
extern PropertyRNA &rna_GreasePencilFrame_keyframe_type;


extern PropertyRNA &rna_GreasePencilDrawing_rna_properties;
extern PropertyRNA &rna_GreasePencilDrawing_rna_type;
extern PropertyRNA &rna_GreasePencilDrawing_type;
extern PropertyRNA &rna_GreasePencilDrawing_user_count;
extern PropertyRNA &rna_GreasePencilDrawing_curve_offsets;
extern PropertyRNA &rna_GreasePencilDrawing_attributes;
extern PropertyRNA &rna_GreasePencilDrawing_color_attributes;

extern FunctionRNA *rna_GreasePencilDrawing_add_strokes_func;
extern PropertyRNA &rna_GreasePencilDrawing_add_strokes_sizes;

extern FunctionRNA *rna_GreasePencilDrawing_remove_strokes_func;
extern PropertyRNA &rna_GreasePencilDrawing_remove_strokes_indices;

extern FunctionRNA *rna_GreasePencilDrawing_resize_strokes_func;
extern PropertyRNA &rna_GreasePencilDrawing_resize_strokes_sizes;
extern PropertyRNA &rna_GreasePencilDrawing_resize_strokes_indices;

extern FunctionRNA *rna_GreasePencilDrawing_reorder_strokes_func;
extern PropertyRNA &rna_GreasePencilDrawing_reorder_strokes_new_indices;

extern FunctionRNA *rna_GreasePencilDrawing_set_types_func;
extern PropertyRNA &rna_GreasePencilDrawing_set_types_type;
extern PropertyRNA &rna_GreasePencilDrawing_set_types_indices;

extern FunctionRNA *rna_GreasePencilDrawing_tag_positions_changed_func;
extern FunctionRNA *rna_GreasePencilDrawing_vertex_group_assign_func;
extern PropertyRNA &rna_GreasePencilDrawing_vertex_group_assign_vgroup_name;
extern PropertyRNA &rna_GreasePencilDrawing_vertex_group_assign_indices_ptr;
extern PropertyRNA &rna_GreasePencilDrawing_vertex_group_assign_weight;

extern FunctionRNA *rna_GreasePencilDrawing_vertex_group_remove_func;
extern PropertyRNA &rna_GreasePencilDrawing_vertex_group_remove_vgroup_name;
extern PropertyRNA &rna_GreasePencilDrawing_vertex_group_remove_indices_ptr;

extern FunctionRNA *rna_GreasePencilDrawing_set_vertex_weights_func;
extern PropertyRNA &rna_GreasePencilDrawing_set_vertex_weights_vertex_group_name;
extern PropertyRNA &rna_GreasePencilDrawing_set_vertex_weights_indices;
extern PropertyRNA &rna_GreasePencilDrawing_set_vertex_weights_weights;
extern PropertyRNA &rna_GreasePencilDrawing_set_vertex_weights_assign_mode;


int GreasePencil_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_length;
    return fn(ptr);
}

static PointerRNA GreasePencil_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void GreasePencil_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencil_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencil_attributes_get(iter);
    }
}

void GreasePencil_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_attributes_get(iter);
    }
}

void GreasePencil_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool GreasePencil_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    GreasePencil_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencil_attributes_get(&iter); }
    }

    GreasePencil_attributes_end(&iter);

    return found;
}

bool GreasePencil_attributes_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_AttributeGroup_lookup_string;
    return fn(ptr, key, r_ptr);
}

int GreasePencil_color_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_color_length;
    return fn(ptr);
}

static PointerRNA GreasePencil_color_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void GreasePencil_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencil_color_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_color_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencil_color_attributes_get(iter);
    }
}

void GreasePencil_color_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_color_attributes_get(iter);
    }
}

void GreasePencil_color_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool GreasePencil_color_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    GreasePencil_color_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencil_color_attributes_get(&iter); }
    }

    GreasePencil_color_attributes_end(&iter);

    return found;
}

PointerRNA GreasePencil_animation_data_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

int GreasePencil_materials_length(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return (data->material_array == nullptr) ? 0 : data->material_array_num;
}

static PointerRNA GreasePencil_materials_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Material, rna_iterator_array_dereference_get(iter));
}

void GreasePencil_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencil_materials;

    rna_iterator_array_begin(iter, ptr, data->material_array, sizeof(data->material_array[0]), data->material_array_num, 0, nullptr);

    if (iter->valid) {
        iter->ptr = GreasePencil_materials_get(iter);
    }
}

void GreasePencil_materials_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_materials_get(iter);
    }
}

void GreasePencil_materials_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool GreasePencil_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    GreasePencil_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencil_materials_get(&iter); }
    }

    GreasePencil_materials_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool GreasePencil_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GreasePencil_materials_begin(&iter, ptr);

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
        GreasePencil_materials_next(&iter);
    }
    GreasePencil_materials_end(&iter);

    return found;
}

int GreasePencil_layers_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_grease_pencil_layers_length;
    return fn(ptr);
}

static PointerRNA GreasePencil_layers_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_iterator_grease_pencil_layers_get;
    return fn(iter);
}

void GreasePencil_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencil_layers;

    PropCollectionBeginFunc fn = rna_iterator_grease_pencil_layers_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencil_layers_get(iter);
    }
}

void GreasePencil_layers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_grease_pencil_layers_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_layers_get(iter);
    }
}

void GreasePencil_layers_end(CollectionPropertyIterator *iter)
{
}

int GreasePencil_layer_groups_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_grease_pencil_layer_groups_length;
    return fn(ptr);
}

static PointerRNA GreasePencil_layer_groups_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_iterator_grease_pencil_layer_groups_get;
    return fn(iter);
}

void GreasePencil_layer_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencil_layer_groups;

    PropCollectionBeginFunc fn = rna_iterator_grease_pencil_layer_groups_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencil_layer_groups_get(iter);
    }
}

void GreasePencil_layer_groups_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_grease_pencil_layer_groups_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_layer_groups_get(iter);
    }
}

void GreasePencil_layer_groups_end(CollectionPropertyIterator *iter)
{
}

int GreasePencil_root_nodes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_grease_pencil_root_nodes_length;
    return fn(ptr);
}

static PointerRNA GreasePencil_root_nodes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_iterator_grease_pencil_root_nodes_get;
    return fn(iter);
}

void GreasePencil_root_nodes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencil_root_nodes;

    PropCollectionBeginFunc fn = rna_iterator_grease_pencil_root_nodes_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencil_root_nodes_get(iter);
    }
}

void GreasePencil_root_nodes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_grease_pencil_root_nodes_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencil_root_nodes_get(iter);
    }
}

void GreasePencil_root_nodes_end(CollectionPropertyIterator *iter)
{
}

bool GreasePencil_use_autolock_layers_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void GreasePencil_use_autolock_layers_set(PointerRNA *ptr, bool value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

int GreasePencil_stroke_depth_order_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return (uint64_t(data->flag) & 4);
}

void GreasePencil_stroke_depth_order_set(PointerRNA *ptr, int value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int GreasePencil_ghost_before_range_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return (int)(data->onion_skinning_settings.num_frames_before);
}

void GreasePencil_ghost_before_range_set(PointerRNA *ptr, int value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    data->onion_skinning_settings.num_frames_before = (std::remove_reference_t<decltype(data->onion_skinning_settings.num_frames_before)>)std::clamp(value, 0, 120);
}

int GreasePencil_ghost_after_range_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return (int)(data->onion_skinning_settings.num_frames_after);
}

void GreasePencil_ghost_after_range_set(PointerRNA *ptr, int value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    data->onion_skinning_settings.num_frames_after = (std::remove_reference_t<decltype(data->onion_skinning_settings.num_frames_after)>)std::clamp(value, 0, 120);
}

bool GreasePencil_use_ghost_custom_colors_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return ((uint64_t(data->onion_skinning_settings.flag) & 1) != 0);
}

void GreasePencil_use_ghost_custom_colors_set(PointerRNA *ptr, bool value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    if (value) { data->onion_skinning_settings.flag = std::remove_reference_t<decltype(data->onion_skinning_settings.flag)>(uint64_t(data->onion_skinning_settings.flag) | 1); }
    else { data->onion_skinning_settings.flag = std::remove_reference_t<decltype(data->onion_skinning_settings.flag)>(uint64_t(data->onion_skinning_settings.flag) & ~uint64_t(1)); }
}

void GreasePencil_before_color_get(PointerRNA *ptr, float values[3])
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->onion_skinning_settings.color_before)[i]);
    }
}

void GreasePencil_before_color_set(PointerRNA *ptr, const float values[3])
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->onion_skinning_settings.color_before)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

void GreasePencil_after_color_get(PointerRNA *ptr, float values[3])
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->onion_skinning_settings.color_after)[i]);
    }
}

void GreasePencil_after_color_set(PointerRNA *ptr, const float values[3])
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->onion_skinning_settings.color_after)[i] = std::clamp(values[i], 0.0f, 1.0f);
    }
}

int GreasePencil_onion_mode_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return (int)(data->onion_skinning_settings.mode);
}

void GreasePencil_onion_mode_set(PointerRNA *ptr, int value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    data->onion_skinning_settings.mode = (std::remove_reference_t<decltype(data->onion_skinning_settings.mode)>)value;
}

int GreasePencil_onion_keyframe_type_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return (int)(data->onion_skinning_settings.filter);
}

void GreasePencil_onion_keyframe_type_set(PointerRNA *ptr, int value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    data->onion_skinning_settings.filter = (std::remove_reference_t<decltype(data->onion_skinning_settings.filter)>)value;
}

bool GreasePencil_use_onion_fade_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return ((uint64_t(data->onion_skinning_settings.flag) & 2) != 0);
}

void GreasePencil_use_onion_fade_set(PointerRNA *ptr, bool value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    if (value) { data->onion_skinning_settings.flag = std::remove_reference_t<decltype(data->onion_skinning_settings.flag)>(uint64_t(data->onion_skinning_settings.flag) | 2); }
    else { data->onion_skinning_settings.flag = std::remove_reference_t<decltype(data->onion_skinning_settings.flag)>(uint64_t(data->onion_skinning_settings.flag) & ~uint64_t(2)); }
}

bool GreasePencil_use_onion_loop_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return ((uint64_t(data->onion_skinning_settings.flag) & 4) != 0);
}

void GreasePencil_use_onion_loop_set(PointerRNA *ptr, bool value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    if (value) { data->onion_skinning_settings.flag = std::remove_reference_t<decltype(data->onion_skinning_settings.flag)>(uint64_t(data->onion_skinning_settings.flag) | 4); }
    else { data->onion_skinning_settings.flag = std::remove_reference_t<decltype(data->onion_skinning_settings.flag)>(uint64_t(data->onion_skinning_settings.flag) & ~uint64_t(4)); }
}

float GreasePencil_onion_factor_get(PointerRNA *ptr)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    return (float)(data->onion_skinning_settings.opacity);
}

void GreasePencil_onion_factor_set(PointerRNA *ptr, float value)
{
    GreasePencil *data = (GreasePencil *)(ptr->data);
    data->onion_skinning_settings.opacity = (std::remove_reference_t<decltype(data->onion_skinning_settings.opacity)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA GreasePencilv3Layers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GreasePencilv3Layers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilv3Layers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilv3Layers_rna_properties_get(iter);
    }
}

void GreasePencilv3Layers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilv3Layers_rna_properties_get(iter);
    }
}

void GreasePencilv3Layers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilv3Layers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GreasePencilv3Layers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA GreasePencilv3Layers_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_GreasePencil_active_layer_get;
    return fn(ptr);
}

void GreasePencilv3Layers_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_GreasePencil_active_layer_set;
    fn(ptr, value, reports);
}

static PointerRNA GreasePencilv3LayerGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GreasePencilv3LayerGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilv3LayerGroup_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilv3LayerGroup_rna_properties_get(iter);
    }
}

void GreasePencilv3LayerGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilv3LayerGroup_rna_properties_get(iter);
    }
}

void GreasePencilv3LayerGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilv3LayerGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GreasePencilv3LayerGroup_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA GreasePencilv3LayerGroup_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_GreasePencil_active_group_get;
    return fn(ptr);
}

void GreasePencilv3LayerGroup_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_GreasePencil_active_group_set;
    fn(ptr, value, reports);
}

static PointerRNA GreasePencilTreeNode_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GreasePencilTreeNode_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilTreeNode_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilTreeNode_rna_properties_get(iter);
    }
}

void GreasePencilTreeNode_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilTreeNode_rna_properties_get(iter);
    }
}

void GreasePencilTreeNode_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilTreeNode_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GreasePencilTreeNode_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void GreasePencilTreeNode_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_GreasePencilTreeNode_name_get;
    fn(ptr, value);
}

int GreasePencilTreeNode_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_GreasePencilTreeNode_name_length;
    return fn(ptr);
}

void GreasePencilTreeNode_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_GreasePencilTreeNode_name_set;
    fn(ptr, value);
}

bool GreasePencilTreeNode_hide_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void GreasePencilTreeNode_hide_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool GreasePencilTreeNode_lock_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void GreasePencilTreeNode_lock_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool GreasePencilTreeNode_select_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void GreasePencilTreeNode_select_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool GreasePencilTreeNode_use_onion_skinning_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return !((uint64_t(data->flag) & 32) != 0);
}

void GreasePencilTreeNode_use_onion_skinning_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 32); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(32)); }
}

bool GreasePencilTreeNode_use_masks_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return !((uint64_t(data->flag) & 128) != 0);
}

void GreasePencilTreeNode_use_masks_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 128); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(128)); }
}

void GreasePencilTreeNode_channel_color_get(PointerRNA *ptr, float values[3])
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void GreasePencilTreeNode_channel_color_set(PointerRNA *ptr, const float values[3])
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

PointerRNA GreasePencilTreeNode_next_node_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_GreasePencilTreeNode, data->next);
}

PointerRNA GreasePencilTreeNode_prev_node_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_GreasePencilTreeNode, data->prev);
}

PointerRNA GreasePencilTreeNode_parent_group_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_GreasePencilTreeNode_parent_layer_group_get;
    return fn(ptr);
}

int GreasePencilLayer_frames_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_GreasePencilLayer_frames_length;
    return fn(ptr);
}

static PointerRNA GreasePencilLayer_frames_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_GreasePencilLayer_frames_get;
    return fn(iter);
}

void GreasePencilLayer_frames_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilLayer_frames;

    PropCollectionBeginFunc fn = rna_GreasePencilLayer_frames_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayer_frames_get(iter);
    }
}

void GreasePencilLayer_frames_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayer_frames_get(iter);
    }
}

void GreasePencilLayer_frames_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool GreasePencilLayer_frames_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_GreasePencilLayer_frames_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA GreasePencilLayer_mask_layers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_GreasePencilLayerMask, rna_iterator_listbase_get(iter));
}

void GreasePencilLayer_mask_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilLayer_mask_layers;

    rna_iterator_listbase_begin(iter, ptr, &data->masks, nullptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayer_mask_layers_get(iter);
    }
}

void GreasePencilLayer_mask_layers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayer_mask_layers_get(iter);
    }
}

void GreasePencilLayer_mask_layers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilLayer_mask_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    GreasePencilLayer_mask_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencilLayer_mask_layers_get(&iter); }
    }

    GreasePencilLayer_mask_layers_end(&iter);

    return found;
}

int GreasePencilLayerMask_name_length(PointerRNA *);
void GreasePencilLayerMask_name_get(PointerRNA *, char *);

bool GreasePencilLayer_mask_layers_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GreasePencilLayer_mask_layers_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = GreasePencilLayerMask_name_length(&iter.ptr);
            if (namelen < 1024) {
                GreasePencilLayerMask_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                GreasePencilLayerMask_name_get(&iter.ptr, name);
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
        GreasePencilLayer_mask_layers_next(&iter);
    }
    GreasePencilLayer_mask_layers_end(&iter);

    return found;
}

bool GreasePencilLayer_lock_frame_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void GreasePencilLayer_lock_frame_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

float GreasePencilLayer_opacity_get(PointerRNA *ptr)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    return (float)(data->opacity);
}

void GreasePencilLayer_opacity_set(PointerRNA *ptr, float value)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    data->opacity = (std::remove_reference_t<decltype(data->opacity)>)std::clamp(value, 0.0f, 1.0f);
}

void GreasePencilLayer_tint_color_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_GreasePencilLayer_tint_color_get;
    fn(ptr, values);
}

void GreasePencilLayer_tint_color_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_GreasePencilLayer_tint_color_set;
    fn(ptr, values);
}

float GreasePencilLayer_tint_factor_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_GreasePencilLayer_tint_factor_get;
    return fn(ptr);
}

void GreasePencilLayer_tint_factor_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_GreasePencilLayer_tint_factor_set;
    fn(ptr, value);
}

float GreasePencilLayer_radius_offset_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_GreasePencilLayer_radius_offset_get;
    return fn(ptr);
}

void GreasePencilLayer_radius_offset_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_GreasePencilLayer_radius_offset_set;
    fn(ptr, value);
}

bool GreasePencilLayer_use_lights_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void GreasePencilLayer_use_lights_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16)); }
}

int GreasePencilLayer_pass_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_GreasePencilLayer_pass_index_get;
    return fn(ptr);
}

void GreasePencilLayer_pass_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_GreasePencilLayer_pass_index_set;
    fn(ptr, value);
}

PointerRNA GreasePencilLayer_parent_get(PointerRNA *ptr)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->parent);
}

void GreasePencilLayer_parent_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_GreasePencilLayer_parent_set;
    fn(ptr, value, reports);
}

void GreasePencilLayer_parent_bone_get(PointerRNA *ptr, char *value)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    if (data->parsubstr == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->parsubstr);
}

int GreasePencilLayer_parent_bone_length(PointerRNA *ptr)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    return (data->parsubstr == nullptr) ? 0 : strlen(data->parsubstr);
}

void GreasePencilLayer_parent_bone_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_GreasePencilLayer_bone_set;
    fn(ptr, value);
}

void GreasePencilLayer_translation_get(PointerRNA *ptr, float values[3])
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->translation)[i]);
    }
}

void GreasePencilLayer_translation_set(PointerRNA *ptr, const float values[3])
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->translation)[i] = values[i];
    }
}

void GreasePencilLayer_rotation_get(PointerRNA *ptr, float values[3])
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->rotation)[i]);
    }
}

void GreasePencilLayer_rotation_set(PointerRNA *ptr, const float values[3])
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->rotation)[i] = values[i];
    }
}

void GreasePencilLayer_scale_get(PointerRNA *ptr, float values[3])
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale)[i]);
    }
}

void GreasePencilLayer_scale_set(PointerRNA *ptr, const float values[3])
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->scale)[i] = values[i];
    }
}

void GreasePencilLayer_viewlayer_render_get(PointerRNA *ptr, char *value)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    if (data->viewlayername == nullptr) {
        *value = '\0';
        return;
    }
    strcpy(value, data->viewlayername);
}

int GreasePencilLayer_viewlayer_render_length(PointerRNA *ptr)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    return (data->viewlayername == nullptr) ? 0 : strlen(data->viewlayername);
}

void GreasePencilLayer_viewlayer_render_set(PointerRNA *ptr, const char *value)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    if (data->viewlayername != nullptr) { MEM_delete(data->viewlayername); }
    const size_t length = strlen(value);
    if (length > 0) {
        data->viewlayername = MEM_new_array_uninitialized<char>(length + 1, __func__);
        memcpy(data->viewlayername, value, length + 1);
    } else { data->viewlayername = nullptr; }
}

bool GreasePencilLayer_use_viewlayer_masks_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return !((uint64_t(data->flag) & 256) != 0);
}

void GreasePencilLayer_use_viewlayer_masks_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

int GreasePencilLayer_blend_mode_get(PointerRNA *ptr)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    return (int)(data->blend_mode);
}

void GreasePencilLayer_blend_mode_set(PointerRNA *ptr, int value)
{
    GreasePencilLayer *data = (GreasePencilLayer *)(ptr->data);
    data->blend_mode = (std::remove_reference_t<decltype(data->blend_mode)>)value;
}

bool GreasePencilLayer_ignore_locked_materials_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return ((uint64_t(data->flag) & 512) != 0);
}

void GreasePencilLayer_ignore_locked_materials_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

void GreasePencilLayer_matrix_local_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_GreasePencilLayer_matrix_local_get;
    fn(ptr, values);
}

void GreasePencilLayer_matrix_parent_inverse_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_GreasePencilLayer_matrix_parent_inverse_get;
    fn(ptr, values);
}

static PointerRNA GreasePencilFrames_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GreasePencilFrames_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilFrames_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilFrames_rna_properties_get(iter);
    }
}

void GreasePencilFrames_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilFrames_rna_properties_get(iter);
    }
}

void GreasePencilFrames_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilFrames_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GreasePencilFrames_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA GreasePencilLayerMasks_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GreasePencilLayerMasks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilLayerMasks_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayerMasks_rna_properties_get(iter);
    }
}

void GreasePencilLayerMasks_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayerMasks_rna_properties_get(iter);
    }
}

void GreasePencilLayerMasks_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilLayerMasks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GreasePencilLayerMasks_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int GreasePencilLayerMasks_active_mask_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_grease_pencil_active_mask_index_get;
    return fn(ptr);
}

void GreasePencilLayerMasks_active_mask_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_grease_pencil_active_mask_index_set;
    fn(ptr, value);
}

static PointerRNA GreasePencilLayerMask_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GreasePencilLayerMask_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilLayerMask_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayerMask_rna_properties_get(iter);
    }
}

void GreasePencilLayerMask_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayerMask_rna_properties_get(iter);
    }
}

void GreasePencilLayerMask_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilLayerMask_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GreasePencilLayerMask_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void GreasePencilLayerMask_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_grease_pencil_layer_mask_name_get;
    fn(ptr, value);
}

int GreasePencilLayerMask_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_grease_pencil_layer_mask_name_length;
    return fn(ptr);
}

void GreasePencilLayerMask_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_grease_pencil_layer_mask_name_set;
    fn(ptr, value);
}

bool GreasePencilLayerMask_hide_get(PointerRNA *ptr)
{
    GreasePencilLayerMask *data = (GreasePencilLayerMask *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void GreasePencilLayerMask_hide_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerMask *data = (GreasePencilLayerMask *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool GreasePencilLayerMask_invert_get(PointerRNA *ptr)
{
    GreasePencilLayerMask *data = (GreasePencilLayerMask *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void GreasePencilLayerMask_invert_set(PointerRNA *ptr, bool value)
{
    GreasePencilLayerMask *data = (GreasePencilLayerMask *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool GreasePencilLayerGroup_is_expanded_get(PointerRNA *ptr)
{
    GreasePencilLayerTreeNode *data = (GreasePencilLayerTreeNode *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void GreasePencilLayerGroup_is_expanded_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_GreasePencilLayerGroup_is_expanded_set;
    fn(ptr, value);
}

int GreasePencilLayerGroup_color_tag_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_group_color_tag_get;
    return fn(ptr);
}

void GreasePencilLayerGroup_color_tag_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_group_color_tag_set;
    fn(ptr, value);
}

int GreasePencilLayerGroup_children_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_GreasePencilLayerGroup_children_length;
    return fn(ptr);
}

static PointerRNA GreasePencilLayerGroup_children_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_GreasePencilLayerGroup_children_get;
    return fn(iter);
}

void GreasePencilLayerGroup_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilLayerGroup_children;

    PropCollectionBeginFunc fn = rna_GreasePencilLayerGroup_children_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilLayerGroup_children_get(iter);
    }
}

void GreasePencilLayerGroup_children_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_GreasePencilLayerGroup_children_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilLayerGroup_children_get(iter);
    }
}

void GreasePencilLayerGroup_children_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilLayerGroup_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_GreasePencilLayerGroup_children_lookup_int;
    return fn(ptr, index, r_ptr);
}

int GreasePencilTreeNode_name_length(PointerRNA *);
void GreasePencilTreeNode_name_get(PointerRNA *, char *);

bool GreasePencilLayerGroup_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    GreasePencilLayerGroup_children_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = GreasePencilTreeNode_name_length(&iter.ptr);
            if (namelen < 1024) {
                GreasePencilTreeNode_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                GreasePencilTreeNode_name_get(&iter.ptr, name);
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
        GreasePencilLayerGroup_children_next(&iter);
    }
    GreasePencilLayerGroup_children_end(&iter);

    return found;
}

static PointerRNA GreasePencilFrame_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GreasePencilFrame_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilFrame_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilFrame_rna_properties_get(iter);
    }
}

void GreasePencilFrame_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilFrame_rna_properties_get(iter);
    }
}

void GreasePencilFrame_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilFrame_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GreasePencilFrame_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA GreasePencilFrame_drawing_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Frame_drawing_get;
    return fn(ptr);
}

void GreasePencilFrame_drawing_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Frame_drawing_set;
    fn(ptr, value, reports);
}

int GreasePencilFrame_frame_number_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Frame_frame_number_get;
    return fn(ptr);
}

bool GreasePencilFrame_select_get(PointerRNA *ptr)
{
    GreasePencilFrame *data = (GreasePencilFrame *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void GreasePencilFrame_select_set(PointerRNA *ptr, bool value)
{
    GreasePencilFrame *data = (GreasePencilFrame *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int GreasePencilFrame_keyframe_type_get(PointerRNA *ptr)
{
    GreasePencilFrame *data = (GreasePencilFrame *)(ptr->data);
    return (int)(data->type);
}

void GreasePencilFrame_keyframe_type_set(PointerRNA *ptr, int value)
{
    GreasePencilFrame *data = (GreasePencilFrame *)(ptr->data);
    data->type = (std::remove_reference_t<decltype(data->type)>)value;
}

static PointerRNA GreasePencilDrawing_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GreasePencilDrawing_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilDrawing_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilDrawing_rna_properties_get(iter);
    }
}

void GreasePencilDrawing_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilDrawing_rna_properties_get(iter);
    }
}

void GreasePencilDrawing_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GreasePencilDrawing_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GreasePencilDrawing_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int GreasePencilDrawing_type_get(PointerRNA *ptr)
{
    GreasePencilDrawing *data = (GreasePencilDrawing *)(ptr->data);
    return (int)(data->base.type);
}

int GreasePencilDrawing_user_count_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Drawing_user_count_get;
    return fn(ptr);
}

int GreasePencilDrawing_curve_offsets_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_GreasePencilDrawing_curve_offset_data_length;
    return fn(ptr);
}

static PointerRNA GreasePencilDrawing_curve_offsets_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_IntAttributeValue, rna_iterator_array_get(iter));
}

void GreasePencilDrawing_curve_offsets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilDrawing_curve_offsets;

    PropCollectionBeginFunc fn = rna_GreasePencilDrawing_curve_offset_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilDrawing_curve_offsets_get(iter);
    }
}

void GreasePencilDrawing_curve_offsets_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilDrawing_curve_offsets_get(iter);
    }
}

void GreasePencilDrawing_curve_offsets_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool GreasePencilDrawing_curve_offsets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_GreasePencilDrawing_curve_offset_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

int GreasePencilDrawing_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_length;
    return fn(ptr);
}

static PointerRNA GreasePencilDrawing_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void GreasePencilDrawing_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilDrawing_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilDrawing_attributes_get(iter);
    }
}

void GreasePencilDrawing_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilDrawing_attributes_get(iter);
    }
}

void GreasePencilDrawing_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool GreasePencilDrawing_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    GreasePencilDrawing_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencilDrawing_attributes_get(&iter); }
    }

    GreasePencilDrawing_attributes_end(&iter);

    return found;
}

bool GreasePencilDrawing_attributes_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_AttributeGroup_lookup_string;
    return fn(ptr, key, r_ptr);
}

int GreasePencilDrawing_color_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_color_length;
    return fn(ptr);
}

static PointerRNA GreasePencilDrawing_color_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void GreasePencilDrawing_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GreasePencilDrawing_color_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_color_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GreasePencilDrawing_color_attributes_get(iter);
    }
}

void GreasePencilDrawing_color_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GreasePencilDrawing_color_attributes_get(iter);
    }
}

void GreasePencilDrawing_color_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool GreasePencilDrawing_color_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    GreasePencilDrawing_color_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = GreasePencilDrawing_color_attributes_get(&iter); }
    }

    GreasePencilDrawing_color_attributes_end(&iter);

    return found;
}

const char * GreasePencil_unit_test_compare_func(GreasePencil *_self, GreasePencil *grease_pencil, float threshold)
{
	return rna_GreasePencil_unit_test_compare(_self, grease_pencil, threshold);
}

static void GreasePencil_unit_test_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	GreasePencil *grease_pencil;
	float threshold;
	const char * result;
	char *_data, *_retdata;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	grease_pencil = *((GreasePencil **)_data);
	_data += 8;
	threshold = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_GreasePencil_unit_test_compare(_self, grease_pencil, threshold);
	*((const char * *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

const char * rna_GreasePencil_unit_test_compare(GreasePencil *_self, GreasePencil *grease_pencil, float threshold);

GreasePencilLayer *GreasePencilv3Layers_new_func(GreasePencil *_self, const char * name, bool set_active, PointerRNA *layer_group)
{
	return rna_GreasePencil_layer_new(_self, name, set_active, layer_group);
}

static void GreasePencilv3Layers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	const char * name;
	bool set_active;
	PointerRNA *layer_group;
	GreasePencilLayer *layer;
	char *_data, *_retdata;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	set_active = *((bool *)_data);
	_data += 8;
	layer_group = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	layer = rna_GreasePencil_layer_new(_self, name, set_active, layer_group);
	*((GreasePencilLayer **)_retdata) = layer;
}

void GreasePencilv3Layers_remove_func(GreasePencil *_self, PointerRNA *layer)
{
	rna_GreasePencil_layer_remove(_self, layer);
}

static void GreasePencilv3Layers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	
	rna_GreasePencil_layer_remove(_self, layer);
}

void GreasePencilv3Layers_move_func(GreasePencil *_self, PointerRNA *layer, int type)
{
	rna_GreasePencil_layer_move(_self, layer, type);
}

static void GreasePencilv3Layers_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer;
	int type;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	_data += 8;
	type = *((int *)_data);
	
	rna_GreasePencil_layer_move(_self, layer, type);
}

void GreasePencilv3Layers_move_top_func(GreasePencil *_self, PointerRNA *layer)
{
	rna_GreasePencil_layer_move_top(_self, layer);
}

static void GreasePencilv3Layers_move_top_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	
	rna_GreasePencil_layer_move_top(_self, layer);
}

void GreasePencilv3Layers_move_bottom_func(GreasePencil *_self, PointerRNA *layer)
{
	rna_GreasePencil_layer_move_bottom(_self, layer);
}

static void GreasePencilv3Layers_move_bottom_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	
	rna_GreasePencil_layer_move_bottom(_self, layer);
}

void GreasePencilv3Layers_move_to_layer_group_func(GreasePencil *_self, PointerRNA *layer, PointerRNA *layer_group)
{
	rna_GreasePencil_layer_move_to_layer_group(_self, layer, layer_group);
}

static void GreasePencilv3Layers_move_to_layer_group_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer;
	PointerRNA *layer_group;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	_data += 8;
	layer_group = *((PointerRNA **)_data);
	
	rna_GreasePencil_layer_move_to_layer_group(_self, layer, layer_group);
}

/* Repeated prototypes to detect errors */

GreasePencilLayer *rna_GreasePencil_layer_new(GreasePencil *_self, const char * name, bool set_active, PointerRNA *layer_group);
void rna_GreasePencil_layer_remove(GreasePencil *_self, PointerRNA *layer);
void rna_GreasePencil_layer_move(GreasePencil *_self, PointerRNA *layer, int type);
void rna_GreasePencil_layer_move_top(GreasePencil *_self, PointerRNA *layer);
void rna_GreasePencil_layer_move_bottom(GreasePencil *_self, PointerRNA *layer);
void rna_GreasePencil_layer_move_to_layer_group(GreasePencil *_self, PointerRNA *layer, PointerRNA *layer_group);

PointerRNA GreasePencilv3LayerGroup_new_func(GreasePencil *_self, const char * name, PointerRNA *parent_group)
{
	return rna_GreasePencil_layer_group_new(_self, name, parent_group);
}

static void GreasePencilv3LayerGroup_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	const char * name;
	PointerRNA *parent_group;
	PointerRNA layer_group;
	char *_data, *_retdata;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	parent_group = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	layer_group = rna_GreasePencil_layer_group_new(_self, name, parent_group);
	*reinterpret_cast<PointerRNA *>(_retdata) = layer_group;
}

void GreasePencilv3LayerGroup_remove_func(GreasePencil *_self, PointerRNA *layer_group, bool keep_children)
{
	rna_GreasePencil_layer_group_remove(_self, layer_group, keep_children);
}

static void GreasePencilv3LayerGroup_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer_group;
	bool keep_children;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer_group = *((PointerRNA **)_data);
	_data += 8;
	keep_children = *((bool *)_data);
	
	rna_GreasePencil_layer_group_remove(_self, layer_group, keep_children);
}

void GreasePencilv3LayerGroup_move_func(GreasePencil *_self, PointerRNA *layer_group, int type)
{
	rna_GreasePencil_layer_group_move(_self, layer_group, type);
}

static void GreasePencilv3LayerGroup_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer_group;
	int type;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer_group = *((PointerRNA **)_data);
	_data += 8;
	type = *((int *)_data);
	
	rna_GreasePencil_layer_group_move(_self, layer_group, type);
}

void GreasePencilv3LayerGroup_move_top_func(GreasePencil *_self, PointerRNA *layer_group)
{
	rna_GreasePencil_layer_group_move_top(_self, layer_group);
}

static void GreasePencilv3LayerGroup_move_top_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer_group;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer_group = *((PointerRNA **)_data);
	
	rna_GreasePencil_layer_group_move_top(_self, layer_group);
}

void GreasePencilv3LayerGroup_move_bottom_func(GreasePencil *_self, PointerRNA *layer_group)
{
	rna_GreasePencil_layer_group_move_bottom(_self, layer_group);
}

static void GreasePencilv3LayerGroup_move_bottom_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer_group;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer_group = *((PointerRNA **)_data);
	
	rna_GreasePencil_layer_group_move_bottom(_self, layer_group);
}

void GreasePencilv3LayerGroup_move_to_layer_group_func(GreasePencil *_self, PointerRNA *layer_group, PointerRNA *parent_group)
{
	rna_GreasePencil_layer_group_move_to_layer_group(_self, layer_group, parent_group);
}

static void GreasePencilv3LayerGroup_move_to_layer_group_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencil *_self;
	PointerRNA *layer_group;
	PointerRNA *parent_group;
	char *_data;
	
	_self = (GreasePencil *)_ptr->data;
	_data = (char *)_parms->data;
	layer_group = *((PointerRNA **)_data);
	_data += 8;
	parent_group = *((PointerRNA **)_data);
	
	rna_GreasePencil_layer_group_move_to_layer_group(_self, layer_group, parent_group);
}

/* Repeated prototypes to detect errors */

PointerRNA rna_GreasePencil_layer_group_new(GreasePencil *_self, const char * name, PointerRNA *parent_group);
void rna_GreasePencil_layer_group_remove(GreasePencil *_self, PointerRNA *layer_group, bool keep_children);
void rna_GreasePencil_layer_group_move(GreasePencil *_self, PointerRNA *layer_group, int type);
void rna_GreasePencil_layer_group_move_top(GreasePencil *_self, PointerRNA *layer_group);
void rna_GreasePencil_layer_group_move_bottom(GreasePencil *_self, PointerRNA *layer_group);
void rna_GreasePencil_layer_group_move_to_layer_group(GreasePencil *_self, PointerRNA *layer_group, PointerRNA *parent_group);


GreasePencilFrame *GreasePencilLayer_get_frame_at_func(GreasePencilLayer *_self, int frame_number)
{
	return rna_GreasePencilLayer_get_frame_at(_self, frame_number);
}

static void GreasePencilLayer_get_frame_at_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencilLayer *_self;
	int frame_number;
	GreasePencilFrame *frame;
	char *_data, *_retdata;
	
	_self = (GreasePencilLayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame_number = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	frame = rna_GreasePencilLayer_get_frame_at(_self, frame_number);
	*((GreasePencilFrame **)_retdata) = frame;
}

GreasePencilFrame *GreasePencilLayer_current_frame_func(GreasePencilLayer *_self, bContext *C)
{
	return rna_GreasePencilLayer_current_frame(_self, C);
}

static void GreasePencilLayer_current_frame_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencilLayer *_self;
	GreasePencilFrame *frame;
	char *_data, *_retdata;
	
	_self = (GreasePencilLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	frame = rna_GreasePencilLayer_current_frame(_self, C);
	*((GreasePencilFrame **)_retdata) = frame;
}

/* Repeated prototypes to detect errors */

GreasePencilFrame *rna_GreasePencilLayer_get_frame_at(GreasePencilLayer *_self, int frame_number);
GreasePencilFrame *rna_GreasePencilLayer_current_frame(GreasePencilLayer *_self, bContext *C);

GreasePencilFrame *GreasePencilFrames_new_func(ID *_selfid, GreasePencilLayer *_self, ReportList *reports, int frame_number)
{
	return rna_Frames_frame_new(_selfid, _self, reports, frame_number);
}

static void GreasePencilFrames_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilLayer *_self;
	int frame_number;
	GreasePencilFrame *frame;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilLayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame_number = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	frame = rna_Frames_frame_new(_selfid, _self, reports, frame_number);
	*((GreasePencilFrame **)_retdata) = frame;
}

void GreasePencilFrames_remove_func(ID *_selfid, GreasePencilLayer *_self, ReportList *reports, int frame_number)
{
	rna_Frames_frame_remove(_selfid, _self, reports, frame_number);
}

static void GreasePencilFrames_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilLayer *_self;
	int frame_number;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilLayer *)_ptr->data;
	_data = (char *)_parms->data;
	frame_number = *((int *)_data);
	
	rna_Frames_frame_remove(_selfid, _self, reports, frame_number);
}

GreasePencilFrame *GreasePencilFrames_copy_func(ID *_selfid, GreasePencilLayer *_self, ReportList *reports, int from_frame_number, int to_frame_number, bool instance_drawing)
{
	return rna_Frames_frame_copy(_selfid, _self, reports, from_frame_number, to_frame_number, instance_drawing);
}

static void GreasePencilFrames_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilLayer *_self;
	int from_frame_number;
	int to_frame_number;
	bool instance_drawing;
	GreasePencilFrame *copy;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilLayer *)_ptr->data;
	_data = (char *)_parms->data;
	from_frame_number = *((int *)_data);
	_data += 8;
	to_frame_number = *((int *)_data);
	_data += 8;
	instance_drawing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	copy = rna_Frames_frame_copy(_selfid, _self, reports, from_frame_number, to_frame_number, instance_drawing);
	*((GreasePencilFrame **)_retdata) = copy;
}

GreasePencilFrame *GreasePencilFrames_move_func(ID *_selfid, GreasePencilLayer *_self, ReportList *reports, int from_frame_number, int to_frame_number)
{
	return rna_Frames_frame_move(_selfid, _self, reports, from_frame_number, to_frame_number);
}

static void GreasePencilFrames_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilLayer *_self;
	int from_frame_number;
	int to_frame_number;
	GreasePencilFrame *moved;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilLayer *)_ptr->data;
	_data = (char *)_parms->data;
	from_frame_number = *((int *)_data);
	_data += 8;
	to_frame_number = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	moved = rna_Frames_frame_move(_selfid, _self, reports, from_frame_number, to_frame_number);
	*((GreasePencilFrame **)_retdata) = moved;
}

/* Repeated prototypes to detect errors */

GreasePencilFrame *rna_Frames_frame_new(ID *_selfid, GreasePencilLayer *_self, ReportList *reports, int frame_number);
void rna_Frames_frame_remove(ID *_selfid, GreasePencilLayer *_self, ReportList *reports, int frame_number);
GreasePencilFrame *rna_Frames_frame_copy(ID *_selfid, GreasePencilLayer *_self, ReportList *reports, int from_frame_number, int to_frame_number, bool instance_drawing);
GreasePencilFrame *rna_Frames_frame_move(ID *_selfid, GreasePencilLayer *_self, ReportList *reports, int from_frame_number, int to_frame_number);

GreasePencilLayerMask *GreasePencilLayerMasks_add_func(GreasePencilLayer *_self, ReportList *reports, GreasePencilLayer *layer)
{
	return rna_grease_pencil_layer_mask_add(_self, reports, layer);
}

static void GreasePencilLayerMasks_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencilLayer *_self;
	GreasePencilLayer *layer;
	GreasePencilLayerMask *mask;
	char *_data, *_retdata;
	
	_self = (GreasePencilLayer *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((GreasePencilLayer **)_data);
	_data += 8;
	_retdata = _data;
	
	mask = rna_grease_pencil_layer_mask_add(_self, reports, layer);
	*((GreasePencilLayerMask **)_retdata) = mask;
}

void GreasePencilLayerMasks_remove_func(GreasePencilLayer *_self, ReportList *reports, PointerRNA *mask)
{
	rna_grease_pencil_layer_mask_remove(_self, reports, mask);
}

static void GreasePencilLayerMasks_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencilLayer *_self;
	PointerRNA *mask;
	char *_data;
	
	_self = (GreasePencilLayer *)_ptr->data;
	_data = (char *)_parms->data;
	mask = ((PointerRNA *)_data);
	
	rna_grease_pencil_layer_mask_remove(_self, reports, mask);
}

/* Repeated prototypes to detect errors */

GreasePencilLayerMask *rna_grease_pencil_layer_mask_add(GreasePencilLayer *_self, ReportList *reports, GreasePencilLayer *layer);
void rna_grease_pencil_layer_mask_remove(GreasePencilLayer *_self, ReportList *reports, PointerRNA *mask);




void GreasePencilDrawing_add_strokes_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int sizes_num, int *sizes)
{
	rna_GreasePencilDrawing_add_curves(_selfid, _self, reports, sizes, sizes_num);
}

static void GreasePencilDrawing_add_strokes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	int sizes_num;
	const int *sizes;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	sizes_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	sizes = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_GreasePencilDrawing_add_curves(_selfid, _self, reports, sizes, sizes_num);
}

void GreasePencilDrawing_remove_strokes_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int indices_num, int *indices)
{
	rna_GreasePencilDrawing_remove_curves(_selfid, _self, reports, indices, indices_num);
}

static void GreasePencilDrawing_remove_strokes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	int indices_num;
	const int *indices;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_GreasePencilDrawing_remove_curves(_selfid, _self, reports, indices, indices_num);
}

void GreasePencilDrawing_resize_strokes_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int sizes_num, int *sizes, int indices_num, int *indices)
{
	rna_GreasePencilDrawing_resize_curves(_selfid, _self, reports, sizes, sizes_num, indices, indices_num);
}

static void GreasePencilDrawing_resize_strokes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	int sizes_num;
	const int *sizes;
	int indices_num;
	const int *indices;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	sizes_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	sizes = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_GreasePencilDrawing_resize_curves(_selfid, _self, reports, sizes, sizes_num, indices, indices_num);
}

void GreasePencilDrawing_reorder_strokes_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int new_indices_num, int *new_indices)
{
	rna_GreasePencilDrawing_reorder_curves(_selfid, _self, reports, new_indices, new_indices_num);
}

static void GreasePencilDrawing_reorder_strokes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	int new_indices_num;
	const int *new_indices;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	new_indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	new_indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_GreasePencilDrawing_reorder_curves(_selfid, _self, reports, new_indices, new_indices_num);
}

void GreasePencilDrawing_set_types_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int type, int indices_num, int *indices)
{
	rna_GreasePencilDrawing_set_types(_selfid, _self, reports, type, indices, indices_num);
}

static void GreasePencilDrawing_set_types_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	int type;
	int indices_num;
	const int *indices;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((int *)_data);
	_data += 8;
	indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_GreasePencilDrawing_set_types(_selfid, _self, reports, type, indices, indices_num);
}

void GreasePencilDrawing_tag_positions_changed_func(GreasePencilDrawing *_self)
{
	rna_GreasePencilDrawing_tag_positions_changed(_self);
}

static void GreasePencilDrawing_tag_positions_changed_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	GreasePencilDrawing *_self;
	_self = (GreasePencilDrawing *)_ptr->data;
	
	rna_GreasePencilDrawing_tag_positions_changed(_self);
}

void GreasePencilDrawing_vertex_group_assign_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, const char * vgroup_name, int indices_ptr_num, int *indices_ptr, float weight)
{
	rna_GreasePencilDrawing_vertex_group_assign(_selfid, _self, reports, vgroup_name, indices_ptr, indices_ptr_num, weight);
}

static void GreasePencilDrawing_vertex_group_assign_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	const char * vgroup_name;
	int indices_ptr_num;
	const int *indices_ptr;
	float weight;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	vgroup_name = *((const char * *)_data);
	_data += 8;
	indices_ptr_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices_ptr = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	weight = *((float *)_data);
	
	rna_GreasePencilDrawing_vertex_group_assign(_selfid, _self, reports, vgroup_name, indices_ptr, indices_ptr_num, weight);
}

void GreasePencilDrawing_vertex_group_remove_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, const char * vgroup_name, int indices_ptr_num, int *indices_ptr)
{
	rna_GreasePencilDrawing_vertex_group_remove(_selfid, _self, reports, vgroup_name, indices_ptr, indices_ptr_num);
}

static void GreasePencilDrawing_vertex_group_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	const char * vgroup_name;
	int indices_ptr_num;
	const int *indices_ptr;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	vgroup_name = *((const char * *)_data);
	_data += 8;
	indices_ptr_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices_ptr = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_GreasePencilDrawing_vertex_group_remove(_selfid, _self, reports, vgroup_name, indices_ptr, indices_ptr_num);
}

void GreasePencilDrawing_set_vertex_weights_func(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, const char * vertex_group_name, int indices_num, int *indices, int weights_num, float *weights, int assign_mode)
{
	rna_GreasePencilDrawing_set_vertex_weights(_selfid, _self, reports, vertex_group_name, indices, indices_num, weights, weights_num, assign_mode);
}

static void GreasePencilDrawing_set_vertex_weights_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	GreasePencilDrawing *_self;
	const char * vertex_group_name;
	int indices_num;
	const int *indices;
	int weights_num;
	const float *weights;
	int assign_mode;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (GreasePencilDrawing *)_ptr->data;
	_data = (char *)_parms->data;
	vertex_group_name = *((const char * *)_data);
	_data += 8;
	indices_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	indices = *((const int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	weights_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	weights = *((const float **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	assign_mode = *((int *)_data);
	
	rna_GreasePencilDrawing_set_vertex_weights(_selfid, _self, reports, vertex_group_name, indices, indices_num, weights, weights_num, assign_mode);
}

/* Repeated prototypes to detect errors */

void rna_GreasePencilDrawing_add_curves(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int sizes_num, int *sizes);
void rna_GreasePencilDrawing_remove_curves(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int indices_num, int *indices);
void rna_GreasePencilDrawing_resize_curves(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int sizes_num, int *sizes, int indices_num, int *indices);
void rna_GreasePencilDrawing_reorder_curves(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int new_indices_num, int *new_indices);
void rna_GreasePencilDrawing_set_types(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, int type, int indices_num, int *indices);
void rna_GreasePencilDrawing_tag_positions_changed(GreasePencilDrawing *_self);
void rna_GreasePencilDrawing_vertex_group_assign(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, const char * vgroup_name, int indices_ptr_num, int *indices_ptr, float weight);
void rna_GreasePencilDrawing_vertex_group_remove(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, const char * vgroup_name, int indices_ptr_num, int *indices_ptr);
void rna_GreasePencilDrawing_set_vertex_weights(ID *_selfid, GreasePencilDrawing *_self, ReportList *reports, const char * vertex_group_name, int indices_num, int *indices, int weights_num, float *weights, int assign_mode);

/* Grease Pencil */
static CollectionPropertyRNA rna_GreasePencil_attributes_;
PropertyRNA &rna_GreasePencil_attributes = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_attributes_);

static CollectionPropertyRNA rna_GreasePencil_color_attributes_;
PropertyRNA &rna_GreasePencil_color_attributes = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_color_attributes_);

static PointerPropertyRNA rna_GreasePencil_animation_data_;
PropertyRNA &rna_GreasePencil_animation_data = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_animation_data_);

static CollectionPropertyRNA rna_GreasePencil_materials_;
PropertyRNA &rna_GreasePencil_materials = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_materials_);

static CollectionPropertyRNA rna_GreasePencil_layers_;
PropertyRNA &rna_GreasePencil_layers = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_layers_);

static CollectionPropertyRNA rna_GreasePencil_layer_groups_;
PropertyRNA &rna_GreasePencil_layer_groups = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_layer_groups_);

static CollectionPropertyRNA rna_GreasePencil_root_nodes_;
PropertyRNA &rna_GreasePencil_root_nodes = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_root_nodes_);

static BoolPropertyRNA rna_GreasePencil_use_autolock_layers_;
PropertyRNA &rna_GreasePencil_use_autolock_layers = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_use_autolock_layers_);

static EnumPropertyRNA rna_GreasePencil_stroke_depth_order_;
PropertyRNA &rna_GreasePencil_stroke_depth_order = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_stroke_depth_order_);

static IntPropertyRNA rna_GreasePencil_ghost_before_range_;
PropertyRNA &rna_GreasePencil_ghost_before_range = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_ghost_before_range_);

static IntPropertyRNA rna_GreasePencil_ghost_after_range_;
PropertyRNA &rna_GreasePencil_ghost_after_range = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_ghost_after_range_);

static BoolPropertyRNA rna_GreasePencil_use_ghost_custom_colors_;
PropertyRNA &rna_GreasePencil_use_ghost_custom_colors = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_use_ghost_custom_colors_);

static FloatPropertyRNA rna_GreasePencil_before_color_;
PropertyRNA &rna_GreasePencil_before_color = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_before_color_);

static FloatPropertyRNA rna_GreasePencil_after_color_;
PropertyRNA &rna_GreasePencil_after_color = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_after_color_);

static EnumPropertyRNA rna_GreasePencil_onion_mode_;
PropertyRNA &rna_GreasePencil_onion_mode = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_onion_mode_);

static EnumPropertyRNA rna_GreasePencil_onion_keyframe_type_;
PropertyRNA &rna_GreasePencil_onion_keyframe_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_onion_keyframe_type_);

static BoolPropertyRNA rna_GreasePencil_use_onion_fade_;
PropertyRNA &rna_GreasePencil_use_onion_fade = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_use_onion_fade_);

static BoolPropertyRNA rna_GreasePencil_use_onion_loop_;
PropertyRNA &rna_GreasePencil_use_onion_loop = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_use_onion_loop_);

static FloatPropertyRNA rna_GreasePencil_onion_factor_;
PropertyRNA &rna_GreasePencil_onion_factor = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_onion_factor_);

static PointerPropertyRNA rna_GreasePencil_unit_test_compare_grease_pencil_;
PropertyRNA &rna_GreasePencil_unit_test_compare_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_unit_test_compare_grease_pencil_);

static FloatPropertyRNA rna_GreasePencil_unit_test_compare_threshold_;
PropertyRNA &rna_GreasePencil_unit_test_compare_threshold = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_unit_test_compare_threshold_);

static StringPropertyRNA rna_GreasePencil_unit_test_compare_result_;
PropertyRNA &rna_GreasePencil_unit_test_compare_result = reinterpret_cast<PropertyRNA &>(rna_GreasePencil_unit_test_compare_result_);

FunctionRNA *rna_GreasePencil_unit_test_compare_func;
StructRNA *RNA_GreasePencil;
void register_struct_GreasePencil(BlenderRNA &brna)
{
	rna_GreasePencil_attributes_ = {
		{&rna_GreasePencil_color_attributes, 	nullptr,
		-1, "attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Attributes",
		"Geometry attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupGreasePencil},
		GreasePencil_attributes_begin, GreasePencil_attributes_next, GreasePencil_attributes_end, GreasePencil_attributes_get, GreasePencil_attributes_length, GreasePencil_attributes_lookup_int, GreasePencil_attributes_lookup_string, nullptr, RNA_Attribute
	};

	rna_GreasePencil_color_attributes_ = {
		{&rna_GreasePencil_animation_data, 	&rna_GreasePencil_attributes,
		-1, "color_attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Attributes",
		"Geometry color attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupGreasePencil},
		GreasePencil_color_attributes_begin, GreasePencil_color_attributes_next, GreasePencil_color_attributes_end, GreasePencil_color_attributes_get, GreasePencil_color_attributes_length, GreasePencil_color_attributes_lookup_int, nullptr, nullptr, RNA_Attribute
	};

	rna_GreasePencil_animation_data_ = {
		{&rna_GreasePencil_materials, 	&rna_GreasePencil_color_attributes,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencil_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	rna_GreasePencil_materials_ = {
		{&rna_GreasePencil_layers, 	&rna_GreasePencil_animation_data,
		-1, "materials", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Materials",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_IDMaterials},
		GreasePencil_materials_begin, GreasePencil_materials_next, GreasePencil_materials_end, GreasePencil_materials_get, GreasePencil_materials_length, GreasePencil_materials_lookup_int, GreasePencil_materials_lookup_string, rna_IDMaterials_assign_int, RNA_Material
	};

	rna_GreasePencil_layers_ = {
		{&rna_GreasePencil_layer_groups, 	&rna_GreasePencil_materials,
		-1, "layers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layers",
		"Grease Pencil layers",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_GreasePencilv3Layers},
		GreasePencil_layers_begin, GreasePencil_layers_next, GreasePencil_layers_end, GreasePencil_layers_get, GreasePencil_layers_length, nullptr, nullptr, nullptr, RNA_GreasePencilLayer
	};

	rna_GreasePencil_layer_groups_ = {
		{&rna_GreasePencil_root_nodes, 	&rna_GreasePencil_layers,
		-1, "layer_groups", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layer Groups",
		"Grease Pencil layer groups",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_GreasePencilv3LayerGroup},
		GreasePencil_layer_groups_begin, GreasePencil_layer_groups_next, GreasePencil_layer_groups_end, GreasePencil_layer_groups_get, GreasePencil_layer_groups_length, nullptr, nullptr, nullptr, RNA_GreasePencilLayerGroup
	};

	rna_GreasePencil_root_nodes_ = {
		{&rna_GreasePencil_use_autolock_layers, 	&rna_GreasePencil_layer_groups,
		-1, "root_nodes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Root Nodes",
		"The root nodes of the layer tree. Ordered by stack order, meaning the first node is the bottom most node in the layer tree.",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencil_root_nodes_begin, GreasePencil_root_nodes_next, GreasePencil_root_nodes_end, GreasePencil_root_nodes_get, GreasePencil_root_nodes_length, nullptr, nullptr, nullptr, RNA_GreasePencilTreeNode
	};

	rna_GreasePencil_use_autolock_layers_ = {
		{&rna_GreasePencil_stroke_depth_order, 	&rna_GreasePencil_root_nodes,
		-1, "use_autolock_layers", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto-Lock Layers",
		"Automatically lock all layers except the active one to avoid accidental changes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_autolock, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencil_use_autolock_layers_get, GreasePencil_use_autolock_layers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencil_stroke_depth_order_ = {
		{&rna_GreasePencil_ghost_before_range, 	&rna_GreasePencil_use_autolock_layers,
		-1, "stroke_depth_order", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Stroke Depth Order",
		"Defines how the strokes are ordered in 3D space (for objects not displayed \'In Front\')",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencil, flag), RawPropertyType(0), nullptr},
		GreasePencil_stroke_depth_order_get, GreasePencil_stroke_depth_order_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_stroke_depth_order_items, 2, 0
	};

	rna_GreasePencil_ghost_before_range_ = {
		{&rna_GreasePencil_ghost_after_range, 	&rna_GreasePencil_stroke_depth_order,
		-1, "ghost_before_range", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frames Before",
		"Maximum number of frames to show before current frame (0 = don\'t show any frames before current)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencil, onion_skinning_settings.num_frames_before), RawPropertyType(1), nullptr},
		GreasePencil_ghost_before_range_get, GreasePencil_ghost_before_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 120, 0, 120, 1, nullptr, nullptr, 1, nullptr
	};

	rna_GreasePencil_ghost_after_range_ = {
		{&rna_GreasePencil_use_ghost_custom_colors, 	&rna_GreasePencil_ghost_before_range,
		-1, "ghost_after_range", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Frames After",
		"Maximum number of frames to show after current frame (0 = don\'t show any frames after current)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencil, onion_skinning_settings.num_frames_after), RawPropertyType(1), nullptr},
		GreasePencil_ghost_after_range_get, GreasePencil_ghost_after_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 120, 0, 120, 1, nullptr, nullptr, 1, nullptr
	};

	rna_GreasePencil_use_ghost_custom_colors_ = {
		{&rna_GreasePencil_before_color, 	&rna_GreasePencil_ghost_after_range,
		-1, "use_ghost_custom_colors", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Custom Ghost Colors",
		"Use custom colors for ghost frames",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencil_use_ghost_custom_colors_get, GreasePencil_use_ghost_custom_colors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_GreasePencil_before_color_default[3] = {
		0.1450980008f,
		0.4196079969f,
		0.1372549981f
	};
	rna_GreasePencil_before_color_ = {
		{&rna_GreasePencil_after_color, 	&rna_GreasePencil_use_ghost_custom_colors,
		-1, "before_color", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Before Color",
		"Base color for ghosts before the active frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_grease_pencil_update, 392101888, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencil, onion_skinning_settings.color_before), RawPropertyType(5), nullptr},
		nullptr, nullptr, GreasePencil_before_color_get, GreasePencil_before_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_GreasePencil_before_color_default
	};

	static float rna_GreasePencil_after_color_default[3] = {
		0.1254899949f,
		0.0823530033f,
		0.5294119716f
	};
	rna_GreasePencil_after_color_ = {
		{&rna_GreasePencil_onion_mode, 	&rna_GreasePencil_before_color,
		-1, "after_color", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "After Color",
		"Base color for ghosts after the active frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_grease_pencil_update, 392101888, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencil, onion_skinning_settings.color_after), RawPropertyType(5), nullptr},
		nullptr, nullptr, GreasePencil_after_color_get, GreasePencil_after_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_GreasePencil_after_color_default
	};

	static const EnumPropertyItem rna_GreasePencil_onion_mode_items[4] = {
		{0, "ABSOLUTE", 0, "Frames", "Frames in absolute range of the scene frame"	},
		{1, "RELATIVE", 0, "Keyframes", "Frames in relative range of the Grease Pencil keyframes"	},
		{2, "SELECTED", 0, "Selected", "Only selected keyframes"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencil_onion_mode_ = {
		{&rna_GreasePencil_onion_keyframe_type, 	&rna_GreasePencil_after_color,
		-1, "onion_mode", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Mode",
		"Mode to display frames",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencil, onion_skinning_settings.mode), RawPropertyType(10), nullptr},
		GreasePencil_onion_mode_get, GreasePencil_onion_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencil_onion_mode_items, 3, 0
	};

	static const EnumPropertyItem rna_GreasePencil_onion_keyframe_type_items[8] = {
		{31, "ALL", 0, "All", "Include all Keyframe types"	},
		{1, "KEYFRAME", 790, "Keyframe", "Normal keyframe, e.g. for key poses"	},
		{4, "BREAKDOWN", 791, "Breakdown", "A breakdown pose, e.g. for transitions between key poses"	},
		{16, "MOVING_HOLD", 794, "Moving Hold", "A keyframe that is part of a moving hold"	},
		{2, "EXTREME", 792, "Extreme", "An \'extreme\' pose, or some other purpose as needed"	},
		{8, "JITTER", 793, "Jitter", "A filler or baked keyframe for keying on ones, or some other purpose as needed"	},
		{5, "GENERATED", 795, "Generated", "A key generated automatically by a tool, not manually created"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencil_onion_keyframe_type_ = {
		{&rna_GreasePencil_use_onion_fade, 	&rna_GreasePencil_onion_mode,
		-1, "onion_keyframe_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Filter by Type",
		"Type of keyframe (for filtering)",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencil, onion_skinning_settings.filter), RawPropertyType(6), nullptr},
		GreasePencil_onion_keyframe_type_get, GreasePencil_onion_keyframe_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencil_onion_keyframe_type_items, 7, 31
	};

	rna_GreasePencil_use_onion_fade_ = {
		{&rna_GreasePencil_use_onion_loop, 	&rna_GreasePencil_onion_keyframe_type,
		-1, "use_onion_fade", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fade",
		"Display onion keyframes with a fade in color transparency",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencil_use_onion_fade_get, GreasePencil_use_onion_fade_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencil_use_onion_loop_ = {
		{&rna_GreasePencil_onion_factor, 	&rna_GreasePencil_use_onion_fade,
		-1, "use_onion_loop", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Start Frame",
		"Display onion keyframes for looping animations",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencil_use_onion_loop_get, GreasePencil_use_onion_loop_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencil_onion_factor_ = {
		{nullptr, 	&rna_GreasePencil_use_onion_loop,
		-1, "onion_factor", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Onion Opacity",
		"Change fade opacity of displayed onion frames",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencil, onion_skinning_settings.opacity), RawPropertyType(5), nullptr},
		GreasePencil_onion_factor_get, GreasePencil_onion_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	StructRNA *srna = RNA_GreasePencil;
	srna->cont.properties = {&rna_GreasePencil_attributes, &rna_GreasePencil_onion_factor};
	srna->identifier = "GreasePencil";
	srna->flag = 519;
	srna->name = "Grease Pencil";
	srna->description = "Grease Pencil data-block";
	srna->translation_context = "*";
	srna->icon = 262;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_GreasePencil_unit_test_compare_grease_pencil_ = {
		{&rna_GreasePencil_unit_test_compare_threshold, 	nullptr,
		-1, "grease_pencil", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Grease Pencil to compare to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencil
	};
	rna_GreasePencil_unit_test_compare_threshold_ = {
		{&rna_GreasePencil_unit_test_compare_result, 	&rna_GreasePencil_unit_test_compare_grease_pencil,
		-1, "threshold", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Threshold",
		"Comparison tolerance threshold",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0000071526f, nullptr
	};
	rna_GreasePencil_unit_test_compare_result_ = {
		{nullptr, 	&rna_GreasePencil_unit_test_compare_threshold,
		-1, "result", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "Return value",
		"String description of result of comparison",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "nothing"
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencil_unit_test_compare_grease_pencil, &rna_GreasePencil_unit_test_compare_result};
		func->identifier = "unit_test_compare";
		func->description = "unit_test_compare";
		func->call = GreasePencil_unit_test_compare_call;
		func->c_ret = &rna_GreasePencil_unit_test_compare_result;
		rna_GreasePencil_unit_test_compare_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Grease Pencil Layers */
static CollectionPropertyRNA rna_GreasePencilv3Layers_rna_properties_;
PropertyRNA &rna_GreasePencilv3Layers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_rna_properties_);

static PointerPropertyRNA rna_GreasePencilv3Layers_rna_type_;
PropertyRNA &rna_GreasePencilv3Layers_rna_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_rna_type_);

static PointerPropertyRNA rna_GreasePencilv3Layers_active_;
PropertyRNA &rna_GreasePencilv3Layers_active = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_active_);

static StringPropertyRNA rna_GreasePencilv3Layers_new_name_;
PropertyRNA &rna_GreasePencilv3Layers_new_name = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_new_name_);

static BoolPropertyRNA rna_GreasePencilv3Layers_new_set_active_;
PropertyRNA &rna_GreasePencilv3Layers_new_set_active = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_new_set_active_);

static PointerPropertyRNA rna_GreasePencilv3Layers_new_layer_group_;
PropertyRNA &rna_GreasePencilv3Layers_new_layer_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_new_layer_group_);

static PointerPropertyRNA rna_GreasePencilv3Layers_new_layer_;
PropertyRNA &rna_GreasePencilv3Layers_new_layer = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_new_layer_);

FunctionRNA *rna_GreasePencilv3Layers_new_func;
static PointerPropertyRNA rna_GreasePencilv3Layers_remove_layer_;
PropertyRNA &rna_GreasePencilv3Layers_remove_layer = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_remove_layer_);

FunctionRNA *rna_GreasePencilv3Layers_remove_func;
static PointerPropertyRNA rna_GreasePencilv3Layers_move_layer_;
PropertyRNA &rna_GreasePencilv3Layers_move_layer = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_move_layer_);

static EnumPropertyRNA rna_GreasePencilv3Layers_move_type_;
PropertyRNA &rna_GreasePencilv3Layers_move_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_move_type_);

FunctionRNA *rna_GreasePencilv3Layers_move_func;
static PointerPropertyRNA rna_GreasePencilv3Layers_move_top_layer_;
PropertyRNA &rna_GreasePencilv3Layers_move_top_layer = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_move_top_layer_);

FunctionRNA *rna_GreasePencilv3Layers_move_top_func;
static PointerPropertyRNA rna_GreasePencilv3Layers_move_bottom_layer_;
PropertyRNA &rna_GreasePencilv3Layers_move_bottom_layer = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_move_bottom_layer_);

FunctionRNA *rna_GreasePencilv3Layers_move_bottom_func;
static PointerPropertyRNA rna_GreasePencilv3Layers_move_to_layer_group_layer_;
PropertyRNA &rna_GreasePencilv3Layers_move_to_layer_group_layer = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_move_to_layer_group_layer_);

static PointerPropertyRNA rna_GreasePencilv3Layers_move_to_layer_group_layer_group_;
PropertyRNA &rna_GreasePencilv3Layers_move_to_layer_group_layer_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3Layers_move_to_layer_group_layer_group_);

FunctionRNA *rna_GreasePencilv3Layers_move_to_layer_group_func;
StructRNA *RNA_GreasePencilv3Layers;
void register_struct_GreasePencilv3Layers(BlenderRNA &brna)
{
	rna_GreasePencilv3Layers_rna_properties_ = {
		{&rna_GreasePencilv3Layers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilv3Layers_rna_properties_begin, GreasePencilv3Layers_rna_properties_next, GreasePencilv3Layers_rna_properties_end, GreasePencilv3Layers_rna_properties_get, nullptr, nullptr, GreasePencilv3Layers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GreasePencilv3Layers_rna_type_ = {
		{&rna_GreasePencilv3Layers_active, 	&rna_GreasePencilv3Layers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilv3Layers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GreasePencilv3Layers_active_ = {
		{nullptr, 	&rna_GreasePencilv3Layers_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Layer",
		"Active Grease Pencil layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 391839750, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilv3Layers_active_get, GreasePencilv3Layers_active_set, nullptr, nullptr,RNA_GreasePencilLayer
	};

	StructRNA *srna = RNA_GreasePencilv3Layers;
	srna->cont.properties = {&rna_GreasePencilv3Layers_rna_properties, &rna_GreasePencilv3Layers_active};
	srna->identifier = "GreasePencilv3Layers";
	srna->flag = 516;
	srna->name = "Grease Pencil Layers";
	srna->description = "Collection of Grease Pencil layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GreasePencilv3Layers_rna_properties;
	{
	rna_GreasePencilv3Layers_new_name_ = {
		{&rna_GreasePencilv3Layers_new_set_active, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the layer",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "GreasePencilLayer"
	};
	rna_GreasePencilv3Layers_new_set_active_ = {
		{&rna_GreasePencilv3Layers_new_layer_group, 	&rna_GreasePencilv3Layers_new_name,
		-1, "set_active", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Set Active",
		"Set the newly created layer as the active layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_GreasePencilv3Layers_new_layer_group_ = {
		{&rna_GreasePencilv3Layers_new_layer, 	&rna_GreasePencilv3Layers_new_set_active,
		-1, "layer_group", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"The layer group the new layer will be created in (use None for the main stack)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
	rna_GreasePencilv3Layers_new_layer_ = {
		{nullptr, 	&rna_GreasePencilv3Layers_new_layer_group,
		-1, "layer", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3Layers_new_name, &rna_GreasePencilv3Layers_new_layer};
		func->identifier = "new";
		func->description = "Add a new Grease Pencil layer";
		func->call = GreasePencilv3Layers_new_call;
		func->c_ret = &rna_GreasePencilv3Layers_new_layer;
		rna_GreasePencilv3Layers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3Layers_remove_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3Layers_remove_layer, &rna_GreasePencilv3Layers_remove_layer};
		func->identifier = "remove";
		func->description = "Remove a Grease Pencil layer";
		func->call = GreasePencilv3Layers_remove_call;
		rna_GreasePencilv3Layers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3Layers_move_layer_ = {
		{&rna_GreasePencilv3Layers_move_type, 	nullptr,
		-1, "layer", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer to move",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayer
	};
	static const EnumPropertyItem rna_GreasePencilv3Layers_move_type_items[3] = {
		{-1, "DOWN", 0, "Down", ""	},
		{1, "UP", 0, "Up", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencilv3Layers_move_type_ = {
		{nullptr, 	&rna_GreasePencilv3Layers_move_layer,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Direction of movement",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencilv3Layers_move_type_items, 2, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3Layers_move_layer, &rna_GreasePencilv3Layers_move_type};
		func->identifier = "move";
		func->description = "Move a Grease Pencil layer in the layer group or main stack";
		func->call = GreasePencilv3Layers_move_call;
		rna_GreasePencilv3Layers_move_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3Layers_move_top_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer to move",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3Layers_move_top_layer, &rna_GreasePencilv3Layers_move_top_layer};
		func->identifier = "move_top";
		func->description = "Move a Grease Pencil layer to the top of the layer group or main stack";
		func->call = GreasePencilv3Layers_move_top_call;
		rna_GreasePencilv3Layers_move_top_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3Layers_move_bottom_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer to move",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3Layers_move_bottom_layer, &rna_GreasePencilv3Layers_move_bottom_layer};
		func->identifier = "move_bottom";
		func->description = "Move a Grease Pencil layer to the bottom of the layer group or main stack";
		func->call = GreasePencilv3Layers_move_bottom_call;
		rna_GreasePencilv3Layers_move_bottom_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3Layers_move_to_layer_group_layer_ = {
		{&rna_GreasePencilv3Layers_move_to_layer_group_layer_group, 	nullptr,
		-1, "layer", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer to move",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayer
	};
	rna_GreasePencilv3Layers_move_to_layer_group_layer_group_ = {
		{nullptr, 	&rna_GreasePencilv3Layers_move_to_layer_group_layer,
		-1, "layer_group", 0, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer group the layer will be moved into (use None for the main stack)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3Layers_move_to_layer_group_layer, &rna_GreasePencilv3Layers_move_to_layer_group_layer_group};
		func->identifier = "move_to_layer_group";
		func->description = "Move a Grease Pencil layer into a layer group";
		func->call = GreasePencilv3Layers_move_to_layer_group_call;
		rna_GreasePencilv3Layers_move_to_layer_group_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Grease Pencil Group */
static CollectionPropertyRNA rna_GreasePencilv3LayerGroup_rna_properties_;
PropertyRNA &rna_GreasePencilv3LayerGroup_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_rna_properties_);

static PointerPropertyRNA rna_GreasePencilv3LayerGroup_rna_type_;
PropertyRNA &rna_GreasePencilv3LayerGroup_rna_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_rna_type_);

static PointerPropertyRNA rna_GreasePencilv3LayerGroup_active_;
PropertyRNA &rna_GreasePencilv3LayerGroup_active = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_active_);

static StringPropertyRNA rna_GreasePencilv3LayerGroup_new_name_;
PropertyRNA &rna_GreasePencilv3LayerGroup_new_name = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_new_name_);

static PointerPropertyRNA rna_GreasePencilv3LayerGroup_new_parent_group_;
PropertyRNA &rna_GreasePencilv3LayerGroup_new_parent_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_new_parent_group_);

static PointerPropertyRNA rna_GreasePencilv3LayerGroup_new_layer_group_;
PropertyRNA &rna_GreasePencilv3LayerGroup_new_layer_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_new_layer_group_);

FunctionRNA *rna_GreasePencilv3LayerGroup_new_func;
static PointerPropertyRNA rna_GreasePencilv3LayerGroup_remove_layer_group_;
PropertyRNA &rna_GreasePencilv3LayerGroup_remove_layer_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_remove_layer_group_);

static BoolPropertyRNA rna_GreasePencilv3LayerGroup_remove_keep_children_;
PropertyRNA &rna_GreasePencilv3LayerGroup_remove_keep_children = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_remove_keep_children_);

FunctionRNA *rna_GreasePencilv3LayerGroup_remove_func;
static PointerPropertyRNA rna_GreasePencilv3LayerGroup_move_layer_group_;
PropertyRNA &rna_GreasePencilv3LayerGroup_move_layer_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_move_layer_group_);

static EnumPropertyRNA rna_GreasePencilv3LayerGroup_move_type_;
PropertyRNA &rna_GreasePencilv3LayerGroup_move_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_move_type_);

FunctionRNA *rna_GreasePencilv3LayerGroup_move_func;
static PointerPropertyRNA rna_GreasePencilv3LayerGroup_move_top_layer_group_;
PropertyRNA &rna_GreasePencilv3LayerGroup_move_top_layer_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_move_top_layer_group_);

FunctionRNA *rna_GreasePencilv3LayerGroup_move_top_func;
static PointerPropertyRNA rna_GreasePencilv3LayerGroup_move_bottom_layer_group_;
PropertyRNA &rna_GreasePencilv3LayerGroup_move_bottom_layer_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_move_bottom_layer_group_);

FunctionRNA *rna_GreasePencilv3LayerGroup_move_bottom_func;
static PointerPropertyRNA rna_GreasePencilv3LayerGroup_move_to_layer_group_layer_group_;
PropertyRNA &rna_GreasePencilv3LayerGroup_move_to_layer_group_layer_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_move_to_layer_group_layer_group_);

static PointerPropertyRNA rna_GreasePencilv3LayerGroup_move_to_layer_group_parent_group_;
PropertyRNA &rna_GreasePencilv3LayerGroup_move_to_layer_group_parent_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilv3LayerGroup_move_to_layer_group_parent_group_);

FunctionRNA *rna_GreasePencilv3LayerGroup_move_to_layer_group_func;
StructRNA *RNA_GreasePencilv3LayerGroup;
void register_struct_GreasePencilv3LayerGroup(BlenderRNA &brna)
{
	rna_GreasePencilv3LayerGroup_rna_properties_ = {
		{&rna_GreasePencilv3LayerGroup_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilv3LayerGroup_rna_properties_begin, GreasePencilv3LayerGroup_rna_properties_next, GreasePencilv3LayerGroup_rna_properties_end, GreasePencilv3LayerGroup_rna_properties_get, nullptr, nullptr, GreasePencilv3LayerGroup_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GreasePencilv3LayerGroup_rna_type_ = {
		{&rna_GreasePencilv3LayerGroup_active, 	&rna_GreasePencilv3LayerGroup_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilv3LayerGroup_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GreasePencilv3LayerGroup_active_ = {
		{nullptr, 	&rna_GreasePencilv3LayerGroup_rna_type,
		-1, "active", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Layer Group",
		"Active Grease Pencil layer group",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 391839750, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilv3LayerGroup_active_get, GreasePencilv3LayerGroup_active_set, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};

	StructRNA *srna = RNA_GreasePencilv3LayerGroup;
	srna->cont.properties = {&rna_GreasePencilv3LayerGroup_rna_properties, &rna_GreasePencilv3LayerGroup_active};
	srna->identifier = "GreasePencilv3LayerGroup";
	srna->flag = 516;
	srna->name = "Grease Pencil Group";
	srna->description = "Collection of Grease Pencil layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GreasePencilv3LayerGroup_rna_properties;
	{
	rna_GreasePencilv3LayerGroup_new_name_ = {
		{&rna_GreasePencilv3LayerGroup_new_parent_group, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the layer group",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "GreasePencilLayerGroup"
	};
	rna_GreasePencilv3LayerGroup_new_parent_group_ = {
		{&rna_GreasePencilv3LayerGroup_new_layer_group, 	&rna_GreasePencilv3LayerGroup_new_name,
		-1, "parent_group", 8388608, 0, 4, 0, 0, PropertyPathTemplateType(0), "",
		"The parent layer group the new group will be created in (use None for the main stack)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
	rna_GreasePencilv3LayerGroup_new_layer_group_ = {
		{nullptr, 	&rna_GreasePencilv3LayerGroup_new_parent_group,
		-1, "layer_group", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created layer group",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3LayerGroup_new_name, &rna_GreasePencilv3LayerGroup_new_layer_group};
		func->identifier = "new";
		func->description = "Add a new Grease Pencil layer group";
		func->call = GreasePencilv3LayerGroup_new_call;
		func->c_ret = &rna_GreasePencilv3LayerGroup_new_layer_group;
		rna_GreasePencilv3LayerGroup_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3LayerGroup_remove_layer_group_ = {
		{&rna_GreasePencilv3LayerGroup_remove_keep_children, 	nullptr,
		-1, "layer_group", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer group to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
	rna_GreasePencilv3LayerGroup_remove_keep_children_ = {
		{nullptr, 	&rna_GreasePencilv3LayerGroup_remove_layer_group,
		-1, "keep_children", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Keep the children nodes of the group and only delete the group itself",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3LayerGroup_remove_layer_group, &rna_GreasePencilv3LayerGroup_remove_keep_children};
		func->identifier = "remove";
		func->description = "Remove a new Grease Pencil layer group";
		func->call = GreasePencilv3LayerGroup_remove_call;
		rna_GreasePencilv3LayerGroup_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3LayerGroup_move_layer_group_ = {
		{&rna_GreasePencilv3LayerGroup_move_type, 	nullptr,
		-1, "layer_group", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer group to move",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
	static const EnumPropertyItem rna_GreasePencilv3LayerGroup_move_type_items[3] = {
		{-1, "DOWN", 0, "Down", ""	},
		{1, "UP", 0, "Up", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencilv3LayerGroup_move_type_ = {
		{nullptr, 	&rna_GreasePencilv3LayerGroup_move_layer_group,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Direction of movement",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencilv3LayerGroup_move_type_items, 2, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3LayerGroup_move_layer_group, &rna_GreasePencilv3LayerGroup_move_type};
		func->identifier = "move";
		func->description = "Move a layer group in the parent layer group or main stack";
		func->call = GreasePencilv3LayerGroup_move_call;
		rna_GreasePencilv3LayerGroup_move_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3LayerGroup_move_top_layer_group_ = {
		{nullptr, 	nullptr,
		-1, "layer_group", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer group to move",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3LayerGroup_move_top_layer_group, &rna_GreasePencilv3LayerGroup_move_top_layer_group};
		func->identifier = "move_top";
		func->description = "Move a layer group to the top of the parent layer group or main stack";
		func->call = GreasePencilv3LayerGroup_move_top_call;
		rna_GreasePencilv3LayerGroup_move_top_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3LayerGroup_move_bottom_layer_group_ = {
		{nullptr, 	nullptr,
		-1, "layer_group", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer group to move",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3LayerGroup_move_bottom_layer_group, &rna_GreasePencilv3LayerGroup_move_bottom_layer_group};
		func->identifier = "move_bottom";
		func->description = "Move a layer group to the bottom of the parent layer group or main stack";
		func->call = GreasePencilv3LayerGroup_move_bottom_call;
		rna_GreasePencilv3LayerGroup_move_bottom_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilv3LayerGroup_move_to_layer_group_layer_group_ = {
		{&rna_GreasePencilv3LayerGroup_move_to_layer_group_parent_group, 	nullptr,
		-1, "layer_group", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer group to move",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
	rna_GreasePencilv3LayerGroup_move_to_layer_group_parent_group_ = {
		{nullptr, 	&rna_GreasePencilv3LayerGroup_move_to_layer_group_layer_group,
		-1, "parent_group", 0, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The parent layer group the layer group will be moved into (use None for the main stack)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilv3LayerGroup_move_to_layer_group_layer_group, &rna_GreasePencilv3LayerGroup_move_to_layer_group_parent_group};
		func->identifier = "move_to_layer_group";
		func->description = "Move a layer group into a parent layer group";
		func->call = GreasePencilv3LayerGroup_move_to_layer_group_call;
		rna_GreasePencilv3LayerGroup_move_to_layer_group_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Tree Node */
static CollectionPropertyRNA rna_GreasePencilTreeNode_rna_properties_;
PropertyRNA &rna_GreasePencilTreeNode_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_rna_properties_);

static PointerPropertyRNA rna_GreasePencilTreeNode_rna_type_;
PropertyRNA &rna_GreasePencilTreeNode_rna_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_rna_type_);

static StringPropertyRNA rna_GreasePencilTreeNode_name_;
PropertyRNA &rna_GreasePencilTreeNode_name = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_name_);

static BoolPropertyRNA rna_GreasePencilTreeNode_hide_;
PropertyRNA &rna_GreasePencilTreeNode_hide = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_hide_);

static BoolPropertyRNA rna_GreasePencilTreeNode_lock_;
PropertyRNA &rna_GreasePencilTreeNode_lock = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_lock_);

static BoolPropertyRNA rna_GreasePencilTreeNode_select_;
PropertyRNA &rna_GreasePencilTreeNode_select = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_select_);

static BoolPropertyRNA rna_GreasePencilTreeNode_use_onion_skinning_;
PropertyRNA &rna_GreasePencilTreeNode_use_onion_skinning = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_use_onion_skinning_);

static BoolPropertyRNA rna_GreasePencilTreeNode_use_masks_;
PropertyRNA &rna_GreasePencilTreeNode_use_masks = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_use_masks_);

static FloatPropertyRNA rna_GreasePencilTreeNode_channel_color_;
PropertyRNA &rna_GreasePencilTreeNode_channel_color = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_channel_color_);

static PointerPropertyRNA rna_GreasePencilTreeNode_next_node_;
PropertyRNA &rna_GreasePencilTreeNode_next_node = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_next_node_);

static PointerPropertyRNA rna_GreasePencilTreeNode_prev_node_;
PropertyRNA &rna_GreasePencilTreeNode_prev_node = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_prev_node_);

static PointerPropertyRNA rna_GreasePencilTreeNode_parent_group_;
PropertyRNA &rna_GreasePencilTreeNode_parent_group = reinterpret_cast<PropertyRNA &>(rna_GreasePencilTreeNode_parent_group_);

StructRNA *RNA_GreasePencilTreeNode;
void register_struct_GreasePencilTreeNode(BlenderRNA &brna)
{
	rna_GreasePencilTreeNode_rna_properties_ = {
		{&rna_GreasePencilTreeNode_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_rna_properties_begin, GreasePencilTreeNode_rna_properties_next, GreasePencilTreeNode_rna_properties_end, GreasePencilTreeNode_rna_properties_get, nullptr, nullptr, GreasePencilTreeNode_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GreasePencilTreeNode_rna_type_ = {
		{&rna_GreasePencilTreeNode_name, 	&rna_GreasePencilTreeNode_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GreasePencilTreeNode_name_ = {
		{&rna_GreasePencilTreeNode_hide, 	&rna_GreasePencilTreeNode_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"The name of the tree node",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839749, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_name_get, GreasePencilTreeNode_name_length, GreasePencilTreeNode_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_GreasePencilTreeNode_hide_ = {
		{&rna_GreasePencilTreeNode_lock, 	&rna_GreasePencilTreeNode_name,
		-1, "hide", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Set tree node visibility",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_hide_get, GreasePencilTreeNode_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilTreeNode_lock_ = {
		{&rna_GreasePencilTreeNode_select, 	&rna_GreasePencilTreeNode_hide,
		-1, "lock", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Locked",
		"Protect tree node from editing",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_lock_get, GreasePencilTreeNode_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilTreeNode_select_ = {
		{&rna_GreasePencilTreeNode_use_onion_skinning, 	&rna_GreasePencilTreeNode_lock,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Tree node is selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_select_get, GreasePencilTreeNode_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilTreeNode_use_onion_skinning_ = {
		{&rna_GreasePencilTreeNode_use_masks, 	&rna_GreasePencilTreeNode_select,
		-1, "use_onion_skinning", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Onion Skinning",
		"Display onion skins before and after the current frame",
		19, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_use_onion_skinning_get, GreasePencilTreeNode_use_onion_skinning_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_GreasePencilTreeNode_use_masks_ = {
		{&rna_GreasePencilTreeNode_channel_color, 	&rna_GreasePencilTreeNode_use_onion_skinning,
		-1, "use_masks", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Masks",
		"The visibility of drawings in this tree node is affected by the layers in the masks list",
		10, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_use_masks_get, GreasePencilTreeNode_use_masks_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static float rna_GreasePencilTreeNode_channel_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_GreasePencilTreeNode_channel_color_ = {
		{&rna_GreasePencilTreeNode_next_node, 	&rna_GreasePencilTreeNode_use_masks,
		-1, "channel_color", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Channel Color",
		"Color of the channel in the dope sheet",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 385875969, rna_GreasePencilTreeNode_channel_color_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencilLayerTreeNode, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, GreasePencilTreeNode_channel_color_get, GreasePencilTreeNode_channel_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_GreasePencilTreeNode_channel_color_default
	};

	rna_GreasePencilTreeNode_next_node_ = {
		{&rna_GreasePencilTreeNode_prev_node, 	&rna_GreasePencilTreeNode_channel_color,
		-1, "next_node", 8388608, 2, 0, 0, 0, PropertyPathTemplateType(0), "Next Node",
		"The layer tree node after (i.e. above) this one",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_next_node_get, nullptr, nullptr, nullptr,RNA_GreasePencilTreeNode
	};

	rna_GreasePencilTreeNode_prev_node_ = {
		{&rna_GreasePencilTreeNode_parent_group, 	&rna_GreasePencilTreeNode_next_node,
		-1, "prev_node", 8388608, 2, 0, 0, 0, PropertyPathTemplateType(0), "Previous Node",
		"The layer tree node before (i.e. below) this one",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_prev_node_get, nullptr, nullptr, nullptr,RNA_GreasePencilTreeNode
	};

	rna_GreasePencilTreeNode_parent_group_ = {
		{nullptr, 	&rna_GreasePencilTreeNode_prev_node,
		-1, "parent_group", 8388608, 2, 0, 0, 0, PropertyPathTemplateType(0), "Parent Layer Group",
		"The parent group of this layer tree node",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilTreeNode_parent_group_get, nullptr, nullptr, nullptr,RNA_GreasePencilLayerGroup
	};

	StructRNA *srna = RNA_GreasePencilTreeNode;
	srna->cont.properties = {&rna_GreasePencilTreeNode_rna_properties, &rna_GreasePencilTreeNode_parent_group};
	srna->identifier = "GreasePencilTreeNode";
	srna->flag = 516;
	srna->name = "Tree Node";
	srna->description = "Grease Pencil node in the layer tree. Either a layer or a group";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_GreasePencilTreeNode_name;
	srna->iteratorproperty = &rna_GreasePencilTreeNode_rna_properties;
	srna->refine = rna_GreasePencilTreeNode_refine;
};

/* Grease Pencil Layer */
static CollectionPropertyRNA rna_GreasePencilLayer_frames_;
PropertyRNA &rna_GreasePencilLayer_frames = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_frames_);

static CollectionPropertyRNA rna_GreasePencilLayer_mask_layers_;
PropertyRNA &rna_GreasePencilLayer_mask_layers = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_mask_layers_);

static BoolPropertyRNA rna_GreasePencilLayer_lock_frame_;
PropertyRNA &rna_GreasePencilLayer_lock_frame = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_lock_frame_);

static FloatPropertyRNA rna_GreasePencilLayer_opacity_;
PropertyRNA &rna_GreasePencilLayer_opacity = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_opacity_);

static FloatPropertyRNA rna_GreasePencilLayer_tint_color_;
PropertyRNA &rna_GreasePencilLayer_tint_color = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_tint_color_);

static FloatPropertyRNA rna_GreasePencilLayer_tint_factor_;
PropertyRNA &rna_GreasePencilLayer_tint_factor = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_tint_factor_);

static FloatPropertyRNA rna_GreasePencilLayer_radius_offset_;
PropertyRNA &rna_GreasePencilLayer_radius_offset = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_radius_offset_);

static BoolPropertyRNA rna_GreasePencilLayer_use_lights_;
PropertyRNA &rna_GreasePencilLayer_use_lights = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_use_lights_);

static IntPropertyRNA rna_GreasePencilLayer_pass_index_;
PropertyRNA &rna_GreasePencilLayer_pass_index = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_pass_index_);

static PointerPropertyRNA rna_GreasePencilLayer_parent_;
PropertyRNA &rna_GreasePencilLayer_parent = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_parent_);

static StringPropertyRNA rna_GreasePencilLayer_parent_bone_;
PropertyRNA &rna_GreasePencilLayer_parent_bone = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_parent_bone_);

static FloatPropertyRNA rna_GreasePencilLayer_translation_;
PropertyRNA &rna_GreasePencilLayer_translation = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_translation_);

static FloatPropertyRNA rna_GreasePencilLayer_rotation_;
PropertyRNA &rna_GreasePencilLayer_rotation = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_rotation_);

static FloatPropertyRNA rna_GreasePencilLayer_scale_;
PropertyRNA &rna_GreasePencilLayer_scale = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_scale_);

static StringPropertyRNA rna_GreasePencilLayer_viewlayer_render_;
PropertyRNA &rna_GreasePencilLayer_viewlayer_render = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_viewlayer_render_);

static BoolPropertyRNA rna_GreasePencilLayer_use_viewlayer_masks_;
PropertyRNA &rna_GreasePencilLayer_use_viewlayer_masks = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_use_viewlayer_masks_);

static EnumPropertyRNA rna_GreasePencilLayer_blend_mode_;
PropertyRNA &rna_GreasePencilLayer_blend_mode = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_blend_mode_);

static BoolPropertyRNA rna_GreasePencilLayer_ignore_locked_materials_;
PropertyRNA &rna_GreasePencilLayer_ignore_locked_materials = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_ignore_locked_materials_);

static FloatPropertyRNA rna_GreasePencilLayer_matrix_local_;
PropertyRNA &rna_GreasePencilLayer_matrix_local = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_matrix_local_);

static FloatPropertyRNA rna_GreasePencilLayer_matrix_parent_inverse_;
PropertyRNA &rna_GreasePencilLayer_matrix_parent_inverse = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_matrix_parent_inverse_);

static IntPropertyRNA rna_GreasePencilLayer_get_frame_at_frame_number_;
PropertyRNA &rna_GreasePencilLayer_get_frame_at_frame_number = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_get_frame_at_frame_number_);

static PointerPropertyRNA rna_GreasePencilLayer_get_frame_at_frame_;
PropertyRNA &rna_GreasePencilLayer_get_frame_at_frame = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_get_frame_at_frame_);

FunctionRNA *rna_GreasePencilLayer_get_frame_at_func;
static PointerPropertyRNA rna_GreasePencilLayer_current_frame_frame_;
PropertyRNA &rna_GreasePencilLayer_current_frame_frame = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayer_current_frame_frame_);

FunctionRNA *rna_GreasePencilLayer_current_frame_func;
StructRNA *RNA_GreasePencilLayer;
void register_struct_GreasePencilLayer(BlenderRNA &brna)
{
	rna_GreasePencilLayer_frames_ = {
		{&rna_GreasePencilLayer_mask_layers, 	nullptr,
		-1, "frames", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frames",
		"Grease Pencil frames",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_GreasePencilFrames},
		GreasePencilLayer_frames_begin, GreasePencilLayer_frames_next, GreasePencilLayer_frames_end, GreasePencilLayer_frames_get, GreasePencilLayer_frames_length, GreasePencilLayer_frames_lookup_int, nullptr, nullptr, RNA_GreasePencilFrame
	};

	rna_GreasePencilLayer_mask_layers_ = {
		{&rna_GreasePencilLayer_lock_frame, 	&rna_GreasePencilLayer_frames,
		-1, "mask_layers", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Masks",
		"List of Masking Layers",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_GreasePencilLayerMasks},
		GreasePencilLayer_mask_layers_begin, GreasePencilLayer_mask_layers_next, GreasePencilLayer_mask_layers_end, GreasePencilLayer_mask_layers_get, nullptr, GreasePencilLayer_mask_layers_lookup_int, GreasePencilLayer_mask_layers_lookup_string, nullptr, RNA_GreasePencilLayerMask
	};

	rna_GreasePencilLayer_lock_frame_ = {
		{&rna_GreasePencilLayer_opacity, 	&rna_GreasePencilLayer_mask_layers,
		-1, "lock_frame", 4097, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame Locked",
		"Lock current frame displayed by layer",
		41, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_lock_frame_get, GreasePencilLayer_lock_frame_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilLayer_opacity_ = {
		{&rna_GreasePencilLayer_tint_color, 	&rna_GreasePencilLayer_lock_frame,
		-1, "opacity", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Opacity",
		"Layer Opacity",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencilLayer, opacity), RawPropertyType(5), nullptr},
		GreasePencilLayer_opacity_get, GreasePencilLayer_opacity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_GreasePencilLayer_tint_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_GreasePencilLayer_tint_color_ = {
		{&rna_GreasePencilLayer_tint_factor, 	&rna_GreasePencilLayer_opacity,
		-1, "tint_color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tint Color",
		"Color for tinting stroke colors",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, GreasePencilLayer_tint_color_get, GreasePencilLayer_tint_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_GreasePencilLayer_tint_color_default
	};

	rna_GreasePencilLayer_tint_factor_ = {
		{&rna_GreasePencilLayer_radius_offset, 	&rna_GreasePencilLayer_tint_color,
		-1, "tint_factor", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tint Factor",
		"Factor of tinting color",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_tint_factor_get, GreasePencilLayer_tint_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GreasePencilLayer_radius_offset_ = {
		{&rna_GreasePencilLayer_use_lights, 	&rna_GreasePencilLayer_tint_factor,
		-1, "radius_offset", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Radius Offset",
		"Radius change to apply to current strokes",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_radius_offset_get, GreasePencilLayer_radius_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_GreasePencilLayer_use_lights_ = {
		{&rna_GreasePencilLayer_pass_index, 	&rna_GreasePencilLayer_radius_offset,
		-1, "use_lights", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Lights",
		"Enable the use of lights on stroke and fill materials",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_use_lights_get, GreasePencilLayer_use_lights_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilLayer_pass_index_ = {
		{&rna_GreasePencilLayer_parent, 	&rna_GreasePencilLayer_use_lights,
		-1, "pass_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Pass Index",
		"Index number for the \"Layer Index\" pass",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_pass_index_get, GreasePencilLayer_pass_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilLayer_parent_ = {
		{&rna_GreasePencilLayer_parent_bone, 	&rna_GreasePencilLayer_pass_index,
		-1, "parent", 9437313, 1, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"Parent object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_dependency_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_parent_get, GreasePencilLayer_parent_set, nullptr, nullptr,RNA_Object
	};

	rna_GreasePencilLayer_parent_bone_ = {
		{&rna_GreasePencilLayer_translation, 	&rna_GreasePencilLayer_parent,
		-1, "parent_bone", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parent Bone",
		"Name of parent bone. Only used when the parent object is an armature.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_dependency_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_parent_bone_get, GreasePencilLayer_parent_bone_length, GreasePencilLayer_parent_bone_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	static float rna_GreasePencilLayer_translation_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_GreasePencilLayer_translation_ = {
		{&rna_GreasePencilLayer_rotation, 	&rna_GreasePencilLayer_parent_bone,
		-1, "translation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Translation",
		"Translation of the layer",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencilLayer, translation), RawPropertyType(5), nullptr},
		nullptr, nullptr, GreasePencilLayer_translation_get, GreasePencilLayer_translation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_GreasePencilLayer_translation_default
	};

	static float rna_GreasePencilLayer_rotation_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_GreasePencilLayer_rotation_ = {
		{&rna_GreasePencilLayer_scale, 	&rna_GreasePencilLayer_translation,
		-1, "rotation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rotation",
		"Euler rotation of the layer",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_EULER) | int(PROP_UNIT_ROTATION)), nullptr, 1, {3, 0, 0}, 3,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencilLayer, rotation), RawPropertyType(5), nullptr},
		nullptr, nullptr, GreasePencilLayer_rotation_get, GreasePencilLayer_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_GreasePencilLayer_rotation_default
	};

	static float rna_GreasePencilLayer_scale_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_GreasePencilLayer_scale_ = {
		{&rna_GreasePencilLayer_viewlayer_render, 	&rna_GreasePencilLayer_rotation,
		-1, "scale", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale",
		"Scale of the layer",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencilLayer, scale), RawPropertyType(5), nullptr},
		nullptr, nullptr, GreasePencilLayer_scale_get, GreasePencilLayer_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_GreasePencilLayer_scale_default
	};

	rna_GreasePencilLayer_viewlayer_render_ = {
		{&rna_GreasePencilLayer_use_viewlayer_masks, 	&rna_GreasePencilLayer_scale,
		-1, "viewlayer_render", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "ViewLayer",
		"Only include Layer in this View Layer render output (leave blank to include always)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_viewlayer_render_get, GreasePencilLayer_viewlayer_render_length, GreasePencilLayer_viewlayer_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_GreasePencilLayer_use_viewlayer_masks_ = {
		{&rna_GreasePencilLayer_blend_mode, 	&rna_GreasePencilLayer_viewlayer_render,
		-1, "use_viewlayer_masks", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Masks in Render",
		"Include the mask layers when rendering the view-layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_use_viewlayer_masks_get, GreasePencilLayer_use_viewlayer_masks_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_GreasePencilLayer_blend_mode_items[7] = {
		{0, "REGULAR", 0, "Regular", ""	},
		{1, "HARDLIGHT", 0, "Hard Light", ""	},
		{2, "ADD", 0, "Add", ""	},
		{3, "SUBTRACT", 0, "Subtract", ""	},
		{4, "MULTIPLY", 0, "Multiply", ""	},
		{5, "DIVIDE", 0, "Divide", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencilLayer_blend_mode_ = {
		{&rna_GreasePencilLayer_ignore_locked_materials, 	&rna_GreasePencilLayer_use_viewlayer_masks,
		-1, "blend_mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Blend Mode",
		"Blend mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencilLayer, blend_mode), RawPropertyType(10), nullptr},
		GreasePencilLayer_blend_mode_get, GreasePencilLayer_blend_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencilLayer_blend_mode_items, 6, 0
	};

	rna_GreasePencilLayer_ignore_locked_materials_ = {
		{&rna_GreasePencilLayer_matrix_local, 	&rna_GreasePencilLayer_blend_mode,
		-1, "ignore_locked_materials", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ignore Material Locking",
		"Allow editing strokes even if they use locked materials",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayer_ignore_locked_materials_get, GreasePencilLayer_ignore_locked_materials_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_GreasePencilLayer_matrix_local_default[16] = {
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
	rna_GreasePencilLayer_matrix_local_ = {
		{&rna_GreasePencilLayer_matrix_parent_inverse, 	&rna_GreasePencilLayer_ignore_locked_materials,
		-1, "matrix_local", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Local Matrix",
		"Local transformation matrix of the layer",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, GreasePencilLayer_matrix_local_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_GreasePencilLayer_matrix_local_default
	};

	static float rna_GreasePencilLayer_matrix_parent_inverse_default[16] = {
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
	rna_GreasePencilLayer_matrix_parent_inverse_ = {
		{nullptr, 	&rna_GreasePencilLayer_matrix_local,
		-1, "matrix_parent_inverse", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inverse Parent Matrix",
		"Inverse of layer\'s parent transformation matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, GreasePencilLayer_matrix_parent_inverse_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_GreasePencilLayer_matrix_parent_inverse_default
	};

	StructRNA *srna = RNA_GreasePencilLayer;
	srna->cont.properties = {&rna_GreasePencilLayer_frames, &rna_GreasePencilLayer_matrix_parent_inverse};
	srna->identifier = "GreasePencilLayer";
	srna->flag = 516;
	srna->name = "Grease Pencil Layer";
	srna->description = "Collection of related drawings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_GreasePencilTreeNode_name;
	srna->iteratorproperty = &rna_GreasePencilTreeNode_rna_properties;
	srna->base = RNA_GreasePencilTreeNode;
	srna->refine = rna_GreasePencilTreeNode_refine;
	srna->path = rna_GreasePencilLayer_path;
	{
	rna_GreasePencilLayer_get_frame_at_frame_number_ = {
		{&rna_GreasePencilLayer_get_frame_at_frame, 	nullptr,
		-1, "frame_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame Number",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_GreasePencilLayer_get_frame_at_frame_ = {
		{nullptr, 	&rna_GreasePencilLayer_get_frame_at_frame_number,
		-1, "frame", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "Frame",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilFrame
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilLayer_get_frame_at_frame_number, &rna_GreasePencilLayer_get_frame_at_frame};
		func->identifier = "get_frame_at";
		func->description = "Get the frame at given frame number";
		func->call = GreasePencilLayer_get_frame_at_call;
		func->c_ret = &rna_GreasePencilLayer_get_frame_at_frame;
		rna_GreasePencilLayer_get_frame_at_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilLayer_current_frame_frame_ = {
		{nullptr, 	nullptr,
		-1, "frame", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilFrame
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilLayer_current_frame_frame, &rna_GreasePencilLayer_current_frame_frame};
		func->identifier = "current_frame";
		func->flag = 8;
		func->description = "The Grease Pencil frame at the current scene time on this layer";
		func->call = GreasePencilLayer_current_frame_call;
		func->c_ret = &rna_GreasePencilLayer_current_frame_frame;
		rna_GreasePencilLayer_current_frame_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Grease Pencil Frames */
static CollectionPropertyRNA rna_GreasePencilFrames_rna_properties_;
PropertyRNA &rna_GreasePencilFrames_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_rna_properties_);

static PointerPropertyRNA rna_GreasePencilFrames_rna_type_;
PropertyRNA &rna_GreasePencilFrames_rna_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_rna_type_);

static IntPropertyRNA rna_GreasePencilFrames_new_frame_number_;
PropertyRNA &rna_GreasePencilFrames_new_frame_number = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_new_frame_number_);

static PointerPropertyRNA rna_GreasePencilFrames_new_frame_;
PropertyRNA &rna_GreasePencilFrames_new_frame = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_new_frame_);

FunctionRNA *rna_GreasePencilFrames_new_func;
static IntPropertyRNA rna_GreasePencilFrames_remove_frame_number_;
PropertyRNA &rna_GreasePencilFrames_remove_frame_number = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_remove_frame_number_);

FunctionRNA *rna_GreasePencilFrames_remove_func;
static IntPropertyRNA rna_GreasePencilFrames_copy_from_frame_number_;
PropertyRNA &rna_GreasePencilFrames_copy_from_frame_number = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_copy_from_frame_number_);

static IntPropertyRNA rna_GreasePencilFrames_copy_to_frame_number_;
PropertyRNA &rna_GreasePencilFrames_copy_to_frame_number = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_copy_to_frame_number_);

static BoolPropertyRNA rna_GreasePencilFrames_copy_instance_drawing_;
PropertyRNA &rna_GreasePencilFrames_copy_instance_drawing = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_copy_instance_drawing_);

static PointerPropertyRNA rna_GreasePencilFrames_copy_copy_;
PropertyRNA &rna_GreasePencilFrames_copy_copy = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_copy_copy_);

FunctionRNA *rna_GreasePencilFrames_copy_func;
static IntPropertyRNA rna_GreasePencilFrames_move_from_frame_number_;
PropertyRNA &rna_GreasePencilFrames_move_from_frame_number = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_move_from_frame_number_);

static IntPropertyRNA rna_GreasePencilFrames_move_to_frame_number_;
PropertyRNA &rna_GreasePencilFrames_move_to_frame_number = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_move_to_frame_number_);

static PointerPropertyRNA rna_GreasePencilFrames_move_moved_;
PropertyRNA &rna_GreasePencilFrames_move_moved = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrames_move_moved_);

FunctionRNA *rna_GreasePencilFrames_move_func;
StructRNA *RNA_GreasePencilFrames;
void register_struct_GreasePencilFrames(BlenderRNA &brna)
{
	rna_GreasePencilFrames_rna_properties_ = {
		{&rna_GreasePencilFrames_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilFrames_rna_properties_begin, GreasePencilFrames_rna_properties_next, GreasePencilFrames_rna_properties_end, GreasePencilFrames_rna_properties_get, nullptr, nullptr, GreasePencilFrames_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GreasePencilFrames_rna_type_ = {
		{nullptr, 	&rna_GreasePencilFrames_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilFrames_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_GreasePencilFrames;
	srna->cont.properties = {&rna_GreasePencilFrames_rna_properties, &rna_GreasePencilFrames_rna_type};
	srna->identifier = "GreasePencilFrames";
	srna->flag = 516;
	srna->name = "Grease Pencil Frames";
	srna->description = "Collection of Grease Pencil frames";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GreasePencilFrames_rna_properties;
	{
	rna_GreasePencilFrames_new_frame_number_ = {
		{&rna_GreasePencilFrames_new_frame, 	nullptr,
		-1, "frame_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame Number",
		"The frame on which the drawing appears",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_GreasePencilFrames_new_frame_ = {
		{nullptr, 	&rna_GreasePencilFrames_new_frame_number,
		-1, "frame", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilFrame
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilFrames_new_frame_number, &rna_GreasePencilFrames_new_frame};
		func->identifier = "new";
		func->flag = 2064;
		func->description = "Add a new Grease Pencil frame";
		func->call = GreasePencilFrames_new_call;
		func->c_ret = &rna_GreasePencilFrames_new_frame;
		rna_GreasePencilFrames_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilFrames_remove_frame_number_ = {
		{nullptr, 	nullptr,
		-1, "frame_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame Number",
		"The frame number of the frame to remove",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilFrames_remove_frame_number, &rna_GreasePencilFrames_remove_frame_number};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove a Grease Pencil frame";
		func->call = GreasePencilFrames_remove_call;
		rna_GreasePencilFrames_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilFrames_copy_from_frame_number_ = {
		{&rna_GreasePencilFrames_copy_to_frame_number, 	nullptr,
		-1, "from_frame_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Source Frame Number",
		"The frame number of the source frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_GreasePencilFrames_copy_to_frame_number_ = {
		{&rna_GreasePencilFrames_copy_instance_drawing, 	&rna_GreasePencilFrames_copy_from_frame_number,
		-1, "to_frame_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Frame Number of Copy",
		"The frame number to copy the frame to",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 2, nullptr
	};
	rna_GreasePencilFrames_copy_instance_drawing_ = {
		{&rna_GreasePencilFrames_copy_copy, 	&rna_GreasePencilFrames_copy_to_frame_number,
		-1, "instance_drawing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Instance Drawing",
		"Let the copied frame use the same drawing as the source",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_GreasePencilFrames_copy_copy_ = {
		{nullptr, 	&rna_GreasePencilFrames_copy_instance_drawing,
		-1, "copy", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The newly copied frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilFrame
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilFrames_copy_from_frame_number, &rna_GreasePencilFrames_copy_copy};
		func->identifier = "copy";
		func->flag = 2064;
		func->description = "Copy a Grease Pencil frame";
		func->call = GreasePencilFrames_copy_call;
		func->c_ret = &rna_GreasePencilFrames_copy_copy;
		rna_GreasePencilFrames_copy_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilFrames_move_from_frame_number_ = {
		{&rna_GreasePencilFrames_move_to_frame_number, 	nullptr,
		-1, "from_frame_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Source Frame Number",
		"The frame number of the source frame",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 1, nullptr
	};
	rna_GreasePencilFrames_move_to_frame_number_ = {
		{&rna_GreasePencilFrames_move_moved, 	&rna_GreasePencilFrames_move_from_frame_number,
		-1, "to_frame_number", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Target Frame Number",
		"The frame number to move the frame to",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 2, nullptr
	};
	rna_GreasePencilFrames_move_moved_ = {
		{nullptr, 	&rna_GreasePencilFrames_move_to_frame_number,
		-1, "moved", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The moved frame",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilFrame
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilFrames_move_from_frame_number, &rna_GreasePencilFrames_move_moved};
		func->identifier = "move";
		func->flag = 2064;
		func->description = "Move a Grease Pencil frame";
		func->call = GreasePencilFrames_move_call;
		func->c_ret = &rna_GreasePencilFrames_move_moved;
		rna_GreasePencilFrames_move_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Grease Pencil Mask Layers */
static CollectionPropertyRNA rna_GreasePencilLayerMasks_rna_properties_;
PropertyRNA &rna_GreasePencilLayerMasks_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMasks_rna_properties_);

static PointerPropertyRNA rna_GreasePencilLayerMasks_rna_type_;
PropertyRNA &rna_GreasePencilLayerMasks_rna_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMasks_rna_type_);

static IntPropertyRNA rna_GreasePencilLayerMasks_active_mask_index_;
PropertyRNA &rna_GreasePencilLayerMasks_active_mask_index = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMasks_active_mask_index_);

static PointerPropertyRNA rna_GreasePencilLayerMasks_add_layer_;
PropertyRNA &rna_GreasePencilLayerMasks_add_layer = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMasks_add_layer_);

static PointerPropertyRNA rna_GreasePencilLayerMasks_add_mask_;
PropertyRNA &rna_GreasePencilLayerMasks_add_mask = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMasks_add_mask_);

FunctionRNA *rna_GreasePencilLayerMasks_add_func;
static PointerPropertyRNA rna_GreasePencilLayerMasks_remove_mask_;
PropertyRNA &rna_GreasePencilLayerMasks_remove_mask = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMasks_remove_mask_);

FunctionRNA *rna_GreasePencilLayerMasks_remove_func;
StructRNA *RNA_GreasePencilLayerMasks;
void register_struct_GreasePencilLayerMasks(BlenderRNA &brna)
{
	rna_GreasePencilLayerMasks_rna_properties_ = {
		{&rna_GreasePencilLayerMasks_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerMasks_rna_properties_begin, GreasePencilLayerMasks_rna_properties_next, GreasePencilLayerMasks_rna_properties_end, GreasePencilLayerMasks_rna_properties_get, nullptr, nullptr, GreasePencilLayerMasks_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GreasePencilLayerMasks_rna_type_ = {
		{&rna_GreasePencilLayerMasks_active_mask_index, 	&rna_GreasePencilLayerMasks_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerMasks_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GreasePencilLayerMasks_active_mask_index_ = {
		{nullptr, 	&rna_GreasePencilLayerMasks_rna_type,
		-1, "active_mask_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Layer Mask Index",
		"Active index in layer mask array",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerMasks_active_mask_index_get, GreasePencilLayerMasks_active_mask_index_set, nullptr, nullptr, rna_grease_pencil_active_mask_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_GreasePencilLayerMasks;
	srna->cont.properties = {&rna_GreasePencilLayerMasks_rna_properties, &rna_GreasePencilLayerMasks_active_mask_index};
	srna->identifier = "GreasePencilLayerMasks";
	srna->flag = 516;
	srna->name = "Grease Pencil Mask Layers";
	srna->description = "Collection of Grease Pencil masking layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GreasePencilLayerMasks_rna_properties;
	{
	rna_GreasePencilLayerMasks_add_layer_ = {
		{&rna_GreasePencilLayerMasks_add_mask, 	nullptr,
		-1, "layer", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Layer to add as a mask",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayer
	};
	rna_GreasePencilLayerMasks_add_mask_ = {
		{nullptr, 	&rna_GreasePencilLayerMasks_add_layer,
		-1, "mask", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The mask entry referencing the layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerMask
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilLayerMasks_add_layer, &rna_GreasePencilLayerMasks_add_mask};
		func->identifier = "add";
		func->flag = 16;
		func->description = "Add an existing layer as a mask to this layer";
		func->call = GreasePencilLayerMasks_add_call;
		func->c_ret = &rna_GreasePencilLayerMasks_add_mask;
		rna_GreasePencilLayerMasks_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilLayerMasks_remove_mask_ = {
		{nullptr, 	nullptr,
		-1, "mask", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Mask to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencilLayerMask
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilLayerMasks_remove_mask, &rna_GreasePencilLayerMasks_remove_mask};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a mask from the layer";
		func->call = GreasePencilLayerMasks_remove_call;
		rna_GreasePencilLayerMasks_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Grease Pencil Masking Layers */
static CollectionPropertyRNA rna_GreasePencilLayerMask_rna_properties_;
PropertyRNA &rna_GreasePencilLayerMask_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMask_rna_properties_);

static PointerPropertyRNA rna_GreasePencilLayerMask_rna_type_;
PropertyRNA &rna_GreasePencilLayerMask_rna_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMask_rna_type_);

static StringPropertyRNA rna_GreasePencilLayerMask_name_;
PropertyRNA &rna_GreasePencilLayerMask_name = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMask_name_);

static BoolPropertyRNA rna_GreasePencilLayerMask_hide_;
PropertyRNA &rna_GreasePencilLayerMask_hide = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMask_hide_);

static BoolPropertyRNA rna_GreasePencilLayerMask_invert_;
PropertyRNA &rna_GreasePencilLayerMask_invert = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerMask_invert_);

StructRNA *RNA_GreasePencilLayerMask;
void register_struct_GreasePencilLayerMask(BlenderRNA &brna)
{
	rna_GreasePencilLayerMask_rna_properties_ = {
		{&rna_GreasePencilLayerMask_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerMask_rna_properties_begin, GreasePencilLayerMask_rna_properties_next, GreasePencilLayerMask_rna_properties_end, GreasePencilLayerMask_rna_properties_get, nullptr, nullptr, GreasePencilLayerMask_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GreasePencilLayerMask_rna_type_ = {
		{&rna_GreasePencilLayerMask_name, 	&rna_GreasePencilLayerMask_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerMask_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GreasePencilLayerMask_name_ = {
		{&rna_GreasePencilLayerMask_hide, 	&rna_GreasePencilLayerMask_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layer",
		"Mask layer name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 391839749, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerMask_name_get, GreasePencilLayerMask_name_length, GreasePencilLayerMask_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_GreasePencilLayerMask_hide_ = {
		{&rna_GreasePencilLayerMask_invert, 	&rna_GreasePencilLayerMask_name,
		-1, "hide", 4355, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Set mask Visibility",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerMask_hide_get, GreasePencilLayerMask_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilLayerMask_invert_ = {
		{nullptr, 	&rna_GreasePencilLayerMask_hide,
		-1, "invert", 4099, 0, 0, 0, 0, PropertyPathTemplateType(0), "Invert",
		"Invert mask",
		35, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerMask_invert_get, GreasePencilLayerMask_invert_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_GreasePencilLayerMask;
	srna->cont.properties = {&rna_GreasePencilLayerMask_rna_properties, &rna_GreasePencilLayerMask_invert};
	srna->identifier = "GreasePencilLayerMask";
	srna->flag = 516;
	srna->name = "Grease Pencil Masking Layers";
	srna->description = "List of Mask Layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_GreasePencilLayerMask_name;
	srna->iteratorproperty = &rna_GreasePencilLayerMask_rna_properties;
};

/* Grease Pencil Layer Group */
static BoolPropertyRNA rna_GreasePencilLayerGroup_is_expanded_;
PropertyRNA &rna_GreasePencilLayerGroup_is_expanded = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerGroup_is_expanded_);

static EnumPropertyRNA rna_GreasePencilLayerGroup_color_tag_;
PropertyRNA &rna_GreasePencilLayerGroup_color_tag = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerGroup_color_tag_);

static CollectionPropertyRNA rna_GreasePencilLayerGroup_children_;
PropertyRNA &rna_GreasePencilLayerGroup_children = reinterpret_cast<PropertyRNA &>(rna_GreasePencilLayerGroup_children_);

StructRNA *RNA_GreasePencilLayerGroup;
void register_struct_GreasePencilLayerGroup(BlenderRNA &brna)
{
	rna_GreasePencilLayerGroup_is_expanded_ = {
		{&rna_GreasePencilLayerGroup_color_tag, 	nullptr,
		-1, "is_expanded", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Expanded",
		"The layer group is expanded in the UI",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerGroup_is_expanded_get, GreasePencilLayerGroup_is_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_GreasePencilLayerGroup_color_tag_items[10] = {
		{-1, "NONE", 112, "Reset color tag", ""	},
		{0, "COLOR1", 833, "Color tag 1", ""	},
		{1, "COLOR2", 834, "Color tag 2", ""	},
		{2, "COLOR3", 835, "Color tag 3", ""	},
		{3, "COLOR4", 836, "Color tag 4", ""	},
		{4, "COLOR5", 837, "Color tag 5", ""	},
		{5, "COLOR6", 838, "Color tag 6", ""	},
		{6, "COLOR7", 839, "Color tag 7", ""	},
		{7, "COLOR8", 840, "Color tag 8", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencilLayerGroup_color_tag_ = {
		{&rna_GreasePencilLayerGroup_children, 	&rna_GreasePencilLayerGroup_is_expanded,
		-1, "color_tag", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "color_tag",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerGroup_color_tag_get, GreasePencilLayerGroup_color_tag_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencilLayerGroup_color_tag_items, 9, 0
	};

	rna_GreasePencilLayerGroup_children_ = {
		{nullptr, 	&rna_GreasePencilLayerGroup_color_tag,
		-1, "children", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Children",
		"The direct children of this layer group. Ordered by stack order, meaning the first child is the bottom most child in the layer tree.",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilLayerGroup_children_begin, GreasePencilLayerGroup_children_next, GreasePencilLayerGroup_children_end, GreasePencilLayerGroup_children_get, GreasePencilLayerGroup_children_length, GreasePencilLayerGroup_children_lookup_int, GreasePencilLayerGroup_children_lookup_string, nullptr, RNA_GreasePencilTreeNode
	};

	StructRNA *srna = RNA_GreasePencilLayerGroup;
	srna->cont.properties = {&rna_GreasePencilLayerGroup_is_expanded, &rna_GreasePencilLayerGroup_children};
	srna->identifier = "GreasePencilLayerGroup";
	srna->flag = 516;
	srna->name = "Grease Pencil Layer Group";
	srna->description = "Group of Grease Pencil layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_GreasePencilTreeNode_name;
	srna->iteratorproperty = &rna_GreasePencilTreeNode_rna_properties;
	srna->base = RNA_GreasePencilTreeNode;
	srna->refine = rna_GreasePencilTreeNode_refine;
	srna->path = rna_GreasePencilLayerGroup_path;
};

/* Grease Pencil Frame */
static CollectionPropertyRNA rna_GreasePencilFrame_rna_properties_;
PropertyRNA &rna_GreasePencilFrame_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrame_rna_properties_);

static PointerPropertyRNA rna_GreasePencilFrame_rna_type_;
PropertyRNA &rna_GreasePencilFrame_rna_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrame_rna_type_);

static PointerPropertyRNA rna_GreasePencilFrame_drawing_;
PropertyRNA &rna_GreasePencilFrame_drawing = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrame_drawing_);

static IntPropertyRNA rna_GreasePencilFrame_frame_number_;
PropertyRNA &rna_GreasePencilFrame_frame_number = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrame_frame_number_);

static BoolPropertyRNA rna_GreasePencilFrame_select_;
PropertyRNA &rna_GreasePencilFrame_select = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrame_select_);

static EnumPropertyRNA rna_GreasePencilFrame_keyframe_type_;
PropertyRNA &rna_GreasePencilFrame_keyframe_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilFrame_keyframe_type_);

StructRNA *RNA_GreasePencilFrame;
void register_struct_GreasePencilFrame(BlenderRNA &brna)
{
	rna_GreasePencilFrame_rna_properties_ = {
		{&rna_GreasePencilFrame_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilFrame_rna_properties_begin, GreasePencilFrame_rna_properties_next, GreasePencilFrame_rna_properties_end, GreasePencilFrame_rna_properties_get, nullptr, nullptr, GreasePencilFrame_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GreasePencilFrame_rna_type_ = {
		{&rna_GreasePencilFrame_drawing, 	&rna_GreasePencilFrame_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilFrame_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GreasePencilFrame_drawing_ = {
		{&rna_GreasePencilFrame_frame_number, 	&rna_GreasePencilFrame_rna_type,
		-1, "drawing", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Drawing",
		"A Grease Pencil drawing",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilFrame_drawing_get, GreasePencilFrame_drawing_set, nullptr, nullptr,RNA_GreasePencilDrawing
	};

	rna_GreasePencilFrame_frame_number_ = {
		{&rna_GreasePencilFrame_select, 	&rna_GreasePencilFrame_drawing,
		-1, "frame_number", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Frame Number",
		"The frame number in the scene",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilFrame_frame_number_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1048574, 1048574, -1048574, 1048574, 1, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilFrame_select_ = {
		{&rna_GreasePencilFrame_keyframe_type, 	&rna_GreasePencilFrame_frame_number,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Frame Selection in the Dope Sheet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilFrame_select_get, GreasePencilFrame_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_GreasePencilFrame_keyframe_type_items[7] = {
		{0, "KEYFRAME", 790, "Keyframe", "Normal keyframe, e.g. for key poses"	},
		{2, "BREAKDOWN", 791, "Breakdown", "A breakdown pose, e.g. for transitions between key poses"	},
		{4, "MOVING_HOLD", 794, "Moving Hold", "A keyframe that is part of a moving hold"	},
		{1, "EXTREME", 792, "Extreme", "An \'extreme\' pose, or some other purpose as needed"	},
		{3, "JITTER", 793, "Jitter", "A filler or baked keyframe for keying on ones, or some other purpose as needed"	},
		{5, "GENERATED", 795, "Generated", "A key generated automatically by a tool, not manually created"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencilFrame_keyframe_type_ = {
		{nullptr, 	&rna_GreasePencilFrame_select,
		-1, "keyframe_type", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Keyframe Type",
		"Type of keyframe",
		0, "GPencil",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencilFrame, type), RawPropertyType(10), nullptr},
		GreasePencilFrame_keyframe_type_get, GreasePencilFrame_keyframe_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencilFrame_keyframe_type_items, 6, 0
	};

	StructRNA *srna = RNA_GreasePencilFrame;
	srna->cont.properties = {&rna_GreasePencilFrame_rna_properties, &rna_GreasePencilFrame_keyframe_type};
	srna->identifier = "GreasePencilFrame";
	srna->flag = 516;
	srna->name = "Grease Pencil Frame";
	srna->description = "A Grease Pencil keyframe";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GreasePencilFrame_rna_properties;
};

/* Grease Pencil Drawing */
static CollectionPropertyRNA rna_GreasePencilDrawing_rna_properties_;
PropertyRNA &rna_GreasePencilDrawing_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_rna_properties_);

static PointerPropertyRNA rna_GreasePencilDrawing_rna_type_;
PropertyRNA &rna_GreasePencilDrawing_rna_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_rna_type_);

static EnumPropertyRNA rna_GreasePencilDrawing_type_;
PropertyRNA &rna_GreasePencilDrawing_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_type_);

static IntPropertyRNA rna_GreasePencilDrawing_user_count_;
PropertyRNA &rna_GreasePencilDrawing_user_count = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_user_count_);

static CollectionPropertyRNA rna_GreasePencilDrawing_curve_offsets_;
PropertyRNA &rna_GreasePencilDrawing_curve_offsets = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_curve_offsets_);

static CollectionPropertyRNA rna_GreasePencilDrawing_attributes_;
PropertyRNA &rna_GreasePencilDrawing_attributes = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_attributes_);

static CollectionPropertyRNA rna_GreasePencilDrawing_color_attributes_;
PropertyRNA &rna_GreasePencilDrawing_color_attributes = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_color_attributes_);

static IntPropertyRNA rna_GreasePencilDrawing_add_strokes_sizes_;
PropertyRNA &rna_GreasePencilDrawing_add_strokes_sizes = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_add_strokes_sizes_);

FunctionRNA *rna_GreasePencilDrawing_add_strokes_func;
static IntPropertyRNA rna_GreasePencilDrawing_remove_strokes_indices_;
PropertyRNA &rna_GreasePencilDrawing_remove_strokes_indices = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_remove_strokes_indices_);

FunctionRNA *rna_GreasePencilDrawing_remove_strokes_func;
static IntPropertyRNA rna_GreasePencilDrawing_resize_strokes_sizes_;
PropertyRNA &rna_GreasePencilDrawing_resize_strokes_sizes = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_resize_strokes_sizes_);

static IntPropertyRNA rna_GreasePencilDrawing_resize_strokes_indices_;
PropertyRNA &rna_GreasePencilDrawing_resize_strokes_indices = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_resize_strokes_indices_);

FunctionRNA *rna_GreasePencilDrawing_resize_strokes_func;
static IntPropertyRNA rna_GreasePencilDrawing_reorder_strokes_new_indices_;
PropertyRNA &rna_GreasePencilDrawing_reorder_strokes_new_indices = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_reorder_strokes_new_indices_);

FunctionRNA *rna_GreasePencilDrawing_reorder_strokes_func;
static EnumPropertyRNA rna_GreasePencilDrawing_set_types_type_;
PropertyRNA &rna_GreasePencilDrawing_set_types_type = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_set_types_type_);

static IntPropertyRNA rna_GreasePencilDrawing_set_types_indices_;
PropertyRNA &rna_GreasePencilDrawing_set_types_indices = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_set_types_indices_);

FunctionRNA *rna_GreasePencilDrawing_set_types_func;
FunctionRNA *rna_GreasePencilDrawing_tag_positions_changed_func;
static StringPropertyRNA rna_GreasePencilDrawing_vertex_group_assign_vgroup_name_;
PropertyRNA &rna_GreasePencilDrawing_vertex_group_assign_vgroup_name = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_vertex_group_assign_vgroup_name_);

static IntPropertyRNA rna_GreasePencilDrawing_vertex_group_assign_indices_ptr_;
PropertyRNA &rna_GreasePencilDrawing_vertex_group_assign_indices_ptr = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_vertex_group_assign_indices_ptr_);

static FloatPropertyRNA rna_GreasePencilDrawing_vertex_group_assign_weight_;
PropertyRNA &rna_GreasePencilDrawing_vertex_group_assign_weight = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_vertex_group_assign_weight_);

FunctionRNA *rna_GreasePencilDrawing_vertex_group_assign_func;
static StringPropertyRNA rna_GreasePencilDrawing_vertex_group_remove_vgroup_name_;
PropertyRNA &rna_GreasePencilDrawing_vertex_group_remove_vgroup_name = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_vertex_group_remove_vgroup_name_);

static IntPropertyRNA rna_GreasePencilDrawing_vertex_group_remove_indices_ptr_;
PropertyRNA &rna_GreasePencilDrawing_vertex_group_remove_indices_ptr = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_vertex_group_remove_indices_ptr_);

FunctionRNA *rna_GreasePencilDrawing_vertex_group_remove_func;
static StringPropertyRNA rna_GreasePencilDrawing_set_vertex_weights_vertex_group_name_;
PropertyRNA &rna_GreasePencilDrawing_set_vertex_weights_vertex_group_name = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_set_vertex_weights_vertex_group_name_);

static IntPropertyRNA rna_GreasePencilDrawing_set_vertex_weights_indices_;
PropertyRNA &rna_GreasePencilDrawing_set_vertex_weights_indices = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_set_vertex_weights_indices_);

static FloatPropertyRNA rna_GreasePencilDrawing_set_vertex_weights_weights_;
PropertyRNA &rna_GreasePencilDrawing_set_vertex_weights_weights = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_set_vertex_weights_weights_);

static EnumPropertyRNA rna_GreasePencilDrawing_set_vertex_weights_assign_mode_;
PropertyRNA &rna_GreasePencilDrawing_set_vertex_weights_assign_mode = reinterpret_cast<PropertyRNA &>(rna_GreasePencilDrawing_set_vertex_weights_assign_mode_);

FunctionRNA *rna_GreasePencilDrawing_set_vertex_weights_func;
StructRNA *RNA_GreasePencilDrawing;
void register_struct_GreasePencilDrawing(BlenderRNA &brna)
{
	rna_GreasePencilDrawing_rna_properties_ = {
		{&rna_GreasePencilDrawing_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilDrawing_rna_properties_begin, GreasePencilDrawing_rna_properties_next, GreasePencilDrawing_rna_properties_end, GreasePencilDrawing_rna_properties_get, nullptr, nullptr, GreasePencilDrawing_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GreasePencilDrawing_rna_type_ = {
		{&rna_GreasePencilDrawing_type, 	&rna_GreasePencilDrawing_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilDrawing_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_GreasePencilDrawing_type_items[3] = {
		{0, "DRAWING", 0, "Drawing", ""	},
		{1, "REFERENCE", 0, "Reference", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencilDrawing_type_ = {
		{&rna_GreasePencilDrawing_user_count, 	&rna_GreasePencilDrawing_rna_type,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"Drawing type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(GreasePencilDrawing, base.type), RawPropertyType(10), nullptr},
		GreasePencilDrawing_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencilDrawing_type_items, 2, 0
	};

	rna_GreasePencilDrawing_user_count_ = {
		{&rna_GreasePencilDrawing_curve_offsets, 	&rna_GreasePencilDrawing_type,
		-1, "user_count", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "User Count",
		"The number of keyframes this drawing is used by",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 391839744, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilDrawing_user_count_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_GreasePencilDrawing_curve_offsets_ = {
		{&rna_GreasePencilDrawing_attributes, 	&rna_GreasePencilDrawing_user_count,
		-1, "curve_offsets", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Curve Offsets",
		"Offset indices of the first point of each curve",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_grease_pencil_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GreasePencilDrawing_curve_offsets_begin, GreasePencilDrawing_curve_offsets_next, GreasePencilDrawing_curve_offsets_end, GreasePencilDrawing_curve_offsets_get, GreasePencilDrawing_curve_offsets_length, GreasePencilDrawing_curve_offsets_lookup_int, nullptr, nullptr, RNA_IntAttributeValue
	};

	rna_GreasePencilDrawing_attributes_ = {
		{&rna_GreasePencilDrawing_color_attributes, 	&rna_GreasePencilDrawing_curve_offsets,
		-1, "attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Attributes",
		"Geometry attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupGreasePencilDrawing},
		GreasePencilDrawing_attributes_begin, GreasePencilDrawing_attributes_next, GreasePencilDrawing_attributes_end, GreasePencilDrawing_attributes_get, GreasePencilDrawing_attributes_length, GreasePencilDrawing_attributes_lookup_int, GreasePencilDrawing_attributes_lookup_string, nullptr, RNA_Attribute
	};

	rna_GreasePencilDrawing_color_attributes_ = {
		{nullptr, 	&rna_GreasePencilDrawing_attributes,
		-1, "color_attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Attributes",
		"Geometry color attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupGreasePencilDrawing},
		GreasePencilDrawing_color_attributes_begin, GreasePencilDrawing_color_attributes_next, GreasePencilDrawing_color_attributes_end, GreasePencilDrawing_color_attributes_get, GreasePencilDrawing_color_attributes_length, GreasePencilDrawing_color_attributes_lookup_int, nullptr, nullptr, RNA_Attribute
	};

	StructRNA *srna = RNA_GreasePencilDrawing;
	srna->cont.properties = {&rna_GreasePencilDrawing_rna_properties, &rna_GreasePencilDrawing_color_attributes};
	srna->identifier = "GreasePencilDrawing";
	srna->flag = 516;
	srna->name = "Grease Pencil Drawing";
	srna->description = "A Grease Pencil drawing";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GreasePencilDrawing_rna_properties;
	{
	static int rna_GreasePencilDrawing_add_strokes_sizes_default[1] = {
		0
	};
	rna_GreasePencilDrawing_add_strokes_sizes_ = {
		{nullptr, 	nullptr,
		-1, "sizes", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "Sizes",
		"The number of points in each stroke",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_add_strokes_sizes_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilDrawing_add_strokes_sizes, &rna_GreasePencilDrawing_add_strokes_sizes};
		func->identifier = "add_strokes";
		func->flag = 2064;
		func->description = "Add new strokes with provided sizes at the end";
		func->call = GreasePencilDrawing_add_strokes_call;
		rna_GreasePencilDrawing_add_strokes_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static int rna_GreasePencilDrawing_remove_strokes_indices_default[1] = {
		0
	};
	rna_GreasePencilDrawing_remove_strokes_indices_ = {
		{nullptr, 	nullptr,
		-1, "indices", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The indices of the strokes to remove",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_remove_strokes_indices_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilDrawing_remove_strokes_indices, &rna_GreasePencilDrawing_remove_strokes_indices};
		func->identifier = "remove_strokes";
		func->flag = 2064;
		func->description = "Remove all strokes. If indices are provided, remove only the strokes with the given indices.";
		func->call = GreasePencilDrawing_remove_strokes_call;
		rna_GreasePencilDrawing_remove_strokes_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static int rna_GreasePencilDrawing_resize_strokes_sizes_default[1] = {
		0
	};
	rna_GreasePencilDrawing_resize_strokes_sizes_ = {
		{&rna_GreasePencilDrawing_resize_strokes_indices, 	nullptr,
		-1, "sizes", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "Sizes",
		"The number of points in each stroke",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 10000, 1, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_resize_strokes_sizes_default
	};
	static int rna_GreasePencilDrawing_resize_strokes_indices_default[1] = {
		0
	};
	rna_GreasePencilDrawing_resize_strokes_indices_ = {
		{nullptr, 	&rna_GreasePencilDrawing_resize_strokes_sizes,
		-1, "indices", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The indices of the stroke to resize",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_resize_strokes_indices_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilDrawing_resize_strokes_sizes, &rna_GreasePencilDrawing_resize_strokes_indices};
		func->identifier = "resize_strokes";
		func->flag = 2064;
		func->description = "Resize all existing strokes. If indices are provided, resize only the strokes with the given indices. If the new size for a stroke is smaller, the stroke is trimmed. If the new size for a stroke is larger, the new end values are default initialized.";
		func->call = GreasePencilDrawing_resize_strokes_call;
		rna_GreasePencilDrawing_resize_strokes_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static int rna_GreasePencilDrawing_reorder_strokes_new_indices_default[1] = {
		0
	};
	rna_GreasePencilDrawing_reorder_strokes_new_indices_ = {
		{nullptr, 	nullptr,
		-1, "new_indices", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "New indices",
		"The new index for each of the strokes",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_reorder_strokes_new_indices_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilDrawing_reorder_strokes_new_indices, &rna_GreasePencilDrawing_reorder_strokes_new_indices};
		func->identifier = "reorder_strokes";
		func->flag = 2064;
		func->description = "Reorder the strokes by the new indices.";
		func->call = GreasePencilDrawing_reorder_strokes_call;
		rna_GreasePencilDrawing_reorder_strokes_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilDrawing_set_types_type_ = {
		{&rna_GreasePencilDrawing_set_types_indices, 	nullptr,
		-1, "type", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_curves_type_items, 4, 0
	};
	static int rna_GreasePencilDrawing_set_types_indices_default[1] = {
		0
	};
	rna_GreasePencilDrawing_set_types_indices_ = {
		{nullptr, 	&rna_GreasePencilDrawing_set_types_type,
		-1, "indices", 131075, 0, 0, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The indices of the curves to resize",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_set_types_indices_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilDrawing_set_types_type, &rna_GreasePencilDrawing_set_types_indices};
		func->identifier = "set_types";
		func->flag = 2064;
		func->description = "Set the curve type. If indices are provided, set only the types with the given curve indices.";
		func->call = GreasePencilDrawing_set_types_call;
		rna_GreasePencilDrawing_set_types_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "tag_positions_changed";
		func->description = "Indicate that the positions of points in the drawing have changed";
		func->call = GreasePencilDrawing_tag_positions_changed_call;
		rna_GreasePencilDrawing_tag_positions_changed_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilDrawing_vertex_group_assign_vgroup_name_ = {
		{&rna_GreasePencilDrawing_vertex_group_assign_indices_ptr, 	nullptr,
		-1, "vgroup_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Vertex Group Name",
		"Name of the vertex group",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "Group"
	};
	static int rna_GreasePencilDrawing_vertex_group_assign_indices_ptr_default[1] = {
		0
	};
	rna_GreasePencilDrawing_vertex_group_assign_indices_ptr_ = {
		{&rna_GreasePencilDrawing_vertex_group_assign_weight, 	&rna_GreasePencilDrawing_vertex_group_assign_vgroup_name,
		-1, "indices_ptr", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The point indices to assign the weight to",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_vertex_group_assign_indices_ptr_default
	};
	rna_GreasePencilDrawing_vertex_group_assign_weight_ = {
		{nullptr, 	&rna_GreasePencilDrawing_vertex_group_assign_indices_ptr,
		-1, "weight", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Vertex weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilDrawing_vertex_group_assign_vgroup_name, &rna_GreasePencilDrawing_vertex_group_assign_weight};
		func->identifier = "vertex_group_assign";
		func->flag = 2064;
		func->description = "Assign points to vertex group";
		func->call = GreasePencilDrawing_vertex_group_assign_call;
		rna_GreasePencilDrawing_vertex_group_assign_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilDrawing_vertex_group_remove_vgroup_name_ = {
		{&rna_GreasePencilDrawing_vertex_group_remove_indices_ptr, 	nullptr,
		-1, "vgroup_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Vertex Group Name",
		"Name of the vertex group",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "Group"
	};
	static int rna_GreasePencilDrawing_vertex_group_remove_indices_ptr_default[1] = {
		0
	};
	rna_GreasePencilDrawing_vertex_group_remove_indices_ptr_ = {
		{nullptr, 	&rna_GreasePencilDrawing_vertex_group_remove_vgroup_name,
		-1, "indices_ptr", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The point indices to remove from the vertex group",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_vertex_group_remove_indices_ptr_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilDrawing_vertex_group_remove_vgroup_name, &rna_GreasePencilDrawing_vertex_group_remove_indices_ptr};
		func->identifier = "vertex_group_remove";
		func->flag = 2064;
		func->description = "Remove points from vertex group";
		func->call = GreasePencilDrawing_vertex_group_remove_call;
		rna_GreasePencilDrawing_vertex_group_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GreasePencilDrawing_set_vertex_weights_vertex_group_name_ = {
		{&rna_GreasePencilDrawing_set_vertex_weights_indices, 	nullptr,
		-1, "vertex_group_name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Vertex Group Name",
		"Name of the vertex group",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, "Group"
	};
	static int rna_GreasePencilDrawing_set_vertex_weights_indices_default[1] = {
		0
	};
	rna_GreasePencilDrawing_set_vertex_weights_indices_ = {
		{&rna_GreasePencilDrawing_set_vertex_weights_weights, 	&rna_GreasePencilDrawing_set_vertex_weights_vertex_group_name,
		-1, "indices", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "Indices",
		"The point indices in the vertex group to modify",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_GreasePencilDrawing_set_vertex_weights_indices_default
	};
	static float rna_GreasePencilDrawing_set_vertex_weights_weights_default[1] = {
		0.0f
	};
	rna_GreasePencilDrawing_set_vertex_weights_weights_ = {
		{&rna_GreasePencilDrawing_set_vertex_weights_assign_mode, 	&rna_GreasePencilDrawing_set_vertex_weights_indices,
		-1, "weights", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "Weights",
		"The weight for each corresponding index in the indices array",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_GreasePencilDrawing_set_vertex_weights_weights_default
	};
	static const EnumPropertyItem rna_GreasePencilDrawing_set_vertex_weights_assign_mode_items[4] = {
		{1, "REPLACE", 0, "Replace", "Replace"	},
		{2, "ADD", 0, "Add", "Add"	},
		{3, "SUBTRACT", 0, "Subtract", "Subtract"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GreasePencilDrawing_set_vertex_weights_assign_mode_ = {
		{nullptr, 	&rna_GreasePencilDrawing_set_vertex_weights_weights,
		-1, "assign_mode", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GreasePencilDrawing_set_vertex_weights_assign_mode_items, 3, 1
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GreasePencilDrawing_set_vertex_weights_vertex_group_name, &rna_GreasePencilDrawing_set_vertex_weights_assign_mode};
		func->identifier = "set_vertex_weights";
		func->flag = 2064;
		func->description = "Set the weights of vertices in a grease pencil drawing";
		func->call = GreasePencilDrawing_set_vertex_weights_call;
		rna_GreasePencilDrawing_set_vertex_weights_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
