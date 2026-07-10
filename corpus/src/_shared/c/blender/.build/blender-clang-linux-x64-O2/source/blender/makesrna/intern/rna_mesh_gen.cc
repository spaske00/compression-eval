
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

#include "rna_mesh.cc"
#include "rna_mesh_api.cc"

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

extern PropertyRNA &rna_Mesh_vertices;
extern PropertyRNA &rna_Mesh_edges;
extern PropertyRNA &rna_Mesh_loops;
extern PropertyRNA &rna_Mesh_polygons;
extern PropertyRNA &rna_Mesh_normals_domain;
extern PropertyRNA &rna_Mesh_vertex_normals;
extern PropertyRNA &rna_Mesh_polygon_normals;
extern PropertyRNA &rna_Mesh_corner_normals;
extern PropertyRNA &rna_Mesh_loop_triangles;
extern PropertyRNA &rna_Mesh_loop_triangle_polygons;
extern PropertyRNA &rna_Mesh_texture_mesh;
extern PropertyRNA &rna_Mesh_uv_layers;
extern PropertyRNA &rna_Mesh_uv_layer_clone;
extern PropertyRNA &rna_Mesh_uv_layer_clone_index;
extern PropertyRNA &rna_Mesh_uv_layer_stencil;
extern PropertyRNA &rna_Mesh_uv_layer_stencil_index;
extern PropertyRNA &rna_Mesh_vertex_colors;
extern PropertyRNA &rna_Mesh_skin_vertices;
extern PropertyRNA &rna_Mesh_attributes;
extern PropertyRNA &rna_Mesh_color_attributes;
extern PropertyRNA &rna_Mesh_remesh_voxel_size;
extern PropertyRNA &rna_Mesh_remesh_voxel_adaptivity;
extern PropertyRNA &rna_Mesh_use_remesh_fix_poles;
extern PropertyRNA &rna_Mesh_use_remesh_preserve_volume;
extern PropertyRNA &rna_Mesh_use_remesh_preserve_attributes;
extern PropertyRNA &rna_Mesh_remesh_mode;
extern PropertyRNA &rna_Mesh_use_mirror_x;
extern PropertyRNA &rna_Mesh_use_mirror_y;
extern PropertyRNA &rna_Mesh_use_mirror_z;
extern PropertyRNA &rna_Mesh_use_mirror_vertex_groups;
extern PropertyRNA &rna_Mesh_radial_symmetry;
extern PropertyRNA &rna_Mesh_has_custom_normals;
extern PropertyRNA &rna_Mesh_texco_mesh;
extern PropertyRNA &rna_Mesh_shape_keys;
extern PropertyRNA &rna_Mesh_use_auto_texspace;
extern PropertyRNA &rna_Mesh_use_mirror_topology;
extern PropertyRNA &rna_Mesh_use_paint_bone_selection;
extern PropertyRNA &rna_Mesh_use_paint_mask;
extern PropertyRNA &rna_Mesh_use_paint_mask_vertex;
extern PropertyRNA &rna_Mesh_total_vert_sel;
extern PropertyRNA &rna_Mesh_total_edge_sel;
extern PropertyRNA &rna_Mesh_total_face_sel;
extern PropertyRNA &rna_Mesh_is_editmode;
extern PropertyRNA &rna_Mesh_animation_data;
extern PropertyRNA &rna_Mesh_auto_texspace;
extern PropertyRNA &rna_Mesh_texspace_location;
extern PropertyRNA &rna_Mesh_texspace_size;
extern PropertyRNA &rna_Mesh_materials;

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


extern FunctionRNA *rna_Mesh_transform_func;
extern PropertyRNA &rna_Mesh_transform_matrix;
extern PropertyRNA &rna_Mesh_transform_shape_keys;

extern FunctionRNA *rna_Mesh_flip_normals_func;
extern FunctionRNA *rna_Mesh_set_sharp_from_angle_func;
extern PropertyRNA &rna_Mesh_set_sharp_from_angle_angle;

extern FunctionRNA *rna_Mesh_split_faces_func;
extern FunctionRNA *rna_Mesh_calc_tangents_func;
extern PropertyRNA &rna_Mesh_calc_tangents_uvmap;

extern FunctionRNA *rna_Mesh_free_tangents_func;
extern FunctionRNA *rna_Mesh_calc_loop_triangles_func;
extern FunctionRNA *rna_Mesh_calc_smooth_groups_func;
extern PropertyRNA &rna_Mesh_calc_smooth_groups_use_bitflags;
extern PropertyRNA &rna_Mesh_calc_smooth_groups_use_boundary_vertices_for_bitflags;
extern PropertyRNA &rna_Mesh_calc_smooth_groups_poly_groups;
extern PropertyRNA &rna_Mesh_calc_smooth_groups_groups;

extern FunctionRNA *rna_Mesh_normals_split_custom_set_func;
extern PropertyRNA &rna_Mesh_normals_split_custom_set_normals;

extern FunctionRNA *rna_Mesh_normals_split_custom_set_from_vertices_func;
extern PropertyRNA &rna_Mesh_normals_split_custom_set_from_vertices_normals;

extern FunctionRNA *rna_Mesh_update_func;
extern PropertyRNA &rna_Mesh_update_calc_edges;
extern PropertyRNA &rna_Mesh_update_calc_edges_loose;

extern FunctionRNA *rna_Mesh_update_gpu_tag_func;
extern FunctionRNA *rna_Mesh_unit_test_compare_func;
extern PropertyRNA &rna_Mesh_unit_test_compare_mesh;
extern PropertyRNA &rna_Mesh_unit_test_compare_threshold;
extern PropertyRNA &rna_Mesh_unit_test_compare_result;

extern FunctionRNA *rna_Mesh_clear_geometry_func;
extern FunctionRNA *rna_Mesh_validate_func;
extern PropertyRNA &rna_Mesh_validate_verbose;
extern PropertyRNA &rna_Mesh_validate_clean_customdata;
extern PropertyRNA &rna_Mesh_validate_result;

extern FunctionRNA *rna_Mesh_validate_material_indices_func;
extern PropertyRNA &rna_Mesh_validate_material_indices_result;

extern FunctionRNA *rna_Mesh_count_selected_items_func;
extern PropertyRNA &rna_Mesh_count_selected_items_result;



extern PropertyRNA &rna_MeshVertices_rna_properties;
extern PropertyRNA &rna_MeshVertices_rna_type;

extern FunctionRNA *rna_MeshVertices_add_func;
extern PropertyRNA &rna_MeshVertices_add_count;



extern PropertyRNA &rna_MeshEdges_rna_properties;
extern PropertyRNA &rna_MeshEdges_rna_type;

extern FunctionRNA *rna_MeshEdges_add_func;
extern PropertyRNA &rna_MeshEdges_add_count;



extern PropertyRNA &rna_MeshLoops_rna_properties;
extern PropertyRNA &rna_MeshLoops_rna_type;

extern FunctionRNA *rna_MeshLoops_add_func;
extern PropertyRNA &rna_MeshLoops_add_count;



extern PropertyRNA &rna_MeshPolygons_rna_properties;
extern PropertyRNA &rna_MeshPolygons_rna_type;
extern PropertyRNA &rna_MeshPolygons_active;

extern FunctionRNA *rna_MeshPolygons_add_func;
extern PropertyRNA &rna_MeshPolygons_add_count;



extern PropertyRNA &rna_MeshNormalValue_rna_properties;
extern PropertyRNA &rna_MeshNormalValue_rna_type;
extern PropertyRNA &rna_MeshNormalValue_vector;


extern PropertyRNA &rna_MeshLoopTriangles_rna_properties;
extern PropertyRNA &rna_MeshLoopTriangles_rna_type;


extern PropertyRNA &rna_ReadOnlyInteger_rna_properties;
extern PropertyRNA &rna_ReadOnlyInteger_rna_type;
extern PropertyRNA &rna_ReadOnlyInteger_value;


extern PropertyRNA &rna_UVLoopLayers_rna_properties;
extern PropertyRNA &rna_UVLoopLayers_rna_type;
extern PropertyRNA &rna_UVLoopLayers_active;
extern PropertyRNA &rna_UVLoopLayers_active_index;
extern PropertyRNA &rna_UVLoopLayers_active_render;
extern PropertyRNA &rna_UVLoopLayers_active_render_index;

extern FunctionRNA *rna_UVLoopLayers_new_func;
extern PropertyRNA &rna_UVLoopLayers_new_name;
extern PropertyRNA &rna_UVLoopLayers_new_do_init;
extern PropertyRNA &rna_UVLoopLayers_new_layer;

extern FunctionRNA *rna_UVLoopLayers_remove_func;
extern PropertyRNA &rna_UVLoopLayers_remove_layer;



extern PropertyRNA &rna_LoopColors_rna_properties;
extern PropertyRNA &rna_LoopColors_rna_type;
extern PropertyRNA &rna_LoopColors_active;
extern PropertyRNA &rna_LoopColors_active_index;

extern FunctionRNA *rna_LoopColors_new_func;
extern PropertyRNA &rna_LoopColors_new_name;
extern PropertyRNA &rna_LoopColors_new_do_init;
extern PropertyRNA &rna_LoopColors_new_layer;

extern FunctionRNA *rna_LoopColors_remove_func;
extern PropertyRNA &rna_LoopColors_remove_layer;



extern PropertyRNA &rna_MeshSkinVertexLayer_rna_properties;
extern PropertyRNA &rna_MeshSkinVertexLayer_rna_type;
extern PropertyRNA &rna_MeshSkinVertexLayer_name;
extern PropertyRNA &rna_MeshSkinVertexLayer_data;


extern PropertyRNA &rna_MeshSkinVertex_rna_properties;
extern PropertyRNA &rna_MeshSkinVertex_rna_type;
extern PropertyRNA &rna_MeshSkinVertex_radius;
extern PropertyRNA &rna_MeshSkinVertex_use_root;
extern PropertyRNA &rna_MeshSkinVertex_use_loose;


extern PropertyRNA &rna_MeshVertex_rna_properties;
extern PropertyRNA &rna_MeshVertex_rna_type;
extern PropertyRNA &rna_MeshVertex_co;
extern PropertyRNA &rna_MeshVertex_normal;
extern PropertyRNA &rna_MeshVertex_select;
extern PropertyRNA &rna_MeshVertex_hide;
extern PropertyRNA &rna_MeshVertex_groups;
extern PropertyRNA &rna_MeshVertex_index;
extern PropertyRNA &rna_MeshVertex_undeformed_co;


extern PropertyRNA &rna_VertexGroupElement_rna_properties;
extern PropertyRNA &rna_VertexGroupElement_rna_type;
extern PropertyRNA &rna_VertexGroupElement_group;
extern PropertyRNA &rna_VertexGroupElement_weight;


extern PropertyRNA &rna_MeshEdge_rna_properties;
extern PropertyRNA &rna_MeshEdge_rna_type;
extern PropertyRNA &rna_MeshEdge_vertices;
extern PropertyRNA &rna_MeshEdge_select;
extern PropertyRNA &rna_MeshEdge_hide;
extern PropertyRNA &rna_MeshEdge_use_seam;
extern PropertyRNA &rna_MeshEdge_use_edge_sharp;
extern PropertyRNA &rna_MeshEdge_is_loose;
extern PropertyRNA &rna_MeshEdge_index;


extern PropertyRNA &rna_MeshLoopTriangle_rna_properties;
extern PropertyRNA &rna_MeshLoopTriangle_rna_type;
extern PropertyRNA &rna_MeshLoopTriangle_vertices;
extern PropertyRNA &rna_MeshLoopTriangle_loops;
extern PropertyRNA &rna_MeshLoopTriangle_polygon_index;
extern PropertyRNA &rna_MeshLoopTriangle_normal;
extern PropertyRNA &rna_MeshLoopTriangle_split_normals;
extern PropertyRNA &rna_MeshLoopTriangle_area;
extern PropertyRNA &rna_MeshLoopTriangle_index;
extern PropertyRNA &rna_MeshLoopTriangle_material_index;
extern PropertyRNA &rna_MeshLoopTriangle_use_smooth;


extern PropertyRNA &rna_MeshLoop_rna_properties;
extern PropertyRNA &rna_MeshLoop_rna_type;
extern PropertyRNA &rna_MeshLoop_vertex_index;
extern PropertyRNA &rna_MeshLoop_edge_index;
extern PropertyRNA &rna_MeshLoop_index;
extern PropertyRNA &rna_MeshLoop_normal;
extern PropertyRNA &rna_MeshLoop_tangent;
extern PropertyRNA &rna_MeshLoop_bitangent_sign;
extern PropertyRNA &rna_MeshLoop_bitangent;


extern PropertyRNA &rna_MeshPolygon_rna_properties;
extern PropertyRNA &rna_MeshPolygon_rna_type;
extern PropertyRNA &rna_MeshPolygon_vertices;
extern PropertyRNA &rna_MeshPolygon_loop_start;
extern PropertyRNA &rna_MeshPolygon_loop_total;
extern PropertyRNA &rna_MeshPolygon_material_index;
extern PropertyRNA &rna_MeshPolygon_select;
extern PropertyRNA &rna_MeshPolygon_hide;
extern PropertyRNA &rna_MeshPolygon_use_smooth;
extern PropertyRNA &rna_MeshPolygon_normal;
extern PropertyRNA &rna_MeshPolygon_center;
extern PropertyRNA &rna_MeshPolygon_area;
extern PropertyRNA &rna_MeshPolygon_index;

extern FunctionRNA *rna_MeshPolygon_flip_func;


extern PropertyRNA &rna_MeshUVLoopLayer_rna_properties;
extern PropertyRNA &rna_MeshUVLoopLayer_rna_type;
extern PropertyRNA &rna_MeshUVLoopLayer_data;
extern PropertyRNA &rna_MeshUVLoopLayer_name;
extern PropertyRNA &rna_MeshUVLoopLayer_active;
extern PropertyRNA &rna_MeshUVLoopLayer_active_render;
extern PropertyRNA &rna_MeshUVLoopLayer_active_clone;
extern PropertyRNA &rna_MeshUVLoopLayer_uv;
extern PropertyRNA &rna_MeshUVLoopLayer_pin;

extern FunctionRNA *rna_MeshUVLoopLayer_pin_ensure_func;
extern PropertyRNA &rna_MeshUVLoopLayer_pin_ensure_layer;



extern PropertyRNA &rna_MeshUVLoop_rna_properties;
extern PropertyRNA &rna_MeshUVLoop_rna_type;
extern PropertyRNA &rna_MeshUVLoop_uv;
extern PropertyRNA &rna_MeshUVLoop_pin_uv;


extern PropertyRNA &rna_MeshLoopColorLayer_rna_properties;
extern PropertyRNA &rna_MeshLoopColorLayer_rna_type;
extern PropertyRNA &rna_MeshLoopColorLayer_name;
extern PropertyRNA &rna_MeshLoopColorLayer_active;
extern PropertyRNA &rna_MeshLoopColorLayer_active_render;
extern PropertyRNA &rna_MeshLoopColorLayer_data;


extern PropertyRNA &rna_MeshLoopColor_rna_properties;
extern PropertyRNA &rna_MeshLoopColor_rna_type;
extern PropertyRNA &rna_MeshLoopColor_color;

int Mesh_vertices_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_vertices_length;
    return fn(ptr);
}

static PointerRNA Mesh_vertices_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshVertex, rna_iterator_array_get(iter));
}

void Mesh_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_vertices;

    PropCollectionBeginFunc fn = rna_Mesh_vertices_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertices_get(iter);
    }
}

void Mesh_vertices_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertices_get(iter);
    }
}

void Mesh_vertices_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_vertices_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Mesh_edges_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_edges_length;
    return fn(ptr);
}

static PointerRNA Mesh_edges_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshEdge, rna_iterator_array_get(iter));
}

void Mesh_edges_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_edges;

    PropCollectionBeginFunc fn = rna_Mesh_edges_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_edges_get(iter);
    }
}

void Mesh_edges_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_edges_get(iter);
    }
}

void Mesh_edges_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_edges_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_edges_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Mesh_loops_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_loops_length;
    return fn(ptr);
}

static PointerRNA Mesh_loops_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshLoop, rna_iterator_array_get(iter));
}

void Mesh_loops_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_loops;

    PropCollectionBeginFunc fn = rna_Mesh_loops_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_loops_get(iter);
    }
}

void Mesh_loops_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_loops_get(iter);
    }
}

void Mesh_loops_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_loops_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_loops_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Mesh_polygons_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_polygons_length;
    return fn(ptr);
}

static PointerRNA Mesh_polygons_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshPolygon, rna_iterator_array_get(iter));
}

void Mesh_polygons_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_polygons;

    PropCollectionBeginFunc fn = rna_Mesh_polygons_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_polygons_get(iter);
    }
}

void Mesh_polygons_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygons_get(iter);
    }
}

void Mesh_polygons_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_polygons_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_polygons_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Mesh_normals_domain_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Mesh_normals_domain_get;
    return fn(ptr);
}

int Mesh_vertex_normals_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_vertex_normals_length;
    return fn(ptr);
}

static PointerRNA Mesh_vertex_normals_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshNormalValue, rna_iterator_array_get(iter));
}

void Mesh_vertex_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_vertex_normals;

    PropCollectionBeginFunc fn = rna_Mesh_vertex_normals_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_normals_get(iter);
    }
}

void Mesh_vertex_normals_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_normals_get(iter);
    }
}

void Mesh_vertex_normals_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_vertex_normals_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_vertex_normals_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Mesh_polygon_normals_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_poly_normals_length;
    return fn(ptr);
}

static PointerRNA Mesh_polygon_normals_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshNormalValue, rna_iterator_array_get(iter));
}

void Mesh_polygon_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_polygon_normals;

    PropCollectionBeginFunc fn = rna_Mesh_poly_normals_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_normals_get(iter);
    }
}

void Mesh_polygon_normals_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_polygon_normals_get(iter);
    }
}

void Mesh_polygon_normals_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_polygon_normals_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_poly_normals_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Mesh_corner_normals_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_corner_normals_length;
    return fn(ptr);
}

static PointerRNA Mesh_corner_normals_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshNormalValue, rna_iterator_array_get(iter));
}

void Mesh_corner_normals_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_corner_normals;

    PropCollectionBeginFunc fn = rna_Mesh_corner_normals_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_corner_normals_get(iter);
    }
}

void Mesh_corner_normals_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_corner_normals_get(iter);
    }
}

void Mesh_corner_normals_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_corner_normals_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_corner_normals_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Mesh_loop_triangles_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_loop_triangles_length;
    return fn(ptr);
}

static PointerRNA Mesh_loop_triangles_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshLoopTriangle, rna_iterator_array_get(iter));
}

void Mesh_loop_triangles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_loop_triangles;

    PropCollectionBeginFunc fn = rna_Mesh_loop_triangles_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangles_get(iter);
    }
}

void Mesh_loop_triangles_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangles_get(iter);
    }
}

void Mesh_loop_triangles_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_loop_triangles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_loop_triangles_lookup_int;
    return fn(ptr, index, r_ptr);
}

int Mesh_loop_triangle_polygons_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_loop_triangles_length;
    return fn(ptr);
}

static PointerRNA Mesh_loop_triangle_polygons_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ReadOnlyInteger, rna_iterator_array_get(iter));
}

void Mesh_loop_triangle_polygons_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_loop_triangle_polygons;

    PropCollectionBeginFunc fn = rna_Mesh_loop_triangle_polygons_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangle_polygons_get(iter);
    }
}

void Mesh_loop_triangle_polygons_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_loop_triangle_polygons_get(iter);
    }
}

void Mesh_loop_triangle_polygons_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_loop_triangle_polygons_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Mesh_loop_triangle_polygons_lookup_int;
    return fn(ptr, index, r_ptr);
}

PointerRNA Mesh_texture_mesh_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Mesh, data->texcomesh);
}

void Mesh_texture_mesh_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Mesh *data = (Mesh *)(ptr->data);
    ID *id = ptr->owner_id;
    if (id == value.data) {
      return;
    }
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->texcomesh) {
        id_us_min((ID *)data->texcomesh);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->texcomesh = value.data;
}

int Mesh_uv_layers_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_uv_layers_length;
    return fn(ptr);
}

static PointerRNA Mesh_uv_layers_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Mesh_uv_layers_iterator_get;
    return fn(iter);
}

void Mesh_uv_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_uv_layers;

    PropCollectionBeginFunc fn = rna_Mesh_uv_layers_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_uv_layers_get(iter);
    }
}

void Mesh_uv_layers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_uv_layers_get(iter);
    }
}

void Mesh_uv_layers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_uv_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Mesh_uv_layers_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_uv_layers_get(&iter); }
    }

    Mesh_uv_layers_end(&iter);

    return found;
}

PointerRNA Mesh_uv_layer_clone_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Mesh_uv_layer_clone_get;
    return fn(ptr);
}

void Mesh_uv_layer_clone_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Mesh_uv_layer_clone_set;
    fn(ptr, value, reports);
}

int Mesh_uv_layer_clone_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_uv_layer_clone_index_get;
    return fn(ptr);
}

void Mesh_uv_layer_clone_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_uv_layer_clone_index_set;
    fn(ptr, value);
}

PointerRNA Mesh_uv_layer_stencil_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Mesh_uv_layer_stencil_get;
    return fn(ptr);
}

void Mesh_uv_layer_stencil_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Mesh_uv_layer_stencil_set;
    fn(ptr, value, reports);
}

int Mesh_uv_layer_stencil_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_uv_layer_stencil_index_get;
    return fn(ptr);
}

void Mesh_uv_layer_stencil_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_uv_layer_stencil_index_set;
    fn(ptr, value);
}

int Mesh_vertex_colors_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_vertex_colors_length;
    return fn(ptr);
}

static PointerRNA Mesh_vertex_colors_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Mesh_vertex_colors_iterator_get;
    return fn(iter);
}

void Mesh_vertex_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_vertex_colors;

    PropCollectionBeginFunc fn = rna_Mesh_vertex_colors_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_colors_get(iter);
    }
}

void Mesh_vertex_colors_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_vertex_colors_get(iter);
    }
}

void Mesh_vertex_colors_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_vertex_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Mesh_vertex_colors_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_vertex_colors_get(&iter); }
    }

    Mesh_vertex_colors_end(&iter);

    return found;
}

int Mesh_skin_vertices_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Mesh_skin_vertices_length;
    return fn(ptr);
}

static PointerRNA Mesh_skin_vertices_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshSkinVertexLayer, rna_iterator_array_get(iter));
}

void Mesh_skin_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_skin_vertices;

    PropCollectionBeginFunc fn = rna_Mesh_skin_vertices_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_skin_vertices_get(iter);
    }
}

void Mesh_skin_vertices_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_skin_vertices_get(iter);
    }
}

