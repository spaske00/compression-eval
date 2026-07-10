
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

#include "rna_layer.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_ViewLayer_rna_properties;
extern PropertyRNA &rna_ViewLayer_rna_type;
extern PropertyRNA &rna_ViewLayer_name;
extern PropertyRNA &rna_ViewLayer_material_override;
extern PropertyRNA &rna_ViewLayer_world_override;
extern PropertyRNA &rna_ViewLayer_samples;
extern PropertyRNA &rna_ViewLayer_pass_alpha_threshold;
extern PropertyRNA &rna_ViewLayer_eevee;
extern PropertyRNA &rna_ViewLayer_aovs;
extern PropertyRNA &rna_ViewLayer_active_aov;
extern PropertyRNA &rna_ViewLayer_active_aov_index;
extern PropertyRNA &rna_ViewLayer_lightgroups;
extern PropertyRNA &rna_ViewLayer_active_lightgroup;
extern PropertyRNA &rna_ViewLayer_active_lightgroup_index;
extern PropertyRNA &rna_ViewLayer_use_pass_cryptomatte_object;
extern PropertyRNA &rna_ViewLayer_use_pass_cryptomatte_material;
extern PropertyRNA &rna_ViewLayer_use_pass_cryptomatte_asset;
extern PropertyRNA &rna_ViewLayer_pass_cryptomatte_depth;
extern PropertyRNA &rna_ViewLayer_use_pass_cryptomatte_accurate;
extern PropertyRNA &rna_ViewLayer_use_solid;
extern PropertyRNA &rna_ViewLayer_use_sky;
extern PropertyRNA &rna_ViewLayer_use_ao;
extern PropertyRNA &rna_ViewLayer_use_strand;
extern PropertyRNA &rna_ViewLayer_use_volumes;
extern PropertyRNA &rna_ViewLayer_use_motion_blur;
extern PropertyRNA &rna_ViewLayer_use_grease_pencil;
extern PropertyRNA &rna_ViewLayer_use_pass_combined;
extern PropertyRNA &rna_ViewLayer_use_pass_z;
extern PropertyRNA &rna_ViewLayer_use_pass_vector;
extern PropertyRNA &rna_ViewLayer_use_pass_position;
extern PropertyRNA &rna_ViewLayer_use_pass_normal;
extern PropertyRNA &rna_ViewLayer_use_pass_uv;
extern PropertyRNA &rna_ViewLayer_use_pass_mist;
extern PropertyRNA &rna_ViewLayer_use_pass_object_index;
extern PropertyRNA &rna_ViewLayer_use_pass_material_index;
extern PropertyRNA &rna_ViewLayer_use_pass_shadow;
extern PropertyRNA &rna_ViewLayer_use_pass_ambient_occlusion;
extern PropertyRNA &rna_ViewLayer_use_pass_emit;
extern PropertyRNA &rna_ViewLayer_use_pass_environment;
extern PropertyRNA &rna_ViewLayer_use_pass_diffuse_direct;
extern PropertyRNA &rna_ViewLayer_use_pass_diffuse_indirect;
extern PropertyRNA &rna_ViewLayer_use_pass_diffuse_color;
extern PropertyRNA &rna_ViewLayer_use_pass_glossy_direct;
extern PropertyRNA &rna_ViewLayer_use_pass_glossy_indirect;
extern PropertyRNA &rna_ViewLayer_use_pass_glossy_color;
extern PropertyRNA &rna_ViewLayer_use_pass_transmission_direct;
extern PropertyRNA &rna_ViewLayer_use_pass_transmission_indirect;
extern PropertyRNA &rna_ViewLayer_use_pass_transmission_color;
extern PropertyRNA &rna_ViewLayer_use_pass_subsurface_direct;
extern PropertyRNA &rna_ViewLayer_use_pass_subsurface_indirect;
extern PropertyRNA &rna_ViewLayer_use_pass_subsurface_color;
extern PropertyRNA &rna_ViewLayer_layer_collection;
extern PropertyRNA &rna_ViewLayer_active_layer_collection;
extern PropertyRNA &rna_ViewLayer_objects;
extern PropertyRNA &rna_ViewLayer_use;
extern PropertyRNA &rna_ViewLayer_has_export_collections;
extern PropertyRNA &rna_ViewLayer_use_freestyle;
extern PropertyRNA &rna_ViewLayer_freestyle_settings;
extern PropertyRNA &rna_ViewLayer_use_pass_grease_pencil;
extern PropertyRNA &rna_ViewLayer_depsgraph;

extern FunctionRNA *rna_ViewLayer_bl_system_properties_get_func;
extern PropertyRNA &rna_ViewLayer_bl_system_properties_get_do_create;
extern PropertyRNA &rna_ViewLayer_bl_system_properties_get_system_properties;

extern FunctionRNA *rna_ViewLayer_update_render_passes_func;
extern FunctionRNA *rna_ViewLayer_update_func;


extern PropertyRNA &rna_AOVs_rna_properties;
extern PropertyRNA &rna_AOVs_rna_type;

extern FunctionRNA *rna_AOVs_add_func;
extern PropertyRNA &rna_AOVs_add_aov;

extern FunctionRNA *rna_AOVs_remove_func;
extern PropertyRNA &rna_AOVs_remove_aov;



extern PropertyRNA &rna_Lightgroups_rna_properties;
extern PropertyRNA &rna_Lightgroups_rna_type;

extern FunctionRNA *rna_Lightgroups_add_func;
extern PropertyRNA &rna_Lightgroups_add_lightgroup;
extern PropertyRNA &rna_Lightgroups_add_name;

extern FunctionRNA *rna_Lightgroups_remove_func;
extern PropertyRNA &rna_Lightgroups_remove_lightgroup;



extern PropertyRNA &rna_LayerObjects_rna_properties;
extern PropertyRNA &rna_LayerObjects_rna_type;
extern PropertyRNA &rna_LayerObjects_active;
extern PropertyRNA &rna_LayerObjects_selected;


extern PropertyRNA &rna_FreestyleLineSet_rna_properties;
extern PropertyRNA &rna_FreestyleLineSet_rna_type;
extern PropertyRNA &rna_FreestyleLineSet_linestyle;
extern PropertyRNA &rna_FreestyleLineSet_name;
extern PropertyRNA &rna_FreestyleLineSet_show_render;
extern PropertyRNA &rna_FreestyleLineSet_select_by_visibility;
extern PropertyRNA &rna_FreestyleLineSet_select_by_edge_types;
extern PropertyRNA &rna_FreestyleLineSet_select_by_collection;
extern PropertyRNA &rna_FreestyleLineSet_select_by_image_border;
extern PropertyRNA &rna_FreestyleLineSet_select_by_face_marks;
extern PropertyRNA &rna_FreestyleLineSet_edge_type_negation;
extern PropertyRNA &rna_FreestyleLineSet_edge_type_combination;
extern PropertyRNA &rna_FreestyleLineSet_collection;
extern PropertyRNA &rna_FreestyleLineSet_collection_negation;
extern PropertyRNA &rna_FreestyleLineSet_face_mark_negation;
extern PropertyRNA &rna_FreestyleLineSet_face_mark_condition;
extern PropertyRNA &rna_FreestyleLineSet_select_silhouette;
extern PropertyRNA &rna_FreestyleLineSet_select_border;
extern PropertyRNA &rna_FreestyleLineSet_select_crease;
extern PropertyRNA &rna_FreestyleLineSet_select_ridge_valley;
extern PropertyRNA &rna_FreestyleLineSet_select_suggestive_contour;
extern PropertyRNA &rna_FreestyleLineSet_select_material_boundary;
extern PropertyRNA &rna_FreestyleLineSet_select_contour;
extern PropertyRNA &rna_FreestyleLineSet_select_external_contour;
extern PropertyRNA &rna_FreestyleLineSet_select_edge_mark;
extern PropertyRNA &rna_FreestyleLineSet_exclude_silhouette;
extern PropertyRNA &rna_FreestyleLineSet_exclude_border;
extern PropertyRNA &rna_FreestyleLineSet_exclude_crease;
extern PropertyRNA &rna_FreestyleLineSet_exclude_ridge_valley;
extern PropertyRNA &rna_FreestyleLineSet_exclude_suggestive_contour;
extern PropertyRNA &rna_FreestyleLineSet_exclude_material_boundary;
extern PropertyRNA &rna_FreestyleLineSet_exclude_contour;
extern PropertyRNA &rna_FreestyleLineSet_exclude_external_contour;
extern PropertyRNA &rna_FreestyleLineSet_exclude_edge_mark;
extern PropertyRNA &rna_FreestyleLineSet_visibility;
extern PropertyRNA &rna_FreestyleLineSet_qi_start;
extern PropertyRNA &rna_FreestyleLineSet_qi_end;


extern PropertyRNA &rna_FreestyleModuleSettings_rna_properties;
extern PropertyRNA &rna_FreestyleModuleSettings_rna_type;
extern PropertyRNA &rna_FreestyleModuleSettings_script;
extern PropertyRNA &rna_FreestyleModuleSettings_use;


extern PropertyRNA &rna_FreestyleSettings_rna_properties;
extern PropertyRNA &rna_FreestyleSettings_rna_type;
extern PropertyRNA &rna_FreestyleSettings_modules;
extern PropertyRNA &rna_FreestyleSettings_mode;
extern PropertyRNA &rna_FreestyleSettings_use_culling;
extern PropertyRNA &rna_FreestyleSettings_use_suggestive_contours;
extern PropertyRNA &rna_FreestyleSettings_use_ridges_and_valleys;
extern PropertyRNA &rna_FreestyleSettings_use_material_boundaries;
extern PropertyRNA &rna_FreestyleSettings_use_smoothness;
extern PropertyRNA &rna_FreestyleSettings_use_view_map_cache;
extern PropertyRNA &rna_FreestyleSettings_as_render_pass;
extern PropertyRNA &rna_FreestyleSettings_sphere_radius;
extern PropertyRNA &rna_FreestyleSettings_kr_derivative_epsilon;
extern PropertyRNA &rna_FreestyleSettings_crease_angle;
extern PropertyRNA &rna_FreestyleSettings_linesets;


extern PropertyRNA &rna_FreestyleModules_rna_properties;
extern PropertyRNA &rna_FreestyleModules_rna_type;

extern FunctionRNA *rna_FreestyleModules_new_func;
extern PropertyRNA &rna_FreestyleModules_new_module;

extern FunctionRNA *rna_FreestyleModules_remove_func;
extern PropertyRNA &rna_FreestyleModules_remove_module;



extern PropertyRNA &rna_Linesets_rna_properties;
extern PropertyRNA &rna_Linesets_rna_type;
extern PropertyRNA &rna_Linesets_active;
extern PropertyRNA &rna_Linesets_active_index;

extern FunctionRNA *rna_Linesets_new_func;
extern PropertyRNA &rna_Linesets_new_name;
extern PropertyRNA &rna_Linesets_new_lineset;

extern FunctionRNA *rna_Linesets_remove_func;
extern PropertyRNA &rna_Linesets_remove_lineset;



extern PropertyRNA &rna_LayerCollection_rna_properties;
extern PropertyRNA &rna_LayerCollection_rna_type;
extern PropertyRNA &rna_LayerCollection_collection;
extern PropertyRNA &rna_LayerCollection_name;
extern PropertyRNA &rna_LayerCollection_children;
extern PropertyRNA &rna_LayerCollection_exclude;
extern PropertyRNA &rna_LayerCollection_holdout;
extern PropertyRNA &rna_LayerCollection_indirect_only;
extern PropertyRNA &rna_LayerCollection_hide_viewport;
extern PropertyRNA &rna_LayerCollection_is_visible;

extern FunctionRNA *rna_LayerCollection_visible_get_func;
extern PropertyRNA &rna_LayerCollection_visible_get_result;

extern FunctionRNA *rna_LayerCollection_has_objects_func;
extern PropertyRNA &rna_LayerCollection_has_objects_result;

extern FunctionRNA *rna_LayerCollection_has_selected_objects_func;
extern PropertyRNA &rna_LayerCollection_has_selected_objects_view_layer;
extern PropertyRNA &rna_LayerCollection_has_selected_objects_result;



extern PropertyRNA &rna_ObjectBase_rna_properties;
extern PropertyRNA &rna_ObjectBase_rna_type;
extern PropertyRNA &rna_ObjectBase_object;
extern PropertyRNA &rna_ObjectBase_select;
extern PropertyRNA &rna_ObjectBase_hide_viewport;

static PointerRNA ViewLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ViewLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ViewLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ViewLayer_rna_properties_get(iter);
    }
}

void ViewLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ViewLayer_rna_properties_get(iter);
    }
}

void ViewLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ViewLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ViewLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void ViewLayer_name_get(PointerRNA *ptr, char *value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int ViewLayer_name_length(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return strlen(data->name);
}

void ViewLayer_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_ViewLayer_name_set;
    fn(ptr, value);
}

PointerRNA ViewLayer_material_override_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Material, data->mat_override);
}

void ViewLayer_material_override_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->mat_override) {
        id_us_min((ID *)data->mat_override);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->mat_override = value.data;
}

PointerRNA ViewLayer_world_override_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_World, data->world_override);
}

void ViewLayer_world_override_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->world_override) {
        id_us_min((ID *)data->world_override);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->world_override = value.data;
}

int ViewLayer_samples_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (int)(data->samples);
}

void ViewLayer_samples_set(PointerRNA *ptr, int value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    data->samples = (std::remove_reference_t<decltype(data->samples)>)std::clamp(value, 0, INT_MAX);
}

float ViewLayer_pass_alpha_threshold_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (float)(data->pass_alpha_threshold);
}

void ViewLayer_pass_alpha_threshold_set(PointerRNA *ptr, float value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    data->pass_alpha_threshold = (std::remove_reference_t<decltype(data->pass_alpha_threshold)>)std::clamp(value, 0.0f, 1.0f);
}

PointerRNA ViewLayer_eevee_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_ViewLayerEEVEE, &data->eevee);
}

static PointerRNA ViewLayer_aovs_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_AOV, rna_iterator_listbase_get(iter));
}

void ViewLayer_aovs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ViewLayer_aovs;

    rna_iterator_listbase_begin(iter, ptr, &data->aovs, nullptr);

    if (iter->valid) {
        iter->ptr = ViewLayer_aovs_get(iter);
    }
}

void ViewLayer_aovs_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ViewLayer_aovs_get(iter);
    }
}

void ViewLayer_aovs_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ViewLayer_aovs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ViewLayer_aovs_begin(&iter, ptr);

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
        if (found) { *r_ptr = ViewLayer_aovs_get(&iter); }
    }

    ViewLayer_aovs_end(&iter);

    return found;
}

int AOV_name_length(PointerRNA *);
void AOV_name_get(PointerRNA *, char *);

bool ViewLayer_aovs_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ViewLayer_aovs_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = AOV_name_length(&iter.ptr);
            if (namelen < 1024) {
                AOV_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                AOV_name_get(&iter.ptr, name);
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
        ViewLayer_aovs_next(&iter);
    }
    ViewLayer_aovs_end(&iter);

    return found;
}

PointerRNA ViewLayer_active_aov_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AOV, data->active_aov);
}

int ViewLayer_active_aov_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ViewLayer_active_aov_index_get;
    return fn(ptr);
}

void ViewLayer_active_aov_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ViewLayer_active_aov_index_set;
    fn(ptr, value);
}

static PointerRNA ViewLayer_lightgroups_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Lightgroup, rna_iterator_listbase_get(iter));
}

void ViewLayer_lightgroups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ViewLayer_lightgroups;

    rna_iterator_listbase_begin(iter, ptr, &data->lightgroups, nullptr);

    if (iter->valid) {
        iter->ptr = ViewLayer_lightgroups_get(iter);
    }
}

void ViewLayer_lightgroups_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ViewLayer_lightgroups_get(iter);
    }
}

void ViewLayer_lightgroups_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ViewLayer_lightgroups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ViewLayer_lightgroups_begin(&iter, ptr);

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
        if (found) { *r_ptr = ViewLayer_lightgroups_get(&iter); }
    }

    ViewLayer_lightgroups_end(&iter);

    return found;
}

int Lightgroup_name_length(PointerRNA *);
void Lightgroup_name_get(PointerRNA *, char *);

bool ViewLayer_lightgroups_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ViewLayer_lightgroups_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = Lightgroup_name_length(&iter.ptr);
            if (namelen < 1024) {
                Lightgroup_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                Lightgroup_name_get(&iter.ptr, name);
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
        ViewLayer_lightgroups_next(&iter);
    }
    ViewLayer_lightgroups_end(&iter);

    return found;
}

PointerRNA ViewLayer_active_lightgroup_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Lightgroup, data->active_lightgroup);
}

int ViewLayer_active_lightgroup_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_ViewLayer_active_lightgroup_index_get;
    return fn(ptr);
}

void ViewLayer_active_lightgroup_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_ViewLayer_active_lightgroup_index_set;
    fn(ptr, value);
}

bool ViewLayer_use_pass_cryptomatte_object_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->cryptomatte_flag) & 1) != 0);
}

void ViewLayer_use_pass_cryptomatte_object_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->cryptomatte_flag = std::remove_reference_t<decltype(data->cryptomatte_flag)>(uint64_t(data->cryptomatte_flag) | 1); }
    else { data->cryptomatte_flag = std::remove_reference_t<decltype(data->cryptomatte_flag)>(uint64_t(data->cryptomatte_flag) & ~uint64_t(1)); }
}

bool ViewLayer_use_pass_cryptomatte_material_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->cryptomatte_flag) & 2) != 0);
}

void ViewLayer_use_pass_cryptomatte_material_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->cryptomatte_flag = std::remove_reference_t<decltype(data->cryptomatte_flag)>(uint64_t(data->cryptomatte_flag) | 2); }
    else { data->cryptomatte_flag = std::remove_reference_t<decltype(data->cryptomatte_flag)>(uint64_t(data->cryptomatte_flag) & ~uint64_t(2)); }
}

