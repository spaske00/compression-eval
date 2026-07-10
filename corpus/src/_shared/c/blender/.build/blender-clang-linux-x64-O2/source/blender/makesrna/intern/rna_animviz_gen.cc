
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

#include "rna_animviz.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

#pragma GCC diagnostic ignored "-Wmissing-variable-declarations"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_AnimViz_rna_properties;
extern PropertyRNA &rna_AnimViz_rna_type;
extern PropertyRNA &rna_AnimViz_motion_path;


extern PropertyRNA &rna_AnimVizMotionPaths_rna_properties;
extern PropertyRNA &rna_AnimVizMotionPaths_rna_type;
extern PropertyRNA &rna_AnimVizMotionPaths_type;
extern PropertyRNA &rna_AnimVizMotionPaths_range;
extern PropertyRNA &rna_AnimVizMotionPaths_bake_location;
extern PropertyRNA &rna_AnimVizMotionPaths_show_frame_numbers;
extern PropertyRNA &rna_AnimVizMotionPaths_show_keyframe_highlight;
extern PropertyRNA &rna_AnimVizMotionPaths_show_keyframe_numbers;
extern PropertyRNA &rna_AnimVizMotionPaths_show_keyframe_action_all;
extern PropertyRNA &rna_AnimVizMotionPaths_frame_step;
extern PropertyRNA &rna_AnimVizMotionPaths_frame_start;
extern PropertyRNA &rna_AnimVizMotionPaths_frame_end;
extern PropertyRNA &rna_AnimVizMotionPaths_frame_before;
extern PropertyRNA &rna_AnimVizMotionPaths_frame_after;
extern PropertyRNA &rna_AnimVizMotionPaths_has_motion_paths;
extern PropertyRNA &rna_AnimVizMotionPaths_use_camera_space_bake;


extern PropertyRNA &rna_MotionPath_rna_properties;
extern PropertyRNA &rna_MotionPath_rna_type;
extern PropertyRNA &rna_MotionPath_points;
extern PropertyRNA &rna_MotionPath_frame_start;
extern PropertyRNA &rna_MotionPath_frame_end;
extern PropertyRNA &rna_MotionPath_length;
extern PropertyRNA &rna_MotionPath_color;
extern PropertyRNA &rna_MotionPath_color_post;
extern PropertyRNA &rna_MotionPath_line_thickness;
extern PropertyRNA &rna_MotionPath_use_bone_head;
extern PropertyRNA &rna_MotionPath_is_modified;
extern PropertyRNA &rna_MotionPath_use_custom_color;
extern PropertyRNA &rna_MotionPath_lines;


extern PropertyRNA &rna_MotionPathVert_rna_properties;
extern PropertyRNA &rna_MotionPathVert_rna_type;
extern PropertyRNA &rna_MotionPathVert_co;
extern PropertyRNA &rna_MotionPathVert_select;

static PointerRNA AnimViz_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnimViz_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnimViz_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimViz_rna_properties_get(iter);
    }
}

void AnimViz_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnimViz_rna_properties_get(iter);
    }
}

void AnimViz_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnimViz_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnimViz_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA AnimViz_motion_path_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_AnimViz_motion_paths_get;
    return fn(ptr);
}

static PointerRNA AnimVizMotionPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void AnimVizMotionPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_AnimVizMotionPaths_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = AnimVizMotionPaths_rna_properties_get(iter);
    }
}

void AnimVizMotionPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = AnimVizMotionPaths_rna_properties_get(iter);
    }
}

void AnimVizMotionPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool AnimVizMotionPaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA AnimVizMotionPaths_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int AnimVizMotionPaths_type_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_type);
}

void AnimVizMotionPaths_type_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_type = (std::remove_reference_t<decltype(data->path_type)>)value;
}

int AnimVizMotionPaths_range_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_range);
}

void AnimVizMotionPaths_range_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_range = (std::remove_reference_t<decltype(data->path_range)>)value;
}

int AnimVizMotionPaths_bake_location_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (uint64_t(data->path_bakeflag) & 2);
}

