
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

#include "rna_armature.cc"
#include "rna_armature_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_BoneColor_rna_properties;
extern PropertyRNA &rna_BoneColor_rna_type;
extern PropertyRNA &rna_BoneColor_palette;
extern PropertyRNA &rna_BoneColor_is_custom;
extern PropertyRNA &rna_BoneColor_custom;


extern PropertyRNA &rna_BoneCollection_rna_properties;
extern PropertyRNA &rna_BoneCollection_rna_type;
extern PropertyRNA &rna_BoneCollection_name;
extern PropertyRNA &rna_BoneCollection_is_expanded;
extern PropertyRNA &rna_BoneCollection_is_visible;
extern PropertyRNA &rna_BoneCollection_is_visible_ancestors;
extern PropertyRNA &rna_BoneCollection_is_visible_effectively;
extern PropertyRNA &rna_BoneCollection_is_solo;
extern PropertyRNA &rna_BoneCollection_is_local_override;
extern PropertyRNA &rna_BoneCollection_is_editable;
extern PropertyRNA &rna_BoneCollection_bones;
extern PropertyRNA &rna_BoneCollection_children;
extern PropertyRNA &rna_BoneCollection_parent;
extern PropertyRNA &rna_BoneCollection_index;
extern PropertyRNA &rna_BoneCollection_child_number;

extern FunctionRNA *rna_BoneCollection_bl_system_properties_get_func;
extern PropertyRNA &rna_BoneCollection_bl_system_properties_get_do_create;
extern PropertyRNA &rna_BoneCollection_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_BoneCollection_assign_func;
extern PropertyRNA &rna_BoneCollection_assign_bone;
extern PropertyRNA &rna_BoneCollection_assign_assigned;

extern FunctionRNA *rna_BoneCollection_unassign_func;
extern PropertyRNA &rna_BoneCollection_unassign_bone;
extern PropertyRNA &rna_BoneCollection_unassign_assigned;



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

extern PropertyRNA &rna_Armature_animation_data;
extern PropertyRNA &rna_Armature_bones;
extern PropertyRNA &rna_Armature_edit_bones;
extern PropertyRNA &rna_Armature_collections;
extern PropertyRNA &rna_Armature_collections_all;
extern PropertyRNA &rna_Armature_pose_position;
extern PropertyRNA &rna_Armature_display_type;
extern PropertyRNA &rna_Armature_show_axes;
extern PropertyRNA &rna_Armature_axes_position;
extern PropertyRNA &rna_Armature_relation_line_position;
extern PropertyRNA &rna_Armature_show_names;
extern PropertyRNA &rna_Armature_use_mirror_x;
extern PropertyRNA &rna_Armature_show_bone_custom_shapes;
extern PropertyRNA &rna_Armature_show_bone_colors;
extern PropertyRNA &rna_Armature_is_editmode;

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


extern FunctionRNA *rna_Armature_transform_func;
extern PropertyRNA &rna_Armature_transform_matrix;



extern PropertyRNA &rna_ArmatureBones_rna_properties;
extern PropertyRNA &rna_ArmatureBones_rna_type;
extern PropertyRNA &rna_ArmatureBones_active;


extern PropertyRNA &rna_ArmatureEditBones_rna_properties;
extern PropertyRNA &rna_ArmatureEditBones_rna_type;
extern PropertyRNA &rna_ArmatureEditBones_active;

extern FunctionRNA *rna_ArmatureEditBones_new_func;
extern PropertyRNA &rna_ArmatureEditBones_new_name;
extern PropertyRNA &rna_ArmatureEditBones_new_bone;

extern FunctionRNA *rna_ArmatureEditBones_remove_func;
extern PropertyRNA &rna_ArmatureEditBones_remove_bone;



extern PropertyRNA &rna_BoneCollections_rna_properties;
extern PropertyRNA &rna_BoneCollections_rna_type;
extern PropertyRNA &rna_BoneCollections_active;
extern PropertyRNA &rna_BoneCollections_active_index;
extern PropertyRNA &rna_BoneCollections_active_name;
extern PropertyRNA &rna_BoneCollections_is_solo_active;

extern FunctionRNA *rna_BoneCollections_new_func;
extern PropertyRNA &rna_BoneCollections_new_name;
extern PropertyRNA &rna_BoneCollections_new_parent;
extern PropertyRNA &rna_BoneCollections_new_bonecollection;

extern FunctionRNA *rna_BoneCollections_remove_func;
extern PropertyRNA &rna_BoneCollections_remove_bone_collection;

extern FunctionRNA *rna_BoneCollections_move_func;
extern PropertyRNA &rna_BoneCollections_move_from_index;
extern PropertyRNA &rna_BoneCollections_move_to_index;



extern PropertyRNA &rna_Bone_rna_properties;
extern PropertyRNA &rna_Bone_rna_type;
extern PropertyRNA &rna_Bone_parent;
extern PropertyRNA &rna_Bone_children;
extern PropertyRNA &rna_Bone_collections;
extern PropertyRNA &rna_Bone_name;
extern PropertyRNA &rna_Bone_color;
extern PropertyRNA &rna_Bone_display_type;
extern PropertyRNA &rna_Bone_use_connect;
extern PropertyRNA &rna_Bone_use_inherit_rotation;
extern PropertyRNA &rna_Bone_use_envelope_multiply;
extern PropertyRNA &rna_Bone_use_deform;
extern PropertyRNA &rna_Bone_inherit_scale;
extern PropertyRNA &rna_Bone_use_local_location;
extern PropertyRNA &rna_Bone_use_relative_parent;
extern PropertyRNA &rna_Bone_show_wire;
extern PropertyRNA &rna_Bone_use_cyclic_offset;
extern PropertyRNA &rna_Bone_hide_select;
extern PropertyRNA &rna_Bone_envelope_distance;
extern PropertyRNA &rna_Bone_envelope_weight;
extern PropertyRNA &rna_Bone_head_radius;
extern PropertyRNA &rna_Bone_tail_radius;
extern PropertyRNA &rna_Bone_bbone_segments;
extern PropertyRNA &rna_Bone_bbone_mapping_mode;
extern PropertyRNA &rna_Bone_bbone_x;
extern PropertyRNA &rna_Bone_bbone_z;
extern PropertyRNA &rna_Bone_bbone_handle_type_start;
extern PropertyRNA &rna_Bone_bbone_custom_handle_start;
extern PropertyRNA &rna_Bone_bbone_handle_use_scale_start;
extern PropertyRNA &rna_Bone_bbone_handle_use_ease_start;
extern PropertyRNA &rna_Bone_bbone_handle_type_end;
extern PropertyRNA &rna_Bone_bbone_custom_handle_end;
extern PropertyRNA &rna_Bone_bbone_handle_use_scale_end;
extern PropertyRNA &rna_Bone_bbone_handle_use_ease_end;
extern PropertyRNA &rna_Bone_bbone_rollin;
extern PropertyRNA &rna_Bone_bbone_rollout;
extern PropertyRNA &rna_Bone_use_endroll_as_inroll;
extern PropertyRNA &rna_Bone_bbone_curveinx;
extern PropertyRNA &rna_Bone_bbone_curveinz;
extern PropertyRNA &rna_Bone_bbone_curveoutx;
extern PropertyRNA &rna_Bone_bbone_curveoutz;
extern PropertyRNA &rna_Bone_bbone_easein;
extern PropertyRNA &rna_Bone_bbone_easeout;
extern PropertyRNA &rna_Bone_use_scale_easing;
extern PropertyRNA &rna_Bone_bbone_scalein;
extern PropertyRNA &rna_Bone_bbone_scaleout;
extern PropertyRNA &rna_Bone_hide;
extern PropertyRNA &rna_Bone_matrix;
extern PropertyRNA &rna_Bone_matrix_local;
extern PropertyRNA &rna_Bone_tail;
extern PropertyRNA &rna_Bone_tail_local;
extern PropertyRNA &rna_Bone_head;
extern PropertyRNA &rna_Bone_head_local;
extern PropertyRNA &rna_Bone_length;

extern FunctionRNA *rna_Bone_bl_system_properties_get_func;
extern PropertyRNA &rna_Bone_bl_system_properties_get_do_create;
extern PropertyRNA &rna_Bone_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_Bone_evaluate_envelope_func;
extern PropertyRNA &rna_Bone_evaluate_envelope_point;
extern PropertyRNA &rna_Bone_evaluate_envelope_factor;

extern FunctionRNA *rna_Bone_convert_local_to_pose_func;
extern PropertyRNA &rna_Bone_convert_local_to_pose_matrix_return;
extern PropertyRNA &rna_Bone_convert_local_to_pose_matrix;
extern PropertyRNA &rna_Bone_convert_local_to_pose_matrix_local;
extern PropertyRNA &rna_Bone_convert_local_to_pose_parent_matrix;
extern PropertyRNA &rna_Bone_convert_local_to_pose_parent_matrix_local;
extern PropertyRNA &rna_Bone_convert_local_to_pose_invert;

extern FunctionRNA *rna_Bone_MatrixFromAxisRoll_func;
extern PropertyRNA &rna_Bone_MatrixFromAxisRoll_axis;
extern PropertyRNA &rna_Bone_MatrixFromAxisRoll_roll;
extern PropertyRNA &rna_Bone_MatrixFromAxisRoll_result_matrix;

extern FunctionRNA *rna_Bone_AxisRollFromMatrix_func;
extern PropertyRNA &rna_Bone_AxisRollFromMatrix_matrix;
extern PropertyRNA &rna_Bone_AxisRollFromMatrix_axis;
extern PropertyRNA &rna_Bone_AxisRollFromMatrix_result_axis;
extern PropertyRNA &rna_Bone_AxisRollFromMatrix_result_roll;



extern PropertyRNA &rna_BoneCollectionMemberships_rna_properties;
extern PropertyRNA &rna_BoneCollectionMemberships_rna_type;

extern FunctionRNA *rna_BoneCollectionMemberships_clear_func;


extern PropertyRNA &rna_EditBone_rna_properties;
extern PropertyRNA &rna_EditBone_rna_type;
extern PropertyRNA &rna_EditBone_collections;
extern PropertyRNA &rna_EditBone_parent;
extern PropertyRNA &rna_EditBone_roll;
extern PropertyRNA &rna_EditBone_head;
extern PropertyRNA &rna_EditBone_tail;
extern PropertyRNA &rna_EditBone_length;
extern PropertyRNA &rna_EditBone_name;
extern PropertyRNA &rna_EditBone_color;
extern PropertyRNA &rna_EditBone_display_type;
extern PropertyRNA &rna_EditBone_use_connect;
extern PropertyRNA &rna_EditBone_use_inherit_rotation;
extern PropertyRNA &rna_EditBone_use_envelope_multiply;
extern PropertyRNA &rna_EditBone_use_deform;
extern PropertyRNA &rna_EditBone_inherit_scale;
extern PropertyRNA &rna_EditBone_use_local_location;
extern PropertyRNA &rna_EditBone_use_relative_parent;
extern PropertyRNA &rna_EditBone_show_wire;
extern PropertyRNA &rna_EditBone_use_cyclic_offset;
extern PropertyRNA &rna_EditBone_hide_select;
extern PropertyRNA &rna_EditBone_envelope_distance;
extern PropertyRNA &rna_EditBone_envelope_weight;
extern PropertyRNA &rna_EditBone_head_radius;
extern PropertyRNA &rna_EditBone_tail_radius;
extern PropertyRNA &rna_EditBone_bbone_segments;
extern PropertyRNA &rna_EditBone_bbone_mapping_mode;
extern PropertyRNA &rna_EditBone_bbone_x;
extern PropertyRNA &rna_EditBone_bbone_z;
extern PropertyRNA &rna_EditBone_bbone_handle_type_start;
extern PropertyRNA &rna_EditBone_bbone_custom_handle_start;
extern PropertyRNA &rna_EditBone_bbone_handle_use_scale_start;
extern PropertyRNA &rna_EditBone_bbone_handle_use_ease_start;
extern PropertyRNA &rna_EditBone_bbone_handle_type_end;
extern PropertyRNA &rna_EditBone_bbone_custom_handle_end;
extern PropertyRNA &rna_EditBone_bbone_handle_use_scale_end;
extern PropertyRNA &rna_EditBone_bbone_handle_use_ease_end;
extern PropertyRNA &rna_EditBone_bbone_rollin;
extern PropertyRNA &rna_EditBone_bbone_rollout;
extern PropertyRNA &rna_EditBone_use_endroll_as_inroll;
extern PropertyRNA &rna_EditBone_bbone_curveinx;
extern PropertyRNA &rna_EditBone_bbone_curveinz;
extern PropertyRNA &rna_EditBone_bbone_curveoutx;
extern PropertyRNA &rna_EditBone_bbone_curveoutz;
extern PropertyRNA &rna_EditBone_bbone_easein;
extern PropertyRNA &rna_EditBone_bbone_easeout;
extern PropertyRNA &rna_EditBone_use_scale_easing;
extern PropertyRNA &rna_EditBone_bbone_scalein;
extern PropertyRNA &rna_EditBone_bbone_scaleout;
extern PropertyRNA &rna_EditBone_hide;
extern PropertyRNA &rna_EditBone_lock;
extern PropertyRNA &rna_EditBone_select;
extern PropertyRNA &rna_EditBone_select_head;
extern PropertyRNA &rna_EditBone_select_tail;
extern PropertyRNA &rna_EditBone_matrix;

extern FunctionRNA *rna_EditBone_bl_system_properties_get_func;
extern PropertyRNA &rna_EditBone_bl_system_properties_get_do_create;
extern PropertyRNA &rna_EditBone_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_EditBone_align_roll_func;
extern PropertyRNA &rna_EditBone_align_roll_vector;


static PointerRNA BoneColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BoneColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoneColor_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneColor_rna_properties_get(iter);
    }
}

void BoneColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoneColor_rna_properties_get(iter);
    }
}

void BoneColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoneColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BoneColor_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int BoneColor_palette_get(PointerRNA *ptr)
{
    BoneColor *data = (BoneColor *)(ptr->data);
    return (int)(data->palette_index);
}

void BoneColor_palette_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_BoneColor_palette_index_set;
    fn(ptr, value);
}

bool BoneColor_is_custom_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BoneColor_is_custom_get;
    return fn(ptr);
}

PointerRNA BoneColor_custom_get(PointerRNA *ptr)
{
    BoneColor *data = (BoneColor *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ThemeBoneColorSet, &data->custom);
}

static PointerRNA BoneCollection_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BoneCollection_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoneCollection_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollection_rna_properties_get(iter);
    }
}

void BoneCollection_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoneCollection_rna_properties_get(iter);
    }
}

void BoneCollection_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoneCollection_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BoneCollection_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void BoneCollection_name_get(PointerRNA *ptr, char *value)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int BoneCollection_name_length(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return strlen(data->name);
}

void BoneCollection_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_BoneCollection_name_set;
    fn(ptr, value);
}

bool BoneCollection_is_expanded_get(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void BoneCollection_is_expanded_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_BoneCollection_is_expanded_set;
    fn(ptr, value);
}

bool BoneCollection_is_visible_get(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void BoneCollection_is_visible_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_BoneCollection_is_visible_set;
    fn(ptr, value);
}

bool BoneCollection_is_visible_ancestors_get(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

bool BoneCollection_is_visible_effectively_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BoneCollection_is_visible_effectively_get;
    return fn(ptr);
}

bool BoneCollection_is_solo_get(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return ((uint64_t(data->flags) & 16) != 0);
}

void BoneCollection_is_solo_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_BoneCollection_is_solo_set;
    fn(ptr, value);
}

bool BoneCollection_is_local_override_get(PointerRNA *ptr)
{
    BoneCollection *data = (BoneCollection *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

bool BoneCollection_is_editable_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_BoneCollection_is_editable_get;
    return fn(ptr);
}

static PointerRNA BoneCollection_bones_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_BoneCollection_bones_get;
    return fn(iter);
}

void BoneCollection_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoneCollection_bones;

    PropCollectionBeginFunc fn = rna_BoneCollection_bones_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollection_bones_get(iter);
    }
}

void BoneCollection_bones_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoneCollection_bones_get(iter);
    }
}

void BoneCollection_bones_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoneCollection_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BoneCollection_bones_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoneCollection_bones_get(&iter); }
    }

    BoneCollection_bones_end(&iter);

    return found;
}

int Bone_name_length(PointerRNA *);
void Bone_name_get(PointerRNA *, char *);

bool BoneCollection_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    BoneCollection_bones_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Bone_name_length(&iter.ptr);
            if (namelen < 1024) {
                Bone_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Bone_name_get(&iter.ptr, name);
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
        BoneCollection_bones_next(&iter);
    }
    BoneCollection_bones_end(&iter);

    return found;
}

int BoneCollection_children_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_bone_collection_children_length;
    return fn(ptr);
}

static PointerRNA BoneCollection_children_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_BoneCollection, rna_iterator_array_dereference_get(iter));
}

void BoneCollection_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoneCollection_children;

    PropCollectionBeginFunc fn = rna_iterator_bone_collection_children_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollection_children_get(iter);
    }
}

void BoneCollection_children_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoneCollection_children_get(iter);
    }
}

void BoneCollection_children_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool BoneCollection_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BoneCollection_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoneCollection_children_get(&iter); }
    }

    BoneCollection_children_end(&iter);

    return found;
}

PointerRNA BoneCollection_parent_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_BoneCollection_parent_get;
    return fn(ptr);
}

void BoneCollection_parent_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_BoneCollection_parent_set;
    fn(ptr, value, reports);
}

int BoneCollection_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_BoneCollection_index_get;
    return fn(ptr);
}

int BoneCollection_child_number_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_BoneCollection_child_number_get;
    return fn(ptr);
}

void BoneCollection_child_number_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_BoneCollection_child_number_set;
    fn(ptr, value);
}

PointerRNA Armature_animation_data_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

static PointerRNA Armature_bones_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Bone, rna_iterator_listbase_get(iter));
}

void Armature_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Armature_bones;

    rna_iterator_listbase_begin(iter, ptr, &data->bonebase, nullptr);

    if (iter->valid) {
        iter->ptr = Armature_bones_get(iter);
    }
}

void Armature_bones_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Armature_bones_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Armature_bones_get(iter);
    }
}

void Armature_bones_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Armature_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_Armature_bones_lookup_string;
    return fn(ptr, key, r_ptr);
}

static PointerRNA Armature_edit_bones_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_EditBone, rna_iterator_listbase_get(iter));
}

void Armature_edit_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Armature_edit_bones;

    rna_iterator_listbase_begin(iter, ptr, data->edbo, nullptr);

    if (iter->valid) {
        iter->ptr = Armature_edit_bones_get(iter);
    }
}

void Armature_edit_bones_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Armature_edit_bones_get(iter);
    }
}

void Armature_edit_bones_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Armature_edit_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Armature_edit_bones_begin(&iter, ptr);

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
        if (found) { *r_ptr = Armature_edit_bones_get(&iter); }
    }

    Armature_edit_bones_end(&iter);

    return found;
}

int EditBone_name_length(PointerRNA *);
void EditBone_name_get(PointerRNA *, char *);

bool Armature_edit_bones_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Armature_edit_bones_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = EditBone_name_length(&iter.ptr);
            if (namelen < 1024) {
                EditBone_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                EditBone_name_get(&iter.ptr, name);
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
        Armature_edit_bones_next(&iter);
    }
    Armature_edit_bones_end(&iter);

    return found;
}

int Armature_collections_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_bone_collections_roots_length;
    return fn(ptr);
}

static PointerRNA Armature_collections_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_BoneCollection, rna_iterator_array_dereference_get(iter));
}

void Armature_collections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Armature_collections;

    PropCollectionBeginFunc fn = rna_iterator_bone_collections_roots_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Armature_collections_get(iter);
    }
}

void Armature_collections_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Armature_collections_get(iter);
    }
}

void Armature_collections_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Armature_collections_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Armature_collections_begin(&iter, ptr);

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
        if (found) { *r_ptr = Armature_collections_get(&iter); }
    }

    Armature_collections_end(&iter);

    return found;
}

int Armature_collections_all_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_bone_collections_all_length;
    return fn(ptr);
}

static PointerRNA Armature_collections_all_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_BoneCollection, rna_iterator_array_dereference_get(iter));
}

void Armature_collections_all_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Armature_collections_all;

    PropCollectionBeginFunc fn = rna_iterator_bone_collections_all_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Armature_collections_all_get(iter);
    }
}

void Armature_collections_all_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Armature_collections_all_get(iter);
    }
}

void Armature_collections_all_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Armature_collections_all_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Armature_collections_all_begin(&iter, ptr);

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
        if (found) { *r_ptr = Armature_collections_all_get(&iter); }
    }

    Armature_collections_all_end(&iter);

    return found;
}

int Armature_pose_position_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (uint64_t(data->flag) & 1);
}

void Armature_pose_position_set(PointerRNA *ptr, int value)
{
    bArmature *data = (bArmature *)(ptr->data);
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1));
    data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | uint64_t(value));
}

int Armature_display_type_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (int)(data->drawtype);
}

void Armature_display_type_set(PointerRNA *ptr, int value)
{
    bArmature *data = (bArmature *)(ptr->data);
    data->drawtype = (std::remove_reference_t<decltype(data->drawtype)>)value;
}

bool Armature_show_axes_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void Armature_show_axes_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

float Armature_axes_position_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return (float)(data->axes_position);
}