bool ViewLayer_use_pass_cryptomatte_asset_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->cryptomatte_flag) & 4) != 0);
}

void ViewLayer_use_pass_cryptomatte_asset_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->cryptomatte_flag = std::remove_reference_t<decltype(data->cryptomatte_flag)>(uint64_t(data->cryptomatte_flag) | 4); }
    else { data->cryptomatte_flag = std::remove_reference_t<decltype(data->cryptomatte_flag)>(uint64_t(data->cryptomatte_flag) & ~uint64_t(4)); }
}

int ViewLayer_pass_cryptomatte_depth_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return (int)(data->cryptomatte_levels);
}

void ViewLayer_pass_cryptomatte_depth_set(PointerRNA *ptr, int value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    data->cryptomatte_levels = (std::remove_reference_t<decltype(data->cryptomatte_levels)>)std::clamp(value, 2, 16);
}

bool ViewLayer_use_pass_cryptomatte_accurate_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->cryptomatte_flag) & 8) != 0);
}

void ViewLayer_use_pass_cryptomatte_accurate_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->cryptomatte_flag = std::remove_reference_t<decltype(data->cryptomatte_flag)>(uint64_t(data->cryptomatte_flag) | 8); }
    else { data->cryptomatte_flag = std::remove_reference_t<decltype(data->cryptomatte_flag)>(uint64_t(data->cryptomatte_flag) & ~uint64_t(8)); }
}

bool ViewLayer_use_solid_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 1) != 0);
}

void ViewLayer_use_solid_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) | 1); }
    else { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) & ~uint64_t(1)); }
}

bool ViewLayer_use_sky_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 16) != 0);
}

void ViewLayer_use_sky_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) | 16); }
    else { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) & ~uint64_t(16)); }
}

bool ViewLayer_use_ao_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 128) != 0);
}

void ViewLayer_use_ao_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) | 128); }
    else { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) & ~uint64_t(128)); }
}

bool ViewLayer_use_strand_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 32) != 0);
}

void ViewLayer_use_strand_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) | 32); }
    else { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) & ~uint64_t(32)); }
}

bool ViewLayer_use_volumes_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 256) != 0);
}

void ViewLayer_use_volumes_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) | 256); }
    else { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) & ~uint64_t(256)); }
}

bool ViewLayer_use_motion_blur_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 512) != 0);
}

void ViewLayer_use_motion_blur_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) | 512); }
    else { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) & ~uint64_t(512)); }
}

bool ViewLayer_use_grease_pencil_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->layflag) & 1024) != 0);
}

void ViewLayer_use_grease_pencil_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) | 1024); }
    else { data->layflag = std::remove_reference_t<decltype(data->layflag)>(uint64_t(data->layflag) & ~uint64_t(1024)); }
}

bool ViewLayer_use_pass_combined_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 1) != 0);
}

void ViewLayer_use_pass_combined_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 1); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(1)); }
}

bool ViewLayer_use_pass_z_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 2) != 0);
}

void ViewLayer_use_pass_z_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 2); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(2)); }
}

bool ViewLayer_use_pass_vector_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 512) != 0);
}

void ViewLayer_use_pass_vector_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 512); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(512)); }
}

bool ViewLayer_use_pass_position_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 128) != 0);
}

void ViewLayer_use_pass_position_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 128); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(128)); }
}

bool ViewLayer_use_pass_normal_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 256) != 0);
}

void ViewLayer_use_pass_normal_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 256); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(256)); }
}

bool ViewLayer_use_pass_uv_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 4096) != 0);
}

void ViewLayer_use_pass_uv_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 4096); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(4096)); }
}

bool ViewLayer_use_pass_mist_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 16384) != 0);
}

void ViewLayer_use_pass_mist_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 16384); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(16384)); }
}

bool ViewLayer_use_pass_object_index_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 2048) != 0);
}

void ViewLayer_use_pass_object_index_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 2048); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(2048)); }
}

bool ViewLayer_use_pass_material_index_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 262144) != 0);
}

void ViewLayer_use_pass_material_index_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 262144); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(262144)); }
}

bool ViewLayer_use_pass_shadow_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 32) != 0);
}

void ViewLayer_use_pass_shadow_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 32); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(32)); }
}

bool ViewLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 64) != 0);
}

void ViewLayer_use_pass_ambient_occlusion_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 64); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(64)); }
}

bool ViewLayer_use_pass_emit_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 65536) != 0);
}

void ViewLayer_use_pass_emit_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 65536); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(65536)); }
}

bool ViewLayer_use_pass_environment_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 131072) != 0);
}

void ViewLayer_use_pass_environment_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 131072); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(131072)); }
}

bool ViewLayer_use_pass_diffuse_direct_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 524288) != 0);
}

void ViewLayer_use_pass_diffuse_direct_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 524288); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(524288)); }
}

bool ViewLayer_use_pass_diffuse_indirect_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 1048576) != 0);
}

void ViewLayer_use_pass_diffuse_indirect_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 1048576); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(1048576)); }
}

bool ViewLayer_use_pass_diffuse_color_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 2097152) != 0);
}

void ViewLayer_use_pass_diffuse_color_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 2097152); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(2097152)); }
}

bool ViewLayer_use_pass_glossy_direct_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 4194304) != 0);
}

void ViewLayer_use_pass_glossy_direct_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 4194304); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(4194304)); }
}

bool ViewLayer_use_pass_glossy_indirect_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 8388608) != 0);
}

void ViewLayer_use_pass_glossy_indirect_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 8388608); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(8388608)); }
}

bool ViewLayer_use_pass_glossy_color_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 16777216) != 0);
}

void ViewLayer_use_pass_glossy_color_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 16777216); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(16777216)); }
}

bool ViewLayer_use_pass_transmission_direct_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 33554432) != 0);
}

void ViewLayer_use_pass_transmission_direct_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 33554432); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(33554432)); }
}

bool ViewLayer_use_pass_transmission_indirect_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 67108864) != 0);
}

void ViewLayer_use_pass_transmission_indirect_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 67108864); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(67108864)); }
}

bool ViewLayer_use_pass_transmission_color_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 134217728) != 0);
}

void ViewLayer_use_pass_transmission_color_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 134217728); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(134217728)); }
}

bool ViewLayer_use_pass_subsurface_direct_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 268435456) != 0);
}

void ViewLayer_use_pass_subsurface_direct_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 268435456); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(268435456)); }
}

bool ViewLayer_use_pass_subsurface_indirect_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 536870912) != 0);
}

void ViewLayer_use_pass_subsurface_indirect_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 536870912); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(536870912)); }
}

bool ViewLayer_use_pass_subsurface_color_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->passflag) & 1073741824) != 0);
}

void ViewLayer_use_pass_subsurface_color_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) | 1073741824); }
    else { data->passflag = std::remove_reference_t<decltype(data->passflag)>(uint64_t(data->passflag) & ~uint64_t(1073741824)); }
}

PointerRNA ViewLayer_layer_collection_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_LayerCollection, data->layer_collections.first);
}

PointerRNA ViewLayer_active_layer_collection_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ViewLayer_active_layer_collection_get;
    return fn(ptr);
}

void ViewLayer_active_layer_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_ViewLayer_active_layer_collection_set;
    fn(ptr, value, reports);
}

static PointerRNA ViewLayer_objects_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_ViewLayer_objects_get;
    return fn(iter);
}

void ViewLayer_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ViewLayer_objects;

    rna_iterator_listbase_begin(iter, ptr, &data->object_bases, nullptr);

    if (iter->valid) {
        iter->ptr = ViewLayer_objects_get(iter);
    }
}

void ViewLayer_objects_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ViewLayer_objects_get(iter);
    }
}

void ViewLayer_objects_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ViewLayer_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    ViewLayer_objects_begin(&iter, ptr);

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
        if (found) { *r_ptr = ViewLayer_objects_get(&iter); }
    }

    ViewLayer_objects_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool ViewLayer_objects_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    ViewLayer_objects_begin(&iter, ptr);

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
        ViewLayer_objects_next(&iter);
    }
    ViewLayer_objects_end(&iter);

    return found;
}

bool ViewLayer_use_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ViewLayer_use_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ViewLayer_has_export_collections_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

bool ViewLayer_use_freestyle_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void ViewLayer_use_freestyle_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

PointerRNA ViewLayer_freestyle_settings_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_FreestyleSettings, &data->freestyle_config);
}

bool ViewLayer_use_pass_grease_pencil_get(PointerRNA *ptr)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    return ((uint64_t(data->grease_pencil_flags) & 1) != 0);
}

void ViewLayer_use_pass_grease_pencil_set(PointerRNA *ptr, bool value)
{
    ViewLayer *data = (ViewLayer *)(ptr->data);
    if (value) { data->grease_pencil_flags = std::remove_reference_t<decltype(data->grease_pencil_flags)>(uint64_t(data->grease_pencil_flags) | 1); }
    else { data->grease_pencil_flags = std::remove_reference_t<decltype(data->grease_pencil_flags)>(uint64_t(data->grease_pencil_flags) & ~uint64_t(1)); }
}

PointerRNA ViewLayer_depsgraph_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_ViewLayer_depsgraph_get;
    return fn(ptr);
}

static PointerRNA AOVs_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AOVs_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AOVs_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AOVs_rna_properties_get(iter);
    }
}

void AOVs_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AOVs_rna_properties_get(iter);
    }
}

void AOVs_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AOVs_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AOVs_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA Lightgroups_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Lightgroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Lightgroups_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Lightgroups_rna_properties_get(iter);
    }
}

void Lightgroups_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Lightgroups_rna_properties_get(iter);
    }
}

void Lightgroups_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Lightgroups_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Lightgroups_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA LayerObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void LayerObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_LayerObjects_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = LayerObjects_rna_properties_get(iter);
    }
}

void LayerObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = LayerObjects_rna_properties_get(iter);
    }
}

void LayerObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool LayerObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA LayerObjects_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA LayerObjects_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_LayerObjects_active_object_get;
    return fn(ptr);
}

void LayerObjects_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_LayerObjects_active_object_set;
    fn(ptr, value, reports);
}

static PointerRNA LayerObjects_selected_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_ViewLayer_objects_get;
    return fn(iter);
}

void LayerObjects_selected_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_LayerObjects_selected;

    PropCollectionBeginFunc fn = rna_LayerObjects_selected_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = LayerObjects_selected_get(iter);
    }
}

void LayerObjects_selected_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = LayerObjects_selected_get(iter);
    }
}

void LayerObjects_selected_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool LayerObjects_selected_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    LayerObjects_selected_begin(&iter, ptr);

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
        if (found) { *r_ptr = LayerObjects_selected_get(&iter); }
    }

    LayerObjects_selected_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool LayerObjects_selected_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    LayerObjects_selected_begin(&iter, ptr);

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
        LayerObjects_selected_next(&iter);
    }
    LayerObjects_selected_end(&iter);

    return found;
}

static PointerRNA FreestyleLineSet_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FreestyleLineSet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FreestyleLineSet_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FreestyleLineSet_rna_properties_get(iter);
    }
}

void FreestyleLineSet_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FreestyleLineSet_rna_properties_get(iter);
    }
}

void FreestyleLineSet_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FreestyleLineSet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FreestyleLineSet_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA FreestyleLineSet_linestyle_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_FreestyleLineSet_linestyle_get;
    return fn(ptr);
}

void FreestyleLineSet_linestyle_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_FreestyleLineSet_linestyle_set;
    fn(ptr, value, reports);
}

void FreestyleLineSet_name_get(PointerRNA *ptr, char *value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int FreestyleLineSet_name_length(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return strlen(data->name);
}

void FreestyleLineSet_name_set(PointerRNA *ptr, const char *value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 64);
}

bool FreestyleLineSet_show_render_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void FreestyleLineSet_show_render_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

bool FreestyleLineSet_select_by_visibility_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->selection) & 1) != 0);
}

void FreestyleLineSet_select_by_visibility_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) | 1); }
    else { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) & ~uint64_t(1)); }
}

bool FreestyleLineSet_select_by_edge_types_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->selection) & 2) != 0);
}

void FreestyleLineSet_select_by_edge_types_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) | 2); }
    else { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) & ~uint64_t(2)); }
}

bool FreestyleLineSet_select_by_collection_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->selection) & 4) != 0);
}

void FreestyleLineSet_select_by_collection_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) | 4); }
    else { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) & ~uint64_t(4)); }
}

bool FreestyleLineSet_select_by_image_border_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->selection) & 8) != 0);
}

void FreestyleLineSet_select_by_image_border_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) | 8); }
    else { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) & ~uint64_t(8)); }
}

bool FreestyleLineSet_select_by_face_marks_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->selection) & 16) != 0);
}

void FreestyleLineSet_select_by_face_marks_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) | 16); }
    else { data->selection = std::remove_reference_t<decltype(data->selection)>(uint64_t(data->selection) & ~uint64_t(16)); }
}

int FreestyleLineSet_edge_type_negation_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (uint64_t(data->flags) & 4);
}

void FreestyleLineSet_edge_type_negation_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4));
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | uint64_t(value));
}

int FreestyleLineSet_edge_type_combination_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (uint64_t(data->flags) & 8);
}

void FreestyleLineSet_edge_type_combination_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8));
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | uint64_t(value));
}

PointerRNA FreestyleLineSet_collection_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->group);
}

void FreestyleLineSet_collection_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->group = value.data;
}

int FreestyleLineSet_collection_negation_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (uint64_t(data->flags) & 16);
}

void FreestyleLineSet_collection_negation_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(16));
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | uint64_t(value));
}

int FreestyleLineSet_face_mark_negation_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (uint64_t(data->flags) & 32);
}

void FreestyleLineSet_face_mark_negation_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32));
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | uint64_t(value));
}

int FreestyleLineSet_face_mark_condition_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (uint64_t(data->flags) & 64);
}

void FreestyleLineSet_face_mark_condition_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(64));
    data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | uint64_t(value));
}

bool FreestyleLineSet_select_silhouette_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 1) != 0);
}

void FreestyleLineSet_select_silhouette_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 1); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(1)); }
}

bool FreestyleLineSet_select_border_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 2) != 0);
}

void FreestyleLineSet_select_border_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 2); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(2)); }
}

bool FreestyleLineSet_select_crease_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 4) != 0);
}

void FreestyleLineSet_select_crease_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 4); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(4)); }
}

bool FreestyleLineSet_select_ridge_valley_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 8) != 0);
}

void FreestyleLineSet_select_ridge_valley_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 8); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(8)); }
}

bool FreestyleLineSet_select_suggestive_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 32) != 0);
}

void FreestyleLineSet_select_suggestive_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 32); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(32)); }
}

bool FreestyleLineSet_select_material_boundary_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 64) != 0);
}

void FreestyleLineSet_select_material_boundary_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 64); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(64)); }
}

bool FreestyleLineSet_select_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 128) != 0);
}

void FreestyleLineSet_select_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 128); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(128)); }
}

bool FreestyleLineSet_select_external_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 256) != 0);
}

void FreestyleLineSet_select_external_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 256); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(256)); }
}

bool FreestyleLineSet_select_edge_mark_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->edge_types) & 512) != 0);
}

void FreestyleLineSet_select_edge_mark_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) | 512); }
    else { data->edge_types = std::remove_reference_t<decltype(data->edge_types)>(uint64_t(data->edge_types) & ~uint64_t(512)); }
}

bool FreestyleLineSet_exclude_silhouette_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 1) != 0);
}

void FreestyleLineSet_exclude_silhouette_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 1); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(1)); }
}

bool FreestyleLineSet_exclude_border_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 2) != 0);
}

void FreestyleLineSet_exclude_border_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 2); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(2)); }
}

bool FreestyleLineSet_exclude_crease_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 4) != 0);
}

void FreestyleLineSet_exclude_crease_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 4); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(4)); }
}

bool FreestyleLineSet_exclude_ridge_valley_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 8) != 0);
}

void FreestyleLineSet_exclude_ridge_valley_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 8); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(8)); }
}

bool FreestyleLineSet_exclude_suggestive_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 32) != 0);
}

void FreestyleLineSet_exclude_suggestive_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 32); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(32)); }
}

bool FreestyleLineSet_exclude_material_boundary_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 64) != 0);
}

void FreestyleLineSet_exclude_material_boundary_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 64); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(64)); }
}

bool FreestyleLineSet_exclude_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 128) != 0);
}

void FreestyleLineSet_exclude_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 128); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(128)); }
}

bool FreestyleLineSet_exclude_external_contour_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 256) != 0);
}

void FreestyleLineSet_exclude_external_contour_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 256); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(256)); }
}

bool FreestyleLineSet_exclude_edge_mark_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return ((uint64_t(data->exclude_edge_types) & 512) != 0);
}

void FreestyleLineSet_exclude_edge_mark_set(PointerRNA *ptr, bool value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    if (value) { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) | 512); }
    else { data->exclude_edge_types = std::remove_reference_t<decltype(data->exclude_edge_types)>(uint64_t(data->exclude_edge_types) & ~uint64_t(512)); }
}

int FreestyleLineSet_visibility_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (int)(data->qi);
}

void FreestyleLineSet_visibility_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->qi = (std::remove_reference_t<decltype(data->qi)>)value;
}

int FreestyleLineSet_qi_start_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (int)(data->qi_start);
}

void FreestyleLineSet_qi_start_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->qi_start = (std::remove_reference_t<decltype(data->qi_start)>)std::clamp(value, 0, INT_MAX);
}

int FreestyleLineSet_qi_end_get(PointerRNA *ptr)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    return (int)(data->qi_end);
}