void AnimVizMotionPaths_bake_location_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_bakeflag = std::remove_reference_t<decltype(data->path_bakeflag)>(uint64_t(data->path_bakeflag) & ~uint64_t(2));
    data->path_bakeflag = std::remove_reference_t<decltype(data->path_bakeflag)>(uint64_t(data->path_bakeflag) | uint64_t(value));
}

bool AnimVizMotionPaths_show_frame_numbers_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return ((uint64_t(data->path_viewflag) & 1) != 0);
}

void AnimVizMotionPaths_show_frame_numbers_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_viewflag = std::remove_reference_t<decltype(data->path_viewflag)>(uint64_t(data->path_viewflag) | 1); }
    else { data->path_viewflag = std::remove_reference_t<decltype(data->path_viewflag)>(uint64_t(data->path_viewflag) & ~uint64_t(1)); }
}

bool AnimVizMotionPaths_show_keyframe_highlight_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return ((uint64_t(data->path_viewflag) & 2) != 0);
}

void AnimVizMotionPaths_show_keyframe_highlight_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_viewflag = std::remove_reference_t<decltype(data->path_viewflag)>(uint64_t(data->path_viewflag) | 2); }
    else { data->path_viewflag = std::remove_reference_t<decltype(data->path_viewflag)>(uint64_t(data->path_viewflag) & ~uint64_t(2)); }
}

bool AnimVizMotionPaths_show_keyframe_numbers_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return ((uint64_t(data->path_viewflag) & 4) != 0);
}

void AnimVizMotionPaths_show_keyframe_numbers_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_viewflag = std::remove_reference_t<decltype(data->path_viewflag)>(uint64_t(data->path_viewflag) | 4); }
    else { data->path_viewflag = std::remove_reference_t<decltype(data->path_viewflag)>(uint64_t(data->path_viewflag) & ~uint64_t(4)); }
}

bool AnimVizMotionPaths_show_keyframe_action_all_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return ((uint64_t(data->path_viewflag) & 8) != 0);
}

void AnimVizMotionPaths_show_keyframe_action_all_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_viewflag = std::remove_reference_t<decltype(data->path_viewflag)>(uint64_t(data->path_viewflag) | 8); }
    else { data->path_viewflag = std::remove_reference_t<decltype(data->path_viewflag)>(uint64_t(data->path_viewflag) & ~uint64_t(8)); }
}

int AnimVizMotionPaths_frame_step_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_step);
}

void AnimVizMotionPaths_frame_step_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_step = (std::remove_reference_t<decltype(data->path_step)>)std::clamp(value, 1, 100);
}

int AnimVizMotionPaths_frame_start_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_sf);
}

void AnimVizMotionPaths_frame_start_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AnimViz_path_start_frame_set;
    fn(ptr, value);
}

int AnimVizMotionPaths_frame_end_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_ef);
}

void AnimVizMotionPaths_frame_end_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_AnimViz_path_end_frame_set;
    fn(ptr, value);
}

int AnimVizMotionPaths_frame_before_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_bc);
}

void AnimVizMotionPaths_frame_before_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_bc = (std::remove_reference_t<decltype(data->path_bc)>)std::clamp(value, 1, 524287);
}

int AnimVizMotionPaths_frame_after_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return (int)(data->path_ac);
}

void AnimVizMotionPaths_frame_after_set(PointerRNA *ptr, int value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    data->path_ac = (std::remove_reference_t<decltype(data->path_ac)>)std::clamp(value, 1, 524287);
}

bool AnimVizMotionPaths_has_motion_paths_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return ((uint64_t(data->path_bakeflag) & 4) != 0);
}

bool AnimVizMotionPaths_use_camera_space_bake_get(PointerRNA *ptr)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    return ((uint64_t(data->path_bakeflag) & 8) != 0);
}

void AnimVizMotionPaths_use_camera_space_bake_set(PointerRNA *ptr, bool value)
{
    bAnimVizSettings *data = (bAnimVizSettings *)(ptr->data);
    if (value) { data->path_bakeflag = std::remove_reference_t<decltype(data->path_bakeflag)>(uint64_t(data->path_bakeflag) | 8); }
    else { data->path_bakeflag = std::remove_reference_t<decltype(data->path_bakeflag)>(uint64_t(data->path_bakeflag) & ~uint64_t(8)); }
}