void Mesh_skin_vertices_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_skin_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Mesh_skin_vertices_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_skin_vertices_get(&iter); }
    }

    Mesh_skin_vertices_end(&iter);

    return found;
}

int MeshSkinVertexLayer_name_length(PointerRNA *);
void MeshSkinVertexLayer_name_get(PointerRNA *, char *);

bool Mesh_skin_vertices_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_skin_vertices_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = MeshSkinVertexLayer_name_length(&iter.ptr);
            if (namelen < 1024) {
                MeshSkinVertexLayer_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                MeshSkinVertexLayer_name_get(&iter.ptr, name);
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
        Mesh_skin_vertices_next(&iter);
    }
    Mesh_skin_vertices_end(&iter);

    return found;
}

int Mesh_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_length;
    return fn(ptr);
}

static PointerRNA Mesh_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void Mesh_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_attributes_get(iter);
    }
}

void Mesh_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_attributes_get(iter);
    }
}

void Mesh_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Mesh_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_attributes_get(&iter); }
    }

    Mesh_attributes_end(&iter);

    return found;
}

bool Mesh_attributes_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_AttributeGroup_lookup_string;
    return fn(ptr, key, r_ptr);
}

int Mesh_color_attributes_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_AttributeGroup_color_length;
    return fn(ptr);
}

static PointerRNA Mesh_color_attributes_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_AttributeGroup_iterator_get;
    return fn(iter);
}

void Mesh_color_attributes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_color_attributes;

    PropCollectionBeginFunc fn = rna_AttributeGroup_color_iterator_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Mesh_color_attributes_get(iter);
    }
}

void Mesh_color_attributes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_color_attributes_get(iter);
    }
}

void Mesh_color_attributes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_color_attributes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Mesh_color_attributes_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_color_attributes_get(&iter); }
    }

    Mesh_color_attributes_end(&iter);

    return found;
}

float Mesh_remesh_voxel_size_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (float)(data->remesh_voxel_size);
}

void Mesh_remesh_voxel_size_set(PointerRNA *ptr, float value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->remesh_voxel_size = (std::remove_reference_t<decltype(data->remesh_voxel_size)>)std::clamp(value, 0.0f, FLT_MAX);
}

float Mesh_remesh_voxel_adaptivity_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (float)(data->remesh_voxel_adaptivity);
}

void Mesh_remesh_voxel_adaptivity_set(PointerRNA *ptr, float value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->remesh_voxel_adaptivity = (std::remove_reference_t<decltype(data->remesh_voxel_adaptivity)>)std::clamp(value, 0.0f, 1.0f);
}

bool Mesh_use_remesh_fix_poles_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->flag) & 8192) != 0);
}

void Mesh_use_remesh_fix_poles_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8192); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8192)); }
}

bool Mesh_use_remesh_preserve_volume_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->flag) & 16384) != 0);
}

void Mesh_use_remesh_preserve_volume_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 16384); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(16384)); }
}

bool Mesh_use_remesh_preserve_attributes_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->flag) & 256) != 0);
}

void Mesh_use_remesh_preserve_attributes_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 256); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(256)); }
}

int Mesh_remesh_mode_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (int)(data->remesh_mode);
}

void Mesh_remesh_mode_set(PointerRNA *ptr, int value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->remesh_mode = (std::remove_reference_t<decltype(data->remesh_mode)>)value;
}

bool Mesh_use_mirror_x_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->symmetry) & 1) != 0);
}

void Mesh_use_mirror_x_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) | 1); }
    else { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) & ~uint64_t(1)); }
}

bool Mesh_use_mirror_y_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->symmetry) & 2) != 0);
}

void Mesh_use_mirror_y_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) | 2); }
    else { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) & ~uint64_t(2)); }
}

bool Mesh_use_mirror_z_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->symmetry) & 4) != 0);
}

void Mesh_use_mirror_z_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) | 4); }
    else { data->symmetry = std::remove_reference_t<decltype(data->symmetry)>(uint64_t(data->symmetry) & ~uint64_t(4)); }
}

bool Mesh_use_mirror_vertex_groups_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->editflag) & 1) != 0);
}

void Mesh_use_mirror_vertex_groups_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) | 1); }
    else { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) & ~uint64_t(1)); }
}

void Mesh_radial_symmetry_get(PointerRNA *ptr, int values[3])
{
    Mesh *data = (Mesh *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)(((int8_t *)data->radial_symmetry)[i]);
    }
}

void Mesh_radial_symmetry_set(PointerRNA *ptr, const int values[3])
{
    Mesh *data = (Mesh *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((int8_t *)data->radial_symmetry)[i] = std::clamp(values[i], 1, 64);
    }
}

bool Mesh_has_custom_normals_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Mesh_has_custom_normals_get;
    return fn(ptr);
}

PointerRNA Mesh_texco_mesh_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Mesh, data->texcomesh);
}

void Mesh_texco_mesh_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }

    if (data->texcomesh) {
        id_us_min((ID *)data->texcomesh);
    }
    if (value.data) {
        id_us_plus((ID *)value.data);
    }
    *(void **)&data->texcomesh = value.data;
}

PointerRNA Mesh_shape_keys_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Key, data->key);
}

bool Mesh_use_auto_texspace_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->texspace_flag) & 1) != 0);
}

void Mesh_use_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->texspace_flag = std::remove_reference_t<decltype(data->texspace_flag)>(uint64_t(data->texspace_flag) | 1); }
    else { data->texspace_flag = std::remove_reference_t<decltype(data->texspace_flag)>(uint64_t(data->texspace_flag) & ~uint64_t(1)); }
}

bool Mesh_use_mirror_topology_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->editflag) & 16) != 0);
}

void Mesh_use_mirror_topology_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) | 16); }
    else { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) & ~uint64_t(16)); }
}

bool Mesh_use_paint_bone_selection_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return !((uint64_t(data->editflag) & 40) != 0);
}

void Mesh_use_paint_bone_selection_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (!value) { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) | 40); }
    else { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) & ~uint64_t(40)); }
}

bool Mesh_use_paint_mask_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->editflag) & 8) != 0);
}

void Mesh_use_paint_mask_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) | 8); }
    else { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) & ~uint64_t(8)); }
}

bool Mesh_use_paint_mask_vertex_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->editflag) & 32) != 0);
}

void Mesh_use_paint_mask_vertex_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) | 32); }
    else { data->editflag = std::remove_reference_t<decltype(data->editflag)>(uint64_t(data->editflag) & ~uint64_t(32)); }
}

int Mesh_total_vert_sel_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_tot_vert_get;
    return fn(ptr);
}

int Mesh_total_edge_sel_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_tot_edge_get;
    return fn(ptr);
}

int Mesh_total_face_sel_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_tot_face_get;
    return fn(ptr);
}

bool Mesh_is_editmode_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Mesh_is_editmode_get;
    return fn(ptr);
}

PointerRNA Mesh_animation_data_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_AnimData, data->adt);
}

bool Mesh_auto_texspace_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return ((uint64_t(data->texspace_flag) & 1) != 0);
}

void Mesh_auto_texspace_set(PointerRNA *ptr, bool value)
{
    Mesh *data = (Mesh *)(ptr->data);
    if (value) { data->texspace_flag = std::remove_reference_t<decltype(data->texspace_flag)>(uint64_t(data->texspace_flag) | 1); }
    else { data->texspace_flag = std::remove_reference_t<decltype(data->texspace_flag)>(uint64_t(data->texspace_flag) & ~uint64_t(1)); }
}

void Mesh_texspace_location_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Mesh_texspace_location_get;
    fn(ptr, values);
}

void Mesh_texspace_location_set(PointerRNA *ptr, const float values[3])
{
    Mesh *data = (Mesh *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->texspace_location)[i] = values[i];
    }
}

void Mesh_texspace_size_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_Mesh_texspace_size_get;
    fn(ptr, values);
}

void Mesh_texspace_size_set(PointerRNA *ptr, const float values[3])
{
    Mesh *data = (Mesh *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        ((float *)data->texspace_size)[i] = values[i];
    }
}

int Mesh_materials_length(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (data->mat == nullptr) ? 0 : data->totcol;
}

static PointerRNA Mesh_materials_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Mesh_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Mesh_materials;

    rna_iterator_array_begin(iter, ptr, data->mat, sizeof(data->mat[0]), data->totcol, 0, nullptr);

    if (iter->valid) {
        iter->ptr = Mesh_materials_get(iter);
    }
}

void Mesh_materials_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Mesh_materials_get(iter);
    }
}

void Mesh_materials_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool Mesh_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    Mesh_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = Mesh_materials_get(&iter); }
    }

    Mesh_materials_end(&iter);

    return found;
}

int ID_name_length(PointerRNA *);
void ID_name_get(PointerRNA *, char *);

bool Mesh_materials_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    Mesh_materials_begin(&iter, ptr);

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
        Mesh_materials_next(&iter);
    }
    Mesh_materials_end(&iter);

    return found;
}

static PointerRNA MeshVertices_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshVertices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshVertices_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertices_rna_properties_get(iter);
    }
}

void MeshVertices_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshVertices_rna_properties_get(iter);
    }
}

void MeshVertices_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshVertices_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshVertices_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA MeshEdges_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshEdges_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshEdges_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshEdges_rna_properties_get(iter);
    }
}

void MeshEdges_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshEdges_rna_properties_get(iter);
    }
}

void MeshEdges_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshEdges_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshEdges_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA MeshLoops_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshLoops_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshLoops_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoops_rna_properties_get(iter);
    }
}

void MeshLoops_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshLoops_rna_properties_get(iter);
    }
}

void MeshLoops_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshLoops_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshLoops_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA MeshPolygons_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshPolygons_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshPolygons_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygons_rna_properties_get(iter);
    }
}

void MeshPolygons_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygons_rna_properties_get(iter);
    }
}

void MeshPolygons_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshPolygons_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshPolygons_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MeshPolygons_active_get(PointerRNA *ptr)
{
    Mesh *data = (Mesh *)(ptr->data);
    return (int)(data->act_face);
}

void MeshPolygons_active_set(PointerRNA *ptr, int value)
{
    Mesh *data = (Mesh *)(ptr->data);
    data->act_face = (std::remove_reference_t<decltype(data->act_face)>)value;
}

static PointerRNA MeshNormalValue_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshNormalValue_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshNormalValue_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshNormalValue_rna_properties_get(iter);
    }
}

void MeshNormalValue_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshNormalValue_rna_properties_get(iter);
    }
}

void MeshNormalValue_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshNormalValue_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshNormalValue_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshNormalValue_vector_get(PointerRNA *ptr, float values[3])
{
    vec3f *data = (vec3f *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (float)((&data->x)[i]);
    }
}

static PointerRNA MeshLoopTriangles_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshLoopTriangles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshLoopTriangles_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangles_rna_properties_get(iter);
    }
}

void MeshLoopTriangles_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangles_rna_properties_get(iter);
    }
}

void MeshLoopTriangles_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshLoopTriangles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshLoopTriangles_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA ReadOnlyInteger_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void ReadOnlyInteger_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_ReadOnlyInteger_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = ReadOnlyInteger_rna_properties_get(iter);
    }
}

void ReadOnlyInteger_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = ReadOnlyInteger_rna_properties_get(iter);
    }
}

void ReadOnlyInteger_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool ReadOnlyInteger_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA ReadOnlyInteger_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int ReadOnlyInteger_value_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

static PointerRNA UVLoopLayers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void UVLoopLayers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_UVLoopLayers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = UVLoopLayers_rna_properties_get(iter);
    }
}

void UVLoopLayers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = UVLoopLayers_rna_properties_get(iter);
    }
}

void UVLoopLayers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool UVLoopLayers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA UVLoopLayers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA UVLoopLayers_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Mesh_uv_layer_active_get;
    return fn(ptr);
}

void UVLoopLayers_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Mesh_uv_layer_active_set;
    fn(ptr, value, reports);
}

int UVLoopLayers_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_uv_layer_active_index_get;
    return fn(ptr);
}

void UVLoopLayers_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_uv_layer_active_index_set;
    fn(ptr, value);
}

PointerRNA UVLoopLayers_active_render_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Mesh_uv_layer_default_get;
    return fn(ptr);
}

void UVLoopLayers_active_render_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Mesh_uv_layer_default_set;
    fn(ptr, value, reports);
}

int UVLoopLayers_active_render_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_uv_layer_default_index_get;
    return fn(ptr);
}

void UVLoopLayers_active_render_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_uv_layer_default_index_set;
    fn(ptr, value);
}

static PointerRNA LoopColors_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void LoopColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_LoopColors_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = LoopColors_rna_properties_get(iter);
    }
}

void LoopColors_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = LoopColors_rna_properties_get(iter);
    }
}

void LoopColors_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool LoopColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA LoopColors_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA LoopColors_active_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Mesh_vertex_color_active_get;
    return fn(ptr);
}

void LoopColors_active_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    PropPointerSetFunc fn = rna_Mesh_vertex_color_active_set;
    fn(ptr, value, reports);
}

int LoopColors_active_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_Mesh_vertex_color_active_index_get;
    return fn(ptr);
}

void LoopColors_active_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_Mesh_vertex_color_active_index_set;
    fn(ptr, value);
}

static PointerRNA MeshSkinVertexLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshSkinVertexLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshSkinVertexLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_rna_properties_get(iter);
    }
}

void MeshSkinVertexLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_rna_properties_get(iter);
    }
}

void MeshSkinVertexLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshSkinVertexLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshSkinVertexLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshSkinVertexLayer_name_get(PointerRNA *ptr, char *value)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    BLI_assert(strlen(data->name) < 64);
    strcpy(value, data->name);
}

int MeshSkinVertexLayer_name_length(PointerRNA *ptr)
{
    CustomDataLayer *data = (CustomDataLayer *)(ptr->data);
    return strlen(data->name);
}

void MeshSkinVertexLayer_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_MeshSkinVertexLayer_name_set;
    fn(ptr, value);
}

int MeshSkinVertexLayer_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_MeshSkinVertexLayer_data_length;
    return fn(ptr);
}

static PointerRNA MeshSkinVertexLayer_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshSkinVertex, rna_iterator_array_get(iter));
}

void MeshSkinVertexLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshSkinVertexLayer_data;

    PropCollectionBeginFunc fn = rna_MeshSkinVertexLayer_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_data_get(iter);
    }
}

void MeshSkinVertexLayer_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertexLayer_data_get(iter);
    }
}

void MeshSkinVertexLayer_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MeshSkinVertexLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MeshSkinVertexLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshSkinVertexLayer_data_get(&iter); }
    }

    MeshSkinVertexLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshSkinVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshSkinVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshSkinVertex_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshSkinVertex_rna_properties_get(iter);
    }
}

void MeshSkinVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshSkinVertex_rna_properties_get(iter);
    }
}

void MeshSkinVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshSkinVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshSkinVertex_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshSkinVertex_radius_get(PointerRNA *ptr, float values[2])
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (float)(((float *)data->radius)[i]);
    }
}

void MeshSkinVertex_radius_set(PointerRNA *ptr, const float values[2])
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        ((float *)data->radius)[i] = std::clamp(values[i], 0.0f, FLT_MAX);
    }
}

bool MeshSkinVertex_use_root_get(PointerRNA *ptr)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    return ((uint64_t(data->flag) & 1) != 0);
}

void MeshSkinVertex_use_root_set(PointerRNA *ptr, bool value)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 1); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(1)); }
}

bool MeshSkinVertex_use_loose_get(PointerRNA *ptr)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    return ((uint64_t(data->flag) & 2) != 0);
}

void MeshSkinVertex_use_loose_set(PointerRNA *ptr, bool value)
{
    MVertSkin *data = (MVertSkin *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 2); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(2)); }
}

static PointerRNA MeshVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshVertex_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertex_rna_properties_get(iter);
    }
}

void MeshVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshVertex_rna_properties_get(iter);
    }
}

void MeshVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshVertex_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshVertex_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshVertex_co_get;
    fn(ptr, values);
}

void MeshVertex_co_set(PointerRNA *ptr, const float values[3])
{
    PropFloatArraySetFunc fn = rna_MeshVertex_co_set;
    fn(ptr, values);
}

void MeshVertex_normal_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshVertex_normal_get;
    fn(ptr, values);
}

bool MeshVertex_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshVertex_select_get;
    return fn(ptr);
}

void MeshVertex_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshVertex_select_set;
    fn(ptr, value);
}

bool MeshVertex_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshVertex_hide_get;
    return fn(ptr);
}

void MeshVertex_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshVertex_hide_set;
    fn(ptr, value);
}

static PointerRNA MeshVertex_groups_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_VertexGroupElement, rna_iterator_array_get(iter));
}

void MeshVertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshVertex_groups;

    PropCollectionBeginFunc fn = rna_MeshVertex_groups_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshVertex_groups_get(iter);
    }
}

void MeshVertex_groups_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshVertex_groups_get(iter);
    }
}

void MeshVertex_groups_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MeshVertex_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MeshVertex_groups_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshVertex_groups_get(&iter); }
    }

    MeshVertex_groups_end(&iter);

    return found;
}

int MeshVertex_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshVertex_index_get;
    return fn(ptr);
}

void MeshVertex_undeformed_co_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshVertex_undeformed_co_get;
    fn(ptr, values);
}

static PointerRNA VertexGroupElement_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void VertexGroupElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_VertexGroupElement_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = VertexGroupElement_rna_properties_get(iter);
    }
}

void VertexGroupElement_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = VertexGroupElement_rna_properties_get(iter);
    }
}

void VertexGroupElement_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool VertexGroupElement_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA VertexGroupElement_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int VertexGroupElement_group_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (int)(data->def_nr);
}

float VertexGroupElement_weight_get(PointerRNA *ptr)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    return (float)(data->weight);
}

void VertexGroupElement_weight_set(PointerRNA *ptr, float value)
{
    MDeformWeight *data = (MDeformWeight *)(ptr->data);
    data->weight = (std::remove_reference_t<decltype(data->weight)>)std::clamp(value, 0.0f, 1.0f);
}

static PointerRNA MeshEdge_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshEdge_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshEdge_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshEdge_rna_properties_get(iter);
    }
}

void MeshEdge_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshEdge_rna_properties_get(iter);
    }
}

void MeshEdge_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshEdge_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshEdge_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshEdge_vertices_get(PointerRNA *ptr, int values[2])
{
    vec2i *data = (vec2i *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        values[i] = (int)((&data->x)[i]);
    }
}

void MeshEdge_vertices_set(PointerRNA *ptr, const int values[2])
{
    vec2i *data = (vec2i *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 2; i++) {
        (&data->x)[i] = std::clamp(values[i], 0, INT_MAX);
    }
}

bool MeshEdge_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_select_get;
    return fn(ptr);
}

void MeshEdge_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshEdge_select_set;
    fn(ptr, value);
}

bool MeshEdge_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_hide_get;
    return fn(ptr);
}

void MeshEdge_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshEdge_hide_set;
    fn(ptr, value);
}

bool MeshEdge_use_seam_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_use_seam_get;
    return fn(ptr);
}

void MeshEdge_use_seam_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshEdge_use_seam_set;
    fn(ptr, value);
}

bool MeshEdge_use_edge_sharp_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_use_edge_sharp_get;
    return fn(ptr);
}

void MeshEdge_use_edge_sharp_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshEdge_use_edge_sharp_set;
    fn(ptr, value);
}

bool MeshEdge_is_loose_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshEdge_is_loose_get;
    return fn(ptr);
}

int MeshEdge_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshEdge_index_get;
    return fn(ptr);
}

static PointerRNA MeshLoopTriangle_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshLoopTriangle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshLoopTriangle_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangle_rna_properties_get(iter);
    }
}

void MeshLoopTriangle_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopTriangle_rna_properties_get(iter);
    }
}

void MeshLoopTriangle_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshLoopTriangle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshLoopTriangle_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshLoopTriangle_vertices_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_MeshLoopTriangle_verts_get;
    fn(ptr, values);
}

void MeshLoopTriangle_loops_get(PointerRNA *ptr, int values[3])
{
    vec3i *data = (vec3i *)(ptr->data);
    uint64_t i;
    for (i = 0; i < 3; i++) {
        values[i] = (int)((&data->x)[i]);
    }
}

int MeshLoopTriangle_polygon_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoopTriangle_polygon_index_get;
    return fn(ptr);
}

void MeshLoopTriangle_normal_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshLoopTriangle_normal_get;
    fn(ptr, values);
}

void MeshLoopTriangle_split_normals_get(PointerRNA *ptr, float values[9])
{
    PropFloatArrayGetFunc fn = rna_MeshLoopTriangle_split_normals_get;
    fn(ptr, values);
}

float MeshLoopTriangle_area_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_MeshLoopTriangle_area_get;
    return fn(ptr);
}

int MeshLoopTriangle_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoopTriangle_index_get;
    return fn(ptr);
}

int MeshLoopTriangle_material_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoopTriangle_material_index_get;
    return fn(ptr);
}

bool MeshLoopTriangle_use_smooth_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshLoopTriangle_use_smooth_get;
    return fn(ptr);
}

static PointerRNA MeshLoop_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshLoop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshLoop_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoop_rna_properties_get(iter);
    }
}

void MeshLoop_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshLoop_rna_properties_get(iter);
    }
}

void MeshLoop_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshLoop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshLoop_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MeshLoop_vertex_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoop_vertex_index_get;
    return fn(ptr);
}

void MeshLoop_vertex_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_MeshLoop_vertex_index_set;
    fn(ptr, value);
}

int MeshLoop_edge_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoop_edge_index_get;
    return fn(ptr);
}

void MeshLoop_edge_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_MeshLoop_edge_index_set;
    fn(ptr, value);
}

int MeshLoop_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshLoop_index_get;
    return fn(ptr);
}

void MeshLoop_normal_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshLoop_normal_get;
    fn(ptr, values);
}

void MeshLoop_tangent_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshLoop_tangent_get;
    fn(ptr, values);
}

float MeshLoop_bitangent_sign_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_MeshLoop_bitangent_sign_get;
    return fn(ptr);
}

void MeshLoop_bitangent_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshLoop_bitangent_get;
    fn(ptr, values);
}

static PointerRNA MeshPolygon_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshPolygon_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshPolygon_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshPolygon_rna_properties_get(iter);
    }
}

void MeshPolygon_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshPolygon_rna_properties_get(iter);
    }
}

void MeshPolygon_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshPolygon_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshPolygon_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshPolygon_vertices_get(PointerRNA *ptr, int values[])
{
    PropIntArrayGetFunc fn = rna_MeshPoly_vertices_get;
    fn(ptr, values);
}

void MeshPolygon_vertices_set(PointerRNA *ptr, const int values[])
{
    PropIntArraySetFunc fn = rna_MeshPoly_vertices_set;
    fn(ptr, values);
}

int MeshPolygon_loop_start_get(PointerRNA *ptr)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    return (int)(data->i);
}

