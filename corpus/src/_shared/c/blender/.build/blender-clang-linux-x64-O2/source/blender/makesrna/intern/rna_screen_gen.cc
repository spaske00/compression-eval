
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

#include "rna_screen.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

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

extern PropertyRNA &rna_Screen_areas;
extern PropertyRNA &rna_Screen_is_animation_playing;
extern PropertyRNA &rna_Screen_is_scrubbing;
extern PropertyRNA &rna_Screen_is_temporary;
extern PropertyRNA &rna_Screen_show_fullscreen;
extern PropertyRNA &rna_Screen_show_statusbar;
extern PropertyRNA &rna_Screen_use_play_top_left_3d_editor;
extern PropertyRNA &rna_Screen_use_play_3d_editors;
extern PropertyRNA &rna_Screen_use_follow;
extern PropertyRNA &rna_Screen_use_play_animation_editors;
extern PropertyRNA &rna_Screen_use_play_properties_editors;
extern PropertyRNA &rna_Screen_use_play_image_editors;
extern PropertyRNA &rna_Screen_use_play_sequence_editors;
extern PropertyRNA &rna_Screen_use_play_node_editors;
extern PropertyRNA &rna_Screen_use_play_clip_editors;
extern PropertyRNA &rna_Screen_use_play_spreadsheet_editors;

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


extern FunctionRNA *rna_Screen_statusbar_info_func;
extern PropertyRNA &rna_Screen_statusbar_info_statusbar_info;



extern PropertyRNA &rna_Area_rna_properties;
extern PropertyRNA &rna_Area_rna_type;
extern PropertyRNA &rna_Area_spaces;
extern PropertyRNA &rna_Area_regions;
extern PropertyRNA &rna_Area_show_menus;
extern PropertyRNA &rna_Area_type;
extern PropertyRNA &rna_Area_ui_type;
extern PropertyRNA &rna_Area_x;
extern PropertyRNA &rna_Area_y;
extern PropertyRNA &rna_Area_width;
extern PropertyRNA &rna_Area_height;

extern FunctionRNA *rna_Area_tag_redraw_func;
extern FunctionRNA *rna_Area_header_text_set_func;
extern PropertyRNA &rna_Area_header_text_set_text;



extern PropertyRNA &rna_AreaSpaces_rna_properties;
extern PropertyRNA &rna_AreaSpaces_rna_type;
extern PropertyRNA &rna_AreaSpaces_active;


extern PropertyRNA &rna_Region_rna_properties;
extern PropertyRNA &rna_Region_rna_type;
extern PropertyRNA &rna_Region_type;
extern PropertyRNA &rna_Region_x;
extern PropertyRNA &rna_Region_y;
extern PropertyRNA &rna_Region_width;
extern PropertyRNA &rna_Region_height;
extern PropertyRNA &rna_Region_view2d;
extern PropertyRNA &rna_Region_alignment;
extern PropertyRNA &rna_Region_data;
extern PropertyRNA &rna_Region_active_panel_category;

extern FunctionRNA *rna_Region_tag_redraw_func;
extern FunctionRNA *rna_Region_tag_refresh_ui_func;


extern PropertyRNA &rna_View2D_rna_properties;
extern PropertyRNA &rna_View2D_rna_type;

extern FunctionRNA *rna_View2D_region_to_view_func;
extern PropertyRNA &rna_View2D_region_to_view_x;
extern PropertyRNA &rna_View2D_region_to_view_y;
extern PropertyRNA &rna_View2D_region_to_view_result;

extern FunctionRNA *rna_View2D_view_to_region_func;
extern PropertyRNA &rna_View2D_view_to_region_x;
extern PropertyRNA &rna_View2D_view_to_region_y;
extern PropertyRNA &rna_View2D_view_to_region_clip;
extern PropertyRNA &rna_View2D_view_to_region_result;


static PointerRNA Screen_areas_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Area, rna_iterator_listbase_get(iter));
}

void Screen_areas_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Screen_areas;

    rna_iterator_listbase_begin(iter, ptr, &data->areabase, nullptr);

    if (iter->valid) {
        iter->ptr = Screen_areas_get(iter);
    }
}

void Screen_areas_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Screen_areas_get(iter);
    }
}

void Screen_areas_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Screen_areas_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Screen_areas_begin(&iter, ptr);

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
        if (found) { *r_ptr = Screen_areas_get(&iter); }
    }

    Screen_areas_end(&iter);

    return found;
}

bool Screen_is_animation_playing_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Screen_is_animation_playing_get;
    return fn(ptr);
}

bool Screen_is_scrubbing_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Screen_is_scrubbing_get;
    return fn(ptr);
}

bool Screen_is_temporary_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->temp) & 1) != 0);
}

bool Screen_show_fullscreen_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Screen_fullscreen_get;
    return fn(ptr);
}

bool Screen_show_statusbar_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return !((uint64_t(data->flag) & 2) != 0);
}

void Screen_show_statusbar_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool Screen_use_play_top_left_3d_editor_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 1) != 0);
}

void Screen_use_play_top_left_3d_editor_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 1); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(1)); }
}

bool Screen_use_play_3d_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 2) != 0);
}