void Armature_axes_position_set(PointerRNA *ptr, float value)
{
    bArmature *data = (bArmature *)(ptr->data);
    data->axes_position = (std::remove_reference_t<decltype(data->axes_position)>)std::clamp(value, 0.0f, 1.0f);
}

int Armature_relation_line_position_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Armature_relation_line_position_get;
    return fn(ptr);
}

void Armature_relation_line_position_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Armature_relation_line_position_set;
    fn(ptr, value);
}

bool Armature_show_names_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void Armature_show_names_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

bool Armature_use_mirror_x_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void Armature_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

bool Armature_show_bone_custom_shapes_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return !((uint64_t(data->flag) & 1024) != 0);
}

void Armature_show_bone_custom_shapes_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool Armature_show_bone_colors_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void Armature_show_bone_colors_set(PointerRNA *ptr, bool value)
{
    bArmature *data = (bArmature *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool Armature_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Armature_is_editmode_get;
    return fn(ptr);
}

static PointerRNA ArmatureBones_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ArmatureBones_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ArmatureBones_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ArmatureBones_rna_properties_get(iter);
    }
}

void ArmatureBones_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ArmatureBones_rna_properties_get(iter);
    }
}

void ArmatureBones_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ArmatureBones_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ArmatureBones_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ArmatureBones_active_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Bone, data->act_bone);
}

void ArmatureBones_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Armature_act_bone_set;
    fn(ptr, value, reports);
}

static PointerRNA ArmatureEditBones_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ArmatureEditBones_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ArmatureEditBones_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ArmatureEditBones_rna_properties_get(iter);
    }
}

void ArmatureEditBones_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ArmatureEditBones_rna_properties_get(iter);
    }
}

void ArmatureEditBones_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ArmatureEditBones_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ArmatureEditBones_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ArmatureEditBones_active_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_EditBone, data->act_edbone);
}

void ArmatureEditBones_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Armature_act_edit_bone_set;
    fn(ptr, value, reports);
}

static PointerRNA BoneCollections_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BoneCollections_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoneCollections_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollections_rna_properties_get(iter);
    }
}

void BoneCollections_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoneCollections_rna_properties_get(iter);
    }
}

void BoneCollections_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoneCollections_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BoneCollections_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA BoneCollections_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_BoneCollections_active_get;
    return fn(ptr);
}

void BoneCollections_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_BoneCollections_active_set;
    fn(ptr, value, reports);
}

int BoneCollections_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_BoneCollections_active_index_get;
    return fn(ptr);
}

void BoneCollections_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_BoneCollections_active_index_set;
    fn(ptr, value);
}

void BoneCollections_active_name_get(PointerRNA *ptr, char *value)
{
    bArmature *data = (bArmature *)(ptr->data);
    BLI_assert(strlen(data->active_collection_name) < 64);
    strcpy(value, data->active_collection_name);
}

int BoneCollections_active_name_length(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return strlen(data->active_collection_name);
}

void BoneCollections_active_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_BoneCollections_active_name_set;
    fn(ptr, value);
}

bool BoneCollections_is_solo_active_get(PointerRNA *ptr)
{
    bArmature *data = (bArmature *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

static PointerRNA Bone_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Bone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Bone_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Bone_rna_properties_get(iter);
    }
}

void Bone_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Bone_rna_properties_get(iter);
    }
}

void Bone_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Bone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Bone_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA Bone_parent_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Bone, data->parent);
}

static PointerRNA Bone_children_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Bone, rna_iterator_listbase_get(iter));
}

void Bone_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Bone_children;

    rna_iterator_listbase_begin(iter, ptr, &data->childbase, nullptr);

    if (iter->valid) {
        iter->ptr = Bone_children_get(iter);
    }
}

void Bone_children_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Bone_children_get(iter);
    }
}

void Bone_children_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Bone_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Bone_children_begin(&iter, ptr);

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
        if (found) { *r_ptr = Bone_children_get(&iter); }
    }

    Bone_children_end(&iter);

    return found;
}

int Bone_name_length(PointerRNA *);
void Bone_name_get(PointerRNA *, char *);

bool Bone_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Bone_children_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Bone_name_length(&iter.ptr);
            if (namelen < 1024) {
                Bone_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Bone_name_get(&iter.ptr, name);
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
        Bone_children_next(&iter);
    }
    Bone_children_end(&iter);

    return found;
}

static PointerRNA Bone_collections_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Bone_collections_get;
    return fn(iter);
}

void Bone_collections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Bone_collections;

    PropCollectionBeginFunc fn = rna_Bone_collections_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Bone_collections_get(iter);
    }
}

void Bone_collections_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Bone_collections_get(iter);
    }
}

void Bone_collections_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Bone_collections_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Bone_collections_begin(&iter, ptr);

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
        if (found) { *r_ptr = Bone_collections_get(&iter); }
    }

    Bone_collections_end(&iter);

    return found;
}

void Bone_name_get(PointerRNA *ptr, char *value)
{
    Bone *data = (Bone *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int Bone_name_length(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return strlen(data->name);
}

void Bone_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Bone_name_set;
    fn(ptr, value);
}

PointerRNA Bone_color_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_BoneColor, &data->color);
}

int Bone_display_type_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->drawtype);
}

void Bone_display_type_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->drawtype = (std::remove_reference_t<decltype(data->drawtype)>)value;
}

bool Bone_use_connect_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

bool Bone_use_inherit_rotation_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !((uint64_t(data->flag) & 512) != 0);
}

void Bone_use_inherit_rotation_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool Bone_use_envelope_multiply_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void Bone_use_envelope_multiply_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool Bone_use_deform_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !((uint64_t(data->flag) & 4096) != 0);
}

void Bone_use_deform_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

int Bone_inherit_scale_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->inherit_scale_mode);
}

void Bone_inherit_scale_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->inherit_scale_mode = (std::remove_reference_t<decltype(data->inherit_scale_mode)>)value;
}

bool Bone_use_local_location_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !((uint64_t(data->flag) & 4194304) != 0);
}

void Bone_use_local_location_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4194304); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4194304)); }
}

bool Bone_use_relative_parent_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->flag) & 8388608) != 0);
}

void Bone_use_relative_parent_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8388608); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8388608)); }
}

bool Bone_show_wire_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->flag) & 131072) != 0);
}

void Bone_show_wire_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 131072); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(131072)); }
}

bool Bone_use_cyclic_offset_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return !((uint64_t(data->flag) & 262144) != 0);
}

void Bone_use_cyclic_offset_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 262144); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(262144)); }
}

bool Bone_hide_select_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void Bone_hide_select_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float Bone_envelope_distance_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->dist);
}

void Bone_envelope_distance_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->dist = (std::remove_reference_t<decltype(data->dist)>)std::clamp(value, 0.0f, 1000.0f);
}

float Bone_envelope_weight_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->weight);
}

void Bone_envelope_weight_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0f, 1000.0f);
}

float Bone_head_radius_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->rad_head);
}

void Bone_head_radius_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->rad_head = (std::remove_reference_t<decltype(data->rad_head)>)value;
}

float Bone_tail_radius_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->rad_tail);
}

void Bone_tail_radius_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->rad_tail = (std::remove_reference_t<decltype(data->rad_tail)>)value;
}

int Bone_bbone_segments_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->segments);
}

void Bone_bbone_segments_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->segments = (std::remove_reference_t<decltype(data->segments)>)std::clamp(value, 1, 32);
}

int Bone_bbone_mapping_mode_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->bbone_mapping_mode);
}

void Bone_bbone_mapping_mode_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->bbone_mapping_mode = (std::remove_reference_t<decltype(data->bbone_mapping_mode)>)value;
}

float Bone_bbone_x_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->xwidth);
}

void Bone_bbone_x_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->xwidth = (std::remove_reference_t<decltype(data->xwidth)>)value;
}

float Bone_bbone_z_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->zwidth);
}

void Bone_bbone_z_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->zwidth = (std::remove_reference_t<decltype(data->zwidth)>)value;
}

int Bone_bbone_handle_type_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->bbone_prev_type);
}

void Bone_bbone_handle_type_start_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->bbone_prev_type = (std::remove_reference_t<decltype(data->bbone_prev_type)>)value;
}

PointerRNA Bone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Bone, data->bbone_prev);
}

void Bone_bbone_custom_handle_start_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Bone_bbone_prev_set;
    fn(ptr, value, reports);
}

void Bone_bbone_handle_use_scale_start_get(PointerRNA *ptr, bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->bbone_prev_flag) & (uint64_t(1) << i)) != 0);
    }
}

void Bone_bbone_handle_use_scale_start_set(PointerRNA *ptr, const bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_prev_flag = std::remove_reference_t<decltype(data->bbone_prev_flag)>(uint64_t(data->bbone_prev_flag) | (uint64_t(1) << i)); }
        else { data->bbone_prev_flag = std::remove_reference_t<decltype(data->bbone_prev_flag)>(uint64_t(data->bbone_prev_flag) & ~(uint64_t(1) << i)); }
    }
}

bool Bone_bbone_handle_use_ease_start_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->bbone_prev_flag) & 8) != 0);
}

void Bone_bbone_handle_use_ease_start_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_prev_flag = std::remove_reference_t<decltype(data->bbone_prev_flag)>(uint64_t(data->bbone_prev_flag) | 8); }
    else { data->bbone_prev_flag = std::remove_reference_t<decltype(data->bbone_prev_flag)>(uint64_t(data->bbone_prev_flag) & ~uint64_t(8)); }
}

int Bone_bbone_handle_type_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (int)(data->bbone_next_type);
}

void Bone_bbone_handle_type_end_set(PointerRNA *ptr, int value)
{
    Bone *data = (Bone *)(ptr->data);
    data->bbone_next_type = (std::remove_reference_t<decltype(data->bbone_next_type)>)value;
}

PointerRNA Bone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Bone, data->bbone_next);
}

void Bone_bbone_custom_handle_end_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Bone_bbone_next_set;
    fn(ptr, value, reports);
}

void Bone_bbone_handle_use_scale_end_get(PointerRNA *ptr, bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->bbone_next_flag) & (uint64_t(1) << i)) != 0);
    }
}

void Bone_bbone_handle_use_scale_end_set(PointerRNA *ptr, const bool values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_next_flag = std::remove_reference_t<decltype(data->bbone_next_flag)>(uint64_t(data->bbone_next_flag) | (uint64_t(1) << i)); }
        else { data->bbone_next_flag = std::remove_reference_t<decltype(data->bbone_next_flag)>(uint64_t(data->bbone_next_flag) & ~(uint64_t(1) << i)); }
    }
}

bool Bone_bbone_handle_use_ease_end_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->bbone_next_flag) & 8) != 0);
}

void Bone_bbone_handle_use_ease_end_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_next_flag = std::remove_reference_t<decltype(data->bbone_next_flag)>(uint64_t(data->bbone_next_flag) | 8); }
    else { data->bbone_next_flag = std::remove_reference_t<decltype(data->bbone_next_flag)>(uint64_t(data->bbone_next_flag) & ~uint64_t(8)); }
}

float Bone_bbone_rollin_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->roll1);
}

void Bone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->roll1 = (std::remove_reference_t<decltype(data->roll1)>)value;
}

float Bone_bbone_rollout_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->roll2);
}

void Bone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->roll2 = (std::remove_reference_t<decltype(data->roll2)>)value;
}

bool Bone_use_endroll_as_inroll_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->bbone_flag) & 1) != 0);
}

void Bone_use_endroll_as_inroll_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_flag = std::remove_reference_t<decltype(data->bbone_flag)>(uint64_t(data->bbone_flag) | 1); }
    else { data->bbone_flag = std::remove_reference_t<decltype(data->bbone_flag)>(uint64_t(data->bbone_flag) & ~uint64_t(1)); }
}

float Bone_bbone_curveinx_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_in_x);
}

void Bone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->curve_in_x = (std::remove_reference_t<decltype(data->curve_in_x)>)value;
}

float Bone_bbone_curveinz_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_in_z);
}

void Bone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->curve_in_z = (std::remove_reference_t<decltype(data->curve_in_z)>)value;
}

float Bone_bbone_curveoutx_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_out_x);
}

void Bone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->curve_out_x = (std::remove_reference_t<decltype(data->curve_out_x)>)value;
}

float Bone_bbone_curveoutz_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->curve_out_z);
}

void Bone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->curve_out_z = (std::remove_reference_t<decltype(data->curve_out_z)>)value;
}

float Bone_bbone_easein_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->ease1);
}

void Bone_bbone_easein_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->ease1 = (std::remove_reference_t<decltype(data->ease1)>)value;
}

float Bone_bbone_easeout_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->ease2);
}

void Bone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    Bone *data = (Bone *)(ptr->data);
    data->ease2 = (std::remove_reference_t<decltype(data->ease2)>)value;
}

bool Bone_use_scale_easing_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->bbone_flag) & 2) != 0);
}

void Bone_use_scale_easing_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->bbone_flag = std::remove_reference_t<decltype(data->bbone_flag)>(uint64_t(data->bbone_flag) | 2); }
    else { data->bbone_flag = std::remove_reference_t<decltype(data->bbone_flag)>(uint64_t(data->bbone_flag) & ~uint64_t(2)); }
}

void Bone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_in)[i]);
    }
}

void Bone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->scale_in)[i] = values[i];
    }
}

void Bone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->scale_out)[i]);
    }
}

void Bone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->scale_out)[i] = values[i];
    }
}

bool Bone_hide_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void Bone_hide_set(PointerRNA *ptr, bool value)
{
    Bone *data = (Bone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

void Bone_matrix_get(PointerRNA *ptr, float values[9])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 9; i++) {
        values[i] = (float)(((float *)data->bone_mat)[i]);
    }
}

void Bone_matrix_local_get(PointerRNA *ptr, float values[16])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 16; i++) {
        values[i] = (float)(((float *)data->arm_mat)[i]);
    }
}

void Bone_tail_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->tail)[i]);
    }
}

void Bone_tail_local_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->arm_tail)[i]);
    }
}

void Bone_head_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->head)[i]);
    }
}

void Bone_head_local_get(PointerRNA *ptr, float values[3])
{
    Bone *data = (Bone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->arm_head)[i]);
    }
}

float Bone_length_get(PointerRNA *ptr)
{
    Bone *data = (Bone *)(ptr->data);
    return (float)(data->length);
}

static PointerRNA BoneCollectionMemberships_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BoneCollectionMemberships_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoneCollectionMemberships_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoneCollectionMemberships_rna_properties_get(iter);
    }
}

void BoneCollectionMemberships_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoneCollectionMemberships_rna_properties_get(iter);
    }
}

void BoneCollectionMemberships_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoneCollectionMemberships_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BoneCollectionMemberships_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA EditBone_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void EditBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_EditBone_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = EditBone_rna_properties_get(iter);
    }
}

void EditBone_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = EditBone_rna_properties_get(iter);
    }
}

void EditBone_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool EditBone_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA EditBone_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA EditBone_collections_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Bone_collections_get;
    return fn(iter);
}

void EditBone_collections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_EditBone_collections;

    PropCollectionBeginFunc fn = rna_EditBone_collections_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = EditBone_collections_get(iter);
    }
}

void EditBone_collections_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = EditBone_collections_get(iter);
    }
}

void EditBone_collections_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool EditBone_collections_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    EditBone_collections_begin(&iter, ptr);

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
        if (found) { *r_ptr = EditBone_collections_get(&iter); }
    }

    EditBone_collections_end(&iter);

    return found;
}

PointerRNA EditBone_parent_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_EditBone_parent_get;
    return fn(ptr);
}

void EditBone_parent_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_EditBone_parent_set;
    fn(ptr, value, reports);
}

float EditBone_roll_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll);
}

void EditBone_roll_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->roll = (std::remove_reference_t<decltype(data->roll)>)value;
}

void EditBone_head_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->head)[i]);
    }
}

void EditBone_head_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (data->head)[i] = values[i];
    }
}

void EditBone_tail_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->tail)[i]);
    }
}

void EditBone_tail_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (data->tail)[i] = values[i];
    }
}

float EditBone_length_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_EditBone_length_get;
    return fn(ptr);
}

void EditBone_length_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_EditBone_length_set;
    fn(ptr, value);
}

void EditBone_name_get(PointerRNA *ptr, char *value)
{
    EditBone *data = (EditBone *)(ptr->data);
    BLI_assert(strlen(data->name) < sizeof(data->name));
    strcpy(value, data->name);
}

int EditBone_name_length(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return strlen(data->name);
}

void EditBone_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_EditBone_name_set;
    fn(ptr, value);
}

PointerRNA EditBone_color_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_EditBone_color_get;
    return fn(ptr);
}

int EditBone_display_type_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->drawtype);
}

void EditBone_display_type_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->drawtype = (std::remove_reference_t<decltype(data->drawtype)>)value;
}

bool EditBone_use_connect_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void EditBone_use_connect_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_EditBone_connected_set;
    fn(ptr, value);
}

bool EditBone_use_inherit_rotation_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !((uint64_t(data->flag) & 512) != 0);
}

void EditBone_use_inherit_rotation_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 512); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(512)); }
}

bool EditBone_use_envelope_multiply_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 2048) != 0);
}

void EditBone_use_envelope_multiply_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2048); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2048)); }
}

bool EditBone_use_deform_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !((uint64_t(data->flag) & 4096) != 0);
}

void EditBone_use_deform_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4096); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4096)); }
}

int EditBone_inherit_scale_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->inherit_scale_mode);
}

void EditBone_inherit_scale_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->inherit_scale_mode = (std::remove_reference_t<decltype(data->inherit_scale_mode)>)value;
}

bool EditBone_use_local_location_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !((uint64_t(data->flag) & 4194304) != 0);
}

void EditBone_use_local_location_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4194304); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4194304)); }
}

bool EditBone_use_relative_parent_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 8388608) != 0);
}

void EditBone_use_relative_parent_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8388608); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8388608)); }
}

bool EditBone_show_wire_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 131072) != 0);
}

void EditBone_show_wire_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 131072); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(131072)); }
}

bool EditBone_use_cyclic_offset_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return !((uint64_t(data->flag) & 262144) != 0);
}

void EditBone_use_cyclic_offset_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 262144); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(262144)); }
}

bool EditBone_hide_select_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 2097152) != 0);
}

void EditBone_hide_select_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2097152); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2097152)); }
}

float EditBone_envelope_distance_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->dist);
}

void EditBone_envelope_distance_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->dist = (std::remove_reference_t<decltype(data->dist)>)std::clamp(value, 0.0f, 1000.0f);
}

float EditBone_envelope_weight_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->weight);
}

void EditBone_envelope_weight_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0f, 1000.0f);
}

float EditBone_head_radius_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->rad_head);
}

void EditBone_head_radius_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->rad_head = (std::remove_reference_t<decltype(data->rad_head)>)value;
}

float EditBone_tail_radius_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->rad_tail);
}

void EditBone_tail_radius_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->rad_tail = (std::remove_reference_t<decltype(data->rad_tail)>)value;
}

int EditBone_bbone_segments_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->segments);
}

void EditBone_bbone_segments_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->segments = (std::remove_reference_t<decltype(data->segments)>)std::clamp(value, 1, 32);
}

int EditBone_bbone_mapping_mode_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->bbone_mapping_mode);
}

void EditBone_bbone_mapping_mode_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->bbone_mapping_mode = (std::remove_reference_t<decltype(data->bbone_mapping_mode)>)value;
}

float EditBone_bbone_x_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->xwidth);
}

void EditBone_bbone_x_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->xwidth = (std::remove_reference_t<decltype(data->xwidth)>)value;
}

float EditBone_bbone_z_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->zwidth);
}

void EditBone_bbone_z_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->zwidth = (std::remove_reference_t<decltype(data->zwidth)>)value;
}

int EditBone_bbone_handle_type_start_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->bbone_prev_type);
}

void EditBone_bbone_handle_type_start_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->bbone_prev_type = (std::remove_reference_t<decltype(data->bbone_prev_type)>)value;
}

PointerRNA EditBone_bbone_custom_handle_start_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_EditBone_bbone_prev_get;
    return fn(ptr);
}

void EditBone_bbone_custom_handle_start_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_EditBone_bbone_prev_set;
    fn(ptr, value, reports);
}

void EditBone_bbone_handle_use_scale_start_get(PointerRNA *ptr, bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->bbone_prev_flag) & (uint64_t(1) << i)) != 0);
    }
}

void EditBone_bbone_handle_use_scale_start_set(PointerRNA *ptr, const bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_prev_flag = std::remove_reference_t<decltype(data->bbone_prev_flag)>(uint64_t(data->bbone_prev_flag) | (uint64_t(1) << i)); }
        else { data->bbone_prev_flag = std::remove_reference_t<decltype(data->bbone_prev_flag)>(uint64_t(data->bbone_prev_flag) & ~(uint64_t(1) << i)); }
    }
}

bool EditBone_bbone_handle_use_ease_start_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->bbone_prev_flag) & 8) != 0);
}

void EditBone_bbone_handle_use_ease_start_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_prev_flag = std::remove_reference_t<decltype(data->bbone_prev_flag)>(uint64_t(data->bbone_prev_flag) | 8); }
    else { data->bbone_prev_flag = std::remove_reference_t<decltype(data->bbone_prev_flag)>(uint64_t(data->bbone_prev_flag) & ~uint64_t(8)); }
}

int EditBone_bbone_handle_type_end_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (int)(data->bbone_next_type);
}

void EditBone_bbone_handle_type_end_set(PointerRNA *ptr, int value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->bbone_next_type = (std::remove_reference_t<decltype(data->bbone_next_type)>)value;
}