void MeshPolygon_loop_start_set(PointerRNA *ptr, int value)
{
    MIntProperty *data = (MIntProperty *)(ptr->data);
    data->i = (std::remove_reference_t<decltype(data->i)>)std::clamp(value, 0, INT_MAX);
}

int MeshPolygon_loop_total_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshPolygon_loop_total_get;
    return fn(ptr);
}

int MeshPolygon_material_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshPolygon_material_index_get;
    return fn(ptr);
}

void MeshPolygon_material_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_MeshPolygon_material_index_set;
    fn(ptr, value);
}

bool MeshPolygon_select_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshPolygon_select_get;
    return fn(ptr);
}

void MeshPolygon_select_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshPolygon_select_set;
    fn(ptr, value);
}

bool MeshPolygon_hide_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshPolygon_hide_get;
    return fn(ptr);
}

void MeshPolygon_hide_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshPolygon_hide_set;
    fn(ptr, value);
}

bool MeshPolygon_use_smooth_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshPolygon_use_smooth_get;
    return fn(ptr);
}

void MeshPolygon_use_smooth_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshPolygon_use_smooth_set;
    fn(ptr, value);
}

void MeshPolygon_normal_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshPolygon_normal_get;
    fn(ptr, values);
}

void MeshPolygon_center_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_MeshPolygon_center_get;
    fn(ptr, values);
}

float MeshPolygon_area_get(PointerRNA *ptr)
{
    PropFloatGetFunc fn = rna_MeshPolygon_area_get;
    return fn(ptr);
}

int MeshPolygon_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_MeshPolygon_index_get;
    return fn(ptr);
}

static PointerRNA MeshUVLoopLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshUVLoopLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshUVLoopLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_rna_properties_get(iter);
    }
}

void MeshUVLoopLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_rna_properties_get(iter);
    }
}

void MeshUVLoopLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshUVLoopLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshUVLoopLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int MeshUVLoopLayer_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA MeshUVLoopLayer_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshUVLoop, rna_iterator_array_get(iter));
}

void MeshUVLoopLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshUVLoopLayer_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_data_get(iter);
    }
}

void MeshUVLoopLayer_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_data_get(iter);
    }
}

void MeshUVLoopLayer_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MeshUVLoopLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_MeshUVLoopLayer_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

void MeshUVLoopLayer_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Attribute_name_get;
    fn(ptr, value);
}

int MeshUVLoopLayer_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Attribute_name_length;
    return fn(ptr);
}

void MeshUVLoopLayer_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Attribute_name_set;
    fn(ptr, value);
}

bool MeshUVLoopLayer_active_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoopLayer_active_get;
    return fn(ptr);
}

void MeshUVLoopLayer_active_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoopLayer_active_set;
    fn(ptr, value);
}

bool MeshUVLoopLayer_active_render_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoopLayer_active_render_get;
    return fn(ptr);
}

void MeshUVLoopLayer_active_render_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoopLayer_active_render_set;
    fn(ptr, value);
}

bool MeshUVLoopLayer_active_clone_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoopLayer_clone_get;
    return fn(ptr);
}

void MeshUVLoopLayer_active_clone_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoopLayer_clone_set;
    fn(ptr, value);
}

int MeshUVLoopLayer_uv_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA MeshUVLoopLayer_uv_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Float2AttributeValue, rna_iterator_array_get(iter));
}

void MeshUVLoopLayer_uv_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshUVLoopLayer_uv;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_uv_get(iter);
    }
}

void MeshUVLoopLayer_uv_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_uv_get(iter);
    }
}

void MeshUVLoopLayer_uv_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MeshUVLoopLayer_uv_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

int MeshUVLoopLayer_pin_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_MeshUVLoopLayer_pin_length;
    return fn(ptr);
}

static PointerRNA MeshUVLoopLayer_pin_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_BoolAttributeValue, rna_iterator_array_get(iter));
}

void MeshUVLoopLayer_pin_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshUVLoopLayer_pin;

    PropCollectionBeginFunc fn = rna_MeshUVLoopLayer_pin_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_pin_get(iter);
    }
}

void MeshUVLoopLayer_pin_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoopLayer_pin_get(iter);
    }
}

void MeshUVLoopLayer_pin_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MeshUVLoopLayer_pin_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

    PropCollectionLookupIntFunc fn = rna_Attribute_data_lookup_int;
    return fn(ptr, index, r_ptr);
}

static PointerRNA MeshUVLoop_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshUVLoop_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshUVLoop_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshUVLoop_rna_properties_get(iter);
    }
}

void MeshUVLoop_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshUVLoop_rna_properties_get(iter);
    }
}

void MeshUVLoop_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshUVLoop_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshUVLoop_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshUVLoop_uv_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_MeshUVLoop_uv_get;
    fn(ptr, values);
}

void MeshUVLoop_uv_set(PointerRNA *ptr, const float values[2])
{
    PropFloatArraySetFunc fn = rna_MeshUVLoop_uv_set;
    fn(ptr, values);
}

bool MeshUVLoop_pin_uv_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MeshUVLoop_pin_uv_get;
    return fn(ptr);
}

void MeshUVLoop_pin_uv_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_MeshUVLoop_pin_uv_set;
    fn(ptr, value);
}

static PointerRNA MeshLoopColorLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshLoopColorLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshLoopColorLayer_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_rna_properties_get(iter);
    }
}

void MeshLoopColorLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_rna_properties_get(iter);
    }
}

void MeshLoopColorLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshLoopColorLayer_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshLoopColorLayer_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshLoopColorLayer_name_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Attribute_name_get;
    fn(ptr, value);
}

int MeshLoopColorLayer_name_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Attribute_name_length;
    return fn(ptr);
}

void MeshLoopColorLayer_name_set(PointerRNA *ptr, const char *value)
{
    PropStringSetFunc fn = rna_Attribute_name_set;
    fn(ptr, value);
}

bool MeshLoopColorLayer_active_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_mesh_color_active_get;
    return fn(ptr);
}

void MeshLoopColorLayer_active_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_mesh_color_active_set;
    fn(ptr, value);
}

bool MeshLoopColorLayer_active_render_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_mesh_color_active_render_get;
    return fn(ptr);
}

void MeshLoopColorLayer_active_render_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_mesh_color_active_render_set;
    fn(ptr, value);
}

int MeshLoopColorLayer_data_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_Attribute_data_length;
    return fn(ptr);
}

static PointerRNA MeshLoopColorLayer_data_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MeshLoopColor, rna_iterator_array_get(iter));
}

void MeshLoopColorLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshLoopColorLayer_data;

    PropCollectionBeginFunc fn = rna_Attribute_data_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_data_get(iter);
    }
}

void MeshLoopColorLayer_data_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_array_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColorLayer_data_get(iter);
    }
}

void MeshLoopColorLayer_data_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_array_end;
    fn(iter);
}

bool MeshLoopColorLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    MeshLoopColorLayer_data_begin(&iter, ptr);

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
        if (found) { *r_ptr = MeshLoopColorLayer_data_get(&iter); }
    }

    MeshLoopColorLayer_data_end(&iter);

    return found;
}

static PointerRNA MeshLoopColor_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void MeshLoopColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_MeshLoopColor_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = MeshLoopColor_rna_properties_get(iter);
    }
}

void MeshLoopColor_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = MeshLoopColor_rna_properties_get(iter);
    }
}

void MeshLoopColor_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool MeshLoopColor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA MeshLoopColor_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void MeshLoopColor_color_get(PointerRNA *ptr, float values[4])
{
    PropFloatArrayGetFunc fn = rna_MeshLoopColor_color_get;
    fn(ptr, values);
}

void MeshLoopColor_color_set(PointerRNA *ptr, const float values[4])
{
    PropFloatArraySetFunc fn = rna_MeshLoopColor_color_set;
    fn(ptr, values);
}

void Mesh_transform_func(Mesh *_self, float matrix[16], bool shape_keys)
{
	rna_Mesh_transform(_self, matrix, shape_keys);
}

static void Mesh_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	const float *matrix;
	bool shape_keys;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	matrix = ((const float *)_data);
	_data += 64;
	shape_keys = *((bool *)_data);
	
	rna_Mesh_transform(_self, matrix, shape_keys);
}

void Mesh_flip_normals_func(Mesh *_self)
{
	rna_Mesh_flip_normals(_self);
}

static void Mesh_flip_normals_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	_self = (Mesh *)_ptr->data;
	
	rna_Mesh_flip_normals(_self);
}

void Mesh_set_sharp_from_angle_func(Mesh *_self, float angle)
{
	rna_Mesh_sharp_from_angle_set(_self, angle);
}

static void Mesh_set_sharp_from_angle_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	float angle;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	angle = *((float *)_data);
	
	rna_Mesh_sharp_from_angle_set(_self, angle);
}

void Mesh_split_faces_func(Mesh *_self)
{
	ED_mesh_split_faces(_self);
}

static void Mesh_split_faces_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	_self = (Mesh *)_ptr->data;
	
	ED_mesh_split_faces(_self);
}

void Mesh_calc_tangents_func(Mesh *_self, ReportList *reports, const char * uvmap)
{
	rna_Mesh_calc_tangents(_self, reports, uvmap);
}

static void Mesh_calc_tangents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	const char * uvmap;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	uvmap = *((const char * *)_data);
	
	rna_Mesh_calc_tangents(_self, reports, uvmap);
}

void Mesh_free_tangents_func(Mesh *_self)
{
	rna_Mesh_free_tangents(_self);
}

static void Mesh_free_tangents_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	_self = (Mesh *)_ptr->data;
	
	rna_Mesh_free_tangents(_self);
}

void Mesh_calc_loop_triangles_func(Mesh *_self)
{
	rna_Mesh_calc_corner_tri(_self);
}

static void Mesh_calc_loop_triangles_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	_self = (Mesh *)_ptr->data;
	
	rna_Mesh_calc_corner_tri(_self);
}

void Mesh_calc_smooth_groups_func(Mesh *_self, bool use_bitflags, bool use_boundary_vertices_for_bitflags, int *poly_groups_num, int **poly_groups, int *groups)
{
	rna_Mesh_calc_smooth_groups(_self, use_bitflags, use_boundary_vertices_for_bitflags, poly_groups, poly_groups_num, groups);
}

static void Mesh_calc_smooth_groups_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	bool use_bitflags;
	bool use_boundary_vertices_for_bitflags;
	int *poly_groups_num;
	int **poly_groups;
	int *groups;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	use_bitflags = *((bool *)_data);
	_data += 8;
	use_boundary_vertices_for_bitflags = *((bool *)_data);
	_data += 8;
	poly_groups_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	poly_groups = ((int **)(&(((ParameterDynAlloc *)_data)->array)));
	_data += 16;
	groups = ((int *)_data);
	
	rna_Mesh_calc_smooth_groups(_self, use_bitflags, use_boundary_vertices_for_bitflags, poly_groups, poly_groups_num, groups);
}

void Mesh_normals_split_custom_set_func(Mesh *_self, ReportList *reports, int normals_num, float *normals)
{
	rna_Mesh_normals_split_custom_set(_self, reports, normals, normals_num);
}

static void Mesh_normals_split_custom_set_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	int normals_num;
	const float *normals;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	normals = *((const float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Mesh_normals_split_custom_set(_self, reports, normals, normals_num);
}

void Mesh_normals_split_custom_set_from_vertices_func(Mesh *_self, ReportList *reports, int normals_num, float *normals)
{
	rna_Mesh_normals_split_custom_set_from_vertices(_self, reports, normals, normals_num);
}

static void Mesh_normals_split_custom_set_from_vertices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	int normals_num;
	const float *normals;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	normals_num = (int)((ParameterDynAlloc *)_data)->array_tot;
	normals = *((const float **)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Mesh_normals_split_custom_set_from_vertices(_self, reports, normals, normals_num);
}

void Mesh_update_func(Mesh *_self, bContext *C, bool calc_edges, bool calc_edges_loose)
{
	rna_Mesh_update(_self, C, calc_edges, calc_edges_loose);
}

static void Mesh_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	bool calc_edges;
	bool calc_edges_loose;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	calc_edges = *((bool *)_data);
	_data += 8;
	calc_edges_loose = *((bool *)_data);
	
	rna_Mesh_update(_self, C, calc_edges, calc_edges_loose);
}

void Mesh_update_gpu_tag_func(Mesh *_self)
{
	rna_Mesh_update_gpu_tag(_self);
}

static void Mesh_update_gpu_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	_self = (Mesh *)_ptr->data;
	
	rna_Mesh_update_gpu_tag(_self);
}

const char * Mesh_unit_test_compare_func(Mesh *_self, Mesh *mesh, float threshold)
{
	return rna_Mesh_unit_test_compare(_self, mesh, threshold);
}

static void Mesh_unit_test_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	Mesh *mesh;
	float threshold;
	const char * result;
	char *_data, *_retdata;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	mesh = *((Mesh **)_data);
	_data += 8;
	threshold = *((float *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Mesh_unit_test_compare(_self, mesh, threshold);
	*((const char * *)_retdata) = result;
}

void Mesh_clear_geometry_func(Mesh *_self)
{
	rna_Mesh_clear_geometry(_self);
}

static void Mesh_clear_geometry_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	_self = (Mesh *)_ptr->data;
	
	rna_Mesh_clear_geometry(_self);
}

bool Mesh_validate_func(Mesh *_self, bool verbose, bool clean_customdata)
{
	return rna_Mesh_validate(_self, verbose, clean_customdata);
}

static void Mesh_validate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	bool verbose;
	bool clean_customdata;
	bool result;
	char *_data, *_retdata;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	verbose = *((bool *)_data);
	_data += 8;
	clean_customdata = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	result = rna_Mesh_validate(_self, verbose, clean_customdata);
	*((bool *)_retdata) = result;
}

bool Mesh_validate_material_indices_func(Mesh *_self)
{
	return rna_Mesh_validate_material_indices(_self);
}

static void Mesh_validate_material_indices_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	bool result;
	char *_data, *_retdata;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	result = rna_Mesh_validate_material_indices(_self);
	*((bool *)_retdata) = result;
}

void Mesh_count_selected_items_func(Mesh *_self, int result[3])
{
	rna_Mesh_count_selected_items (_self, result);
}

static void Mesh_count_selected_items_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	int *result;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	result = ((int *)_data);
	
	rna_Mesh_count_selected_items (_self, result);
}

/* Repeated prototypes to detect errors */

void rna_Mesh_transform(Mesh *_self, float matrix[16], bool shape_keys);
void rna_Mesh_flip_normals(Mesh *_self);
void rna_Mesh_sharp_from_angle_set(Mesh *_self, float angle);
void ED_mesh_split_faces(Mesh *_self);
void rna_Mesh_calc_tangents(Mesh *_self, ReportList *reports, const char * uvmap);
void rna_Mesh_free_tangents(Mesh *_self);
void rna_Mesh_calc_corner_tri(Mesh *_self);
void rna_Mesh_calc_smooth_groups(Mesh *_self, bool use_bitflags, bool use_boundary_vertices_for_bitflags, int *poly_groups_num, int **poly_groups, int *groups);
void rna_Mesh_normals_split_custom_set(Mesh *_self, ReportList *reports, int normals_num, float *normals);
void rna_Mesh_normals_split_custom_set_from_vertices(Mesh *_self, ReportList *reports, int normals_num, float *normals);
void rna_Mesh_update(Mesh *_self, bContext *C, bool calc_edges, bool calc_edges_loose);
void rna_Mesh_update_gpu_tag(Mesh *_self);
const char * rna_Mesh_unit_test_compare(Mesh *_self, Mesh *mesh, float threshold);
void rna_Mesh_clear_geometry(Mesh *_self);
bool rna_Mesh_validate(Mesh *_self, bool verbose, bool clean_customdata);
bool rna_Mesh_validate_material_indices(Mesh *_self);
void rna_Mesh_count_selected_items (Mesh *_self, int result[3]);

void MeshVertices_add_func(Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_verts_add(_self, reports, count);
}

static void MeshVertices_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	int count;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_verts_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_verts_add(Mesh *_self, ReportList *reports, int count);

void MeshEdges_add_func(Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_edges_add(_self, reports, count);
}

static void MeshEdges_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	int count;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_edges_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_edges_add(Mesh *_self, ReportList *reports, int count);

void MeshLoops_add_func(Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_loops_add(_self, reports, count);
}

static void MeshLoops_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	int count;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_loops_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_loops_add(Mesh *_self, ReportList *reports, int count);

void MeshPolygons_add_func(Mesh *_self, ReportList *reports, int count)
{
	ED_mesh_faces_add(_self, reports, count);
}

static void MeshPolygons_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	int count;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	count = *((int *)_data);
	
	ED_mesh_faces_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_faces_add(Mesh *_self, ReportList *reports, int count);




PointerRNA UVLoopLayers_new_func(Mesh *_self, ReportList *reports, const char * name, bool do_init)
{
	return rna_Mesh_uv_layers_new(_self, reports, name, do_init);
}

static void UVLoopLayers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	const char * name;
	bool do_init;
	PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	do_init = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_uv_layers_new(_self, reports, name, do_init);
	*reinterpret_cast<PointerRNA *>(_retdata) = layer;
}

void UVLoopLayers_remove_func(Mesh *_self, ReportList *reports, PointerRNA *layer)
{
	rna_Mesh_uv_layers_remove(_self, reports, layer);
}

static void UVLoopLayers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	PointerRNA *layer;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = ((PointerRNA *)_data);
	
	rna_Mesh_uv_layers_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

PointerRNA rna_Mesh_uv_layers_new(Mesh *_self, ReportList *reports, const char * name, bool do_init);
void rna_Mesh_uv_layers_remove(Mesh *_self, ReportList *reports, PointerRNA *layer);

PointerRNA LoopColors_new_func(Mesh *_self, ReportList *reports, const char * name, bool do_init)
{
	return rna_Mesh_vertex_color_new(_self, reports, name, do_init);
}

static void LoopColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	const char * name;
	bool do_init;
	PointerRNA layer;
	char *_data, *_retdata;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	do_init = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	layer = rna_Mesh_vertex_color_new(_self, reports, name, do_init);
	*reinterpret_cast<PointerRNA *>(_retdata) = layer;
}

void LoopColors_remove_func(Mesh *_self, ReportList *reports, PointerRNA *layer)
{
	rna_Mesh_vertex_color_remove(_self, reports, layer);
}

static void LoopColors_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Mesh *_self;
	PointerRNA *layer;
	char *_data;
	
	_self = (Mesh *)_ptr->data;
	_data = (char *)_parms->data;
	layer = *((PointerRNA **)_data);
	
	rna_Mesh_vertex_color_remove(_self, reports, layer);
}

/* Repeated prototypes to detect errors */

PointerRNA rna_Mesh_vertex_color_new(Mesh *_self, ReportList *reports, const char * name, bool do_init);
void rna_Mesh_vertex_color_remove(Mesh *_self, ReportList *reports, PointerRNA *layer);








int MeshPolygon_vertices_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_MeshPoly_vertices_get_length(ptr, arraylen);
}

void MeshPolygon_flip_func(ID *_selfid, MIntProperty *_self)
{
	rna_MeshPolygon_flip(_selfid, _self);
}

static void MeshPolygon_flip_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	ID *_selfid;
	MIntProperty *_self;
	_selfid = (ID *)_ptr->owner_id;
	_self = (MIntProperty *)_ptr->data;
	
	rna_MeshPolygon_flip(_selfid, _self);
}

/* Repeated prototypes to detect errors */

void rna_MeshPolygon_flip(ID *_selfid, MIntProperty *_self);

PointerRNA MeshUVLoopLayer_pin_ensure_func(PointerRNA _self)
{
	return rna_MeshUVLoopLayer_pin_ensure(_self);
}

static void MeshUVLoopLayer_pin_ensure_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	PointerRNA _self;
	PointerRNA layer;
	char *_data, *_retdata;
	
	_self = *_ptr;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	layer = rna_MeshUVLoopLayer_pin_ensure(_self);
	*reinterpret_cast<PointerRNA *>(_retdata) = layer;
}

/* Repeated prototypes to detect errors */

PointerRNA rna_MeshUVLoopLayer_pin_ensure(PointerRNA _self);




/* Mesh */
static CollectionPropertyRNA rna_Mesh_vertices_;
PropertyRNA &rna_Mesh_vertices = reinterpret_cast<PropertyRNA &>(rna_Mesh_vertices_);

static CollectionPropertyRNA rna_Mesh_edges_;
PropertyRNA &rna_Mesh_edges = reinterpret_cast<PropertyRNA &>(rna_Mesh_edges_);

static CollectionPropertyRNA rna_Mesh_loops_;
PropertyRNA &rna_Mesh_loops = reinterpret_cast<PropertyRNA &>(rna_Mesh_loops_);

static CollectionPropertyRNA rna_Mesh_polygons_;
PropertyRNA &rna_Mesh_polygons = reinterpret_cast<PropertyRNA &>(rna_Mesh_polygons_);

static EnumPropertyRNA rna_Mesh_normals_domain_;
PropertyRNA &rna_Mesh_normals_domain = reinterpret_cast<PropertyRNA &>(rna_Mesh_normals_domain_);

static CollectionPropertyRNA rna_Mesh_vertex_normals_;
PropertyRNA &rna_Mesh_vertex_normals = reinterpret_cast<PropertyRNA &>(rna_Mesh_vertex_normals_);

static CollectionPropertyRNA rna_Mesh_polygon_normals_;
PropertyRNA &rna_Mesh_polygon_normals = reinterpret_cast<PropertyRNA &>(rna_Mesh_polygon_normals_);

static CollectionPropertyRNA rna_Mesh_corner_normals_;
PropertyRNA &rna_Mesh_corner_normals = reinterpret_cast<PropertyRNA &>(rna_Mesh_corner_normals_);

static CollectionPropertyRNA rna_Mesh_loop_triangles_;
PropertyRNA &rna_Mesh_loop_triangles = reinterpret_cast<PropertyRNA &>(rna_Mesh_loop_triangles_);

static CollectionPropertyRNA rna_Mesh_loop_triangle_polygons_;
PropertyRNA &rna_Mesh_loop_triangle_polygons = reinterpret_cast<PropertyRNA &>(rna_Mesh_loop_triangle_polygons_);

static PointerPropertyRNA rna_Mesh_texture_mesh_;
PropertyRNA &rna_Mesh_texture_mesh = reinterpret_cast<PropertyRNA &>(rna_Mesh_texture_mesh_);

static CollectionPropertyRNA rna_Mesh_uv_layers_;
PropertyRNA &rna_Mesh_uv_layers = reinterpret_cast<PropertyRNA &>(rna_Mesh_uv_layers_);

static PointerPropertyRNA rna_Mesh_uv_layer_clone_;
PropertyRNA &rna_Mesh_uv_layer_clone = reinterpret_cast<PropertyRNA &>(rna_Mesh_uv_layer_clone_);