void FreestyleLineSet_qi_end_set(PointerRNA *ptr, int value)
{
    FreestyleLineSet *data = (FreestyleLineSet *)(ptr->data);
    data->qi_end = (std::remove_reference_t<decltype(data->qi_end)>)std::clamp(value, 0, INT_MAX);
}

static PointerRNA FreestyleModuleSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FreestyleModuleSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FreestyleModuleSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FreestyleModuleSettings_rna_properties_get(iter);
    }
}

void FreestyleModuleSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FreestyleModuleSettings_rna_properties_get(iter);
    }
}

void FreestyleModuleSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FreestyleModuleSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FreestyleModuleSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA FreestyleModuleSettings_script_get(PointerRNA *ptr)
{
    FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Text, data->script);
}

void FreestyleModuleSettings_script_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->script = value.data;
}

bool FreestyleModuleSettings_use_get(PointerRNA *ptr)
{
    FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
    return ((uint64_t(data->is_displayed) & 1) != 0);
}

void FreestyleModuleSettings_use_set(PointerRNA *ptr, bool value)
{
    FreestyleModuleConfig *data = (FreestyleModuleConfig *)(ptr->data);
    if (value) { data->is_displayed = std::remove_reference_t<decltype(data->is_displayed)>(uint64_t(data->is_displayed) | 1); }
    else { data->is_displayed = std::remove_reference_t<decltype(data->is_displayed)>(uint64_t(data->is_displayed) & ~uint64_t(1)); }
}

static PointerRNA FreestyleSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FreestyleSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FreestyleSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_rna_properties_get(iter);
    }
}

void FreestyleSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_rna_properties_get(iter);
    }
}

void FreestyleSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FreestyleSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FreestyleSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA FreestyleSettings_modules_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FreestyleModuleSettings, rna_iterator_listbase_get(iter));
}

void FreestyleSettings_modules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FreestyleSettings_modules;

    rna_iterator_listbase_begin(iter, ptr, &data->modules, nullptr);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_modules_get(iter);
    }
}

void FreestyleSettings_modules_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_modules_get(iter);
    }
}

void FreestyleSettings_modules_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FreestyleSettings_modules_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    FreestyleSettings_modules_begin(&iter, ptr);

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
        if (found) { *r_ptr = FreestyleSettings_modules_get(&iter); }
    }

    FreestyleSettings_modules_end(&iter);

    return found;
}

int FreestyleSettings_mode_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (int)(data->mode);
}

void FreestyleSettings_mode_set(PointerRNA *ptr, int value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    data->mode = (std::remove_reference_t<decltype(data->mode)>)value;
}

bool FreestyleSettings_use_culling_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return ((uint64_t(data->flags) & 32) != 0);
}

void FreestyleSettings_use_culling_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 32); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(32)); }
}

bool FreestyleSettings_use_suggestive_contours_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return ((uint64_t(data->flags) & 1) != 0);
}

void FreestyleSettings_use_suggestive_contours_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 1); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(1)); }
}

bool FreestyleSettings_use_ridges_and_valleys_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return ((uint64_t(data->flags) & 2) != 0);
}

void FreestyleSettings_use_ridges_and_valleys_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 2); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(2)); }
}

bool FreestyleSettings_use_material_boundaries_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return ((uint64_t(data->flags) & 4) != 0);
}

void FreestyleSettings_use_material_boundaries_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 4); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(4)); }
}

bool FreestyleSettings_use_smoothness_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return ((uint64_t(data->flags) & 8) != 0);
}

void FreestyleSettings_use_smoothness_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 8); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(8)); }
}

bool FreestyleSettings_use_view_map_cache_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return ((uint64_t(data->flags) & 64) != 0);
}

void FreestyleSettings_use_view_map_cache_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 64); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(64)); }
}

bool FreestyleSettings_as_render_pass_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return ((uint64_t(data->flags) & 128) != 0);
}

void FreestyleSettings_as_render_pass_set(PointerRNA *ptr, bool value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    if (value) { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) | 128); }
    else { data->flags = std::remove_reference_t<decltype(data->flags)>(uint64_t(data->flags) & ~uint64_t(128)); }
}

float FreestyleSettings_sphere_radius_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (float)(data->sphere_radius);
}

void FreestyleSettings_sphere_radius_set(PointerRNA *ptr, float value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    data->sphere_radius = (std::remove_reference_t<decltype(data->sphere_radius)>)std::clamp(value, 0.0f, 1000.0f);
}

float FreestyleSettings_kr_derivative_epsilon_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (float)(data->dkr_epsilon);
}

void FreestyleSettings_kr_derivative_epsilon_set(PointerRNA *ptr, float value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    data->dkr_epsilon = (std::remove_reference_t<decltype(data->dkr_epsilon)>)std::clamp(value, -1000.0f, 1000.0f);
}

float FreestyleSettings_crease_angle_get(PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    return (float)(data->crease_angle);
}

void FreestyleSettings_crease_angle_set(PointerRNA *ptr, float value)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);
    data->crease_angle = (std::remove_reference_t<decltype(data->crease_angle)>)std::clamp(value, 0.0f, 3.1415927410f);
}

static PointerRNA FreestyleSettings_linesets_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FreestyleLineSet, rna_iterator_listbase_get(iter));
}

void FreestyleSettings_linesets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    FreestyleConfig *data = (FreestyleConfig *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FreestyleSettings_linesets;

    rna_iterator_listbase_begin(iter, ptr, &data->linesets, nullptr);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_linesets_get(iter);
    }
}

void FreestyleSettings_linesets_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FreestyleSettings_linesets_get(iter);
    }
}

void FreestyleSettings_linesets_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FreestyleSettings_linesets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    FreestyleSettings_linesets_begin(&iter, ptr);

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
        if (found) { *r_ptr = FreestyleSettings_linesets_get(&iter); }
    }

    FreestyleSettings_linesets_end(&iter);

    return found;
}

int FreestyleLineSet_name_length(PointerRNA *);
void FreestyleLineSet_name_get(PointerRNA *, char *);

bool FreestyleSettings_linesets_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    FreestyleSettings_linesets_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = FreestyleLineSet_name_length(&iter.ptr);
            if (namelen < 1024) {
                FreestyleLineSet_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                FreestyleLineSet_name_get(&iter.ptr, name);
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
        FreestyleSettings_linesets_next(&iter);
    }
    FreestyleSettings_linesets_end(&iter);

    return found;
}

static PointerRNA FreestyleModules_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void FreestyleModules_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_FreestyleModules_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = FreestyleModules_rna_properties_get(iter);
    }
}

void FreestyleModules_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = FreestyleModules_rna_properties_get(iter);
    }
}

void FreestyleModules_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool FreestyleModules_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA FreestyleModules_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA Linesets_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Linesets_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Linesets_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Linesets_rna_properties_get(iter);
    }
}

void Linesets_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Linesets_rna_properties_get(iter);
    }
}

void Linesets_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Linesets_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Linesets_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA Linesets_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_FreestyleSettings_active_lineset_get;
    return fn(ptr);
}

int Linesets_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_FreestyleSettings_active_lineset_index_get;
    return fn(ptr);
}

void Linesets_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_FreestyleSettings_active_lineset_index_set;
    fn(ptr, value);
}

static PointerRNA LayerCollection_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void LayerCollection_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_LayerCollection_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = LayerCollection_rna_properties_get(iter);
    }
}

void LayerCollection_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = LayerCollection_rna_properties_get(iter);
    }
}

void LayerCollection_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool LayerCollection_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA LayerCollection_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA LayerCollection_collection_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Collection, data->collection);
}

void LayerCollection_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_LayerCollection_name_get;
    fn(ptr, value);
}

int LayerCollection_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_LayerCollection_name_length;
    return fn(ptr);
}

static PointerRNA LayerCollection_children_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_LayerCollection, rna_iterator_listbase_get(iter));
}

void LayerCollection_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_LayerCollection_children;

    PropCollectionBeginFunc fn = rna_LayerCollection_children_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = LayerCollection_children_get(iter);
    }
}

void LayerCollection_children_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = LayerCollection_children_get(iter);
    }
}

void LayerCollection_children_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool LayerCollection_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_LayerCollection_children_lookupint;
    return fn(ptr, index, r_ptr);
}

bool LayerCollection_children_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_LayerCollection_children_lookupstring;
    return fn(ptr, key, r_ptr);
}

bool LayerCollection_exclude_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return ((uint64_t(data->flag) & 16) != 0);
}

void LayerCollection_exclude_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_LayerCollection_exclude_set;
    fn(ptr, value);
}

bool LayerCollection_holdout_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return ((uint64_t(data->flag) & 32) != 0);
}

void LayerCollection_holdout_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_LayerCollection_holdout_set;
    fn(ptr, value);
}

bool LayerCollection_indirect_only_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return ((uint64_t(data->flag) & 64) != 0);
}

void LayerCollection_indirect_only_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_LayerCollection_indirect_only_set;
    fn(ptr, value);
}

bool LayerCollection_hide_viewport_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return ((uint64_t(data->flag) & 128) != 0);
}

void LayerCollection_hide_viewport_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_LayerCollection_hide_viewport_set;
    fn(ptr, value);
}

bool LayerCollection_is_visible_get(PointerRNA *ptr)
{
    LayerCollection *data = (LayerCollection *)(ptr->data);
    return ((uint64_t(data->runtime_flag) & 16) != 0);
}

static PointerRNA ObjectBase_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ObjectBase_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ObjectBase_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ObjectBase_rna_properties_get(iter);
    }
}

void ObjectBase_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ObjectBase_rna_properties_get(iter);
    }
}

void ObjectBase_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ObjectBase_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ObjectBase_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA ObjectBase_object_get(PointerRNA *ptr)
{
    Base *data = (Base *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->object);
}

bool ObjectBase_select_get(PointerRNA *ptr)
{
    Base *data = (Base *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void ObjectBase_select_set(PointerRNA *ptr, bool value)
{
    Base *data = (Base *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool ObjectBase_hide_viewport_get(PointerRNA *ptr)
{
    Base *data = (Base *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void ObjectBase_hide_viewport_set(PointerRNA *ptr, bool value)
{
    Base *data = (Base *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

IDPropertyGroup *ViewLayer_bl_system_properties_get_func(PointerRNA _self, bool do_create)
{
	return rna_struct_system_properties_get_func(_self, do_create);
}

static void ViewLayer_bl_system_properties_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
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

void ViewLayer_update_render_passes_func(ID *_selfid, Main *bmain)
{
	rna_ViewLayer_update_render_passes(_selfid, bmain);
}

static void ViewLayer_update_render_passes_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	_selfid = (ID *)_ptr->owner_id;
	
	rna_ViewLayer_update_render_passes(_selfid, CTX_data_main(C));
}

void ViewLayer_update_func(ID *_selfid, ViewLayer *_self, Main *bmain, ReportList *reports)
{
	rna_ViewLayer_update_tagged(_selfid, _self, bmain, reports);
}

static void ViewLayer_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	ViewLayer *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (ViewLayer *)_ptr->data;
	
	rna_ViewLayer_update_tagged(_selfid, _self, CTX_data_main(C), reports);
}

/* Repeated prototypes to detect errors */

IDPropertyGroup *rna_struct_system_properties_get_func(PointerRNA _self, bool do_create);
void rna_ViewLayer_update_render_passes(ID *_selfid, Main *bmain);
void rna_ViewLayer_update_tagged(ID *_selfid, ViewLayer *_self, Main *bmain, ReportList *reports);

ViewLayerAOV *AOVs_add_func(ViewLayer *_self)
{
	return BKE_view_layer_add_aov(_self);
}

static void AOVs_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ViewLayer *_self;
	ViewLayerAOV *aov;
	char *_data, *_retdata;
	
	_self = (ViewLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	aov = BKE_view_layer_add_aov(_self);
	*((ViewLayerAOV **)_retdata) = aov;
}

void AOVs_remove_func(ViewLayer *_self, ReportList *reports, ViewLayerAOV *aov)
{
	rna_ViewLayer_remove_aov(_self, reports, aov);
}

static void AOVs_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ViewLayer *_self;
	ViewLayerAOV *aov;
	char *_data;
	
	_self = (ViewLayer *)_ptr->data;
	_data = (char *)_parms->data;
	aov = *((ViewLayerAOV **)_data);
	
	rna_ViewLayer_remove_aov(_self, reports, aov);
}

/* Repeated prototypes to detect errors */

ViewLayerAOV *BKE_view_layer_add_aov(ViewLayer *_self);
void rna_ViewLayer_remove_aov(ViewLayer *_self, ReportList *reports, ViewLayerAOV *aov);

ViewLayerLightgroup *Lightgroups_add_func(ViewLayer *_self, const char * name)
{
	return BKE_view_layer_add_lightgroup(_self, name);
}

static void Lightgroups_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ViewLayer *_self;
	ViewLayerLightgroup *lightgroup;
	const char * name;
	char *_data, *_retdata;
	
	_self = (ViewLayer *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	_data += 8;
	name = *((const char * *)_data);
	
	lightgroup = BKE_view_layer_add_lightgroup(_self, name);
	*((ViewLayerLightgroup **)_retdata) = lightgroup;
}

void Lightgroups_remove_func(ViewLayer *_self, ViewLayerLightgroup *lightgroup)
{
	BKE_view_layer_remove_lightgroup(_self, lightgroup);
}

static void Lightgroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ViewLayer *_self;
	ViewLayerLightgroup *lightgroup;
	char *_data;
	
	_self = (ViewLayer *)_ptr->data;
	_data = (char *)_parms->data;
	lightgroup = *((ViewLayerLightgroup **)_data);
	
	BKE_view_layer_remove_lightgroup(_self, lightgroup);
}

/* Repeated prototypes to detect errors */

ViewLayerLightgroup *BKE_view_layer_add_lightgroup(ViewLayer *_self, const char * name);
void BKE_view_layer_remove_lightgroup(ViewLayer *_self, ViewLayerLightgroup *lightgroup);





FreestyleModuleConfig *FreestyleModules_new_func(ID *_selfid, FreestyleSettings *_self)
{
	return rna_FreestyleSettings_module_add(_selfid, _self);
}

static void FreestyleModules_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FreestyleSettings *_self;
	FreestyleModuleConfig *module;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	module = rna_FreestyleSettings_module_add(_selfid, _self);
	*((FreestyleModuleConfig **)_retdata) = module;
}

void FreestyleModules_remove_func(ID *_selfid, FreestyleSettings *_self, ReportList *reports, PointerRNA *module)
{
	rna_FreestyleSettings_module_remove(_selfid, _self, reports, module);
}

static void FreestyleModules_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FreestyleSettings *_self;
	PointerRNA *module;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	module = *((PointerRNA **)_data);
	
	rna_FreestyleSettings_module_remove(_selfid, _self, reports, module);
}

/* Repeated prototypes to detect errors */

FreestyleModuleConfig *rna_FreestyleSettings_module_add(ID *_selfid, FreestyleSettings *_self);
void rna_FreestyleSettings_module_remove(ID *_selfid, FreestyleSettings *_self, ReportList *reports, PointerRNA *module);

FreestyleLineSet *Linesets_new_func(ID *_selfid, FreestyleSettings *_self, Main *bmain, const char * name)
{
	return rna_FreestyleSettings_lineset_add(_selfid, _self, bmain, name);
}

static void Linesets_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FreestyleSettings *_self;
	const char * name;
	FreestyleLineSet *lineset;
	char *_data, *_retdata;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	lineset = rna_FreestyleSettings_lineset_add(_selfid, _self, CTX_data_main(C), name);
	*((FreestyleLineSet **)_retdata) = lineset;
}

void Linesets_remove_func(ID *_selfid, FreestyleSettings *_self, ReportList *reports, PointerRNA *lineset)
{
	rna_FreestyleSettings_lineset_remove(_selfid, _self, reports, lineset);
}

static void Linesets_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	FreestyleSettings *_self;
	PointerRNA *lineset;
	char *_data;
	
	_selfid = (ID *)_ptr->owner_id;
	_self = (FreestyleSettings *)_ptr->data;
	_data = (char *)_parms->data;
	lineset = *((PointerRNA **)_data);
	
	rna_FreestyleSettings_lineset_remove(_selfid, _self, reports, lineset);
}

/* Repeated prototypes to detect errors */

FreestyleLineSet *rna_FreestyleSettings_lineset_add(ID *_selfid, FreestyleSettings *_self, Main *bmain, const char * name);
void rna_FreestyleSettings_lineset_remove(ID *_selfid, FreestyleSettings *_self, ReportList *reports, PointerRNA *lineset);

bool LayerCollection_visible_get_func(LayerCollection *_self, bContext *C)
{
	return rna_LayerCollection_visible_get(_self, C);
}

static void LayerCollection_visible_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	LayerCollection *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (LayerCollection *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_LayerCollection_visible_get(_self, C);
	*((bool *)_retdata) = result;
}

bool LayerCollection_has_objects_func(LayerCollection *_self)
{
	return rna_LayerCollection_has_objects(_self);
}

static void LayerCollection_has_objects_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	LayerCollection *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (LayerCollection *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_LayerCollection_has_objects(_self);
	*((bool *)_retdata) = result;
}

bool LayerCollection_has_selected_objects_func(LayerCollection *_self, Main *bmain, ViewLayer *view_layer)
{
	return rna_LayerCollection_has_selected_objects(_self, bmain, view_layer);
}

static void LayerCollection_has_selected_objects_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	LayerCollection *_self;
	ViewLayer *view_layer;
	bool result;
	char *_data, *_retdata;
	
	_self = (LayerCollection *)_ptr->data;
	_data = (char *)_parms->data;
	view_layer = *((ViewLayer **)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_LayerCollection_has_selected_objects(_self, CTX_data_main(C), view_layer);
	*((bool *)_retdata) = result;
}