static PointerRNA MotionPath_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MotionPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MotionPath_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MotionPath_rna_properties_get(iter);
    }
}

void MotionPath_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MotionPath_rna_properties_get(iter);
    }
}

void MotionPath_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MotionPath_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MotionPath_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MotionPath_points_length(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (data->points == nullptr) ? 0 : data->length;
}

static PointerRNA MotionPath_points_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MotionPathVert, rna_iterator_array_get(iter));
}

void MotionPath_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MotionPath_points;

    rna_iterator_array_begin(iter, ptr, data->points, sizeof(data->points[0]), data->length, 0, nullptr);

    if (iter->valid) {
        iter->ptr = MotionPath_points_get(iter);
    }
}

void MotionPath_points_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MotionPath_points_get(iter);
    }
}

void MotionPath_points_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MotionPath_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MotionPath_points_begin(&iter, ptr);

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
        if (found) { *r_ptr = MotionPath_points_get(&iter); }
    }

    MotionPath_points_end(&iter);

    return found;
}

int MotionPath_frame_start_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (int)(data->start_frame);
}

int MotionPath_frame_end_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (int)(data->end_frame);
}

int MotionPath_length_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (int)(data->length);
}

void MotionPath_color_get(PointerRNA *ptr, float values[3])
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color)[i]);
    }
}

void MotionPath_color_set(PointerRNA *ptr, const float values[3])
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

void MotionPath_color_post_get(PointerRNA *ptr, float values[3])
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->color_post)[i]);
    }
}

void MotionPath_color_post_set(PointerRNA *ptr, const float values[3])
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->color_post)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

int MotionPath_line_thickness_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return (int)(data->line_thickness);
}

void MotionPath_line_thickness_set(PointerRNA *ptr, int value)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    data->line_thickness = (std::remove_reference_t<decltype(data->line_thickness)>)std::clamp(value, 1, 6);
}

bool MotionPath_use_bone_head_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

bool MotionPath_is_modified_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MotionPath_is_modified_set(PointerRNA *ptr, bool value)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

bool MotionPath_use_custom_color_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void MotionPath_use_custom_color_set(PointerRNA *ptr, bool value)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool MotionPath_lines_get(PointerRNA *ptr)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void MotionPath_lines_set(PointerRNA *ptr, bool value)
{
    bMotionPath *data = (bMotionPath *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

static PointerRNA MotionPathVert_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MotionPathVert_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MotionPathVert_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MotionPathVert_rna_properties_get(iter);
    }
}

void MotionPathVert_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MotionPathVert_rna_properties_get(iter);
    }
}

void MotionPathVert_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MotionPathVert_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MotionPathVert_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MotionPathVert_co_get(PointerRNA *ptr, float values[3])
{
    bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)(((float *)data->co)[i]);
    }
}

void MotionPathVert_co_set(PointerRNA *ptr, const float values[3])
{
    bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->co)[i] = values[i];
    }
}

bool MotionPathVert_select_get(PointerRNA *ptr)
{
    bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MotionPathVert_select_set(PointerRNA *ptr, bool value)
{
    bMotionPathVert *data = (bMotionPathVert *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}





/* Animation Visualization */
static CollectionPropertyRNA rna_AnimViz_rna_properties_;
PropertyRNA &rna_AnimViz_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnimViz_rna_properties_);

static PointerPropertyRNA rna_AnimViz_rna_type_;
PropertyRNA &rna_AnimViz_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnimViz_rna_type_);

static PointerPropertyRNA rna_AnimViz_motion_path_;
PropertyRNA &rna_AnimViz_motion_path = reinterpret_cast<PropertyRNA &>(rna_AnimViz_motion_path_);