static IntPropertyRNA rna_Mesh_uv_layer_clone_index_;
PropertyRNA &rna_Mesh_uv_layer_clone_index = reinterpret_cast<PropertyRNA &>(rna_Mesh_uv_layer_clone_index_);

static PointerPropertyRNA rna_Mesh_uv_layer_stencil_;
PropertyRNA &rna_Mesh_uv_layer_stencil = reinterpret_cast<PropertyRNA &>(rna_Mesh_uv_layer_stencil_);

static IntPropertyRNA rna_Mesh_uv_layer_stencil_index_;
PropertyRNA &rna_Mesh_uv_layer_stencil_index = reinterpret_cast<PropertyRNA &>(rna_Mesh_uv_layer_stencil_index_);

static CollectionPropertyRNA rna_Mesh_vertex_colors_;
PropertyRNA &rna_Mesh_vertex_colors = reinterpret_cast<PropertyRNA &>(rna_Mesh_vertex_colors_);

static CollectionPropertyRNA rna_Mesh_skin_vertices_;
PropertyRNA &rna_Mesh_skin_vertices = reinterpret_cast<PropertyRNA &>(rna_Mesh_skin_vertices_);

static CollectionPropertyRNA rna_Mesh_attributes_;
PropertyRNA &rna_Mesh_attributes = reinterpret_cast<PropertyRNA &>(rna_Mesh_attributes_);

static CollectionPropertyRNA rna_Mesh_color_attributes_;
PropertyRNA &rna_Mesh_color_attributes = reinterpret_cast<PropertyRNA &>(rna_Mesh_color_attributes_);

static FloatPropertyRNA rna_Mesh_remesh_voxel_size_;
PropertyRNA &rna_Mesh_remesh_voxel_size = reinterpret_cast<PropertyRNA &>(rna_Mesh_remesh_voxel_size_);

static FloatPropertyRNA rna_Mesh_remesh_voxel_adaptivity_;
PropertyRNA &rna_Mesh_remesh_voxel_adaptivity = reinterpret_cast<PropertyRNA &>(rna_Mesh_remesh_voxel_adaptivity_);

static BoolPropertyRNA rna_Mesh_use_remesh_fix_poles_;
PropertyRNA &rna_Mesh_use_remesh_fix_poles = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_remesh_fix_poles_);

static BoolPropertyRNA rna_Mesh_use_remesh_preserve_volume_;
PropertyRNA &rna_Mesh_use_remesh_preserve_volume = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_remesh_preserve_volume_);

static BoolPropertyRNA rna_Mesh_use_remesh_preserve_attributes_;
PropertyRNA &rna_Mesh_use_remesh_preserve_attributes = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_remesh_preserve_attributes_);

static EnumPropertyRNA rna_Mesh_remesh_mode_;
PropertyRNA &rna_Mesh_remesh_mode = reinterpret_cast<PropertyRNA &>(rna_Mesh_remesh_mode_);

static BoolPropertyRNA rna_Mesh_use_mirror_x_;
PropertyRNA &rna_Mesh_use_mirror_x = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_mirror_x_);

static BoolPropertyRNA rna_Mesh_use_mirror_y_;
PropertyRNA &rna_Mesh_use_mirror_y = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_mirror_y_);

static BoolPropertyRNA rna_Mesh_use_mirror_z_;
PropertyRNA &rna_Mesh_use_mirror_z = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_mirror_z_);

static BoolPropertyRNA rna_Mesh_use_mirror_vertex_groups_;
PropertyRNA &rna_Mesh_use_mirror_vertex_groups = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_mirror_vertex_groups_);

static IntPropertyRNA rna_Mesh_radial_symmetry_;
PropertyRNA &rna_Mesh_radial_symmetry = reinterpret_cast<PropertyRNA &>(rna_Mesh_radial_symmetry_);

static BoolPropertyRNA rna_Mesh_has_custom_normals_;
PropertyRNA &rna_Mesh_has_custom_normals = reinterpret_cast<PropertyRNA &>(rna_Mesh_has_custom_normals_);

static PointerPropertyRNA rna_Mesh_texco_mesh_;
PropertyRNA &rna_Mesh_texco_mesh = reinterpret_cast<PropertyRNA &>(rna_Mesh_texco_mesh_);

static PointerPropertyRNA rna_Mesh_shape_keys_;
PropertyRNA &rna_Mesh_shape_keys = reinterpret_cast<PropertyRNA &>(rna_Mesh_shape_keys_);

static BoolPropertyRNA rna_Mesh_use_auto_texspace_;
PropertyRNA &rna_Mesh_use_auto_texspace = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_auto_texspace_);

static BoolPropertyRNA rna_Mesh_use_mirror_topology_;
PropertyRNA &rna_Mesh_use_mirror_topology = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_mirror_topology_);

static BoolPropertyRNA rna_Mesh_use_paint_bone_selection_;
PropertyRNA &rna_Mesh_use_paint_bone_selection = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_paint_bone_selection_);

static BoolPropertyRNA rna_Mesh_use_paint_mask_;
PropertyRNA &rna_Mesh_use_paint_mask = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_paint_mask_);

static BoolPropertyRNA rna_Mesh_use_paint_mask_vertex_;
PropertyRNA &rna_Mesh_use_paint_mask_vertex = reinterpret_cast<PropertyRNA &>(rna_Mesh_use_paint_mask_vertex_);

static IntPropertyRNA rna_Mesh_total_vert_sel_;
PropertyRNA &rna_Mesh_total_vert_sel = reinterpret_cast<PropertyRNA &>(rna_Mesh_total_vert_sel_);

static IntPropertyRNA rna_Mesh_total_edge_sel_;
PropertyRNA &rna_Mesh_total_edge_sel = reinterpret_cast<PropertyRNA &>(rna_Mesh_total_edge_sel_);

static IntPropertyRNA rna_Mesh_total_face_sel_;
PropertyRNA &rna_Mesh_total_face_sel = reinterpret_cast<PropertyRNA &>(rna_Mesh_total_face_sel_);

static BoolPropertyRNA rna_Mesh_is_editmode_;
PropertyRNA &rna_Mesh_is_editmode = reinterpret_cast<PropertyRNA &>(rna_Mesh_is_editmode_);

static PointerPropertyRNA rna_Mesh_animation_data_;
PropertyRNA &rna_Mesh_animation_data = reinterpret_cast<PropertyRNA &>(rna_Mesh_animation_data_);

static BoolPropertyRNA rna_Mesh_auto_texspace_;
PropertyRNA &rna_Mesh_auto_texspace = reinterpret_cast<PropertyRNA &>(rna_Mesh_auto_texspace_);

static FloatPropertyRNA rna_Mesh_texspace_location_;
PropertyRNA &rna_Mesh_texspace_location = reinterpret_cast<PropertyRNA &>(rna_Mesh_texspace_location_);

static FloatPropertyRNA rna_Mesh_texspace_size_;
PropertyRNA &rna_Mesh_texspace_size = reinterpret_cast<PropertyRNA &>(rna_Mesh_texspace_size_);

static CollectionPropertyRNA rna_Mesh_materials_;
PropertyRNA &rna_Mesh_materials = reinterpret_cast<PropertyRNA &>(rna_Mesh_materials_);

static FloatPropertyRNA rna_Mesh_transform_matrix_;
PropertyRNA &rna_Mesh_transform_matrix = reinterpret_cast<PropertyRNA &>(rna_Mesh_transform_matrix_);

static BoolPropertyRNA rna_Mesh_transform_shape_keys_;
PropertyRNA &rna_Mesh_transform_shape_keys = reinterpret_cast<PropertyRNA &>(rna_Mesh_transform_shape_keys_);

FunctionRNA *rna_Mesh_transform_func;
FunctionRNA *rna_Mesh_flip_normals_func;
static FloatPropertyRNA rna_Mesh_set_sharp_from_angle_angle_;
PropertyRNA &rna_Mesh_set_sharp_from_angle_angle = reinterpret_cast<PropertyRNA &>(rna_Mesh_set_sharp_from_angle_angle_);

FunctionRNA *rna_Mesh_set_sharp_from_angle_func;
FunctionRNA *rna_Mesh_split_faces_func;
static StringPropertyRNA rna_Mesh_calc_tangents_uvmap_;
PropertyRNA &rna_Mesh_calc_tangents_uvmap = reinterpret_cast<PropertyRNA &>(rna_Mesh_calc_tangents_uvmap_);

FunctionRNA *rna_Mesh_calc_tangents_func;
FunctionRNA *rna_Mesh_free_tangents_func;
FunctionRNA *rna_Mesh_calc_loop_triangles_func;
static BoolPropertyRNA rna_Mesh_calc_smooth_groups_use_bitflags_;
PropertyRNA &rna_Mesh_calc_smooth_groups_use_bitflags = reinterpret_cast<PropertyRNA &>(rna_Mesh_calc_smooth_groups_use_bitflags_);

static BoolPropertyRNA rna_Mesh_calc_smooth_groups_use_boundary_vertices_for_bitflags_;
PropertyRNA &rna_Mesh_calc_smooth_groups_use_boundary_vertices_for_bitflags = reinterpret_cast<PropertyRNA &>(rna_Mesh_calc_smooth_groups_use_boundary_vertices_for_bitflags_);

static IntPropertyRNA rna_Mesh_calc_smooth_groups_poly_groups_;
PropertyRNA &rna_Mesh_calc_smooth_groups_poly_groups = reinterpret_cast<PropertyRNA &>(rna_Mesh_calc_smooth_groups_poly_groups_);

static IntPropertyRNA rna_Mesh_calc_smooth_groups_groups_;
PropertyRNA &rna_Mesh_calc_smooth_groups_groups = reinterpret_cast<PropertyRNA &>(rna_Mesh_calc_smooth_groups_groups_);

FunctionRNA *rna_Mesh_calc_smooth_groups_func;
static FloatPropertyRNA rna_Mesh_normals_split_custom_set_normals_;
PropertyRNA &rna_Mesh_normals_split_custom_set_normals = reinterpret_cast<PropertyRNA &>(rna_Mesh_normals_split_custom_set_normals_);

FunctionRNA *rna_Mesh_normals_split_custom_set_func;
static FloatPropertyRNA rna_Mesh_normals_split_custom_set_from_vertices_normals_;
PropertyRNA &rna_Mesh_normals_split_custom_set_from_vertices_normals = reinterpret_cast<PropertyRNA &>(rna_Mesh_normals_split_custom_set_from_vertices_normals_);

FunctionRNA *rna_Mesh_normals_split_custom_set_from_vertices_func;
static BoolPropertyRNA rna_Mesh_update_calc_edges_;
PropertyRNA &rna_Mesh_update_calc_edges = reinterpret_cast<PropertyRNA &>(rna_Mesh_update_calc_edges_);

static BoolPropertyRNA rna_Mesh_update_calc_edges_loose_;
PropertyRNA &rna_Mesh_update_calc_edges_loose = reinterpret_cast<PropertyRNA &>(rna_Mesh_update_calc_edges_loose_);

FunctionRNA *rna_Mesh_update_func;
FunctionRNA *rna_Mesh_update_gpu_tag_func;
static PointerPropertyRNA rna_Mesh_unit_test_compare_mesh_;
PropertyRNA &rna_Mesh_unit_test_compare_mesh = reinterpret_cast<PropertyRNA &>(rna_Mesh_unit_test_compare_mesh_);

static FloatPropertyRNA rna_Mesh_unit_test_compare_threshold_;
PropertyRNA &rna_Mesh_unit_test_compare_threshold = reinterpret_cast<PropertyRNA &>(rna_Mesh_unit_test_compare_threshold_);

static StringPropertyRNA rna_Mesh_unit_test_compare_result_;
PropertyRNA &rna_Mesh_unit_test_compare_result = reinterpret_cast<PropertyRNA &>(rna_Mesh_unit_test_compare_result_);

FunctionRNA *rna_Mesh_unit_test_compare_func;
FunctionRNA *rna_Mesh_clear_geometry_func;
static BoolPropertyRNA rna_Mesh_validate_verbose_;
PropertyRNA &rna_Mesh_validate_verbose = reinterpret_cast<PropertyRNA &>(rna_Mesh_validate_verbose_);

static BoolPropertyRNA rna_Mesh_validate_clean_customdata_;
PropertyRNA &rna_Mesh_validate_clean_customdata = reinterpret_cast<PropertyRNA &>(rna_Mesh_validate_clean_customdata_);

static BoolPropertyRNA rna_Mesh_validate_result_;
PropertyRNA &rna_Mesh_validate_result = reinterpret_cast<PropertyRNA &>(rna_Mesh_validate_result_);

FunctionRNA *rna_Mesh_validate_func;
static BoolPropertyRNA rna_Mesh_validate_material_indices_result_;
PropertyRNA &rna_Mesh_validate_material_indices_result = reinterpret_cast<PropertyRNA &>(rna_Mesh_validate_material_indices_result_);

FunctionRNA *rna_Mesh_validate_material_indices_func;
static IntPropertyRNA rna_Mesh_count_selected_items_result_;
PropertyRNA &rna_Mesh_count_selected_items_result = reinterpret_cast<PropertyRNA &>(rna_Mesh_count_selected_items_result_);