/* Repeated prototypes to detect errors */

bool rna_LayerCollection_visible_get(LayerCollection *_self, bContext *C);
bool rna_LayerCollection_has_objects(LayerCollection *_self);
bool rna_LayerCollection_has_selected_objects(LayerCollection *_self, Main *bmain, ViewLayer *view_layer);


/* View Layer */
static CollectionPropertyRNA rna_ViewLayer_rna_properties_;
PropertyRNA &rna_ViewLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_rna_properties_);

static PointerPropertyRNA rna_ViewLayer_rna_type_;
PropertyRNA &rna_ViewLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_rna_type_);

static StringPropertyRNA rna_ViewLayer_name_;
PropertyRNA &rna_ViewLayer_name = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_name_);

static PointerPropertyRNA rna_ViewLayer_material_override_;
PropertyRNA &rna_ViewLayer_material_override = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_material_override_);

static PointerPropertyRNA rna_ViewLayer_world_override_;
PropertyRNA &rna_ViewLayer_world_override = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_world_override_);

static IntPropertyRNA rna_ViewLayer_samples_;
PropertyRNA &rna_ViewLayer_samples = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_samples_);

static FloatPropertyRNA rna_ViewLayer_pass_alpha_threshold_;
PropertyRNA &rna_ViewLayer_pass_alpha_threshold = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_pass_alpha_threshold_);

static PointerPropertyRNA rna_ViewLayer_eevee_;
PropertyRNA &rna_ViewLayer_eevee = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_eevee_);

static CollectionPropertyRNA rna_ViewLayer_aovs_;
PropertyRNA &rna_ViewLayer_aovs = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_aovs_);

static PointerPropertyRNA rna_ViewLayer_active_aov_;
PropertyRNA &rna_ViewLayer_active_aov = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_active_aov_);

static IntPropertyRNA rna_ViewLayer_active_aov_index_;
PropertyRNA &rna_ViewLayer_active_aov_index = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_active_aov_index_);

static CollectionPropertyRNA rna_ViewLayer_lightgroups_;
PropertyRNA &rna_ViewLayer_lightgroups = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_lightgroups_);

static PointerPropertyRNA rna_ViewLayer_active_lightgroup_;
PropertyRNA &rna_ViewLayer_active_lightgroup = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_active_lightgroup_);

static IntPropertyRNA rna_ViewLayer_active_lightgroup_index_;
PropertyRNA &rna_ViewLayer_active_lightgroup_index = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_active_lightgroup_index_);

static BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_object_;
PropertyRNA &rna_ViewLayer_use_pass_cryptomatte_object = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_cryptomatte_object_);

static BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_material_;
PropertyRNA &rna_ViewLayer_use_pass_cryptomatte_material = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_cryptomatte_material_);

static BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_asset_;
PropertyRNA &rna_ViewLayer_use_pass_cryptomatte_asset = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_cryptomatte_asset_);

static IntPropertyRNA rna_ViewLayer_pass_cryptomatte_depth_;
PropertyRNA &rna_ViewLayer_pass_cryptomatte_depth = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_pass_cryptomatte_depth_);

static BoolPropertyRNA rna_ViewLayer_use_pass_cryptomatte_accurate_;
PropertyRNA &rna_ViewLayer_use_pass_cryptomatte_accurate = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_cryptomatte_accurate_);

static BoolPropertyRNA rna_ViewLayer_use_solid_;
PropertyRNA &rna_ViewLayer_use_solid = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_solid_);

static BoolPropertyRNA rna_ViewLayer_use_sky_;
PropertyRNA &rna_ViewLayer_use_sky = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_sky_);

static BoolPropertyRNA rna_ViewLayer_use_ao_;
PropertyRNA &rna_ViewLayer_use_ao = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_ao_);

static BoolPropertyRNA rna_ViewLayer_use_strand_;
PropertyRNA &rna_ViewLayer_use_strand = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_strand_);

static BoolPropertyRNA rna_ViewLayer_use_volumes_;
PropertyRNA &rna_ViewLayer_use_volumes = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_volumes_);

static BoolPropertyRNA rna_ViewLayer_use_motion_blur_;
PropertyRNA &rna_ViewLayer_use_motion_blur = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_motion_blur_);

static BoolPropertyRNA rna_ViewLayer_use_grease_pencil_;
PropertyRNA &rna_ViewLayer_use_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_grease_pencil_);

static BoolPropertyRNA rna_ViewLayer_use_pass_combined_;
PropertyRNA &rna_ViewLayer_use_pass_combined = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_combined_);

static BoolPropertyRNA rna_ViewLayer_use_pass_z_;
PropertyRNA &rna_ViewLayer_use_pass_z = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_z_);

static BoolPropertyRNA rna_ViewLayer_use_pass_vector_;
PropertyRNA &rna_ViewLayer_use_pass_vector = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_vector_);

static BoolPropertyRNA rna_ViewLayer_use_pass_position_;
PropertyRNA &rna_ViewLayer_use_pass_position = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_position_);

static BoolPropertyRNA rna_ViewLayer_use_pass_normal_;
PropertyRNA &rna_ViewLayer_use_pass_normal = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_normal_);

static BoolPropertyRNA rna_ViewLayer_use_pass_uv_;
PropertyRNA &rna_ViewLayer_use_pass_uv = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_uv_);

static BoolPropertyRNA rna_ViewLayer_use_pass_mist_;
PropertyRNA &rna_ViewLayer_use_pass_mist = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_mist_);

static BoolPropertyRNA rna_ViewLayer_use_pass_object_index_;
PropertyRNA &rna_ViewLayer_use_pass_object_index = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_object_index_);

static BoolPropertyRNA rna_ViewLayer_use_pass_material_index_;
PropertyRNA &rna_ViewLayer_use_pass_material_index = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_material_index_);

static BoolPropertyRNA rna_ViewLayer_use_pass_shadow_;
PropertyRNA &rna_ViewLayer_use_pass_shadow = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_shadow_);

static BoolPropertyRNA rna_ViewLayer_use_pass_ambient_occlusion_;
PropertyRNA &rna_ViewLayer_use_pass_ambient_occlusion = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_ambient_occlusion_);

static BoolPropertyRNA rna_ViewLayer_use_pass_emit_;
PropertyRNA &rna_ViewLayer_use_pass_emit = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_emit_);

static BoolPropertyRNA rna_ViewLayer_use_pass_environment_;
PropertyRNA &rna_ViewLayer_use_pass_environment = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_environment_);

static BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_direct_;
PropertyRNA &rna_ViewLayer_use_pass_diffuse_direct = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_diffuse_direct_);

static BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_indirect_;
PropertyRNA &rna_ViewLayer_use_pass_diffuse_indirect = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_diffuse_indirect_);

static BoolPropertyRNA rna_ViewLayer_use_pass_diffuse_color_;
PropertyRNA &rna_ViewLayer_use_pass_diffuse_color = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_diffuse_color_);

static BoolPropertyRNA rna_ViewLayer_use_pass_glossy_direct_;
PropertyRNA &rna_ViewLayer_use_pass_glossy_direct = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_glossy_direct_);

static BoolPropertyRNA rna_ViewLayer_use_pass_glossy_indirect_;
PropertyRNA &rna_ViewLayer_use_pass_glossy_indirect = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_glossy_indirect_);

static BoolPropertyRNA rna_ViewLayer_use_pass_glossy_color_;
PropertyRNA &rna_ViewLayer_use_pass_glossy_color = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_glossy_color_);

static BoolPropertyRNA rna_ViewLayer_use_pass_transmission_direct_;
PropertyRNA &rna_ViewLayer_use_pass_transmission_direct = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_transmission_direct_);

static BoolPropertyRNA rna_ViewLayer_use_pass_transmission_indirect_;
PropertyRNA &rna_ViewLayer_use_pass_transmission_indirect = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_transmission_indirect_);

static BoolPropertyRNA rna_ViewLayer_use_pass_transmission_color_;
PropertyRNA &rna_ViewLayer_use_pass_transmission_color = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_transmission_color_);

static BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_direct_;
PropertyRNA &rna_ViewLayer_use_pass_subsurface_direct = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_subsurface_direct_);

static BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_indirect_;
PropertyRNA &rna_ViewLayer_use_pass_subsurface_indirect = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_subsurface_indirect_);

static BoolPropertyRNA rna_ViewLayer_use_pass_subsurface_color_;
PropertyRNA &rna_ViewLayer_use_pass_subsurface_color = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_subsurface_color_);

static PointerPropertyRNA rna_ViewLayer_layer_collection_;
PropertyRNA &rna_ViewLayer_layer_collection = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_layer_collection_);

static PointerPropertyRNA rna_ViewLayer_active_layer_collection_;
PropertyRNA &rna_ViewLayer_active_layer_collection = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_active_layer_collection_);

static CollectionPropertyRNA rna_ViewLayer_objects_;
PropertyRNA &rna_ViewLayer_objects = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_objects_);

static BoolPropertyRNA rna_ViewLayer_use_;
PropertyRNA &rna_ViewLayer_use = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_);

static BoolPropertyRNA rna_ViewLayer_has_export_collections_;
PropertyRNA &rna_ViewLayer_has_export_collections = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_has_export_collections_);

static BoolPropertyRNA rna_ViewLayer_use_freestyle_;
PropertyRNA &rna_ViewLayer_use_freestyle = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_freestyle_);

static PointerPropertyRNA rna_ViewLayer_freestyle_settings_;
PropertyRNA &rna_ViewLayer_freestyle_settings = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_freestyle_settings_);

static BoolPropertyRNA rna_ViewLayer_use_pass_grease_pencil_;
PropertyRNA &rna_ViewLayer_use_pass_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_use_pass_grease_pencil_);

static PointerPropertyRNA rna_ViewLayer_depsgraph_;
PropertyRNA &rna_ViewLayer_depsgraph = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_depsgraph_);

static BoolPropertyRNA rna_ViewLayer_bl_system_properties_get_do_create_;
PropertyRNA &rna_ViewLayer_bl_system_properties_get_do_create = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_bl_system_properties_get_do_create_);

static PointerPropertyRNA rna_ViewLayer_bl_system_properties_get_system_properties_;
PropertyRNA &rna_ViewLayer_bl_system_properties_get_system_properties = reinterpret_cast<PropertyRNA &>(rna_ViewLayer_bl_system_properties_get_system_properties_);