StructRNA *RNA_AnimViz;
void register_struct_AnimViz(BlenderRNA &brna)
{
	rna_AnimViz_rna_properties_ = {
		{&rna_AnimViz_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimViz_rna_properties_begin, AnimViz_rna_properties_next, AnimViz_rna_properties_end, AnimViz_rna_properties_get, nullptr, nullptr, AnimViz_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnimViz_rna_type_ = {
		{&rna_AnimViz_motion_path, 	&rna_AnimViz_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimViz_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AnimViz_motion_path_ = {
		{nullptr, 	&rna_AnimViz_rna_type,
		-1, "motion_path", 8650752, 1, 0, 0, 0, PropertyPathTemplateType(0), "Motion Paths",
		"Motion Path settings for visualization",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimViz_motion_path_get, nullptr, nullptr, nullptr,RNA_AnimVizMotionPaths
	};

	StructRNA *srna = RNA_AnimViz;
	srna->cont.properties = {&rna_AnimViz_rna_properties, &rna_AnimViz_motion_path};
	srna->identifier = "AnimViz";
	srna->flag = 516;
	srna->name = "Animation Visualization";
	srna->description = "Settings for the visualization of motion";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnimViz_rna_properties;
};

/* Motion Path Settings */
static CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties_;
PropertyRNA &rna_AnimVizMotionPaths_rna_properties = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_rna_properties_);

static PointerPropertyRNA rna_AnimVizMotionPaths_rna_type_;
PropertyRNA &rna_AnimVizMotionPaths_rna_type = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_rna_type_);

static EnumPropertyRNA rna_AnimVizMotionPaths_type_;
PropertyRNA &rna_AnimVizMotionPaths_type = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_type_);

static EnumPropertyRNA rna_AnimVizMotionPaths_range_;
PropertyRNA &rna_AnimVizMotionPaths_range = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_range_);

static EnumPropertyRNA rna_AnimVizMotionPaths_bake_location_;
PropertyRNA &rna_AnimVizMotionPaths_bake_location = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_bake_location_);

static BoolPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers_;
PropertyRNA &rna_AnimVizMotionPaths_show_frame_numbers = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_show_frame_numbers_);

static BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight_;
PropertyRNA &rna_AnimVizMotionPaths_show_keyframe_highlight = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_show_keyframe_highlight_);

static BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers_;
PropertyRNA &rna_AnimVizMotionPaths_show_keyframe_numbers = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_show_keyframe_numbers_);

static BoolPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all_;
PropertyRNA &rna_AnimVizMotionPaths_show_keyframe_action_all = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_show_keyframe_action_all_);

static IntPropertyRNA rna_AnimVizMotionPaths_frame_step_;
PropertyRNA &rna_AnimVizMotionPaths_frame_step = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_frame_step_);

static IntPropertyRNA rna_AnimVizMotionPaths_frame_start_;
PropertyRNA &rna_AnimVizMotionPaths_frame_start = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_frame_start_);

static IntPropertyRNA rna_AnimVizMotionPaths_frame_end_;
PropertyRNA &rna_AnimVizMotionPaths_frame_end = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_frame_end_);

static IntPropertyRNA rna_AnimVizMotionPaths_frame_before_;
PropertyRNA &rna_AnimVizMotionPaths_frame_before = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_frame_before_);

static IntPropertyRNA rna_AnimVizMotionPaths_frame_after_;
PropertyRNA &rna_AnimVizMotionPaths_frame_after = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_frame_after_);

static BoolPropertyRNA rna_AnimVizMotionPaths_has_motion_paths_;
PropertyRNA &rna_AnimVizMotionPaths_has_motion_paths = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_has_motion_paths_);

static BoolPropertyRNA rna_AnimVizMotionPaths_use_camera_space_bake_;
PropertyRNA &rna_AnimVizMotionPaths_use_camera_space_bake = reinterpret_cast<PropertyRNA &>(rna_AnimVizMotionPaths_use_camera_space_bake_);