FunctionRNA *rna_Mesh_count_selected_items_func;
StructRNA *RNA_Mesh;
void register_struct_Mesh(BlenderRNA &brna)
{
	rna_Mesh_vertices_ = {
		{&rna_Mesh_edges, 	nullptr,
		-1, "vertices", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Vertices",
		"Vertices of the mesh",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MeshVertices},
		Mesh_vertices_begin, Mesh_vertices_next, Mesh_vertices_end, Mesh_vertices_get, Mesh_vertices_length, Mesh_vertices_lookup_int, nullptr, nullptr, RNA_MeshVertex
	};

	rna_Mesh_edges_ = {
		{&rna_Mesh_loops, 	&rna_Mesh_vertices,
		-1, "edges", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Edges",
		"Edges of the mesh",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MeshEdges},
		Mesh_edges_begin, Mesh_edges_next, Mesh_edges_end, Mesh_edges_get, Mesh_edges_length, Mesh_edges_lookup_int, nullptr, nullptr, RNA_MeshEdge
	};

	rna_Mesh_loops_ = {
		{&rna_Mesh_polygons, 	&rna_Mesh_edges,
		-1, "loops", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Loops",
		"Loops of the mesh (face corners)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MeshLoops},
		Mesh_loops_begin, Mesh_loops_next, Mesh_loops_end, Mesh_loops_get, Mesh_loops_length, Mesh_loops_lookup_int, nullptr, nullptr, RNA_MeshLoop
	};

	rna_Mesh_polygons_ = {
		{&rna_Mesh_normals_domain, 	&rna_Mesh_loops,
		-1, "polygons", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Polygons",
		"Polygons of the mesh",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MeshPolygons},
		Mesh_polygons_begin, Mesh_polygons_next, Mesh_polygons_end, Mesh_polygons_get, Mesh_polygons_length, Mesh_polygons_lookup_int, nullptr, nullptr, RNA_MeshPolygon
	};

	static const EnumPropertyItem rna_Mesh_normals_domain_items[4] = {
		{1, "POINT", 0, "Point", ""	},
		{0, "FACE", 0, "Face", ""	},
		{2, "CORNER", 0, "Corner", ""	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Mesh_normals_domain_ = {
		{&rna_Mesh_vertex_normals, 	&rna_Mesh_polygons,
		-1, "normals_domain", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normal Domain",
		"The attribute domain that gives enough information to represent the mesh\'s normals",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_normals_domain_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Mesh_normals_domain_items, 3, 0
	};

	rna_Mesh_vertex_normals_ = {
		{&rna_Mesh_polygon_normals, 	&rna_Mesh_normals_domain,
		-1, "vertex_normals", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Vertex Normals",
		"The normal direction of each vertex, defined as the average of the surrounding face normals",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_vertex_normals_begin, Mesh_vertex_normals_next, Mesh_vertex_normals_end, Mesh_vertex_normals_get, Mesh_vertex_normals_length, Mesh_vertex_normals_lookup_int, nullptr, nullptr, RNA_MeshNormalValue
	};

	rna_Mesh_polygon_normals_ = {
		{&rna_Mesh_corner_normals, 	&rna_Mesh_vertex_normals,
		-1, "polygon_normals", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Polygon Normals",
		"The normal direction of each face, defined by the winding order and position of its vertices",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_polygon_normals_begin, Mesh_polygon_normals_next, Mesh_polygon_normals_end, Mesh_polygon_normals_get, Mesh_polygon_normals_length, Mesh_polygon_normals_lookup_int, nullptr, nullptr, RNA_MeshNormalValue
	};

	rna_Mesh_corner_normals_ = {
		{&rna_Mesh_loop_triangles, 	&rna_Mesh_polygon_normals,
		-1, "corner_normals", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Corner Normals",
		"The \"slit\" normal direction of each face corner, influenced by vertex normals, sharp faces, sharp edges, and custom normals. May be empty.",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_corner_normals_begin, Mesh_corner_normals_next, Mesh_corner_normals_end, Mesh_corner_normals_get, Mesh_corner_normals_length, Mesh_corner_normals_lookup_int, nullptr, nullptr, RNA_MeshNormalValue
	};

	rna_Mesh_loop_triangles_ = {
		{&rna_Mesh_loop_triangle_polygons, 	&rna_Mesh_corner_normals,
		-1, "loop_triangles", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Loop Triangles",
		"Tessellation of mesh polygons into triangles",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_MeshLoopTriangles},
		Mesh_loop_triangles_begin, Mesh_loop_triangles_next, Mesh_loop_triangles_end, Mesh_loop_triangles_get, Mesh_loop_triangles_length, Mesh_loop_triangles_lookup_int, nullptr, nullptr, RNA_MeshLoopTriangle
	};

	rna_Mesh_loop_triangle_polygons_ = {
		{&rna_Mesh_texture_mesh, 	&rna_Mesh_loop_triangles,
		-1, "loop_triangle_polygons", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Triangle Faces",
		"The face index for each loop triangle",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_loop_triangle_polygons_begin, Mesh_loop_triangle_polygons_next, Mesh_loop_triangle_polygons_end, Mesh_loop_triangle_polygons_get, Mesh_loop_triangle_polygons_length, Mesh_loop_triangle_polygons_lookup_int, nullptr, nullptr, RNA_ReadOnlyInteger
	};

	rna_Mesh_texture_mesh_ = {
		{&rna_Mesh_uv_layers, 	&rna_Mesh_loop_triangle_polygons,
		-1, "texture_mesh", 9437377, 1, 0, 0, 0, PropertyPathTemplateType(0), "Texture Mesh",
		"Use another mesh for texture indices (vertex indices must be aligned)",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_texture_mesh_get, Mesh_texture_mesh_set, nullptr, nullptr,RNA_Mesh
	};

	rna_Mesh_uv_layers_ = {
		{&rna_Mesh_uv_layer_clone, 	&rna_Mesh_texture_mesh,
		-1, "uv_layers", 0, 4, 0, 0, 0, PropertyPathTemplateType(0), "UV Loop Layers",
		"All UV loop layers",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_UVLoopLayers},
		Mesh_uv_layers_begin, Mesh_uv_layers_next, Mesh_uv_layers_end, Mesh_uv_layers_get, Mesh_uv_layers_length, Mesh_uv_layers_lookup_int, nullptr, nullptr, RNA_MeshUVLoopLayer
	};

	rna_Mesh_uv_layer_clone_ = {
		{&rna_Mesh_uv_layer_clone_index, 	&rna_Mesh_uv_layers,
		-1, "uv_layer_clone", 8388609, 4, 0, 0, 0, PropertyPathTemplateType(0), "Clone UV Loop Layer",
		"UV loop layer to be used as cloning source",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_uv_layer_clone_get, Mesh_uv_layer_clone_set, nullptr, nullptr,RNA_MeshUVLoopLayer
	};

	rna_Mesh_uv_layer_clone_index_ = {
		{&rna_Mesh_uv_layer_stencil, 	&rna_Mesh_uv_layer_clone,
		-1, "uv_layer_clone_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clone UV Loop Layer Index",
		"Clone UV loop layer index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_uv_layer_clone_index_get, Mesh_uv_layer_clone_index_set, nullptr, nullptr, rna_Mesh_uv_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_uv_layer_stencil_ = {
		{&rna_Mesh_uv_layer_stencil_index, 	&rna_Mesh_uv_layer_clone_index,
		-1, "uv_layer_stencil", 8388609, 4, 0, 0, 0, PropertyPathTemplateType(0), "Mask UV Loop Layer",
		"UV loop layer to mask the painted area",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_uv_layer_stencil_get, Mesh_uv_layer_stencil_set, nullptr, nullptr,RNA_MeshUVLoopLayer
	};

	rna_Mesh_uv_layer_stencil_index_ = {
		{&rna_Mesh_vertex_colors, 	&rna_Mesh_uv_layer_stencil,
		-1, "uv_layer_stencil_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mask UV Loop Layer Index",
		"Mask UV loop layer index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_uv_layer_stencil_index_get, Mesh_uv_layer_stencil_index_set, nullptr, nullptr, rna_Mesh_uv_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_vertex_colors_ = {
		{&rna_Mesh_skin_vertices, 	&rna_Mesh_uv_layer_stencil_index,
		-1, "vertex_colors", 0, 4, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Colors",
		"Legacy vertex color layers. Deprecated, use color attributes instead.",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_LoopColors},
		Mesh_vertex_colors_begin, Mesh_vertex_colors_next, Mesh_vertex_colors_end, Mesh_vertex_colors_get, Mesh_vertex_colors_length, Mesh_vertex_colors_lookup_int, nullptr, nullptr, RNA_MeshLoopColorLayer
	};

	rna_Mesh_skin_vertices_ = {
		{&rna_Mesh_attributes, 	&rna_Mesh_vertex_colors,
		-1, "skin_vertices", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Skin Vertices",
		"All skin vertices",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_skin_vertices_begin, Mesh_skin_vertices_next, Mesh_skin_vertices_end, Mesh_skin_vertices_get, Mesh_skin_vertices_length, Mesh_skin_vertices_lookup_int, Mesh_skin_vertices_lookup_string, nullptr, RNA_MeshSkinVertexLayer
	};

	rna_Mesh_attributes_ = {
		{&rna_Mesh_color_attributes, 	&rna_Mesh_skin_vertices,
		-1, "attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Attributes",
		"Geometry attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupMesh},
		Mesh_attributes_begin, Mesh_attributes_next, Mesh_attributes_end, Mesh_attributes_get, Mesh_attributes_length, Mesh_attributes_lookup_int, Mesh_attributes_lookup_string, nullptr, RNA_Attribute
	};

	rna_Mesh_color_attributes_ = {
		{&rna_Mesh_remesh_voxel_size, 	&rna_Mesh_attributes,
		-1, "color_attributes", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Attributes",
		"Geometry color attributes",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_AttributeGroupMesh},
		Mesh_color_attributes_begin, Mesh_color_attributes_next, Mesh_color_attributes_end, Mesh_color_attributes_get, Mesh_color_attributes_length, Mesh_color_attributes_lookup_int, nullptr, nullptr, RNA_Attribute
	};

	rna_Mesh_remesh_voxel_size_ = {
		{&rna_Mesh_remesh_voxel_adaptivity, 	&rna_Mesh_color_attributes,
		-1, "remesh_voxel_size", 1073741825, 0, 0, 4, 0, PropertyPathTemplateType(0), "Voxel Size",
		"Size of the voxel in object space used for volume evaluation. Lower values preserve finer details.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Mesh, remesh_voxel_size), RawPropertyType(5), nullptr},
		Mesh_remesh_voxel_size_get, Mesh_remesh_voxel_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0001000000f, FLT_MAX, 0.0f, FLT_MAX, 0.0099999998f, 4, nullptr, nullptr, 0.1000000015f, nullptr
	};

	rna_Mesh_remesh_voxel_adaptivity_ = {
		{&rna_Mesh_use_remesh_fix_poles, 	&rna_Mesh_remesh_voxel_size,
		-1, "remesh_voxel_adaptivity", 1073741825, 0, 0, 4, 0, PropertyPathTemplateType(0), "Adaptivity",
		"Reduces the final face count by simplifying geometry where detail is not needed, generating triangles. A value greater than 0 disables Fix Poles.",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DISTANCE) | int(PROP_UNIT_LENGTH)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Mesh, remesh_voxel_adaptivity), RawPropertyType(5), nullptr},
		Mesh_remesh_voxel_adaptivity_get, Mesh_remesh_voxel_adaptivity_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 0.0099999998f, 4, nullptr, nullptr, 0.0f, nullptr
	};

	rna_Mesh_use_remesh_fix_poles_ = {
		{&rna_Mesh_use_remesh_preserve_volume, 	&rna_Mesh_remesh_voxel_adaptivity,
		-1, "use_remesh_fix_poles", 1073741825, 0, 0, 0, 0, PropertyPathTemplateType(0), "Fix Poles",
		"Produces fewer poles and a better topology flow",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_remesh_fix_poles_get, Mesh_use_remesh_fix_poles_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_use_remesh_preserve_volume_ = {
		{&rna_Mesh_use_remesh_preserve_attributes, 	&rna_Mesh_use_remesh_fix_poles,
		-1, "use_remesh_preserve_volume", 1073741825, 0, 0, 0, 0, PropertyPathTemplateType(0), "Preserve Volume",
		"Projects the mesh to preserve the volume and details of the original mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_remesh_preserve_volume_get, Mesh_use_remesh_preserve_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_use_remesh_preserve_attributes_ = {
		{&rna_Mesh_remesh_mode, 	&rna_Mesh_use_remesh_preserve_volume,
		-1, "use_remesh_preserve_attributes", 1073741825, 0, 0, 0, 0, PropertyPathTemplateType(0), "Preserve Attributes",
		"Transfer all attributes to the new mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_remesh_preserve_attributes_get, Mesh_use_remesh_preserve_attributes_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static const EnumPropertyItem rna_Mesh_remesh_mode_items[3] = {
		{0, "VOXEL", 0, "Voxel", "Use the voxel remesher"	},
		{1, "QUAD", 0, "Quad", "Use the quad remesher"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Mesh_remesh_mode_ = {
		{&rna_Mesh_use_mirror_x, 	&rna_Mesh_use_remesh_preserve_attributes,
		-1, "remesh_mode", 1073741825, 0, 0, 4, 0, PropertyPathTemplateType(0), "Remesh Mode",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Mesh, remesh_mode), RawPropertyType(2), nullptr},
		Mesh_remesh_mode_get, Mesh_remesh_mode_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Mesh_remesh_mode_items, 2, 0
	};

	rna_Mesh_use_mirror_x_ = {
		{&rna_Mesh_use_mirror_y, 	&rna_Mesh_remesh_mode,
		-1, "use_mirror_x", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "X",
		"Enable symmetry in the X axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_mirror_x_get, Mesh_use_mirror_x_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_use_mirror_y_ = {
		{&rna_Mesh_use_mirror_z, 	&rna_Mesh_use_mirror_x,
		-1, "use_mirror_y", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Y",
		"Enable symmetry in the Y axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_mirror_y_get, Mesh_use_mirror_y_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_use_mirror_z_ = {
		{&rna_Mesh_use_mirror_vertex_groups, 	&rna_Mesh_use_mirror_y,
		-1, "use_mirror_z", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Z",
		"Enable symmetry in the Z axis",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_mirror_z_get, Mesh_use_mirror_z_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_use_mirror_vertex_groups_ = {
		{&rna_Mesh_radial_symmetry, 	&rna_Mesh_use_mirror_z,
		-1, "use_mirror_vertex_groups", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mirror Vertex Groups",
		"Mirror the left/right vertex groups when painting. The symmetry axis is determined by the symmetry settings.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_draw, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_mirror_vertex_groups_get, Mesh_use_mirror_vertex_groups_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static int rna_Mesh_radial_symmetry_default[3] = {
		1,
		1,
		1
	};
	rna_Mesh_radial_symmetry_ = {
		{&rna_Mesh_has_custom_normals, 	&rna_Mesh_use_mirror_vertex_groups,
		-1, "radial_symmetry", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Radial Symmetry Count",
		"Number of mirrored regions around a central axis",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Mesh, radial_symmetry), RawPropertyType(10), nullptr},
		nullptr, nullptr, Mesh_radial_symmetry_get, Mesh_radial_symmetry_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, 32, 1, 64, 1, nullptr, nullptr, 1, rna_Mesh_radial_symmetry_default
	};

	rna_Mesh_has_custom_normals_ = {
		{&rna_Mesh_texco_mesh, 	&rna_Mesh_radial_symmetry,
		-1, "has_custom_normals", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Has Custom Normals",
		"True if there is custom normal data for this mesh",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_has_custom_normals_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_texco_mesh_ = {
		{&rna_Mesh_shape_keys, 	&rna_Mesh_has_custom_normals,
		-1, "texco_mesh", 8388801, 1, 0, 0, 0, PropertyPathTemplateType(0), "Texture Space Mesh",
		"Derive texture coordinates from another mesh",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_texco_mesh_get, Mesh_texco_mesh_set, nullptr, nullptr,RNA_Mesh
	};

	rna_Mesh_shape_keys_ = {
		{&rna_Mesh_use_auto_texspace, 	&rna_Mesh_texco_mesh,
		-1, "shape_keys", 8388672, 1, 0, 32, 0, PropertyPathTemplateType(0), "Shape Keys",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_shape_keys_get, nullptr, nullptr, nullptr,RNA_Key
	};

	rna_Mesh_use_auto_texspace_ = {
		{&rna_Mesh_use_mirror_topology, 	&rna_Mesh_shape_keys,
		-1, "use_auto_texspace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto Texture Space",
		"Adjust active object\'s texture space automatically when transforming object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_geom_and_params, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_auto_texspace_get, Mesh_use_auto_texspace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Mesh_use_mirror_topology_ = {
		{&rna_Mesh_use_paint_bone_selection, 	&rna_Mesh_use_auto_texspace,
		-1, "use_mirror_topology", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Topology Mirror",
		"Use topology based mirroring (for when both sides of mesh have matching, unique topology)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_mirror_topology_get, Mesh_use_mirror_topology_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_use_paint_bone_selection_ = {
		{&rna_Mesh_use_paint_mask, 	&rna_Mesh_use_mirror_topology,
		-1, "use_paint_bone_selection", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bone Selection",
		"Bone selection during painting",
		180, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_bone_selection_mode, 269090816, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_paint_bone_selection_get, Mesh_use_paint_bone_selection_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	rna_Mesh_use_paint_mask_ = {
		{&rna_Mesh_use_paint_mask_vertex, 	&rna_Mesh_use_paint_bone_selection,
		-1, "use_paint_mask", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Paint Mask",
		"Face selection masking for painting",
		565, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_facemask, 269090816, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_paint_mask_get, Mesh_use_paint_mask_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_use_paint_mask_vertex_ = {
		{&rna_Mesh_total_vert_sel, 	&rna_Mesh_use_paint_mask,
		-1, "use_paint_mask_vertex", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertex Selection",
		"Vertex selection masking for painting",
		586, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_vertmask, 269090816, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_use_paint_mask_vertex_get, Mesh_use_paint_mask_vertex_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_total_vert_sel_ = {
		{&rna_Mesh_total_edge_sel, 	&rna_Mesh_use_paint_mask_vertex,
		-1, "total_vert_sel", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Vertex Total",
		"Selected vertex count in editmode",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_total_vert_sel_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_total_edge_sel_ = {
		{&rna_Mesh_total_face_sel, 	&rna_Mesh_total_vert_sel,
		-1, "total_edge_sel", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Edge Total",
		"Selected edge count in editmode",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_total_edge_sel_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_total_face_sel_ = {
		{&rna_Mesh_is_editmode, 	&rna_Mesh_total_edge_sel,
		-1, "total_face_sel", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Selected Face Total",
		"Selected face count in editmode",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_total_face_sel_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_is_editmode_ = {
		{&rna_Mesh_animation_data, 	&rna_Mesh_total_face_sel,
		-1, "is_editmode", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Editmode",
		"True when used in editmode",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_is_editmode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_Mesh_animation_data_ = {
		{&rna_Mesh_auto_texspace, 	&rna_Mesh_is_editmode,
		-1, "animation_data", 8388608, 1, 0, 0, 0, PropertyPathTemplateType(0), "Animation Data",
		"Animation data for this data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_AnimaData_override_apply,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_animation_data_get, nullptr, nullptr, nullptr,RNA_AnimData
	};

	rna_Mesh_auto_texspace_ = {
		{&rna_Mesh_texspace_location, 	&rna_Mesh_animation_data,
		-1, "auto_texspace", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Auto Texture Space",
		"Adjust active object\'s texture space automatically when transforming object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Mesh_auto_texspace_get, Mesh_auto_texspace_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};

	static float rna_Mesh_texspace_location_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Mesh_texspace_location_ = {
		{&rna_Mesh_texspace_size, 	&rna_Mesh_auto_texspace,
		-1, "texspace_location", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture Space Location",
		"Texture space location",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, rna_Mesh_texspace_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Mesh_texspace_location_get, Mesh_texspace_location_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Mesh_texspace_location_default
	};

	static float rna_Mesh_texspace_size_default[3] = {
		1.0f,
		1.0f,
		1.0f
	};
	rna_Mesh_texspace_size_ = {
		{&rna_Mesh_materials, 	&rna_Mesh_texspace_location,
		-1, "texspace_size", 67108867, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texture Space Size",
		"Texture space size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, rna_Mesh_texspace_editable, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, Mesh_texspace_size_get, Mesh_texspace_size_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_Mesh_texspace_size_default
	};

	rna_Mesh_materials_ = {
		{nullptr, 	&rna_Mesh_texspace_size,
		-1, "materials", 128, 1, 0, 0, 0, PropertyPathTemplateType(0), "Materials",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Mesh_materials_override_apply,
			0, PROP_RAW_UNSET, RNA_IDMaterials},
		Mesh_materials_begin, Mesh_materials_next, Mesh_materials_end, Mesh_materials_get, Mesh_materials_length, Mesh_materials_lookup_int, Mesh_materials_lookup_string, rna_IDMaterials_assign_int, RNA_Material
	};

	StructRNA *srna = RNA_Mesh;
	srna->cont.properties = {&rna_Mesh_vertices, &rna_Mesh_materials};
	srna->identifier = "Mesh";
	srna->flag = 519;
	srna->name = "Mesh";
	srna->description = "Mesh data-block defining geometric surfaces";
	srna->translation_context = "*";
	srna->icon = 187;
	srna->nameproperty = &rna_ID_name;
	srna->iteratorproperty = &rna_ID_rna_properties;
	srna->base = RNA_ID;
	srna->refine = rna_ID_refine;
	srna->instance = rna_ID_instance;
	srna->idproperties = rna_ID_idprops;
	srna->system_idproperties = rna_ID_system_idprops;
	{
	static float rna_Mesh_transform_matrix_default[16] = {
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
	rna_Mesh_transform_matrix_ = {
		{&rna_Mesh_transform_shape_keys, 	nullptr,
		-1, "matrix", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Matrix",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Mesh_transform_matrix_default
	};
	rna_Mesh_transform_shape_keys_ = {
		{nullptr, 	&rna_Mesh_transform_matrix,
		-1, "shape_keys", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Transform Shape Keys",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_transform_matrix, &rna_Mesh_transform_shape_keys};
		func->identifier = "transform";
		func->description = "Transform mesh vertices by a matrix (Warning: inverts normals if matrix is negative)";
		func->call = Mesh_transform_call;
		rna_Mesh_transform_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "flip_normals";
		func->description = "Invert winding of all polygons (clears tessellation, does not handle custom normals)";
		func->call = Mesh_flip_normals_call;
		rna_Mesh_flip_normals_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Mesh_set_sharp_from_angle_angle_ = {
		{nullptr, 	nullptr,
		-1, "angle", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Angle",
		"Angle between faces beyond which edges are marked sharp",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 3.1415927410f, 0.0f, 3.1415927410f, 1.0f, 3, nullptr, nullptr, 3.1415927410f, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_set_sharp_from_angle_angle, &rna_Mesh_set_sharp_from_angle_angle};
		func->identifier = "set_sharp_from_angle";
		func->description = "Reset and fill the \"sharp_edge\" attribute based on the angle of faces neighboring manifold edges";
		func->call = Mesh_set_sharp_from_angle_call;
		rna_Mesh_set_sharp_from_angle_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "split_faces";
		func->description = "Split faces based on the edge angle";
		func->call = Mesh_split_faces_call;
		rna_Mesh_split_faces_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Mesh_calc_tangents_uvmap_ = {
		{nullptr, 	nullptr,
		-1, "uvmap", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Name of the UV map to use for tangent space computation",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_calc_tangents_uvmap, &rna_Mesh_calc_tangents_uvmap};
		func->identifier = "calc_tangents";
		func->flag = 16;
		func->description = "Compute tangents and bitangent signs, to be used together with the custom normals to get a complete tangent space for normal mapping (custom normals are also computed if not yet present)";
		func->call = Mesh_calc_tangents_call;
		rna_Mesh_calc_tangents_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "free_tangents";
		func->description = "Free tangents";
		func->call = Mesh_free_tangents_call;
		rna_Mesh_free_tangents_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "calc_loop_triangles";
		func->description = "Calculate loop triangle tessellation (supports editmode too)";
		func->call = Mesh_calc_loop_triangles_call;
		rna_Mesh_calc_loop_triangles_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Mesh_calc_smooth_groups_use_bitflags_ = {
		{&rna_Mesh_calc_smooth_groups_use_boundary_vertices_for_bitflags, 	nullptr,
		-1, "use_bitflags", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Produce bitflags groups instead of simple numeric values",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Mesh_calc_smooth_groups_use_boundary_vertices_for_bitflags_ = {
		{&rna_Mesh_calc_smooth_groups_poly_groups, 	&rna_Mesh_calc_smooth_groups_use_bitflags,
		-1, "use_boundary_vertices_for_bitflags", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Also consider different smoothgroups sharing only vertices (but without any common edge) as neighbors, preventing them from sharing the same bitflag value. Only effective when ``use_bitflags`` is set. WARNING: Will overflow (run out of available bits) easily with some types of topology, e.g. large fans of sharp edges",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	static int rna_Mesh_calc_smooth_groups_poly_groups_default[1] = {
		0
	};
	rna_Mesh_calc_smooth_groups_poly_groups_ = {
		{&rna_Mesh_calc_smooth_groups_groups, 	&rna_Mesh_calc_smooth_groups_use_boundary_vertices_for_bitflags,
		-1, "poly_groups", 131075, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Smooth Groups",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {1, 0, 0}, 1,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 0, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_Mesh_calc_smooth_groups_poly_groups_default
	};
	rna_Mesh_calc_smooth_groups_groups_ = {
		{nullptr, 	&rna_Mesh_calc_smooth_groups_poly_groups,
		-1, "groups", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "groups",
		"Total number of groups",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_calc_smooth_groups_use_bitflags, &rna_Mesh_calc_smooth_groups_groups};
		func->identifier = "calc_smooth_groups";
		func->description = "Calculate smooth groups from sharp edges";
		func->call = Mesh_calc_smooth_groups_call;
		rna_Mesh_calc_smooth_groups_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Mesh_normals_split_custom_set_normals_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Mesh_normals_split_custom_set_normals_ = {
		{nullptr, 	nullptr,
		-1, "normals", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Normals",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 2, {1, 3, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Mesh_normals_split_custom_set_normals_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_normals_split_custom_set_normals, &rna_Mesh_normals_split_custom_set_normals};
		func->identifier = "normals_split_custom_set";
		func->flag = 16;
		func->description = "Define custom normals of this mesh (use zero-vectors to keep auto ones)";
		func->call = Mesh_normals_split_custom_set_call;
		rna_Mesh_normals_split_custom_set_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static float rna_Mesh_normals_split_custom_set_from_vertices_normals_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_Mesh_normals_split_custom_set_from_vertices_normals_ = {
		{nullptr, 	nullptr,
		-1, "normals", 131075, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Normals",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 2, {1, 3, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 0.0f, -1.0f, 1.0f, 1.0f, 3, nullptr, nullptr, 0.0f, rna_Mesh_normals_split_custom_set_from_vertices_normals_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_normals_split_custom_set_from_vertices_normals, &rna_Mesh_normals_split_custom_set_from_vertices_normals};
		func->identifier = "normals_split_custom_set_from_vertices";
		func->flag = 16;
		func->description = "Define custom normals of this mesh, from vertices\' normals (use zero-vectors to keep auto ones)";
		func->call = Mesh_normals_split_custom_set_from_vertices_call;
		rna_Mesh_normals_split_custom_set_from_vertices_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Mesh_update_calc_edges_ = {
		{&rna_Mesh_update_calc_edges_loose, 	nullptr,
		-1, "calc_edges", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Calculate Edges",
		"Force recalculation of edges",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Mesh_update_calc_edges_loose_ = {
		{nullptr, 	&rna_Mesh_update_calc_edges,
		-1, "calc_edges_loose", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Calculate Loose Edges",
		"Calculate the loose state of each edge",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_update_calc_edges, &rna_Mesh_update_calc_edges_loose};
		func->identifier = "update";
		func->flag = 8;
		func->description = "update";
		func->call = Mesh_update_call;
		rna_Mesh_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update_gpu_tag";
		func->description = "update_gpu_tag";
		func->call = Mesh_update_gpu_tag_call;
		rna_Mesh_update_gpu_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Mesh_unit_test_compare_mesh_ = {
		{&rna_Mesh_unit_test_compare_threshold, 	nullptr,
		-1, "mesh", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Mesh to compare to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mesh
	};
	rna_Mesh_unit_test_compare_threshold_ = {
		{&rna_Mesh_unit_test_compare_result, 	&rna_Mesh_unit_test_compare_mesh,
		-1, "threshold", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Threshold",
		"Comparison tolerance threshold",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0000071526f, nullptr
	};
	rna_Mesh_unit_test_compare_result_ = {
		{nullptr, 	&rna_Mesh_unit_test_compare_threshold,
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
		func->cont.properties = {&rna_Mesh_unit_test_compare_mesh, &rna_Mesh_unit_test_compare_result};
		func->identifier = "unit_test_compare";
		func->description = "unit_test_compare";
		func->call = Mesh_unit_test_compare_call;
		func->c_ret = &rna_Mesh_unit_test_compare_result;
		rna_Mesh_unit_test_compare_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "clear_geometry";
		func->description = "Remove all geometry from the mesh. Note that this does not free shape keys or materials.";
		func->call = Mesh_clear_geometry_call;
		rna_Mesh_clear_geometry_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Mesh_validate_verbose_ = {
		{&rna_Mesh_validate_clean_customdata, 	nullptr,
		-1, "verbose", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Verbose",
		"Output information about the errors found",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_Mesh_validate_clean_customdata_ = {
		{&rna_Mesh_validate_result, 	&rna_Mesh_validate_verbose,
		-1, "clean_customdata", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Clean Custom Data",
		"Deprecated, has no effect",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_Mesh_validate_result_ = {
		{nullptr, 	&rna_Mesh_validate_clean_customdata,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_validate_verbose, &rna_Mesh_validate_result};
		func->identifier = "validate";
		func->description = "Validate geometry, return True when the mesh has had invalid geometry corrected/removed";
		func->call = Mesh_validate_call;
		func->c_ret = &rna_Mesh_validate_result;
		rna_Mesh_validate_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Mesh_validate_material_indices_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_validate_material_indices_result, &rna_Mesh_validate_material_indices_result};
		func->identifier = "validate_material_indices";
		func->description = "Validate material indices of polygons, return True when the mesh has had invalid indices corrected (to default 0)";
		func->call = Mesh_validate_material_indices_call;
		func->c_ret = &rna_Mesh_validate_material_indices_result;
		rna_Mesh_validate_material_indices_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	static int rna_Mesh_count_selected_items_result_default[3] = {
		0,
		0,
		0
	};
	rna_Mesh_count_selected_items_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Result",
		nullptr,
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_Mesh_count_selected_items_result_default
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Mesh_count_selected_items_result, &rna_Mesh_count_selected_items_result};
		func->identifier = "count_selected_items";
		func->description = "Return the number of selected items (vert, edge, face)";
		func->call = Mesh_count_selected_items_call;
		rna_Mesh_count_selected_items_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mesh Vertices */
static CollectionPropertyRNA rna_MeshVertices_rna_properties_;
PropertyRNA &rna_MeshVertices_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshVertices_rna_properties_);

static PointerPropertyRNA rna_MeshVertices_rna_type_;
PropertyRNA &rna_MeshVertices_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshVertices_rna_type_);

static IntPropertyRNA rna_MeshVertices_add_count_;
PropertyRNA &rna_MeshVertices_add_count = reinterpret_cast<PropertyRNA &>(rna_MeshVertices_add_count_);

FunctionRNA *rna_MeshVertices_add_func;
StructRNA *RNA_MeshVertices;
void register_struct_MeshVertices(BlenderRNA &brna)
{
	rna_MeshVertices_rna_properties_ = {
		{&rna_MeshVertices_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshVertices_rna_properties_begin, MeshVertices_rna_properties_next, MeshVertices_rna_properties_end, MeshVertices_rna_properties_get, nullptr, nullptr, MeshVertices_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshVertices_rna_type_ = {
		{nullptr, 	&rna_MeshVertices_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshVertices_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MeshVertices;
	srna->cont.properties = {&rna_MeshVertices_rna_properties, &rna_MeshVertices_rna_type};
	srna->identifier = "MeshVertices";
	srna->flag = 516;
	srna->name = "Mesh Vertices";
	srna->description = "Collection of mesh vertices";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshVertices_rna_properties;
	{
	rna_MeshVertices_add_count_ = {
		{nullptr, 	nullptr,
		-1, "count", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Count",
		"Number of vertices to add",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MeshVertices_add_count, &rna_MeshVertices_add_count};
		func->identifier = "add";
		func->flag = 16;
		func->description = "add";
		func->call = MeshVertices_add_call;
		rna_MeshVertices_add_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mesh Edges */
static CollectionPropertyRNA rna_MeshEdges_rna_properties_;
PropertyRNA &rna_MeshEdges_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshEdges_rna_properties_);

static PointerPropertyRNA rna_MeshEdges_rna_type_;
PropertyRNA &rna_MeshEdges_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshEdges_rna_type_);

static IntPropertyRNA rna_MeshEdges_add_count_;
PropertyRNA &rna_MeshEdges_add_count = reinterpret_cast<PropertyRNA &>(rna_MeshEdges_add_count_);

FunctionRNA *rna_MeshEdges_add_func;
StructRNA *RNA_MeshEdges;
void register_struct_MeshEdges(BlenderRNA &brna)
{
	rna_MeshEdges_rna_properties_ = {
		{&rna_MeshEdges_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdges_rna_properties_begin, MeshEdges_rna_properties_next, MeshEdges_rna_properties_end, MeshEdges_rna_properties_get, nullptr, nullptr, MeshEdges_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshEdges_rna_type_ = {
		{nullptr, 	&rna_MeshEdges_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdges_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MeshEdges;
	srna->cont.properties = {&rna_MeshEdges_rna_properties, &rna_MeshEdges_rna_type};
	srna->identifier = "MeshEdges";
	srna->flag = 516;
	srna->name = "Mesh Edges";
	srna->description = "Collection of mesh edges";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshEdges_rna_properties;
	{
	rna_MeshEdges_add_count_ = {
		{nullptr, 	nullptr,
		-1, "count", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Count",
		"Number of edges to add",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MeshEdges_add_count, &rna_MeshEdges_add_count};
		func->identifier = "add";
		func->flag = 16;
		func->description = "add";
		func->call = MeshEdges_add_call;
		rna_MeshEdges_add_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mesh Loops */
static CollectionPropertyRNA rna_MeshLoops_rna_properties_;
PropertyRNA &rna_MeshLoops_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshLoops_rna_properties_);

static PointerPropertyRNA rna_MeshLoops_rna_type_;
PropertyRNA &rna_MeshLoops_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshLoops_rna_type_);

static IntPropertyRNA rna_MeshLoops_add_count_;
PropertyRNA &rna_MeshLoops_add_count = reinterpret_cast<PropertyRNA &>(rna_MeshLoops_add_count_);

FunctionRNA *rna_MeshLoops_add_func;
StructRNA *RNA_MeshLoops;
void register_struct_MeshLoops(BlenderRNA &brna)
{
	rna_MeshLoops_rna_properties_ = {
		{&rna_MeshLoops_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoops_rna_properties_begin, MeshLoops_rna_properties_next, MeshLoops_rna_properties_end, MeshLoops_rna_properties_get, nullptr, nullptr, MeshLoops_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshLoops_rna_type_ = {
		{nullptr, 	&rna_MeshLoops_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoops_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MeshLoops;
	srna->cont.properties = {&rna_MeshLoops_rna_properties, &rna_MeshLoops_rna_type};
	srna->identifier = "MeshLoops";
	srna->flag = 516;
	srna->name = "Mesh Loops";
	srna->description = "Collection of mesh loops";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshLoops_rna_properties;
	{
	rna_MeshLoops_add_count_ = {
		{nullptr, 	nullptr,
		-1, "count", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Count",
		"Number of loops to add",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MeshLoops_add_count, &rna_MeshLoops_add_count};
		func->identifier = "add";
		func->flag = 16;
		func->description = "add";
		func->call = MeshLoops_add_call;
		rna_MeshLoops_add_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mesh Polygons */
static CollectionPropertyRNA rna_MeshPolygons_rna_properties_;
PropertyRNA &rna_MeshPolygons_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshPolygons_rna_properties_);

static PointerPropertyRNA rna_MeshPolygons_rna_type_;
PropertyRNA &rna_MeshPolygons_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshPolygons_rna_type_);

static IntPropertyRNA rna_MeshPolygons_active_;
PropertyRNA &rna_MeshPolygons_active = reinterpret_cast<PropertyRNA &>(rna_MeshPolygons_active_);

static IntPropertyRNA rna_MeshPolygons_add_count_;
PropertyRNA &rna_MeshPolygons_add_count = reinterpret_cast<PropertyRNA &>(rna_MeshPolygons_add_count_);

FunctionRNA *rna_MeshPolygons_add_func;
StructRNA *RNA_MeshPolygons;
void register_struct_MeshPolygons(BlenderRNA &brna)
{
	rna_MeshPolygons_rna_properties_ = {
		{&rna_MeshPolygons_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygons_rna_properties_begin, MeshPolygons_rna_properties_next, MeshPolygons_rna_properties_end, MeshPolygons_rna_properties_get, nullptr, nullptr, MeshPolygons_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshPolygons_rna_type_ = {
		{&rna_MeshPolygons_active, 	&rna_MeshPolygons_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygons_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MeshPolygons_active_ = {
		{nullptr, 	&rna_MeshPolygons_rna_type,
		-1, "active", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Active Polygon",
		"The active face for this mesh",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(Mesh, act_face), RawPropertyType(0), nullptr},
		MeshPolygons_active_get, MeshPolygons_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MeshPolygons;
	srna->cont.properties = {&rna_MeshPolygons_rna_properties, &rna_MeshPolygons_active};
	srna->identifier = "MeshPolygons";
	srna->flag = 516;
	srna->name = "Mesh Polygons";
	srna->description = "Collection of mesh polygons";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshPolygons_rna_properties;
	{
	rna_MeshPolygons_add_count_ = {
		{nullptr, 	nullptr,
		-1, "count", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Count",
		"Number of polygons to add",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MeshPolygons_add_count, &rna_MeshPolygons_add_count};
		func->identifier = "add";
		func->flag = 16;
		func->description = "add";
		func->call = MeshPolygons_add_call;
		rna_MeshPolygons_add_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mesh Normal Vector */
static CollectionPropertyRNA rna_MeshNormalValue_rna_properties_;
PropertyRNA &rna_MeshNormalValue_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshNormalValue_rna_properties_);

static PointerPropertyRNA rna_MeshNormalValue_rna_type_;
PropertyRNA &rna_MeshNormalValue_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshNormalValue_rna_type_);

static FloatPropertyRNA rna_MeshNormalValue_vector_;
PropertyRNA &rna_MeshNormalValue_vector = reinterpret_cast<PropertyRNA &>(rna_MeshNormalValue_vector_);

StructRNA *RNA_MeshNormalValue;
void register_struct_MeshNormalValue(BlenderRNA &brna)
{
	rna_MeshNormalValue_rna_properties_ = {
		{&rna_MeshNormalValue_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshNormalValue_rna_properties_begin, MeshNormalValue_rna_properties_next, MeshNormalValue_rna_properties_end, MeshNormalValue_rna_properties_get, nullptr, nullptr, MeshNormalValue_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshNormalValue_rna_type_ = {
		{&rna_MeshNormalValue_vector, 	&rna_MeshNormalValue_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshNormalValue_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MeshNormalValue_vector_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshNormalValue_vector_ = {
		{nullptr, 	&rna_MeshNormalValue_rna_type,
		-1, "vector", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vector",
		"3D vector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec3f, x), RawPropertyType(5), nullptr},
		nullptr, nullptr, MeshNormalValue_vector_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshNormalValue_vector_default
	};

	StructRNA *srna = RNA_MeshNormalValue;
	srna->cont.properties = {&rna_MeshNormalValue_rna_properties, &rna_MeshNormalValue_vector};
	srna->identifier = "MeshNormalValue";
	srna->flag = 516;
	srna->name = "Mesh Normal Vector";
	srna->description = "Vector in a mesh normal array";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshNormalValue_rna_properties;
};

/* Mesh Loop Triangles */
static CollectionPropertyRNA rna_MeshLoopTriangles_rna_properties_;
PropertyRNA &rna_MeshLoopTriangles_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangles_rna_properties_);

static PointerPropertyRNA rna_MeshLoopTriangles_rna_type_;
PropertyRNA &rna_MeshLoopTriangles_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangles_rna_type_);

StructRNA *RNA_MeshLoopTriangles;
void register_struct_MeshLoopTriangles(BlenderRNA &brna)
{
	rna_MeshLoopTriangles_rna_properties_ = {
		{&rna_MeshLoopTriangles_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangles_rna_properties_begin, MeshLoopTriangles_rna_properties_next, MeshLoopTriangles_rna_properties_end, MeshLoopTriangles_rna_properties_get, nullptr, nullptr, MeshLoopTriangles_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshLoopTriangles_rna_type_ = {
		{nullptr, 	&rna_MeshLoopTriangles_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangles_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_MeshLoopTriangles;
	srna->cont.properties = {&rna_MeshLoopTriangles_rna_properties, &rna_MeshLoopTriangles_rna_type};
	srna->identifier = "MeshLoopTriangles";
	srna->flag = 516;
	srna->name = "Mesh Loop Triangles";
	srna->description = "Tessellation of mesh polygons into triangles";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshLoopTriangles_rna_properties;
};

/* Read-only Integer */
static CollectionPropertyRNA rna_ReadOnlyInteger_rna_properties_;
PropertyRNA &rna_ReadOnlyInteger_rna_properties = reinterpret_cast<PropertyRNA &>(rna_ReadOnlyInteger_rna_properties_);

static PointerPropertyRNA rna_ReadOnlyInteger_rna_type_;
PropertyRNA &rna_ReadOnlyInteger_rna_type = reinterpret_cast<PropertyRNA &>(rna_ReadOnlyInteger_rna_type_);

static IntPropertyRNA rna_ReadOnlyInteger_value_;
PropertyRNA &rna_ReadOnlyInteger_value = reinterpret_cast<PropertyRNA &>(rna_ReadOnlyInteger_value_);

StructRNA *RNA_ReadOnlyInteger;
void register_struct_ReadOnlyInteger(BlenderRNA &brna)
{
	rna_ReadOnlyInteger_rna_properties_ = {
		{&rna_ReadOnlyInteger_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ReadOnlyInteger_rna_properties_begin, ReadOnlyInteger_rna_properties_next, ReadOnlyInteger_rna_properties_end, ReadOnlyInteger_rna_properties_get, nullptr, nullptr, ReadOnlyInteger_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_ReadOnlyInteger_rna_type_ = {
		{&rna_ReadOnlyInteger_value, 	&rna_ReadOnlyInteger_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		ReadOnlyInteger_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_ReadOnlyInteger_value_ = {
		{nullptr, 	&rna_ReadOnlyInteger_rna_type,
		-1, "value", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MIntProperty, i), RawPropertyType(0), nullptr},
		ReadOnlyInteger_value_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_ReadOnlyInteger;
	srna->cont.properties = {&rna_ReadOnlyInteger_rna_properties, &rna_ReadOnlyInteger_value};
	srna->identifier = "ReadOnlyInteger";
	srna->flag = 516;
	srna->name = "Read-only Integer";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_ReadOnlyInteger_rna_properties;
};

/* UV Map Layers */
static CollectionPropertyRNA rna_UVLoopLayers_rna_properties_;
PropertyRNA &rna_UVLoopLayers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_rna_properties_);

static PointerPropertyRNA rna_UVLoopLayers_rna_type_;
PropertyRNA &rna_UVLoopLayers_rna_type = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_rna_type_);

static PointerPropertyRNA rna_UVLoopLayers_active_;
PropertyRNA &rna_UVLoopLayers_active = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_active_);

static IntPropertyRNA rna_UVLoopLayers_active_index_;
PropertyRNA &rna_UVLoopLayers_active_index = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_active_index_);

static PointerPropertyRNA rna_UVLoopLayers_active_render_;
PropertyRNA &rna_UVLoopLayers_active_render = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_active_render_);

static IntPropertyRNA rna_UVLoopLayers_active_render_index_;
PropertyRNA &rna_UVLoopLayers_active_render_index = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_active_render_index_);

static StringPropertyRNA rna_UVLoopLayers_new_name_;
PropertyRNA &rna_UVLoopLayers_new_name = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_new_name_);

static BoolPropertyRNA rna_UVLoopLayers_new_do_init_;
PropertyRNA &rna_UVLoopLayers_new_do_init = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_new_do_init_);

static PointerPropertyRNA rna_UVLoopLayers_new_layer_;
PropertyRNA &rna_UVLoopLayers_new_layer = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_new_layer_);

FunctionRNA *rna_UVLoopLayers_new_func;
static PointerPropertyRNA rna_UVLoopLayers_remove_layer_;
PropertyRNA &rna_UVLoopLayers_remove_layer = reinterpret_cast<PropertyRNA &>(rna_UVLoopLayers_remove_layer_);

FunctionRNA *rna_UVLoopLayers_remove_func;
StructRNA *RNA_UVLoopLayers;
void register_struct_UVLoopLayers(BlenderRNA &brna)
{
	rna_UVLoopLayers_rna_properties_ = {
		{&rna_UVLoopLayers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UVLoopLayers_rna_properties_begin, UVLoopLayers_rna_properties_next, UVLoopLayers_rna_properties_end, UVLoopLayers_rna_properties_get, nullptr, nullptr, UVLoopLayers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_UVLoopLayers_rna_type_ = {
		{&rna_UVLoopLayers_active, 	&rna_UVLoopLayers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UVLoopLayers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_UVLoopLayers_active_ = {
		{&rna_UVLoopLayers_active_index, 	&rna_UVLoopLayers_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active UV Map Layer",
		"Active UV Map layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UVLoopLayers_active_get, UVLoopLayers_active_set, nullptr, nullptr,RNA_MeshUVLoopLayer
	};

	rna_UVLoopLayers_active_index_ = {
		{&rna_UVLoopLayers_active_render, 	&rna_UVLoopLayers_active,
		-1, "active_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active UV Map Index",
		"Active UV map index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UVLoopLayers_active_index_get, UVLoopLayers_active_index_set, nullptr, nullptr, rna_Mesh_uv_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_UVLoopLayers_active_render_ = {
		{&rna_UVLoopLayers_active_render_index, 	&rna_UVLoopLayers_active_index,
		-1, "active_render", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Render UV Map Layer",
		"Active Render UV Map layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UVLoopLayers_active_render_get, UVLoopLayers_active_render_set, nullptr, nullptr,RNA_MeshUVLoopLayer
	};

	rna_UVLoopLayers_active_render_index_ = {
		{nullptr, 	&rna_UVLoopLayers_active_render,
		-1, "active_render_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Render UV Map Index",
		"Active Render UV map index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		UVLoopLayers_active_render_index_get, UVLoopLayers_active_render_index_set, nullptr, nullptr, rna_Mesh_uv_layer_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_UVLoopLayers;
	srna->cont.properties = {&rna_UVLoopLayers_rna_properties, &rna_UVLoopLayers_active_render_index};
	srna->identifier = "UVLoopLayers";
	srna->flag = 516;
	srna->name = "UV Map Layers";
	srna->description = "Collection of UV map layers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_UVLoopLayers_rna_properties;
	{
	rna_UVLoopLayers_new_name_ = {
		{&rna_UVLoopLayers_new_do_init, 	nullptr,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"UV map name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "UVMap"
	};
	rna_UVLoopLayers_new_do_init_ = {
		{&rna_UVLoopLayers_new_layer, 	&rna_UVLoopLayers_new_name,
		-1, "do_init", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Whether new layer\'s data should be initialized by copying current active one, or if none is active, with a default UVmap",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_UVLoopLayers_new_layer_ = {
		{nullptr, 	&rna_UVLoopLayers_new_do_init,
		-1, "layer", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MeshUVLoopLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_UVLoopLayers_new_name, &rna_UVLoopLayers_new_layer};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add a UV map layer to Mesh";
		func->call = UVLoopLayers_new_call;
		func->c_ret = &rna_UVLoopLayers_new_layer;
		rna_UVLoopLayers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_UVLoopLayers_remove_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 8650752, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MeshUVLoopLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_UVLoopLayers_remove_layer, &rna_UVLoopLayers_remove_layer};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a UV map layer";
		func->call = UVLoopLayers_remove_call;
		rna_UVLoopLayers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Loop Colors */
static CollectionPropertyRNA rna_LoopColors_rna_properties_;
PropertyRNA &rna_LoopColors_rna_properties = reinterpret_cast<PropertyRNA &>(rna_LoopColors_rna_properties_);

static PointerPropertyRNA rna_LoopColors_rna_type_;
PropertyRNA &rna_LoopColors_rna_type = reinterpret_cast<PropertyRNA &>(rna_LoopColors_rna_type_);

static PointerPropertyRNA rna_LoopColors_active_;
PropertyRNA &rna_LoopColors_active = reinterpret_cast<PropertyRNA &>(rna_LoopColors_active_);

static IntPropertyRNA rna_LoopColors_active_index_;
PropertyRNA &rna_LoopColors_active_index = reinterpret_cast<PropertyRNA &>(rna_LoopColors_active_index_);

static StringPropertyRNA rna_LoopColors_new_name_;
PropertyRNA &rna_LoopColors_new_name = reinterpret_cast<PropertyRNA &>(rna_LoopColors_new_name_);

static BoolPropertyRNA rna_LoopColors_new_do_init_;
PropertyRNA &rna_LoopColors_new_do_init = reinterpret_cast<PropertyRNA &>(rna_LoopColors_new_do_init_);

static PointerPropertyRNA rna_LoopColors_new_layer_;
PropertyRNA &rna_LoopColors_new_layer = reinterpret_cast<PropertyRNA &>(rna_LoopColors_new_layer_);

FunctionRNA *rna_LoopColors_new_func;
static PointerPropertyRNA rna_LoopColors_remove_layer_;
PropertyRNA &rna_LoopColors_remove_layer = reinterpret_cast<PropertyRNA &>(rna_LoopColors_remove_layer_);

FunctionRNA *rna_LoopColors_remove_func;
StructRNA *RNA_LoopColors;
void register_struct_LoopColors(BlenderRNA &brna)
{
	rna_LoopColors_rna_properties_ = {
		{&rna_LoopColors_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LoopColors_rna_properties_begin, LoopColors_rna_properties_next, LoopColors_rna_properties_end, LoopColors_rna_properties_get, nullptr, nullptr, LoopColors_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_LoopColors_rna_type_ = {
		{&rna_LoopColors_active, 	&rna_LoopColors_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LoopColors_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_LoopColors_active_ = {
		{&rna_LoopColors_active_index, 	&rna_LoopColors_rna_type,
		-1, "active", 41943041, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Vertex Color Layer",
		"Active vertex color layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_edit_active_color, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LoopColors_active_get, LoopColors_active_set, nullptr, nullptr,RNA_MeshLoopColorLayer
	};

	rna_LoopColors_active_index_ = {
		{nullptr, 	&rna_LoopColors_active,
		-1, "active_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Vertex Color Index",
		"Active vertex color index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_edit_active_color, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		LoopColors_active_index_get, LoopColors_active_index_set, nullptr, nullptr, rna_Mesh_vertex_color_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_LoopColors;
	srna->cont.properties = {&rna_LoopColors_rna_properties, &rna_LoopColors_active_index};
	srna->identifier = "LoopColors";
	srna->flag = 516;
	srna->name = "Loop Colors";
	srna->description = "Collection of vertex colors";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_LoopColors_rna_properties;
	{
	rna_LoopColors_new_name_ = {
		{&rna_LoopColors_new_do_init, 	nullptr,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Vertex color name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Col"
	};
	rna_LoopColors_new_do_init_ = {
		{&rna_LoopColors_new_layer, 	&rna_LoopColors_new_name,
		-1, "do_init", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Whether new layer\'s data should be initialized by copying current active one",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_LoopColors_new_layer_ = {
		{nullptr, 	&rna_LoopColors_new_do_init,
		-1, "layer", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"The newly created layer",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MeshLoopColorLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_LoopColors_new_name, &rna_LoopColors_new_layer};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add a vertex color layer to Mesh";
		func->call = LoopColors_new_call;
		func->c_ret = &rna_LoopColors_new_layer;
		rna_LoopColors_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_LoopColors_remove_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 262144, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"The layer to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MeshLoopColorLayer
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_LoopColors_remove_layer, &rna_LoopColors_remove_layer};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a vertex color layer";
		func->call = LoopColors_remove_call;
		rna_LoopColors_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mesh Skin Vertex Layer */
static CollectionPropertyRNA rna_MeshSkinVertexLayer_rna_properties_;
PropertyRNA &rna_MeshSkinVertexLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertexLayer_rna_properties_);

static PointerPropertyRNA rna_MeshSkinVertexLayer_rna_type_;
PropertyRNA &rna_MeshSkinVertexLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertexLayer_rna_type_);

static StringPropertyRNA rna_MeshSkinVertexLayer_name_;
PropertyRNA &rna_MeshSkinVertexLayer_name = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertexLayer_name_);

static CollectionPropertyRNA rna_MeshSkinVertexLayer_data_;
PropertyRNA &rna_MeshSkinVertexLayer_data = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertexLayer_data_);

StructRNA *RNA_MeshSkinVertexLayer;
void register_struct_MeshSkinVertexLayer(BlenderRNA &brna)
{
	rna_MeshSkinVertexLayer_rna_properties_ = {
		{&rna_MeshSkinVertexLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshSkinVertexLayer_rna_properties_begin, MeshSkinVertexLayer_rna_properties_next, MeshSkinVertexLayer_rna_properties_end, MeshSkinVertexLayer_rna_properties_get, nullptr, nullptr, MeshSkinVertexLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshSkinVertexLayer_rna_type_ = {
		{&rna_MeshSkinVertexLayer_name, 	&rna_MeshSkinVertexLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshSkinVertexLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MeshSkinVertexLayer_name_ = {
		{&rna_MeshSkinVertexLayer_data, 	&rna_MeshSkinVertexLayer_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of skin layer",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {68, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshSkinVertexLayer_name_get, MeshSkinVertexLayer_name_length, MeshSkinVertexLayer_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_MeshSkinVertexLayer_data_ = {
		{nullptr, 	&rna_MeshSkinVertexLayer_name,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshSkinVertexLayer_data_begin, MeshSkinVertexLayer_data_next, MeshSkinVertexLayer_data_end, MeshSkinVertexLayer_data_get, MeshSkinVertexLayer_data_length, MeshSkinVertexLayer_data_lookup_int, nullptr, nullptr, RNA_MeshSkinVertex
	};

	StructRNA *srna = RNA_MeshSkinVertexLayer;
	srna->cont.properties = {&rna_MeshSkinVertexLayer_rna_properties, &rna_MeshSkinVertexLayer_data};
	srna->identifier = "MeshSkinVertexLayer";
	srna->flag = 516;
	srna->name = "Mesh Skin Vertex Layer";
	srna->description = "Per-vertex skin data for use with the Skin modifier";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_MeshSkinVertexLayer_name;
	srna->iteratorproperty = &rna_MeshSkinVertexLayer_rna_properties;
	srna->path = rna_MeshSkinVertexLayer_path;
};

/* Skin Vertex */
static CollectionPropertyRNA rna_MeshSkinVertex_rna_properties_;
PropertyRNA &rna_MeshSkinVertex_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertex_rna_properties_);

static PointerPropertyRNA rna_MeshSkinVertex_rna_type_;
PropertyRNA &rna_MeshSkinVertex_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertex_rna_type_);

static FloatPropertyRNA rna_MeshSkinVertex_radius_;
PropertyRNA &rna_MeshSkinVertex_radius = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertex_radius_);

static BoolPropertyRNA rna_MeshSkinVertex_use_root_;
PropertyRNA &rna_MeshSkinVertex_use_root = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertex_use_root_);

static BoolPropertyRNA rna_MeshSkinVertex_use_loose_;
PropertyRNA &rna_MeshSkinVertex_use_loose = reinterpret_cast<PropertyRNA &>(rna_MeshSkinVertex_use_loose_);

StructRNA *RNA_MeshSkinVertex;
void register_struct_MeshSkinVertex(BlenderRNA &brna)
{
	rna_MeshSkinVertex_rna_properties_ = {
		{&rna_MeshSkinVertex_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshSkinVertex_rna_properties_begin, MeshSkinVertex_rna_properties_next, MeshSkinVertex_rna_properties_end, MeshSkinVertex_rna_properties_get, nullptr, nullptr, MeshSkinVertex_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshSkinVertex_rna_type_ = {
		{&rna_MeshSkinVertex_radius, 	&rna_MeshSkinVertex_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshSkinVertex_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MeshSkinVertex_radius_default[2] = {
		0.0f,
		0.0f
	};
	rna_MeshSkinVertex_radius_ = {
		{&rna_MeshSkinVertex_use_root, 	&rna_MeshSkinVertex_rna_type,
		-1, "radius", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Radius",
		"Radius of the skin",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MVertSkin, radius), RawPropertyType(5), nullptr},
		nullptr, nullptr, MeshSkinVertex_radius_get, MeshSkinVertex_radius_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0010000000f, 100.0f, 0.0f, FLT_MAX, 1.0f, 3, nullptr, nullptr, 0.0f, rna_MeshSkinVertex_radius_default
	};

	rna_MeshSkinVertex_use_root_ = {
		{&rna_MeshSkinVertex_use_loose, 	&rna_MeshSkinVertex_radius,
		-1, "use_root", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Root",
		"Vertex is a root for rotation calculations and armature generation, setting this flag does not clear other roots in the same mesh island",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshSkinVertex_use_root_get, MeshSkinVertex_use_root_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshSkinVertex_use_loose_ = {
		{nullptr, 	&rna_MeshSkinVertex_use_root,
		-1, "use_loose", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Loose",
		"If vertex has multiple adjacent edges, it is hulled to them directly",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshSkinVertex_use_loose_get, MeshSkinVertex_use_loose_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MeshSkinVertex;
	srna->cont.properties = {&rna_MeshSkinVertex_rna_properties, &rna_MeshSkinVertex_use_loose};
	srna->identifier = "MeshSkinVertex";
	srna->flag = 516;
	srna->name = "Skin Vertex";
	srna->description = "Per-vertex skin data for use with the Skin modifier";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshSkinVertex_rna_properties;
	srna->path = rna_MeshSkinVertex_path;
};

/* Mesh Vertex */
static CollectionPropertyRNA rna_MeshVertex_rna_properties_;
PropertyRNA &rna_MeshVertex_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_rna_properties_);

static PointerPropertyRNA rna_MeshVertex_rna_type_;
PropertyRNA &rna_MeshVertex_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_rna_type_);

static FloatPropertyRNA rna_MeshVertex_co_;
PropertyRNA &rna_MeshVertex_co = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_co_);

static FloatPropertyRNA rna_MeshVertex_normal_;
PropertyRNA &rna_MeshVertex_normal = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_normal_);

static BoolPropertyRNA rna_MeshVertex_select_;
PropertyRNA &rna_MeshVertex_select = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_select_);

static BoolPropertyRNA rna_MeshVertex_hide_;
PropertyRNA &rna_MeshVertex_hide = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_hide_);

static CollectionPropertyRNA rna_MeshVertex_groups_;
PropertyRNA &rna_MeshVertex_groups = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_groups_);

static IntPropertyRNA rna_MeshVertex_index_;
PropertyRNA &rna_MeshVertex_index = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_index_);

static FloatPropertyRNA rna_MeshVertex_undeformed_co_;
PropertyRNA &rna_MeshVertex_undeformed_co = reinterpret_cast<PropertyRNA &>(rna_MeshVertex_undeformed_co_);

StructRNA *RNA_MeshVertex;
void register_struct_MeshVertex(BlenderRNA &brna)
{
	rna_MeshVertex_rna_properties_ = {
		{&rna_MeshVertex_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshVertex_rna_properties_begin, MeshVertex_rna_properties_next, MeshVertex_rna_properties_end, MeshVertex_rna_properties_get, nullptr, nullptr, MeshVertex_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshVertex_rna_type_ = {
		{&rna_MeshVertex_co, 	&rna_MeshVertex_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshVertex_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MeshVertex_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshVertex_co_ = {
		{&rna_MeshVertex_normal, 	&rna_MeshVertex_rna_type,
		-1, "co", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Position",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		rna_Mesh_update_positions_tag, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshVertex_co_get, MeshVertex_co_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshVertex_co_default
	};

	static float rna_MeshVertex_normal_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshVertex_normal_ = {
		{&rna_MeshVertex_select, 	&rna_MeshVertex_co,
		-1, "normal", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normal",
		"Vertex Normal",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshVertex_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshVertex_normal_default
	};

	rna_MeshVertex_select_ = {
		{&rna_MeshVertex_hide, 	&rna_MeshVertex_normal,
		-1, "select", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_select, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshVertex_select_get, MeshVertex_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshVertex_hide_ = {
		{&rna_MeshVertex_groups, 	&rna_MeshVertex_select,
		-1, "hide", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_select, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshVertex_hide_get, MeshVertex_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshVertex_groups_ = {
		{&rna_MeshVertex_index, 	&rna_MeshVertex_hide,
		-1, "groups", 0, 0, 0, 8, 0, PropertyPathTemplateType(0), "Groups",
		"Weights for the vertex groups this vertex is member of",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshVertex_groups_begin, MeshVertex_groups_next, MeshVertex_groups_end, MeshVertex_groups_get, nullptr, MeshVertex_groups_lookup_int, nullptr, nullptr, RNA_VertexGroupElement
	};

	rna_MeshVertex_index_ = {
		{&rna_MeshVertex_undeformed_co, 	&rna_MeshVertex_groups,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this vertex",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshVertex_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_MeshVertex_undeformed_co_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshVertex_undeformed_co_ = {
		{nullptr, 	&rna_MeshVertex_index,
		-1, "undeformed_co", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Undeformed Location",
		"For meshes with modifiers applied, the coordinate of the vertex with no deforming modifiers applied, as used for generated texture coordinates",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshVertex_undeformed_co_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshVertex_undeformed_co_default
	};

	StructRNA *srna = RNA_MeshVertex;
	srna->cont.properties = {&rna_MeshVertex_rna_properties, &rna_MeshVertex_undeformed_co};
	srna->identifier = "MeshVertex";
	srna->flag = 516;
	srna->name = "Mesh Vertex";
	srna->description = "Vertex in a Mesh data-block";
	srna->translation_context = "*";
	srna->icon = 586;
	srna->iteratorproperty = &rna_MeshVertex_rna_properties;
	srna->path = rna_MeshVertex_path;
};

/* Vertex Group Element */
static CollectionPropertyRNA rna_VertexGroupElement_rna_properties_;
PropertyRNA &rna_VertexGroupElement_rna_properties = reinterpret_cast<PropertyRNA &>(rna_VertexGroupElement_rna_properties_);

static PointerPropertyRNA rna_VertexGroupElement_rna_type_;
PropertyRNA &rna_VertexGroupElement_rna_type = reinterpret_cast<PropertyRNA &>(rna_VertexGroupElement_rna_type_);

static IntPropertyRNA rna_VertexGroupElement_group_;
PropertyRNA &rna_VertexGroupElement_group = reinterpret_cast<PropertyRNA &>(rna_VertexGroupElement_group_);

static FloatPropertyRNA rna_VertexGroupElement_weight_;
PropertyRNA &rna_VertexGroupElement_weight = reinterpret_cast<PropertyRNA &>(rna_VertexGroupElement_weight_);

StructRNA *RNA_VertexGroupElement;
void register_struct_VertexGroupElement(BlenderRNA &brna)
{
	rna_VertexGroupElement_rna_properties_ = {
		{&rna_VertexGroupElement_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroupElement_rna_properties_begin, VertexGroupElement_rna_properties_next, VertexGroupElement_rna_properties_end, VertexGroupElement_rna_properties_get, nullptr, nullptr, VertexGroupElement_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_VertexGroupElement_rna_type_ = {
		{&rna_VertexGroupElement_group, 	&rna_VertexGroupElement_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		VertexGroupElement_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_VertexGroupElement_group_ = {
		{&rna_VertexGroupElement_weight, 	&rna_VertexGroupElement_rna_type,
		-1, "group", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Group Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MDeformWeight, def_nr), RawPropertyType(0), nullptr},
		VertexGroupElement_group_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_VertexGroupElement_weight_ = {
		{nullptr, 	&rna_VertexGroupElement_group,
		-1, "weight", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Weight",
		"Vertex Weight",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_edit_weight, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MDeformWeight, weight), RawPropertyType(5), nullptr},
		VertexGroupElement_weight_get, VertexGroupElement_weight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_VertexGroupElement;
	srna->cont.properties = {&rna_VertexGroupElement_rna_properties, &rna_VertexGroupElement_weight};
	srna->identifier = "VertexGroupElement";
	srna->flag = 516;
	srna->name = "Vertex Group Element";
	srna->description = "Weight value of a vertex in a vertex group";
	srna->translation_context = "*";
	srna->icon = 214;
	srna->iteratorproperty = &rna_VertexGroupElement_rna_properties;
	srna->path = rna_VertexGroupElement_path;
};

/* Mesh Edge */
static CollectionPropertyRNA rna_MeshEdge_rna_properties_;
PropertyRNA &rna_MeshEdge_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_rna_properties_);

static PointerPropertyRNA rna_MeshEdge_rna_type_;
PropertyRNA &rna_MeshEdge_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_rna_type_);

static IntPropertyRNA rna_MeshEdge_vertices_;
PropertyRNA &rna_MeshEdge_vertices = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_vertices_);

static BoolPropertyRNA rna_MeshEdge_select_;
PropertyRNA &rna_MeshEdge_select = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_select_);

static BoolPropertyRNA rna_MeshEdge_hide_;
PropertyRNA &rna_MeshEdge_hide = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_hide_);

static BoolPropertyRNA rna_MeshEdge_use_seam_;
PropertyRNA &rna_MeshEdge_use_seam = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_use_seam_);

static BoolPropertyRNA rna_MeshEdge_use_edge_sharp_;
PropertyRNA &rna_MeshEdge_use_edge_sharp = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_use_edge_sharp_);

static BoolPropertyRNA rna_MeshEdge_is_loose_;
PropertyRNA &rna_MeshEdge_is_loose = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_is_loose_);

static IntPropertyRNA rna_MeshEdge_index_;
PropertyRNA &rna_MeshEdge_index = reinterpret_cast<PropertyRNA &>(rna_MeshEdge_index_);

StructRNA *RNA_MeshEdge;
void register_struct_MeshEdge(BlenderRNA &brna)
{
	rna_MeshEdge_rna_properties_ = {
		{&rna_MeshEdge_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdge_rna_properties_begin, MeshEdge_rna_properties_next, MeshEdge_rna_properties_end, MeshEdge_rna_properties_get, nullptr, nullptr, MeshEdge_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshEdge_rna_type_ = {
		{&rna_MeshEdge_vertices, 	&rna_MeshEdge_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdge_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static int rna_MeshEdge_vertices_default[2] = {
		0,
		0
	};
	rna_MeshEdge_vertices_ = {
		{&rna_MeshEdge_select, 	&rna_MeshEdge_rna_type,
		-1, "vertices", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Vertices",
		"Vertex indices",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec2i, x), RawPropertyType(0), nullptr},
		nullptr, nullptr, MeshEdge_vertices_get, MeshEdge_vertices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_MeshEdge_vertices_default
	};

	rna_MeshEdge_select_ = {
		{&rna_MeshEdge_hide, 	&rna_MeshEdge_vertices,
		-1, "select", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_select, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdge_select_get, MeshEdge_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshEdge_hide_ = {
		{&rna_MeshEdge_use_seam, 	&rna_MeshEdge_select,
		-1, "hide", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_select, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdge_hide_get, MeshEdge_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshEdge_use_seam_ = {
		{&rna_MeshEdge_use_edge_sharp, 	&rna_MeshEdge_hide,
		-1, "use_seam", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Seam",
		"Seam edge for UV unwrapping",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_select, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdge_use_seam_get, MeshEdge_use_seam_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshEdge_use_edge_sharp_ = {
		{&rna_MeshEdge_is_loose, 	&rna_MeshEdge_use_seam,
		-1, "use_edge_sharp", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sharp",
		"Sharp edge for shading",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdge_use_edge_sharp_get, MeshEdge_use_edge_sharp_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshEdge_is_loose_ = {
		{&rna_MeshEdge_index, 	&rna_MeshEdge_use_edge_sharp,
		-1, "is_loose", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Loose",
		"Edge is not connected to any faces",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdge_is_loose_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshEdge_index_ = {
		{nullptr, 	&rna_MeshEdge_is_loose,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this edge",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshEdge_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MeshEdge;
	srna->cont.properties = {&rna_MeshEdge_rna_properties, &rna_MeshEdge_index};
	srna->identifier = "MeshEdge";
	srna->flag = 516;
	srna->name = "Mesh Edge";
	srna->description = "Edge in a Mesh data-block";
	srna->translation_context = "*";
	srna->icon = 559;
	srna->iteratorproperty = &rna_MeshEdge_rna_properties;
	srna->path = rna_MeshEdge_path;
};

/* Mesh Loop Triangle */
static CollectionPropertyRNA rna_MeshLoopTriangle_rna_properties_;
PropertyRNA &rna_MeshLoopTriangle_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_rna_properties_);

static PointerPropertyRNA rna_MeshLoopTriangle_rna_type_;
PropertyRNA &rna_MeshLoopTriangle_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_rna_type_);

static IntPropertyRNA rna_MeshLoopTriangle_vertices_;
PropertyRNA &rna_MeshLoopTriangle_vertices = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_vertices_);

static IntPropertyRNA rna_MeshLoopTriangle_loops_;
PropertyRNA &rna_MeshLoopTriangle_loops = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_loops_);

static IntPropertyRNA rna_MeshLoopTriangle_polygon_index_;
PropertyRNA &rna_MeshLoopTriangle_polygon_index = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_polygon_index_);

static FloatPropertyRNA rna_MeshLoopTriangle_normal_;
PropertyRNA &rna_MeshLoopTriangle_normal = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_normal_);

static FloatPropertyRNA rna_MeshLoopTriangle_split_normals_;
PropertyRNA &rna_MeshLoopTriangle_split_normals = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_split_normals_);

static FloatPropertyRNA rna_MeshLoopTriangle_area_;
PropertyRNA &rna_MeshLoopTriangle_area = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_area_);

static IntPropertyRNA rna_MeshLoopTriangle_index_;
PropertyRNA &rna_MeshLoopTriangle_index = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_index_);

static IntPropertyRNA rna_MeshLoopTriangle_material_index_;
PropertyRNA &rna_MeshLoopTriangle_material_index = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_material_index_);

static BoolPropertyRNA rna_MeshLoopTriangle_use_smooth_;
PropertyRNA &rna_MeshLoopTriangle_use_smooth = reinterpret_cast<PropertyRNA &>(rna_MeshLoopTriangle_use_smooth_);

StructRNA *RNA_MeshLoopTriangle;
void register_struct_MeshLoopTriangle(BlenderRNA &brna)
{
	rna_MeshLoopTriangle_rna_properties_ = {
		{&rna_MeshLoopTriangle_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangle_rna_properties_begin, MeshLoopTriangle_rna_properties_next, MeshLoopTriangle_rna_properties_end, MeshLoopTriangle_rna_properties_get, nullptr, nullptr, MeshLoopTriangle_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshLoopTriangle_rna_type_ = {
		{&rna_MeshLoopTriangle_vertices, 	&rna_MeshLoopTriangle_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangle_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static int rna_MeshLoopTriangle_vertices_default[3] = {
		0,
		0,
		0
	};
	rna_MeshLoopTriangle_vertices_ = {
		{&rna_MeshLoopTriangle_loops, 	&rna_MeshLoopTriangle_rna_type,
		-1, "vertices", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertices",
		"Indices of triangle vertices",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshLoopTriangle_vertices_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_MeshLoopTriangle_vertices_default
	};

	static int rna_MeshLoopTriangle_loops_default[3] = {
		0,
		0,
		0
	};
	rna_MeshLoopTriangle_loops_ = {
		{&rna_MeshLoopTriangle_polygon_index, 	&rna_MeshLoopTriangle_vertices,
		-1, "loops", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Loops",
		"Indices of mesh loops that make up the triangle",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(vec3i, x), RawPropertyType(0), nullptr},
		nullptr, nullptr, MeshLoopTriangle_loops_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_MeshLoopTriangle_loops_default
	};

	rna_MeshLoopTriangle_polygon_index_ = {
		{&rna_MeshLoopTriangle_normal, 	&rna_MeshLoopTriangle_loops,
		-1, "polygon_index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Polygon",
		"Index of mesh face that the triangle is a part of",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangle_polygon_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_MeshLoopTriangle_normal_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshLoopTriangle_normal_ = {
		{&rna_MeshLoopTriangle_split_normals, 	&rna_MeshLoopTriangle_polygon_index,
		-1, "normal", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Triangle Normal",
		"Local space unit length normal vector for this triangle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshLoopTriangle_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshLoopTriangle_normal_default
	};

	static float rna_MeshLoopTriangle_split_normals_default[9] = {
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
	rna_MeshLoopTriangle_split_normals_ = {
		{&rna_MeshLoopTriangle_area, 	&rna_MeshLoopTriangle_normal,
		-1, "split_normals", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Custom Normals",
		"Local space unit length custom normal vectors of the face corners of this triangle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 2, {3, 3, 0}, 9,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshLoopTriangle_split_normals_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshLoopTriangle_split_normals_default
	};

	rna_MeshLoopTriangle_area_ = {
		{&rna_MeshLoopTriangle_index, 	&rna_MeshLoopTriangle_split_normals,
		-1, "area", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Triangle Area",
		"Area of this triangle",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangle_area_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MeshLoopTriangle_index_ = {
		{&rna_MeshLoopTriangle_material_index, 	&rna_MeshLoopTriangle_area,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this loop triangle",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangle_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MeshLoopTriangle_material_index_ = {
		{&rna_MeshLoopTriangle_use_smooth, 	&rna_MeshLoopTriangle_index,
		-1, "material_index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material Index",
		"Material slot index of this triangle",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangle_material_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MeshLoopTriangle_use_smooth_ = {
		{nullptr, 	&rna_MeshLoopTriangle_material_index,
		-1, "use_smooth", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Smooth",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopTriangle_use_smooth_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MeshLoopTriangle;
	srna->cont.properties = {&rna_MeshLoopTriangle_rna_properties, &rna_MeshLoopTriangle_use_smooth};
	srna->identifier = "MeshLoopTriangle";
	srna->flag = 516;
	srna->name = "Mesh Loop Triangle";
	srna->description = "Tessellated triangle in a Mesh data-block";
	srna->translation_context = "*";
	srna->icon = 565;
	srna->iteratorproperty = &rna_MeshLoopTriangle_rna_properties;
	srna->path = rna_MeshLoopTriangle_path;
};

/* Mesh Loop */
static CollectionPropertyRNA rna_MeshLoop_rna_properties_;
PropertyRNA &rna_MeshLoop_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_rna_properties_);

static PointerPropertyRNA rna_MeshLoop_rna_type_;
PropertyRNA &rna_MeshLoop_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_rna_type_);

static IntPropertyRNA rna_MeshLoop_vertex_index_;
PropertyRNA &rna_MeshLoop_vertex_index = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_vertex_index_);

static IntPropertyRNA rna_MeshLoop_edge_index_;
PropertyRNA &rna_MeshLoop_edge_index = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_edge_index_);

static IntPropertyRNA rna_MeshLoop_index_;
PropertyRNA &rna_MeshLoop_index = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_index_);

static FloatPropertyRNA rna_MeshLoop_normal_;
PropertyRNA &rna_MeshLoop_normal = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_normal_);

static FloatPropertyRNA rna_MeshLoop_tangent_;
PropertyRNA &rna_MeshLoop_tangent = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_tangent_);

static FloatPropertyRNA rna_MeshLoop_bitangent_sign_;
PropertyRNA &rna_MeshLoop_bitangent_sign = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_bitangent_sign_);

static FloatPropertyRNA rna_MeshLoop_bitangent_;
PropertyRNA &rna_MeshLoop_bitangent = reinterpret_cast<PropertyRNA &>(rna_MeshLoop_bitangent_);

StructRNA *RNA_MeshLoop;
void register_struct_MeshLoop(BlenderRNA &brna)
{
	rna_MeshLoop_rna_properties_ = {
		{&rna_MeshLoop_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoop_rna_properties_begin, MeshLoop_rna_properties_next, MeshLoop_rna_properties_end, MeshLoop_rna_properties_get, nullptr, nullptr, MeshLoop_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshLoop_rna_type_ = {
		{&rna_MeshLoop_vertex_index, 	&rna_MeshLoop_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoop_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MeshLoop_vertex_index_ = {
		{&rna_MeshLoop_edge_index, 	&rna_MeshLoop_rna_type,
		-1, "vertex_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertex",
		"Vertex index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoop_vertex_index_get, MeshLoop_vertex_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MeshLoop_edge_index_ = {
		{&rna_MeshLoop_index, 	&rna_MeshLoop_vertex_index,
		-1, "edge_index", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Edge",
		"Edge index",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoop_edge_index_get, MeshLoop_edge_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MeshLoop_index_ = {
		{&rna_MeshLoop_normal, 	&rna_MeshLoop_edge_index,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this loop",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoop_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_MeshLoop_normal_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshLoop_normal_ = {
		{&rna_MeshLoop_tangent, 	&rna_MeshLoop_index,
		-1, "normal", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Normal",
		"The normal direction of the face corner, taking into account sharp faces, sharp edges, and custom normal data",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshLoop_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshLoop_normal_default
	};

	static float rna_MeshLoop_tangent_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshLoop_tangent_ = {
		{&rna_MeshLoop_bitangent_sign, 	&rna_MeshLoop_normal,
		-1, "tangent", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tangent",
		"Local space unit length tangent vector of this vertex for this face (must be computed beforehand using calc_tangents)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshLoop_tangent_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshLoop_tangent_default
	};

	rna_MeshLoop_bitangent_sign_ = {
		{&rna_MeshLoop_bitangent, 	&rna_MeshLoop_tangent,
		-1, "bitangent_sign", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bitangent Sign",
		"Sign of the bitangent vector of this vertex for this face (must be computed beforehand using calc_tangents, bitangent = bitangent_sign * cross(normal, tangent))",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoop_bitangent_sign_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	static float rna_MeshLoop_bitangent_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshLoop_bitangent_ = {
		{nullptr, 	&rna_MeshLoop_bitangent_sign,
		-1, "bitangent", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Bitangent",
		"Bitangent vector of this vertex for this face (must be computed beforehand using calc_tangents, use it only if really needed, slower access than bitangent_sign)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshLoop_bitangent_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshLoop_bitangent_default
	};

	StructRNA *srna = RNA_MeshLoop;
	srna->cont.properties = {&rna_MeshLoop_rna_properties, &rna_MeshLoop_bitangent};
	srna->identifier = "MeshLoop";
	srna->flag = 516;
	srna->name = "Mesh Loop";
	srna->description = "Loop in a Mesh data-block";
	srna->translation_context = "*";
	srna->icon = 559;
	srna->iteratorproperty = &rna_MeshLoop_rna_properties;
	srna->path = rna_MeshLoop_path;
};

/* Mesh Polygon */
static CollectionPropertyRNA rna_MeshPolygon_rna_properties_;
PropertyRNA &rna_MeshPolygon_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_rna_properties_);

static PointerPropertyRNA rna_MeshPolygon_rna_type_;
PropertyRNA &rna_MeshPolygon_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_rna_type_);

static IntPropertyRNA rna_MeshPolygon_vertices_;
PropertyRNA &rna_MeshPolygon_vertices = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_vertices_);

static IntPropertyRNA rna_MeshPolygon_loop_start_;
PropertyRNA &rna_MeshPolygon_loop_start = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_loop_start_);

static IntPropertyRNA rna_MeshPolygon_loop_total_;
PropertyRNA &rna_MeshPolygon_loop_total = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_loop_total_);

static IntPropertyRNA rna_MeshPolygon_material_index_;
PropertyRNA &rna_MeshPolygon_material_index = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_material_index_);

static BoolPropertyRNA rna_MeshPolygon_select_;
PropertyRNA &rna_MeshPolygon_select = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_select_);

static BoolPropertyRNA rna_MeshPolygon_hide_;
PropertyRNA &rna_MeshPolygon_hide = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_hide_);

static BoolPropertyRNA rna_MeshPolygon_use_smooth_;
PropertyRNA &rna_MeshPolygon_use_smooth = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_use_smooth_);

static FloatPropertyRNA rna_MeshPolygon_normal_;
PropertyRNA &rna_MeshPolygon_normal = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_normal_);

static FloatPropertyRNA rna_MeshPolygon_center_;
PropertyRNA &rna_MeshPolygon_center = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_center_);

static FloatPropertyRNA rna_MeshPolygon_area_;
PropertyRNA &rna_MeshPolygon_area = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_area_);

static IntPropertyRNA rna_MeshPolygon_index_;
PropertyRNA &rna_MeshPolygon_index = reinterpret_cast<PropertyRNA &>(rna_MeshPolygon_index_);

FunctionRNA *rna_MeshPolygon_flip_func;
StructRNA *RNA_MeshPolygon;
void register_struct_MeshPolygon(BlenderRNA &brna)
{
	rna_MeshPolygon_rna_properties_ = {
		{&rna_MeshPolygon_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_rna_properties_begin, MeshPolygon_rna_properties_next, MeshPolygon_rna_properties_end, MeshPolygon_rna_properties_get, nullptr, nullptr, MeshPolygon_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshPolygon_rna_type_ = {
		{&rna_MeshPolygon_vertices, 	&rna_MeshPolygon_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static int rna_MeshPolygon_vertices_default[3] = {
		0,
		0,
		0
	};
	rna_MeshPolygon_vertices_ = {
		{&rna_MeshPolygon_loop_start, 	&rna_MeshPolygon_rna_type,
		-1, "vertices", 131073, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vertices",
		"Vertex indices",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), rna_MeshPoly_vertices_get_length, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshPolygon_vertices_get, MeshPolygon_vertices_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_MeshPolygon_vertices_default
	};

	rna_MeshPolygon_loop_start_ = {
		{&rna_MeshPolygon_loop_total, 	&rna_MeshPolygon_vertices,
		-1, "loop_start", 1, 0, 0, 4, 0, PropertyPathTemplateType(0), "Loop Start",
		"Index of the first loop of this face",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(MIntProperty, i), RawPropertyType(0), nullptr},
		MeshPolygon_loop_start_get, MeshPolygon_loop_start_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MeshPolygon_loop_total_ = {
		{&rna_MeshPolygon_material_index, 	&rna_MeshPolygon_loop_start,
		-1, "loop_total", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Loop Total",
		"Number of loops used by this face",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_loop_total_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MeshPolygon_material_index_ = {
		{&rna_MeshPolygon_select, 	&rna_MeshPolygon_loop_total,
		-1, "material_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Material Index",
		"Material slot index of this face",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_material_index_get, MeshPolygon_material_index_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_MeshPolygon_select_ = {
		{&rna_MeshPolygon_hide, 	&rna_MeshPolygon_material_index,
		-1, "select", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Select",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_select, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_select_get, MeshPolygon_select_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshPolygon_hide_ = {
		{&rna_MeshPolygon_use_smooth, 	&rna_MeshPolygon_select,
		-1, "hide", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hide",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_select, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_hide_get, MeshPolygon_hide_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshPolygon_use_smooth_ = {
		{&rna_MeshPolygon_normal, 	&rna_MeshPolygon_hide,
		-1, "use_smooth", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Smooth",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_use_smooth_get, MeshPolygon_use_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static float rna_MeshPolygon_normal_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshPolygon_normal_ = {
		{&rna_MeshPolygon_center, 	&rna_MeshPolygon_use_smooth,
		-1, "normal", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Polygon Normal",
		"Local space unit length normal vector for this face",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_DIRECTION) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshPolygon_normal_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshPolygon_normal_default
	};

	static float rna_MeshPolygon_center_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshPolygon_center_ = {
		{&rna_MeshPolygon_area, 	&rna_MeshPolygon_normal,
		-1, "center", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Polygon Center",
		"Center of this face",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshPolygon_center_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshPolygon_center_default
	};

	rna_MeshPolygon_area_ = {
		{&rna_MeshPolygon_index, 	&rna_MeshPolygon_center,
		-1, "area", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Polygon Area",
		"Read only area of this face",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_area_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_MeshPolygon_index_ = {
		{nullptr, 	&rna_MeshPolygon_area,
		-1, "index", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Index",
		"Index of this face",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshPolygon_index_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MeshPolygon;
	srna->cont.properties = {&rna_MeshPolygon_rna_properties, &rna_MeshPolygon_index};
	srna->identifier = "MeshPolygon";
	srna->flag = 516;
	srna->name = "Mesh Polygon";
	srna->description = "Polygon in a Mesh data-block";
	srna->translation_context = "*";
	srna->icon = 565;
	srna->iteratorproperty = &rna_MeshPolygon_rna_properties;
	srna->path = rna_MeshPolygon_path;
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "flip";
		func->flag = 2048;
		func->description = "Invert winding of this face (flip its normal)";
		func->call = MeshPolygon_flip_call;
		rna_MeshPolygon_flip_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* MeshUVLoopLayer */
static CollectionPropertyRNA rna_MeshUVLoopLayer_rna_properties_;
PropertyRNA &rna_MeshUVLoopLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_rna_properties_);

static PointerPropertyRNA rna_MeshUVLoopLayer_rna_type_;
PropertyRNA &rna_MeshUVLoopLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_rna_type_);

static CollectionPropertyRNA rna_MeshUVLoopLayer_data_;
PropertyRNA &rna_MeshUVLoopLayer_data = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_data_);

static StringPropertyRNA rna_MeshUVLoopLayer_name_;
PropertyRNA &rna_MeshUVLoopLayer_name = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_name_);

static BoolPropertyRNA rna_MeshUVLoopLayer_active_;
PropertyRNA &rna_MeshUVLoopLayer_active = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_active_);

static BoolPropertyRNA rna_MeshUVLoopLayer_active_render_;
PropertyRNA &rna_MeshUVLoopLayer_active_render = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_active_render_);

static BoolPropertyRNA rna_MeshUVLoopLayer_active_clone_;
PropertyRNA &rna_MeshUVLoopLayer_active_clone = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_active_clone_);

static CollectionPropertyRNA rna_MeshUVLoopLayer_uv_;
PropertyRNA &rna_MeshUVLoopLayer_uv = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_uv_);

static CollectionPropertyRNA rna_MeshUVLoopLayer_pin_;
PropertyRNA &rna_MeshUVLoopLayer_pin = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_pin_);

static PointerPropertyRNA rna_MeshUVLoopLayer_pin_ensure_layer_;
PropertyRNA &rna_MeshUVLoopLayer_pin_ensure_layer = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoopLayer_pin_ensure_layer_);

FunctionRNA *rna_MeshUVLoopLayer_pin_ensure_func;
StructRNA *RNA_MeshUVLoopLayer;
void register_struct_MeshUVLoopLayer(BlenderRNA &brna)
{
	rna_MeshUVLoopLayer_rna_properties_ = {
		{&rna_MeshUVLoopLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_rna_properties_begin, MeshUVLoopLayer_rna_properties_next, MeshUVLoopLayer_rna_properties_end, MeshUVLoopLayer_rna_properties_get, nullptr, nullptr, MeshUVLoopLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshUVLoopLayer_rna_type_ = {
		{&rna_MeshUVLoopLayer_data, 	&rna_MeshUVLoopLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MeshUVLoopLayer_data_ = {
		{&rna_MeshUVLoopLayer_name, 	&rna_MeshUVLoopLayer_rna_type,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "MeshUVLoop (Deprecated)",
		"Deprecated, use \'uv\', \'vertex_select\', \'edge_select\' or \'pin\' properties instead",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_data_begin, MeshUVLoopLayer_data_next, MeshUVLoopLayer_data_end, MeshUVLoopLayer_data_get, MeshUVLoopLayer_data_length, MeshUVLoopLayer_data_lookup_int, nullptr, nullptr, RNA_MeshUVLoop
	};

	rna_MeshUVLoopLayer_name_ = {
		{&rna_MeshUVLoopLayer_active, 	&rna_MeshUVLoopLayer_data,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of UV map",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_name_get, MeshUVLoopLayer_name_length, MeshUVLoopLayer_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_MeshUVLoopLayer_active_ = {
		{&rna_MeshUVLoopLayer_active_render, 	&rna_MeshUVLoopLayer_name,
		-1, "active", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"Set the map as active for display and editing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_active_get, MeshUVLoopLayer_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshUVLoopLayer_active_render_ = {
		{&rna_MeshUVLoopLayer_active_clone, 	&rna_MeshUVLoopLayer_active,
		-1, "active_render", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Render",
		"Set the UV map as active for rendering",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_active_render_get, MeshUVLoopLayer_active_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshUVLoopLayer_active_clone_ = {
		{&rna_MeshUVLoopLayer_uv, 	&rna_MeshUVLoopLayer_active_render,
		-1, "active_clone", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Clone",
		"Set the map as active for cloning",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_active_clone_get, MeshUVLoopLayer_active_clone_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshUVLoopLayer_uv_ = {
		{&rna_MeshUVLoopLayer_pin, 	&rna_MeshUVLoopLayer_active_clone,
		-1, "uv", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "UV",
		"UV coordinates on face corners",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_uv_begin, MeshUVLoopLayer_uv_next, MeshUVLoopLayer_uv_end, MeshUVLoopLayer_uv_get, MeshUVLoopLayer_uv_length, MeshUVLoopLayer_uv_lookup_int, nullptr, nullptr, RNA_Float2AttributeValue
	};

	rna_MeshUVLoopLayer_pin_ = {
		{nullptr, 	&rna_MeshUVLoopLayer_uv,
		-1, "pin", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "UV Pin",
		"UV pinned state in the UV editor",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoopLayer_pin_begin, MeshUVLoopLayer_pin_next, MeshUVLoopLayer_pin_end, MeshUVLoopLayer_pin_get, MeshUVLoopLayer_pin_length, MeshUVLoopLayer_pin_lookup_int, nullptr, nullptr, RNA_BoolAttributeValue
	};

	StructRNA *srna = RNA_MeshUVLoopLayer;
	srna->cont.properties = {&rna_MeshUVLoopLayer_rna_properties, &rna_MeshUVLoopLayer_pin};
	srna->identifier = "MeshUVLoopLayer";
	srna->flag = 516;
	srna->name = "MeshUVLoopLayer";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_MeshUVLoopLayer_name;
	srna->iteratorproperty = &rna_MeshUVLoopLayer_rna_properties;
	srna->path = rna_MeshUVLoopLayer_path;
	{
	rna_MeshUVLoopLayer_pin_ensure_layer_ = {
		{nullptr, 	nullptr,
		-1, "layer", 8388608, 0, 6, 0, 0, PropertyPathTemplateType(0), "",
		"The boolean attribute",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_BoolAttribute
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_MeshUVLoopLayer_pin_ensure_layer, &rna_MeshUVLoopLayer_pin_ensure_layer};
		func->identifier = "pin_ensure";
		func->flag = 8192;
		func->description = "pin_ensure";
		func->call = MeshUVLoopLayer_pin_ensure_call;
		func->c_ret = &rna_MeshUVLoopLayer_pin_ensure_layer;
		rna_MeshUVLoopLayer_pin_ensure_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Mesh UV Layer */
static CollectionPropertyRNA rna_MeshUVLoop_rna_properties_;
PropertyRNA &rna_MeshUVLoop_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoop_rna_properties_);

static PointerPropertyRNA rna_MeshUVLoop_rna_type_;
PropertyRNA &rna_MeshUVLoop_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoop_rna_type_);

static FloatPropertyRNA rna_MeshUVLoop_uv_;
PropertyRNA &rna_MeshUVLoop_uv = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoop_uv_);

static BoolPropertyRNA rna_MeshUVLoop_pin_uv_;
PropertyRNA &rna_MeshUVLoop_pin_uv = reinterpret_cast<PropertyRNA &>(rna_MeshUVLoop_pin_uv_);

StructRNA *RNA_MeshUVLoop;
void register_struct_MeshUVLoop(BlenderRNA &brna)
{
	rna_MeshUVLoop_rna_properties_ = {
		{&rna_MeshUVLoop_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoop_rna_properties_begin, MeshUVLoop_rna_properties_next, MeshUVLoop_rna_properties_end, MeshUVLoop_rna_properties_get, nullptr, nullptr, MeshUVLoop_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshUVLoop_rna_type_ = {
		{&rna_MeshUVLoop_uv, 	&rna_MeshUVLoop_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoop_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MeshUVLoop_uv_default[2] = {
		0.0f,
		0.0f
	};
	rna_MeshUVLoop_uv_ = {
		{&rna_MeshUVLoop_pin_uv, 	&rna_MeshUVLoop_rna_type,
		-1, "uv", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "uv",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshUVLoop_uv_get, MeshUVLoop_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshUVLoop_uv_default
	};

	rna_MeshUVLoop_pin_uv_ = {
		{nullptr, 	&rna_MeshUVLoop_uv,
		-1, "pin_uv", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV Pinned",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshUVLoop_pin_uv_get, MeshUVLoop_pin_uv_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_MeshUVLoop;
	srna->cont.properties = {&rna_MeshUVLoop_rna_properties, &rna_MeshUVLoop_pin_uv};
	srna->identifier = "MeshUVLoop";
	srna->flag = 516;
	srna->name = "Mesh UV Layer";
	srna->description = "(Deprecated) Layer of UV coordinates in a Mesh data-block";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshUVLoop_rna_properties;
	srna->path = rna_MeshUVLoop_path;
};

/* Mesh Vertex Color Layer */
static CollectionPropertyRNA rna_MeshLoopColorLayer_rna_properties_;
PropertyRNA &rna_MeshLoopColorLayer_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColorLayer_rna_properties_);

static PointerPropertyRNA rna_MeshLoopColorLayer_rna_type_;
PropertyRNA &rna_MeshLoopColorLayer_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColorLayer_rna_type_);

static StringPropertyRNA rna_MeshLoopColorLayer_name_;
PropertyRNA &rna_MeshLoopColorLayer_name = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColorLayer_name_);

static BoolPropertyRNA rna_MeshLoopColorLayer_active_;
PropertyRNA &rna_MeshLoopColorLayer_active = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColorLayer_active_);

static BoolPropertyRNA rna_MeshLoopColorLayer_active_render_;
PropertyRNA &rna_MeshLoopColorLayer_active_render = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColorLayer_active_render_);

static CollectionPropertyRNA rna_MeshLoopColorLayer_data_;
PropertyRNA &rna_MeshLoopColorLayer_data = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColorLayer_data_);

StructRNA *RNA_MeshLoopColorLayer;
void register_struct_MeshLoopColorLayer(BlenderRNA &brna)
{
	rna_MeshLoopColorLayer_rna_properties_ = {
		{&rna_MeshLoopColorLayer_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopColorLayer_rna_properties_begin, MeshLoopColorLayer_rna_properties_next, MeshLoopColorLayer_rna_properties_end, MeshLoopColorLayer_rna_properties_get, nullptr, nullptr, MeshLoopColorLayer_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshLoopColorLayer_rna_type_ = {
		{&rna_MeshLoopColorLayer_name, 	&rna_MeshLoopColorLayer_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopColorLayer_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_MeshLoopColorLayer_name_ = {
		{&rna_MeshLoopColorLayer_active, 	&rna_MeshLoopColorLayer_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Name of Vertex color layer",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopColorLayer_name_get, MeshLoopColorLayer_name_length, MeshLoopColorLayer_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 64, ""
	};

	rna_MeshLoopColorLayer_active_ = {
		{&rna_MeshLoopColorLayer_active_render, 	&rna_MeshLoopColorLayer_name,
		-1, "active", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active",
		"Sets the layer as active for display and editing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopColorLayer_active_get, MeshLoopColorLayer_active_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshLoopColorLayer_active_render_ = {
		{&rna_MeshLoopColorLayer_data, 	&rna_MeshLoopColorLayer_active,
		-1, "active_render", 1, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Render",
		"Sets the layer as active for rendering",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopColorLayer_active_render_get, MeshLoopColorLayer_active_render_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_MeshLoopColorLayer_data_ = {
		{nullptr, 	&rna_MeshLoopColorLayer_active_render,
		-1, "data", 0, 4, 0, 8, 0, PropertyPathTemplateType(0), "Data",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopColorLayer_data_begin, MeshLoopColorLayer_data_next, MeshLoopColorLayer_data_end, MeshLoopColorLayer_data_get, MeshLoopColorLayer_data_length, MeshLoopColorLayer_data_lookup_int, nullptr, nullptr, RNA_MeshLoopColor
	};

	StructRNA *srna = RNA_MeshLoopColorLayer;
	srna->cont.properties = {&rna_MeshLoopColorLayer_rna_properties, &rna_MeshLoopColorLayer_data};
	srna->identifier = "MeshLoopColorLayer";
	srna->flag = 516;
	srna->name = "Mesh Vertex Color Layer";
	srna->description = "Layer of vertex colors in a Mesh data-block";
	srna->translation_context = "*";
	srna->icon = 213;
	srna->nameproperty = &rna_MeshLoopColorLayer_name;
	srna->iteratorproperty = &rna_MeshLoopColorLayer_rna_properties;
	srna->path = rna_MeshLoopColorLayer_path;
};

/* Mesh Vertex Color */
static CollectionPropertyRNA rna_MeshLoopColor_rna_properties_;
PropertyRNA &rna_MeshLoopColor_rna_properties = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColor_rna_properties_);

static PointerPropertyRNA rna_MeshLoopColor_rna_type_;
PropertyRNA &rna_MeshLoopColor_rna_type = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColor_rna_type_);

static FloatPropertyRNA rna_MeshLoopColor_color_;
PropertyRNA &rna_MeshLoopColor_color = reinterpret_cast<PropertyRNA &>(rna_MeshLoopColor_color_);

StructRNA *RNA_MeshLoopColor;
void register_struct_MeshLoopColor(BlenderRNA &brna)
{
	rna_MeshLoopColor_rna_properties_ = {
		{&rna_MeshLoopColor_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopColor_rna_properties_begin, MeshLoopColor_rna_properties_next, MeshLoopColor_rna_properties_end, MeshLoopColor_rna_properties_get, nullptr, nullptr, MeshLoopColor_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_MeshLoopColor_rna_type_ = {
		{&rna_MeshLoopColor_color, 	&rna_MeshLoopColor_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		MeshLoopColor_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static float rna_MeshLoopColor_color_default[4] = {
		0.0f,
		0.0f,
		0.0f,
		0.0f
	};
	rna_MeshLoopColor_color_ = {
		{nullptr, 	&rna_MeshLoopColor_rna_type,
		-1, "color", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color",
		"Color in sRGB color space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_COLOR) | int(PROP_UNIT_NONE)), nullptr, 1, {4, 0, 0}, 4,
		rna_Mesh_update_data_legacy_deg_tag_all, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, MeshLoopColor_color_get, MeshLoopColor_color_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, rna_MeshLoopColor_color_default
	};

	StructRNA *srna = RNA_MeshLoopColor;
	srna->cont.properties = {&rna_MeshLoopColor_rna_properties, &rna_MeshLoopColor_color};
	srna->identifier = "MeshLoopColor";
	srna->flag = 516;
	srna->name = "Mesh Vertex Color";
	srna->description = "Vertex loop colors in a Mesh";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_MeshLoopColor_rna_properties;
	srna->path = rna_MeshColor_path;
};


}  // namespace blender