FunctionRNA *rna_ViewLayer_bl_system_properties_get_func;
FunctionRNA *rna_ViewLayer_update_render_passes_func;
FunctionRNA *rna_ViewLayer_update_func;
StructRNA *RNA_ViewLayer;
void register_struct_ViewLayer(BlenderRNA &brna)
{
	rna_ViewLayer_rna_properties_ = {
		{&rna_ViewLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_rna_properties_begin, ViewLayer_rna_properties_next, ViewLayer_rna_properties_end, ViewLayer_rna_properties_get, nullptr, nullptr, ViewLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ViewLayer_rna_type_ = {
		{&rna_ViewLayer_name, 	&rna_ViewLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ViewLayer_name_ = {
		{&rna_ViewLayer_material_override, 	&rna_ViewLayer_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"View layer name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_name_get, ViewLayer_name_length, ViewLayer_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_ViewLayer_material_override_ = {
		{&rna_ViewLayer_world_override, 	&rna_ViewLayer_name,
		-1, "material_override", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Material Override",
		"Material to override all other materials in this view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_override_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_material_override_get, ViewLayer_material_override_set, nullptr, nullptr,RNA_Material
	};

	rna_ViewLayer_world_override_ = {
		{&rna_ViewLayer_samples, 	&rna_ViewLayer_material_override,
		-1, "world_override", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "World Override",
		"Override world in this view layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_override_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_world_override_get, ViewLayer_world_override_set, nullptr, nullptr,RNA_World
	};

	rna_ViewLayer_samples_ = {
		{&rna_ViewLayer_pass_alpha_threshold, 	&rna_ViewLayer_world_override,
		-1, "samples", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Samples",
		"Override number of render samples for this view layer, 0 will use the scene setting",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ViewLayer, samples), RawPropertyType(0), nullptr},
		ViewLayer_samples_get, ViewLayer_samples_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_pass_alpha_threshold_ = {
		{&rna_ViewLayer_eevee, 	&rna_ViewLayer_samples,
		-1, "pass_alpha_threshold", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Alpha Threshold",
		"Z, Index, normal, UV and vector passes are only affected by surfaces with alpha transparency equal to or higher than this threshold",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ViewLayer, pass_alpha_threshold), RawPropertyType(5), nullptr},
		ViewLayer_pass_alpha_threshold_get, ViewLayer_pass_alpha_threshold_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.5000000000f, nullptr
	};

	rna_ViewLayer_eevee_ = {
		{&rna_ViewLayer_aovs, 	&rna_ViewLayer_pass_alpha_threshold,
		-1, "eevee", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "EEVEE Settings",
		"View layer settings for EEVEE",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_eevee_get, nullptr, nullptr, nullptr,RNA_ViewLayerEEVEE
	};

	rna_ViewLayer_aovs_ = {
		{&rna_ViewLayer_active_aov, 	&rna_ViewLayer_eevee,
		-1, "aovs", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shader AOV",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AOVs},
		ViewLayer_aovs_begin, ViewLayer_aovs_next, ViewLayer_aovs_end, ViewLayer_aovs_get, nullptr, ViewLayer_aovs_lookup_int, ViewLayer_aovs_lookup_string, nullptr, RNA_AOV
	};

	rna_ViewLayer_active_aov_ = {
		{&rna_ViewLayer_active_aov_index, 	&rna_ViewLayer_aovs,
		-1, "active_aov", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shader AOV",
		"Active AOV",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_active_aov_get, nullptr, nullptr, nullptr,RNA_AOV
	};

	rna_ViewLayer_active_aov_index_ = {
		{&rna_ViewLayer_lightgroups, 	&rna_ViewLayer_active_aov,
		-1, "active_aov_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active AOV Index",
		"Index of active AOV",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_active_aov_index_get, ViewLayer_active_aov_index_set, nullptr, nullptr, rna_ViewLayer_active_aov_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_lightgroups_ = {
		{&rna_ViewLayer_active_lightgroup, 	&rna_ViewLayer_active_aov_index,
		-1, "lightgroups", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Light Groups",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_Lightgroups},
		ViewLayer_lightgroups_begin, ViewLayer_lightgroups_next, ViewLayer_lightgroups_end, ViewLayer_lightgroups_get, nullptr, ViewLayer_lightgroups_lookup_int, ViewLayer_lightgroups_lookup_string, nullptr, RNA_Lightgroup
	};

	rna_ViewLayer_active_lightgroup_ = {
		{&rna_ViewLayer_active_lightgroup_index, 	&rna_ViewLayer_lightgroups,
		-1, "active_lightgroup", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Light Groups",
		"Active Lightgroup",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_active_lightgroup_get, nullptr, nullptr, nullptr,RNA_Lightgroup
	};

	rna_ViewLayer_active_lightgroup_index_ = {
		{&rna_ViewLayer_use_pass_cryptomatte_object, 	&rna_ViewLayer_active_lightgroup,
		-1, "active_lightgroup_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Lightgroup Index",
		"Index of active lightgroup",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_active_lightgroup_index_get, ViewLayer_active_lightgroup_index_set, nullptr, nullptr, rna_ViewLayer_active_lightgroup_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_cryptomatte_object_ = {
		{&rna_ViewLayer_use_pass_cryptomatte_material, 	&rna_ViewLayer_active_lightgroup_index,
		-1, "use_pass_cryptomatte_object", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cryptomatte Object",
		"Render cryptomatte object pass, for isolating objects in compositing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_cryptomatte_object_get, ViewLayer_use_pass_cryptomatte_object_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_cryptomatte_material_ = {
		{&rna_ViewLayer_use_pass_cryptomatte_asset, 	&rna_ViewLayer_use_pass_cryptomatte_object,
		-1, "use_pass_cryptomatte_material", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cryptomatte Material",
		"Render cryptomatte material pass, for isolating materials in compositing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_cryptomatte_material_get, ViewLayer_use_pass_cryptomatte_material_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_cryptomatte_asset_ = {
		{&rna_ViewLayer_pass_cryptomatte_depth, 	&rna_ViewLayer_use_pass_cryptomatte_material,
		-1, "use_pass_cryptomatte_asset", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cryptomatte Asset",
		"Render cryptomatte asset pass, for isolating groups of objects with the same parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_cryptomatte_asset_get, ViewLayer_use_pass_cryptomatte_asset_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_pass_cryptomatte_depth_ = {
		{&rna_ViewLayer_use_pass_cryptomatte_accurate, 	&rna_ViewLayer_use_pass_cryptomatte_asset,
		-1, "pass_cryptomatte_depth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Cryptomatte Levels",
		"Sets how many unique objects can be distinguished per pixel",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(ViewLayer, cryptomatte_levels), RawPropertyType(1), nullptr},
		ViewLayer_pass_cryptomatte_depth_get, ViewLayer_pass_cryptomatte_depth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 2, 16, 2, 16, 2, nullptr, nullptr, 6, nullptr
	};

	rna_ViewLayer_use_pass_cryptomatte_accurate_ = {
		{&rna_ViewLayer_use_solid, 	&rna_ViewLayer_pass_cryptomatte_depth,
		-1, "use_pass_cryptomatte_accurate", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cryptomatte Accurate",
		"Generate a more accurate cryptomatte pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_cryptomatte_accurate_get, ViewLayer_use_pass_cryptomatte_accurate_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_solid_ = {
		{&rna_ViewLayer_use_sky, 	&rna_ViewLayer_use_pass_cryptomatte_accurate,
		-1, "use_solid", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Solid",
		"Render Solid faces in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_solid_get, ViewLayer_use_solid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_sky_ = {
		{&rna_ViewLayer_use_ao, 	&rna_ViewLayer_use_solid,
		-1, "use_sky", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sky",
		"Render Sky in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_render_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_sky_get, ViewLayer_use_sky_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_ao_ = {
		{&rna_ViewLayer_use_strand, 	&rna_ViewLayer_use_sky,
		-1, "use_ao", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ambient Occlusion",
		"Render Ambient Occlusion in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_render_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_ao_get, ViewLayer_use_ao_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_strand_ = {
		{&rna_ViewLayer_use_volumes, 	&rna_ViewLayer_use_ao,
		-1, "use_strand", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Strand",
		"Render Strands in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_strand_get, ViewLayer_use_strand_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_volumes_ = {
		{&rna_ViewLayer_use_motion_blur, 	&rna_ViewLayer_use_strand,
		-1, "use_volumes", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Volumes",
		"Render volumes in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_volumes_get, ViewLayer_use_volumes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_motion_blur_ = {
		{&rna_ViewLayer_use_grease_pencil, 	&rna_ViewLayer_use_volumes,
		-1, "use_motion_blur", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Motion Blur",
		"Render motion blur in this Layer, if enabled in the scene",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_motion_blur_get, ViewLayer_use_motion_blur_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_grease_pencil_ = {
		{&rna_ViewLayer_use_pass_combined, 	&rna_ViewLayer_use_motion_blur,
		-1, "use_grease_pencil", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grease Pencil",
		"Render Grease Pencil on this layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_grease_pencil_get, ViewLayer_use_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_pass_combined_ = {
		{&rna_ViewLayer_use_pass_z, 	&rna_ViewLayer_use_grease_pencil,
		-1, "use_pass_combined", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Combined",
		"Deliver full combined RGBA buffer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_combined_get, ViewLayer_use_pass_combined_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_use_pass_z_ = {
		{&rna_ViewLayer_use_pass_vector, 	&rna_ViewLayer_use_pass_combined,
		-1, "use_pass_z", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Depth",
		"Deliver depth values pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_z_get, ViewLayer_use_pass_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_vector_ = {
		{&rna_ViewLayer_use_pass_position, 	&rna_ViewLayer_use_pass_z,
		-1, "use_pass_vector", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vector",
		"Deliver speed vector pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_vector_get, ViewLayer_use_pass_vector_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_position_ = {
		{&rna_ViewLayer_use_pass_normal, 	&rna_ViewLayer_use_pass_vector,
		-1, "use_pass_position", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Position",
		"Deliver position pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_position_get, ViewLayer_use_pass_position_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_normal_ = {
		{&rna_ViewLayer_use_pass_uv, 	&rna_ViewLayer_use_pass_position,
		-1, "use_pass_normal", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normal",
		"Deliver normal pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_normal_get, ViewLayer_use_pass_normal_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_uv_ = {
		{&rna_ViewLayer_use_pass_mist, 	&rna_ViewLayer_use_pass_normal,
		-1, "use_pass_uv", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV",
		"Deliver texture UV pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_uv_get, ViewLayer_use_pass_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_mist_ = {
		{&rna_ViewLayer_use_pass_object_index, 	&rna_ViewLayer_use_pass_uv,
		-1, "use_pass_mist", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mist",
		"Deliver mist factor pass (0.0 to 1.0)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_mist_get, ViewLayer_use_pass_mist_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_object_index_ = {
		{&rna_ViewLayer_use_pass_material_index, 	&rna_ViewLayer_use_pass_mist,
		-1, "use_pass_object_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object Index",
		"Deliver object index pass",
		0, "Scene",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_object_index_get, ViewLayer_use_pass_object_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_material_index_ = {
		{&rna_ViewLayer_use_pass_shadow, 	&rna_ViewLayer_use_pass_object_index,
		-1, "use_pass_material_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material Index",
		"Deliver material index pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_material_index_get, ViewLayer_use_pass_material_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_shadow_ = {
		{&rna_ViewLayer_use_pass_ambient_occlusion, 	&rna_ViewLayer_use_pass_material_index,
		-1, "use_pass_shadow", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shadow",
		"Deliver shadow pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_shadow_get, ViewLayer_use_pass_shadow_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_ambient_occlusion_ = {
		{&rna_ViewLayer_use_pass_emit, 	&rna_ViewLayer_use_pass_shadow,
		-1, "use_pass_ambient_occlusion", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ambient Occlusion",
		"Deliver Ambient Occlusion pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_ambient_occlusion_get, ViewLayer_use_pass_ambient_occlusion_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_emit_ = {
		{&rna_ViewLayer_use_pass_environment, 	&rna_ViewLayer_use_pass_ambient_occlusion,
		-1, "use_pass_emit", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Emission",
		"Deliver emission pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_emit_get, ViewLayer_use_pass_emit_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_environment_ = {
		{&rna_ViewLayer_use_pass_diffuse_direct, 	&rna_ViewLayer_use_pass_emit,
		-1, "use_pass_environment", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Environment",
		"Deliver environment lighting pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_environment_get, ViewLayer_use_pass_environment_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_diffuse_direct_ = {
		{&rna_ViewLayer_use_pass_diffuse_indirect, 	&rna_ViewLayer_use_pass_environment,
		-1, "use_pass_diffuse_direct", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Diffuse Direct",
		"Deliver diffuse direct pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_diffuse_direct_get, ViewLayer_use_pass_diffuse_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_diffuse_indirect_ = {
		{&rna_ViewLayer_use_pass_diffuse_color, 	&rna_ViewLayer_use_pass_diffuse_direct,
		-1, "use_pass_diffuse_indirect", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Diffuse Indirect",
		"Deliver diffuse indirect pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_diffuse_indirect_get, ViewLayer_use_pass_diffuse_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_diffuse_color_ = {
		{&rna_ViewLayer_use_pass_glossy_direct, 	&rna_ViewLayer_use_pass_diffuse_indirect,
		-1, "use_pass_diffuse_color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Diffuse Color",
		"Deliver diffuse color pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_diffuse_color_get, ViewLayer_use_pass_diffuse_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_glossy_direct_ = {
		{&rna_ViewLayer_use_pass_glossy_indirect, 	&rna_ViewLayer_use_pass_diffuse_color,
		-1, "use_pass_glossy_direct", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Glossy Direct",
		"Deliver glossy direct pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_glossy_direct_get, ViewLayer_use_pass_glossy_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_glossy_indirect_ = {
		{&rna_ViewLayer_use_pass_glossy_color, 	&rna_ViewLayer_use_pass_glossy_direct,
		-1, "use_pass_glossy_indirect", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Glossy Indirect",
		"Deliver glossy indirect pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_glossy_indirect_get, ViewLayer_use_pass_glossy_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_glossy_color_ = {
		{&rna_ViewLayer_use_pass_transmission_direct, 	&rna_ViewLayer_use_pass_glossy_indirect,
		-1, "use_pass_glossy_color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Glossy Color",
		"Deliver glossy color pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_glossy_color_get, ViewLayer_use_pass_glossy_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_transmission_direct_ = {
		{&rna_ViewLayer_use_pass_transmission_indirect, 	&rna_ViewLayer_use_pass_glossy_color,
		-1, "use_pass_transmission_direct", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transmission Direct",
		"Deliver transmission direct pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_transmission_direct_get, ViewLayer_use_pass_transmission_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_transmission_indirect_ = {
		{&rna_ViewLayer_use_pass_transmission_color, 	&rna_ViewLayer_use_pass_transmission_direct,
		-1, "use_pass_transmission_indirect", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transmission Indirect",
		"Deliver transmission indirect pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_transmission_indirect_get, ViewLayer_use_pass_transmission_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_transmission_color_ = {
		{&rna_ViewLayer_use_pass_subsurface_direct, 	&rna_ViewLayer_use_pass_transmission_indirect,
		-1, "use_pass_transmission_color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transmission Color",
		"Deliver transmission color pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_transmission_color_get, ViewLayer_use_pass_transmission_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_subsurface_direct_ = {
		{&rna_ViewLayer_use_pass_subsurface_indirect, 	&rna_ViewLayer_use_pass_transmission_color,
		-1, "use_pass_subsurface_direct", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subsurface Direct",
		"Deliver subsurface direct pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_subsurface_direct_get, ViewLayer_use_pass_subsurface_direct_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_subsurface_indirect_ = {
		{&rna_ViewLayer_use_pass_subsurface_color, 	&rna_ViewLayer_use_pass_subsurface_direct,
		-1, "use_pass_subsurface_indirect", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subsurface Indirect",
		"Deliver subsurface indirect pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_subsurface_indirect_get, ViewLayer_use_pass_subsurface_indirect_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_pass_subsurface_color_ = {
		{&rna_ViewLayer_layer_collection, 	&rna_ViewLayer_use_pass_subsurface_indirect,
		-1, "use_pass_subsurface_color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Subsurface Color",
		"Deliver subsurface color pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_subsurface_color_get, ViewLayer_use_pass_subsurface_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_layer_collection_ = {
		{&rna_ViewLayer_active_layer_collection, 	&rna_ViewLayer_use_pass_subsurface_color,
		-1, "layer_collection", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Layer Collection",
		"Root of collections hierarchy of this view layer, its \'collection\' pointer property is the same as the scene\'s master collection",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_layer_collection_get, nullptr, nullptr, nullptr,RNA_LayerCollection
	};

	rna_ViewLayer_active_layer_collection_ = {
		{&rna_ViewLayer_objects, 	&rna_ViewLayer_layer_collection,
		-1, "active_layer_collection", 8650753, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Layer Collection",
		"Active layer collection in this view layer\'s hierarchy",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84934656, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_active_layer_collection_get, ViewLayer_active_layer_collection_set, nullptr, nullptr,RNA_LayerCollection
	};

	rna_ViewLayer_objects_ = {
		{&rna_ViewLayer_use, 	&rna_ViewLayer_active_layer_collection,
		-1, "objects", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Objects",
		"All the objects in this layer",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_LayerObjects},
		ViewLayer_objects_begin, ViewLayer_objects_next, ViewLayer_objects_end, ViewLayer_objects_get, nullptr, ViewLayer_objects_lookup_int, ViewLayer_objects_lookup_string, nullptr, RNA_Object
	};

	rna_ViewLayer_use_ = {
		{&rna_ViewLayer_has_export_collections, 	&rna_ViewLayer_objects,
		-1, "use", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Enabled",
		"Enable or disable rendering of this View Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84934656, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_get, ViewLayer_use_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_has_export_collections_ = {
		{&rna_ViewLayer_use_freestyle, 	&rna_ViewLayer_use,
		-1, "has_export_collections", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has export collections",
		"At least one Collection in this View Layer has an exporter",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_has_export_collections_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_use_freestyle_ = {
		{&rna_ViewLayer_freestyle_settings, 	&rna_ViewLayer_has_export_collections,
		-1, "use_freestyle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Freestyle",
		"Render stylized strokes in this Layer",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84934656, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_freestyle_get, ViewLayer_use_freestyle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_ViewLayer_freestyle_settings_ = {
		{&rna_ViewLayer_use_pass_grease_pencil, 	&rna_ViewLayer_use_freestyle,
		-1, "freestyle_settings", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Freestyle Settings",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_freestyle_settings_get, nullptr, nullptr, nullptr,RNA_FreestyleSettings
	};

	rna_ViewLayer_use_pass_grease_pencil_ = {
		{&rna_ViewLayer_depsgraph, 	&rna_ViewLayer_freestyle_settings,
		-1, "use_pass_grease_pencil", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grease Pencil",
		"Deliver Grease Pencil render result in a separate pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_use_pass_grease_pencil_get, ViewLayer_use_pass_grease_pencil_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ViewLayer_depsgraph_ = {
		{nullptr, 	&rna_ViewLayer_use_pass_grease_pencil,
		-1, "depsgraph", 8912896, 2, 0, 0, 0, PropertyPathTemplateType(0), "Dependency Graph",
		"Dependencies in the scene data",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ViewLayer_depsgraph_get, nullptr, nullptr, nullptr,RNA_Depsgraph
	};

	StructRNA *srna = RNA_ViewLayer;
	srna->cont.properties = {&rna_ViewLayer_rna_properties, &rna_ViewLayer_depsgraph};
	srna->identifier = "ViewLayer";
	srna->flag = 516;
	srna->name = "View Layer";
	srna->description = "View layer";
	srna->translation_context = "*";
	srna->icon = 193;
	srna->nameproperty = &rna_ViewLayer_name;
	srna->iteratorproperty = &rna_ViewLayer_rna_properties;
	srna->path = rna_ViewLayer_path;
	srna->idproperties = rna_ViewLayer_idprops;
	srna->system_idproperties = rna_ViewLayer_system_idprops;
	{
	rna_ViewLayer_bl_system_properties_get_do_create_ = {
		{&rna_ViewLayer_bl_system_properties_get_system_properties, 	nullptr,
		-1, "do_create", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Ensure that system properties are created if they do not exist yet",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_ViewLayer_bl_system_properties_get_system_properties_ = {
		{nullptr, 	&rna_ViewLayer_bl_system_properties_get_do_create,
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
		func->cont.properties = {&rna_ViewLayer_bl_system_properties_get_do_create, &rna_ViewLayer_bl_system_properties_get_system_properties};
		func->identifier = "bl_system_properties_get";
		func->flag = 8192;
		func->description = "DEBUG ONLY. Internal access to runtime-defined RNA data storage, intended solely for testing and debugging purposes. Do not access it in regular scripting work, and in particular, do not assume that it contains writable data";
		func->call = ViewLayer_bl_system_properties_get_call;
		func->c_ret = &rna_ViewLayer_bl_system_properties_get_system_properties;
		rna_ViewLayer_bl_system_properties_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update_render_passes";
		func->flag = 2053;
		func->description = "Requery the enabled render passes from the render engine";
		func->call = ViewLayer_update_render_passes_call;
		rna_ViewLayer_update_render_passes_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update";
		func->flag = 2068;
		func->description = "Update data tagged to be updated from previous access to data or operators";
		func->call = ViewLayer_update_call;
		rna_ViewLayer_update_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* List of AOVs */
static CollectionPropertyRNA rna_AOVs_rna_properties_;
PropertyRNA &rna_AOVs_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AOVs_rna_properties_);

static PointerPropertyRNA rna_AOVs_rna_type_;
PropertyRNA &rna_AOVs_rna_type = reinterpret_cast<PropertyRNA &>(rna_AOVs_rna_type_);

static PointerPropertyRNA rna_AOVs_add_aov_;
PropertyRNA &rna_AOVs_add_aov = reinterpret_cast<PropertyRNA &>(rna_AOVs_add_aov_);

FunctionRNA *rna_AOVs_add_func;
static PointerPropertyRNA rna_AOVs_remove_aov_;
PropertyRNA &rna_AOVs_remove_aov = reinterpret_cast<PropertyRNA &>(rna_AOVs_remove_aov_);

FunctionRNA *rna_AOVs_remove_func;
StructRNA *RNA_AOVs;
void register_struct_AOVs(BlenderRNA &brna)
{
	rna_AOVs_rna_properties_ = {
		{&rna_AOVs_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AOVs_rna_properties_begin, AOVs_rna_properties_next, AOVs_rna_properties_end, AOVs_rna_properties_get, nullptr, nullptr, AOVs_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AOVs_rna_type_ = {
		{nullptr, 	&rna_AOVs_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AOVs_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_AOVs;
	srna->cont.properties = {&rna_AOVs_rna_properties, &rna_AOVs_rna_type};
	srna->identifier = "AOVs";
	srna->flag = 516;
	srna->name = "List of AOVs";
	srna->description = "Collection of AOVs";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AOVs_rna_properties;
	{
	rna_AOVs_add_aov_ = {
		{nullptr, 	nullptr,
		-1, "aov", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created AOV",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AOV
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AOVs_add_aov, &rna_AOVs_add_aov};
		func->identifier = "add";
		func->description = "add";
		func->call = AOVs_add_call;
		func->c_ret = &rna_AOVs_add_aov;
		rna_AOVs_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_AOVs_remove_aov_ = {
		{nullptr, 	nullptr,
		-1, "aov", 262144, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"AOV to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_AOV
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_AOVs_remove_aov, &rna_AOVs_remove_aov};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an AOV";
		func->call = AOVs_remove_call;
		rna_AOVs_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* List of Lightgroups */
static CollectionPropertyRNA rna_Lightgroups_rna_properties_;
PropertyRNA &rna_Lightgroups_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Lightgroups_rna_properties_);

static PointerPropertyRNA rna_Lightgroups_rna_type_;
PropertyRNA &rna_Lightgroups_rna_type = reinterpret_cast<PropertyRNA &>(rna_Lightgroups_rna_type_);

static PointerPropertyRNA rna_Lightgroups_add_lightgroup_;
PropertyRNA &rna_Lightgroups_add_lightgroup = reinterpret_cast<PropertyRNA &>(rna_Lightgroups_add_lightgroup_);

static StringPropertyRNA rna_Lightgroups_add_name_;
PropertyRNA &rna_Lightgroups_add_name = reinterpret_cast<PropertyRNA &>(rna_Lightgroups_add_name_);

FunctionRNA *rna_Lightgroups_add_func;
static PointerPropertyRNA rna_Lightgroups_remove_lightgroup_;
PropertyRNA &rna_Lightgroups_remove_lightgroup = reinterpret_cast<PropertyRNA &>(rna_Lightgroups_remove_lightgroup_);

FunctionRNA *rna_Lightgroups_remove_func;
StructRNA *RNA_Lightgroups;
void register_struct_Lightgroups(BlenderRNA &brna)
{
	rna_Lightgroups_rna_properties_ = {
		{&rna_Lightgroups_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lightgroups_rna_properties_begin, Lightgroups_rna_properties_next, Lightgroups_rna_properties_end, Lightgroups_rna_properties_get, nullptr, nullptr, Lightgroups_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Lightgroups_rna_type_ = {
		{nullptr, 	&rna_Lightgroups_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Lightgroups_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_Lightgroups;
	srna->cont.properties = {&rna_Lightgroups_rna_properties, &rna_Lightgroups_rna_type};
	srna->identifier = "Lightgroups";
	srna->flag = 516;
	srna->name = "List of Lightgroups";
	srna->description = "Collection of Lightgroups";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Lightgroups_rna_properties;
	{
	rna_Lightgroups_add_lightgroup_ = {
		{&rna_Lightgroups_add_name, 	nullptr,
		-1, "lightgroup", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created Lightgroup",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Lightgroup
	};
	rna_Lightgroups_add_name_ = {
		{nullptr, 	&rna_Lightgroups_add_lightgroup,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of newly created lightgroup",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Lightgroups_add_lightgroup, &rna_Lightgroups_add_name};
		func->identifier = "add";
		func->description = "add";
		func->call = Lightgroups_add_call;
		func->c_ret = &rna_Lightgroups_add_lightgroup;
		rna_Lightgroups_add_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Lightgroups_remove_lightgroup_ = {
		{nullptr, 	nullptr,
		-1, "lightgroup", 262144, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Lightgroup to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Lightgroup
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Lightgroups_remove_lightgroup, &rna_Lightgroups_remove_lightgroup};
		func->identifier = "remove";
		func->description = "Remove given light group";
		func->call = Lightgroups_remove_call;
		rna_Lightgroups_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Layer Objects */
static CollectionPropertyRNA rna_LayerObjects_rna_properties_;
PropertyRNA &rna_LayerObjects_rna_properties = reinterpret_cast<PropertyRNA &>(rna_LayerObjects_rna_properties_);

static PointerPropertyRNA rna_LayerObjects_rna_type_;
PropertyRNA &rna_LayerObjects_rna_type = reinterpret_cast<PropertyRNA &>(rna_LayerObjects_rna_type_);

static PointerPropertyRNA rna_LayerObjects_active_;
PropertyRNA &rna_LayerObjects_active = reinterpret_cast<PropertyRNA &>(rna_LayerObjects_active_);

static CollectionPropertyRNA rna_LayerObjects_selected_;
PropertyRNA &rna_LayerObjects_selected = reinterpret_cast<PropertyRNA &>(rna_LayerObjects_selected_);

StructRNA *RNA_LayerObjects;
void register_struct_LayerObjects(BlenderRNA &brna)
{
	rna_LayerObjects_rna_properties_ = {
		{&rna_LayerObjects_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerObjects_rna_properties_begin, LayerObjects_rna_properties_next, LayerObjects_rna_properties_end, LayerObjects_rna_properties_get, nullptr, nullptr, LayerObjects_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_LayerObjects_rna_type_ = {
		{&rna_LayerObjects_active, 	&rna_LayerObjects_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerObjects_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_LayerObjects_active_ = {
		{&rna_LayerObjects_selected, 	&rna_LayerObjects_rna_type,
		-1, "active", 41943169, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Object",
		"Active object for this layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84344832, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerObjects_active_get, LayerObjects_active_set, nullptr, nullptr,RNA_Object
	};

	rna_LayerObjects_selected_ = {
		{nullptr, 	&rna_LayerObjects_active,
		-1, "selected", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Objects",
		"All the selected objects of this layer",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerObjects_selected_begin, LayerObjects_selected_next, LayerObjects_selected_end, LayerObjects_selected_get, nullptr, LayerObjects_selected_lookup_int, LayerObjects_selected_lookup_string, nullptr, RNA_Object
	};

	StructRNA *srna = RNA_LayerObjects;
	srna->cont.properties = {&rna_LayerObjects_rna_properties, &rna_LayerObjects_selected};
	srna->identifier = "LayerObjects";
	srna->flag = 516;
	srna->name = "Layer Objects";
	srna->description = "Collections of objects";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_LayerObjects_rna_properties;
};

/* Freestyle Line Set */
static CollectionPropertyRNA rna_FreestyleLineSet_rna_properties_;
PropertyRNA &rna_FreestyleLineSet_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_rna_properties_);

static PointerPropertyRNA rna_FreestyleLineSet_rna_type_;
PropertyRNA &rna_FreestyleLineSet_rna_type = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_rna_type_);

static PointerPropertyRNA rna_FreestyleLineSet_linestyle_;
PropertyRNA &rna_FreestyleLineSet_linestyle = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_linestyle_);

static StringPropertyRNA rna_FreestyleLineSet_name_;
PropertyRNA &rna_FreestyleLineSet_name = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_name_);

static BoolPropertyRNA rna_FreestyleLineSet_show_render_;
PropertyRNA &rna_FreestyleLineSet_show_render = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_show_render_);

static BoolPropertyRNA rna_FreestyleLineSet_select_by_visibility_;
PropertyRNA &rna_FreestyleLineSet_select_by_visibility = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_by_visibility_);

static BoolPropertyRNA rna_FreestyleLineSet_select_by_edge_types_;
PropertyRNA &rna_FreestyleLineSet_select_by_edge_types = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_by_edge_types_);

static BoolPropertyRNA rna_FreestyleLineSet_select_by_collection_;
PropertyRNA &rna_FreestyleLineSet_select_by_collection = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_by_collection_);

static BoolPropertyRNA rna_FreestyleLineSet_select_by_image_border_;
PropertyRNA &rna_FreestyleLineSet_select_by_image_border = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_by_image_border_);

static BoolPropertyRNA rna_FreestyleLineSet_select_by_face_marks_;
PropertyRNA &rna_FreestyleLineSet_select_by_face_marks = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_by_face_marks_);

static EnumPropertyRNA rna_FreestyleLineSet_edge_type_negation_;
PropertyRNA &rna_FreestyleLineSet_edge_type_negation = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_edge_type_negation_);

static EnumPropertyRNA rna_FreestyleLineSet_edge_type_combination_;
PropertyRNA &rna_FreestyleLineSet_edge_type_combination = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_edge_type_combination_);

static PointerPropertyRNA rna_FreestyleLineSet_collection_;
PropertyRNA &rna_FreestyleLineSet_collection = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_collection_);

static EnumPropertyRNA rna_FreestyleLineSet_collection_negation_;
PropertyRNA &rna_FreestyleLineSet_collection_negation = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_collection_negation_);

static EnumPropertyRNA rna_FreestyleLineSet_face_mark_negation_;
PropertyRNA &rna_FreestyleLineSet_face_mark_negation = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_face_mark_negation_);

static EnumPropertyRNA rna_FreestyleLineSet_face_mark_condition_;
PropertyRNA &rna_FreestyleLineSet_face_mark_condition = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_face_mark_condition_);

static BoolPropertyRNA rna_FreestyleLineSet_select_silhouette_;
PropertyRNA &rna_FreestyleLineSet_select_silhouette = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_silhouette_);

static BoolPropertyRNA rna_FreestyleLineSet_select_border_;
PropertyRNA &rna_FreestyleLineSet_select_border = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_border_);

static BoolPropertyRNA rna_FreestyleLineSet_select_crease_;
PropertyRNA &rna_FreestyleLineSet_select_crease = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_crease_);

static BoolPropertyRNA rna_FreestyleLineSet_select_ridge_valley_;
PropertyRNA &rna_FreestyleLineSet_select_ridge_valley = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_ridge_valley_);

static BoolPropertyRNA rna_FreestyleLineSet_select_suggestive_contour_;
PropertyRNA &rna_FreestyleLineSet_select_suggestive_contour = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_suggestive_contour_);

static BoolPropertyRNA rna_FreestyleLineSet_select_material_boundary_;
PropertyRNA &rna_FreestyleLineSet_select_material_boundary = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_material_boundary_);

static BoolPropertyRNA rna_FreestyleLineSet_select_contour_;
PropertyRNA &rna_FreestyleLineSet_select_contour = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_contour_);

static BoolPropertyRNA rna_FreestyleLineSet_select_external_contour_;
PropertyRNA &rna_FreestyleLineSet_select_external_contour = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_external_contour_);

static BoolPropertyRNA rna_FreestyleLineSet_select_edge_mark_;
PropertyRNA &rna_FreestyleLineSet_select_edge_mark = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_select_edge_mark_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_silhouette_;
PropertyRNA &rna_FreestyleLineSet_exclude_silhouette = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_silhouette_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_border_;
PropertyRNA &rna_FreestyleLineSet_exclude_border = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_border_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_crease_;
PropertyRNA &rna_FreestyleLineSet_exclude_crease = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_crease_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_ridge_valley_;
PropertyRNA &rna_FreestyleLineSet_exclude_ridge_valley = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_ridge_valley_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_suggestive_contour_;
PropertyRNA &rna_FreestyleLineSet_exclude_suggestive_contour = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_suggestive_contour_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_material_boundary_;
PropertyRNA &rna_FreestyleLineSet_exclude_material_boundary = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_material_boundary_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_contour_;
PropertyRNA &rna_FreestyleLineSet_exclude_contour = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_contour_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_external_contour_;
PropertyRNA &rna_FreestyleLineSet_exclude_external_contour = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_external_contour_);

static BoolPropertyRNA rna_FreestyleLineSet_exclude_edge_mark_;
PropertyRNA &rna_FreestyleLineSet_exclude_edge_mark = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_exclude_edge_mark_);

static EnumPropertyRNA rna_FreestyleLineSet_visibility_;
PropertyRNA &rna_FreestyleLineSet_visibility = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_visibility_);

static IntPropertyRNA rna_FreestyleLineSet_qi_start_;
PropertyRNA &rna_FreestyleLineSet_qi_start = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_qi_start_);

static IntPropertyRNA rna_FreestyleLineSet_qi_end_;
PropertyRNA &rna_FreestyleLineSet_qi_end = reinterpret_cast<PropertyRNA &>(rna_FreestyleLineSet_qi_end_);

StructRNA *RNA_FreestyleLineSet;
void register_struct_FreestyleLineSet(BlenderRNA &brna)
{
	rna_FreestyleLineSet_rna_properties_ = {
		{&rna_FreestyleLineSet_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_rna_properties_begin, FreestyleLineSet_rna_properties_next, FreestyleLineSet_rna_properties_end, FreestyleLineSet_rna_properties_get, nullptr, nullptr, FreestyleLineSet_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FreestyleLineSet_rna_type_ = {
		{&rna_FreestyleLineSet_linestyle, 	&rna_FreestyleLineSet_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FreestyleLineSet_linestyle_ = {
		{&rna_FreestyleLineSet_name, 	&rna_FreestyleLineSet_rna_type,
		-1, "linestyle", 8650945, 0, 0, 0, 0, PropertyPathTemplateType(0), "Line Style",
		"Line style settings",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_linestyle_get, FreestyleLineSet_linestyle_set, nullptr, nullptr,RNA_FreestyleLineStyle
	};

	rna_FreestyleLineSet_name_ = {
		{&rna_FreestyleLineSet_show_render, 	&rna_FreestyleLineSet_linestyle,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Line Set Name",
		"Line set name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {64, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_name_get, FreestyleLineSet_name_length, FreestyleLineSet_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_FreestyleLineSet_show_render_ = {
		{&rna_FreestyleLineSet_select_by_visibility, 	&rna_FreestyleLineSet_name,
		-1, "show_render", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Render",
		"Enable or disable this line set during stroke rendering",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_show_render_get, FreestyleLineSet_show_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_by_visibility_ = {
		{&rna_FreestyleLineSet_select_by_edge_types, 	&rna_FreestyleLineSet_show_render,
		-1, "select_by_visibility", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selection by Visibility",
		"Select feature edges based on visibility",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_by_visibility_get, FreestyleLineSet_select_by_visibility_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_by_edge_types_ = {
		{&rna_FreestyleLineSet_select_by_collection, 	&rna_FreestyleLineSet_select_by_visibility,
		-1, "select_by_edge_types", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selection by Edge Types",
		"Select feature edges based on edge types",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_by_edge_types_get, FreestyleLineSet_select_by_edge_types_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_by_collection_ = {
		{&rna_FreestyleLineSet_select_by_image_border, 	&rna_FreestyleLineSet_select_by_edge_types,
		-1, "select_by_collection", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selection by Collection",
		"Select feature edges based on a collection of objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_by_collection_get, FreestyleLineSet_select_by_collection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_by_image_border_ = {
		{&rna_FreestyleLineSet_select_by_face_marks, 	&rna_FreestyleLineSet_select_by_collection,
		-1, "select_by_image_border", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selection by Image Border",
		"Select feature edges by image border (less memory consumption)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_by_image_border_get, FreestyleLineSet_select_by_image_border_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_by_face_marks_ = {
		{&rna_FreestyleLineSet_edge_type_negation, 	&rna_FreestyleLineSet_select_by_image_border,
		-1, "select_by_face_marks", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selection by Face Marks",
		"Select feature edges by face marks",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_by_face_marks_get, FreestyleLineSet_select_by_face_marks_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FreestyleLineSet_edge_type_negation_items[3] = {
		{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges satisfying the given edge type conditions"	},
		{4, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not satisfying the given edge type conditions"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FreestyleLineSet_edge_type_negation_ = {
		{&rna_FreestyleLineSet_edge_type_combination, 	&rna_FreestyleLineSet_select_by_face_marks,
		-1, "edge_type_negation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Edge Type Negation",
		"Specify either inclusion or exclusion of feature edges selected by edge types",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleLineSet, flags), RawPropertyType(0), nullptr},
		FreestyleLineSet_edge_type_negation_get, FreestyleLineSet_edge_type_negation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FreestyleLineSet_edge_type_negation_items, 2, 0
	};

	static const EnumPropertyItem rna_FreestyleLineSet_edge_type_combination_items[3] = {
		{0, "OR", 0, "Logical OR", "Select feature edges satisfying at least one of edge type conditions"	},
		{8, "AND", 0, "Logical AND", "Select feature edges satisfying all edge type conditions"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FreestyleLineSet_edge_type_combination_ = {
		{&rna_FreestyleLineSet_collection, 	&rna_FreestyleLineSet_edge_type_negation,
		-1, "edge_type_combination", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Edge Type Combination",
		"Specify a logical combination of selection conditions on feature edge types",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleLineSet, flags), RawPropertyType(0), nullptr},
		FreestyleLineSet_edge_type_combination_get, FreestyleLineSet_edge_type_combination_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FreestyleLineSet_edge_type_combination_items, 2, 0
	};

	rna_FreestyleLineSet_collection_ = {
		{&rna_FreestyleLineSet_collection_negation, 	&rna_FreestyleLineSet_edge_type_combination,
		-1, "collection", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collection",
		"A collection of objects based on which feature edges are selected",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_collection_get, FreestyleLineSet_collection_set, nullptr, nullptr,RNA_Collection
	};

	static const EnumPropertyItem rna_FreestyleLineSet_collection_negation_items[3] = {
		{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges belonging to some object in the group"	},
		{16, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not belonging to any object in the group"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FreestyleLineSet_collection_negation_ = {
		{&rna_FreestyleLineSet_face_mark_negation, 	&rna_FreestyleLineSet_collection,
		-1, "collection_negation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Collection Negation",
		"Specify either inclusion or exclusion of feature edges belonging to a collection of objects",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleLineSet, flags), RawPropertyType(0), nullptr},
		FreestyleLineSet_collection_negation_get, FreestyleLineSet_collection_negation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FreestyleLineSet_collection_negation_items, 2, 0
	};

	static const EnumPropertyItem rna_FreestyleLineSet_face_mark_negation_items[3] = {
		{0, "INCLUSIVE", 0, "Inclusive", "Select feature edges satisfying the given face mark conditions"	},
		{32, "EXCLUSIVE", 0, "Exclusive", "Select feature edges not satisfying the given face mark conditions"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FreestyleLineSet_face_mark_negation_ = {
		{&rna_FreestyleLineSet_face_mark_condition, 	&rna_FreestyleLineSet_collection_negation,
		-1, "face_mark_negation", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Face Mark Negation",
		"Specify either inclusion or exclusion of feature edges selected by face marks",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleLineSet, flags), RawPropertyType(0), nullptr},
		FreestyleLineSet_face_mark_negation_get, FreestyleLineSet_face_mark_negation_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FreestyleLineSet_face_mark_negation_items, 2, 0
	};

	static const EnumPropertyItem rna_FreestyleLineSet_face_mark_condition_items[3] = {
		{0, "ONE", 0, "One Face", "Select a feature edge if either of its adjacent faces is marked"	},
		{64, "BOTH", 0, "Both Faces", "Select a feature edge if both of its adjacent faces are marked"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FreestyleLineSet_face_mark_condition_ = {
		{&rna_FreestyleLineSet_select_silhouette, 	&rna_FreestyleLineSet_face_mark_negation,
		-1, "face_mark_condition", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Face Mark Condition",
		"Specify a feature edge selection condition based on face marks",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleLineSet, flags), RawPropertyType(0), nullptr},
		FreestyleLineSet_face_mark_condition_get, FreestyleLineSet_face_mark_condition_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FreestyleLineSet_face_mark_condition_items, 2, 0
	};

	rna_FreestyleLineSet_select_silhouette_ = {
		{&rna_FreestyleLineSet_select_border, 	&rna_FreestyleLineSet_face_mark_condition,
		-1, "select_silhouette", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Silhouette",
		"Select silhouettes (edges at the boundary of visible and hidden faces)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_silhouette_get, FreestyleLineSet_select_silhouette_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_border_ = {
		{&rna_FreestyleLineSet_select_crease, 	&rna_FreestyleLineSet_select_silhouette,
		-1, "select_border", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Border",
		"Select border edges (open mesh edges)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_border_get, FreestyleLineSet_select_border_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_crease_ = {
		{&rna_FreestyleLineSet_select_ridge_valley, 	&rna_FreestyleLineSet_select_border,
		-1, "select_crease", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crease",
		"Select crease edges (those between two faces making an angle smaller than the Crease Angle)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_crease_get, FreestyleLineSet_select_crease_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_ridge_valley_ = {
		{&rna_FreestyleLineSet_select_suggestive_contour, 	&rna_FreestyleLineSet_select_crease,
		-1, "select_ridge_valley", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ridge & Valley",
		"Select ridges and valleys (boundary lines between convex and concave areas of surface)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_ridge_valley_get, FreestyleLineSet_select_ridge_valley_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_suggestive_contour_ = {
		{&rna_FreestyleLineSet_select_material_boundary, 	&rna_FreestyleLineSet_select_ridge_valley,
		-1, "select_suggestive_contour", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Suggestive Contour",
		"Select suggestive contours (almost silhouette/contour edges)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_suggestive_contour_get, FreestyleLineSet_select_suggestive_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_material_boundary_ = {
		{&rna_FreestyleLineSet_select_contour, 	&rna_FreestyleLineSet_select_suggestive_contour,
		-1, "select_material_boundary", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material Boundary",
		"Select edges at material boundaries",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_material_boundary_get, FreestyleLineSet_select_material_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_contour_ = {
		{&rna_FreestyleLineSet_select_external_contour, 	&rna_FreestyleLineSet_select_material_boundary,
		-1, "select_contour", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Contour",
		"Select contours (outer silhouettes of each object)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_contour_get, FreestyleLineSet_select_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_external_contour_ = {
		{&rna_FreestyleLineSet_select_edge_mark, 	&rna_FreestyleLineSet_select_contour,
		-1, "select_external_contour", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "External Contour",
		"Select external contours (outer silhouettes of occluding and occluded objects)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_external_contour_get, FreestyleLineSet_select_external_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_select_edge_mark_ = {
		{&rna_FreestyleLineSet_exclude_silhouette, 	&rna_FreestyleLineSet_select_external_contour,
		-1, "select_edge_mark", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edge Mark",
		"Select edge marks (edges annotated by Freestyle edge marks)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_select_edge_mark_get, FreestyleLineSet_select_edge_mark_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_silhouette_ = {
		{&rna_FreestyleLineSet_exclude_border, 	&rna_FreestyleLineSet_select_edge_mark,
		-1, "exclude_silhouette", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Silhouette",
		"Exclude silhouette edges",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_silhouette_get, FreestyleLineSet_exclude_silhouette_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_border_ = {
		{&rna_FreestyleLineSet_exclude_crease, 	&rna_FreestyleLineSet_exclude_silhouette,
		-1, "exclude_border", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Border",
		"Exclude border edges",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_border_get, FreestyleLineSet_exclude_border_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_crease_ = {
		{&rna_FreestyleLineSet_exclude_ridge_valley, 	&rna_FreestyleLineSet_exclude_border,
		-1, "exclude_crease", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Crease",
		"Exclude crease edges",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_crease_get, FreestyleLineSet_exclude_crease_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_ridge_valley_ = {
		{&rna_FreestyleLineSet_exclude_suggestive_contour, 	&rna_FreestyleLineSet_exclude_crease,
		-1, "exclude_ridge_valley", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ridge & Valley",
		"Exclude ridges and valleys",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_ridge_valley_get, FreestyleLineSet_exclude_ridge_valley_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_suggestive_contour_ = {
		{&rna_FreestyleLineSet_exclude_material_boundary, 	&rna_FreestyleLineSet_exclude_ridge_valley,
		-1, "exclude_suggestive_contour", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Suggestive Contour",
		"Exclude suggestive contours",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_suggestive_contour_get, FreestyleLineSet_exclude_suggestive_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_material_boundary_ = {
		{&rna_FreestyleLineSet_exclude_contour, 	&rna_FreestyleLineSet_exclude_suggestive_contour,
		-1, "exclude_material_boundary", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material Boundary",
		"Exclude edges at material boundaries",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_material_boundary_get, FreestyleLineSet_exclude_material_boundary_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_contour_ = {
		{&rna_FreestyleLineSet_exclude_external_contour, 	&rna_FreestyleLineSet_exclude_material_boundary,
		-1, "exclude_contour", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Contour",
		"Exclude contours",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_contour_get, FreestyleLineSet_exclude_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_external_contour_ = {
		{&rna_FreestyleLineSet_exclude_edge_mark, 	&rna_FreestyleLineSet_exclude_contour,
		-1, "exclude_external_contour", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "External Contour",
		"Exclude external contours",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_external_contour_get, FreestyleLineSet_exclude_external_contour_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_exclude_edge_mark_ = {
		{&rna_FreestyleLineSet_visibility, 	&rna_FreestyleLineSet_exclude_external_contour,
		-1, "exclude_edge_mark", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edge Mark",
		"Exclude edge marks",
		112, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleLineSet_exclude_edge_mark_get, FreestyleLineSet_exclude_edge_mark_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_FreestyleLineSet_visibility_items[4] = {
		{1, "VISIBLE", 0, "Visible", "Select visible feature edges"	},
		{2, "HIDDEN", 0, "Hidden", "Select hidden feature edges"	},
		{3, "RANGE", 0, "Quantitative Invisibility", "Select feature edges within a range of quantitative invisibility (QI) values"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FreestyleLineSet_visibility_ = {
		{&rna_FreestyleLineSet_qi_start, 	&rna_FreestyleLineSet_exclude_edge_mark,
		-1, "visibility", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Visibility",
		"Determine how to use visibility for feature edge selection",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleLineSet, qi), RawPropertyType(1), nullptr},
		FreestyleLineSet_visibility_get, FreestyleLineSet_visibility_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FreestyleLineSet_visibility_items, 3, 1
	};

	rna_FreestyleLineSet_qi_start_ = {
		{&rna_FreestyleLineSet_qi_end, 	&rna_FreestyleLineSet_visibility,
		-1, "qi_start", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Start",
		"First QI value of the QI range",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleLineSet, qi_start), RawPropertyType(0), nullptr},
		FreestyleLineSet_qi_start_get, FreestyleLineSet_qi_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleLineSet_qi_end_ = {
		{nullptr, 	&rna_FreestyleLineSet_qi_start,
		-1, "qi_end", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "End",
		"Last QI value of the QI range",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleLineSet, qi_end), RawPropertyType(0), nullptr},
		FreestyleLineSet_qi_end_get, FreestyleLineSet_qi_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FreestyleLineSet;
	srna->cont.properties = {&rna_FreestyleLineSet_rna_properties, &rna_FreestyleLineSet_qi_end};
	srna->identifier = "FreestyleLineSet";
	srna->flag = 516;
	srna->name = "Freestyle Line Set";
	srna->description = "Line set for associating lines and style parameters";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_FreestyleLineSet_name;
	srna->iteratorproperty = &rna_FreestyleLineSet_rna_properties;
};

/* Freestyle Module */
static CollectionPropertyRNA rna_FreestyleModuleSettings_rna_properties_;
PropertyRNA &rna_FreestyleModuleSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FreestyleModuleSettings_rna_properties_);

static PointerPropertyRNA rna_FreestyleModuleSettings_rna_type_;
PropertyRNA &rna_FreestyleModuleSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_FreestyleModuleSettings_rna_type_);

static PointerPropertyRNA rna_FreestyleModuleSettings_script_;
PropertyRNA &rna_FreestyleModuleSettings_script = reinterpret_cast<PropertyRNA &>(rna_FreestyleModuleSettings_script_);

static BoolPropertyRNA rna_FreestyleModuleSettings_use_;
PropertyRNA &rna_FreestyleModuleSettings_use = reinterpret_cast<PropertyRNA &>(rna_FreestyleModuleSettings_use_);

StructRNA *RNA_FreestyleModuleSettings;
void register_struct_FreestyleModuleSettings(BlenderRNA &brna)
{
	rna_FreestyleModuleSettings_rna_properties_ = {
		{&rna_FreestyleModuleSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleModuleSettings_rna_properties_begin, FreestyleModuleSettings_rna_properties_next, FreestyleModuleSettings_rna_properties_end, FreestyleModuleSettings_rna_properties_get, nullptr, nullptr, FreestyleModuleSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FreestyleModuleSettings_rna_type_ = {
		{&rna_FreestyleModuleSettings_script, 	&rna_FreestyleModuleSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleModuleSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FreestyleModuleSettings_script_ = {
		{&rna_FreestyleModuleSettings_use, 	&rna_FreestyleModuleSettings_rna_type,
		-1, "script", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Style Module",
		"Python script to define a style module",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleModuleSettings_script_get, FreestyleModuleSettings_script_set, nullptr, nullptr,RNA_Text
	};

	rna_FreestyleModuleSettings_use_ = {
		{nullptr, 	&rna_FreestyleModuleSettings_script,
		-1, "use", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use",
		"Enable or disable this style module during stroke rendering",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleModuleSettings_use_get, FreestyleModuleSettings_use_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_FreestyleModuleSettings;
	srna->cont.properties = {&rna_FreestyleModuleSettings_rna_properties, &rna_FreestyleModuleSettings_use};
	srna->identifier = "FreestyleModuleSettings";
	srna->flag = 516;
	srna->name = "Freestyle Module";
	srna->description = "Style module configuration for specifying a style module";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FreestyleModuleSettings_rna_properties;
};

/* Freestyle Settings */
static CollectionPropertyRNA rna_FreestyleSettings_rna_properties_;
PropertyRNA &rna_FreestyleSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_rna_properties_);

static PointerPropertyRNA rna_FreestyleSettings_rna_type_;
PropertyRNA &rna_FreestyleSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_rna_type_);

static CollectionPropertyRNA rna_FreestyleSettings_modules_;
PropertyRNA &rna_FreestyleSettings_modules = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_modules_);

static EnumPropertyRNA rna_FreestyleSettings_mode_;
PropertyRNA &rna_FreestyleSettings_mode = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_mode_);

static BoolPropertyRNA rna_FreestyleSettings_use_culling_;
PropertyRNA &rna_FreestyleSettings_use_culling = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_use_culling_);

static BoolPropertyRNA rna_FreestyleSettings_use_suggestive_contours_;
PropertyRNA &rna_FreestyleSettings_use_suggestive_contours = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_use_suggestive_contours_);

static BoolPropertyRNA rna_FreestyleSettings_use_ridges_and_valleys_;
PropertyRNA &rna_FreestyleSettings_use_ridges_and_valleys = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_use_ridges_and_valleys_);

static BoolPropertyRNA rna_FreestyleSettings_use_material_boundaries_;
PropertyRNA &rna_FreestyleSettings_use_material_boundaries = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_use_material_boundaries_);

static BoolPropertyRNA rna_FreestyleSettings_use_smoothness_;
PropertyRNA &rna_FreestyleSettings_use_smoothness = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_use_smoothness_);

static BoolPropertyRNA rna_FreestyleSettings_use_view_map_cache_;
PropertyRNA &rna_FreestyleSettings_use_view_map_cache = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_use_view_map_cache_);

static BoolPropertyRNA rna_FreestyleSettings_as_render_pass_;
PropertyRNA &rna_FreestyleSettings_as_render_pass = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_as_render_pass_);

static FloatPropertyRNA rna_FreestyleSettings_sphere_radius_;
PropertyRNA &rna_FreestyleSettings_sphere_radius = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_sphere_radius_);

static FloatPropertyRNA rna_FreestyleSettings_kr_derivative_epsilon_;
PropertyRNA &rna_FreestyleSettings_kr_derivative_epsilon = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_kr_derivative_epsilon_);

static FloatPropertyRNA rna_FreestyleSettings_crease_angle_;
PropertyRNA &rna_FreestyleSettings_crease_angle = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_crease_angle_);

static CollectionPropertyRNA rna_FreestyleSettings_linesets_;
PropertyRNA &rna_FreestyleSettings_linesets = reinterpret_cast<PropertyRNA &>(rna_FreestyleSettings_linesets_);

StructRNA *RNA_FreestyleSettings;
void register_struct_FreestyleSettings(BlenderRNA &brna)
{
	rna_FreestyleSettings_rna_properties_ = {
		{&rna_FreestyleSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_rna_properties_begin, FreestyleSettings_rna_properties_next, FreestyleSettings_rna_properties_end, FreestyleSettings_rna_properties_get, nullptr, nullptr, FreestyleSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FreestyleSettings_rna_type_ = {
		{&rna_FreestyleSettings_modules, 	&rna_FreestyleSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_FreestyleSettings_modules_ = {
		{&rna_FreestyleSettings_mode, 	&rna_FreestyleSettings_rna_type,
		-1, "modules", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Style Modules",
		"A list of style modules (to be applied from top to bottom)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_FreestyleModules},
		FreestyleSettings_modules_begin, FreestyleSettings_modules_next, FreestyleSettings_modules_end, FreestyleSettings_modules_get, nullptr, FreestyleSettings_modules_lookup_int, nullptr, nullptr, RNA_FreestyleModuleSettings
	};

	static const EnumPropertyItem rna_FreestyleSettings_mode_items[3] = {
		{1, "SCRIPT", 0, "Python Scripting", "Advanced mode for using style modules written in Python"	},
		{2, "EDITOR", 0, "Parameter Editor", "Basic mode for interactive style parameter editing"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_FreestyleSettings_mode_ = {
		{&rna_FreestyleSettings_use_culling, 	&rna_FreestyleSettings_modules,
		-1, "mode", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Control Mode",
		"Select the Freestyle control mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleConfig, mode), RawPropertyType(0), nullptr},
		FreestyleSettings_mode_get, FreestyleSettings_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_FreestyleSettings_mode_items, 2, 1
	};

	rna_FreestyleSettings_use_culling_ = {
		{&rna_FreestyleSettings_use_suggestive_contours, 	&rna_FreestyleSettings_mode,
		-1, "use_culling", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Culling",
		"If enabled, out-of-view edges are ignored",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_use_culling_get, FreestyleSettings_use_culling_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleSettings_use_suggestive_contours_ = {
		{&rna_FreestyleSettings_use_ridges_and_valleys, 	&rna_FreestyleSettings_use_culling,
		-1, "use_suggestive_contours", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Suggestive Contours",
		"Enable suggestive contours",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_use_suggestive_contours_get, FreestyleSettings_use_suggestive_contours_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleSettings_use_ridges_and_valleys_ = {
		{&rna_FreestyleSettings_use_material_boundaries, 	&rna_FreestyleSettings_use_suggestive_contours,
		-1, "use_ridges_and_valleys", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Ridges and Valleys",
		"Enable ridges and valleys",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_use_ridges_and_valleys_get, FreestyleSettings_use_ridges_and_valleys_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleSettings_use_material_boundaries_ = {
		{&rna_FreestyleSettings_use_smoothness, 	&rna_FreestyleSettings_use_ridges_and_valleys,
		-1, "use_material_boundaries", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material Boundaries",
		"Enable material boundaries",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_use_material_boundaries_get, FreestyleSettings_use_material_boundaries_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleSettings_use_smoothness_ = {
		{&rna_FreestyleSettings_use_view_map_cache, 	&rna_FreestyleSettings_use_material_boundaries,
		-1, "use_smoothness", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Face Smoothness",
		"Take face smoothness into account in view map calculation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_use_smoothness_get, FreestyleSettings_use_smoothness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleSettings_use_view_map_cache_ = {
		{&rna_FreestyleSettings_as_render_pass, 	&rna_FreestyleSettings_use_smoothness,
		-1, "use_view_map_cache", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "View Map Cache",
		"Keep the computed view map and avoid recalculating it if mesh geometry is unchanged",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_use_view_map_cache_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_use_view_map_cache_get, FreestyleSettings_use_view_map_cache_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleSettings_as_render_pass_ = {
		{&rna_FreestyleSettings_sphere_radius, 	&rna_FreestyleSettings_use_view_map_cache,
		-1, "as_render_pass", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "As Render Pass",
		"Renders Freestyle output to a separate pass instead of overlaying it on the Combined pass",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ViewLayer_pass_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleSettings_as_render_pass_get, FreestyleSettings_as_render_pass_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_FreestyleSettings_sphere_radius_ = {
		{&rna_FreestyleSettings_kr_derivative_epsilon, 	&rna_FreestyleSettings_as_render_pass,
		-1, "sphere_radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Sphere Radius",
		"Sphere radius for computing curvatures",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleConfig, sphere_radius), RawPropertyType(5), nullptr},
		FreestyleSettings_sphere_radius_get, FreestyleSettings_sphere_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 1.0f, nullptr
	};

	rna_FreestyleSettings_kr_derivative_epsilon_ = {
		{&rna_FreestyleSettings_crease_angle, 	&rna_FreestyleSettings_sphere_radius,
		-1, "kr_derivative_epsilon", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Kr Derivative Epsilon",
		"Kr derivative epsilon for computing suggestive contours",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleConfig, dkr_epsilon), RawPropertyType(5), nullptr},
		FreestyleSettings_kr_derivative_epsilon_get, FreestyleSettings_kr_derivative_epsilon_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FreestyleSettings_crease_angle_ = {
		{&rna_FreestyleSettings_linesets, 	&rna_FreestyleSettings_kr_derivative_epsilon,
		-1, "crease_angle", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Crease Angle",
		"Angular threshold for detecting crease edges",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_ANGLE) | int(PROP_UNIT_ROTATION)), nullptr, 0, {0, 0, 0}, 0,
		rna_Scene_freestyle_update, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(FreestyleConfig, crease_angle), RawPropertyType(5), nullptr},
		FreestyleSettings_crease_angle_get, FreestyleSettings_crease_angle_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_FreestyleSettings_linesets_ = {
		{nullptr, 	&rna_FreestyleSettings_crease_angle,
		-1, "linesets", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Line Sets",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_Linesets},
		FreestyleSettings_linesets_begin, FreestyleSettings_linesets_next, FreestyleSettings_linesets_end, FreestyleSettings_linesets_get, nullptr, FreestyleSettings_linesets_lookup_int, FreestyleSettings_linesets_lookup_string, nullptr, RNA_FreestyleLineSet
	};

	StructRNA *srna = RNA_FreestyleSettings;
	srna->cont.properties = {&rna_FreestyleSettings_rna_properties, &rna_FreestyleSettings_linesets};
	srna->identifier = "FreestyleSettings";
	srna->flag = 516;
	srna->name = "Freestyle Settings";
	srna->description = "Freestyle settings for a ViewLayer data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FreestyleSettings_rna_properties;
	srna->nested = RNA_ViewLayer;
};

/* Style Modules */
static CollectionPropertyRNA rna_FreestyleModules_rna_properties_;
PropertyRNA &rna_FreestyleModules_rna_properties = reinterpret_cast<PropertyRNA &>(rna_FreestyleModules_rna_properties_);

static PointerPropertyRNA rna_FreestyleModules_rna_type_;
PropertyRNA &rna_FreestyleModules_rna_type = reinterpret_cast<PropertyRNA &>(rna_FreestyleModules_rna_type_);

static PointerPropertyRNA rna_FreestyleModules_new_module_;
PropertyRNA &rna_FreestyleModules_new_module = reinterpret_cast<PropertyRNA &>(rna_FreestyleModules_new_module_);

FunctionRNA *rna_FreestyleModules_new_func;
static PointerPropertyRNA rna_FreestyleModules_remove_module_;
PropertyRNA &rna_FreestyleModules_remove_module = reinterpret_cast<PropertyRNA &>(rna_FreestyleModules_remove_module_);

FunctionRNA *rna_FreestyleModules_remove_func;
StructRNA *RNA_FreestyleModules;
void register_struct_FreestyleModules(BlenderRNA &brna)
{
	rna_FreestyleModules_rna_properties_ = {
		{&rna_FreestyleModules_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleModules_rna_properties_begin, FreestyleModules_rna_properties_next, FreestyleModules_rna_properties_end, FreestyleModules_rna_properties_get, nullptr, nullptr, FreestyleModules_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_FreestyleModules_rna_type_ = {
		{nullptr, 	&rna_FreestyleModules_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		FreestyleModules_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_FreestyleModules;
	srna->cont.properties = {&rna_FreestyleModules_rna_properties, &rna_FreestyleModules_rna_type};
	srna->identifier = "FreestyleModules";
	srna->flag = 516;
	srna->name = "Style Modules";
	srna->description = "A list of style modules (to be applied from top to bottom)";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_FreestyleModules_rna_properties;
	{
	rna_FreestyleModules_new_module_ = {
		{nullptr, 	nullptr,
		-1, "module", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created style module",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FreestyleModuleSettings
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FreestyleModules_new_module, &rna_FreestyleModules_new_module};
		func->identifier = "new";
		func->flag = 2048;
		func->description = "Add a style module to scene render layer Freestyle settings";
		func->call = FreestyleModules_new_call;
		func->c_ret = &rna_FreestyleModules_new_module;
		rna_FreestyleModules_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_FreestyleModules_remove_module_ = {
		{nullptr, 	nullptr,
		-1, "module", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Style module to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FreestyleModuleSettings
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_FreestyleModules_remove_module, &rna_FreestyleModules_remove_module};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove a style module from scene render layer Freestyle settings";
		func->call = FreestyleModules_remove_call;
		rna_FreestyleModules_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Line Sets */
static CollectionPropertyRNA rna_Linesets_rna_properties_;
PropertyRNA &rna_Linesets_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Linesets_rna_properties_);

static PointerPropertyRNA rna_Linesets_rna_type_;
PropertyRNA &rna_Linesets_rna_type = reinterpret_cast<PropertyRNA &>(rna_Linesets_rna_type_);

static PointerPropertyRNA rna_Linesets_active_;
PropertyRNA &rna_Linesets_active = reinterpret_cast<PropertyRNA &>(rna_Linesets_active_);

static IntPropertyRNA rna_Linesets_active_index_;
PropertyRNA &rna_Linesets_active_index = reinterpret_cast<PropertyRNA &>(rna_Linesets_active_index_);

static StringPropertyRNA rna_Linesets_new_name_;
PropertyRNA &rna_Linesets_new_name = reinterpret_cast<PropertyRNA &>(rna_Linesets_new_name_);

static PointerPropertyRNA rna_Linesets_new_lineset_;
PropertyRNA &rna_Linesets_new_lineset = reinterpret_cast<PropertyRNA &>(rna_Linesets_new_lineset_);

FunctionRNA *rna_Linesets_new_func;
static PointerPropertyRNA rna_Linesets_remove_lineset_;
PropertyRNA &rna_Linesets_remove_lineset = reinterpret_cast<PropertyRNA &>(rna_Linesets_remove_lineset_);

FunctionRNA *rna_Linesets_remove_func;
StructRNA *RNA_Linesets;
void register_struct_Linesets(BlenderRNA &brna)
{
	rna_Linesets_rna_properties_ = {
		{&rna_Linesets_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Linesets_rna_properties_begin, Linesets_rna_properties_next, Linesets_rna_properties_end, Linesets_rna_properties_get, nullptr, nullptr, Linesets_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Linesets_rna_type_ = {
		{&rna_Linesets_active, 	&rna_Linesets_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Linesets_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_Linesets_active_ = {
		{&rna_Linesets_active_index, 	&rna_Linesets_rna_type,
		-1, "active", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Line Set",
		"Active line set being displayed",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Linesets_active_get, nullptr, nullptr, nullptr,RNA_FreestyleLineSet
	};

	rna_Linesets_active_index_ = {
		{nullptr, 	&rna_Linesets_active,
		-1, "active_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Line Set Index",
		"Index of active line set slot",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 84148224, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Linesets_active_index_get, Linesets_active_index_set, nullptr, nullptr, rna_FreestyleSettings_active_lineset_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_Linesets;
	srna->cont.properties = {&rna_Linesets_rna_properties, &rna_Linesets_active_index};
	srna->identifier = "Linesets";
	srna->flag = 516;
	srna->name = "Line Sets";
	srna->description = "Line sets for associating lines and style parameters";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Linesets_rna_properties;
	{
	rna_Linesets_new_name_ = {
		{&rna_Linesets_new_lineset, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the line set (not unique)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "LineSet"
	};
	rna_Linesets_new_lineset_ = {
		{nullptr, 	&rna_Linesets_new_name,
		-1, "lineset", 8388608, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Newly created line set",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FreestyleLineSet
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Linesets_new_name, &rna_Linesets_new_lineset};
		func->identifier = "new";
		func->flag = 2052;
		func->description = "Add a line set to scene render layer Freestyle settings";
		func->call = Linesets_new_call;
		func->c_ret = &rna_Linesets_new_lineset;
		rna_Linesets_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Linesets_remove_lineset_ = {
		{nullptr, 	nullptr,
		-1, "lineset", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Line set to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FreestyleLineSet
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Linesets_remove_lineset, &rna_Linesets_remove_lineset};
		func->identifier = "remove";
		func->flag = 2064;
		func->description = "Remove a line set from scene render layer Freestyle settings";
		func->call = Linesets_remove_call;
		rna_Linesets_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Layer Collection */
static CollectionPropertyRNA rna_LayerCollection_rna_properties_;
PropertyRNA &rna_LayerCollection_rna_properties = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_rna_properties_);

static PointerPropertyRNA rna_LayerCollection_rna_type_;
PropertyRNA &rna_LayerCollection_rna_type = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_rna_type_);

static PointerPropertyRNA rna_LayerCollection_collection_;
PropertyRNA &rna_LayerCollection_collection = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_collection_);

static StringPropertyRNA rna_LayerCollection_name_;
PropertyRNA &rna_LayerCollection_name = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_name_);

static CollectionPropertyRNA rna_LayerCollection_children_;
PropertyRNA &rna_LayerCollection_children = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_children_);

static BoolPropertyRNA rna_LayerCollection_exclude_;
PropertyRNA &rna_LayerCollection_exclude = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_exclude_);

static BoolPropertyRNA rna_LayerCollection_holdout_;
PropertyRNA &rna_LayerCollection_holdout = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_holdout_);

static BoolPropertyRNA rna_LayerCollection_indirect_only_;
PropertyRNA &rna_LayerCollection_indirect_only = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_indirect_only_);

static BoolPropertyRNA rna_LayerCollection_hide_viewport_;
PropertyRNA &rna_LayerCollection_hide_viewport = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_hide_viewport_);

static BoolPropertyRNA rna_LayerCollection_is_visible_;
PropertyRNA &rna_LayerCollection_is_visible = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_is_visible_);

static BoolPropertyRNA rna_LayerCollection_visible_get_result_;
PropertyRNA &rna_LayerCollection_visible_get_result = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_visible_get_result_);

FunctionRNA *rna_LayerCollection_visible_get_func;
static BoolPropertyRNA rna_LayerCollection_has_objects_result_;
PropertyRNA &rna_LayerCollection_has_objects_result = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_has_objects_result_);

FunctionRNA *rna_LayerCollection_has_objects_func;
static PointerPropertyRNA rna_LayerCollection_has_selected_objects_view_layer_;
PropertyRNA &rna_LayerCollection_has_selected_objects_view_layer = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_has_selected_objects_view_layer_);

static BoolPropertyRNA rna_LayerCollection_has_selected_objects_result_;
PropertyRNA &rna_LayerCollection_has_selected_objects_result = reinterpret_cast<PropertyRNA &>(rna_LayerCollection_has_selected_objects_result_);

FunctionRNA *rna_LayerCollection_has_selected_objects_func;
StructRNA *RNA_LayerCollection;
void register_struct_LayerCollection(BlenderRNA &brna)
{
	rna_LayerCollection_rna_properties_ = {
		{&rna_LayerCollection_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_rna_properties_begin, LayerCollection_rna_properties_next, LayerCollection_rna_properties_end, LayerCollection_rna_properties_get, nullptr, nullptr, LayerCollection_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_LayerCollection_rna_type_ = {
		{&rna_LayerCollection_collection, 	&rna_LayerCollection_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_LayerCollection_collection_ = {
		{&rna_LayerCollection_name, 	&rna_LayerCollection_rna_type,
		-1, "collection", 8650880, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collection",
		"Collection this layer collection is wrapping",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_collection_get, nullptr, nullptr, nullptr,RNA_Collection
	};

	rna_LayerCollection_name_ = {
		{&rna_LayerCollection_children, 	&rna_LayerCollection_collection,
		-1, "name", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of this layer collection (same as its collection one)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {258, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_name_get, LayerCollection_name_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 258, ""
	};

	rna_LayerCollection_children_ = {
		{&rna_LayerCollection_exclude, 	&rna_LayerCollection_name,
		-1, "children", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Children",
		"Layer collection children",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_children_begin, LayerCollection_children_next, LayerCollection_children_end, LayerCollection_children_get, nullptr, LayerCollection_children_lookup_int, LayerCollection_children_lookup_string, nullptr, RNA_LayerCollection
	};

	rna_LayerCollection_exclude_ = {
		{&rna_LayerCollection_holdout, 	&rna_LayerCollection_children,
		-1, "exclude", 4353, 0, 0, 0, 0, PropertyPathTemplateType(0), "Exclude from View Layer",
		"Exclude from view layer",
		8, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LayerCollection_exclude_update, 84934656, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_exclude_get, LayerCollection_exclude_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LayerCollection_holdout_ = {
		{&rna_LayerCollection_indirect_only, 	&rna_LayerCollection_exclude,
		-1, "holdout", 4097, 0, 0, 0, 0, PropertyPathTemplateType(0), "Holdout",
		"Mask out objects in collection from view layer",
		299, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LayerCollection_update, 84934656, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_holdout_get, LayerCollection_holdout_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LayerCollection_indirect_only_ = {
		{&rna_LayerCollection_hide_viewport, 	&rna_LayerCollection_holdout,
		-1, "indirect_only", 4097, 0, 0, 0, 0, PropertyPathTemplateType(0), "Indirect Only",
		"Objects in collection only contribute indirectly (through shadows and reflections) in the view layer",
		17, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LayerCollection_update, 84934656, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_indirect_only_get, LayerCollection_indirect_only_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LayerCollection_hide_viewport_ = {
		{&rna_LayerCollection_is_visible, 	&rna_LayerCollection_indirect_only,
		-1, "hide_viewport", 4353, 1, 0, 0, 0, PropertyPathTemplateType(0), "Hide in Viewport",
		"Temporarily hide in viewport",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_LayerCollection_update, 90505216, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_hide_viewport_get, LayerCollection_hide_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_LayerCollection_is_visible_ = {
		{nullptr, 	&rna_LayerCollection_hide_viewport,
		-1, "is_visible", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Visible",
		"Whether this collection is visible for the view layer, take into account the collection parent",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LayerCollection_is_visible_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_LayerCollection;
	srna->cont.properties = {&rna_LayerCollection_rna_properties, &rna_LayerCollection_is_visible};
	srna->identifier = "LayerCollection";
	srna->flag = 516;
	srna->name = "Layer Collection";
	srna->description = "Layer collection";
	srna->translation_context = "*";
	srna->icon = 245;
	srna->nameproperty = &rna_LayerCollection_name;
	srna->iteratorproperty = &rna_LayerCollection_rna_properties;
	{
	rna_LayerCollection_visible_get_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_LayerCollection_visible_get_result, &rna_LayerCollection_visible_get_result};
		func->identifier = "visible_get";
		func->flag = 8;
		func->description = "Whether this collection is visible, take into account the collection parent and the viewport";
		func->call = LayerCollection_visible_get_call;
		func->c_ret = &rna_LayerCollection_visible_get_result;
		rna_LayerCollection_visible_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_LayerCollection_has_objects_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_LayerCollection_has_objects_result, &rna_LayerCollection_has_objects_result};
		func->identifier = "has_objects";
		func->description = "";
		func->call = LayerCollection_has_objects_call;
		func->c_ret = &rna_LayerCollection_has_objects_result;
		rna_LayerCollection_has_objects_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_LayerCollection_has_selected_objects_view_layer_ = {
		{&rna_LayerCollection_has_selected_objects_result, 	nullptr,
		-1, "view_layer", 8388608, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"View layer the layer collection belongs to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ViewLayer
	};
	rna_LayerCollection_has_selected_objects_result_ = {
		{nullptr, 	&rna_LayerCollection_has_selected_objects_view_layer,
		-1, "result", 1, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_LayerCollection_has_selected_objects_view_layer, &rna_LayerCollection_has_selected_objects_result};
		func->identifier = "has_selected_objects";
		func->flag = 4;
		func->description = "";
		func->call = LayerCollection_has_selected_objects_call;
		func->c_ret = &rna_LayerCollection_has_selected_objects_result;
		rna_LayerCollection_has_selected_objects_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Object Base */
static CollectionPropertyRNA rna_ObjectBase_rna_properties_;
PropertyRNA &rna_ObjectBase_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ObjectBase_rna_properties_);

static PointerPropertyRNA rna_ObjectBase_rna_type_;
PropertyRNA &rna_ObjectBase_rna_type = reinterpret_cast<PropertyRNA &>(rna_ObjectBase_rna_type_);

static PointerPropertyRNA rna_ObjectBase_object_;
PropertyRNA &rna_ObjectBase_object = reinterpret_cast<PropertyRNA &>(rna_ObjectBase_object_);

static BoolPropertyRNA rna_ObjectBase_select_;
PropertyRNA &rna_ObjectBase_select = reinterpret_cast<PropertyRNA &>(rna_ObjectBase_select_);

static BoolPropertyRNA rna_ObjectBase_hide_viewport_;
PropertyRNA &rna_ObjectBase_hide_viewport = reinterpret_cast<PropertyRNA &>(rna_ObjectBase_hide_viewport_);

StructRNA *RNA_ObjectBase;
void register_struct_ObjectBase(BlenderRNA &brna)
{
	rna_ObjectBase_rna_properties_ = {
		{&rna_ObjectBase_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectBase_rna_properties_begin, ObjectBase_rna_properties_next, ObjectBase_rna_properties_end, ObjectBase_rna_properties_get, nullptr, nullptr, ObjectBase_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ObjectBase_rna_type_ = {
		{&rna_ObjectBase_object, 	&rna_ObjectBase_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectBase_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ObjectBase_object_ = {
		{&rna_ObjectBase_select, 	&rna_ObjectBase_rna_type,
		-1, "object", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Object this base links to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectBase_object_get, nullptr, nullptr, nullptr,RNA_Object
	};

	rna_ObjectBase_select_ = {
		{&rna_ObjectBase_hide_viewport, 	&rna_ObjectBase_object,
		-1, "select", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Object base selection state",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_ObjectBase_select_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectBase_select_get, ObjectBase_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_ObjectBase_hide_viewport_ = {
		{nullptr, 	&rna_ObjectBase_select,
		-1, "hide_viewport", 1078006017, 1, 0, 0, 0, PropertyPathTemplateType(0), "Hide in Viewport",
		"Temporarily hide in viewport",
		16, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		(UpdateFunc)(void *)rna_ObjectBase_hide_viewport_update, 102170624, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ObjectBase_hide_viewport_get, ObjectBase_hide_viewport_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ObjectBase;
	srna->cont.properties = {&rna_ObjectBase_rna_properties, &rna_ObjectBase_hide_viewport};
	srna->identifier = "ObjectBase";
	srna->flag = 516;
	srna->name = "Object Base";
	srna->description = "An object instance in a View Layer (currently never exposed in Python API)";
	srna->translation_context = "*";
	srna->icon = 192;
	srna->iteratorproperty = &rna_ObjectBase_rna_properties;
};


}  // namespace blender
