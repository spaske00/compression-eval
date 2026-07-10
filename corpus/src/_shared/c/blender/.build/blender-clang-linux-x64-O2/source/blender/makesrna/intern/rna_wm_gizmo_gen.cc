
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

#include "rna_wm_gizmo.cc"
#include "rna_wm_gizmo_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_GizmoGroup_rna_properties;
extern PropertyRNA &rna_GizmoGroup_rna_type;
extern PropertyRNA &rna_GizmoGroup_bl_idname;
extern PropertyRNA &rna_GizmoGroup_bl_label;
extern PropertyRNA &rna_GizmoGroup_bl_space_type;
extern PropertyRNA &rna_GizmoGroup_bl_region_type;
extern PropertyRNA &rna_GizmoGroup_bl_owner_id;
extern PropertyRNA &rna_GizmoGroup_bl_options;
extern PropertyRNA &rna_GizmoGroup_name;
extern PropertyRNA &rna_GizmoGroup_gizmos;

extern FunctionRNA *rna_GizmoGroup_poll_func;
extern PropertyRNA &rna_GizmoGroup_poll_visible;
extern PropertyRNA &rna_GizmoGroup_poll_context;

extern FunctionRNA *rna_GizmoGroup_setup_keymap_func;
extern PropertyRNA &rna_GizmoGroup_setup_keymap_keyconfig;
extern PropertyRNA &rna_GizmoGroup_setup_keymap_keymap;

extern FunctionRNA *rna_GizmoGroup_setup_func;
extern PropertyRNA &rna_GizmoGroup_setup_context;

extern FunctionRNA *rna_GizmoGroup_refresh_func;
extern PropertyRNA &rna_GizmoGroup_refresh_context;

extern FunctionRNA *rna_GizmoGroup_draw_prepare_func;
extern PropertyRNA &rna_GizmoGroup_draw_prepare_context;

extern FunctionRNA *rna_GizmoGroup_invoke_prepare_func;
extern PropertyRNA &rna_GizmoGroup_invoke_prepare_context;
extern PropertyRNA &rna_GizmoGroup_invoke_prepare_gizmo;



extern PropertyRNA &rna_Gizmo_rna_properties;
extern PropertyRNA &rna_Gizmo_rna_type;
extern PropertyRNA &rna_Gizmo_properties;
extern PropertyRNA &rna_Gizmo_bl_idname;
extern PropertyRNA &rna_Gizmo_group;
extern PropertyRNA &rna_Gizmo_color;
extern PropertyRNA &rna_Gizmo_alpha;
extern PropertyRNA &rna_Gizmo_color_highlight;
extern PropertyRNA &rna_Gizmo_alpha_highlight;
extern PropertyRNA &rna_Gizmo_matrix_space;
extern PropertyRNA &rna_Gizmo_matrix_basis;
extern PropertyRNA &rna_Gizmo_matrix_offset;
extern PropertyRNA &rna_Gizmo_matrix_world;
extern PropertyRNA &rna_Gizmo_scale_basis;
extern PropertyRNA &rna_Gizmo_line_width;
extern PropertyRNA &rna_Gizmo_select_bias;
extern PropertyRNA &rna_Gizmo_hide;
extern PropertyRNA &rna_Gizmo_hide_select;
extern PropertyRNA &rna_Gizmo_hide_keymap;
extern PropertyRNA &rna_Gizmo_use_grab_cursor;
extern PropertyRNA &rna_Gizmo_use_draw_hover;
extern PropertyRNA &rna_Gizmo_use_draw_modal;
extern PropertyRNA &rna_Gizmo_use_draw_value;
extern PropertyRNA &rna_Gizmo_use_draw_offset_scale;
extern PropertyRNA &rna_Gizmo_use_draw_scale;
extern PropertyRNA &rna_Gizmo_use_select_background;
extern PropertyRNA &rna_Gizmo_use_operator_tool_properties;
extern PropertyRNA &rna_Gizmo_use_event_handle_all;
extern PropertyRNA &rna_Gizmo_use_tooltip;
extern PropertyRNA &rna_Gizmo_use_undo;
extern PropertyRNA &rna_Gizmo_is_highlight;
extern PropertyRNA &rna_Gizmo_is_modal;
extern PropertyRNA &rna_Gizmo_select;

extern FunctionRNA *rna_Gizmo_draw_func;
extern PropertyRNA &rna_Gizmo_draw_context;

extern FunctionRNA *rna_Gizmo_draw_select_func;
extern PropertyRNA &rna_Gizmo_draw_select_context;
extern PropertyRNA &rna_Gizmo_draw_select_select_id;

extern FunctionRNA *rna_Gizmo_test_select_func;
extern PropertyRNA &rna_Gizmo_test_select_context;
extern PropertyRNA &rna_Gizmo_test_select_location;
extern PropertyRNA &rna_Gizmo_test_select_intersect_id;

extern FunctionRNA *rna_Gizmo_modal_func;
extern PropertyRNA &rna_Gizmo_modal_context;
extern PropertyRNA &rna_Gizmo_modal_event;
extern PropertyRNA &rna_Gizmo_modal_tweak;
extern PropertyRNA &rna_Gizmo_modal_result;

extern FunctionRNA *rna_Gizmo_setup_func;
extern FunctionRNA *rna_Gizmo_invoke_func;
extern PropertyRNA &rna_Gizmo_invoke_context;
extern PropertyRNA &rna_Gizmo_invoke_event;
extern PropertyRNA &rna_Gizmo_invoke_result;

extern FunctionRNA *rna_Gizmo_exit_func;
extern PropertyRNA &rna_Gizmo_exit_context;
extern PropertyRNA &rna_Gizmo_exit_cancel;

extern FunctionRNA *rna_Gizmo_select_refresh_func;
extern FunctionRNA *rna_Gizmo_draw_preset_box_func;
extern PropertyRNA &rna_Gizmo_draw_preset_box_matrix;
extern PropertyRNA &rna_Gizmo_draw_preset_box_select_id;

extern FunctionRNA *rna_Gizmo_draw_preset_arrow_func;
extern PropertyRNA &rna_Gizmo_draw_preset_arrow_matrix;
extern PropertyRNA &rna_Gizmo_draw_preset_arrow_axis;
extern PropertyRNA &rna_Gizmo_draw_preset_arrow_select_id;

extern FunctionRNA *rna_Gizmo_draw_preset_circle_func;
extern PropertyRNA &rna_Gizmo_draw_preset_circle_matrix;
extern PropertyRNA &rna_Gizmo_draw_preset_circle_axis;
extern PropertyRNA &rna_Gizmo_draw_preset_circle_select_id;

extern FunctionRNA *rna_Gizmo_target_set_prop_func;
extern PropertyRNA &rna_Gizmo_target_set_prop_target;
extern PropertyRNA &rna_Gizmo_target_set_prop_data;
extern PropertyRNA &rna_Gizmo_target_set_prop_property;
extern PropertyRNA &rna_Gizmo_target_set_prop_index;

extern FunctionRNA *rna_Gizmo_target_set_operator_func;
extern PropertyRNA &rna_Gizmo_target_set_operator_operator;
extern PropertyRNA &rna_Gizmo_target_set_operator_index;
extern PropertyRNA &rna_Gizmo_target_set_operator_properties;

extern FunctionRNA *rna_Gizmo_target_is_valid_func;
extern PropertyRNA &rna_Gizmo_target_is_valid_property;
extern PropertyRNA &rna_Gizmo_target_is_valid_result;



extern PropertyRNA &rna_GizmoProperties_rna_properties;
extern PropertyRNA &rna_GizmoProperties_rna_type;

extern FunctionRNA *rna_GizmoProperties_bl_system_properties_get_func;
extern PropertyRNA &rna_GizmoProperties_bl_system_properties_get_do_create;
extern PropertyRNA &rna_GizmoProperties_bl_system_properties_get_system_properties;



extern PropertyRNA &rna_Gizmos_rna_properties;
extern PropertyRNA &rna_Gizmos_rna_type;

extern FunctionRNA *rna_Gizmos_new_func;
extern PropertyRNA &rna_Gizmos_new_type;
extern PropertyRNA &rna_Gizmos_new_gizmo;

extern FunctionRNA *rna_Gizmos_remove_func;
extern PropertyRNA &rna_Gizmos_remove_gizmo;

extern FunctionRNA *rna_Gizmos_clear_func;


extern PropertyRNA &rna_GizmoGroupProperties_rna_properties;
extern PropertyRNA &rna_GizmoGroupProperties_rna_type;

extern FunctionRNA *rna_GizmoGroupProperties_bl_system_properties_get_func;
extern PropertyRNA &rna_GizmoGroupProperties_bl_system_properties_get_do_create;
extern PropertyRNA &rna_GizmoGroupProperties_bl_system_properties_get_system_properties;


static PointerRNA GizmoGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GizmoGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GizmoGroup_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroup_rna_properties_get(iter);
    }
}

void GizmoGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroup_rna_properties_get(iter);
    }
}

void GizmoGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GizmoGroup_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GizmoGroup_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void GizmoGroup_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < 64);
    strcpy(value, data->type->idname);
}

int GizmoGroup_bl_idname_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->idname);
}

void GizmoGroup_bl_idname_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_GizmoGroup_bl_idname_set;
    fn(ptr, value);
}

void GizmoGroup_bl_label_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_assert(strlen(data->type->name) < 64);
    strcpy(value, data->type->name);
}

int GizmoGroup_bl_label_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->name);
}

void GizmoGroup_bl_label_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_GizmoGroup_bl_label_set;
    fn(ptr, value);
}