void Screen_use_play_3d_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 2); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(2)); }
}

bool Screen_use_follow_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & -32768) != 0);
}

void Screen_use_follow_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | -32768); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(-32768)); }
}

bool Screen_use_play_animation_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 4) != 0);
}

void Screen_use_play_animation_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 4); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(4)); }
}

bool Screen_use_play_properties_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 8) != 0);
}

void Screen_use_play_properties_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 8); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(8)); }
}

bool Screen_use_play_image_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 64) != 0);
}

void Screen_use_play_image_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 64); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(64)); }
}

bool Screen_use_play_sequence_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 32) != 0);
}

void Screen_use_play_sequence_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 32); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(32)); }
}

bool Screen_use_play_node_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 256) != 0);
}

void Screen_use_play_node_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 256); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(256)); }
}

bool Screen_use_play_clip_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 512) != 0);
}

void Screen_use_play_clip_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 512); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(512)); }
}

bool Screen_use_play_spreadsheet_editors_get(PointerRNA *ptr)
{
    bScreen *data = (bScreen *)(ptr->data);
    return ((uint64_t(data->redraws_flag) & 1024) != 0);
}

void Screen_use_play_spreadsheet_editors_set(PointerRNA *ptr, bool value)
{
    bScreen *data = (bScreen *)(ptr->data);
    if (value) { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) | 1024); }
    else { data->redraws_flag = std::remove_reference_t<decltype(data->redraws_flag)>(uint64_t(data->redraws_flag) & ~uint64_t(1024)); }
}

static PointerRNA Area_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Area_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Area_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Area_rna_properties_get(iter);
    }
}

void Area_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Area_rna_properties_get(iter);
    }
}

void Area_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Area_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Area_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA Area_spaces_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Space, rna_iterator_listbase_get(iter));
}

void Area_spaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Area_spaces;

    rna_iterator_listbase_begin(iter, ptr, &data->spacedata, nullptr);

    if (iter->valid) {
        iter->ptr = Area_spaces_get(iter);
    }
}

void Area_spaces_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Area_spaces_get(iter);
    }
}

void Area_spaces_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Area_spaces_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Area_spaces_begin(&iter, ptr);

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
        if (found) { *r_ptr = Area_spaces_get(&iter); }
    }

    Area_spaces_end(&iter);

    return found;
}

static PointerRNA Area_regions_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Region, rna_iterator_listbase_get(iter));
}

void Area_regions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Area_regions;

    rna_iterator_listbase_begin(iter, ptr, &data->regionbase, nullptr);

    if (iter->valid) {
        iter->ptr = Area_regions_get(iter);
    }
}

void Area_regions_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Area_regions_get(iter);
    }
}

void Area_regions_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Area_regions_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Area_regions_begin(&iter, ptr);

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
        if (found) { *r_ptr = Area_regions_get(&iter); }
    }

    Area_regions_end(&iter);

    return found;
}

bool Area_show_menus_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return !((uint64_t(data->flag) & 1) != 0);
}

void Area_show_menus_set(PointerRNA *ptr, bool value)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    if (!value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

int Area_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Area_type_get;
    return fn(ptr);
}

void Area_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Area_type_set;
    fn(ptr, value);
}

int Area_ui_type_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Area_ui_type_get;
    return fn(ptr);
}

void Area_ui_type_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Area_ui_type_set;
    fn(ptr, value);
}

int Area_x_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->totrct.xmin);
}

int Area_y_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->totrct.ymin);
}

int Area_width_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->winx);
}

int Area_height_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return (int)(data->winy);
}

static PointerRNA AreaSpaces_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AreaSpaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AreaSpaces_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AreaSpaces_rna_properties_get(iter);
    }
}

void AreaSpaces_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AreaSpaces_rna_properties_get(iter);
    }
}

void AreaSpaces_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AreaSpaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AreaSpaces_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA AreaSpaces_active_get(PointerRNA *ptr)
{
    ScrArea *data = (ScrArea *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Space, data->spacedata.first);
}

static PointerRNA Region_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Region_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Region_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Region_rna_properties_get(iter);
    }
}

void Region_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Region_rna_properties_get(iter);
    }
}

void Region_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Region_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Region_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int Region_type_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->regiontype);
}

int Region_x_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winrct.xmin);
}

int Region_y_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winrct.ymin);
}

int Region_width_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winx);
}

int Region_height_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return (int)(data->winy);
}

PointerRNA Region_view2d_get(PointerRNA *ptr)
{
    ARegion *data = (ARegion *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_View2D, &data->v2d);
}

int Region_alignment_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Region_alignment_get;
    return fn(ptr);
}

PointerRNA Region_data_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Region_data_get;
    return fn(ptr);
}

int Region_active_panel_category_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Region_active_panel_category_get;
    return fn(ptr);
}

void Region_active_panel_category_set(PointerRNA *ptr, int value)
{
    PropEnumSetFunc fn = rna_Region_active_panel_category_set;
    fn(ptr, value);
}

static PointerRNA View2D_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void View2D_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_View2D_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = View2D_rna_properties_get(iter);
    }
}

void View2D_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = View2D_rna_properties_get(iter);
    }
}

void View2D_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool View2D_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA View2D_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