PointerRNA EditBone_bbone_custom_handle_end_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_EditBone_bbone_next_get;
    return fn(ptr);
}

void EditBone_bbone_custom_handle_end_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_EditBone_bbone_next_set;
    fn(ptr, value, reports);
}

void EditBone_bbone_handle_use_scale_end_get(PointerRNA *ptr, bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = ((uint64_t(data->bbone_next_flag) & (uint64_t(1) << i)) != 0);
    }
}

void EditBone_bbone_handle_use_scale_end_set(PointerRNA *ptr, const bool values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        if (values[i]) { data->bbone_next_flag = std::remove_reference_t<decltype(data->bbone_next_flag)>(uint64_t(data->bbone_next_flag) | (uint64_t(1) << i)); }
        else { data->bbone_next_flag = std::remove_reference_t<decltype(data->bbone_next_flag)>(uint64_t(data->bbone_next_flag) & ~(uint64_t(1) << i)); }
    }
}

bool EditBone_bbone_handle_use_ease_end_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->bbone_next_flag) & 8) != 0);
}

void EditBone_bbone_handle_use_ease_end_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_next_flag = std::remove_reference_t<decltype(data->bbone_next_flag)>(uint64_t(data->bbone_next_flag) | 8); }
    else { data->bbone_next_flag = std::remove_reference_t<decltype(data->bbone_next_flag)>(uint64_t(data->bbone_next_flag) & ~uint64_t(8)); }
}

float EditBone_bbone_rollin_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll1);
}

void EditBone_bbone_rollin_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->roll1 = (std::remove_reference_t<decltype(data->roll1)>)value;
}

float EditBone_bbone_rollout_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->roll2);
}

void EditBone_bbone_rollout_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->roll2 = (std::remove_reference_t<decltype(data->roll2)>)value;
}

bool EditBone_use_endroll_as_inroll_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->bbone_flag) & 1) != 0);
}

void EditBone_use_endroll_as_inroll_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_flag = std::remove_reference_t<decltype(data->bbone_flag)>(uint64_t(data->bbone_flag) | 1); }
    else { data->bbone_flag = std::remove_reference_t<decltype(data->bbone_flag)>(uint64_t(data->bbone_flag) & ~uint64_t(1)); }
}

float EditBone_bbone_curveinx_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_in_x);
}

void EditBone_bbone_curveinx_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->curve_in_x = (std::remove_reference_t<decltype(data->curve_in_x)>)value;
}

float EditBone_bbone_curveinz_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_in_z);
}

void EditBone_bbone_curveinz_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->curve_in_z = (std::remove_reference_t<decltype(data->curve_in_z)>)value;
}

float EditBone_bbone_curveoutx_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_out_x);
}

void EditBone_bbone_curveoutx_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->curve_out_x = (std::remove_reference_t<decltype(data->curve_out_x)>)value;
}

float EditBone_bbone_curveoutz_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->curve_out_z);
}

void EditBone_bbone_curveoutz_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->curve_out_z = (std::remove_reference_t<decltype(data->curve_out_z)>)value;
}

float EditBone_bbone_easein_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->ease1);
}

void EditBone_bbone_easein_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->ease1 = (std::remove_reference_t<decltype(data->ease1)>)value;
}

float EditBone_bbone_easeout_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return (float)(data->ease2);
}

void EditBone_bbone_easeout_set(PointerRNA *ptr, float value)
{
    EditBone *data = (EditBone *)(ptr->data);
    data->ease2 = (std::remove_reference_t<decltype(data->ease2)>)value;
}

bool EditBone_use_scale_easing_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->bbone_flag) & 2) != 0);
}

void EditBone_use_scale_easing_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->bbone_flag = std::remove_reference_t<decltype(data->bbone_flag)>(uint64_t(data->bbone_flag) | 2); }
    else { data->bbone_flag = std::remove_reference_t<decltype(data->bbone_flag)>(uint64_t(data->bbone_flag) & ~uint64_t(2)); }
}

void EditBone_bbone_scalein_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->scale_in)[i]);
    }
}

void EditBone_bbone_scalein_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (data->scale_in)[i] = values[i];
    }
}

void EditBone_bbone_scaleout_get(PointerRNA *ptr, float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((data->scale_out)[i]);
    }
}

void EditBone_bbone_scaleout_set(PointerRNA *ptr, const float values[3])
{
    EditBone *data = (EditBone *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        (data->scale_out)[i] = values[i];
    }
}

bool EditBone_hide_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 1024) != 0);
}

void EditBone_hide_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1024); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1024)); }
}

bool EditBone_lock_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 524288) != 0);
}

void EditBone_lock_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 524288); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(524288)); }
}

bool EditBone_select_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void EditBone_select_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool EditBone_select_head_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void EditBone_select_head_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool EditBone_select_tail_get(PointerRNA *ptr)
{
    EditBone *data = (EditBone *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void EditBone_select_tail_set(PointerRNA *ptr, bool value)
{
    EditBone *data = (EditBone *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

void EditBone_matrix_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_EditBone_matrix_get;
    fn(ptr, values);
}

void EditBone_matrix_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_EditBone_matrix_set;
    fn(ptr, values);
}


IDPropertyGroup *BoneCollection_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void BoneCollection_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool do_create;
	IDPropertyGroup *system_properties;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	do_create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	system_properties = rna_struct_system_properties_get_func(_self, do_create);
	*((IDPropertyGroup **)_retdata) = system_properties;
}

bool BoneCollection_assign_func(BoneCollection *_self, bContext *C, ReportList *reports, PointerRNA *bone)
{
	return rna_BoneCollection_assign(_self, C, reports, bone);
}

static void BoneCollection_assign_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	BoneCollection *_self;
	PointerRNA *bone;
	bool assigned;
	char *_data, *_retdata;
	
	_self = (BoneCollection *)_ptr->data;
	_data = (char *)_parms->data;
	bone = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	assigned = rna_BoneCollection_assign(_self, C, reports, bone);
	*((bool *)_retdata) = assigned;
}

bool BoneCollection_unassign_func(BoneCollection *_self, bContext *C, ReportList *reports, PointerRNA *bone)
{
	return rna_BoneCollection_unassign(_self, C, reports, bone);
}

static void BoneCollection_unassign_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	BoneCollection *_self;
	PointerRNA *bone;
	bool assigned;
	char *_data, *_retdata;
	
	_self = (BoneCollection *)_ptr->data;
	_data = (char *)_parms->data;
	bone = ((PointerRNA *)_data);
	_data += 88;
	_retdata = _data;
	
	assigned = rna_BoneCollection_unassign(_self, C, reports, bone);
	*((bool *)_retdata) = assigned;
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);
bool rna_BoneCollection_assign(BoneCollection *_self, bContext *C, ReportList *reports, PointerRNA *bone);
bool rna_BoneCollection_unassign(BoneCollection *_self, bContext *C, ReportList *reports, PointerRNA *bone);

void Armature_transform_func(bArmature *_self, float matrix[16])
{
	rna_Armature_transform(_self, matrix);
}

static void Armature_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bArmature *_self;
	const float *matrix;
	char *_data;
	
	_self = (bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	
	rna_Armature_transform(_self, matrix);
}

/* Repeated prototypes to detect errors */

void rna_Armature_transform(bArmature *_self, float matrix[16]);


EditBone *ArmatureEditBones_new_func(bArmature *_self, ReportList *reports, const char * name)
{
	return rna_Armature_edit_bone_new(_self, reports, name);
}

static void ArmatureEditBones_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bArmature *_self;
	const char * name;
	EditBone *bone;
	char *_data, *_retdata;
	
	_self = (bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	bone = rna_Armature_edit_bone_new(_self, reports, name);
	*((EditBone **)_retdata) = bone;
}

void ArmatureEditBones_remove_func(bArmature *_self, ReportList *reports, PointerRNA *bone)
{
	rna_Armature_edit_bone_remove(_self, reports, bone);
}

static void ArmatureEditBones_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bArmature *_self;
	PointerRNA *bone;
	char *_data;
	
	_self = (bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	bone = *((PointerRNA **)_data);
	
	rna_Armature_edit_bone_remove(_self, reports, bone);
}

/* Repeated prototypes to detect errors */

EditBone *rna_Armature_edit_bone_new(bArmature *_self, ReportList *reports, const char * name);
void rna_Armature_edit_bone_remove(bArmature *_self, ReportList *reports, PointerRNA *bone);

BoneCollection *BoneCollections_new_func(bArmature *_self, ReportList *reports, const char * name, BoneCollection *parent)
{
	return rna_BoneCollections_new(_self, reports, name, parent);
}

static void BoneCollections_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bArmature *_self;
	const char * name;
	BoneCollection *parent;
	BoneCollection *bonecollection;
	char *_data, *_retdata;
	
	_self = (bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	parent = *((BoneCollection **)_data);
	_data += 8;
	_retdata = _data;
	
	bonecollection = rna_BoneCollections_new(_self, reports, name, parent);
	*((BoneCollection **)_retdata) = bonecollection;
}

void BoneCollections_remove_func(bArmature *_self, BoneCollection *bone_collection)
{
	ANIM_armature_bonecoll_remove(_self, bone_collection);
}

static void BoneCollections_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bArmature *_self;
	BoneCollection *bone_collection;
	char *_data;
	
	_self = (bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	bone_collection = *((BoneCollection **)_data);
	
	ANIM_armature_bonecoll_remove(_self, bone_collection);
}

void BoneCollections_move_func(bArmature *_self, ReportList *reports, int from_index, int to_index)
{
	rna_BoneCollections_move(_self, reports, from_index, to_index);
}

static void BoneCollections_move_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bArmature *_self;
	int from_index;
	int to_index;
	char *_data;
	
	_self = (bArmature *)_ptr->data;
	_data = (char *)_parms->data;
	from_index = *((int *)_data);
	_data += 8;
	to_index = *((int *)_data);
	
	rna_BoneCollections_move(_self, reports, from_index, to_index);
}

/* Repeated prototypes to detect errors */

BoneCollection *rna_BoneCollections_new(bArmature *_self, ReportList *reports, const char * name, BoneCollection *parent);
void ANIM_armature_bonecoll_remove(bArmature *_self, BoneCollection *bone_collection);
void rna_BoneCollections_move(bArmature *_self, ReportList *reports, int from_index, int to_index);

IDPropertyGroup *Bone_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void Bone_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool do_create;
	IDPropertyGroup *system_properties;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	do_create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	system_properties = rna_struct_system_properties_get_func(_self, do_create);
	*((IDPropertyGroup **)_retdata) = system_properties;
}

float Bone_evaluate_envelope_func(Bone *_self, float point[3])
{
	return rna_Bone_do_envelope(_self, point);
}

static void Bone_evaluate_envelope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Bone *_self;
	const float *point;
	float factor;
	char *_data, *_retdata;
	
	_self = (Bone *)_ptr->data;
	_data = (char *)_parms->data;
	point = ((const float *)_data);
	_data += 16;
	_retdata = _data;
	
	factor = rna_Bone_do_envelope(_self, point);
	*((float *)_retdata) = factor;
}

void Bone_convert_local_to_pose_func(Bone *_self, float matrix_return[16], float matrix[16], float matrix_local[16], float parent_matrix[16], float parent_matrix_local[16], bool invert)
{
	rna_Bone_convert_local_to_pose(_self, matrix_return, matrix, matrix_local, parent_matrix, parent_matrix_local, invert);
}

static void Bone_convert_local_to_pose_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Bone *_self;
	float *matrix_return;
	const float *matrix;
	const float *matrix_local;
	const float *parent_matrix;
	const float *parent_matrix_local;
	bool invert;
	char *_data;
	
	_self = (Bone *)_ptr->data;
	_data = (char *)_parms->data;
	matrix_return = ((float *)_data);
	_data += 64;
	matrix = ((const float *)_data);
	_data += 64;
	matrix_local = ((const float *)_data);
	_data += 64;
	parent_matrix = ((const float *)_data);
	_data += 64;
	parent_matrix_local = ((const float *)_data);
	_data += 64;
	invert = *((bool *)_data);
	
	rna_Bone_convert_local_to_pose(_self, matrix_return, matrix, matrix_local, parent_matrix, parent_matrix_local, invert);
}

void Bone_MatrixFromAxisRoll_func(float axis[3], float roll, float result_matrix[9])
{
	rna_Bone_MatrixFromAxisRoll(axis, roll, result_matrix);
}

static void Bone_MatrixFromAxisRoll_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const float *axis;
	float roll;
	float *result_matrix;
	char *_data;
	
	_data = (char *)_parms->data;
	axis = ((const float *)_data);
	_data += 16;
	roll = *((float *)_data);
	_data += 8;
	result_matrix = ((float *)_data);
	
	rna_Bone_MatrixFromAxisRoll(axis, roll, result_matrix);
}

void Bone_AxisRollFromMatrix_func(float matrix[9], float axis[3], float result_axis[3], float *result_roll)
{
	rna_Bone_AxisRollFromMatrix(matrix, axis, result_axis, result_roll);
}

static void Bone_AxisRollFromMatrix_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	const float *matrix;
	const float *axis;
	float *result_axis;
	float *result_roll;
	char *_data;
	
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 40;
	axis = ((const float *)_data);
	_data += 16;
	result_axis = ((float *)_data);
	_data += 16;
	result_roll = ((float *)_data);
	
	rna_Bone_AxisRollFromMatrix(matrix, axis, result_axis, result_roll);
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);
float rna_Bone_do_envelope(Bone *_self, float point[3]);
void rna_Bone_convert_local_to_pose(Bone *_self, float matrix_return[16], float matrix[16], float matrix_local[16], float parent_matrix[16], float parent_matrix_local[16], bool invert);
void rna_Bone_MatrixFromAxisRoll(float axis[3], float roll, float result_matrix[9]);
void rna_Bone_AxisRollFromMatrix(float matrix[9], float axis[3], float result_axis[3], float *result_roll);

void BoneCollectionMemberships_clear_func(Bone *_self)
{
	rna_BoneCollectionMemberships_clear(_self);
}

static void BoneCollectionMemberships_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Bone *_self;
	_self = (Bone *)_ptr->data;
	
	rna_BoneCollectionMemberships_clear(_self);
}

/* Repeated prototypes to detect errors */

void rna_BoneCollectionMemberships_clear(Bone *_self);

IDPropertyGroup *EditBone_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void EditBone_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	bool do_create;
	IDPropertyGroup *system_properties;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	do_create = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	system_properties = rna_struct_system_properties_get_func(_self, do_create);
	*((IDPropertyGroup **)_retdata) = system_properties;
}

void EditBone_align_roll_func(EditBone *_self, float vector[3])
{
	rna_EditBone_align_roll(_self, vector);
}

static void EditBone_align_roll_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	EditBone *_self;
	const float *vector;
	char *_data;
	
	_self = (EditBone *)_ptr->data;
	_data = (char *)_parms->data;
	vector = ((const float *)_data);
	
	rna_EditBone_align_roll(_self, vector);
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);
void rna_EditBone_align_roll(EditBone *_self, float vector[3]);

/* BoneColor */
static CollectionPropertyRNA rna_BoneColor_rna_properties_;
PropertyRNA &rna_BoneColor_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BoneColor_rna_properties_);

static PointerPropertyRNA rna_BoneColor_rna_type_;
PropertyRNA &rna_BoneColor_rna_type = reinterpret_cast<PropertyRNA &>(rna_BoneColor_rna_type_);

static EnumPropertyRNA rna_BoneColor_palette_;
PropertyRNA &rna_BoneColor_palette = reinterpret_cast<PropertyRNA &>(rna_BoneColor_palette_);

static BoolPropertyRNA rna_BoneColor_is_custom_;
PropertyRNA &rna_BoneColor_is_custom = reinterpret_cast<PropertyRNA &>(rna_BoneColor_is_custom_);

static PointerPropertyRNA rna_BoneColor_custom_;
PropertyRNA &rna_BoneColor_custom = reinterpret_cast<PropertyRNA &>(rna_BoneColor_custom_);

StructRNA *RNA_BoneColor;
void register_struct_BoneColor(BlenderRNA &brna)
{
	rna_BoneColor_rna_properties_ = {
		{&rna_BoneColor_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneColor_rna_properties_begin, BoneColor_rna_properties_next, BoneColor_rna_properties_end, BoneColor_rna_properties_get, nullptr, nullptr, BoneColor_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BoneColor_rna_type_ = {
		{&rna_BoneColor_palette, 	&rna_BoneColor_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneColor_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_BoneColor_palette_items[23] = {
		{0, "DEFAULT", 0, "Default Colors", ""	},
		{1, "THEME01", 801, "01 - Theme Color Set", ""	},
		{2, "THEME02", 802, "02 - Theme Color Set", ""	},
		{3, "THEME03", 803, "03 - Theme Color Set", ""	},
		{4, "THEME04", 804, "04 - Theme Color Set", ""	},
		{5, "THEME05", 805, "05 - Theme Color Set", ""	},
		{6, "THEME06", 806, "06 - Theme Color Set", ""	},
		{7, "THEME07", 807, "07 - Theme Color Set", ""	},
		{8, "THEME08", 808, "08 - Theme Color Set", ""	},
		{9, "THEME09", 809, "09 - Theme Color Set", ""	},
		{10, "THEME10", 810, "10 - Theme Color Set", ""	},
		{11, "THEME11", 811, "11 - Theme Color Set", ""	},
		{12, "THEME12", 812, "12 - Theme Color Set", ""	},
		{13, "THEME13", 813, "13 - Theme Color Set", ""	},
		{14, "THEME14", 814, "14 - Theme Color Set", ""	},
		{15, "THEME15", 815, "15 - Theme Color Set", ""	},
		{16, "THEME16", 816, "16 - Theme Color Set", ""	},
		{17, "THEME17", 817, "17 - Theme Color Set", ""	},
		{18, "THEME18", 818, "18 - Theme Color Set", ""	},
		{19, "THEME19", 819, "19 - Theme Color Set", ""	},
		{20, "THEME20", 820, "20 - Theme Color Set", ""	},
		{-1, "CUSTOM", 0, "Custom Color Set", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BoneColor_palette_ = {
		{&rna_BoneColor_is_custom, 	&rna_BoneColor_rna_type,
		-1, "palette", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "Color Set",
		"Color palette to use",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BoneColor_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneColor_palette_get, BoneColor_palette_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BoneColor_palette_items, 22, 0
	};

	rna_BoneColor_is_custom_ = {
		{&rna_BoneColor_custom, 	&rna_BoneColor_palette,
		-1, "is_custom", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Custom Color",
		"A color palette is user-defined, instead of using a theme-defined one",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneColor_is_custom_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoneColor_custom_ = {
		{nullptr, 	&rna_BoneColor_is_custom,
		-1, "custom", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Custom",
		"The custom bone colors, used when palette is \'CUSTOM\'",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_BoneColor_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneColor_custom_get, nullptr, nullptr, nullptr,RNA_ThemeBoneColorSet
	};

	StructRNA *srna = RNA_BoneColor;
	srna->cont.properties = {&rna_BoneColor_rna_properties, &rna_BoneColor_custom};
	srna->identifier = "BoneColor";
	srna->flag = 516;
	srna->name = "BoneColor";
	srna->description = "Theme color or custom color of a bone";
	srna->translation_context = "*";
	srna->icon = 180;
	srna->iteratorproperty = &rna_BoneColor_rna_properties;
	srna->path = rna_BoneColor_path;
};

/* BoneCollection */
static CollectionPropertyRNA rna_BoneCollection_rna_properties_;
PropertyRNA &rna_BoneCollection_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_rna_properties_);

static PointerPropertyRNA rna_BoneCollection_rna_type_;
PropertyRNA &rna_BoneCollection_rna_type = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_rna_type_);

static StringPropertyRNA rna_BoneCollection_name_;
PropertyRNA &rna_BoneCollection_name = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_name_);

static BoolPropertyRNA rna_BoneCollection_is_expanded_;
PropertyRNA &rna_BoneCollection_is_expanded = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_is_expanded_);

static BoolPropertyRNA rna_BoneCollection_is_visible_;
PropertyRNA &rna_BoneCollection_is_visible = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_is_visible_);

static BoolPropertyRNA rna_BoneCollection_is_visible_ancestors_;
PropertyRNA &rna_BoneCollection_is_visible_ancestors = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_is_visible_ancestors_);

static BoolPropertyRNA rna_BoneCollection_is_visible_effectively_;
PropertyRNA &rna_BoneCollection_is_visible_effectively = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_is_visible_effectively_);

static BoolPropertyRNA rna_BoneCollection_is_solo_;
PropertyRNA &rna_BoneCollection_is_solo = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_is_solo_);

static BoolPropertyRNA rna_BoneCollection_is_local_override_;
PropertyRNA &rna_BoneCollection_is_local_override = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_is_local_override_);

static BoolPropertyRNA rna_BoneCollection_is_editable_;
PropertyRNA &rna_BoneCollection_is_editable = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_is_editable_);

static CollectionPropertyRNA rna_BoneCollection_bones_;
PropertyRNA &rna_BoneCollection_bones = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_bones_);

static CollectionPropertyRNA rna_BoneCollection_children_;
PropertyRNA &rna_BoneCollection_children = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_children_);

static PointerPropertyRNA rna_BoneCollection_parent_;
PropertyRNA &rna_BoneCollection_parent = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_parent_);

static IntPropertyRNA rna_BoneCollection_index_;
PropertyRNA &rna_BoneCollection_index = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_index_);

static IntPropertyRNA rna_BoneCollection_child_number_;
PropertyRNA &rna_BoneCollection_child_number = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_child_number_);