StructRNA *RNA_AnimVizMotionPaths;
void register_struct_AnimVizMotionPaths(BlenderRNA &brna)
{
	rna_AnimVizMotionPaths_rna_properties_ = {
		{&rna_AnimVizMotionPaths_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_rna_properties_begin, AnimVizMotionPaths_rna_properties_next, AnimVizMotionPaths_rna_properties_end, AnimVizMotionPaths_rna_properties_get, nullptr, nullptr, AnimVizMotionPaths_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_AnimVizMotionPaths_rna_type_ = {
		{&rna_AnimVizMotionPaths_type, 	&rna_AnimVizMotionPaths_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_AnimVizMotionPaths_type_ = {
		{&rna_AnimVizMotionPaths_range, 	&rna_AnimVizMotionPaths_rna_type,
		-1, "type", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Paths Type",
		"Type of range to show for Motion Paths",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bAnimVizSettings, path_type), RawPropertyType(1), nullptr},
		AnimVizMotionPaths_type_get, AnimVizMotionPaths_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_motionpath_display_type_items, 2, 0
	};

	rna_AnimVizMotionPaths_range_ = {
		{&rna_AnimVizMotionPaths_bake_location, 	&rna_AnimVizMotionPaths_type,
		-1, "range", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Paths Range",
		"Type of range to calculate for Motion Paths",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bAnimVizSettings, path_range), RawPropertyType(1), nullptr},
		AnimVizMotionPaths_range_get, AnimVizMotionPaths_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_motionpath_range_items, 4, 0
	};

	rna_AnimVizMotionPaths_bake_location_ = {
		{&rna_AnimVizMotionPaths_show_frame_numbers, 	&rna_AnimVizMotionPaths_range,
		-1, "bake_location", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Bake Location",
		"When calculating Bone Paths, use Head or Tips",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bAnimVizSettings, path_bakeflag), RawPropertyType(1), nullptr},
		AnimVizMotionPaths_bake_location_get, AnimVizMotionPaths_bake_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_motionpath_bake_location_items, 2, 0
	};

	rna_AnimVizMotionPaths_show_frame_numbers_ = {
		{&rna_AnimVizMotionPaths_show_keyframe_highlight, 	&rna_AnimVizMotionPaths_bake_location,
		-1, "show_frame_numbers", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Frame Numbers",
		"Show frame numbers on Motion Paths",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_show_frame_numbers_get, AnimVizMotionPaths_show_frame_numbers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_show_keyframe_highlight_ = {
		{&rna_AnimVizMotionPaths_show_keyframe_numbers, 	&rna_AnimVizMotionPaths_show_frame_numbers,
		-1, "show_keyframe_highlight", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Highlight Keyframes",
		"Emphasize position of keyframes on Motion Paths",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_show_keyframe_highlight_get, AnimVizMotionPaths_show_keyframe_highlight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_show_keyframe_numbers_ = {
		{&rna_AnimVizMotionPaths_show_keyframe_action_all, 	&rna_AnimVizMotionPaths_show_keyframe_highlight,
		-1, "show_keyframe_numbers", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Show Keyframe Numbers",
		"Show frame numbers of Keyframes on Motion Paths",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_show_keyframe_numbers_get, AnimVizMotionPaths_show_keyframe_numbers_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_show_keyframe_action_all_ = {
		{&rna_AnimVizMotionPaths_frame_step, 	&rna_AnimVizMotionPaths_show_keyframe_numbers,
		-1, "show_keyframe_action_all", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "All Action Keyframes",
		"For bone motion paths, search whole Action for keyframes instead of in group with matching name only (is slower)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_show_keyframe_action_all_get, AnimVizMotionPaths_show_keyframe_action_all_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_frame_step_ = {
		{&rna_AnimVizMotionPaths_frame_start, 	&rna_AnimVizMotionPaths_show_keyframe_action_all,
		-1, "frame_step", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Frame Step",
		"Number of frames between paths shown (not for \'On Keyframes\' Onion-skinning method)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bAnimVizSettings, path_step), RawPropertyType(1), nullptr},
		AnimVizMotionPaths_frame_step_get, AnimVizMotionPaths_frame_step_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 100, 1, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_frame_start_ = {
		{&rna_AnimVizMotionPaths_frame_end, 	&rna_AnimVizMotionPaths_frame_step,
		-1, "frame_start", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Start Frame",
		"Starting frame of range of paths to display/calculate (not for \'Around Frame\' Onion-skinning method)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_frame_start_get, AnimVizMotionPaths_frame_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_frame_end_ = {
		{&rna_AnimVizMotionPaths_frame_before, 	&rna_AnimVizMotionPaths_frame_start,
		-1, "frame_end", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "End Frame",
		"End frame of range of paths to display/calculate (not for \'Around Frame\' Onion-skinning method)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_frame_end_get, AnimVizMotionPaths_frame_end_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_frame_before_ = {
		{&rna_AnimVizMotionPaths_frame_after, 	&rna_AnimVizMotionPaths_frame_end,
		-1, "frame_before", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Before Current",
		"Number of frames to show before the current frame (only for \'Around Frame\' Onion-skinning method)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bAnimVizSettings, path_bc), RawPropertyType(0), nullptr},
		AnimVizMotionPaths_frame_before_get, AnimVizMotionPaths_frame_before_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 524287, 1, 524287, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_frame_after_ = {
		{&rna_AnimVizMotionPaths_has_motion_paths, 	&rna_AnimVizMotionPaths_frame_before,
		-1, "frame_after", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "After Current",
		"Number of frames to show after the current frame (only for \'Around Frame\' Onion-skinning method)",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bAnimVizSettings, path_ac), RawPropertyType(0), nullptr},
		AnimVizMotionPaths_frame_after_get, AnimVizMotionPaths_frame_after_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 524287, 1, 524287, 1, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_has_motion_paths_ = {
		{&rna_AnimVizMotionPaths_use_camera_space_bake, 	&rna_AnimVizMotionPaths_frame_after,
		-1, "has_motion_paths", 2, 1, 0, 0, 0, PropertyPathTemplateType(0), "Has Motion Paths",
		"Are there any bone paths that will need updating (read-only)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_has_motion_paths_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_AnimVizMotionPaths_use_camera_space_bake_ = {
		{nullptr, 	&rna_AnimVizMotionPaths_has_motion_paths,
		-1, "use_camera_space_bake", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Bake to active Camera",
		"Motion path points will be baked into the camera space of the active camera. This means they will only look right when looking through that camera. Switching cameras using markers is not supported.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		AnimVizMotionPaths_use_camera_space_bake_get, AnimVizMotionPaths_use_camera_space_bake_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_AnimVizMotionPaths;
	srna->cont.properties = {&rna_AnimVizMotionPaths_rna_properties, &rna_AnimVizMotionPaths_use_camera_space_bake};
	srna->identifier = "AnimVizMotionPaths";
	srna->flag = 516;
	srna->name = "Motion Path Settings";
	srna->description = "Motion Path settings for animation visualization";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_AnimVizMotionPaths_rna_properties;
	srna->nested = RNA_AnimViz;
};

/* Motion Path */
static CollectionPropertyRNA rna_MotionPath_rna_properties_;
PropertyRNA &rna_MotionPath_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MotionPath_rna_properties_);

static PointerPropertyRNA rna_MotionPath_rna_type_;
PropertyRNA &rna_MotionPath_rna_type = reinterpret_cast<PropertyRNA &>(rna_MotionPath_rna_type_);

static CollectionPropertyRNA rna_MotionPath_points_;
PropertyRNA &rna_MotionPath_points = reinterpret_cast<PropertyRNA &>(rna_MotionPath_points_);

static IntPropertyRNA rna_MotionPath_frame_start_;
PropertyRNA &rna_MotionPath_frame_start = reinterpret_cast<PropertyRNA &>(rna_MotionPath_frame_start_);

static IntPropertyRNA rna_MotionPath_frame_end_;
PropertyRNA &rna_MotionPath_frame_end = reinterpret_cast<PropertyRNA &>(rna_MotionPath_frame_end_);

static IntPropertyRNA rna_MotionPath_length_;
PropertyRNA &rna_MotionPath_length = reinterpret_cast<PropertyRNA &>(rna_MotionPath_length_);

static FloatPropertyRNA rna_MotionPath_color_;
PropertyRNA &rna_MotionPath_color = reinterpret_cast<PropertyRNA &>(rna_MotionPath_color_);

static FloatPropertyRNA rna_MotionPath_color_post_;
PropertyRNA &rna_MotionPath_color_post = reinterpret_cast<PropertyRNA &>(rna_MotionPath_color_post_);

static IntPropertyRNA rna_MotionPath_line_thickness_;
PropertyRNA &rna_MotionPath_line_thickness = reinterpret_cast<PropertyRNA &>(rna_MotionPath_line_thickness_);

static BoolPropertyRNA rna_MotionPath_use_bone_head_;
PropertyRNA &rna_MotionPath_use_bone_head = reinterpret_cast<PropertyRNA &>(rna_MotionPath_use_bone_head_);

static BoolPropertyRNA rna_MotionPath_is_modified_;
PropertyRNA &rna_MotionPath_is_modified = reinterpret_cast<PropertyRNA &>(rna_MotionPath_is_modified_);

static BoolPropertyRNA rna_MotionPath_use_custom_color_;
PropertyRNA &rna_MotionPath_use_custom_color = reinterpret_cast<PropertyRNA &>(rna_MotionPath_use_custom_color_);

static BoolPropertyRNA rna_MotionPath_lines_;
PropertyRNA &rna_MotionPath_lines = reinterpret_cast<PropertyRNA &>(rna_MotionPath_lines_);

StructRNA *RNA_MotionPath;
void register_struct_MotionPath(BlenderRNA &brna)
{
	rna_MotionPath_rna_properties_ = {
		{&rna_MotionPath_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPath_rna_properties_begin, MotionPath_rna_properties_next, MotionPath_rna_properties_end, MotionPath_rna_properties_get, nullptr, nullptr, MotionPath_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MotionPath_rna_type_ = {
		{&rna_MotionPath_points, 	&rna_MotionPath_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPath_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MotionPath_points_ = {
		{&rna_MotionPath_frame_start, 	&rna_MotionPath_rna_type,
		-1, "points", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Motion Path Points",
		"Cached positions per frame",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPath_points_begin, MotionPath_points_next, MotionPath_points_end, MotionPath_points_get, MotionPath_points_length, MotionPath_points_lookup_int, nullptr, nullptr, RNA_MotionPathVert
	};

	rna_MotionPath_frame_start_ = {
		{&rna_MotionPath_frame_end, 	&rna_MotionPath_points,
		-1, "frame_start", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Start Frame",
		"Starting frame of the stored range",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMotionPath, start_frame), RawPropertyType(0), nullptr},
		MotionPath_frame_start_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MotionPath_frame_end_ = {
		{&rna_MotionPath_length, 	&rna_MotionPath_frame_start,
		-1, "frame_end", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "End Frame",
		"End frame of the stored range",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMotionPath, end_frame), RawPropertyType(0), nullptr},
		MotionPath_frame_end_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MotionPath_length_ = {
		{&rna_MotionPath_color, 	&rna_MotionPath_frame_end,
		-1, "length", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Length",
		"Number of frames cached",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_TIME) | int(PROP_UNIT_TIME)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMotionPath, length), RawPropertyType(0), nullptr},
		MotionPath_length_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_MotionPath_color_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MotionPath_color_ = {
		{&rna_MotionPath_color_post, 	&rna_MotionPath_length,
		-1, "color", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Color Pre",
		"Custom color for motion path before the current frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMotionPath, color), RawPropertyType(5), nullptr},
		nullptr, nullptr, MotionPath_color_get, MotionPath_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MotionPath_color_default
	};

	static float rna_MotionPath_color_post_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MotionPath_color_post_ = {
		{&rna_MotionPath_line_thickness, 	&rna_MotionPath_color,
		-1, "color_post", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Color Post",
		"Custom color for motion path after the current frame",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR_GAMMA) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMotionPath, color_post), RawPropertyType(5), nullptr},
		nullptr, nullptr, MotionPath_color_post_get, MotionPath_color_post_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MotionPath_color_post_default
	};

	rna_MotionPath_line_thickness_ = {
		{&rna_MotionPath_use_bone_head, 	&rna_MotionPath_color_post,
		-1, "line_thickness", 3, 1, 0, 4, 0, PropertyPathTemplateType(0), "Line Thickness",
		"Line thickness for motion path",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMotionPath, line_thickness), RawPropertyType(0), nullptr},
		MotionPath_line_thickness_get, MotionPath_line_thickness_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 6, 1, 6, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MotionPath_use_bone_head_ = {
		{&rna_MotionPath_is_modified, 	&rna_MotionPath_line_thickness,
		-1, "use_bone_head", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Bone Heads",
		"For PoseBone paths, use the bone head location when calculating this path",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPath_use_bone_head_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MotionPath_is_modified_ = {
		{&rna_MotionPath_use_custom_color, 	&rna_MotionPath_use_bone_head,
		-1, "is_modified", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edit Path",
		"Path is being edited",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPath_is_modified_get, MotionPath_is_modified_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MotionPath_use_custom_color_ = {
		{&rna_MotionPath_lines, 	&rna_MotionPath_is_modified,
		-1, "use_custom_color", 3, 1, 0, 0, 0, PropertyPathTemplateType(0), "Custom Colors",
		"Use custom color for this motion path",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPath_use_custom_color_get, MotionPath_use_custom_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MotionPath_lines_ = {
		{nullptr, 	&rna_MotionPath_use_custom_color,
		-1, "lines", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lines",
		"Use straight lines between keyframe points",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 102825984, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPath_lines_get, MotionPath_lines_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MotionPath;
	srna->cont.properties = {&rna_MotionPath_rna_properties, &rna_MotionPath_lines};
	srna->identifier = "MotionPath";
	srna->flag = 516;
	srna->name = "Motion Path";
	srna->description = "Cache of the world-space positions of an element over a frame range";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MotionPath_rna_properties;
};

/* Motion Path Cache Point */
static CollectionPropertyRNA rna_MotionPathVert_rna_properties_;
PropertyRNA &rna_MotionPathVert_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MotionPathVert_rna_properties_);

static PointerPropertyRNA rna_MotionPathVert_rna_type_;
PropertyRNA &rna_MotionPathVert_rna_type = reinterpret_cast<PropertyRNA &>(rna_MotionPathVert_rna_type_);

static FloatPropertyRNA rna_MotionPathVert_co_;
PropertyRNA &rna_MotionPathVert_co = reinterpret_cast<PropertyRNA &>(rna_MotionPathVert_co_);

static BoolPropertyRNA rna_MotionPathVert_select_;
PropertyRNA &rna_MotionPathVert_select = reinterpret_cast<PropertyRNA &>(rna_MotionPathVert_select_);

StructRNA *RNA_MotionPathVert;
void register_struct_MotionPathVert(BlenderRNA &brna)
{
	rna_MotionPathVert_rna_properties_ = {
		{&rna_MotionPathVert_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPathVert_rna_properties_begin, MotionPathVert_rna_properties_next, MotionPathVert_rna_properties_end, MotionPathVert_rna_properties_get, nullptr, nullptr, MotionPathVert_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MotionPathVert_rna_type_ = {
		{&rna_MotionPathVert_co, 	&rna_MotionPathVert_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPathVert_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MotionPathVert_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MotionPathVert_co_ = {
		{&rna_MotionPathVert_select, 	&rna_MotionPathVert_rna_type,
		-1, "co", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Coordinates",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(bMotionPathVert, co), RawPropertyType(5), nullptr},
		nullptr, nullptr, MotionPathVert_co_get, MotionPathVert_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MotionPathVert_co_default
	};

	rna_MotionPathVert_select_ = {
		{nullptr, 	&rna_MotionPathVert_co,
		-1, "select", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"Path point is selected for editing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MotionPathVert_select_get, MotionPathVert_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MotionPathVert;
	srna->cont.properties = {&rna_MotionPathVert_rna_properties, &rna_MotionPathVert_select};
	srna->identifier = "MotionPathVert";
	srna->flag = 516;
	srna->name = "Motion Path Cache Point";
	srna->description = "Cached location on path";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MotionPathVert_rna_properties;
};


}  // namespace blender