const char * Screen_statusbar_info_func(bScreen *_self, Main *bmain, bContext *C)
{
	return rna_Screen_statusbar_info_get(_self, bmain, C);
}

static void Screen_statusbar_info_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	bScreen *_self;
	const char * statusbar_info;
	char *_data, *_retdata;
	
	_self = (bScreen *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	statusbar_info = rna_Screen_statusbar_info_get(_self, CTX_data_main(C), C);
	*((const char * *)_retdata) = statusbar_info;
}

/* Repeated prototypes to detect errors */

const char * rna_Screen_statusbar_info_get(bScreen *_self, Main *bmain, bContext *C);

void Area_tag_redraw_func(ScrArea *_self)
{
	ED_area_tag_redraw(_self);
}

static void Area_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ScrArea *_self;
	_self = (ScrArea *)_ptr->data;
	
	ED_area_tag_redraw(_self);
}

void Area_header_text_set_func(ScrArea *_self, const char * text)
{
	ED_area_status_text(_self, text);
}

static void Area_header_text_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ScrArea *_self;
	const char * text;
	char *_data;
	
	_self = (ScrArea *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((const char * *)_data);
	
	ED_area_status_text(_self, text);
}

/* Repeated prototypes to detect errors */

void ED_area_tag_redraw(ScrArea *_self);
void ED_area_status_text(ScrArea *_self, const char * text);


void Region_tag_redraw_func(ARegion *_self)
{
	ED_region_tag_redraw(_self);
}

static void Region_tag_redraw_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ARegion *_self;
	_self = (ARegion *)_ptr->data;
	
	ED_region_tag_redraw(_self);
}

void Region_tag_refresh_ui_func(ARegion *_self, ReportList *reports)
{
	rna_Region_tag_refresh_ui(_self, reports);
}

static void Region_tag_refresh_ui_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ARegion *_self;
	_self = (ARegion *)_ptr->data;
	
	rna_Region_tag_refresh_ui(_self, reports);
}

/* Repeated prototypes to detect errors */

void ED_region_tag_redraw(ARegion *_self);
void rna_Region_tag_refresh_ui(ARegion *_self, ReportList *reports);

void View2D_region_to_view_func(View2D *_self, float x, float y, float result[2])
{
	rna_View2D_region_to_view(_self, x, y, result);
}

static void View2D_region_to_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	View2D *_self;
	float x;
	float y;
	float *result;
	char *_data;
	
	_self = (View2D *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((float *)_data);
	_data += 8;
	y = *((float *)_data);
	_data += 8;
	result = ((float *)_data);
	
	rna_View2D_region_to_view(_self, x, y, result);
}

void View2D_view_to_region_func(View2D *_self, float x, float y, bool clip, int result[2])
{
	rna_View2D_view_to_region(_self, x, y, clip, result);
}

static void View2D_view_to_region_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	View2D *_self;
	float x;
	float y;
	bool clip;
	int *result;
	char *_data;
	
	_self = (View2D *)_ptr->data;
	_data = (char *)_parms->data;
	x = *((float *)_data);
	_data += 8;
	y = *((float *)_data);
	_data += 8;
	clip = *((bool *)_data);
	_data += 8;
	result = ((int *)_data);
	
	rna_View2D_view_to_region(_self, x, y, clip, result);
}

/* Repeated prototypes to detect errors */

void rna_View2D_region_to_view(View2D *_self, float x, float y, float result[2]);
void rna_View2D_view_to_region(View2D *_self, float x, float y, bool clip, int result[2]);

/* Screen */
static CollectionPropertyRNA rna_Screen_areas_;
PropertyRNA &rna_Screen_areas = reinterpret_cast<PropertyRNA &>(rna_Screen_areas_);

static BoolPropertyRNA rna_Screen_is_animation_playing_;
PropertyRNA &rna_Screen_is_animation_playing = reinterpret_cast<PropertyRNA &>(rna_Screen_is_animation_playing_);

static BoolPropertyRNA rna_Screen_is_scrubbing_;
PropertyRNA &rna_Screen_is_scrubbing = reinterpret_cast<PropertyRNA &>(rna_Screen_is_scrubbing_);

static BoolPropertyRNA rna_Screen_is_temporary_;
PropertyRNA &rna_Screen_is_temporary = reinterpret_cast<PropertyRNA &>(rna_Screen_is_temporary_);

static BoolPropertyRNA rna_Screen_show_fullscreen_;
PropertyRNA &rna_Screen_show_fullscreen = reinterpret_cast<PropertyRNA &>(rna_Screen_show_fullscreen_);

static BoolPropertyRNA rna_Screen_show_statusbar_;
PropertyRNA &rna_Screen_show_statusbar = reinterpret_cast<PropertyRNA &>(rna_Screen_show_statusbar_);

static BoolPropertyRNA rna_Screen_use_play_top_left_3d_editor_;
PropertyRNA &rna_Screen_use_play_top_left_3d_editor = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_top_left_3d_editor_);

static BoolPropertyRNA rna_Screen_use_play_3d_editors_;
PropertyRNA &rna_Screen_use_play_3d_editors = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_3d_editors_);