int GizmoGroup_bl_space_type_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->gzmap_params.spaceid);
}

void GizmoGroup_bl_space_type_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    data->type->gzmap_params.spaceid = (std::remove_reference_t<decltype(data->type->gzmap_params.spaceid)>)value;
}

int GizmoGroup_bl_region_type_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->gzmap_params.regionid);
}

void GizmoGroup_bl_region_type_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    data->type->gzmap_params.regionid = (std::remove_reference_t<decltype(data->type->gzmap_params.regionid)>)value;
}

void GizmoGroup_bl_owner_id_get(PointerRNA *ptr, char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_assert(strlen(data->type->owner_id) < sizeof(data->type->owner_id));
    strcpy(value, data->type->owner_id);
}

int GizmoGroup_bl_owner_id_length(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return strlen(data->type->owner_id);
}

void GizmoGroup_bl_owner_id_set(PointerRNA *ptr, const char *value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    BLI_strncpy_utf8(data->type->owner_id, value, sizeof(data->type->owner_id));
}

int GizmoGroup_bl_options_get(PointerRNA *ptr)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    return (int)(data->type->flag);
}

void GizmoGroup_bl_options_set(PointerRNA *ptr, int value)
{
    wmGizmoGroup *data = (wmGizmoGroup *)(ptr->data);
    data->type->flag = (std::remove_reference_t<decltype(data->type->flag)>)value;
}

void GizmoGroup_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_GizmoGroup_name_get;
    fn(ptr, value);
}

int GizmoGroup_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_GizmoGroup_name_length;
    return fn(ptr);
}

static PointerRNA GizmoGroup_gizmos_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Gizmo, rna_iterator_listbase_get(iter));
}

void GizmoGroup_gizmos_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GizmoGroup_gizmos;

    PropCollectionBeginFunc fn = rna_GizmoGroup_gizmos_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroup_gizmos_get(iter);
    }
}

void GizmoGroup_gizmos_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroup_gizmos_get(iter);
    }
}

void GizmoGroup_gizmos_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GizmoGroup_gizmos_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    GizmoGroup_gizmos_begin(&iter, ptr);

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
        if (found) { *r_ptr = GizmoGroup_gizmos_get(&iter); }
    }

    GizmoGroup_gizmos_end(&iter);

    return found;
}

static PointerRNA Gizmo_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Gizmo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Gizmo_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Gizmo_rna_properties_get(iter);
    }
}

void Gizmo_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Gizmo_rna_properties_get(iter);
    }
}

void Gizmo_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Gizmo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Gizmo_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA Gizmo_properties_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Gizmo_properties_get;
    return fn(ptr);
}

void Gizmo_bl_idname_get(PointerRNA *ptr, char *value)
{
    wmGizmo *data = (wmGizmo *)(ptr->data);
    BLI_assert(strlen(data->type->idname) < 64);
    strcpy(value, data->type->idname);
}

int Gizmo_bl_idname_length(PointerRNA *ptr)
{
    wmGizmo *data = (wmGizmo *)(ptr->data);
    return strlen(data->type->idname);
}

void Gizmo_bl_idname_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Gizmo_bl_idname_set;
    fn(ptr, value);
}

PointerRNA Gizmo_group_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Gizmo_group_get;
    return fn(ptr);
}

void Gizmo_color_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_color_get;
    fn(ptr, values);
}

void Gizmo_color_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Gizmo_color_set;
    fn(ptr, values);
}

float Gizmo_alpha_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_alpha_get;
    return fn(ptr);
}

void Gizmo_alpha_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_alpha_set;
    fn(ptr, value);
}

void Gizmo_color_highlight_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_color_hi_get;
    fn(ptr, values);
}

void Gizmo_color_highlight_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_Gizmo_color_hi_set;
    fn(ptr, values);
}

float Gizmo_alpha_highlight_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_alpha_hi_get;
    return fn(ptr);
}

void Gizmo_alpha_highlight_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_alpha_hi_set;
    fn(ptr, value);
}

void Gizmo_matrix_space_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_matrix_space_get;
    fn(ptr, values);
}

void Gizmo_matrix_space_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Gizmo_matrix_space_set;
    fn(ptr, values);
}

void Gizmo_matrix_basis_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_matrix_basis_get;
    fn(ptr, values);
}

void Gizmo_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Gizmo_matrix_basis_set;
    fn(ptr, values);
}

void Gizmo_matrix_offset_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_matrix_offset_get;
    fn(ptr, values);
}

void Gizmo_matrix_offset_set(PointerRNA *ptr, const float values[16])
{
    PropFloatArraySetFunc fn = rna_Gizmo_matrix_offset_set;
    fn(ptr, values);
}

void Gizmo_matrix_world_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_Gizmo_matrix_world_get;
    fn(ptr, values);
}

float Gizmo_scale_basis_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_scale_basis_get;
    return fn(ptr);
}

void Gizmo_scale_basis_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_scale_basis_set;
    fn(ptr, value);
}

float Gizmo_line_width_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_line_width_get;
    return fn(ptr);
}

void Gizmo_line_width_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_line_width_set;
    fn(ptr, value);
}

float Gizmo_select_bias_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_Gizmo_select_bias_get;
    return fn(ptr);
}

void Gizmo_select_bias_set(PointerRNA *ptr, float value)
{
    PropFloatSetFunc fn = rna_Gizmo_select_bias_set;
    fn(ptr, value);
}

bool Gizmo_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_hide_get;
    return fn(ptr);
}

void Gizmo_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_hide_set;
    fn(ptr, value);
}

bool Gizmo_hide_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_hide_select_get;
    return fn(ptr);
}

void Gizmo_hide_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_hide_select_set;
    fn(ptr, value);
}

bool Gizmo_hide_keymap_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_hide_keymap_get;
    return fn(ptr);
}

void Gizmo_hide_keymap_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_hide_keymap_set;
    fn(ptr, value);
}

bool Gizmo_use_grab_cursor_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_grab_cursor_get;
    return fn(ptr);
}

void Gizmo_use_grab_cursor_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_grab_cursor_set;
    fn(ptr, value);
}

bool Gizmo_use_draw_hover_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_hover_get;
    return fn(ptr);
}

void Gizmo_use_draw_hover_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_hover_set;
    fn(ptr, value);
}

bool Gizmo_use_draw_modal_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_modal_get;
    return fn(ptr);
}

void Gizmo_use_draw_modal_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_modal_set;
    fn(ptr, value);
}

bool Gizmo_use_draw_value_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_value_get;
    return fn(ptr);
}

void Gizmo_use_draw_value_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_value_set;
    fn(ptr, value);
}

bool Gizmo_use_draw_offset_scale_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_offset_scale_get;
    return fn(ptr);
}

void Gizmo_use_draw_offset_scale_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_offset_scale_set;
    fn(ptr, value);
}

bool Gizmo_use_draw_scale_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_draw_scale_get;
    return fn(ptr);
}

void Gizmo_use_draw_scale_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_draw_scale_set;
    fn(ptr, value);
}

bool Gizmo_use_select_background_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_select_background_get;
    return fn(ptr);
}

void Gizmo_use_select_background_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_select_background_set;
    fn(ptr, value);
}

bool Gizmo_use_operator_tool_properties_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_operator_tool_properties_get;
    return fn(ptr);
}

void Gizmo_use_operator_tool_properties_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_operator_tool_properties_set;
    fn(ptr, value);
}

bool Gizmo_use_event_handle_all_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_event_handle_all_get;
    return fn(ptr);
}

void Gizmo_use_event_handle_all_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_event_handle_all_set;
    fn(ptr, value);
}

bool Gizmo_use_tooltip_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_tooltip_get;
    return fn(ptr);
}

void Gizmo_use_tooltip_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_tooltip_set;
    fn(ptr, value);
}

bool Gizmo_use_undo_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_flag_use_undo_get;
    return fn(ptr);
}

void Gizmo_use_undo_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_flag_use_undo_set;
    fn(ptr, value);
}

bool Gizmo_is_highlight_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_state_is_highlight_get;
    return fn(ptr);
}

bool Gizmo_is_modal_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_state_is_modal_get;
    return fn(ptr);
}

bool Gizmo_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Gizmo_state_select_get;
    return fn(ptr);
}

void Gizmo_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Gizmo_state_select_set;
    fn(ptr, value);
}

static PointerRNA GizmoProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GizmoProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GizmoProperties_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoProperties_rna_properties_get(iter);
    }
}

void GizmoProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GizmoProperties_rna_properties_get(iter);
    }
}

void GizmoProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GizmoProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GizmoProperties_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA Gizmos_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Gizmos_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Gizmos_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Gizmos_rna_properties_get(iter);
    }
}

void Gizmos_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Gizmos_rna_properties_get(iter);
    }
}

void Gizmos_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Gizmos_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Gizmos_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA GizmoGroupProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void GizmoGroupProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_GizmoGroupProperties_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = GizmoGroupProperties_rna_properties_get(iter);
    }
}

void GizmoGroupProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = GizmoGroupProperties_rna_properties_get(iter);
    }
}

void GizmoGroupProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool GizmoGroupProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA GizmoGroupProperties_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}


void Gizmo_draw_preset_box_func(wmGizmo *_self, float matrix[16], int select_id)
{
	rna_gizmo_draw_preset_box(_self, matrix, select_id);
}

static void Gizmo_draw_preset_box_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmo *_self;
	const float *matrix;
	int select_id;
	char *_data;
	
	_self = (wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_box(_self, matrix, select_id);
}