static BoolPropertyRNA rna_BoneCollection_bl_system_properties_get_do_create_;
PropertyRNA &rna_BoneCollection_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_BoneCollection_bl_system_properties_get_system_properties_;
PropertyRNA &rna_BoneCollection_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_bl_system_properties_get_system_properties_);

FunctionRNA *rna_BoneCollection_bl_system_properties_get_func;
static PointerPropertyRNA rna_BoneCollection_assign_bone_;
PropertyRNA &rna_BoneCollection_assign_bone = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_assign_bone_);

static BoolPropertyRNA rna_BoneCollection_assign_assigned_;
PropertyRNA &rna_BoneCollection_assign_assigned = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_assign_assigned_);

FunctionRNA *rna_BoneCollection_assign_func;
static PointerPropertyRNA rna_BoneCollection_unassign_bone_;
PropertyRNA &rna_BoneCollection_unassign_bone = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_unassign_bone_);

static BoolPropertyRNA rna_BoneCollection_unassign_assigned_;
PropertyRNA &rna_BoneCollection_unassign_assigned = reinterpret_cast<PropertyRNA &>(rna_BoneCollection_unassign_assigned_);

FunctionRNA *rna_BoneCollection_unassign_func;
StructRNA *RNA_BoneCollection;
void register_struct_BoneCollection(BlenderRNA &brna)
{
	rna_BoneCollection_rna_properties_ = {
		{&rna_BoneCollection_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_rna_properties_begin, BoneCollection_rna_properties_next, BoneCollection_rna_properties_end, BoneCollection_rna_properties_get, nullptr, nullptr, BoneCollection_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BoneCollection_rna_type_ = {
		{&rna_BoneCollection_name, 	&rna_BoneCollection_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BoneCollection_name_ = {
		{&rna_BoneCollection_is_expanded, 	&rna_BoneCollection_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Unique within the Armature",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 102891520, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_name_get, BoneCollection_name_length, BoneCollection_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_BoneCollection_is_expanded_ = {
		{&rna_BoneCollection_is_visible, 	&rna_BoneCollection_name,
		-1, "is_expanded", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Expanded",
		"This bone collection is expanded in the bone collections tree view",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102891520, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_is_expanded_get, BoneCollection_is_expanded_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollection_is_visible_ = {
		{&rna_BoneCollection_is_visible_ancestors, 	&rna_BoneCollection_is_expanded,
		-1, "is_visible", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Visible",
		"Bones in this collection will be visible in pose/object mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102891520, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_is_visible_get, BoneCollection_is_visible_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollection_is_visible_ancestors_ = {
		{&rna_BoneCollection_is_visible_effectively, 	&rna_BoneCollection_is_visible,
		-1, "is_visible_ancestors", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ancestors Effectively Visible",
		"True when all of the ancestors of this bone collection are marked as visible; always True for root bone collections",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_is_visible_ancestors_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollection_is_visible_effectively_ = {
		{&rna_BoneCollection_is_solo, 	&rna_BoneCollection_is_visible_ancestors,
		-1, "is_visible_effectively", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Effective Visibility",
		"Whether this bone collection is effectively visible in the viewport. This is True when this bone collection and all of its ancestors are visible, or when it is marked as \'solo\'.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_is_visible_effectively_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollection_is_solo_ = {
		{&rna_BoneCollection_is_local_override, 	&rna_BoneCollection_is_visible_effectively,
		-1, "is_solo", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Solo",
		"Show only this bone collection, and others also marked as \'solo\'",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102891520, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_is_solo_get, BoneCollection_is_solo_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollection_is_local_override_ = {
		{&rna_BoneCollection_is_editable, 	&rna_BoneCollection_is_solo,
		-1, "is_local_override", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Local Override",
		"This collection was added via a library override in the current blend file",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_is_local_override_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollection_is_editable_ = {
		{&rna_BoneCollection_bones, 	&rna_BoneCollection_is_local_override,
		-1, "is_editable", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Editable",
		"This collection is owned by a local Armature, or was added via a library override in the current blend file",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_is_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollection_bones_ = {
		{&rna_BoneCollection_children, 	&rna_BoneCollection_is_editable,
		-1, "bones", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bones",
		"Bones assigned to this bone collection. In armature edit mode this will always return an empty list of bones, as the bone collection memberships are only synchronized when exiting edit mode.",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_bones_begin, BoneCollection_bones_next, BoneCollection_bones_end, BoneCollection_bones_get, nullptr, BoneCollection_bones_lookup_int, BoneCollection_bones_lookup_string, nullptr, RNA_Bone
	};

	rna_BoneCollection_children_ = {
		{&rna_BoneCollection_parent, 	&rna_BoneCollection_bones,
		-1, "children", 0, 2, 0, 0, 0, PropertyPathTemplateType(0), "children",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_children_begin, BoneCollection_children_next, BoneCollection_children_end, BoneCollection_children_get, BoneCollection_children_length, BoneCollection_children_lookup_int, nullptr, nullptr, RNA_BoneCollection
	};

	rna_BoneCollection_parent_ = {
		{&rna_BoneCollection_index, 	&rna_BoneCollection_children,
		-1, "parent", 8388609, 2, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"Parent bone collection. Note that accessing this requires a scan of all the bone collections to find the parent.",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_parent_get, BoneCollection_parent_set, nullptr, nullptr,RNA_BoneCollection
	};

	rna_BoneCollection_index_ = {
		{&rna_BoneCollection_child_number, 	&rna_BoneCollection_parent,
		-1, "index", 2, 2, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this bone collection in the armature.collections_all array. Note that finding this index requires a scan of all the bone collections, so do access this with care.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollection_child_number_ = {
		{nullptr, 	&rna_BoneCollection_index,
		-1, "child_number", 3, 2, 0, 0, 0, PropertyPathTemplateType(0), "Child Number",
		"Index of this collection into its parent\'s list of children. Note that finding this index requires a scan of all the bone collections, so do access this with care.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollection_child_number_get, BoneCollection_child_number_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BoneCollection;
	srna->cont.properties = {&rna_BoneCollection_rna_properties, &rna_BoneCollection_child_number};
	srna->identifier = "BoneCollection";
	srna->flag = 516;
	srna->name = "BoneCollection";
	srna->description = "Bone collection in an Armature data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoneCollection_name;
	srna->iteratorproperty = &rna_BoneCollection_rna_properties;
	srna->path = rna_BoneCollection_path;
	srna->idproperties = rna_BoneCollection_idprops;
	srna->system_idproperties = rna_BoneCollection_system_idprops;
	{
	rna_BoneCollection_bl_system_properties_get_do_create_ = {
		{&rna_BoneCollection_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BoneCollection_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_BoneCollection_bl_system_properties_get_do_create,
		-1, "system_properties", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The system properties root container, or None if there are no system properties stored in this data yet, and its creation was not requested",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BoneCollection_bl_system_properties_get_do_create, &rna_BoneCollection_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = BoneCollection_bl_system_properties_get_call;
		func->c_ret = &rna_BoneCollection_bl_system_properties_get_system_properties;
		rna_BoneCollection_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BoneCollection_assign_bone_ = {
		{&rna_BoneCollection_assign_assigned, 	nullptr,
		-1, "bone", 8388608, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Bone, PoseBone, or EditBone to assign to this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnyType
	};
	rna_BoneCollection_assign_assigned_ = {
		{nullptr, 	&rna_BoneCollection_assign_bone,
		-1, "assigned", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Assigned",
		"Whether the bone was actually assigned; will be false if the bone was already member of the collection",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BoneCollection_assign_bone, &rna_BoneCollection_assign_assigned};
		func->identifier = "assign";
		func->flag = 24;
		func->description = "Assign the given bone to this collection";
		func->call = BoneCollection_assign_call;
		func->c_ret = &rna_BoneCollection_assign_assigned;
		rna_BoneCollection_assign_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BoneCollection_unassign_bone_ = {
		{&rna_BoneCollection_unassign_assigned, 	nullptr,
		-1, "bone", 8388608, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Bone, PoseBone, or EditBone to remove from this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnyType
	};
	rna_BoneCollection_unassign_assigned_ = {
		{nullptr, 	&rna_BoneCollection_unassign_bone,
		-1, "assigned", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Unassigned",
		"Whether the bone was actually removed; will be false if the bone was not a member of the collection to begin with",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BoneCollection_unassign_bone, &rna_BoneCollection_unassign_assigned};
		func->identifier = "unassign";
		func->flag = 24;
		func->description = "Remove the given bone from this collection";
		func->call = BoneCollection_unassign_call;
		func->c_ret = &rna_BoneCollection_unassign_assigned;
		rna_BoneCollection_unassign_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Armature */
static PointerPropertyRNA rna_Armature_animation_data_;
PropertyRNA &rna_Armature_animation_data = reinterpret_cast<PropertyRNA &>(rna_Armature_animation_data_);

static CollectionPropertyRNA rna_Armature_bones_;
PropertyRNA &rna_Armature_bones = reinterpret_cast<PropertyRNA &>(rna_Armature_bones_);

static CollectionPropertyRNA rna_Armature_edit_bones_;
PropertyRNA &rna_Armature_edit_bones = reinterpret_cast<PropertyRNA &>(rna_Armature_edit_bones_);

static CollectionPropertyRNA rna_Armature_collections_;
PropertyRNA &rna_Armature_collections = reinterpret_cast<PropertyRNA &>(rna_Armature_collections_);

static CollectionPropertyRNA rna_Armature_collections_all_;
PropertyRNA &rna_Armature_collections_all = reinterpret_cast<PropertyRNA &>(rna_Armature_collections_all_);

static EnumPropertyRNA rna_Armature_pose_position_;
PropertyRNA &rna_Armature_pose_position = reinterpret_cast<PropertyRNA &>(rna_Armature_pose_position_);

static EnumPropertyRNA rna_Armature_display_type_;
PropertyRNA &rna_Armature_display_type = reinterpret_cast<PropertyRNA &>(rna_Armature_display_type_);

static BoolPropertyRNA rna_Armature_show_axes_;
PropertyRNA &rna_Armature_show_axes = reinterpret_cast<PropertyRNA &>(rna_Armature_show_axes_);

static FloatPropertyRNA rna_Armature_axes_position_;
PropertyRNA &rna_Armature_axes_position = reinterpret_cast<PropertyRNA &>(rna_Armature_axes_position_);

static EnumPropertyRNA rna_Armature_relation_line_position_;
PropertyRNA &rna_Armature_relation_line_position = reinterpret_cast<PropertyRNA &>(rna_Armature_relation_line_position_);

static BoolPropertyRNA rna_Armature_show_names_;
PropertyRNA &rna_Armature_show_names = reinterpret_cast<PropertyRNA &>(rna_Armature_show_names_);

static BoolPropertyRNA rna_Armature_use_mirror_x_;
PropertyRNA &rna_Armature_use_mirror_x = reinterpret_cast<PropertyRNA &>(rna_Armature_use_mirror_x_);

static BoolPropertyRNA rna_Armature_show_bone_custom_shapes_;
PropertyRNA &rna_Armature_show_bone_custom_shapes = reinterpret_cast<PropertyRNA &>(rna_Armature_show_bone_custom_shapes_);

static BoolPropertyRNA rna_Armature_show_bone_colors_;
PropertyRNA &rna_Armature_show_bone_colors = reinterpret_cast<PropertyRNA &>(rna_Armature_show_bone_colors_);

static BoolPropertyRNA rna_Armature_is_editmode_;
PropertyRNA &rna_Armature_is_editmode = reinterpret_cast<PropertyRNA &>(rna_Armature_is_editmode_);

static FloatPropertyRNA rna_Armature_transform_matrix_;
PropertyRNA &rna_Armature_transform_matrix = reinterpret_cast<PropertyRNA &>(rna_Armature_transform_matrix_);

FunctionRNA *rna_Armature_transform_func;
StructRNA *RNA_Armature;
void register_struct_Armature(BlenderRNA &brna)
{
	rna_Armature_animation_data_ = {
		{&rna_Armature_bones, 	nullptr,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Armature_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	rna_Armature_bones_ = {
		{&rna_Armature_edit_bones, 	&rna_Armature_animation_data,
		-1, "bones", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Bones",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ArmatureBones},
		Armature_bones_begin, Armature_bones_next, Armature_bones_end, Armature_bones_get, nullptr, nullptr, Armature_bones_lookup_string, nullptr, RNA_Bone
	};

	rna_Armature_edit_bones_ = {
		{&rna_Armature_collections, 	&rna_Armature_bones,
		-1, "edit_bones", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Edit Bones",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_ArmatureEditBones},
		Armature_edit_bones_begin, Armature_edit_bones_next, Armature_edit_bones_end, Armature_edit_bones_get, nullptr, Armature_edit_bones_lookup_int, Armature_edit_bones_lookup_string, nullptr, RNA_EditBone
	};

	rna_Armature_collections_ = {
		{&rna_Armature_collections_all, 	&rna_Armature_edit_bones,
		-1, "collections", 1, 1025, 0, 0, 0, PropertyPathTemplateType(0), "Bone Collections (Roots)",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Armature_collections_override_apply,
			0, PROP_RAW_UNSET, RNA_BoneCollections},
		Armature_collections_begin, Armature_collections_next, Armature_collections_end, Armature_collections_get, Armature_collections_length, Armature_collections_lookup_int, nullptr, nullptr, RNA_BoneCollection
	};

	rna_Armature_collections_all_ = {
		{&rna_Armature_pose_position, 	&rna_Armature_collections,
		-1, "collections_all", 0, 1, 0, 0, 0, PropertyPathTemplateType(0), "Bone Collections (All)",
		"List of all bone collections of the armature",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Armature_collections_all_begin, Armature_collections_all_next, Armature_collections_all_end, Armature_collections_all_get, Armature_collections_all_length, Armature_collections_all_lookup_int, nullptr, nullptr, RNA_BoneCollection
	};

	static const EnumPropertyItem rna_Armature_pose_position_items[3] = {
		{0, "POSE", 0, "Pose Position", "Show armature in posed state"	},
		{1, "REST", 0, "Rest Position", "Show Armature in binding pose state (no posing possible)"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Armature_pose_position_ = {
		{&rna_Armature_display_type, 	&rna_Armature_collections_all,
		-1, "pose_position", 65539, 1, 0, 4, 0, PropertyPathTemplateType(0), "Pose Position",
		"Show armature in binding pose or final posed state",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bArmature, flag), RawPropertyType(0), nullptr},
		Armature_pose_position_get, Armature_pose_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Armature_pose_position_items, 2, 0
	};

	static const EnumPropertyItem rna_Armature_display_type_items[6] = {
		{0, "OCTAHEDRAL", 0, "Octahedral", "Display bones as octahedral shape (default)"	},
		{1, "STICK", 0, "Stick", "Display bones as simple 2D lines with dots"	},
		{2, "BBONE", 0, "B-Bone", "Display bones as boxes, showing subdivision and B-Splines"	},
		{3, "ENVELOPE", 0, "Envelope", "Display bones as extruded spheres, showing deformation influence volume"	},
		{4, "WIRE", 0, "Wire", "Display bones as thin wires, showing subdivision and B-Splines"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Armature_display_type_ = {
		{&rna_Armature_show_axes, 	&rna_Armature_pose_position,
		-1, "display_type", 65539, 1, 0, 4, 0, PropertyPathTemplateType(0), "Display Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bArmature, drawtype), RawPropertyType(0), nullptr},
		Armature_display_type_get, Armature_display_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Armature_display_type_items, 5, 0
	};

	rna_Armature_show_axes_ = {
		{&rna_Armature_axes_position, 	&rna_Armature_display_type,
		-1, "show_axes", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Axes",
		"Display bone axes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Armature_show_axes_get, Armature_show_axes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Armature_axes_position_ = {
		{&rna_Armature_relation_line_position, 	&rna_Armature_show_axes,
		-1, "axes_position", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Axes Position",
		"The position for the axes on the bone. Increasing the value moves it closer to the tip; decreasing moves it closer to the root.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bArmature, axes_position), RawPropertyType(5), nullptr},
		Armature_axes_position_get, Armature_axes_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 1, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_Armature_relation_line_position_items[3] = {
		{0, "TAIL", 0, "Tail", "Draw the relationship line from the parent tail to the child head"	},
		{1, "HEAD", 0, "Head", "Draw the relationship line from the parent head to the child head"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Armature_relation_line_position_ = {
		{&rna_Armature_show_names, 	&rna_Armature_axes_position,
		-1, "relation_line_position", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Relation Line Position",
		"The start position of the relation lines from parent to child bones",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Armature_relation_line_position_get, Armature_relation_line_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Armature_relation_line_position_items, 2, 0
	};

	rna_Armature_show_names_ = {
		{&rna_Armature_use_mirror_x, 	&rna_Armature_relation_line_position,
		-1, "show_names", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Names",
		"Display bone names",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Armature_show_names_get, Armature_show_names_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Armature_use_mirror_x_ = {
		{&rna_Armature_show_bone_custom_shapes, 	&rna_Armature_show_names,
		-1, "use_mirror_x", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "X-Axis Mirror",
		"Apply changes to matching bone on opposite side of X-Axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Armature_use_mirror_x_get, Armature_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Armature_show_bone_custom_shapes_ = {
		{&rna_Armature_show_bone_colors, 	&rna_Armature_use_mirror_x,
		-1, "show_bone_custom_shapes", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Custom Bone Shapes",
		"Display bones with their custom shapes",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Armature_show_bone_custom_shapes_get, Armature_show_bone_custom_shapes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Armature_show_bone_colors_ = {
		{&rna_Armature_is_editmode, 	&rna_Armature_show_bone_custom_shapes,
		-1, "show_bone_colors", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Bone Colors",
		"Display bone colors",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Armature_show_bone_colors_get, Armature_show_bone_colors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Armature_is_editmode_ = {
		{nullptr, 	&rna_Armature_show_bone_colors,
		-1, "is_editmode", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Is Editmode",
		"True when used in editmode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Armature_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Armature;
	srna->cont.properties = {&rna_Armature_animation_data, &rna_Armature_is_editmode};
	srna->identifier = "Armature";
	srna->flag = 519;
	srna->name = "Armature";
	srna->description = "Armature data-block containing a hierarchy of bones, usually used for rigging characters";
	srna->translation_context = "*";
	srna->icon = 179;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	static float rna_Armature_transform_matrix_default[16] = {
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
	rna_Armature_transform_matrix_ = {
		{nullptr, 	nullptr,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Armature_transform_matrix_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Armature_transform_matrix, &rna_Armature_transform_matrix};
		func->identifier = "transform";
		func->description = "Transform armature bones by a matrix";
		func->call = Armature_transform_call;
		rna_Armature_transform_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Armature Bones */
static CollectionPropertyRNA rna_ArmatureBones_rna_properties_;
PropertyRNA &rna_ArmatureBones_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ArmatureBones_rna_properties_);

static PointerPropertyRNA rna_ArmatureBones_rna_type_;
PropertyRNA &rna_ArmatureBones_rna_type = reinterpret_cast<PropertyRNA &>(rna_ArmatureBones_rna_type_);

static PointerPropertyRNA rna_ArmatureBones_active_;
PropertyRNA &rna_ArmatureBones_active = reinterpret_cast<PropertyRNA &>(rna_ArmatureBones_active_);

StructRNA *RNA_ArmatureBones;
void register_struct_ArmatureBones(BlenderRNA &brna)
{
	rna_ArmatureBones_rna_properties_ = {
		{&rna_ArmatureBones_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureBones_rna_properties_begin, ArmatureBones_rna_properties_next, ArmatureBones_rna_properties_end, ArmatureBones_rna_properties_get, nullptr, nullptr, ArmatureBones_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ArmatureBones_rna_type_ = {
		{&rna_ArmatureBones_active, 	&rna_ArmatureBones_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureBones_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ArmatureBones_active_ = {
		{nullptr, 	&rna_ArmatureBones_rna_type,
		-1, "active", 8388609, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Bone",
		"Armature\'s active bone",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureBones_active_get, ArmatureBones_active_set, nullptr, nullptr,RNA_Bone
	};

	StructRNA *srna = RNA_ArmatureBones;
	srna->cont.properties = {&rna_ArmatureBones_rna_properties, &rna_ArmatureBones_active};
	srna->identifier = "ArmatureBones";
	srna->flag = 516;
	srna->name = "Armature Bones";
	srna->description = "Collection of armature bones";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ArmatureBones_rna_properties;
};

/* Armature EditBones */
static CollectionPropertyRNA rna_ArmatureEditBones_rna_properties_;
PropertyRNA &rna_ArmatureEditBones_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ArmatureEditBones_rna_properties_);

static PointerPropertyRNA rna_ArmatureEditBones_rna_type_;
PropertyRNA &rna_ArmatureEditBones_rna_type = reinterpret_cast<PropertyRNA &>(rna_ArmatureEditBones_rna_type_);

static PointerPropertyRNA rna_ArmatureEditBones_active_;
PropertyRNA &rna_ArmatureEditBones_active = reinterpret_cast<PropertyRNA &>(rna_ArmatureEditBones_active_);

static StringPropertyRNA rna_ArmatureEditBones_new_name_;
PropertyRNA &rna_ArmatureEditBones_new_name = reinterpret_cast<PropertyRNA &>(rna_ArmatureEditBones_new_name_);

static PointerPropertyRNA rna_ArmatureEditBones_new_bone_;
PropertyRNA &rna_ArmatureEditBones_new_bone = reinterpret_cast<PropertyRNA &>(rna_ArmatureEditBones_new_bone_);

FunctionRNA *rna_ArmatureEditBones_new_func;
static PointerPropertyRNA rna_ArmatureEditBones_remove_bone_;
PropertyRNA &rna_ArmatureEditBones_remove_bone = reinterpret_cast<PropertyRNA &>(rna_ArmatureEditBones_remove_bone_);

FunctionRNA *rna_ArmatureEditBones_remove_func;
StructRNA *RNA_ArmatureEditBones;
void register_struct_ArmatureEditBones(BlenderRNA &brna)
{
	rna_ArmatureEditBones_rna_properties_ = {
		{&rna_ArmatureEditBones_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureEditBones_rna_properties_begin, ArmatureEditBones_rna_properties_next, ArmatureEditBones_rna_properties_end, ArmatureEditBones_rna_properties_get, nullptr, nullptr, ArmatureEditBones_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ArmatureEditBones_rna_type_ = {
		{&rna_ArmatureEditBones_active, 	&rna_ArmatureEditBones_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureEditBones_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ArmatureEditBones_active_ = {
		{nullptr, 	&rna_ArmatureEditBones_rna_type,
		-1, "active", 8388609, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active EditBone",
		"Armatures active edit bone",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ArmatureEditBones_active_get, ArmatureEditBones_active_set, nullptr, nullptr,RNA_EditBone
	};

	StructRNA *srna = RNA_ArmatureEditBones;
	srna->cont.properties = {&rna_ArmatureEditBones_rna_properties, &rna_ArmatureEditBones_active};
	srna->identifier = "ArmatureEditBones";
	srna->flag = 516;
	srna->name = "Armature EditBones";
	srna->description = "Collection of armature edit bones";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ArmatureEditBones_rna_properties;
	{
	rna_ArmatureEditBones_new_name_ = {
		{&rna_ArmatureEditBones_new_bone, 	nullptr,
		-1, "name", 262145, 1, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the bone",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Object"
	};
	rna_ArmatureEditBones_new_bone_ = {
		{nullptr, 	&rna_ArmatureEditBones_new_name,
		-1, "bone", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created edit bone",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_EditBone
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ArmatureEditBones_new_name, &rna_ArmatureEditBones_new_bone};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add a new bone";
		func->call = ArmatureEditBones_new_call;
		func->c_ret = &rna_ArmatureEditBones_new_bone;
		rna_ArmatureEditBones_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_ArmatureEditBones_remove_bone_ = {
		{nullptr, 	nullptr,
		-1, "bone", 262144, 1, 5, 0, 0, PropertyPathTemplateType(0), "",
		"EditBone to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_EditBone
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_ArmatureEditBones_remove_bone, &rna_ArmatureEditBones_remove_bone};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an existing bone from the armature";
		func->call = ArmatureEditBones_remove_call;
		rna_ArmatureEditBones_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Armature Bone Collections */
static CollectionPropertyRNA rna_BoneCollections_rna_properties_;
PropertyRNA &rna_BoneCollections_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_rna_properties_);

static PointerPropertyRNA rna_BoneCollections_rna_type_;
PropertyRNA &rna_BoneCollections_rna_type = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_rna_type_);

static PointerPropertyRNA rna_BoneCollections_active_;
PropertyRNA &rna_BoneCollections_active = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_active_);

static IntPropertyRNA rna_BoneCollections_active_index_;
PropertyRNA &rna_BoneCollections_active_index = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_active_index_);

static StringPropertyRNA rna_BoneCollections_active_name_;
PropertyRNA &rna_BoneCollections_active_name = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_active_name_);

static BoolPropertyRNA rna_BoneCollections_is_solo_active_;
PropertyRNA &rna_BoneCollections_is_solo_active = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_is_solo_active_);

static StringPropertyRNA rna_BoneCollections_new_name_;
PropertyRNA &rna_BoneCollections_new_name = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_new_name_);

static PointerPropertyRNA rna_BoneCollections_new_parent_;
PropertyRNA &rna_BoneCollections_new_parent = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_new_parent_);

static PointerPropertyRNA rna_BoneCollections_new_bonecollection_;
PropertyRNA &rna_BoneCollections_new_bonecollection = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_new_bonecollection_);

FunctionRNA *rna_BoneCollections_new_func;
static PointerPropertyRNA rna_BoneCollections_remove_bone_collection_;
PropertyRNA &rna_BoneCollections_remove_bone_collection = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_remove_bone_collection_);

FunctionRNA *rna_BoneCollections_remove_func;
static IntPropertyRNA rna_BoneCollections_move_from_index_;
PropertyRNA &rna_BoneCollections_move_from_index = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_move_from_index_);

static IntPropertyRNA rna_BoneCollections_move_to_index_;
PropertyRNA &rna_BoneCollections_move_to_index = reinterpret_cast<PropertyRNA &>(rna_BoneCollections_move_to_index_);

FunctionRNA *rna_BoneCollections_move_func;
StructRNA *RNA_BoneCollections;
void register_struct_BoneCollections(BlenderRNA &brna)
{
	rna_BoneCollections_rna_properties_ = {
		{&rna_BoneCollections_rna_type, 	nullptr,
		-1, "rna_properties", 0, 1, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollections_rna_properties_begin, BoneCollections_rna_properties_next, BoneCollections_rna_properties_end, BoneCollections_rna_properties_get, nullptr, nullptr, BoneCollections_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BoneCollections_rna_type_ = {
		{&rna_BoneCollections_active, 	&rna_BoneCollections_rna_properties,
		-1, "rna_type", 8912896, 1, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollections_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BoneCollections_active_ = {
		{&rna_BoneCollections_active_index, 	&rna_BoneCollections_rna_type,
		-1, "active", 8388609, 5, 0, 0, 0, PropertyPathTemplateType(0), "Active Collection",
		"Armature\'s active bone collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102891520, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollections_active_get, BoneCollections_active_set, nullptr, nullptr,RNA_BoneCollection
	};

	rna_BoneCollections_active_index_ = {
		{&rna_BoneCollections_active_name, 	&rna_BoneCollections_active,
		-1, "active_index", 65539, 5, 0, 0, 0, PropertyPathTemplateType(0), "Active Collection Index",
		"The index of the Armature\'s active bone collection; -1 when there is no active collection. Note that this is indexing the underlying array of bone collections, which may not be in the order you expect. Root collections are listed first, and siblings are always sequential. Apart from that, bone collections can be in any order, and thus incrementing or decrementing this index can make the active bone collection jump around in unexpected ways. For a more predictable interface, use ``active`` or ``active_name``.",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102891520, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollections_active_index_get, BoneCollections_active_index_set, nullptr, nullptr, rna_BoneCollections_active_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BoneCollections_active_name_ = {
		{&rna_BoneCollections_is_solo_active, 	&rna_BoneCollections_active_index,
		-1, "active_name", 262145, 1, 0, 0, 0, PropertyPathTemplateType(0), "Active Collection Name",
		"The name of the Armature\'s active bone collection; empty when there is no active collection",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 102891520, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollections_active_name_get, BoneCollections_active_name_length, BoneCollections_active_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_BoneCollections_is_solo_active_ = {
		{nullptr, 	&rna_BoneCollections_active_name,
		-1, "is_solo_active", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Solo Active",
		"Read-only flag that indicates there is at least one bone collection marked as \'solo\'",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollections_is_solo_active_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BoneCollections;
	srna->cont.properties = {&rna_BoneCollections_rna_properties, &rna_BoneCollections_is_solo_active};
	srna->identifier = "BoneCollections";
	srna->flag = 516;
	srna->name = "Armature Bone Collections";
	srna->description = "The Bone Collections of this Armature";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BoneCollections_rna_properties;
	{
	rna_BoneCollections_new_name_ = {
		{&rna_BoneCollections_new_parent, 	nullptr,
		-1, "name", 262145, 1, 1, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of the new collection. Blender will ensure it is unique within the collections of the Armature.",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_BoneCollections_new_parent_ = {
		{&rna_BoneCollections_new_bonecollection, 	&rna_BoneCollections_new_name,
		-1, "parent", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Parent Collection",
		"If not None, the new bone collection becomes a child of this collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_BoneCollection
	};
	rna_BoneCollections_new_bonecollection_ = {
		{nullptr, 	&rna_BoneCollections_new_parent,
		-1, "bonecollection", 8388608, 1, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created bone collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_BoneCollection
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BoneCollections_new_name, &rna_BoneCollections_new_bonecollection};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add a new empty bone collection to the armature";
		func->call = BoneCollections_new_call;
		func->c_ret = &rna_BoneCollections_new_bonecollection;
		rna_BoneCollections_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BoneCollections_remove_bone_collection_ = {
		{nullptr, 	nullptr,
		-1, "bone_collection", 8388608, 1, 1, 0, 0, PropertyPathTemplateType(0), "Bone Collection",
		"The bone collection to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_BoneCollection
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BoneCollections_remove_bone_collection, &rna_BoneCollections_remove_bone_collection};
		func->identifier = "remove";
		func->description = "Remove the bone collection from the armature. If this bone collection has any children, they will be reassigned to their grandparent; in other words, the children will take the place of the removed bone collection.";
		func->call = BoneCollections_remove_call;
		rna_BoneCollections_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BoneCollections_move_from_index_ = {
		{&rna_BoneCollections_move_to_index, 	nullptr,
		-1, "from_index", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "From Index",
		"Index to move",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
	rna_BoneCollections_move_to_index_ = {
		{nullptr, 	&rna_BoneCollections_move_from_index,
		-1, "to_index", 3, 1, 1, 0, 0, PropertyPathTemplateType(0), "To Index",
		"Target index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BoneCollections_move_from_index, &rna_BoneCollections_move_to_index};
		func->identifier = "move";
		func->flag = 16;
		func->description = "Move a bone collection to a different position in the collection list. This can only be used to reorder siblings, and not to change parent-child relationships.";
		func->call = BoneCollections_move_call;
		rna_BoneCollections_move_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Bone */
static CollectionPropertyRNA rna_Bone_rna_properties_;
PropertyRNA &rna_Bone_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Bone_rna_properties_);

static PointerPropertyRNA rna_Bone_rna_type_;
PropertyRNA &rna_Bone_rna_type = reinterpret_cast<PropertyRNA &>(rna_Bone_rna_type_);

static PointerPropertyRNA rna_Bone_parent_;
PropertyRNA &rna_Bone_parent = reinterpret_cast<PropertyRNA &>(rna_Bone_parent_);

static CollectionPropertyRNA rna_Bone_children_;
PropertyRNA &rna_Bone_children = reinterpret_cast<PropertyRNA &>(rna_Bone_children_);

static CollectionPropertyRNA rna_Bone_collections_;
PropertyRNA &rna_Bone_collections = reinterpret_cast<PropertyRNA &>(rna_Bone_collections_);

static StringPropertyRNA rna_Bone_name_;
PropertyRNA &rna_Bone_name = reinterpret_cast<PropertyRNA &>(rna_Bone_name_);

static PointerPropertyRNA rna_Bone_color_;
PropertyRNA &rna_Bone_color = reinterpret_cast<PropertyRNA &>(rna_Bone_color_);

static EnumPropertyRNA rna_Bone_display_type_;
PropertyRNA &rna_Bone_display_type = reinterpret_cast<PropertyRNA &>(rna_Bone_display_type_);

static BoolPropertyRNA rna_Bone_use_connect_;
PropertyRNA &rna_Bone_use_connect = reinterpret_cast<PropertyRNA &>(rna_Bone_use_connect_);

static BoolPropertyRNA rna_Bone_use_inherit_rotation_;
PropertyRNA &rna_Bone_use_inherit_rotation = reinterpret_cast<PropertyRNA &>(rna_Bone_use_inherit_rotation_);

static BoolPropertyRNA rna_Bone_use_envelope_multiply_;
PropertyRNA &rna_Bone_use_envelope_multiply = reinterpret_cast<PropertyRNA &>(rna_Bone_use_envelope_multiply_);

static BoolPropertyRNA rna_Bone_use_deform_;
PropertyRNA &rna_Bone_use_deform = reinterpret_cast<PropertyRNA &>(rna_Bone_use_deform_);

static EnumPropertyRNA rna_Bone_inherit_scale_;
PropertyRNA &rna_Bone_inherit_scale = reinterpret_cast<PropertyRNA &>(rna_Bone_inherit_scale_);

static BoolPropertyRNA rna_Bone_use_local_location_;
PropertyRNA &rna_Bone_use_local_location = reinterpret_cast<PropertyRNA &>(rna_Bone_use_local_location_);

static BoolPropertyRNA rna_Bone_use_relative_parent_;
PropertyRNA &rna_Bone_use_relative_parent = reinterpret_cast<PropertyRNA &>(rna_Bone_use_relative_parent_);

static BoolPropertyRNA rna_Bone_show_wire_;
PropertyRNA &rna_Bone_show_wire = reinterpret_cast<PropertyRNA &>(rna_Bone_show_wire_);

static BoolPropertyRNA rna_Bone_use_cyclic_offset_;
PropertyRNA &rna_Bone_use_cyclic_offset = reinterpret_cast<PropertyRNA &>(rna_Bone_use_cyclic_offset_);

static BoolPropertyRNA rna_Bone_hide_select_;
PropertyRNA &rna_Bone_hide_select = reinterpret_cast<PropertyRNA &>(rna_Bone_hide_select_);

static FloatPropertyRNA rna_Bone_envelope_distance_;
PropertyRNA &rna_Bone_envelope_distance = reinterpret_cast<PropertyRNA &>(rna_Bone_envelope_distance_);

static FloatPropertyRNA rna_Bone_envelope_weight_;
PropertyRNA &rna_Bone_envelope_weight = reinterpret_cast<PropertyRNA &>(rna_Bone_envelope_weight_);

static FloatPropertyRNA rna_Bone_head_radius_;
PropertyRNA &rna_Bone_head_radius = reinterpret_cast<PropertyRNA &>(rna_Bone_head_radius_);

static FloatPropertyRNA rna_Bone_tail_radius_;
PropertyRNA &rna_Bone_tail_radius = reinterpret_cast<PropertyRNA &>(rna_Bone_tail_radius_);

static IntPropertyRNA rna_Bone_bbone_segments_;
PropertyRNA &rna_Bone_bbone_segments = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_segments_);

static EnumPropertyRNA rna_Bone_bbone_mapping_mode_;
PropertyRNA &rna_Bone_bbone_mapping_mode = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_mapping_mode_);

static FloatPropertyRNA rna_Bone_bbone_x_;
PropertyRNA &rna_Bone_bbone_x = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_x_);

static FloatPropertyRNA rna_Bone_bbone_z_;
PropertyRNA &rna_Bone_bbone_z = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_z_);

static EnumPropertyRNA rna_Bone_bbone_handle_type_start_;
PropertyRNA &rna_Bone_bbone_handle_type_start = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_handle_type_start_);

static PointerPropertyRNA rna_Bone_bbone_custom_handle_start_;
PropertyRNA &rna_Bone_bbone_custom_handle_start = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_custom_handle_start_);

static BoolPropertyRNA rna_Bone_bbone_handle_use_scale_start_;
PropertyRNA &rna_Bone_bbone_handle_use_scale_start = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_handle_use_scale_start_);

static BoolPropertyRNA rna_Bone_bbone_handle_use_ease_start_;
PropertyRNA &rna_Bone_bbone_handle_use_ease_start = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_handle_use_ease_start_);

static EnumPropertyRNA rna_Bone_bbone_handle_type_end_;
PropertyRNA &rna_Bone_bbone_handle_type_end = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_handle_type_end_);

static PointerPropertyRNA rna_Bone_bbone_custom_handle_end_;
PropertyRNA &rna_Bone_bbone_custom_handle_end = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_custom_handle_end_);

static BoolPropertyRNA rna_Bone_bbone_handle_use_scale_end_;
PropertyRNA &rna_Bone_bbone_handle_use_scale_end = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_handle_use_scale_end_);

static BoolPropertyRNA rna_Bone_bbone_handle_use_ease_end_;
PropertyRNA &rna_Bone_bbone_handle_use_ease_end = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_handle_use_ease_end_);

static FloatPropertyRNA rna_Bone_bbone_rollin_;
PropertyRNA &rna_Bone_bbone_rollin = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_rollin_);

static FloatPropertyRNA rna_Bone_bbone_rollout_;
PropertyRNA &rna_Bone_bbone_rollout = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_rollout_);

static BoolPropertyRNA rna_Bone_use_endroll_as_inroll_;
PropertyRNA &rna_Bone_use_endroll_as_inroll = reinterpret_cast<PropertyRNA &>(rna_Bone_use_endroll_as_inroll_);

static FloatPropertyRNA rna_Bone_bbone_curveinx_;
PropertyRNA &rna_Bone_bbone_curveinx = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_curveinx_);

static FloatPropertyRNA rna_Bone_bbone_curveinz_;
PropertyRNA &rna_Bone_bbone_curveinz = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_curveinz_);

static FloatPropertyRNA rna_Bone_bbone_curveoutx_;
PropertyRNA &rna_Bone_bbone_curveoutx = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_curveoutx_);

static FloatPropertyRNA rna_Bone_bbone_curveoutz_;
PropertyRNA &rna_Bone_bbone_curveoutz = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_curveoutz_);

static FloatPropertyRNA rna_Bone_bbone_easein_;
PropertyRNA &rna_Bone_bbone_easein = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_easein_);

static FloatPropertyRNA rna_Bone_bbone_easeout_;
PropertyRNA &rna_Bone_bbone_easeout = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_easeout_);

static BoolPropertyRNA rna_Bone_use_scale_easing_;
PropertyRNA &rna_Bone_use_scale_easing = reinterpret_cast<PropertyRNA &>(rna_Bone_use_scale_easing_);

static FloatPropertyRNA rna_Bone_bbone_scalein_;
PropertyRNA &rna_Bone_bbone_scalein = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_scalein_);

static FloatPropertyRNA rna_Bone_bbone_scaleout_;
PropertyRNA &rna_Bone_bbone_scaleout = reinterpret_cast<PropertyRNA &>(rna_Bone_bbone_scaleout_);

static BoolPropertyRNA rna_Bone_hide_;
PropertyRNA &rna_Bone_hide = reinterpret_cast<PropertyRNA &>(rna_Bone_hide_);

static FloatPropertyRNA rna_Bone_matrix_;
PropertyRNA &rna_Bone_matrix = reinterpret_cast<PropertyRNA &>(rna_Bone_matrix_);

static FloatPropertyRNA rna_Bone_matrix_local_;
PropertyRNA &rna_Bone_matrix_local = reinterpret_cast<PropertyRNA &>(rna_Bone_matrix_local_);

static FloatPropertyRNA rna_Bone_tail_;
PropertyRNA &rna_Bone_tail = reinterpret_cast<PropertyRNA &>(rna_Bone_tail_);

static FloatPropertyRNA rna_Bone_tail_local_;
PropertyRNA &rna_Bone_tail_local = reinterpret_cast<PropertyRNA &>(rna_Bone_tail_local_);

static FloatPropertyRNA rna_Bone_head_;
PropertyRNA &rna_Bone_head = reinterpret_cast<PropertyRNA &>(rna_Bone_head_);

static FloatPropertyRNA rna_Bone_head_local_;
PropertyRNA &rna_Bone_head_local = reinterpret_cast<PropertyRNA &>(rna_Bone_head_local_);

static FloatPropertyRNA rna_Bone_length_;
PropertyRNA &rna_Bone_length = reinterpret_cast<PropertyRNA &>(rna_Bone_length_);

static BoolPropertyRNA rna_Bone_bl_system_properties_get_do_create_;
PropertyRNA &rna_Bone_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_Bone_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_Bone_bl_system_properties_get_system_properties_;
PropertyRNA &rna_Bone_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_Bone_bl_system_properties_get_system_properties_);

FunctionRNA *rna_Bone_bl_system_properties_get_func;
static FloatPropertyRNA rna_Bone_evaluate_envelope_point_;
PropertyRNA &rna_Bone_evaluate_envelope_point = reinterpret_cast<PropertyRNA &>(rna_Bone_evaluate_envelope_point_);

static FloatPropertyRNA rna_Bone_evaluate_envelope_factor_;
PropertyRNA &rna_Bone_evaluate_envelope_factor = reinterpret_cast<PropertyRNA &>(rna_Bone_evaluate_envelope_factor_);

FunctionRNA *rna_Bone_evaluate_envelope_func;
static FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_return_;
PropertyRNA &rna_Bone_convert_local_to_pose_matrix_return = reinterpret_cast<PropertyRNA &>(rna_Bone_convert_local_to_pose_matrix_return_);

static FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_;
PropertyRNA &rna_Bone_convert_local_to_pose_matrix = reinterpret_cast<PropertyRNA &>(rna_Bone_convert_local_to_pose_matrix_);

static FloatPropertyRNA rna_Bone_convert_local_to_pose_matrix_local_;
PropertyRNA &rna_Bone_convert_local_to_pose_matrix_local = reinterpret_cast<PropertyRNA &>(rna_Bone_convert_local_to_pose_matrix_local_);

static FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix_;
PropertyRNA &rna_Bone_convert_local_to_pose_parent_matrix = reinterpret_cast<PropertyRNA &>(rna_Bone_convert_local_to_pose_parent_matrix_);

static FloatPropertyRNA rna_Bone_convert_local_to_pose_parent_matrix_local_;
PropertyRNA &rna_Bone_convert_local_to_pose_parent_matrix_local = reinterpret_cast<PropertyRNA &>(rna_Bone_convert_local_to_pose_parent_matrix_local_);

static BoolPropertyRNA rna_Bone_convert_local_to_pose_invert_;
PropertyRNA &rna_Bone_convert_local_to_pose_invert = reinterpret_cast<PropertyRNA &>(rna_Bone_convert_local_to_pose_invert_);

FunctionRNA *rna_Bone_convert_local_to_pose_func;
static FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_axis_;
PropertyRNA &rna_Bone_MatrixFromAxisRoll_axis = reinterpret_cast<PropertyRNA &>(rna_Bone_MatrixFromAxisRoll_axis_);

static FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_roll_;
PropertyRNA &rna_Bone_MatrixFromAxisRoll_roll = reinterpret_cast<PropertyRNA &>(rna_Bone_MatrixFromAxisRoll_roll_);

static FloatPropertyRNA rna_Bone_MatrixFromAxisRoll_result_matrix_;
PropertyRNA &rna_Bone_MatrixFromAxisRoll_result_matrix = reinterpret_cast<PropertyRNA &>(rna_Bone_MatrixFromAxisRoll_result_matrix_);

FunctionRNA *rna_Bone_MatrixFromAxisRoll_func;
static FloatPropertyRNA rna_Bone_AxisRollFromMatrix_matrix_;
PropertyRNA &rna_Bone_AxisRollFromMatrix_matrix = reinterpret_cast<PropertyRNA &>(rna_Bone_AxisRollFromMatrix_matrix_);

static FloatPropertyRNA rna_Bone_AxisRollFromMatrix_axis_;
PropertyRNA &rna_Bone_AxisRollFromMatrix_axis = reinterpret_cast<PropertyRNA &>(rna_Bone_AxisRollFromMatrix_axis_);

static FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_axis_;
PropertyRNA &rna_Bone_AxisRollFromMatrix_result_axis = reinterpret_cast<PropertyRNA &>(rna_Bone_AxisRollFromMatrix_result_axis_);

static FloatPropertyRNA rna_Bone_AxisRollFromMatrix_result_roll_;
PropertyRNA &rna_Bone_AxisRollFromMatrix_result_roll = reinterpret_cast<PropertyRNA &>(rna_Bone_AxisRollFromMatrix_result_roll_);

FunctionRNA *rna_Bone_AxisRollFromMatrix_func;
StructRNA *RNA_Bone;
void register_struct_Bone(BlenderRNA &brna)
{
	rna_Bone_rna_properties_ = {
		{&rna_Bone_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_rna_properties_begin, Bone_rna_properties_next, Bone_rna_properties_end, Bone_rna_properties_get, nullptr, nullptr, Bone_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Bone_rna_type_ = {
		{&rna_Bone_parent, 	&rna_Bone_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Bone_parent_ = {
		{&rna_Bone_children, 	&rna_Bone_rna_type,
		-1, "parent", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"Parent bone (in same Armature)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_parent_get, nullptr, nullptr, nullptr,RNA_Bone
	};

	rna_Bone_children_ = {
		{&rna_Bone_collections, 	&rna_Bone_parent,
		-1, "children", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Children",
		"Bones which are children of this bone",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_children_begin, Bone_children_next, Bone_children_end, Bone_children_get, nullptr, Bone_children_lookup_int, Bone_children_lookup_string, nullptr, RNA_Bone
	};

	rna_Bone_collections_ = {
		{&rna_Bone_name, 	&rna_Bone_children,
		-1, "collections", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collections",
		"Bone Collections that contain this bone",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BoneCollectionMemberships},
		Bone_collections_begin, Bone_collections_next, Bone_collections_end, Bone_collections_get, nullptr, Bone_collections_lookup_int, nullptr, nullptr, RNA_BoneCollection
	};

	rna_Bone_name_ = {
		{&rna_Bone_color, 	&rna_Bone_collections,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		rna_Bone_update_renamed, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_name_get, Bone_name_length, Bone_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Bone_color_ = {
		{&rna_Bone_display_type, 	&rna_Bone_name,
		-1, "color", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "color",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_color_get, nullptr, nullptr, nullptr,RNA_BoneColor
	};

	static const EnumPropertyItem rna_Bone_display_type_items[7] = {
		{-1, "ARMATURE_DEFINED", 0, "Armature Defined", "Use display mode from armature (default)"	},
		{0, "OCTAHEDRAL", 0, "Octahedral", "Display bones as octahedral shape"	},
		{1, "STICK", 0, "Stick", "Display bones as simple 2D lines with dots"	},
		{2, "BBONE", 0, "B-Bone", "Display bones as boxes, showing subdivision and B-Splines"	},
		{3, "ENVELOPE", 0, "Envelope", "Display bones as extruded spheres, showing deformation influence volume"	},
		{4, "WIRE", 0, "Wire", "Display bones as thin wires, showing subdivision and B-Splines"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Bone_display_type_ = {
		{&rna_Bone_use_connect, 	&rna_Bone_color,
		-1, "display_type", 65539, 1, 0, 4, 0, PropertyPathTemplateType(0), "Display Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, drawtype), RawPropertyType(10), nullptr},
		Bone_display_type_get, Bone_display_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Bone_display_type_items, 6, 0
	};

	rna_Bone_use_connect_ = {
		{&rna_Bone_use_inherit_rotation, 	&rna_Bone_display_type,
		-1, "use_connect", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Connected",
		"When bone has a parent, bone\'s head is stuck to the parent\'s tail",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_connect_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Bone_use_inherit_rotation_ = {
		{&rna_Bone_use_envelope_multiply, 	&rna_Bone_use_connect,
		-1, "use_inherit_rotation", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Inherit Rotation",
		"Bone inherits rotation or scale from parent bone",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_inherit_rotation_get, Bone_use_inherit_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Bone_use_envelope_multiply_ = {
		{&rna_Bone_use_deform, 	&rna_Bone_use_inherit_rotation,
		-1, "use_envelope_multiply", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Vertex Group with Envelope",
		"When deforming bone, multiply effects of Vertex Group weights with Envelope influence",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_envelope_multiply_get, Bone_use_envelope_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Bone_use_deform_ = {
		{&rna_Bone_inherit_scale, 	&rna_Bone_use_envelope_multiply,
		-1, "use_deform", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Deform",
		"Enable Bone to deform geometry",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_deform_get, Bone_use_deform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static const EnumPropertyItem rna_Bone_inherit_scale_items[7] = {
		{0, "FULL", 0, "Full", "Inherit all effects of parent scaling"	},
		{1, "FIX_SHEAR", 0, "Fix Shear", "Inherit scaling, but remove shearing of the child in the rest orientation"	},
		{5, "ALIGNED", 0, "Aligned", "Rotate non-uniform parent scaling to align with the child, applying parent X scale to child X axis, and so forth"	},
		{2, "AVERAGE", 0, "Average", "Inherit uniform scaling representing the overall change in the volume of the parent"	},
		{3, "NONE", 0, "None", "Completely ignore parent scaling"	},
		{4, "NONE_LEGACY", 0, "None (Legacy)", "Ignore parent scaling without compensating for parent shear. Replicates the effect of disabling the original Inherit Scale checkbox."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Bone_inherit_scale_ = {
		{&rna_Bone_use_local_location, 	&rna_Bone_use_deform,
		-1, "inherit_scale", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Inherit Scale",
		"Specifies how the bone inherits scaling from the parent bone",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, inherit_scale_mode), RawPropertyType(2), nullptr},
		Bone_inherit_scale_get, Bone_inherit_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Bone_inherit_scale_items, 6, 0
	};

	rna_Bone_use_local_location_ = {
		{&rna_Bone_use_relative_parent, 	&rna_Bone_inherit_scale,
		-1, "use_local_location", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Local Location",
		"Bone location is set in local space",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_local_location_get, Bone_use_local_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Bone_use_relative_parent_ = {
		{&rna_Bone_show_wire, 	&rna_Bone_use_local_location,
		-1, "use_relative_parent", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Relative Parenting",
		"Object children will use relative transform, like deform",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_relative_parent_get, Bone_use_relative_parent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Bone_show_wire_ = {
		{&rna_Bone_use_cyclic_offset, 	&rna_Bone_use_relative_parent,
		-1, "show_wire", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Wire",
		"Bone is always displayed in wireframe regardless of viewport shading mode (useful for non-obstructive custom bone shapes)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_show_wire_get, Bone_show_wire_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Bone_use_cyclic_offset_ = {
		{&rna_Bone_hide_select, 	&rna_Bone_show_wire,
		-1, "use_cyclic_offset", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Cyclic Offset",
		"When bone does not have a parent, it receives cyclic offset effects (Deprecated)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_cyclic_offset_get, Bone_use_cyclic_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Bone_hide_select_ = {
		{&rna_Bone_envelope_distance, 	&rna_Bone_use_cyclic_offset,
		-1, "hide_select", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Selectable",
		"Bone is able to be selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Bone_hide_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_hide_select_get, Bone_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Bone_envelope_distance_ = {
		{&rna_Bone_envelope_weight, 	&rna_Bone_hide_select,
		-1, "envelope_distance", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Envelope Deform Distance",
		"Bone deformation distance (for Envelope deform only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, dist), RawPropertyType(5), nullptr},
		Bone_envelope_distance_get, Bone_envelope_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_envelope_weight_ = {
		{&rna_Bone_head_radius, 	&rna_Bone_envelope_distance,
		-1, "envelope_weight", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Envelope Deform Weight",
		"Bone deformation weight (for Envelope deform only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, weight), RawPropertyType(5), nullptr},
		Bone_envelope_weight_get, Bone_envelope_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_head_radius_ = {
		{&rna_Bone_tail_radius, 	&rna_Bone_envelope_weight,
		-1, "head_radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Envelope Head Radius",
		"Radius of head of bone (for Envelope deform only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, rad_head), RawPropertyType(5), nullptr},
		Bone_head_radius_get, Bone_head_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_tail_radius_ = {
		{&rna_Bone_bbone_segments, 	&rna_Bone_head_radius,
		-1, "tail_radius", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Envelope Tail Radius",
		"Radius of tail of bone (for Envelope deform only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, rad_tail), RawPropertyType(5), nullptr},
		Bone_tail_radius_get, Bone_tail_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_bbone_segments_ = {
		{&rna_Bone_bbone_mapping_mode, 	&rna_Bone_tail_radius,
		-1, "bbone_segments", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "B-Bone Segments",
		"Number of subdivisions of bone (for B-Bones only)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, segments), RawPropertyType(1), nullptr},
		Bone_bbone_segments_get, Bone_bbone_segments_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 32, 1, 32, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Bone_bbone_mapping_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "Fast mapping that is good for most situations, but ignores the rest pose curvature of the B-Bone"	},
		{1, "CURVED", 0, "Curved", "Slower mapping that gives better deformation for B-Bones that are sharply curved in rest pose"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Bone_bbone_mapping_mode_ = {
		{&rna_Bone_bbone_x, 	&rna_Bone_bbone_segments,
		-1, "bbone_mapping_mode", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "B-Bone Vertex Mapping Mode",
		"Selects how the vertices are mapped to B-Bone segments based on their position",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, bbone_mapping_mode), RawPropertyType(2), nullptr},
		Bone_bbone_mapping_mode_get, Bone_bbone_mapping_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Bone_bbone_mapping_mode_items, 2, 0
	};

	rna_Bone_bbone_x_ = {
		{&rna_Bone_bbone_z, 	&rna_Bone_bbone_mapping_mode,
		-1, "bbone_x", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "B-Bone Display X Width",
		"B-Bone X size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, xwidth), RawPropertyType(5), nullptr},
		Bone_bbone_x_get, Bone_bbone_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_bbone_z_ = {
		{&rna_Bone_bbone_handle_type_start, 	&rna_Bone_bbone_x,
		-1, "bbone_z", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "B-Bone Display Z Width",
		"B-Bone Z size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, zwidth), RawPropertyType(5), nullptr},
		Bone_bbone_z_get, Bone_bbone_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_Bone_bbone_handle_type_start_items[5] = {
		{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"	},
		{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"	},
		{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"	},
		{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Bone_bbone_handle_type_start_ = {
		{&rna_Bone_bbone_custom_handle_start, 	&rna_Bone_bbone_z,
		-1, "bbone_handle_type_start", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "B-Bone Start Handle Type",
		"Selects how the start handle of the B-Bone is computed",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, bbone_prev_type), RawPropertyType(2), nullptr},
		Bone_bbone_handle_type_start_get, Bone_bbone_handle_type_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Bone_bbone_handle_type_start_items, 4, 0
	};

	rna_Bone_bbone_custom_handle_start_ = {
		{&rna_Bone_bbone_handle_use_scale_start, 	&rna_Bone_bbone_handle_type_start,
		-1, "bbone_custom_handle_start", 8388737, 3, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone Start Handle",
		"Bone that serves as the start handle for the B-Bone curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Bone_bbone_handle_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_bbone_custom_handle_start_get, Bone_bbone_custom_handle_start_set, nullptr, nullptr,RNA_Bone
	};

	static bool rna_Bone_bbone_handle_use_scale_start_default[3] = {
		0,
		0,
		0
	};
	rna_Bone_bbone_handle_use_scale_start_ = {
		{&rna_Bone_bbone_handle_use_ease_start, 	&rna_Bone_bbone_custom_handle_start,
		-1, "bbone_handle_use_scale_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Start Handle Scale",
		"Multiply B-Bone Scale In channels by the local scale values of the start handle. This is done after the Scale Easing option and isn\'t affected by it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Bone_bbone_handle_use_scale_start_get, Bone_bbone_handle_use_scale_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_Bone_bbone_handle_use_scale_start_default
	};

	rna_Bone_bbone_handle_use_ease_start_ = {
		{&rna_Bone_bbone_handle_type_end, 	&rna_Bone_bbone_handle_use_scale_start,
		-1, "bbone_handle_use_ease_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Start Handle Ease",
		"Multiply the B-Bone Ease In channel by the local Y scale value of the start handle. This is done after the Scale Easing option and isn\'t affected by it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_bbone_handle_use_ease_start_get, Bone_bbone_handle_use_ease_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Bone_bbone_handle_type_end_items[5] = {
		{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"	},
		{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"	},
		{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"	},
		{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Bone_bbone_handle_type_end_ = {
		{&rna_Bone_bbone_custom_handle_end, 	&rna_Bone_bbone_handle_use_ease_start,
		-1, "bbone_handle_type_end", 1, 1, 0, 4, 0, PropertyPathTemplateType(0), "B-Bone End Handle Type",
		"Selects how the end handle of the B-Bone is computed",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, bbone_next_type), RawPropertyType(2), nullptr},
		Bone_bbone_handle_type_end_get, Bone_bbone_handle_type_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Bone_bbone_handle_type_end_items, 4, 0
	};

	rna_Bone_bbone_custom_handle_end_ = {
		{&rna_Bone_bbone_handle_use_scale_end, 	&rna_Bone_bbone_handle_type_end,
		-1, "bbone_custom_handle_end", 8388737, 3, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone End Handle",
		"Bone that serves as the end handle for the B-Bone curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Bone_bbone_handle_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_bbone_custom_handle_end_get, Bone_bbone_custom_handle_end_set, nullptr, nullptr,RNA_Bone
	};

	static bool rna_Bone_bbone_handle_use_scale_end_default[3] = {
		0,
		0,
		0
	};
	rna_Bone_bbone_handle_use_scale_end_ = {
		{&rna_Bone_bbone_handle_use_ease_end, 	&rna_Bone_bbone_custom_handle_end,
		-1, "bbone_handle_use_scale_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "End Handle Scale",
		"Multiply B-Bone Scale Out channels by the local scale values of the end handle. This is done after the Scale Easing option and isn\'t affected by it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Bone_bbone_handle_use_scale_end_get, Bone_bbone_handle_use_scale_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_Bone_bbone_handle_use_scale_end_default
	};

	rna_Bone_bbone_handle_use_ease_end_ = {
		{&rna_Bone_bbone_rollin, 	&rna_Bone_bbone_handle_use_scale_end,
		-1, "bbone_handle_use_ease_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "End Handle Ease",
		"Multiply the B-Bone Ease Out channel by the local Y scale value of the end handle. This is done after the Scale Easing option and isn\'t affected by it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_bbone_handle_use_ease_end_get, Bone_bbone_handle_use_ease_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Bone_bbone_rollin_ = {
		{&rna_Bone_bbone_rollout, 	&rna_Bone_bbone_handle_use_ease_end,
		-1, "bbone_rollin", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Roll In",
		"Roll offset for the start of the B-Bone, adjusts twist",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, roll1), RawPropertyType(5), nullptr},
		Bone_bbone_rollin_get, Bone_bbone_rollin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_bbone_rollout_ = {
		{&rna_Bone_use_endroll_as_inroll, 	&rna_Bone_bbone_rollin,
		-1, "bbone_rollout", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Roll Out",
		"Roll offset for the end of the B-Bone, adjusts twist",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, roll2), RawPropertyType(5), nullptr},
		Bone_bbone_rollout_get, Bone_bbone_rollout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_use_endroll_as_inroll_ = {
		{&rna_Bone_bbone_curveinx, 	&rna_Bone_bbone_rollout,
		-1, "use_endroll_as_inroll", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inherit End Roll",
		"Add Roll Out of the Start Handle bone to the Roll In value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_endroll_as_inroll_get, Bone_use_endroll_as_inroll_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Bone_bbone_curveinx_ = {
		{&rna_Bone_bbone_curveinz, 	&rna_Bone_use_endroll_as_inroll,
		-1, "bbone_curveinx", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "In X",
		"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, curve_in_x), RawPropertyType(5), nullptr},
		Bone_bbone_curveinx_get, Bone_bbone_curveinx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_bbone_curveinz_ = {
		{&rna_Bone_bbone_curveoutx, 	&rna_Bone_bbone_curveinx,
		-1, "bbone_curveinz", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "In Z",
		"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, curve_in_z), RawPropertyType(5), nullptr},
		Bone_bbone_curveinz_get, Bone_bbone_curveinz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_bbone_curveoutx_ = {
		{&rna_Bone_bbone_curveoutz, 	&rna_Bone_bbone_curveinz,
		-1, "bbone_curveoutx", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Out X",
		"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, curve_out_x), RawPropertyType(5), nullptr},
		Bone_bbone_curveoutx_get, Bone_bbone_curveoutx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_bbone_curveoutz_ = {
		{&rna_Bone_bbone_easein, 	&rna_Bone_bbone_curveoutx,
		-1, "bbone_curveoutz", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Out Z",
		"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, curve_out_z), RawPropertyType(5), nullptr},
		Bone_bbone_curveoutz_get, Bone_bbone_curveoutz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Bone_bbone_easein_ = {
		{&rna_Bone_bbone_easeout, 	&rna_Bone_bbone_curveoutz,
		-1, "bbone_easein", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ease In",
		"Length of first Bézier Handle (for B-Bones only)",
		0, "Armature",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, ease1), RawPropertyType(5), nullptr},
		Bone_bbone_easein_get, Bone_bbone_easein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Bone_bbone_easeout_ = {
		{&rna_Bone_use_scale_easing, 	&rna_Bone_bbone_easein,
		-1, "bbone_easeout", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Ease Out",
		"Length of second Bézier Handle (for B-Bones only)",
		0, "Armature",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, ease2), RawPropertyType(5), nullptr},
		Bone_bbone_easeout_get, Bone_bbone_easeout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_Bone_use_scale_easing_ = {
		{&rna_Bone_bbone_scalein, 	&rna_Bone_bbone_easeout,
		-1, "use_scale_easing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale Easing",
		"Multiply the final easing values by the Scale In/Out Y factors",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_use_scale_easing_get, Bone_use_scale_easing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_Bone_bbone_scalein_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Bone_bbone_scalein_ = {
		{&rna_Bone_bbone_scaleout, 	&rna_Bone_use_scale_easing,
		-1, "bbone_scalein", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale In",
		"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, scale_in), RawPropertyType(5), nullptr},
		nullptr, nullptr, Bone_bbone_scalein_get, Bone_bbone_scalein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, rna_Bone_bbone_scalein_default
	};

	static float rna_Bone_bbone_scaleout_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Bone_bbone_scaleout_ = {
		{&rna_Bone_hide, 	&rna_Bone_bbone_scalein,
		-1, "bbone_scaleout", 67108867, 0, 0, 4, 0, PropertyPathTemplateType(0), "Scale Out",
		"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, scale_out), RawPropertyType(5), nullptr},
		nullptr, nullptr, Bone_bbone_scaleout_get, Bone_bbone_scaleout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, rna_Bone_bbone_scaleout_default
	};

	rna_Bone_hide_ = {
		{&rna_Bone_matrix, 	&rna_Bone_bbone_scaleout,
		-1, "hide", 4355, 1, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Bone is not visible when it is in Edit Mode",
		32, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Bone_hide_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Bone_hide_get, Bone_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_Bone_matrix_default[9] = {
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
	rna_Bone_matrix_ = {
		{&rna_Bone_matrix_local, 	&rna_Bone_hide,
		-1, "matrix", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Bone Matrix",
		"3×3 bone matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {3, 3, 0}, 9,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, bone_mat), RawPropertyType(5), nullptr},
		nullptr, nullptr, Bone_matrix_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_matrix_default
	};

	static float rna_Bone_matrix_local_default[16] = {
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
	rna_Bone_matrix_local_ = {
		{&rna_Bone_tail, 	&rna_Bone_matrix,
		-1, "matrix_local", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Bone Armature-Relative Matrix",
		"4×4 bone matrix relative to armature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, arm_mat), RawPropertyType(5), nullptr},
		nullptr, nullptr, Bone_matrix_local_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_matrix_local_default
	};

	static float rna_Bone_tail_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Bone_tail_ = {
		{&rna_Bone_tail_local, 	&rna_Bone_matrix_local,
		-1, "tail", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Tail",
		"Location of tail end of the bone relative to its parent",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, tail), RawPropertyType(5), nullptr},
		nullptr, nullptr, Bone_tail_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_Bone_tail_default
	};

	static float rna_Bone_tail_local_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Bone_tail_local_ = {
		{&rna_Bone_head, 	&rna_Bone_tail,
		-1, "tail_local", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Armature-Relative Tail",
		"Location of tail end of the bone relative to armature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, arm_tail), RawPropertyType(5), nullptr},
		nullptr, nullptr, Bone_tail_local_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_Bone_tail_local_default
	};

	static float rna_Bone_head_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Bone_head_ = {
		{&rna_Bone_head_local, 	&rna_Bone_tail_local,
		-1, "head", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Head",
		"Location of head end of the bone relative to its parent",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, head), RawPropertyType(5), nullptr},
		nullptr, nullptr, Bone_head_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_Bone_head_default
	};

	static float rna_Bone_head_local_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Bone_head_local_ = {
		{&rna_Bone_length, 	&rna_Bone_head,
		-1, "head_local", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Armature-Relative Head",
		"Location of head end of the bone relative to armature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, arm_head), RawPropertyType(5), nullptr},
		nullptr, nullptr, Bone_head_local_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, rna_Bone_head_local_default
	};

	rna_Bone_length_ = {
		{nullptr, 	&rna_Bone_head_local,
		-1, "length", 2, 1, 0, 4, 0, PropertyPathTemplateType(0), "Length",
		"Length of the bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Bone, length), RawPropertyType(5), nullptr},
		Bone_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_Bone;
	srna->cont.properties = {&rna_Bone_rna_properties, &rna_Bone_length};
	srna->identifier = "Bone";
	srna->flag = 516;
	srna->name = "Bone";
	srna->description = "Bone in an Armature data-block";
	srna->translation_context = "*";
	srna->icon = 180;
	srna->nameproperty = &rna_Bone_name;
	srna->iteratorproperty = &rna_Bone_rna_properties;
	srna->path = rna_Bone_path;
	srna->idproperties = rna_Bone_idprops;
	srna->system_idproperties = rna_Bone_system_idprops;
	{
	rna_Bone_bl_system_properties_get_do_create_ = {
		{&rna_Bone_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Bone_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_Bone_bl_system_properties_get_do_create,
		-1, "system_properties", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The system properties root container, or None if there are no system properties stored in this data yet, and its creation was not requested",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Bone_bl_system_properties_get_do_create, &rna_Bone_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = Bone_bl_system_properties_get_call;
		func->c_ret = &rna_Bone_bl_system_properties_get_system_properties;
		rna_Bone_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Bone_evaluate_envelope_point_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Bone_evaluate_envelope_point_ = {
		{&rna_Bone_evaluate_envelope_factor, 	nullptr,
		-1, "point", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Point",
		"Position in 3d space to evaluate",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_evaluate_envelope_point_default
	};
	rna_Bone_evaluate_envelope_factor_ = {
		{nullptr, 	&rna_Bone_evaluate_envelope_point,
		-1, "factor", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Factor",
		"Envelope factor",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Bone_evaluate_envelope_point, &rna_Bone_evaluate_envelope_factor};
		func->identifier = "evaluate_envelope";
		func->description = "Calculate bone envelope at given point";
		func->call = Bone_evaluate_envelope_call;
		func->c_ret = &rna_Bone_evaluate_envelope_factor;
		rna_Bone_evaluate_envelope_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Bone_convert_local_to_pose_matrix_return_default[16] = {
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
	rna_Bone_convert_local_to_pose_matrix_return_ = {
		{&rna_Bone_convert_local_to_pose_matrix, 	nullptr,
		-1, "matrix_return", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The transformed matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_convert_local_to_pose_matrix_return_default
	};
	static float rna_Bone_convert_local_to_pose_matrix_default[16] = {
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
	rna_Bone_convert_local_to_pose_matrix_ = {
		{&rna_Bone_convert_local_to_pose_matrix_local, 	&rna_Bone_convert_local_to_pose_matrix_return,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The matrix to transform",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_convert_local_to_pose_matrix_default
	};
	static float rna_Bone_convert_local_to_pose_matrix_local_default[16] = {
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
	rna_Bone_convert_local_to_pose_matrix_local_ = {
		{&rna_Bone_convert_local_to_pose_parent_matrix, 	&rna_Bone_convert_local_to_pose_matrix,
		-1, "matrix_local", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The custom rest matrix of this bone (Bone.matrix_local)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_convert_local_to_pose_matrix_local_default
	};
	static float rna_Bone_convert_local_to_pose_parent_matrix_default[16] = {
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
	rna_Bone_convert_local_to_pose_parent_matrix_ = {
		{&rna_Bone_convert_local_to_pose_parent_matrix_local, 	&rna_Bone_convert_local_to_pose_matrix_local,
		-1, "parent_matrix", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The custom pose matrix of the parent bone (PoseBone.matrix)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_convert_local_to_pose_parent_matrix_default
	};
	static float rna_Bone_convert_local_to_pose_parent_matrix_local_default[16] = {
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
	rna_Bone_convert_local_to_pose_parent_matrix_local_ = {
		{&rna_Bone_convert_local_to_pose_invert, 	&rna_Bone_convert_local_to_pose_parent_matrix,
		-1, "parent_matrix_local", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The custom rest matrix of the parent bone (Bone.matrix_local)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_convert_local_to_pose_parent_matrix_local_default
	};
	rna_Bone_convert_local_to_pose_invert_ = {
		{nullptr, 	&rna_Bone_convert_local_to_pose_parent_matrix_local,
		-1, "invert", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Convert from Pose to Local space",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Bone_convert_local_to_pose_matrix_return, &rna_Bone_convert_local_to_pose_invert};
		func->identifier = "convert_local_to_pose";
		func->description = "Transform a matrix from Local to Pose space (or back), taking into account options like Inherit Scale and Local Location. Unlike Object.convert_space, this uses custom rest and pose matrices provided by the caller. If the parent matrices are omitted, the bone is assumed to have no parent.";
		func->call = Bone_convert_local_to_pose_call;
		rna_Bone_convert_local_to_pose_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Bone_MatrixFromAxisRoll_axis_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Bone_MatrixFromAxisRoll_axis_ = {
		{&rna_Bone_MatrixFromAxisRoll_roll, 	nullptr,
		-1, "axis", 262147, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The main axis of the bone (tail - head)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_MatrixFromAxisRoll_axis_default
	};
	rna_Bone_MatrixFromAxisRoll_roll_ = {
		{&rna_Bone_MatrixFromAxisRoll_result_matrix, 	&rna_Bone_MatrixFromAxisRoll_axis,
		-1, "roll", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The roll of the bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	static float rna_Bone_MatrixFromAxisRoll_result_matrix_default[9] = {
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
	rna_Bone_MatrixFromAxisRoll_result_matrix_ = {
		{nullptr, 	&rna_Bone_MatrixFromAxisRoll_roll,
		-1, "result_matrix", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The resulting orientation matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {3, 3, 0}, 9,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_MatrixFromAxisRoll_result_matrix_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Bone_MatrixFromAxisRoll_axis, &rna_Bone_MatrixFromAxisRoll_result_matrix};
		func->identifier = "MatrixFromAxisRoll";
		func->flag = 1;
		func->description = "Convert the axis + roll representation to a matrix";
		func->call = Bone_MatrixFromAxisRoll_call;
		rna_Bone_MatrixFromAxisRoll_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Bone_AxisRollFromMatrix_matrix_default[9] = {
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
	rna_Bone_AxisRollFromMatrix_matrix_ = {
		{&rna_Bone_AxisRollFromMatrix_axis, 	nullptr,
		-1, "matrix", 262147, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The orientation matrix of the bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {3, 3, 0}, 9,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_AxisRollFromMatrix_matrix_default
	};
	static float rna_Bone_AxisRollFromMatrix_axis_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Bone_AxisRollFromMatrix_axis_ = {
		{&rna_Bone_AxisRollFromMatrix_result_axis, 	&rna_Bone_AxisRollFromMatrix_matrix,
		-1, "axis", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"The optional override for the axis (finds closest approximation for the matrix)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_AxisRollFromMatrix_axis_default
	};
	static float rna_Bone_AxisRollFromMatrix_result_axis_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Bone_AxisRollFromMatrix_result_axis_ = {
		{&rna_Bone_AxisRollFromMatrix_result_roll, 	&rna_Bone_AxisRollFromMatrix_axis,
		-1, "result_axis", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The main axis of the bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Bone_AxisRollFromMatrix_result_axis_default
	};
	rna_Bone_AxisRollFromMatrix_result_roll_ = {
		{nullptr, 	&rna_Bone_AxisRollFromMatrix_result_axis,
		-1, "result_roll", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The roll of the bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Bone_AxisRollFromMatrix_matrix, &rna_Bone_AxisRollFromMatrix_result_roll};
		func->identifier = "AxisRollFromMatrix";
		func->flag = 1;
		func->description = "Convert a rotational matrix to the axis + roll representation. Note that the resulting value of the roll may not be as expected if the matrix has shear or negative determinant.";
		func->call = Bone_AxisRollFromMatrix_call;
		rna_Bone_AxisRollFromMatrix_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Bone Collection Memberships */
static CollectionPropertyRNA rna_BoneCollectionMemberships_rna_properties_;
PropertyRNA &rna_BoneCollectionMemberships_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BoneCollectionMemberships_rna_properties_);

static PointerPropertyRNA rna_BoneCollectionMemberships_rna_type_;
PropertyRNA &rna_BoneCollectionMemberships_rna_type = reinterpret_cast<PropertyRNA &>(rna_BoneCollectionMemberships_rna_type_);

FunctionRNA *rna_BoneCollectionMemberships_clear_func;
StructRNA *RNA_BoneCollectionMemberships;
void register_struct_BoneCollectionMemberships(BlenderRNA &brna)
{
	rna_BoneCollectionMemberships_rna_properties_ = {
		{&rna_BoneCollectionMemberships_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollectionMemberships_rna_properties_begin, BoneCollectionMemberships_rna_properties_next, BoneCollectionMemberships_rna_properties_end, BoneCollectionMemberships_rna_properties_get, nullptr, nullptr, BoneCollectionMemberships_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BoneCollectionMemberships_rna_type_ = {
		{nullptr, 	&rna_BoneCollectionMemberships_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoneCollectionMemberships_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BoneCollectionMemberships;
	srna->cont.properties = {&rna_BoneCollectionMemberships_rna_properties, &rna_BoneCollectionMemberships_rna_type};
	srna->identifier = "BoneCollectionMemberships";
	srna->flag = 516;
	srna->name = "Bone Collection Memberships";
	srna->description = "The Bone Collections that contain this Bone";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BoneCollectionMemberships_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->description = "Remove this bone from all bone collections";
		func->call = BoneCollectionMemberships_clear_call;
		rna_BoneCollectionMemberships_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Edit Bone */
static CollectionPropertyRNA rna_EditBone_rna_properties_;
PropertyRNA &rna_EditBone_rna_properties = reinterpret_cast<PropertyRNA &>(rna_EditBone_rna_properties_);

static PointerPropertyRNA rna_EditBone_rna_type_;
PropertyRNA &rna_EditBone_rna_type = reinterpret_cast<PropertyRNA &>(rna_EditBone_rna_type_);

static CollectionPropertyRNA rna_EditBone_collections_;
PropertyRNA &rna_EditBone_collections = reinterpret_cast<PropertyRNA &>(rna_EditBone_collections_);

static PointerPropertyRNA rna_EditBone_parent_;
PropertyRNA &rna_EditBone_parent = reinterpret_cast<PropertyRNA &>(rna_EditBone_parent_);

static FloatPropertyRNA rna_EditBone_roll_;
PropertyRNA &rna_EditBone_roll = reinterpret_cast<PropertyRNA &>(rna_EditBone_roll_);

static FloatPropertyRNA rna_EditBone_head_;
PropertyRNA &rna_EditBone_head = reinterpret_cast<PropertyRNA &>(rna_EditBone_head_);

static FloatPropertyRNA rna_EditBone_tail_;
PropertyRNA &rna_EditBone_tail = reinterpret_cast<PropertyRNA &>(rna_EditBone_tail_);

static FloatPropertyRNA rna_EditBone_length_;
PropertyRNA &rna_EditBone_length = reinterpret_cast<PropertyRNA &>(rna_EditBone_length_);

static StringPropertyRNA rna_EditBone_name_;
PropertyRNA &rna_EditBone_name = reinterpret_cast<PropertyRNA &>(rna_EditBone_name_);

static PointerPropertyRNA rna_EditBone_color_;
PropertyRNA &rna_EditBone_color = reinterpret_cast<PropertyRNA &>(rna_EditBone_color_);

static EnumPropertyRNA rna_EditBone_display_type_;
PropertyRNA &rna_EditBone_display_type = reinterpret_cast<PropertyRNA &>(rna_EditBone_display_type_);

static BoolPropertyRNA rna_EditBone_use_connect_;
PropertyRNA &rna_EditBone_use_connect = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_connect_);

static BoolPropertyRNA rna_EditBone_use_inherit_rotation_;
PropertyRNA &rna_EditBone_use_inherit_rotation = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_inherit_rotation_);

static BoolPropertyRNA rna_EditBone_use_envelope_multiply_;
PropertyRNA &rna_EditBone_use_envelope_multiply = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_envelope_multiply_);

static BoolPropertyRNA rna_EditBone_use_deform_;
PropertyRNA &rna_EditBone_use_deform = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_deform_);

static EnumPropertyRNA rna_EditBone_inherit_scale_;
PropertyRNA &rna_EditBone_inherit_scale = reinterpret_cast<PropertyRNA &>(rna_EditBone_inherit_scale_);

static BoolPropertyRNA rna_EditBone_use_local_location_;
PropertyRNA &rna_EditBone_use_local_location = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_local_location_);

static BoolPropertyRNA rna_EditBone_use_relative_parent_;
PropertyRNA &rna_EditBone_use_relative_parent = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_relative_parent_);

static BoolPropertyRNA rna_EditBone_show_wire_;
PropertyRNA &rna_EditBone_show_wire = reinterpret_cast<PropertyRNA &>(rna_EditBone_show_wire_);

static BoolPropertyRNA rna_EditBone_use_cyclic_offset_;
PropertyRNA &rna_EditBone_use_cyclic_offset = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_cyclic_offset_);

static BoolPropertyRNA rna_EditBone_hide_select_;
PropertyRNA &rna_EditBone_hide_select = reinterpret_cast<PropertyRNA &>(rna_EditBone_hide_select_);

static FloatPropertyRNA rna_EditBone_envelope_distance_;
PropertyRNA &rna_EditBone_envelope_distance = reinterpret_cast<PropertyRNA &>(rna_EditBone_envelope_distance_);

static FloatPropertyRNA rna_EditBone_envelope_weight_;
PropertyRNA &rna_EditBone_envelope_weight = reinterpret_cast<PropertyRNA &>(rna_EditBone_envelope_weight_);

static FloatPropertyRNA rna_EditBone_head_radius_;
PropertyRNA &rna_EditBone_head_radius = reinterpret_cast<PropertyRNA &>(rna_EditBone_head_radius_);

static FloatPropertyRNA rna_EditBone_tail_radius_;
PropertyRNA &rna_EditBone_tail_radius = reinterpret_cast<PropertyRNA &>(rna_EditBone_tail_radius_);

static IntPropertyRNA rna_EditBone_bbone_segments_;
PropertyRNA &rna_EditBone_bbone_segments = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_segments_);

static EnumPropertyRNA rna_EditBone_bbone_mapping_mode_;
PropertyRNA &rna_EditBone_bbone_mapping_mode = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_mapping_mode_);

static FloatPropertyRNA rna_EditBone_bbone_x_;
PropertyRNA &rna_EditBone_bbone_x = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_x_);

static FloatPropertyRNA rna_EditBone_bbone_z_;
PropertyRNA &rna_EditBone_bbone_z = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_z_);

static EnumPropertyRNA rna_EditBone_bbone_handle_type_start_;
PropertyRNA &rna_EditBone_bbone_handle_type_start = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_handle_type_start_);

static PointerPropertyRNA rna_EditBone_bbone_custom_handle_start_;
PropertyRNA &rna_EditBone_bbone_custom_handle_start = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_custom_handle_start_);

static BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_start_;
PropertyRNA &rna_EditBone_bbone_handle_use_scale_start = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_handle_use_scale_start_);

static BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_start_;
PropertyRNA &rna_EditBone_bbone_handle_use_ease_start = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_handle_use_ease_start_);

static EnumPropertyRNA rna_EditBone_bbone_handle_type_end_;
PropertyRNA &rna_EditBone_bbone_handle_type_end = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_handle_type_end_);

static PointerPropertyRNA rna_EditBone_bbone_custom_handle_end_;
PropertyRNA &rna_EditBone_bbone_custom_handle_end = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_custom_handle_end_);

static BoolPropertyRNA rna_EditBone_bbone_handle_use_scale_end_;
PropertyRNA &rna_EditBone_bbone_handle_use_scale_end = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_handle_use_scale_end_);

static BoolPropertyRNA rna_EditBone_bbone_handle_use_ease_end_;
PropertyRNA &rna_EditBone_bbone_handle_use_ease_end = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_handle_use_ease_end_);

static FloatPropertyRNA rna_EditBone_bbone_rollin_;
PropertyRNA &rna_EditBone_bbone_rollin = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_rollin_);

static FloatPropertyRNA rna_EditBone_bbone_rollout_;
PropertyRNA &rna_EditBone_bbone_rollout = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_rollout_);

static BoolPropertyRNA rna_EditBone_use_endroll_as_inroll_;
PropertyRNA &rna_EditBone_use_endroll_as_inroll = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_endroll_as_inroll_);

static FloatPropertyRNA rna_EditBone_bbone_curveinx_;
PropertyRNA &rna_EditBone_bbone_curveinx = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_curveinx_);

static FloatPropertyRNA rna_EditBone_bbone_curveinz_;
PropertyRNA &rna_EditBone_bbone_curveinz = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_curveinz_);

static FloatPropertyRNA rna_EditBone_bbone_curveoutx_;
PropertyRNA &rna_EditBone_bbone_curveoutx = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_curveoutx_);

static FloatPropertyRNA rna_EditBone_bbone_curveoutz_;
PropertyRNA &rna_EditBone_bbone_curveoutz = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_curveoutz_);

static FloatPropertyRNA rna_EditBone_bbone_easein_;
PropertyRNA &rna_EditBone_bbone_easein = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_easein_);

static FloatPropertyRNA rna_EditBone_bbone_easeout_;
PropertyRNA &rna_EditBone_bbone_easeout = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_easeout_);

static BoolPropertyRNA rna_EditBone_use_scale_easing_;
PropertyRNA &rna_EditBone_use_scale_easing = reinterpret_cast<PropertyRNA &>(rna_EditBone_use_scale_easing_);

static FloatPropertyRNA rna_EditBone_bbone_scalein_;
PropertyRNA &rna_EditBone_bbone_scalein = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_scalein_);

static FloatPropertyRNA rna_EditBone_bbone_scaleout_;
PropertyRNA &rna_EditBone_bbone_scaleout = reinterpret_cast<PropertyRNA &>(rna_EditBone_bbone_scaleout_);

static BoolPropertyRNA rna_EditBone_hide_;
PropertyRNA &rna_EditBone_hide = reinterpret_cast<PropertyRNA &>(rna_EditBone_hide_);

static BoolPropertyRNA rna_EditBone_lock_;
PropertyRNA &rna_EditBone_lock = reinterpret_cast<PropertyRNA &>(rna_EditBone_lock_);

static BoolPropertyRNA rna_EditBone_select_;
PropertyRNA &rna_EditBone_select = reinterpret_cast<PropertyRNA &>(rna_EditBone_select_);

static BoolPropertyRNA rna_EditBone_select_head_;
PropertyRNA &rna_EditBone_select_head = reinterpret_cast<PropertyRNA &>(rna_EditBone_select_head_);

static BoolPropertyRNA rna_EditBone_select_tail_;
PropertyRNA &rna_EditBone_select_tail = reinterpret_cast<PropertyRNA &>(rna_EditBone_select_tail_);

static FloatPropertyRNA rna_EditBone_matrix_;
PropertyRNA &rna_EditBone_matrix = reinterpret_cast<PropertyRNA &>(rna_EditBone_matrix_);

static BoolPropertyRNA rna_EditBone_bl_system_properties_get_do_create_;
PropertyRNA &rna_EditBone_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_EditBone_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_EditBone_bl_system_properties_get_system_properties_;
PropertyRNA &rna_EditBone_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_EditBone_bl_system_properties_get_system_properties_);

FunctionRNA *rna_EditBone_bl_system_properties_get_func;
static FloatPropertyRNA rna_EditBone_align_roll_vector_;
PropertyRNA &rna_EditBone_align_roll_vector = reinterpret_cast<PropertyRNA &>(rna_EditBone_align_roll_vector_);

FunctionRNA *rna_EditBone_align_roll_func;
StructRNA *RNA_EditBone;
void register_struct_EditBone(BlenderRNA &brna)
{
	rna_EditBone_rna_properties_ = {
		{&rna_EditBone_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_rna_properties_begin, EditBone_rna_properties_next, EditBone_rna_properties_end, EditBone_rna_properties_get, nullptr, nullptr, EditBone_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_EditBone_rna_type_ = {
		{&rna_EditBone_collections, 	&rna_EditBone_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_EditBone_collections_ = {
		{&rna_EditBone_parent, 	&rna_EditBone_rna_type,
		-1, "collections", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collections",
		"Bone Collections that contain this bone",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_collections_begin, EditBone_collections_next, EditBone_collections_end, EditBone_collections_get, nullptr, EditBone_collections_lookup_int, nullptr, nullptr, RNA_BoneCollection
	};

	rna_EditBone_parent_ = {
		{&rna_EditBone_roll, 	&rna_EditBone_collections,
		-1, "parent", 8388609, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"Parent edit bone (in same Armature)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_parent_get, EditBone_parent_set, nullptr, nullptr,RNA_EditBone
	};

	rna_EditBone_roll_ = {
		{&rna_EditBone_head, 	&rna_EditBone_parent,
		-1, "roll", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Roll",
		"Bone rotation around head-tail axis",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_roll_get, EditBone_roll_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_EditBone_head_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_EditBone_head_ = {
		{&rna_EditBone_tail, 	&rna_EditBone_roll,
		-1, "head", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Head",
		"Location of head end of the bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, EditBone_head_get, EditBone_head_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, rna_EditBone_head_default
	};

	static float rna_EditBone_tail_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_EditBone_tail_ = {
		{&rna_EditBone_length, 	&rna_EditBone_head,
		-1, "tail", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tail",
		"Location of tail end of the bone",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, EditBone_tail_get, EditBone_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 5, nullptr, nullptr, 0.0f, rna_EditBone_tail_default
	};

	rna_EditBone_length_ = {
		{&rna_EditBone_name, 	&rna_EditBone_tail,
		-1, "length", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Length",
		"Length of the bone. Changing moves the tail end.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_length_get, EditBone_length_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_name_ = {
		{&rna_EditBone_color, 	&rna_EditBone_length,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Bone_update_renamed, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_name_get, EditBone_name_length, EditBone_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_EditBone_color_ = {
		{&rna_EditBone_display_type, 	&rna_EditBone_name,
		-1, "color", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "color",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_color_get, nullptr, nullptr, nullptr,RNA_BoneColor
	};

	static const EnumPropertyItem rna_EditBone_display_type_items[7] = {
		{-1, "ARMATURE_DEFINED", 0, "Armature Defined", "Use display mode from armature (default)"	},
		{0, "OCTAHEDRAL", 0, "Octahedral", "Display bones as octahedral shape"	},
		{1, "STICK", 0, "Stick", "Display bones as simple 2D lines with dots"	},
		{2, "BBONE", 0, "B-Bone", "Display bones as boxes, showing subdivision and B-Splines"	},
		{3, "ENVELOPE", 0, "Envelope", "Display bones as extruded spheres, showing deformation influence volume"	},
		{4, "WIRE", 0, "Wire", "Display bones as thin wires, showing subdivision and B-Splines"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_EditBone_display_type_ = {
		{&rna_EditBone_use_connect, 	&rna_EditBone_color,
		-1, "display_type", 65539, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_display_type_get, EditBone_display_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_EditBone_display_type_items, 6, 0
	};

	rna_EditBone_use_connect_ = {
		{&rna_EditBone_use_inherit_rotation, 	&rna_EditBone_display_type,
		-1, "use_connect", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Connected",
		"When bone has a parent, bone\'s head is stuck to the parent\'s tail",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_connect_get, EditBone_use_connect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_use_inherit_rotation_ = {
		{&rna_EditBone_use_envelope_multiply, 	&rna_EditBone_use_connect,
		-1, "use_inherit_rotation", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Inherit Rotation",
		"Bone inherits rotation or scale from parent bone",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_inherit_rotation_get, EditBone_use_inherit_rotation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_use_envelope_multiply_ = {
		{&rna_EditBone_use_deform, 	&rna_EditBone_use_inherit_rotation,
		-1, "use_envelope_multiply", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Multiply Vertex Group with Envelope",
		"When deforming bone, multiply effects of Vertex Group weights with Envelope influence",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_envelope_multiply_get, EditBone_use_envelope_multiply_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_use_deform_ = {
		{&rna_EditBone_inherit_scale, 	&rna_EditBone_use_envelope_multiply,
		-1, "use_deform", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Deform",
		"Enable Bone to deform geometry",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_deform_get, EditBone_use_deform_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_EditBone_inherit_scale_items[7] = {
		{0, "FULL", 0, "Full", "Inherit all effects of parent scaling"	},
		{1, "FIX_SHEAR", 0, "Fix Shear", "Inherit scaling, but remove shearing of the child in the rest orientation"	},
		{5, "ALIGNED", 0, "Aligned", "Rotate non-uniform parent scaling to align with the child, applying parent X scale to child X axis, and so forth"	},
		{2, "AVERAGE", 0, "Average", "Inherit uniform scaling representing the overall change in the volume of the parent"	},
		{3, "NONE", 0, "None", "Completely ignore parent scaling"	},
		{4, "NONE_LEGACY", 0, "None (Legacy)", "Ignore parent scaling without compensating for parent shear. Replicates the effect of disabling the original Inherit Scale checkbox."	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_EditBone_inherit_scale_ = {
		{&rna_EditBone_use_local_location, 	&rna_EditBone_use_deform,
		-1, "inherit_scale", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Inherit Scale",
		"Specifies how the bone inherits scaling from the parent bone",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_inherit_scale_get, EditBone_inherit_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_EditBone_inherit_scale_items, 6, 0
	};

	rna_EditBone_use_local_location_ = {
		{&rna_EditBone_use_relative_parent, 	&rna_EditBone_inherit_scale,
		-1, "use_local_location", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Local Location",
		"Bone location is set in local space",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_local_location_get, EditBone_use_local_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_use_relative_parent_ = {
		{&rna_EditBone_show_wire, 	&rna_EditBone_use_local_location,
		-1, "use_relative_parent", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Relative Parenting",
		"Object children will use relative transform, like deform",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_relative_parent_get, EditBone_use_relative_parent_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_show_wire_ = {
		{&rna_EditBone_use_cyclic_offset, 	&rna_EditBone_use_relative_parent,
		-1, "show_wire", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Display Wire",
		"Bone is always displayed in wireframe regardless of viewport shading mode (useful for non-obstructive custom bone shapes)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_show_wire_get, EditBone_show_wire_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_use_cyclic_offset_ = {
		{&rna_EditBone_hide_select, 	&rna_EditBone_show_wire,
		-1, "use_cyclic_offset", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Cyclic Offset",
		"When bone does not have a parent, it receives cyclic offset effects (Deprecated)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_cyclic_offset_get, EditBone_use_cyclic_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_hide_select_ = {
		{&rna_EditBone_envelope_distance, 	&rna_EditBone_use_cyclic_offset,
		-1, "hide_select", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Selectable",
		"Bone is able to be selected",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EditBone_hide_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_hide_select_get, EditBone_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_envelope_distance_ = {
		{&rna_EditBone_envelope_weight, 	&rna_EditBone_hide_select,
		-1, "envelope_distance", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Envelope Deform Distance",
		"Bone deformation distance (for Envelope deform only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_envelope_distance_get, EditBone_envelope_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_envelope_weight_ = {
		{&rna_EditBone_head_radius, 	&rna_EditBone_envelope_distance,
		-1, "envelope_weight", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Envelope Deform Weight",
		"Bone deformation weight (for Envelope deform only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_envelope_weight_get, EditBone_envelope_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_head_radius_ = {
		{&rna_EditBone_tail_radius, 	&rna_EditBone_envelope_weight,
		-1, "head_radius", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Envelope Head Radius",
		"Radius of head of bone (for Envelope deform only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_head_radius_get, EditBone_head_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_tail_radius_ = {
		{&rna_EditBone_bbone_segments, 	&rna_EditBone_head_radius,
		-1, "tail_radius", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Envelope Tail Radius",
		"Radius of tail of bone (for Envelope deform only)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_tail_radius_get, EditBone_tail_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0099999998f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_bbone_segments_ = {
		{&rna_EditBone_bbone_mapping_mode, 	&rna_EditBone_tail_radius,
		-1, "bbone_segments", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone Segments",
		"Number of subdivisions of bone (for B-Bones only)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_segments_get, EditBone_bbone_segments_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 32, 1, 32, 1, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_EditBone_bbone_mapping_mode_items[3] = {
		{0, "STRAIGHT", 0, "Straight", "Fast mapping that is good for most situations, but ignores the rest pose curvature of the B-Bone"	},
		{1, "CURVED", 0, "Curved", "Slower mapping that gives better deformation for B-Bones that are sharply curved in rest pose"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_EditBone_bbone_mapping_mode_ = {
		{&rna_EditBone_bbone_x, 	&rna_EditBone_bbone_segments,
		-1, "bbone_mapping_mode", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone Vertex Mapping Mode",
		"Selects how the vertices are mapped to B-Bone segments based on their position",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_mapping_mode_get, EditBone_bbone_mapping_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_EditBone_bbone_mapping_mode_items, 2, 0
	};

	rna_EditBone_bbone_x_ = {
		{&rna_EditBone_bbone_z, 	&rna_EditBone_bbone_mapping_mode,
		-1, "bbone_x", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone Display X Width",
		"B-Bone X size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_x_get, EditBone_bbone_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_bbone_z_ = {
		{&rna_EditBone_bbone_handle_type_start, 	&rna_EditBone_bbone_x,
		-1, "bbone_z", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone Display Z Width",
		"B-Bone Z size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_z_get, EditBone_bbone_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	static const EnumPropertyItem rna_EditBone_bbone_handle_type_start_items[5] = {
		{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"	},
		{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"	},
		{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"	},
		{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_EditBone_bbone_handle_type_start_ = {
		{&rna_EditBone_bbone_custom_handle_start, 	&rna_EditBone_bbone_z,
		-1, "bbone_handle_type_start", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone Start Handle Type",
		"Selects how the start handle of the B-Bone is computed",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_handle_type_start_get, EditBone_bbone_handle_type_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_EditBone_bbone_handle_type_start_items, 4, 0
	};

	rna_EditBone_bbone_custom_handle_start_ = {
		{&rna_EditBone_bbone_handle_use_scale_start, 	&rna_EditBone_bbone_handle_type_start,
		-1, "bbone_custom_handle_start", 8388737, 3, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone Start Handle",
		"Bone that serves as the start handle for the B-Bone curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_custom_handle_start_get, EditBone_bbone_custom_handle_start_set, nullptr, nullptr,RNA_EditBone
	};

	static bool rna_EditBone_bbone_handle_use_scale_start_default[3] = {
		0,
		0,
		0
	};
	rna_EditBone_bbone_handle_use_scale_start_ = {
		{&rna_EditBone_bbone_handle_use_ease_start, 	&rna_EditBone_bbone_custom_handle_start,
		-1, "bbone_handle_use_scale_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Start Handle Scale",
		"Multiply B-Bone Scale In channels by the local scale values of the start handle. This is done after the Scale Easing option and isn\'t affected by it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, EditBone_bbone_handle_use_scale_start_get, EditBone_bbone_handle_use_scale_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_EditBone_bbone_handle_use_scale_start_default
	};

	rna_EditBone_bbone_handle_use_ease_start_ = {
		{&rna_EditBone_bbone_handle_type_end, 	&rna_EditBone_bbone_handle_use_scale_start,
		-1, "bbone_handle_use_ease_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Start Handle Ease",
		"Multiply the B-Bone Ease In channel by the local Y scale value of the start handle. This is done after the Scale Easing option and isn\'t affected by it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_handle_use_ease_start_get, EditBone_bbone_handle_use_ease_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_EditBone_bbone_handle_type_end_items[5] = {
		{0, "AUTO", 0, "Automatic", "Use connected parent and children to compute the handle"	},
		{1, "ABSOLUTE", 0, "Absolute", "Use the position of the specified bone to compute the handle"	},
		{2, "RELATIVE", 0, "Relative", "Use the offset of the specified bone from rest pose to compute the handle"	},
		{3, "TANGENT", 0, "Tangent", "Use the orientation of the specified bone to compute the handle, ignoring the location"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_EditBone_bbone_handle_type_end_ = {
		{&rna_EditBone_bbone_custom_handle_end, 	&rna_EditBone_bbone_handle_use_ease_start,
		-1, "bbone_handle_type_end", 1, 1, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone End Handle Type",
		"Selects how the end handle of the B-Bone is computed",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_handle_type_end_get, EditBone_bbone_handle_type_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_EditBone_bbone_handle_type_end_items, 4, 0
	};

	rna_EditBone_bbone_custom_handle_end_ = {
		{&rna_EditBone_bbone_handle_use_scale_end, 	&rna_EditBone_bbone_handle_type_end,
		-1, "bbone_custom_handle_end", 8388737, 3, 0, 0, 0, PropertyPathTemplateType(0), "B-Bone End Handle",
		"Bone that serves as the end handle for the B-Bone curve",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_custom_handle_end_get, EditBone_bbone_custom_handle_end_set, nullptr, nullptr,RNA_EditBone
	};

	static bool rna_EditBone_bbone_handle_use_scale_end_default[3] = {
		0,
		0,
		0
	};
	rna_EditBone_bbone_handle_use_scale_end_ = {
		{&rna_EditBone_bbone_handle_use_ease_end, 	&rna_EditBone_bbone_custom_handle_end,
		-1, "bbone_handle_use_scale_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "End Handle Scale",
		"Multiply B-Bone Scale Out channels by the local scale values of the end handle. This is done after the Scale Easing option and isn\'t affected by it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, EditBone_bbone_handle_use_scale_end_get, EditBone_bbone_handle_use_scale_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, rna_EditBone_bbone_handle_use_scale_end_default
	};

	rna_EditBone_bbone_handle_use_ease_end_ = {
		{&rna_EditBone_bbone_rollin, 	&rna_EditBone_bbone_handle_use_scale_end,
		-1, "bbone_handle_use_ease_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "End Handle Ease",
		"Multiply the B-Bone Ease Out channel by the local Y scale value of the end handle. This is done after the Scale Easing option and isn\'t affected by it.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_update_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_handle_use_ease_end_get, EditBone_bbone_handle_use_ease_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_bbone_rollin_ = {
		{&rna_EditBone_bbone_rollout, 	&rna_EditBone_bbone_handle_use_ease_end,
		-1, "bbone_rollin", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Roll In",
		"Roll offset for the start of the B-Bone, adjusts twist",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_rollin_get, EditBone_bbone_rollin_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_bbone_rollout_ = {
		{&rna_EditBone_use_endroll_as_inroll, 	&rna_EditBone_bbone_rollin,
		-1, "bbone_rollout", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Roll Out",
		"Roll offset for the end of the B-Bone, adjusts twist",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_rollout_get, EditBone_bbone_rollout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 10.0f, 2, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_use_endroll_as_inroll_ = {
		{&rna_EditBone_bbone_curveinx, 	&rna_EditBone_bbone_rollout,
		-1, "use_endroll_as_inroll", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Inherit End Roll",
		"Add Roll Out of the Start Handle bone to the Roll In value",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_dependency_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_endroll_as_inroll_get, EditBone_use_endroll_as_inroll_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_bbone_curveinx_ = {
		{&rna_EditBone_bbone_curveinz, 	&rna_EditBone_use_endroll_as_inroll,
		-1, "bbone_curveinx", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "In X",
		"X-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_curveinx_get, EditBone_bbone_curveinx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_bbone_curveinz_ = {
		{&rna_EditBone_bbone_curveoutx, 	&rna_EditBone_bbone_curveinx,
		-1, "bbone_curveinz", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "In Z",
		"Z-axis handle offset for start of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_curveinz_get, EditBone_bbone_curveinz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_bbone_curveoutx_ = {
		{&rna_EditBone_bbone_curveoutz, 	&rna_EditBone_bbone_curveinz,
		-1, "bbone_curveoutx", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Out X",
		"X-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_curveoutx_get, EditBone_bbone_curveoutx_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_bbone_curveoutz_ = {
		{&rna_EditBone_bbone_easein, 	&rna_EditBone_bbone_curveoutx,
		-1, "bbone_curveoutz", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Out Z",
		"Z-axis handle offset for end of the B-Bone\'s curve, adjusts curvature",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_curveoutz_get, EditBone_bbone_curveoutz_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 5, nullptr, nullptr, 0.0f, nullptr
	};

	rna_EditBone_bbone_easein_ = {
		{&rna_EditBone_bbone_easeout, 	&rna_EditBone_bbone_curveoutz,
		-1, "bbone_easein", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ease In",
		"Length of first Bézier Handle (for B-Bones only)",
		0, "Armature",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_easein_get, EditBone_bbone_easein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_EditBone_bbone_easeout_ = {
		{&rna_EditBone_use_scale_easing, 	&rna_EditBone_bbone_easein,
		-1, "bbone_easeout", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ease Out",
		"Length of second Bézier Handle (for B-Bones only)",
		0, "Armature",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_bbone_easeout_get, EditBone_bbone_easeout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -5.0f, 5.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_EditBone_use_scale_easing_ = {
		{&rna_EditBone_bbone_scalein, 	&rna_EditBone_bbone_easeout,
		-1, "use_scale_easing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale Easing",
		"Multiply the final easing values by the Scale In/Out Y factors",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_use_scale_easing_get, EditBone_use_scale_easing_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_EditBone_bbone_scalein_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_EditBone_bbone_scalein_ = {
		{&rna_EditBone_bbone_scaleout, 	&rna_EditBone_use_scale_easing,
		-1, "bbone_scalein", 67108867, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale In",
		"Scale factors for the start of the B-Bone, adjusts thickness (for tapering effects)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, EditBone_bbone_scalein_get, EditBone_bbone_scalein_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, rna_EditBone_bbone_scalein_default
	};

	static float rna_EditBone_bbone_scaleout_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_EditBone_bbone_scaleout_ = {
		{&rna_EditBone_hide, 	&rna_EditBone_bbone_scalein,
		-1, "bbone_scaleout", 67108867, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale Out",
		"Scale factors for the end of the B-Bone, adjusts thickness (for tapering effects)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Armature_editbone_transform_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, EditBone_bbone_scaleout_get, EditBone_bbone_scaleout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 1.0f, rna_EditBone_bbone_scaleout_default
	};

	rna_EditBone_hide_ = {
		{&rna_EditBone_lock, 	&rna_EditBone_bbone_scaleout,
		-1, "hide", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"Bone is not visible when in Edit Mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_EditBone_hide_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_hide_get, EditBone_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_lock_ = {
		{&rna_EditBone_select, 	&rna_EditBone_hide,
		-1, "lock", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lock",
		"Bone is not able to be transformed when in Edit Mode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_lock_get, EditBone_lock_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_select_ = {
		{&rna_EditBone_select_head, 	&rna_EditBone_lock,
		-1, "select", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_select_get, EditBone_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_select_head_ = {
		{&rna_EditBone_select_tail, 	&rna_EditBone_select,
		-1, "select_head", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Head Select",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_select_head_get, EditBone_select_head_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_EditBone_select_tail_ = {
		{&rna_EditBone_matrix, 	&rna_EditBone_select_head,
		-1, "select_tail", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tail Select",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Armature_redraw_data, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		EditBone_select_tail_get, EditBone_select_tail_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_EditBone_matrix_default[16] = {
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
	rna_EditBone_matrix_ = {
		{nullptr, 	&rna_EditBone_select_tail,
		-1, "matrix", 8388611, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edit Bone Matrix",
		"Matrix combining location and rotation of the bone (head position, direction and roll), in armature space (does not include/support bone\'s length/size)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, EditBone_matrix_get, EditBone_matrix_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_EditBone_matrix_default
	};

	StructRNA *srna = RNA_EditBone;
	srna->cont.properties = {&rna_EditBone_rna_properties, &rna_EditBone_matrix};
	srna->identifier = "EditBone";
	srna->flag = 516;
	srna->name = "Edit Bone";
	srna->description = "Edit mode bone in an armature data-block";
	srna->translation_context = "*";
	srna->icon = 180;
	srna->nameproperty = &rna_EditBone_name;
	srna->iteratorproperty = &rna_EditBone_rna_properties;
	srna->path = rna_EditBone_path;
	srna->idproperties = rna_EditBone_idprops;
	srna->system_idproperties = rna_EditBone_system_idprops;
	{
	rna_EditBone_bl_system_properties_get_do_create_ = {
		{&rna_EditBone_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_EditBone_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_EditBone_bl_system_properties_get_do_create,
		-1, "system_properties", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The system properties root container, or None if there are no system properties stored in this data yet, and its creation was not requested",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PropertyGroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_EditBone_bl_system_properties_get_do_create, &rna_EditBone_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = EditBone_bl_system_properties_get_call;
		func->c_ret = &rna_EditBone_bl_system_properties_get_system_properties;
		rna_EditBone_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_EditBone_align_roll_vector_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_EditBone_align_roll_vector_ = {
		{nullptr, 	nullptr,
		-1, "vector", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Vector",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_EditBone_align_roll_vector_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_EditBone_align_roll_vector, &rna_EditBone_align_roll_vector};
		func->identifier = "align_roll";
		func->description = "Align the bone to a local-space roll so the Z axis points in the direction of the vector given";
		func->call = EditBone_align_roll_call;
		rna_EditBone_align_roll_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