static BoolPropertyRNA rna_Screen_use_follow_;
PropertyRNA &rna_Screen_use_follow = reinterpret_cast<PropertyRNA &>(rna_Screen_use_follow_);

static BoolPropertyRNA rna_Screen_use_play_animation_editors_;
PropertyRNA &rna_Screen_use_play_animation_editors = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_animation_editors_);

static BoolPropertyRNA rna_Screen_use_play_properties_editors_;
PropertyRNA &rna_Screen_use_play_properties_editors = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_properties_editors_);

static BoolPropertyRNA rna_Screen_use_play_image_editors_;
PropertyRNA &rna_Screen_use_play_image_editors = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_image_editors_);

static BoolPropertyRNA rna_Screen_use_play_sequence_editors_;
PropertyRNA &rna_Screen_use_play_sequence_editors = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_sequence_editors_);

static BoolPropertyRNA rna_Screen_use_play_node_editors_;
PropertyRNA &rna_Screen_use_play_node_editors = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_node_editors_);

static BoolPropertyRNA rna_Screen_use_play_clip_editors_;
PropertyRNA &rna_Screen_use_play_clip_editors = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_clip_editors_);

static BoolPropertyRNA rna_Screen_use_play_spreadsheet_editors_;
PropertyRNA &rna_Screen_use_play_spreadsheet_editors = reinterpret_cast<PropertyRNA &>(rna_Screen_use_play_spreadsheet_editors_);

static StringPropertyRNA rna_Screen_statusbar_info_statusbar_info_;
PropertyRNA &rna_Screen_statusbar_info_statusbar_info = reinterpret_cast<PropertyRNA &>(rna_Screen_statusbar_info_statusbar_info_);