void Gizmo_draw_preset_arrow_func(wmGizmo *_self, float matrix[16], int axis, int select_id)
{
	rna_gizmo_draw_preset_arrow(_self, matrix, axis, select_id);
}

static void Gizmo_draw_preset_arrow_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmo *_self;
	const float *matrix;
	int axis;
	int select_id;
	char *_data;
	
	_self = (wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	axis = *((int *)_data);
	_data += 8;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_arrow(_self, matrix, axis, select_id);
}

void Gizmo_draw_preset_circle_func(wmGizmo *_self, float matrix[16], int axis, int select_id)
{
	rna_gizmo_draw_preset_circle(_self, matrix, axis, select_id);
}

static void Gizmo_draw_preset_circle_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmo *_self;
	const float *matrix;
	int axis;
	int select_id;
	char *_data;
	
	_self = (wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	axis = *((int *)_data);
	_data += 8;
	select_id = *((int *)_data);
	
	rna_gizmo_draw_preset_circle(_self, matrix, axis, select_id);
}

void Gizmo_target_set_prop_func(wmGizmo *_self, ReportList *reports, const char * target, PointerRNA *data, const char * property, int index)
{
	rna_gizmo_target_set_prop(_self, reports, target, data, property, index);
}

static void Gizmo_target_set_prop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmo *_self;
	const char * target;
	PointerRNA *data;
	const char * property;
	int index;
	char *_data;
	
	_self = (wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	target = *((const char * *)_data);
	_data += 8;
	data = ((PointerRNA *)_data);
	_data += 88;
	property = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	
	rna_gizmo_target_set_prop(_self, reports, target, data, property, index);
}

PointerRNA Gizmo_target_set_operator_func(wmGizmo *_self, ReportList *reports, const char * operator_value, int index)
{
	return rna_gizmo_target_set_operator(_self, reports, operator_value, index);
}

static void Gizmo_target_set_operator_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmo *_self;
	const char * operator_value;
	int index;
	PointerRNA properties;
	char *_data, *_retdata;
	
	_self = (wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	operator_value = *((const char * *)_data);
	_data += 8;
	index = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	properties = rna_gizmo_target_set_operator(_self, reports, operator_value, index);
	*reinterpret_cast<PointerRNA *>(_retdata) = properties;
}

bool Gizmo_target_is_valid_func(wmGizmo *_self, ReportList *reports, const char * property)
{
	return rna_gizmo_target_is_valid(_self, reports, property);
}

static void Gizmo_target_is_valid_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmo *_self;
	const char * property;
	bool result;
	char *_data, *_retdata;
	
	_self = (wmGizmo *)_ptr->data;
	_data = (char *)_parms->data;
	property = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_gizmo_target_is_valid(_self, reports, property);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

void rna_gizmo_draw_preset_box(wmGizmo *_self, float matrix[16], int select_id);
void rna_gizmo_draw_preset_arrow(wmGizmo *_self, float matrix[16], int axis, int select_id);
void rna_gizmo_draw_preset_circle(wmGizmo *_self, float matrix[16], int axis, int select_id);
void rna_gizmo_target_set_prop(wmGizmo *_self, ReportList *reports, const char * target, PointerRNA *data, const char * property, int index);
PointerRNA rna_gizmo_target_set_operator(wmGizmo *_self, ReportList *reports, const char * operator_value, int index);
bool rna_gizmo_target_is_valid(wmGizmo *_self, ReportList *reports, const char * property);

IDPropertyGroup *GizmoProperties_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void GizmoProperties_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);

wmGizmo *Gizmos_new_func(wmGizmoGroup *_self, ReportList *reports, const char * type)
{
	return rna_GizmoGroup_gizmo_new(_self, reports, type);
}

static void Gizmos_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmoGroup *_self;
	const char * type;
	wmGizmo *gizmo;
	char *_data, *_retdata;
	
	_self = (wmGizmoGroup *)_ptr->data;
	_data = (char *)_parms->data;
	type = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	gizmo = rna_GizmoGroup_gizmo_new(_self, reports, type);
	*((wmGizmo **)_retdata) = gizmo;
}

void Gizmos_remove_func(wmGizmoGroup *_self, bContext *C, wmGizmo *gizmo)
{
	rna_GizmoGroup_gizmo_remove(_self, C, gizmo);
}

static void Gizmos_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmoGroup *_self;
	wmGizmo *gizmo;
	char *_data;
	
	_self = (wmGizmoGroup *)_ptr->data;
	_data = (char *)_parms->data;
	gizmo = *((wmGizmo **)_data);
	
	rna_GizmoGroup_gizmo_remove(_self, C, gizmo);
}

void Gizmos_clear_func(wmGizmoGroup *_self, bContext *C)
{
	rna_GizmoGroup_gizmo_clear(_self, C);
}

static void Gizmos_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	wmGizmoGroup *_self;
	_self = (wmGizmoGroup *)_ptr->data;
	
	rna_GizmoGroup_gizmo_clear(_self, C);
}

/* Repeated prototypes to detect errors */

wmGizmo *rna_GizmoGroup_gizmo_new(wmGizmoGroup *_self, ReportList *reports, const char * type);
void rna_GizmoGroup_gizmo_remove(wmGizmoGroup *_self, bContext *C, wmGizmo *gizmo);
void rna_GizmoGroup_gizmo_clear(wmGizmoGroup *_self, bContext *C);

IDPropertyGroup *GizmoGroupProperties_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void GizmoGroupProperties_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);

/* GizmoGroup */
static CollectionPropertyRNA rna_GizmoGroup_rna_properties_;
PropertyRNA &rna_GizmoGroup_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_rna_properties_);

static PointerPropertyRNA rna_GizmoGroup_rna_type_;
PropertyRNA &rna_GizmoGroup_rna_type = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_rna_type_);

static StringPropertyRNA rna_GizmoGroup_bl_idname_;
PropertyRNA &rna_GizmoGroup_bl_idname = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_bl_idname_);

static StringPropertyRNA rna_GizmoGroup_bl_label_;
PropertyRNA &rna_GizmoGroup_bl_label = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_bl_label_);

static EnumPropertyRNA rna_GizmoGroup_bl_space_type_;
PropertyRNA &rna_GizmoGroup_bl_space_type = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_bl_space_type_);

static EnumPropertyRNA rna_GizmoGroup_bl_region_type_;
PropertyRNA &rna_GizmoGroup_bl_region_type = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_bl_region_type_);

static StringPropertyRNA rna_GizmoGroup_bl_owner_id_;
PropertyRNA &rna_GizmoGroup_bl_owner_id = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_bl_owner_id_);

static EnumPropertyRNA rna_GizmoGroup_bl_options_;
PropertyRNA &rna_GizmoGroup_bl_options = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_bl_options_);

static StringPropertyRNA rna_GizmoGroup_name_;
PropertyRNA &rna_GizmoGroup_name = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_name_);

static CollectionPropertyRNA rna_GizmoGroup_gizmos_;
PropertyRNA &rna_GizmoGroup_gizmos = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_gizmos_);

static BoolPropertyRNA rna_GizmoGroup_poll_visible_;
PropertyRNA &rna_GizmoGroup_poll_visible = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_poll_visible_);

static PointerPropertyRNA rna_GizmoGroup_poll_context_;
PropertyRNA &rna_GizmoGroup_poll_context = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_poll_context_);

FunctionRNA *rna_GizmoGroup_poll_func;
static PointerPropertyRNA rna_GizmoGroup_setup_keymap_keyconfig_;
PropertyRNA &rna_GizmoGroup_setup_keymap_keyconfig = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_setup_keymap_keyconfig_);

static PointerPropertyRNA rna_GizmoGroup_setup_keymap_keymap_;
PropertyRNA &rna_GizmoGroup_setup_keymap_keymap = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_setup_keymap_keymap_);

FunctionRNA *rna_GizmoGroup_setup_keymap_func;
static PointerPropertyRNA rna_GizmoGroup_setup_context_;
PropertyRNA &rna_GizmoGroup_setup_context = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_setup_context_);

FunctionRNA *rna_GizmoGroup_setup_func;
static PointerPropertyRNA rna_GizmoGroup_refresh_context_;
PropertyRNA &rna_GizmoGroup_refresh_context = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_refresh_context_);

FunctionRNA *rna_GizmoGroup_refresh_func;
static PointerPropertyRNA rna_GizmoGroup_draw_prepare_context_;
PropertyRNA &rna_GizmoGroup_draw_prepare_context = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_draw_prepare_context_);

FunctionRNA *rna_GizmoGroup_draw_prepare_func;
static PointerPropertyRNA rna_GizmoGroup_invoke_prepare_context_;
PropertyRNA &rna_GizmoGroup_invoke_prepare_context = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_invoke_prepare_context_);

static PointerPropertyRNA rna_GizmoGroup_invoke_prepare_gizmo_;
PropertyRNA &rna_GizmoGroup_invoke_prepare_gizmo = reinterpret_cast<PropertyRNA &>(rna_GizmoGroup_invoke_prepare_gizmo_);

FunctionRNA *rna_GizmoGroup_invoke_prepare_func;
StructRNA *RNA_GizmoGroup;
void register_struct_GizmoGroup(BlenderRNA &brna)
{
	rna_GizmoGroup_rna_properties_ = {
		{&rna_GizmoGroup_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_rna_properties_begin, GizmoGroup_rna_properties_next, GizmoGroup_rna_properties_end, GizmoGroup_rna_properties_get, nullptr, nullptr, GizmoGroup_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GizmoGroup_rna_type_ = {
		{&rna_GizmoGroup_bl_idname, 	&rna_GizmoGroup_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_GizmoGroup_bl_idname_ = {
		{&rna_GizmoGroup_bl_label, 	&rna_GizmoGroup_rna_type,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_idname",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_bl_idname_get, GizmoGroup_bl_idname_length, GizmoGroup_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_GizmoGroup_bl_label_ = {
		{&rna_GizmoGroup_bl_space_type, 	&rna_GizmoGroup_bl_idname,
		-1, "bl_label", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_label",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_bl_label_get, GizmoGroup_bl_label_length, GizmoGroup_bl_label_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_GizmoGroup_bl_space_type_ = {
		{&rna_GizmoGroup_bl_region_type, 	&rna_GizmoGroup_bl_label,
		-1, "bl_space_type", 19, 0, 0, 0, 0, PropertyPathTemplateType(0), "Space Type",
		"The space where the panel is going to be used in",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_bl_space_type_get, GizmoGroup_bl_space_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 24, 0
	};

	rna_GizmoGroup_bl_region_type_ = {
		{&rna_GizmoGroup_bl_owner_id, 	&rna_GizmoGroup_bl_space_type,
		-1, "bl_region_type", 19, 0, 0, 0, 0, PropertyPathTemplateType(0), "Region Type",
		"The region where the panel is going to be used in",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_bl_region_type_get, GizmoGroup_bl_region_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 17, 0
	};

	rna_GizmoGroup_bl_owner_id_ = {
		{&rna_GizmoGroup_bl_options, 	&rna_GizmoGroup_bl_region_type,
		-1, "bl_owner_id", 262193, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_owner_id",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_bl_owner_id_get, GizmoGroup_bl_owner_id_length, GizmoGroup_bl_owner_id_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	static const EnumPropertyItem rna_GizmoGroup_bl_options_items[11] = {
		{1, "3D", 0, "3D", "Use in 3D viewport"	},
		{2, "SCALE", 0, "Scale", "Scale to respect zoom (otherwise zoom independent display size)"	},
		{4, "DEPTH_3D", 0, "Depth 3D", "Supports culled depth by other objects in the view"	},
		{8, "SELECT", 0, "Select", "Supports selection"	},
		{16, "PERSISTENT", 0, "Persistent", ""	},
		{32, "SHOW_MODAL_ALL", 0, "Show Modal All", "Show all while interacting, as well as this group when another is being interacted with"	},
		{64, "EXCLUDE_MODAL", 0, "Exclude Modal", "Show all except this group while interacting"	},
		{128, "TOOL_INIT", 0, "Tool Init", "Postpone running until tool operator run (when used with a tool)"	},
		{256, "TOOL_FALLBACK_KEYMAP", 0, "Use fallback tools keymap", "Add fallback tools keymap to this gizmo type"	},
		{1024, "VR_REDRAWS", 0, "VR Redraws", "The gizmos are made for use with virtual reality sessions and require special redraw management"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_GizmoGroup_bl_options_ = {
		{&rna_GizmoGroup_name, 	&rna_GizmoGroup_bl_owner_id,
		-1, "bl_options", 2097203, 0, 0, 0, 0, PropertyPathTemplateType(0), "Options",
		"Options for this operator type",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_bl_options_get, GizmoGroup_bl_options_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_GizmoGroup_bl_options_items, 10, 0
	};

	rna_GizmoGroup_name_ = {
		{&rna_GizmoGroup_gizmos, 	&rna_GizmoGroup_bl_options,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroup_name_get, GizmoGroup_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_GizmoGroup_gizmos_ = {
		{nullptr, 	&rna_GizmoGroup_name,
		-1, "gizmos", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Gizmos",
		"List of gizmos in the Gizmo Map",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_Gizmos},
		GizmoGroup_gizmos_begin, GizmoGroup_gizmos_next, GizmoGroup_gizmos_end, GizmoGroup_gizmos_get, nullptr, GizmoGroup_gizmos_lookup_int, nullptr, nullptr, RNA_Gizmo
	};

	StructRNA *srna = RNA_GizmoGroup;
	srna->cont.properties = {&rna_GizmoGroup_rna_properties, &rna_GizmoGroup_gizmos};
	srna->identifier = "GizmoGroup";
	srna->flag = 516;
	srna->name = "GizmoGroup";
	srna->description = "Storage of an operator being executed, or registered after execution";
	srna->translation_context = "Operator";
	srna->icon = 63;
	srna->nameproperty = &rna_GizmoGroup_bl_idname;
	srna->iteratorproperty = &rna_GizmoGroup_rna_properties;
	srna->refine = rna_GizmoGroup_refine;
	srna->reg = rna_GizmoGroup_register;
	srna->unreg = rna_GizmoGroup_unregister;
	srna->instance = rna_GizmoGroup_instance;
	{
	rna_GizmoGroup_poll_visible_ = {
		{&rna_GizmoGroup_poll_context, 	nullptr,
		-1, "visible", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_GizmoGroup_poll_context_ = {
		{nullptr, 	&rna_GizmoGroup_poll_visible,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GizmoGroup_poll_visible, &rna_GizmoGroup_poll_context};
		func->identifier = "poll";
		func->flag = 97;
		func->description = "Test if the gizmo group can be called or not";
		func->c_ret = &rna_GizmoGroup_poll_visible;
		rna_GizmoGroup_poll_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GizmoGroup_setup_keymap_keyconfig_ = {
		{&rna_GizmoGroup_setup_keymap_keymap, 	nullptr,
		-1, "keyconfig", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyConfig
	};
	rna_GizmoGroup_setup_keymap_keymap_ = {
		{nullptr, 	&rna_GizmoGroup_setup_keymap_keyconfig,
		-1, "keymap", 8650752, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_KeyMap
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GizmoGroup_setup_keymap_keyconfig, &rna_GizmoGroup_setup_keymap_keymap};
		func->identifier = "setup_keymap";
		func->flag = 97;
		func->description = "Initialize keymaps for this gizmo group, use fallback keymap when not present";
		func->c_ret = &rna_GizmoGroup_setup_keymap_keymap;
		rna_GizmoGroup_setup_keymap_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GizmoGroup_setup_context_ = {
		{nullptr, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GizmoGroup_setup_context, &rna_GizmoGroup_setup_context};
		func->identifier = "setup";
		func->flag = 32;
		func->description = "Create gizmos function for the gizmo group";
		rna_GizmoGroup_setup_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GizmoGroup_refresh_context_ = {
		{nullptr, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GizmoGroup_refresh_context, &rna_GizmoGroup_refresh_context};
		func->identifier = "refresh";
		func->flag = 96;
		func->description = "Refresh data (called on common state changes such as selection)";
		rna_GizmoGroup_refresh_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GizmoGroup_draw_prepare_context_ = {
		{nullptr, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GizmoGroup_draw_prepare_context, &rna_GizmoGroup_draw_prepare_context};
		func->identifier = "draw_prepare";
		func->flag = 96;
		func->description = "Run before each redraw";
		rna_GizmoGroup_draw_prepare_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_GizmoGroup_invoke_prepare_context_ = {
		{&rna_GizmoGroup_invoke_prepare_gizmo, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_GizmoGroup_invoke_prepare_gizmo_ = {
		{nullptr, 	&rna_GizmoGroup_invoke_prepare_context,
		-1, "gizmo", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Gizmo
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_GizmoGroup_invoke_prepare_context, &rna_GizmoGroup_invoke_prepare_gizmo};
		func->identifier = "invoke_prepare";
		func->flag = 96;
		func->description = "Run before invoke";
		rna_GizmoGroup_invoke_prepare_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Gizmo */
static CollectionPropertyRNA rna_Gizmo_rna_properties_;
PropertyRNA &rna_Gizmo_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Gizmo_rna_properties_);

static PointerPropertyRNA rna_Gizmo_rna_type_;
PropertyRNA &rna_Gizmo_rna_type = reinterpret_cast<PropertyRNA &>(rna_Gizmo_rna_type_);

static PointerPropertyRNA rna_Gizmo_properties_;
PropertyRNA &rna_Gizmo_properties = reinterpret_cast<PropertyRNA &>(rna_Gizmo_properties_);

static StringPropertyRNA rna_Gizmo_bl_idname_;
PropertyRNA &rna_Gizmo_bl_idname = reinterpret_cast<PropertyRNA &>(rna_Gizmo_bl_idname_);

static PointerPropertyRNA rna_Gizmo_group_;
PropertyRNA &rna_Gizmo_group = reinterpret_cast<PropertyRNA &>(rna_Gizmo_group_);

static FloatPropertyRNA rna_Gizmo_color_;
PropertyRNA &rna_Gizmo_color = reinterpret_cast<PropertyRNA &>(rna_Gizmo_color_);

static FloatPropertyRNA rna_Gizmo_alpha_;
PropertyRNA &rna_Gizmo_alpha = reinterpret_cast<PropertyRNA &>(rna_Gizmo_alpha_);

static FloatPropertyRNA rna_Gizmo_color_highlight_;
PropertyRNA &rna_Gizmo_color_highlight = reinterpret_cast<PropertyRNA &>(rna_Gizmo_color_highlight_);

static FloatPropertyRNA rna_Gizmo_alpha_highlight_;
PropertyRNA &rna_Gizmo_alpha_highlight = reinterpret_cast<PropertyRNA &>(rna_Gizmo_alpha_highlight_);

static FloatPropertyRNA rna_Gizmo_matrix_space_;
PropertyRNA &rna_Gizmo_matrix_space = reinterpret_cast<PropertyRNA &>(rna_Gizmo_matrix_space_);

static FloatPropertyRNA rna_Gizmo_matrix_basis_;
PropertyRNA &rna_Gizmo_matrix_basis = reinterpret_cast<PropertyRNA &>(rna_Gizmo_matrix_basis_);

static FloatPropertyRNA rna_Gizmo_matrix_offset_;
PropertyRNA &rna_Gizmo_matrix_offset = reinterpret_cast<PropertyRNA &>(rna_Gizmo_matrix_offset_);

static FloatPropertyRNA rna_Gizmo_matrix_world_;
PropertyRNA &rna_Gizmo_matrix_world = reinterpret_cast<PropertyRNA &>(rna_Gizmo_matrix_world_);

static FloatPropertyRNA rna_Gizmo_scale_basis_;
PropertyRNA &rna_Gizmo_scale_basis = reinterpret_cast<PropertyRNA &>(rna_Gizmo_scale_basis_);

static FloatPropertyRNA rna_Gizmo_line_width_;
PropertyRNA &rna_Gizmo_line_width = reinterpret_cast<PropertyRNA &>(rna_Gizmo_line_width_);

static FloatPropertyRNA rna_Gizmo_select_bias_;
PropertyRNA &rna_Gizmo_select_bias = reinterpret_cast<PropertyRNA &>(rna_Gizmo_select_bias_);

static BoolPropertyRNA rna_Gizmo_hide_;
PropertyRNA &rna_Gizmo_hide = reinterpret_cast<PropertyRNA &>(rna_Gizmo_hide_);

static BoolPropertyRNA rna_Gizmo_hide_select_;
PropertyRNA &rna_Gizmo_hide_select = reinterpret_cast<PropertyRNA &>(rna_Gizmo_hide_select_);

static BoolPropertyRNA rna_Gizmo_hide_keymap_;
PropertyRNA &rna_Gizmo_hide_keymap = reinterpret_cast<PropertyRNA &>(rna_Gizmo_hide_keymap_);

static BoolPropertyRNA rna_Gizmo_use_grab_cursor_;
PropertyRNA &rna_Gizmo_use_grab_cursor = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_grab_cursor_);

static BoolPropertyRNA rna_Gizmo_use_draw_hover_;
PropertyRNA &rna_Gizmo_use_draw_hover = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_draw_hover_);

static BoolPropertyRNA rna_Gizmo_use_draw_modal_;
PropertyRNA &rna_Gizmo_use_draw_modal = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_draw_modal_);

static BoolPropertyRNA rna_Gizmo_use_draw_value_;
PropertyRNA &rna_Gizmo_use_draw_value = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_draw_value_);

static BoolPropertyRNA rna_Gizmo_use_draw_offset_scale_;
PropertyRNA &rna_Gizmo_use_draw_offset_scale = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_draw_offset_scale_);

static BoolPropertyRNA rna_Gizmo_use_draw_scale_;
PropertyRNA &rna_Gizmo_use_draw_scale = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_draw_scale_);

static BoolPropertyRNA rna_Gizmo_use_select_background_;
PropertyRNA &rna_Gizmo_use_select_background = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_select_background_);

static BoolPropertyRNA rna_Gizmo_use_operator_tool_properties_;
PropertyRNA &rna_Gizmo_use_operator_tool_properties = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_operator_tool_properties_);

static BoolPropertyRNA rna_Gizmo_use_event_handle_all_;
PropertyRNA &rna_Gizmo_use_event_handle_all = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_event_handle_all_);

static BoolPropertyRNA rna_Gizmo_use_tooltip_;
PropertyRNA &rna_Gizmo_use_tooltip = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_tooltip_);

static BoolPropertyRNA rna_Gizmo_use_undo_;
PropertyRNA &rna_Gizmo_use_undo = reinterpret_cast<PropertyRNA &>(rna_Gizmo_use_undo_);

static BoolPropertyRNA rna_Gizmo_is_highlight_;
PropertyRNA &rna_Gizmo_is_highlight = reinterpret_cast<PropertyRNA &>(rna_Gizmo_is_highlight_);

static BoolPropertyRNA rna_Gizmo_is_modal_;
PropertyRNA &rna_Gizmo_is_modal = reinterpret_cast<PropertyRNA &>(rna_Gizmo_is_modal_);

static BoolPropertyRNA rna_Gizmo_select_;
PropertyRNA &rna_Gizmo_select = reinterpret_cast<PropertyRNA &>(rna_Gizmo_select_);

static PointerPropertyRNA rna_Gizmo_draw_context_;
PropertyRNA &rna_Gizmo_draw_context = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_context_);

FunctionRNA *rna_Gizmo_draw_func;
static PointerPropertyRNA rna_Gizmo_draw_select_context_;
PropertyRNA &rna_Gizmo_draw_select_context = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_select_context_);

static IntPropertyRNA rna_Gizmo_draw_select_select_id_;
PropertyRNA &rna_Gizmo_draw_select_select_id = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_select_select_id_);

FunctionRNA *rna_Gizmo_draw_select_func;
static PointerPropertyRNA rna_Gizmo_test_select_context_;
PropertyRNA &rna_Gizmo_test_select_context = reinterpret_cast<PropertyRNA &>(rna_Gizmo_test_select_context_);

static IntPropertyRNA rna_Gizmo_test_select_location_;
PropertyRNA &rna_Gizmo_test_select_location = reinterpret_cast<PropertyRNA &>(rna_Gizmo_test_select_location_);

static IntPropertyRNA rna_Gizmo_test_select_intersect_id_;
PropertyRNA &rna_Gizmo_test_select_intersect_id = reinterpret_cast<PropertyRNA &>(rna_Gizmo_test_select_intersect_id_);

FunctionRNA *rna_Gizmo_test_select_func;
static PointerPropertyRNA rna_Gizmo_modal_context_;
PropertyRNA &rna_Gizmo_modal_context = reinterpret_cast<PropertyRNA &>(rna_Gizmo_modal_context_);

static PointerPropertyRNA rna_Gizmo_modal_event_;
PropertyRNA &rna_Gizmo_modal_event = reinterpret_cast<PropertyRNA &>(rna_Gizmo_modal_event_);

static EnumPropertyRNA rna_Gizmo_modal_tweak_;
PropertyRNA &rna_Gizmo_modal_tweak = reinterpret_cast<PropertyRNA &>(rna_Gizmo_modal_tweak_);

static EnumPropertyRNA rna_Gizmo_modal_result_;
PropertyRNA &rna_Gizmo_modal_result = reinterpret_cast<PropertyRNA &>(rna_Gizmo_modal_result_);

FunctionRNA *rna_Gizmo_modal_func;
FunctionRNA *rna_Gizmo_setup_func;
static PointerPropertyRNA rna_Gizmo_invoke_context_;
PropertyRNA &rna_Gizmo_invoke_context = reinterpret_cast<PropertyRNA &>(rna_Gizmo_invoke_context_);

static PointerPropertyRNA rna_Gizmo_invoke_event_;
PropertyRNA &rna_Gizmo_invoke_event = reinterpret_cast<PropertyRNA &>(rna_Gizmo_invoke_event_);

static EnumPropertyRNA rna_Gizmo_invoke_result_;
PropertyRNA &rna_Gizmo_invoke_result = reinterpret_cast<PropertyRNA &>(rna_Gizmo_invoke_result_);

FunctionRNA *rna_Gizmo_invoke_func;
static PointerPropertyRNA rna_Gizmo_exit_context_;
PropertyRNA &rna_Gizmo_exit_context = reinterpret_cast<PropertyRNA &>(rna_Gizmo_exit_context_);

static BoolPropertyRNA rna_Gizmo_exit_cancel_;
PropertyRNA &rna_Gizmo_exit_cancel = reinterpret_cast<PropertyRNA &>(rna_Gizmo_exit_cancel_);

FunctionRNA *rna_Gizmo_exit_func;
FunctionRNA *rna_Gizmo_select_refresh_func;
static FloatPropertyRNA rna_Gizmo_draw_preset_box_matrix_;
PropertyRNA &rna_Gizmo_draw_preset_box_matrix = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_preset_box_matrix_);

static IntPropertyRNA rna_Gizmo_draw_preset_box_select_id_;
PropertyRNA &rna_Gizmo_draw_preset_box_select_id = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_preset_box_select_id_);

FunctionRNA *rna_Gizmo_draw_preset_box_func;
static FloatPropertyRNA rna_Gizmo_draw_preset_arrow_matrix_;
PropertyRNA &rna_Gizmo_draw_preset_arrow_matrix = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_preset_arrow_matrix_);

static EnumPropertyRNA rna_Gizmo_draw_preset_arrow_axis_;
PropertyRNA &rna_Gizmo_draw_preset_arrow_axis = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_preset_arrow_axis_);

static IntPropertyRNA rna_Gizmo_draw_preset_arrow_select_id_;
PropertyRNA &rna_Gizmo_draw_preset_arrow_select_id = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_preset_arrow_select_id_);

FunctionRNA *rna_Gizmo_draw_preset_arrow_func;
static FloatPropertyRNA rna_Gizmo_draw_preset_circle_matrix_;
PropertyRNA &rna_Gizmo_draw_preset_circle_matrix = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_preset_circle_matrix_);

static EnumPropertyRNA rna_Gizmo_draw_preset_circle_axis_;
PropertyRNA &rna_Gizmo_draw_preset_circle_axis = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_preset_circle_axis_);

static IntPropertyRNA rna_Gizmo_draw_preset_circle_select_id_;
PropertyRNA &rna_Gizmo_draw_preset_circle_select_id = reinterpret_cast<PropertyRNA &>(rna_Gizmo_draw_preset_circle_select_id_);

FunctionRNA *rna_Gizmo_draw_preset_circle_func;
static StringPropertyRNA rna_Gizmo_target_set_prop_target_;
PropertyRNA &rna_Gizmo_target_set_prop_target = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_set_prop_target_);

static PointerPropertyRNA rna_Gizmo_target_set_prop_data_;
PropertyRNA &rna_Gizmo_target_set_prop_data = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_set_prop_data_);

static StringPropertyRNA rna_Gizmo_target_set_prop_property_;
PropertyRNA &rna_Gizmo_target_set_prop_property = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_set_prop_property_);

static IntPropertyRNA rna_Gizmo_target_set_prop_index_;
PropertyRNA &rna_Gizmo_target_set_prop_index = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_set_prop_index_);

FunctionRNA *rna_Gizmo_target_set_prop_func;
static StringPropertyRNA rna_Gizmo_target_set_operator_operator_;
PropertyRNA &rna_Gizmo_target_set_operator_operator = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_set_operator_operator_);

static IntPropertyRNA rna_Gizmo_target_set_operator_index_;
PropertyRNA &rna_Gizmo_target_set_operator_index = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_set_operator_index_);