FunctionRNA *rna_Screen_statusbar_info_func;
StructRNA *RNA_Screen;
void register_struct_Screen(BlenderRNA &brna)
{
	rna_Screen_areas_ = {
		{&rna_Screen_is_animation_playing, 	nullptr,
		-1, "areas", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Areas",
		"Areas the screen is subdivided into",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_areas_begin, Screen_areas_next, Screen_areas_end, Screen_areas_get, nullptr, Screen_areas_lookup_int, nullptr, nullptr, RNA_Area
	};

	rna_Screen_is_animation_playing_ = {
		{&rna_Screen_is_scrubbing, 	&rna_Screen_areas,
		-1, "is_animation_playing", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Playing",
		"Animation playback is active",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_is_animation_playing_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_is_scrubbing_ = {
		{&rna_Screen_is_temporary, 	&rna_Screen_is_animation_playing,
		-1, "is_scrubbing", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "User is Scrubbing",
		"True when the user is scrubbing through time",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_is_scrubbing_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_is_temporary_ = {
		{&rna_Screen_show_fullscreen, 	&rna_Screen_is_scrubbing,
		-1, "is_temporary", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Temporary",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_is_temporary_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_show_fullscreen_ = {
		{&rna_Screen_show_statusbar, 	&rna_Screen_is_temporary,
		-1, "show_fullscreen", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Maximize",
		"An area is maximized, filling this screen",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_show_fullscreen_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_show_statusbar_ = {
		{&rna_Screen_use_play_top_left_3d_editor, 	&rna_Screen_show_fullscreen,
		-1, "show_statusbar", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Status Bar",
		"Show status bar",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_bar_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_show_statusbar_get, Screen_show_statusbar_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Screen_use_play_top_left_3d_editor_ = {
		{&rna_Screen_use_play_3d_editors, 	&rna_Screen_show_statusbar,
		-1, "use_play_top_left_3d_editor", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Top-Left 3D Editor",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_top_left_3d_editor_get, Screen_use_play_top_left_3d_editor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_play_3d_editors_ = {
		{&rna_Screen_use_follow, 	&rna_Screen_use_play_top_left_3d_editor,
		-1, "use_play_3d_editors", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "All 3D Viewports",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_3d_editors_get, Screen_use_play_3d_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_follow_ = {
		{&rna_Screen_use_play_animation_editors, 	&rna_Screen_use_play_3d_editors,
		-1, "use_follow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Follow",
		"Follow current frame in editors",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_follow_get, Screen_use_follow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_play_animation_editors_ = {
		{&rna_Screen_use_play_properties_editors, 	&rna_Screen_use_follow,
		-1, "use_play_animation_editors", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Animation Editors",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_animation_editors_get, Screen_use_play_animation_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_play_properties_editors_ = {
		{&rna_Screen_use_play_image_editors, 	&rna_Screen_use_play_animation_editors,
		-1, "use_play_properties_editors", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Property Editors",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_properties_editors_get, Screen_use_play_properties_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_play_image_editors_ = {
		{&rna_Screen_use_play_sequence_editors, 	&rna_Screen_use_play_properties_editors,
		-1, "use_play_image_editors", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Image Editors",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_image_editors_get, Screen_use_play_image_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_play_sequence_editors_ = {
		{&rna_Screen_use_play_node_editors, 	&rna_Screen_use_play_image_editors,
		-1, "use_play_sequence_editors", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sequencer Editors",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_sequence_editors_get, Screen_use_play_sequence_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_play_node_editors_ = {
		{&rna_Screen_use_play_clip_editors, 	&rna_Screen_use_play_sequence_editors,
		-1, "use_play_node_editors", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Node Editors",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_node_editors_get, Screen_use_play_node_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_play_clip_editors_ = {
		{&rna_Screen_use_play_spreadsheet_editors, 	&rna_Screen_use_play_node_editors,
		-1, "use_play_clip_editors", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clip Editors",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_clip_editors_get, Screen_use_play_clip_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Screen_use_play_spreadsheet_editors_ = {
		{nullptr, 	&rna_Screen_use_play_clip_editors,
		-1, "use_play_spreadsheet_editors", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Spreadsheet Editors",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Screen_redraw_update, 269287424, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Screen_use_play_spreadsheet_editors_get, Screen_use_play_spreadsheet_editors_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Screen;
	srna->cont.properties = {&rna_Screen_areas, &rna_Screen_use_play_spreadsheet_editors};
	srna->identifier = "Screen";
	srna->flag = 519;
	srna->name = "Screen";
	srna->description = "Screen data-block, defining the layout of areas in a window";
	srna->translation_context = "*";
	srna->icon = 111;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	rna_Screen_statusbar_info_statusbar_info_ = {
		{nullptr, 	nullptr,
		-1, "statusbar_info", 262145, 0, 2, 0, 0, PropertyPathTemplateType(0), "Status Bar Info",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Screen_statusbar_info_statusbar_info, &rna_Screen_statusbar_info_statusbar_info};
		func->identifier = "statusbar_info";
		func->flag = 12;
		func->description = "statusbar_info";
		func->call = Screen_statusbar_info_call;
		func->c_ret = &rna_Screen_statusbar_info_statusbar_info;
		rna_Screen_statusbar_info_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Area */
static CollectionPropertyRNA rna_Area_rna_properties_;
PropertyRNA &rna_Area_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Area_rna_properties_);

static PointerPropertyRNA rna_Area_rna_type_;
PropertyRNA &rna_Area_rna_type = reinterpret_cast<PropertyRNA &>(rna_Area_rna_type_);

static CollectionPropertyRNA rna_Area_spaces_;
PropertyRNA &rna_Area_spaces = reinterpret_cast<PropertyRNA &>(rna_Area_spaces_);

static CollectionPropertyRNA rna_Area_regions_;
PropertyRNA &rna_Area_regions = reinterpret_cast<PropertyRNA &>(rna_Area_regions_);

static BoolPropertyRNA rna_Area_show_menus_;
PropertyRNA &rna_Area_show_menus = reinterpret_cast<PropertyRNA &>(rna_Area_show_menus_);

static EnumPropertyRNA rna_Area_type_;
PropertyRNA &rna_Area_type = reinterpret_cast<PropertyRNA &>(rna_Area_type_);

static EnumPropertyRNA rna_Area_ui_type_;
PropertyRNA &rna_Area_ui_type = reinterpret_cast<PropertyRNA &>(rna_Area_ui_type_);

static IntPropertyRNA rna_Area_x_;
PropertyRNA &rna_Area_x = reinterpret_cast<PropertyRNA &>(rna_Area_x_);

static IntPropertyRNA rna_Area_y_;
PropertyRNA &rna_Area_y = reinterpret_cast<PropertyRNA &>(rna_Area_y_);

static IntPropertyRNA rna_Area_width_;
PropertyRNA &rna_Area_width = reinterpret_cast<PropertyRNA &>(rna_Area_width_);

static IntPropertyRNA rna_Area_height_;
PropertyRNA &rna_Area_height = reinterpret_cast<PropertyRNA &>(rna_Area_height_);

FunctionRNA *rna_Area_tag_redraw_func;
static StringPropertyRNA rna_Area_header_text_set_text_;
PropertyRNA &rna_Area_header_text_set_text = reinterpret_cast<PropertyRNA &>(rna_Area_header_text_set_text_);

FunctionRNA *rna_Area_header_text_set_func;
StructRNA *RNA_Area;
void register_struct_Area(BlenderRNA &brna)
{
	rna_Area_rna_properties_ = {
		{&rna_Area_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Area_rna_properties_begin, Area_rna_properties_next, Area_rna_properties_end, Area_rna_properties_get, nullptr, nullptr, Area_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Area_rna_type_ = {
		{&rna_Area_spaces, 	&rna_Area_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Area_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Area_spaces_ = {
		{&rna_Area_regions, 	&rna_Area_rna_type,
		-1, "spaces", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Spaces",
		"Spaces contained in this area, the first being the active space (NOTE: Useful for example to restore a previously used 3D view space in a certain area to get the old view orientation)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AreaSpaces},
		Area_spaces_begin, Area_spaces_next, Area_spaces_end, Area_spaces_get, nullptr, Area_spaces_lookup_int, nullptr, nullptr, RNA_Space
	};

	rna_Area_regions_ = {
		{&rna_Area_show_menus, 	&rna_Area_spaces,
		-1, "regions", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Regions",
		"Regions this area is subdivided in",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Area_regions_begin, Area_regions_next, Area_regions_end, Area_regions_get, nullptr, Area_regions_lookup_int, nullptr, nullptr, RNA_Region
	};

	rna_Area_show_menus_ = {
		{&rna_Area_type, 	&rna_Area_regions,
		-1, "show_menus", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Menus",
		"Show menus in the header",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Area_show_menus_get, Area_show_menus_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Area_type_ = {
		{&rna_Area_ui_type, 	&rna_Area_show_menus,
		-1, "type", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Editor Type",
		"Current editor type for this area",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Area_type_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Area_type_get, Area_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_space_type_items, 24, 1
	};

	rna_Area_ui_type_ = {
		{&rna_Area_x, 	&rna_Area_type,
		-1, "ui_type", 4194305, 0, 0, 0, 0, PropertyPathTemplateType(0), "Editor Type",
		"Current editor type for this area",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_Area_ui_type_update, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Area_ui_type_get, Area_ui_type_set, rna_Area_ui_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_NULL_items, 0, 65536
	};

	rna_Area_x_ = {
		{&rna_Area_y, 	&rna_Area_ui_type,
		-1, "x", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "X Position",
		"The window relative vertical location of the area",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ScrArea, totrct.xmin), RawPropertyType(0), nullptr},
		Area_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Area_y_ = {
		{&rna_Area_width, 	&rna_Area_x,
		-1, "y", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Y Position",
		"The window relative horizontal location of the area",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ScrArea, totrct.ymin), RawPropertyType(0), nullptr},
		Area_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Area_width_ = {
		{&rna_Area_height, 	&rna_Area_y,
		-1, "width", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Width",
		"Area width",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ScrArea, winx), RawPropertyType(1), nullptr},
		Area_width_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Area_height_ = {
		{nullptr, 	&rna_Area_width,
		-1, "height", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Height",
		"Area height",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ScrArea, winy), RawPropertyType(1), nullptr},
		Area_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Area;
	srna->cont.properties = {&rna_Area_rna_properties, &rna_Area_height};
	srna->identifier = "Area";
	srna->flag = 516;
	srna->name = "Area";
	srna->description = "Area in a subdivided screen, containing an editor";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Area_rna_properties;
	srna->path = BKE_screen_path_from_screen_to_area;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "tag_redraw";
		func->description = "tag_redraw";
		func->call = Area_tag_redraw_call;
		rna_Area_tag_redraw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Area_header_text_set_text_ = {
		{nullptr, 	nullptr,
		-1, "text", 1, 0, 1, 0, 0, PropertyPathTemplateType(0), "Text",
		"New string for the header, None clears the text",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Area_header_text_set_text, &rna_Area_header_text_set_text};
		func->identifier = "header_text_set";
		func->description = "Set the header status text";
		func->call = Area_header_text_set_call;
		rna_Area_header_text_set_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Area Spaces */
static CollectionPropertyRNA rna_AreaSpaces_rna_properties_;
PropertyRNA &rna_AreaSpaces_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AreaSpaces_rna_properties_);

static PointerPropertyRNA rna_AreaSpaces_rna_type_;
PropertyRNA &rna_AreaSpaces_rna_type = reinterpret_cast<PropertyRNA &>(rna_AreaSpaces_rna_type_);

static PointerPropertyRNA rna_AreaSpaces_active_;
PropertyRNA &rna_AreaSpaces_active = reinterpret_cast<PropertyRNA &>(rna_AreaSpaces_active_);

StructRNA *RNA_AreaSpaces;
void register_struct_AreaSpaces(BlenderRNA &brna)
{
	rna_AreaSpaces_rna_properties_ = {
		{&rna_AreaSpaces_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AreaSpaces_rna_properties_begin, AreaSpaces_rna_properties_next, AreaSpaces_rna_properties_end, AreaSpaces_rna_properties_get, nullptr, nullptr, AreaSpaces_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AreaSpaces_rna_type_ = {
		{&rna_AreaSpaces_active, 	&rna_AreaSpaces_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AreaSpaces_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AreaSpaces_active_ = {
		{nullptr, 	&rna_AreaSpaces_rna_type,
		-1, "active", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Space",
		"Space currently being displayed in this area",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AreaSpaces_active_get, nullptr, nullptr, nullptr,RNA_Space
	};

	StructRNA *srna = RNA_AreaSpaces;
	srna->cont.properties = {&rna_AreaSpaces_rna_properties, &rna_AreaSpaces_active};
	srna->identifier = "AreaSpaces";
	srna->flag = 516;
	srna->name = "Area Spaces";
	srna->description = "Collection of spaces";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AreaSpaces_rna_properties;
};

/* Region */
static CollectionPropertyRNA rna_Region_rna_properties_;
PropertyRNA &rna_Region_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Region_rna_properties_);

static PointerPropertyRNA rna_Region_rna_type_;
PropertyRNA &rna_Region_rna_type = reinterpret_cast<PropertyRNA &>(rna_Region_rna_type_);

static EnumPropertyRNA rna_Region_type_;
PropertyRNA &rna_Region_type = reinterpret_cast<PropertyRNA &>(rna_Region_type_);

static IntPropertyRNA rna_Region_x_;
PropertyRNA &rna_Region_x = reinterpret_cast<PropertyRNA &>(rna_Region_x_);

static IntPropertyRNA rna_Region_y_;
PropertyRNA &rna_Region_y = reinterpret_cast<PropertyRNA &>(rna_Region_y_);

static IntPropertyRNA rna_Region_width_;
PropertyRNA &rna_Region_width = reinterpret_cast<PropertyRNA &>(rna_Region_width_);

static IntPropertyRNA rna_Region_height_;
PropertyRNA &rna_Region_height = reinterpret_cast<PropertyRNA &>(rna_Region_height_);

static PointerPropertyRNA rna_Region_view2d_;
PropertyRNA &rna_Region_view2d = reinterpret_cast<PropertyRNA &>(rna_Region_view2d_);

static EnumPropertyRNA rna_Region_alignment_;
PropertyRNA &rna_Region_alignment = reinterpret_cast<PropertyRNA &>(rna_Region_alignment_);

static PointerPropertyRNA rna_Region_data_;
PropertyRNA &rna_Region_data = reinterpret_cast<PropertyRNA &>(rna_Region_data_);

static EnumPropertyRNA rna_Region_active_panel_category_;
PropertyRNA &rna_Region_active_panel_category = reinterpret_cast<PropertyRNA &>(rna_Region_active_panel_category_);

FunctionRNA *rna_Region_tag_redraw_func;
FunctionRNA *rna_Region_tag_refresh_ui_func;
StructRNA *RNA_Region;
void register_struct_Region(BlenderRNA &brna)
{
	rna_Region_rna_properties_ = {
		{&rna_Region_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Region_rna_properties_begin, Region_rna_properties_next, Region_rna_properties_end, Region_rna_properties_get, nullptr, nullptr, Region_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Region_rna_type_ = {
		{&rna_Region_type, 	&rna_Region_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Region_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Region_type_ = {
		{&rna_Region_x, 	&rna_Region_rna_type,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Region Type",
		"Type of this region",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ARegion, regiontype), RawPropertyType(1), nullptr},
		Region_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_region_type_items, 17, 0
	};

	rna_Region_x_ = {
		{&rna_Region_y, 	&rna_Region_type,
		-1, "x", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "X Position",
		"The window relative vertical location of the region",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ARegion, winrct.xmin), RawPropertyType(0), nullptr},
		Region_x_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Region_y_ = {
		{&rna_Region_width, 	&rna_Region_x,
		-1, "y", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Y Position",
		"The window relative horizontal location of the region",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ARegion, winrct.ymin), RawPropertyType(0), nullptr},
		Region_y_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Region_width_ = {
		{&rna_Region_height, 	&rna_Region_y,
		-1, "width", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Width",
		"Region width",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ARegion, winx), RawPropertyType(1), nullptr},
		Region_width_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Region_height_ = {
		{&rna_Region_view2d, 	&rna_Region_width,
		-1, "height", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Height",
		"Region height",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ARegion, winy), RawPropertyType(1), nullptr},
		Region_height_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 32767, 0, 32767, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Region_view2d_ = {
		{&rna_Region_alignment, 	&rna_Region_height,
		-1, "view2d", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "View2D",
		"2D view of the region",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Region_view2d_get, nullptr, nullptr, nullptr,RNA_View2D
	};

	static const EnumPropertyItem rna_Region_alignment_items[10] = {
		{0, "NONE", 0, "None", "Don\'t use any fixed alignment, fill available space"	},
		{1, "TOP", 0, "Top", ""	},
		{2, "BOTTOM", 0, "Bottom", ""	},
		{3, "LEFT", 0, "Left", ""	},
		{4, "RIGHT", 0, "Right", ""	},
		{5, "HORIZONTAL_SPLIT", 0, "Horizontal Split", ""	},
		{6, "VERTICAL_SPLIT", 0, "Vertical Split", ""	},
		{7, "FLOAT", 0, "Float", "Region floats on screen, does not use any fixed alignment"	},
		{8, "QUAD_SPLIT", 0, "Quad Split", "Region is split horizontally and vertically"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Region_alignment_ = {
		{&rna_Region_data, 	&rna_Region_view2d,
		-1, "alignment", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alignment",
		"Alignment of the region within the area",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Region_alignment_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Region_alignment_items, 9, 0
	};

	rna_Region_data_ = {
		{&rna_Region_active_panel_category, 	&rna_Region_alignment,
		-1, "data", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Region Data",
		"Region specific data (the type depends on the region type)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Region_data_get, nullptr, nullptr, nullptr,RNA_AnyType
	};

	rna_Region_active_panel_category_ = {
		{nullptr, 	&rna_Region_data,
		-1, "active_panel_category", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Panel Category",
		"The current active panel category, may be Null if the region does not support this feature (NOTE: these categories are generated at runtime, so list may be empty at initialization, before any drawing took place)",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, rna_Region_active_panel_category_editable_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Region_active_panel_category_get, Region_active_panel_category_set, rna_Region_active_panel_category_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_region_panel_category_items, 1, -1
	};

	StructRNA *srna = RNA_Region;
	srna->cont.properties = {&rna_Region_rna_properties, &rna_Region_active_panel_category};
	srna->identifier = "Region";
	srna->flag = 516;
	srna->name = "Region";
	srna->description = "Region in a subdivided screen area";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Region_rna_properties;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "tag_redraw";
		func->description = "tag_redraw";
		func->call = Region_tag_redraw_call;
		rna_Region_tag_redraw_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "tag_refresh_ui";
		func->flag = 16;
		func->description = "tag_refresh_ui";
		func->call = Region_tag_refresh_ui_call;
		rna_Region_tag_refresh_ui_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* View2D */
static CollectionPropertyRNA rna_View2D_rna_properties_;
PropertyRNA &rna_View2D_rna_properties = reinterpret_cast<PropertyRNA &>(rna_View2D_rna_properties_);

static PointerPropertyRNA rna_View2D_rna_type_;
PropertyRNA &rna_View2D_rna_type = reinterpret_cast<PropertyRNA &>(rna_View2D_rna_type_);

static FloatPropertyRNA rna_View2D_region_to_view_x_;
PropertyRNA &rna_View2D_region_to_view_x = reinterpret_cast<PropertyRNA &>(rna_View2D_region_to_view_x_);

static FloatPropertyRNA rna_View2D_region_to_view_y_;
PropertyRNA &rna_View2D_region_to_view_y = reinterpret_cast<PropertyRNA &>(rna_View2D_region_to_view_y_);

static FloatPropertyRNA rna_View2D_region_to_view_result_;
PropertyRNA &rna_View2D_region_to_view_result = reinterpret_cast<PropertyRNA &>(rna_View2D_region_to_view_result_);

FunctionRNA *rna_View2D_region_to_view_func;
static FloatPropertyRNA rna_View2D_view_to_region_x_;
PropertyRNA &rna_View2D_view_to_region_x = reinterpret_cast<PropertyRNA &>(rna_View2D_view_to_region_x_);

static FloatPropertyRNA rna_View2D_view_to_region_y_;
PropertyRNA &rna_View2D_view_to_region_y = reinterpret_cast<PropertyRNA &>(rna_View2D_view_to_region_y_);

static BoolPropertyRNA rna_View2D_view_to_region_clip_;
PropertyRNA &rna_View2D_view_to_region_clip = reinterpret_cast<PropertyRNA &>(rna_View2D_view_to_region_clip_);

static IntPropertyRNA rna_View2D_view_to_region_result_;
PropertyRNA &rna_View2D_view_to_region_result = reinterpret_cast<PropertyRNA &>(rna_View2D_view_to_region_result_);

FunctionRNA *rna_View2D_view_to_region_func;
StructRNA *RNA_View2D;
void register_struct_View2D(BlenderRNA &brna)
{
	rna_View2D_rna_properties_ = {
		{&rna_View2D_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		View2D_rna_properties_begin, View2D_rna_properties_next, View2D_rna_properties_end, View2D_rna_properties_get, nullptr, nullptr, View2D_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_View2D_rna_type_ = {
		{nullptr, 	&rna_View2D_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		View2D_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_View2D;
	srna->cont.properties = {&rna_View2D_rna_properties, &rna_View2D_rna_type};
	srna->identifier = "View2D";
	srna->flag = 516;
	srna->name = "View2D";
	srna->description = "Scroll and zoom for a 2D region";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_View2D_rna_properties;
	{
	rna_View2D_region_to_view_x_ = {
		{&rna_View2D_region_to_view_y, 	nullptr,
		-1, "x", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "x",
		"Region x coordinate",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_View2D_region_to_view_y_ = {
		{&rna_View2D_region_to_view_result, 	&rna_View2D_region_to_view_x,
		-1, "y", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "y",
		"Region y coordinate",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	static float rna_View2D_region_to_view_result_default[2] = {
		0.0f,
		0.0f
	};
	rna_View2D_region_to_view_result_ = {
		{nullptr, 	&rna_View2D_region_to_view_y,
		-1, "result", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"View coordinates",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_View2D_region_to_view_result_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_View2D_region_to_view_x, &rna_View2D_region_to_view_result};
		func->identifier = "region_to_view";
		func->description = "Transform region coordinates to 2D view";
		func->call = View2D_region_to_view_call;
		rna_View2D_region_to_view_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_View2D_view_to_region_x_ = {
		{&rna_View2D_view_to_region_y, 	nullptr,
		-1, "x", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "x",
		"2D View x coordinate",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_View2D_view_to_region_y_ = {
		{&rna_View2D_view_to_region_clip, 	&rna_View2D_view_to_region_x,
		-1, "y", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "y",
		"2D View y coordinate",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};
	rna_View2D_view_to_region_clip_ = {
		{&rna_View2D_view_to_region_result, 	&rna_View2D_view_to_region_y,
		-1, "clip", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clip",
		"Clip coordinates to the visible region",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	static int rna_View2D_view_to_region_result_default[2] = {
		0,
		0
	};
	rna_View2D_view_to_region_result_ = {
		{nullptr, 	&rna_View2D_view_to_region_clip,
		-1, "result", 8388611, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"Region coordinates",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_View2D_view_to_region_result_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_View2D_view_to_region_x, &rna_View2D_view_to_region_result};
		func->identifier = "view_to_region";
		func->description = "Transform 2D view coordinates to region";
		func->call = View2D_view_to_region_call;
		rna_View2D_view_to_region_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