static PointerPropertyRNA rna_Gizmo_target_set_operator_properties_;
PropertyRNA &rna_Gizmo_target_set_operator_properties = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_set_operator_properties_);

FunctionRNA *rna_Gizmo_target_set_operator_func;
static StringPropertyRNA rna_Gizmo_target_is_valid_property_;
PropertyRNA &rna_Gizmo_target_is_valid_property = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_is_valid_property_);

static BoolPropertyRNA rna_Gizmo_target_is_valid_result_;
PropertyRNA &rna_Gizmo_target_is_valid_result = reinterpret_cast<PropertyRNA &>(rna_Gizmo_target_is_valid_result_);

FunctionRNA *rna_Gizmo_target_is_valid_func;
StructRNA *RNA_Gizmo;
void register_struct_Gizmo(BlenderRNA &brna)
{
	rna_Gizmo_rna_properties_ = {
		{&rna_Gizmo_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_rna_properties_begin, Gizmo_rna_properties_next, Gizmo_rna_properties_end, Gizmo_rna_properties_get, nullptr, nullptr, Gizmo_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Gizmo_rna_type_ = {
		{&rna_Gizmo_properties, 	&rna_Gizmo_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Gizmo_properties_ = {
		{&rna_Gizmo_bl_idname, 	&rna_Gizmo_rna_type,
		-1, "properties", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Properties",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_properties_get, nullptr, nullptr, nullptr,RNA_GizmoProperties
	};

	rna_Gizmo_bl_idname_ = {
		{&rna_Gizmo_group, 	&rna_Gizmo_properties,
		-1, "bl_idname", 262161, 0, 0, 0, 0, PropertyPathTemplateType(0), "bl_idname",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_bl_idname_get, Gizmo_bl_idname_length, Gizmo_bl_idname_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_Gizmo_group_ = {
		{&rna_Gizmo_color, 	&rna_Gizmo_bl_idname,
		-1, "group", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Gizmo group this gizmo is a member of",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_group_get, nullptr, nullptr, nullptr,RNA_GizmoGroup
	};

	static float rna_Gizmo_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Gizmo_color_ = {
		{&rna_Gizmo_alpha, 	&rna_Gizmo_group,
		-1, "color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "color",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Gizmo_color_get, Gizmo_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_color_default
	};

	rna_Gizmo_alpha_ = {
		{&rna_Gizmo_color_highlight, 	&rna_Gizmo_color,
		-1, "alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alpha",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_alpha_get, Gizmo_alpha_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_Gizmo_color_highlight_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Gizmo_color_highlight_ = {
		{&rna_Gizmo_alpha_highlight, 	&rna_Gizmo_alpha,
		-1, "color_highlight", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "color_highlight",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Gizmo_color_highlight_get, Gizmo_color_highlight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_color_highlight_default
	};

	rna_Gizmo_alpha_highlight_ = {
		{&rna_Gizmo_matrix_space, 	&rna_Gizmo_color_highlight,
		-1, "alpha_highlight", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alpha",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_alpha_highlight_get, Gizmo_alpha_highlight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_Gizmo_matrix_space_default[16] = {
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
	rna_Gizmo_matrix_space_ = {
		{&rna_Gizmo_matrix_basis, 	&rna_Gizmo_alpha_highlight,
		-1, "matrix_space", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Space Matrix",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Gizmo_matrix_space_get, Gizmo_matrix_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_matrix_space_default
	};

	static float rna_Gizmo_matrix_basis_default[16] = {
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
	rna_Gizmo_matrix_basis_ = {
		{&rna_Gizmo_matrix_offset, 	&rna_Gizmo_matrix_space,
		-1, "matrix_basis", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Basis Matrix",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Gizmo_matrix_basis_get, Gizmo_matrix_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_matrix_basis_default
	};

	static float rna_Gizmo_matrix_offset_default[16] = {
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
	rna_Gizmo_matrix_offset_ = {
		{&rna_Gizmo_matrix_world, 	&rna_Gizmo_matrix_basis,
		-1, "matrix_offset", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Offset Matrix",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Gizmo_matrix_offset_get, Gizmo_matrix_offset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_matrix_offset_default
	};

	static float rna_Gizmo_matrix_world_default[16] = {
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
	rna_Gizmo_matrix_world_ = {
		{&rna_Gizmo_scale_basis, 	&rna_Gizmo_matrix_offset,
		-1, "matrix_world", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Final World Matrix",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Gizmo_matrix_world_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_matrix_world_default
	};

	rna_Gizmo_scale_basis_ = {
		{&rna_Gizmo_line_width, 	&rna_Gizmo_matrix_world,
		-1, "scale_basis", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale Basis",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_scale_basis_get, Gizmo_scale_basis_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Gizmo_line_width_ = {
		{&rna_Gizmo_select_bias, 	&rna_Gizmo_scale_basis,
		-1, "line_width", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Line Width",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_PIXEL) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_line_width_get, Gizmo_line_width_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Gizmo_select_bias_ = {
		{&rna_Gizmo_hide, 	&rna_Gizmo_line_width,
		-1, "select_bias", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Bias",
		"Depth bias used for selection",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_select_bias_get, Gizmo_select_bias_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Gizmo_hide_ = {
		{&rna_Gizmo_hide_select, 	&rna_Gizmo_select_bias,
		-1, "hide", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_hide_get, Gizmo_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_hide_select_ = {
		{&rna_Gizmo_hide_keymap, 	&rna_Gizmo_hide,
		-1, "hide_select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide Select",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_hide_select_get, Gizmo_hide_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_hide_keymap_ = {
		{&rna_Gizmo_use_grab_cursor, 	&rna_Gizmo_hide_select,
		-1, "hide_keymap", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide Keymap",
		"Ignore the key-map for this gizmo",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_hide_keymap_get, Gizmo_hide_keymap_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_grab_cursor_ = {
		{&rna_Gizmo_use_draw_hover, 	&rna_Gizmo_hide_keymap,
		-1, "use_grab_cursor", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grab Cursor",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_grab_cursor_get, Gizmo_use_grab_cursor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_draw_hover_ = {
		{&rna_Gizmo_use_draw_modal, 	&rna_Gizmo_use_grab_cursor,
		-1, "use_draw_hover", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Hover",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_draw_hover_get, Gizmo_use_draw_hover_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_draw_modal_ = {
		{&rna_Gizmo_use_draw_value, 	&rna_Gizmo_use_draw_hover,
		-1, "use_draw_modal", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Active",
		"Show while dragging",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_draw_modal_get, Gizmo_use_draw_modal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_draw_value_ = {
		{&rna_Gizmo_use_draw_offset_scale, 	&rna_Gizmo_use_draw_modal,
		-1, "use_draw_value", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Value",
		"Show an indicator for the current value while dragging",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_draw_value_get, Gizmo_use_draw_value_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_draw_offset_scale_ = {
		{&rna_Gizmo_use_draw_scale, 	&rna_Gizmo_use_draw_value,
		-1, "use_draw_offset_scale", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale Offset",
		"Scale the offset matrix (use to apply screen-space offset)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_draw_offset_scale_get, Gizmo_use_draw_offset_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_draw_scale_ = {
		{&rna_Gizmo_use_select_background, 	&rna_Gizmo_use_draw_offset_scale,
		-1, "use_draw_scale", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scale",
		"Use scale when calculating the matrix",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_draw_scale_get, Gizmo_use_draw_scale_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Gizmo_use_select_background_ = {
		{&rna_Gizmo_use_operator_tool_properties, 	&rna_Gizmo_use_draw_scale,
		-1, "use_select_background", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select Background",
		"Don\'t write into the depth buffer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_select_background_get, Gizmo_use_select_background_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_operator_tool_properties_ = {
		{&rna_Gizmo_use_event_handle_all, 	&rna_Gizmo_use_select_background,
		-1, "use_operator_tool_properties", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tool Property Init",
		"Merge active tool properties on activation (does not overwrite existing)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_operator_tool_properties_get, Gizmo_use_operator_tool_properties_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_event_handle_all_ = {
		{&rna_Gizmo_use_tooltip, 	&rna_Gizmo_use_operator_tool_properties,
		-1, "use_event_handle_all", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Handle All Events",
		"When highlighted, do not pass events through to be handled by other keymaps",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Gizmo_update_redraw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_event_handle_all_get, Gizmo_use_event_handle_all_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_use_tooltip_ = {
		{&rna_Gizmo_use_undo, 	&rna_Gizmo_use_event_handle_all,
		-1, "use_tooltip", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Tooltip",
		"Use tooltips when hovering over this gizmo",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_tooltip_get, Gizmo_use_tooltip_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Gizmo_use_undo_ = {
		{&rna_Gizmo_is_highlight, 	&rna_Gizmo_use_tooltip,
		-1, "use_undo", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Undo",
		"Push an undo step after each use of the gizmo",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_use_undo_get, Gizmo_use_undo_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_is_highlight_ = {
		{&rna_Gizmo_is_modal, 	&rna_Gizmo_use_undo,
		-1, "is_highlight", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Highlight",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_is_highlight_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_is_modal_ = {
		{&rna_Gizmo_select, 	&rna_Gizmo_is_highlight,
		-1, "is_modal", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Highlight",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_is_modal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Gizmo_select_ = {
		{nullptr, 	&rna_Gizmo_is_modal,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmo_select_get, Gizmo_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Gizmo;
	srna->cont.properties = {&rna_Gizmo_rna_properties, &rna_Gizmo_select};
	srna->identifier = "Gizmo";
	srna->flag = 516;
	srna->name = "Gizmo";
	srna->description = "Collection of gizmos";
	srna->translation_context = "Operator";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Gizmo_rna_properties;
	srna->refine = rna_Gizmo_refine;
	srna->reg = rna_Gizmo_register;
	srna->unreg = rna_Gizmo_unregister;
	srna->instance = rna_Gizmo_instance;
	{
	rna_Gizmo_draw_context_ = {
		{nullptr, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_draw_context, &rna_Gizmo_draw_context};
		func->identifier = "draw";
		func->flag = 32;
		func->description = "";
		rna_Gizmo_draw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmo_draw_select_context_ = {
		{&rna_Gizmo_draw_select_select_id, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Gizmo_draw_select_select_id_ = {
		{nullptr, 	&rna_Gizmo_draw_select_context,
		-1, "select_id", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_draw_select_context, &rna_Gizmo_draw_select_select_id};
		func->identifier = "draw_select";
		func->flag = 96;
		func->description = "";
		rna_Gizmo_draw_select_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmo_test_select_context_ = {
		{&rna_Gizmo_test_select_location, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	static int rna_Gizmo_test_select_location_default[2] = {
		0,
		0
	};
	rna_Gizmo_test_select_location_ = {
		{&rna_Gizmo_test_select_intersect_id, 	&rna_Gizmo_test_select_context,
		-1, "location", 262147, 0, 1, 0, 0, PropertyPathTemplateType(0), "Location",
		"Region coordinates",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, INT_MIN, INT_MAX, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_Gizmo_test_select_location_default
	};
	rna_Gizmo_test_select_intersect_id_ = {
		{nullptr, 	&rna_Gizmo_test_select_location,
		-1, "intersect_id", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Use -1 to skip this gizmo",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_test_select_context, &rna_Gizmo_test_select_intersect_id};
		func->identifier = "test_select";
		func->flag = 96;
		func->description = "";
		func->c_ret = &rna_Gizmo_test_select_intersect_id;
		rna_Gizmo_test_select_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmo_modal_context_ = {
		{&rna_Gizmo_modal_event, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Gizmo_modal_event_ = {
		{&rna_Gizmo_modal_tweak, 	&rna_Gizmo_modal_context,
		-1, "event", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
	static const EnumPropertyItem rna_Gizmo_modal_tweak_items[3] = {
		{1, "PRECISE", 0, "Precise", ""	},
		{2, "SNAP", 0, "Snap", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Gizmo_modal_tweak_ = {
		{&rna_Gizmo_modal_result, 	&rna_Gizmo_modal_event,
		-1, "tweak", 2097155, 0, 1, 0, 0, PropertyPathTemplateType(0), "Tweak",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Gizmo_modal_tweak_items, 2, 0
	};
	rna_Gizmo_modal_result_ = {
		{nullptr, 	&rna_Gizmo_modal_tweak,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_modal_context, &rna_Gizmo_modal_result};
		func->identifier = "modal";
		func->flag = 4192;
		func->description = "";
		func->c_ret = &rna_Gizmo_modal_result;
		rna_Gizmo_modal_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "setup";
		func->flag = 4192;
		func->description = "";
		rna_Gizmo_setup_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmo_invoke_context_ = {
		{&rna_Gizmo_invoke_event, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Gizmo_invoke_event_ = {
		{&rna_Gizmo_invoke_result, 	&rna_Gizmo_invoke_context,
		-1, "event", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Event
	};
	rna_Gizmo_invoke_result_ = {
		{nullptr, 	&rna_Gizmo_invoke_event,
		-1, "result", 2097155, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_operator_return_items, 5, 4
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_invoke_context, &rna_Gizmo_invoke_result};
		func->identifier = "invoke";
		func->flag = 4192;
		func->description = "";
		func->c_ret = &rna_Gizmo_invoke_result;
		rna_Gizmo_invoke_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmo_exit_context_ = {
		{&rna_Gizmo_exit_cancel, 	nullptr,
		-1, "context", 8650752, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Context
	};
	rna_Gizmo_exit_cancel_ = {
		{nullptr, 	&rna_Gizmo_exit_context,
		-1, "cancel", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Cancel, otherwise confirm",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_exit_context, &rna_Gizmo_exit_cancel};
		func->identifier = "exit";
		func->flag = 4192;
		func->description = "";
		rna_Gizmo_exit_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "select_refresh";
		func->flag = 4192;
		func->description = "";
		rna_Gizmo_select_refresh_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Gizmo_draw_preset_box_matrix_default[16] = {
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
	rna_Gizmo_draw_preset_box_matrix_ = {
		{&rna_Gizmo_draw_preset_box_select_id, 	nullptr,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The matrix to transform",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_draw_preset_box_matrix_default
	};
	rna_Gizmo_draw_preset_box_select_id_ = {
		{nullptr, 	&rna_Gizmo_draw_preset_box_matrix,
		-1, "select_id", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID to use when gizmo is selectable. Use -1 when not selecting.",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_draw_preset_box_matrix, &rna_Gizmo_draw_preset_box_select_id};
		func->identifier = "draw_preset_box";
		func->description = "Draw a box";
		func->call = Gizmo_draw_preset_box_call;
		rna_Gizmo_draw_preset_box_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Gizmo_draw_preset_arrow_matrix_default[16] = {
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
	rna_Gizmo_draw_preset_arrow_matrix_ = {
		{&rna_Gizmo_draw_preset_arrow_axis, 	nullptr,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The matrix to transform",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_draw_preset_arrow_matrix_default
	};
	rna_Gizmo_draw_preset_arrow_axis_ = {
		{&rna_Gizmo_draw_preset_arrow_select_id, 	&rna_Gizmo_draw_preset_arrow_matrix,
		-1, "axis", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Arrow Orientation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 2
	};
	rna_Gizmo_draw_preset_arrow_select_id_ = {
		{nullptr, 	&rna_Gizmo_draw_preset_arrow_axis,
		-1, "select_id", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID to use when gizmo is selectable. Use -1 when not selecting.",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_draw_preset_arrow_matrix, &rna_Gizmo_draw_preset_arrow_select_id};
		func->identifier = "draw_preset_arrow";
		func->description = "Draw a box";
		func->call = Gizmo_draw_preset_arrow_call;
		rna_Gizmo_draw_preset_arrow_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Gizmo_draw_preset_circle_matrix_default[16] = {
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
	rna_Gizmo_draw_preset_circle_matrix_ = {
		{&rna_Gizmo_draw_preset_circle_axis, 	nullptr,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"The matrix to transform",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Gizmo_draw_preset_circle_matrix_default
	};
	rna_Gizmo_draw_preset_circle_axis_ = {
		{&rna_Gizmo_draw_preset_circle_select_id, 	&rna_Gizmo_draw_preset_circle_matrix,
		-1, "axis", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Arrow Orientation",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_axis_items, 6, 2
	};
	rna_Gizmo_draw_preset_circle_select_id_ = {
		{nullptr, 	&rna_Gizmo_draw_preset_circle_axis,
		-1, "select_id", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID to use when gizmo is selectable. Use -1 when not selecting.",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_draw_preset_circle_matrix, &rna_Gizmo_draw_preset_circle_select_id};
		func->identifier = "draw_preset_circle";
		func->description = "Draw a box";
		func->call = Gizmo_draw_preset_circle_call;
		rna_Gizmo_draw_preset_circle_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmo_target_set_prop_target_ = {
		{&rna_Gizmo_target_set_prop_data, 	nullptr,
		-1, "target", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Target property",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Gizmo_target_set_prop_data_ = {
		{&rna_Gizmo_target_set_prop_property, 	&rna_Gizmo_target_set_prop_target,
		-1, "data", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Data from which to take property",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AnyType
	};
	rna_Gizmo_target_set_prop_property_ = {
		{&rna_Gizmo_target_set_prop_index, 	&rna_Gizmo_target_set_prop_data,
		-1, "property", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Identifier of property in data",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Gizmo_target_set_prop_index_ = {
		{nullptr, 	&rna_Gizmo_target_set_prop_property,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -1, INT_MAX, -1, INT_MAX, 1, nullptr, nullptr, -1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_target_set_prop_target, &rna_Gizmo_target_set_prop_index};
		func->identifier = "target_set_prop";
		func->flag = 16;
		func->description = "";
		func->call = Gizmo_target_set_prop_call;
		rna_Gizmo_target_set_prop_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmo_target_set_operator_operator_ = {
		{&rna_Gizmo_target_set_operator_index, 	nullptr,
		-1, "operator", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Target operator",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Gizmo_target_set_operator_index_ = {
		{&rna_Gizmo_target_set_operator_properties, 	&rna_Gizmo_target_set_operator_operator,
		-1, "index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Part index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 255, 0, 255, 1, nullptr, nullptr, 0, nullptr
	};
	rna_Gizmo_target_set_operator_properties_ = {
		{nullptr, 	&rna_Gizmo_target_set_operator_index,
		-1, "properties", 8388608, 0, 7, 0, 0, PropertyPathTemplateType(0), "",
		"Operator properties to fill in",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_OperatorProperties
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_target_set_operator_operator, &rna_Gizmo_target_set_operator_properties};
		func->identifier = "target_set_operator";
		func->flag = 16;
		func->description = "Operator to run when activating the gizmo (overrides property targets)";
		func->call = Gizmo_target_set_operator_call;
		func->c_ret = &rna_Gizmo_target_set_operator_properties;
		rna_Gizmo_target_set_operator_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmo_target_is_valid_property_ = {
		{&rna_Gizmo_target_is_valid_result, 	nullptr,
		-1, "property", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Property identifier",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_Gizmo_target_is_valid_result_ = {
		{nullptr, 	&rna_Gizmo_target_is_valid_property,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmo_target_is_valid_property, &rna_Gizmo_target_is_valid_result};
		func->identifier = "target_is_valid";
		func->flag = 16;
		func->description = "";
		func->call = Gizmo_target_is_valid_call;
		func->c_ret = &rna_Gizmo_target_is_valid_result;
		rna_Gizmo_target_is_valid_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Gizmo Properties */
static CollectionPropertyRNA rna_GizmoProperties_rna_properties_;
PropertyRNA &rna_GizmoProperties_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GizmoProperties_rna_properties_);

static PointerPropertyRNA rna_GizmoProperties_rna_type_;
PropertyRNA &rna_GizmoProperties_rna_type = reinterpret_cast<PropertyRNA &>(rna_GizmoProperties_rna_type_);

static BoolPropertyRNA rna_GizmoProperties_bl_system_properties_get_do_create_;
PropertyRNA &rna_GizmoProperties_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_GizmoProperties_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_GizmoProperties_bl_system_properties_get_system_properties_;
PropertyRNA &rna_GizmoProperties_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_GizmoProperties_bl_system_properties_get_system_properties_);

FunctionRNA *rna_GizmoProperties_bl_system_properties_get_func;
StructRNA *RNA_GizmoProperties;
void register_struct_GizmoProperties(BlenderRNA &brna)
{
	rna_GizmoProperties_rna_properties_ = {
		{&rna_GizmoProperties_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoProperties_rna_properties_begin, GizmoProperties_rna_properties_next, GizmoProperties_rna_properties_end, GizmoProperties_rna_properties_get, nullptr, nullptr, GizmoProperties_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GizmoProperties_rna_type_ = {
		{nullptr, 	&rna_GizmoProperties_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoProperties_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_GizmoProperties;
	srna->cont.properties = {&rna_GizmoProperties_rna_properties, &rna_GizmoProperties_rna_type};
	srna->identifier = "GizmoProperties";
	srna->flag = 644;
	srna->name = "Gizmo Properties";
	srna->description = "Input properties of a Gizmo";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GizmoProperties_rna_properties;
	srna->refine = rna_GizmoProperties_refine;
	srna->system_idproperties = rna_GizmoProperties_idprops;
	{
	rna_GizmoProperties_bl_system_properties_get_do_create_ = {
		{&rna_GizmoProperties_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_GizmoProperties_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_GizmoProperties_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_GizmoProperties_bl_system_properties_get_do_create, &rna_GizmoProperties_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = GizmoProperties_bl_system_properties_get_call;
		func->c_ret = &rna_GizmoProperties_bl_system_properties_get_system_properties;
		rna_GizmoProperties_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Gizmos */
static CollectionPropertyRNA rna_Gizmos_rna_properties_;
PropertyRNA &rna_Gizmos_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Gizmos_rna_properties_);

static PointerPropertyRNA rna_Gizmos_rna_type_;
PropertyRNA &rna_Gizmos_rna_type = reinterpret_cast<PropertyRNA &>(rna_Gizmos_rna_type_);

static StringPropertyRNA rna_Gizmos_new_type_;
PropertyRNA &rna_Gizmos_new_type = reinterpret_cast<PropertyRNA &>(rna_Gizmos_new_type_);

static PointerPropertyRNA rna_Gizmos_new_gizmo_;
PropertyRNA &rna_Gizmos_new_gizmo = reinterpret_cast<PropertyRNA &>(rna_Gizmos_new_gizmo_);

FunctionRNA *rna_Gizmos_new_func;
static PointerPropertyRNA rna_Gizmos_remove_gizmo_;
PropertyRNA &rna_Gizmos_remove_gizmo = reinterpret_cast<PropertyRNA &>(rna_Gizmos_remove_gizmo_);

FunctionRNA *rna_Gizmos_remove_func;
FunctionRNA *rna_Gizmos_clear_func;
StructRNA *RNA_Gizmos;
void register_struct_Gizmos(BlenderRNA &brna)
{
	rna_Gizmos_rna_properties_ = {
		{&rna_Gizmos_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmos_rna_properties_begin, Gizmos_rna_properties_next, Gizmos_rna_properties_end, Gizmos_rna_properties_get, nullptr, nullptr, Gizmos_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Gizmos_rna_type_ = {
		{nullptr, 	&rna_Gizmos_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Gizmos_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_Gizmos;
	srna->cont.properties = {&rna_Gizmos_rna_properties, &rna_Gizmos_rna_type};
	srna->identifier = "Gizmos";
	srna->flag = 516;
	srna->name = "Gizmos";
	srna->description = "Collection of gizmos";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Gizmos_rna_properties;
	{
	rna_Gizmos_new_type_ = {
		{&rna_Gizmos_new_gizmo, 	nullptr,
		-1, "type", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Gizmo identifier",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Type"
	};
	rna_Gizmos_new_gizmo_ = {
		{nullptr, 	&rna_Gizmos_new_type,
		-1, "gizmo", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New gizmo",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Gizmo
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmos_new_type, &rna_Gizmos_new_gizmo};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add gizmo";
		func->call = Gizmos_new_call;
		func->c_ret = &rna_Gizmos_new_gizmo;
		rna_Gizmos_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Gizmos_remove_gizmo_ = {
		{nullptr, 	nullptr,
		-1, "gizmo", 262144, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New gizmo",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Gizmo
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Gizmos_remove_gizmo, &rna_Gizmos_remove_gizmo};
		func->identifier = "remove";
		func->flag = 8;
		func->description = "Delete gizmo";
		func->call = Gizmos_remove_call;
		rna_Gizmos_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear";
		func->flag = 8;
		func->description = "Delete all gizmos";
		func->call = Gizmos_clear_call;
		rna_Gizmos_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Gizmo Group Properties */
static CollectionPropertyRNA rna_GizmoGroupProperties_rna_properties_;
PropertyRNA &rna_GizmoGroupProperties_rna_properties = reinterpret_cast<PropertyRNA &>(rna_GizmoGroupProperties_rna_properties_);

static PointerPropertyRNA rna_GizmoGroupProperties_rna_type_;
PropertyRNA &rna_GizmoGroupProperties_rna_type = reinterpret_cast<PropertyRNA &>(rna_GizmoGroupProperties_rna_type_);

static BoolPropertyRNA rna_GizmoGroupProperties_bl_system_properties_get_do_create_;
PropertyRNA &rna_GizmoGroupProperties_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_GizmoGroupProperties_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_GizmoGroupProperties_bl_system_properties_get_system_properties_;
PropertyRNA &rna_GizmoGroupProperties_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_GizmoGroupProperties_bl_system_properties_get_system_properties_);

FunctionRNA *rna_GizmoGroupProperties_bl_system_properties_get_func;
StructRNA *RNA_GizmoGroupProperties;
void register_struct_GizmoGroupProperties(BlenderRNA &brna)
{
	rna_GizmoGroupProperties_rna_properties_ = {
		{&rna_GizmoGroupProperties_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroupProperties_rna_properties_begin, GizmoGroupProperties_rna_properties_next, GizmoGroupProperties_rna_properties_end, GizmoGroupProperties_rna_properties_get, nullptr, nullptr, GizmoGroupProperties_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_GizmoGroupProperties_rna_type_ = {
		{nullptr, 	&rna_GizmoGroupProperties_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		GizmoGroupProperties_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_GizmoGroupProperties;
	srna->cont.properties = {&rna_GizmoGroupProperties_rna_properties, &rna_GizmoGroupProperties_rna_type};
	srna->identifier = "GizmoGroupProperties";
	srna->flag = 644;
	srna->name = "Gizmo Group Properties";
	srna->description = "Input properties of a Gizmo Group";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_GizmoGroupProperties_rna_properties;
	srna->refine = rna_GizmoGroupProperties_refine;
	srna->system_idproperties = rna_GizmoGroupProperties_idprops;
	{
	rna_GizmoGroupProperties_bl_system_properties_get_do_create_ = {
		{&rna_GizmoGroupProperties_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_GizmoGroupProperties_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_GizmoGroupProperties_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_GizmoGroupProperties_bl_system_properties_get_do_create, &rna_GizmoGroupProperties_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = GizmoGroupProperties_bl_system_properties_get_call;
		func->c_ret = &rna_GizmoGroupProperties_bl_system_properties_get_system_properties;
		rna_GizmoGroupProperties_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
