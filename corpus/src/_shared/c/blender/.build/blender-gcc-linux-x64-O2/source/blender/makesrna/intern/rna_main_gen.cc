
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

#include "rna_main.cc"
#include "rna_main_api.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_BlendData_rna_properties;
extern PropertyRNA &rna_BlendData_rna_type;
extern PropertyRNA &rna_BlendData_filepath;
extern PropertyRNA &rna_BlendData_is_dirty;
extern PropertyRNA &rna_BlendData_is_saved;
extern PropertyRNA &rna_BlendData_use_autopack;
extern PropertyRNA &rna_BlendData_version;
extern PropertyRNA &rna_BlendData_cameras;
extern PropertyRNA &rna_BlendData_scenes;
extern PropertyRNA &rna_BlendData_objects;
extern PropertyRNA &rna_BlendData_materials;
extern PropertyRNA &rna_BlendData_node_groups;
extern PropertyRNA &rna_BlendData_meshes;
extern PropertyRNA &rna_BlendData_lights;
extern PropertyRNA &rna_BlendData_libraries;
extern PropertyRNA &rna_BlendData_screens;
extern PropertyRNA &rna_BlendData_window_managers;
extern PropertyRNA &rna_BlendData_images;
extern PropertyRNA &rna_BlendData_lattices;
extern PropertyRNA &rna_BlendData_curves;
extern PropertyRNA &rna_BlendData_metaballs;
extern PropertyRNA &rna_BlendData_fonts;
extern PropertyRNA &rna_BlendData_textures;
extern PropertyRNA &rna_BlendData_brushes;
extern PropertyRNA &rna_BlendData_worlds;
extern PropertyRNA &rna_BlendData_collections;
extern PropertyRNA &rna_BlendData_shape_keys;
extern PropertyRNA &rna_BlendData_texts;
extern PropertyRNA &rna_BlendData_speakers;
extern PropertyRNA &rna_BlendData_sounds;
extern PropertyRNA &rna_BlendData_armatures;
extern PropertyRNA &rna_BlendData_actions;
extern PropertyRNA &rna_BlendData_particles;
extern PropertyRNA &rna_BlendData_palettes;
extern PropertyRNA &rna_BlendData_annotations;
extern PropertyRNA &rna_BlendData_grease_pencils;
extern PropertyRNA &rna_BlendData_movieclips;
extern PropertyRNA &rna_BlendData_masks;
extern PropertyRNA &rna_BlendData_linestyles;
extern PropertyRNA &rna_BlendData_cache_files;
extern PropertyRNA &rna_BlendData_paint_curves;
extern PropertyRNA &rna_BlendData_workspaces;
extern PropertyRNA &rna_BlendData_lightprobes;
extern PropertyRNA &rna_BlendData_hair_curves;
extern PropertyRNA &rna_BlendData_pointclouds;
extern PropertyRNA &rna_BlendData_volumes;
extern PropertyRNA &rna_BlendData_colorspace;
extern PropertyRNA &rna_BlendData_all_ids;
extern PropertyRNA &rna_BlendData_project;

extern FunctionRNA *rna_BlendData_pack_linked_ids_hierarchy_func;
extern PropertyRNA &rna_BlendData_pack_linked_ids_hierarchy_root_id;
extern PropertyRNA &rna_BlendData_pack_linked_ids_hierarchy_packed_id;

extern FunctionRNA *rna_BlendData_project_init_func;
extern PropertyRNA &rna_BlendData_project_init_name;
extern PropertyRNA &rna_BlendData_project_init_project_root;

extern FunctionRNA *rna_BlendData_project_clear_func;


extern PropertyRNA &rna_BlendDataCameras_rna_properties;
extern PropertyRNA &rna_BlendDataCameras_rna_type;

extern FunctionRNA *rna_BlendDataCameras_new_func;
extern PropertyRNA &rna_BlendDataCameras_new_name;
extern PropertyRNA &rna_BlendDataCameras_new_camera;

extern FunctionRNA *rna_BlendDataCameras_remove_func;
extern PropertyRNA &rna_BlendDataCameras_remove_camera;
extern PropertyRNA &rna_BlendDataCameras_remove_do_unlink;
extern PropertyRNA &rna_BlendDataCameras_remove_do_id_user;
extern PropertyRNA &rna_BlendDataCameras_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataCameras_tag_func;
extern PropertyRNA &rna_BlendDataCameras_tag_value;



extern PropertyRNA &rna_BlendDataScenes_rna_properties;
extern PropertyRNA &rna_BlendDataScenes_rna_type;

extern FunctionRNA *rna_BlendDataScenes_new_func;
extern PropertyRNA &rna_BlendDataScenes_new_name;
extern PropertyRNA &rna_BlendDataScenes_new_scene;

extern FunctionRNA *rna_BlendDataScenes_remove_func;
extern PropertyRNA &rna_BlendDataScenes_remove_scene;
extern PropertyRNA &rna_BlendDataScenes_remove_do_unlink;

extern FunctionRNA *rna_BlendDataScenes_tag_func;
extern PropertyRNA &rna_BlendDataScenes_tag_value;



extern PropertyRNA &rna_BlendDataObjects_rna_properties;
extern PropertyRNA &rna_BlendDataObjects_rna_type;

extern FunctionRNA *rna_BlendDataObjects_new_func;
extern PropertyRNA &rna_BlendDataObjects_new_name;
extern PropertyRNA &rna_BlendDataObjects_new_object_data;
extern PropertyRNA &rna_BlendDataObjects_new_object;

extern FunctionRNA *rna_BlendDataObjects_remove_func;
extern PropertyRNA &rna_BlendDataObjects_remove_object;
extern PropertyRNA &rna_BlendDataObjects_remove_do_unlink;
extern PropertyRNA &rna_BlendDataObjects_remove_do_id_user;
extern PropertyRNA &rna_BlendDataObjects_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataObjects_tag_func;
extern PropertyRNA &rna_BlendDataObjects_tag_value;



extern PropertyRNA &rna_BlendDataMaterials_rna_properties;
extern PropertyRNA &rna_BlendDataMaterials_rna_type;

extern FunctionRNA *rna_BlendDataMaterials_new_func;
extern PropertyRNA &rna_BlendDataMaterials_new_name;
extern PropertyRNA &rna_BlendDataMaterials_new_material;

extern FunctionRNA *rna_BlendDataMaterials_create_gpencil_data_func;
extern PropertyRNA &rna_BlendDataMaterials_create_gpencil_data_material;

extern FunctionRNA *rna_BlendDataMaterials_remove_gpencil_data_func;
extern PropertyRNA &rna_BlendDataMaterials_remove_gpencil_data_material;

extern FunctionRNA *rna_BlendDataMaterials_remove_func;
extern PropertyRNA &rna_BlendDataMaterials_remove_material;
extern PropertyRNA &rna_BlendDataMaterials_remove_do_unlink;
extern PropertyRNA &rna_BlendDataMaterials_remove_do_id_user;
extern PropertyRNA &rna_BlendDataMaterials_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataMaterials_tag_func;
extern PropertyRNA &rna_BlendDataMaterials_tag_value;



extern PropertyRNA &rna_BlendDataNodeTrees_rna_properties;
extern PropertyRNA &rna_BlendDataNodeTrees_rna_type;

extern FunctionRNA *rna_BlendDataNodeTrees_new_func;
extern PropertyRNA &rna_BlendDataNodeTrees_new_name;
extern PropertyRNA &rna_BlendDataNodeTrees_new_type;
extern PropertyRNA &rna_BlendDataNodeTrees_new_tree;

extern FunctionRNA *rna_BlendDataNodeTrees_remove_func;
extern PropertyRNA &rna_BlendDataNodeTrees_remove_tree;
extern PropertyRNA &rna_BlendDataNodeTrees_remove_do_unlink;
extern PropertyRNA &rna_BlendDataNodeTrees_remove_do_id_user;
extern PropertyRNA &rna_BlendDataNodeTrees_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataNodeTrees_tag_func;
extern PropertyRNA &rna_BlendDataNodeTrees_tag_value;



extern PropertyRNA &rna_BlendDataMeshes_rna_properties;
extern PropertyRNA &rna_BlendDataMeshes_rna_type;

extern FunctionRNA *rna_BlendDataMeshes_new_func;
extern PropertyRNA &rna_BlendDataMeshes_new_name;
extern PropertyRNA &rna_BlendDataMeshes_new_mesh;

extern FunctionRNA *rna_BlendDataMeshes_new_from_object_func;
extern PropertyRNA &rna_BlendDataMeshes_new_from_object_object;
extern PropertyRNA &rna_BlendDataMeshes_new_from_object_preserve_all_data_layers;
extern PropertyRNA &rna_BlendDataMeshes_new_from_object_depsgraph;
extern PropertyRNA &rna_BlendDataMeshes_new_from_object_mesh;

extern FunctionRNA *rna_BlendDataMeshes_remove_func;
extern PropertyRNA &rna_BlendDataMeshes_remove_mesh;
extern PropertyRNA &rna_BlendDataMeshes_remove_do_unlink;
extern PropertyRNA &rna_BlendDataMeshes_remove_do_id_user;
extern PropertyRNA &rna_BlendDataMeshes_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataMeshes_tag_func;
extern PropertyRNA &rna_BlendDataMeshes_tag_value;



extern PropertyRNA &rna_BlendDataLights_rna_properties;
extern PropertyRNA &rna_BlendDataLights_rna_type;

extern FunctionRNA *rna_BlendDataLights_new_func;
extern PropertyRNA &rna_BlendDataLights_new_name;
extern PropertyRNA &rna_BlendDataLights_new_type;
extern PropertyRNA &rna_BlendDataLights_new_light;

extern FunctionRNA *rna_BlendDataLights_remove_func;
extern PropertyRNA &rna_BlendDataLights_remove_light;
extern PropertyRNA &rna_BlendDataLights_remove_do_unlink;
extern PropertyRNA &rna_BlendDataLights_remove_do_id_user;
extern PropertyRNA &rna_BlendDataLights_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataLights_tag_func;
extern PropertyRNA &rna_BlendDataLights_tag_value;



extern PropertyRNA &rna_BlendDataLibraries_rna_properties;
extern PropertyRNA &rna_BlendDataLibraries_rna_type;

extern FunctionRNA *rna_BlendDataLibraries_tag_func;
extern PropertyRNA &rna_BlendDataLibraries_tag_value;

extern FunctionRNA *rna_BlendDataLibraries_remove_func;
extern PropertyRNA &rna_BlendDataLibraries_remove_library;
extern PropertyRNA &rna_BlendDataLibraries_remove_do_unlink;
extern PropertyRNA &rna_BlendDataLibraries_remove_do_id_user;
extern PropertyRNA &rna_BlendDataLibraries_remove_do_ui_user;



extern PropertyRNA &rna_BlendDataScreens_rna_properties;
extern PropertyRNA &rna_BlendDataScreens_rna_type;

extern FunctionRNA *rna_BlendDataScreens_tag_func;
extern PropertyRNA &rna_BlendDataScreens_tag_value;



extern PropertyRNA &rna_BlendDataWindowManagers_rna_properties;
extern PropertyRNA &rna_BlendDataWindowManagers_rna_type;

extern FunctionRNA *rna_BlendDataWindowManagers_tag_func;
extern PropertyRNA &rna_BlendDataWindowManagers_tag_value;



extern PropertyRNA &rna_BlendDataImages_rna_properties;
extern PropertyRNA &rna_BlendDataImages_rna_type;

extern FunctionRNA *rna_BlendDataImages_new_func;
extern PropertyRNA &rna_BlendDataImages_new_name;
extern PropertyRNA &rna_BlendDataImages_new_width;
extern PropertyRNA &rna_BlendDataImages_new_height;
extern PropertyRNA &rna_BlendDataImages_new_alpha;
extern PropertyRNA &rna_BlendDataImages_new_float_buffer;
extern PropertyRNA &rna_BlendDataImages_new_stereo3d;
extern PropertyRNA &rna_BlendDataImages_new_is_data;
extern PropertyRNA &rna_BlendDataImages_new_tiled;
extern PropertyRNA &rna_BlendDataImages_new_image;

extern FunctionRNA *rna_BlendDataImages_load_func;
extern PropertyRNA &rna_BlendDataImages_load_filepath;
extern PropertyRNA &rna_BlendDataImages_load_check_existing;
extern PropertyRNA &rna_BlendDataImages_load_image;

extern FunctionRNA *rna_BlendDataImages_remove_func;
extern PropertyRNA &rna_BlendDataImages_remove_image;
extern PropertyRNA &rna_BlendDataImages_remove_do_unlink;
extern PropertyRNA &rna_BlendDataImages_remove_do_id_user;
extern PropertyRNA &rna_BlendDataImages_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataImages_tag_func;
extern PropertyRNA &rna_BlendDataImages_tag_value;



extern PropertyRNA &rna_BlendDataLattices_rna_properties;
extern PropertyRNA &rna_BlendDataLattices_rna_type;

extern FunctionRNA *rna_BlendDataLattices_new_func;
extern PropertyRNA &rna_BlendDataLattices_new_name;
extern PropertyRNA &rna_BlendDataLattices_new_lattice;

extern FunctionRNA *rna_BlendDataLattices_remove_func;
extern PropertyRNA &rna_BlendDataLattices_remove_lattice;
extern PropertyRNA &rna_BlendDataLattices_remove_do_unlink;
extern PropertyRNA &rna_BlendDataLattices_remove_do_id_user;
extern PropertyRNA &rna_BlendDataLattices_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataLattices_tag_func;
extern PropertyRNA &rna_BlendDataLattices_tag_value;



extern PropertyRNA &rna_BlendDataCurves_rna_properties;
extern PropertyRNA &rna_BlendDataCurves_rna_type;

extern FunctionRNA *rna_BlendDataCurves_new_func;
extern PropertyRNA &rna_BlendDataCurves_new_name;
extern PropertyRNA &rna_BlendDataCurves_new_type;
extern PropertyRNA &rna_BlendDataCurves_new_curve;

extern FunctionRNA *rna_BlendDataCurves_remove_func;
extern PropertyRNA &rna_BlendDataCurves_remove_curve;
extern PropertyRNA &rna_BlendDataCurves_remove_do_unlink;
extern PropertyRNA &rna_BlendDataCurves_remove_do_id_user;
extern PropertyRNA &rna_BlendDataCurves_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataCurves_tag_func;
extern PropertyRNA &rna_BlendDataCurves_tag_value;



extern PropertyRNA &rna_BlendDataMetaBalls_rna_properties;
extern PropertyRNA &rna_BlendDataMetaBalls_rna_type;

extern FunctionRNA *rna_BlendDataMetaBalls_new_func;
extern PropertyRNA &rna_BlendDataMetaBalls_new_name;
extern PropertyRNA &rna_BlendDataMetaBalls_new_metaball;

extern FunctionRNA *rna_BlendDataMetaBalls_remove_func;
extern PropertyRNA &rna_BlendDataMetaBalls_remove_metaball;
extern PropertyRNA &rna_BlendDataMetaBalls_remove_do_unlink;
extern PropertyRNA &rna_BlendDataMetaBalls_remove_do_id_user;
extern PropertyRNA &rna_BlendDataMetaBalls_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataMetaBalls_tag_func;
extern PropertyRNA &rna_BlendDataMetaBalls_tag_value;



extern PropertyRNA &rna_BlendDataFonts_rna_properties;
extern PropertyRNA &rna_BlendDataFonts_rna_type;

extern FunctionRNA *rna_BlendDataFonts_load_func;
extern PropertyRNA &rna_BlendDataFonts_load_filepath;
extern PropertyRNA &rna_BlendDataFonts_load_check_existing;
extern PropertyRNA &rna_BlendDataFonts_load_vfont;

extern FunctionRNA *rna_BlendDataFonts_remove_func;
extern PropertyRNA &rna_BlendDataFonts_remove_vfont;
extern PropertyRNA &rna_BlendDataFonts_remove_do_unlink;
extern PropertyRNA &rna_BlendDataFonts_remove_do_id_user;
extern PropertyRNA &rna_BlendDataFonts_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataFonts_tag_func;
extern PropertyRNA &rna_BlendDataFonts_tag_value;



extern PropertyRNA &rna_BlendDataTextures_rna_properties;
extern PropertyRNA &rna_BlendDataTextures_rna_type;

extern FunctionRNA *rna_BlendDataTextures_new_func;
extern PropertyRNA &rna_BlendDataTextures_new_name;
extern PropertyRNA &rna_BlendDataTextures_new_type;
extern PropertyRNA &rna_BlendDataTextures_new_texture;

extern FunctionRNA *rna_BlendDataTextures_remove_func;
extern PropertyRNA &rna_BlendDataTextures_remove_texture;
extern PropertyRNA &rna_BlendDataTextures_remove_do_unlink;
extern PropertyRNA &rna_BlendDataTextures_remove_do_id_user;
extern PropertyRNA &rna_BlendDataTextures_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataTextures_tag_func;
extern PropertyRNA &rna_BlendDataTextures_tag_value;



extern PropertyRNA &rna_BlendDataBrushes_rna_properties;
extern PropertyRNA &rna_BlendDataBrushes_rna_type;

extern FunctionRNA *rna_BlendDataBrushes_new_func;
extern PropertyRNA &rna_BlendDataBrushes_new_name;
extern PropertyRNA &rna_BlendDataBrushes_new_mode;
extern PropertyRNA &rna_BlendDataBrushes_new_brush;

extern FunctionRNA *rna_BlendDataBrushes_remove_func;
extern PropertyRNA &rna_BlendDataBrushes_remove_brush;
extern PropertyRNA &rna_BlendDataBrushes_remove_do_unlink;
extern PropertyRNA &rna_BlendDataBrushes_remove_do_id_user;
extern PropertyRNA &rna_BlendDataBrushes_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataBrushes_tag_func;
extern PropertyRNA &rna_BlendDataBrushes_tag_value;

extern FunctionRNA *rna_BlendDataBrushes_create_gpencil_data_func;
extern PropertyRNA &rna_BlendDataBrushes_create_gpencil_data_brush;



extern PropertyRNA &rna_BlendDataWorlds_rna_properties;
extern PropertyRNA &rna_BlendDataWorlds_rna_type;

extern FunctionRNA *rna_BlendDataWorlds_new_func;
extern PropertyRNA &rna_BlendDataWorlds_new_name;
extern PropertyRNA &rna_BlendDataWorlds_new_world;

extern FunctionRNA *rna_BlendDataWorlds_remove_func;
extern PropertyRNA &rna_BlendDataWorlds_remove_world;
extern PropertyRNA &rna_BlendDataWorlds_remove_do_unlink;
extern PropertyRNA &rna_BlendDataWorlds_remove_do_id_user;
extern PropertyRNA &rna_BlendDataWorlds_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataWorlds_tag_func;
extern PropertyRNA &rna_BlendDataWorlds_tag_value;



extern PropertyRNA &rna_BlendDataCollections_rna_properties;
extern PropertyRNA &rna_BlendDataCollections_rna_type;

extern FunctionRNA *rna_BlendDataCollections_new_func;
extern PropertyRNA &rna_BlendDataCollections_new_name;
extern PropertyRNA &rna_BlendDataCollections_new_collection;

extern FunctionRNA *rna_BlendDataCollections_remove_func;
extern PropertyRNA &rna_BlendDataCollections_remove_collection;
extern PropertyRNA &rna_BlendDataCollections_remove_do_unlink;
extern PropertyRNA &rna_BlendDataCollections_remove_do_id_user;
extern PropertyRNA &rna_BlendDataCollections_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataCollections_tag_func;
extern PropertyRNA &rna_BlendDataCollections_tag_value;



extern PropertyRNA &rna_BlendDataTexts_rna_properties;
extern PropertyRNA &rna_BlendDataTexts_rna_type;

extern FunctionRNA *rna_BlendDataTexts_new_func;
extern PropertyRNA &rna_BlendDataTexts_new_name;
extern PropertyRNA &rna_BlendDataTexts_new_text;

extern FunctionRNA *rna_BlendDataTexts_remove_func;
extern PropertyRNA &rna_BlendDataTexts_remove_text;
extern PropertyRNA &rna_BlendDataTexts_remove_do_unlink;
extern PropertyRNA &rna_BlendDataTexts_remove_do_id_user;
extern PropertyRNA &rna_BlendDataTexts_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataTexts_load_func;
extern PropertyRNA &rna_BlendDataTexts_load_filepath;
extern PropertyRNA &rna_BlendDataTexts_load_internal;
extern PropertyRNA &rna_BlendDataTexts_load_text;

extern FunctionRNA *rna_BlendDataTexts_tag_func;
extern PropertyRNA &rna_BlendDataTexts_tag_value;



extern PropertyRNA &rna_BlendDataSpeakers_rna_properties;
extern PropertyRNA &rna_BlendDataSpeakers_rna_type;

extern FunctionRNA *rna_BlendDataSpeakers_new_func;
extern PropertyRNA &rna_BlendDataSpeakers_new_name;
extern PropertyRNA &rna_BlendDataSpeakers_new_speaker;

extern FunctionRNA *rna_BlendDataSpeakers_remove_func;
extern PropertyRNA &rna_BlendDataSpeakers_remove_speaker;
extern PropertyRNA &rna_BlendDataSpeakers_remove_do_unlink;
extern PropertyRNA &rna_BlendDataSpeakers_remove_do_id_user;
extern PropertyRNA &rna_BlendDataSpeakers_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataSpeakers_tag_func;
extern PropertyRNA &rna_BlendDataSpeakers_tag_value;



extern PropertyRNA &rna_BlendDataSounds_rna_properties;
extern PropertyRNA &rna_BlendDataSounds_rna_type;

extern FunctionRNA *rna_BlendDataSounds_load_func;
extern PropertyRNA &rna_BlendDataSounds_load_filepath;
extern PropertyRNA &rna_BlendDataSounds_load_check_existing;
extern PropertyRNA &rna_BlendDataSounds_load_sound;

extern FunctionRNA *rna_BlendDataSounds_remove_func;
extern PropertyRNA &rna_BlendDataSounds_remove_sound;
extern PropertyRNA &rna_BlendDataSounds_remove_do_unlink;
extern PropertyRNA &rna_BlendDataSounds_remove_do_id_user;
extern PropertyRNA &rna_BlendDataSounds_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataSounds_tag_func;
extern PropertyRNA &rna_BlendDataSounds_tag_value;



extern PropertyRNA &rna_BlendDataArmatures_rna_properties;
extern PropertyRNA &rna_BlendDataArmatures_rna_type;

extern FunctionRNA *rna_BlendDataArmatures_new_func;
extern PropertyRNA &rna_BlendDataArmatures_new_name;
extern PropertyRNA &rna_BlendDataArmatures_new_armature;

extern FunctionRNA *rna_BlendDataArmatures_remove_func;
extern PropertyRNA &rna_BlendDataArmatures_remove_armature;
extern PropertyRNA &rna_BlendDataArmatures_remove_do_unlink;
extern PropertyRNA &rna_BlendDataArmatures_remove_do_id_user;
extern PropertyRNA &rna_BlendDataArmatures_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataArmatures_tag_func;
extern PropertyRNA &rna_BlendDataArmatures_tag_value;



extern PropertyRNA &rna_BlendDataActions_rna_properties;
extern PropertyRNA &rna_BlendDataActions_rna_type;

extern FunctionRNA *rna_BlendDataActions_new_func;
extern PropertyRNA &rna_BlendDataActions_new_name;
extern PropertyRNA &rna_BlendDataActions_new_action;

extern FunctionRNA *rna_BlendDataActions_remove_func;
extern PropertyRNA &rna_BlendDataActions_remove_action;
extern PropertyRNA &rna_BlendDataActions_remove_do_unlink;
extern PropertyRNA &rna_BlendDataActions_remove_do_id_user;
extern PropertyRNA &rna_BlendDataActions_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataActions_tag_func;
extern PropertyRNA &rna_BlendDataActions_tag_value;



extern PropertyRNA &rna_BlendDataParticles_rna_properties;
extern PropertyRNA &rna_BlendDataParticles_rna_type;

extern FunctionRNA *rna_BlendDataParticles_new_func;
extern PropertyRNA &rna_BlendDataParticles_new_name;
extern PropertyRNA &rna_BlendDataParticles_new_particle;

extern FunctionRNA *rna_BlendDataParticles_remove_func;
extern PropertyRNA &rna_BlendDataParticles_remove_particle;
extern PropertyRNA &rna_BlendDataParticles_remove_do_unlink;
extern PropertyRNA &rna_BlendDataParticles_remove_do_id_user;
extern PropertyRNA &rna_BlendDataParticles_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataParticles_tag_func;
extern PropertyRNA &rna_BlendDataParticles_tag_value;



extern PropertyRNA &rna_BlendDataPalettes_rna_properties;
extern PropertyRNA &rna_BlendDataPalettes_rna_type;

extern FunctionRNA *rna_BlendDataPalettes_new_func;
extern PropertyRNA &rna_BlendDataPalettes_new_name;
extern PropertyRNA &rna_BlendDataPalettes_new_palette;

extern FunctionRNA *rna_BlendDataPalettes_remove_func;
extern PropertyRNA &rna_BlendDataPalettes_remove_palette;
extern PropertyRNA &rna_BlendDataPalettes_remove_do_unlink;
extern PropertyRNA &rna_BlendDataPalettes_remove_do_id_user;
extern PropertyRNA &rna_BlendDataPalettes_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataPalettes_tag_func;
extern PropertyRNA &rna_BlendDataPalettes_tag_value;



extern PropertyRNA &rna_BlendDataAnnotations_rna_properties;
extern PropertyRNA &rna_BlendDataAnnotations_rna_type;

extern FunctionRNA *rna_BlendDataAnnotations_tag_func;
extern PropertyRNA &rna_BlendDataAnnotations_tag_value;

extern FunctionRNA *rna_BlendDataAnnotations_new_func;
extern PropertyRNA &rna_BlendDataAnnotations_new_name;
extern PropertyRNA &rna_BlendDataAnnotations_new_annotation;

extern FunctionRNA *rna_BlendDataAnnotations_remove_func;
extern PropertyRNA &rna_BlendDataAnnotations_remove_annotation;
extern PropertyRNA &rna_BlendDataAnnotations_remove_do_unlink;
extern PropertyRNA &rna_BlendDataAnnotations_remove_do_id_user;
extern PropertyRNA &rna_BlendDataAnnotations_remove_do_ui_user;



extern PropertyRNA &rna_BlendDataGreasePencilsV3_rna_properties;
extern PropertyRNA &rna_BlendDataGreasePencilsV3_rna_type;

extern FunctionRNA *rna_BlendDataGreasePencilsV3_tag_func;
extern PropertyRNA &rna_BlendDataGreasePencilsV3_tag_value;

extern FunctionRNA *rna_BlendDataGreasePencilsV3_new_func;
extern PropertyRNA &rna_BlendDataGreasePencilsV3_new_name;
extern PropertyRNA &rna_BlendDataGreasePencilsV3_new_grease_pencil;

extern FunctionRNA *rna_BlendDataGreasePencilsV3_remove_func;
extern PropertyRNA &rna_BlendDataGreasePencilsV3_remove_grease_pencil;
extern PropertyRNA &rna_BlendDataGreasePencilsV3_remove_do_unlink;
extern PropertyRNA &rna_BlendDataGreasePencilsV3_remove_do_id_user;
extern PropertyRNA &rna_BlendDataGreasePencilsV3_remove_do_ui_user;



extern PropertyRNA &rna_BlendDataMovieClips_rna_properties;
extern PropertyRNA &rna_BlendDataMovieClips_rna_type;

extern FunctionRNA *rna_BlendDataMovieClips_tag_func;
extern PropertyRNA &rna_BlendDataMovieClips_tag_value;

extern FunctionRNA *rna_BlendDataMovieClips_remove_func;
extern PropertyRNA &rna_BlendDataMovieClips_remove_clip;
extern PropertyRNA &rna_BlendDataMovieClips_remove_do_unlink;
extern PropertyRNA &rna_BlendDataMovieClips_remove_do_id_user;
extern PropertyRNA &rna_BlendDataMovieClips_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataMovieClips_load_func;
extern PropertyRNA &rna_BlendDataMovieClips_load_filepath;
extern PropertyRNA &rna_BlendDataMovieClips_load_check_existing;
extern PropertyRNA &rna_BlendDataMovieClips_load_clip;



extern PropertyRNA &rna_BlendDataMasks_rna_properties;
extern PropertyRNA &rna_BlendDataMasks_rna_type;

extern FunctionRNA *rna_BlendDataMasks_tag_func;
extern PropertyRNA &rna_BlendDataMasks_tag_value;

extern FunctionRNA *rna_BlendDataMasks_new_func;
extern PropertyRNA &rna_BlendDataMasks_new_name;
extern PropertyRNA &rna_BlendDataMasks_new_mask;

extern FunctionRNA *rna_BlendDataMasks_remove_func;
extern PropertyRNA &rna_BlendDataMasks_remove_mask;
extern PropertyRNA &rna_BlendDataMasks_remove_do_unlink;
extern PropertyRNA &rna_BlendDataMasks_remove_do_id_user;
extern PropertyRNA &rna_BlendDataMasks_remove_do_ui_user;



extern PropertyRNA &rna_BlendDataLineStyles_rna_properties;
extern PropertyRNA &rna_BlendDataLineStyles_rna_type;

extern FunctionRNA *rna_BlendDataLineStyles_tag_func;
extern PropertyRNA &rna_BlendDataLineStyles_tag_value;

extern FunctionRNA *rna_BlendDataLineStyles_new_func;
extern PropertyRNA &rna_BlendDataLineStyles_new_name;
extern PropertyRNA &rna_BlendDataLineStyles_new_linestyle;

extern FunctionRNA *rna_BlendDataLineStyles_remove_func;
extern PropertyRNA &rna_BlendDataLineStyles_remove_linestyle;
extern PropertyRNA &rna_BlendDataLineStyles_remove_do_unlink;
extern PropertyRNA &rna_BlendDataLineStyles_remove_do_id_user;
extern PropertyRNA &rna_BlendDataLineStyles_remove_do_ui_user;



extern PropertyRNA &rna_BlendDataCacheFiles_rna_properties;
extern PropertyRNA &rna_BlendDataCacheFiles_rna_type;

extern FunctionRNA *rna_BlendDataCacheFiles_tag_func;
extern PropertyRNA &rna_BlendDataCacheFiles_tag_value;



extern PropertyRNA &rna_BlendDataPaintCurves_rna_properties;
extern PropertyRNA &rna_BlendDataPaintCurves_rna_type;

extern FunctionRNA *rna_BlendDataPaintCurves_tag_func;
extern PropertyRNA &rna_BlendDataPaintCurves_tag_value;



extern PropertyRNA &rna_BlendDataWorkSpaces_rna_properties;
extern PropertyRNA &rna_BlendDataWorkSpaces_rna_type;

extern FunctionRNA *rna_BlendDataWorkSpaces_tag_func;
extern PropertyRNA &rna_BlendDataWorkSpaces_tag_value;



extern PropertyRNA &rna_BlendDataProbes_rna_properties;
extern PropertyRNA &rna_BlendDataProbes_rna_type;

extern FunctionRNA *rna_BlendDataProbes_new_func;
extern PropertyRNA &rna_BlendDataProbes_new_name;
extern PropertyRNA &rna_BlendDataProbes_new_type;
extern PropertyRNA &rna_BlendDataProbes_new_lightprobe;

extern FunctionRNA *rna_BlendDataProbes_remove_func;
extern PropertyRNA &rna_BlendDataProbes_remove_lightprobe;
extern PropertyRNA &rna_BlendDataProbes_remove_do_unlink;
extern PropertyRNA &rna_BlendDataProbes_remove_do_id_user;
extern PropertyRNA &rna_BlendDataProbes_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataProbes_tag_func;
extern PropertyRNA &rna_BlendDataProbes_tag_value;



extern PropertyRNA &rna_BlendDataHairCurves_rna_properties;
extern PropertyRNA &rna_BlendDataHairCurves_rna_type;

extern FunctionRNA *rna_BlendDataHairCurves_new_func;
extern PropertyRNA &rna_BlendDataHairCurves_new_name;
extern PropertyRNA &rna_BlendDataHairCurves_new_curves;

extern FunctionRNA *rna_BlendDataHairCurves_remove_func;
extern PropertyRNA &rna_BlendDataHairCurves_remove_curves;
extern PropertyRNA &rna_BlendDataHairCurves_remove_do_unlink;
extern PropertyRNA &rna_BlendDataHairCurves_remove_do_id_user;
extern PropertyRNA &rna_BlendDataHairCurves_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataHairCurves_tag_func;
extern PropertyRNA &rna_BlendDataHairCurves_tag_value;



extern PropertyRNA &rna_BlendDataPointClouds_rna_properties;
extern PropertyRNA &rna_BlendDataPointClouds_rna_type;

extern FunctionRNA *rna_BlendDataPointClouds_new_func;
extern PropertyRNA &rna_BlendDataPointClouds_new_name;
extern PropertyRNA &rna_BlendDataPointClouds_new_pointcloud;

extern FunctionRNA *rna_BlendDataPointClouds_remove_func;
extern PropertyRNA &rna_BlendDataPointClouds_remove_pointcloud;
extern PropertyRNA &rna_BlendDataPointClouds_remove_do_unlink;
extern PropertyRNA &rna_BlendDataPointClouds_remove_do_id_user;
extern PropertyRNA &rna_BlendDataPointClouds_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataPointClouds_tag_func;
extern PropertyRNA &rna_BlendDataPointClouds_tag_value;



extern PropertyRNA &rna_BlendDataVolumes_rna_properties;
extern PropertyRNA &rna_BlendDataVolumes_rna_type;

extern FunctionRNA *rna_BlendDataVolumes_new_func;
extern PropertyRNA &rna_BlendDataVolumes_new_name;
extern PropertyRNA &rna_BlendDataVolumes_new_volume;

extern FunctionRNA *rna_BlendDataVolumes_remove_func;
extern PropertyRNA &rna_BlendDataVolumes_remove_volume;
extern PropertyRNA &rna_BlendDataVolumes_remove_do_unlink;
extern PropertyRNA &rna_BlendDataVolumes_remove_do_id_user;
extern PropertyRNA &rna_BlendDataVolumes_remove_do_ui_user;

extern FunctionRNA *rna_BlendDataVolumes_tag_func;
extern PropertyRNA &rna_BlendDataVolumes_tag_value;



extern PropertyRNA &rna_BlendFileColorspace_rna_properties;
extern PropertyRNA &rna_BlendFileColorspace_rna_type;
extern PropertyRNA &rna_BlendFileColorspace_working_space;
extern PropertyRNA &rna_BlendFileColorspace_working_space_interop_id;
extern PropertyRNA &rna_BlendFileColorspace_is_missing_opencolorio_config;

static PointerRNA BlendData_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_rna_properties_get(iter);
    }
}

void BlendData_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_rna_properties_get(iter);
    }
}

void BlendData_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendData_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void BlendData_filepath_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_Main_filepath_get;
    fn(ptr, value);
}

int BlendData_filepath_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_Main_filepath_length;
    return fn(ptr);
}

bool BlendData_is_dirty_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Main_is_dirty_get;
    return fn(ptr);
}

bool BlendData_is_saved_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Main_is_saved_get;
    return fn(ptr);
}

bool BlendData_use_autopack_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_Main_use_autopack_get;
    return fn(ptr);
}

void BlendData_use_autopack_set(PointerRNA *ptr, bool value)
{
    PropBooleanSetFunc fn = rna_Main_use_autopack_set;
    fn(ptr, value);
}

void BlendData_version_get(PointerRNA *ptr, int values[3])
{
    PropIntArrayGetFunc fn = rna_Main_version_get;
    fn(ptr, values);
}

static PointerRNA BlendData_cameras_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Camera, rna_iterator_listbase_get(iter));
}

void BlendData_cameras_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_cameras;

    PropCollectionBeginFunc fn = rna_Main_cameras_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_cameras_get(iter);
    }
}

void BlendData_cameras_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_cameras_get(iter);
    }
}

void BlendData_cameras_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_cameras_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_cameras_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_cameras_get(&iter); }
    }

    BlendData_cameras_end(&iter);

    return found;
}

static PointerRNA BlendData_scenes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Scene, rna_iterator_listbase_get(iter));
}

void BlendData_scenes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_scenes;

    PropCollectionBeginFunc fn = rna_Main_scenes_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_scenes_get(iter);
    }
}

void BlendData_scenes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_scenes_get(iter);
    }
}

void BlendData_scenes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_scenes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_scenes_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_scenes_get(&iter); }
    }

    BlendData_scenes_end(&iter);

    return found;
}

static PointerRNA BlendData_objects_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Object, rna_iterator_listbase_get(iter));
}

void BlendData_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_objects;

    PropCollectionBeginFunc fn = rna_Main_objects_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_objects_get(iter);
    }
}

void BlendData_objects_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_objects_get(iter);
    }
}

void BlendData_objects_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_objects_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_objects_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_objects_get(&iter); }
    }

    BlendData_objects_end(&iter);

    return found;
}

static PointerRNA BlendData_materials_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Material, rna_iterator_listbase_get(iter));
}

void BlendData_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_materials;

    PropCollectionBeginFunc fn = rna_Main_materials_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_materials_get(iter);
    }
}

void BlendData_materials_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_materials_get(iter);
    }
}

void BlendData_materials_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_materials_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_materials_get(&iter); }
    }

    BlendData_materials_end(&iter);

    return found;
}

static PointerRNA BlendData_node_groups_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_NodeTree, rna_iterator_listbase_get(iter));
}

void BlendData_node_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_node_groups;

    PropCollectionBeginFunc fn = rna_Main_nodetrees_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_node_groups_get(iter);
    }
}

void BlendData_node_groups_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_node_groups_get(iter);
    }
}

void BlendData_node_groups_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_node_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_node_groups_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_node_groups_get(&iter); }
    }

    BlendData_node_groups_end(&iter);

    return found;
}

static PointerRNA BlendData_meshes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Mesh, rna_iterator_listbase_get(iter));
}

void BlendData_meshes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_meshes;

    PropCollectionBeginFunc fn = rna_Main_meshes_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_meshes_get(iter);
    }
}

void BlendData_meshes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_meshes_get(iter);
    }
}

void BlendData_meshes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_meshes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_meshes_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_meshes_get(&iter); }
    }

    BlendData_meshes_end(&iter);

    return found;
}

static PointerRNA BlendData_lights_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Light, rna_iterator_listbase_get(iter));
}

void BlendData_lights_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_lights;

    PropCollectionBeginFunc fn = rna_Main_lights_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_lights_get(iter);
    }
}

void BlendData_lights_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_lights_get(iter);
    }
}

void BlendData_lights_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_lights_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_lights_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_lights_get(&iter); }
    }

    BlendData_lights_end(&iter);

    return found;
}

static PointerRNA BlendData_libraries_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Library, rna_iterator_listbase_get(iter));
}

void BlendData_libraries_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_libraries;

    PropCollectionBeginFunc fn = rna_Main_libraries_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_libraries_get(iter);
    }
}

void BlendData_libraries_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_libraries_get(iter);
    }
}

void BlendData_libraries_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_libraries_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_libraries_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_libraries_get(&iter); }
    }

    BlendData_libraries_end(&iter);

    return found;
}

static PointerRNA BlendData_screens_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Screen, rna_iterator_listbase_get(iter));
}

void BlendData_screens_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_screens;

    PropCollectionBeginFunc fn = rna_Main_screens_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_screens_get(iter);
    }
}

void BlendData_screens_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_screens_get(iter);
    }
}

void BlendData_screens_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_screens_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_screens_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_screens_get(&iter); }
    }

    BlendData_screens_end(&iter);

    return found;
}

static PointerRNA BlendData_window_managers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_WindowManager, rna_iterator_listbase_get(iter));
}

void BlendData_window_managers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_window_managers;

    PropCollectionBeginFunc fn = rna_Main_wm_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_window_managers_get(iter);
    }
}

void BlendData_window_managers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_window_managers_get(iter);
    }
}

void BlendData_window_managers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_window_managers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_window_managers_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_window_managers_get(&iter); }
    }

    BlendData_window_managers_end(&iter);

    return found;
}

static PointerRNA BlendData_images_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Image, rna_iterator_listbase_get(iter));
}

void BlendData_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_images;

    PropCollectionBeginFunc fn = rna_Main_images_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_images_get(iter);
    }
}

void BlendData_images_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_images_get(iter);
    }
}

void BlendData_images_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_images_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_images_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_images_get(&iter); }
    }

    BlendData_images_end(&iter);

    return found;
}

static PointerRNA BlendData_lattices_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Lattice, rna_iterator_listbase_get(iter));
}

void BlendData_lattices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_lattices;

    PropCollectionBeginFunc fn = rna_Main_lattices_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_lattices_get(iter);
    }
}

void BlendData_lattices_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_lattices_get(iter);
    }
}

void BlendData_lattices_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_lattices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_lattices_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_lattices_get(&iter); }
    }

    BlendData_lattices_end(&iter);

    return found;
}

static PointerRNA BlendData_curves_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Curve, rna_iterator_listbase_get(iter));
}

void BlendData_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_curves;

    PropCollectionBeginFunc fn = rna_Main_curves_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_curves_get(iter);
    }
}

void BlendData_curves_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_curves_get(iter);
    }
}

void BlendData_curves_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_curves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_curves_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_curves_get(&iter); }
    }

    BlendData_curves_end(&iter);

    return found;
}

static PointerRNA BlendData_metaballs_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MetaBall, rna_iterator_listbase_get(iter));
}

void BlendData_metaballs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_metaballs;

    PropCollectionBeginFunc fn = rna_Main_metaballs_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_metaballs_get(iter);
    }
}

void BlendData_metaballs_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_metaballs_get(iter);
    }
}

void BlendData_metaballs_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_metaballs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_metaballs_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_metaballs_get(&iter); }
    }

    BlendData_metaballs_end(&iter);

    return found;
}

static PointerRNA BlendData_fonts_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_VectorFont, rna_iterator_listbase_get(iter));
}

void BlendData_fonts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_fonts;

    PropCollectionBeginFunc fn = rna_Main_fonts_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_fonts_get(iter);
    }
}

void BlendData_fonts_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_fonts_get(iter);
    }
}

void BlendData_fonts_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_fonts_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_fonts_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_fonts_get(&iter); }
    }

    BlendData_fonts_end(&iter);

    return found;
}

static PointerRNA BlendData_textures_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Texture, rna_iterator_listbase_get(iter));
}

void BlendData_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_textures;

    PropCollectionBeginFunc fn = rna_Main_textures_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_textures_get(iter);
    }
}

void BlendData_textures_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_textures_get(iter);
    }
}

void BlendData_textures_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_textures_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_textures_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_textures_get(&iter); }
    }

    BlendData_textures_end(&iter);

    return found;
}

static PointerRNA BlendData_brushes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Brush, rna_iterator_listbase_get(iter));
}

void BlendData_brushes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_brushes;

    PropCollectionBeginFunc fn = rna_Main_brushes_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_brushes_get(iter);
    }
}

void BlendData_brushes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_brushes_get(iter);
    }
}

void BlendData_brushes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_brushes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_brushes_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_brushes_get(&iter); }
    }

    BlendData_brushes_end(&iter);

    return found;
}

static PointerRNA BlendData_worlds_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_World, rna_iterator_listbase_get(iter));
}

void BlendData_worlds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_worlds;

    PropCollectionBeginFunc fn = rna_Main_worlds_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_worlds_get(iter);
    }
}

void BlendData_worlds_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_worlds_get(iter);
    }
}

void BlendData_worlds_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_worlds_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_worlds_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_worlds_get(&iter); }
    }

    BlendData_worlds_end(&iter);

    return found;
}

static PointerRNA BlendData_collections_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Collection, rna_iterator_listbase_get(iter));
}

void BlendData_collections_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_collections;

    PropCollectionBeginFunc fn = rna_Main_collections_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_collections_get(iter);
    }
}

void BlendData_collections_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_collections_get(iter);
    }
}

void BlendData_collections_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_collections_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_collections_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_collections_get(&iter); }
    }

    BlendData_collections_end(&iter);

    return found;
}

static PointerRNA BlendData_shape_keys_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Key, rna_iterator_listbase_get(iter));
}

void BlendData_shape_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_shape_keys;

    PropCollectionBeginFunc fn = rna_Main_shapekeys_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_shape_keys_get(iter);
    }
}

void BlendData_shape_keys_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_shape_keys_get(iter);
    }
}

void BlendData_shape_keys_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_shape_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_shape_keys_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_shape_keys_get(&iter); }
    }

    BlendData_shape_keys_end(&iter);

    return found;
}

static PointerRNA BlendData_texts_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Text, rna_iterator_listbase_get(iter));
}

void BlendData_texts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_texts;

    PropCollectionBeginFunc fn = rna_Main_texts_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_texts_get(iter);
    }
}

void BlendData_texts_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_texts_get(iter);
    }
}

void BlendData_texts_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_texts_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_texts_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_texts_get(&iter); }
    }

    BlendData_texts_end(&iter);

    return found;
}

static PointerRNA BlendData_speakers_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Speaker, rna_iterator_listbase_get(iter));
}

void BlendData_speakers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_speakers;

    PropCollectionBeginFunc fn = rna_Main_speakers_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_speakers_get(iter);
    }
}

void BlendData_speakers_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_speakers_get(iter);
    }
}

void BlendData_speakers_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_speakers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_speakers_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_speakers_get(&iter); }
    }

    BlendData_speakers_end(&iter);

    return found;
}

static PointerRNA BlendData_sounds_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Sound, rna_iterator_listbase_get(iter));
}

void BlendData_sounds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_sounds;

    PropCollectionBeginFunc fn = rna_Main_sounds_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_sounds_get(iter);
    }
}

void BlendData_sounds_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_sounds_get(iter);
    }
}

void BlendData_sounds_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_sounds_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_sounds_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_sounds_get(&iter); }
    }

    BlendData_sounds_end(&iter);

    return found;
}

static PointerRNA BlendData_armatures_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Armature, rna_iterator_listbase_get(iter));
}

void BlendData_armatures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_armatures;

    PropCollectionBeginFunc fn = rna_Main_armatures_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_armatures_get(iter);
    }
}

void BlendData_armatures_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_armatures_get(iter);
    }
}

void BlendData_armatures_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_armatures_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_armatures_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_armatures_get(&iter); }
    }

    BlendData_armatures_end(&iter);

    return found;
}

static PointerRNA BlendData_actions_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Action, rna_iterator_listbase_get(iter));
}

void BlendData_actions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_actions;

    PropCollectionBeginFunc fn = rna_Main_actions_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_actions_get(iter);
    }
}

void BlendData_actions_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_actions_get(iter);
    }
}

void BlendData_actions_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_actions_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_actions_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_actions_get(&iter); }
    }

    BlendData_actions_end(&iter);

    return found;
}

static PointerRNA BlendData_particles_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_ParticleSettings, rna_iterator_listbase_get(iter));
}

void BlendData_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_particles;

    PropCollectionBeginFunc fn = rna_Main_particles_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_particles_get(iter);
    }
}

void BlendData_particles_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_particles_get(iter);
    }
}

void BlendData_particles_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_particles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_particles_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_particles_get(&iter); }
    }

    BlendData_particles_end(&iter);

    return found;
}

static PointerRNA BlendData_palettes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Palette, rna_iterator_listbase_get(iter));
}

void BlendData_palettes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_palettes;

    PropCollectionBeginFunc fn = rna_Main_palettes_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_palettes_get(iter);
    }
}

void BlendData_palettes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_palettes_get(iter);
    }
}

void BlendData_palettes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_palettes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_palettes_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_palettes_get(&iter); }
    }

    BlendData_palettes_end(&iter);

    return found;
}

static PointerRNA BlendData_annotations_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Annotation, rna_iterator_listbase_get(iter));
}

void BlendData_annotations_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_annotations;

    PropCollectionBeginFunc fn = rna_Main_gpencils_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_annotations_get(iter);
    }
}

void BlendData_annotations_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_annotations_get(iter);
    }
}

void BlendData_annotations_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_annotations_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_annotations_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_annotations_get(&iter); }
    }

    BlendData_annotations_end(&iter);

    return found;
}

static PointerRNA BlendData_grease_pencils_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_GreasePencil, rna_iterator_listbase_get(iter));
}

void BlendData_grease_pencils_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_grease_pencils;

    PropCollectionBeginFunc fn = rna_Main_grease_pencils_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_grease_pencils_get(iter);
    }
}

void BlendData_grease_pencils_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_grease_pencils_get(iter);
    }
}

void BlendData_grease_pencils_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_grease_pencils_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_grease_pencils_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_grease_pencils_get(&iter); }
    }

    BlendData_grease_pencils_end(&iter);

    return found;
}

static PointerRNA BlendData_movieclips_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_MovieClip, rna_iterator_listbase_get(iter));
}

void BlendData_movieclips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_movieclips;

    PropCollectionBeginFunc fn = rna_Main_movieclips_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_movieclips_get(iter);
    }
}

void BlendData_movieclips_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_movieclips_get(iter);
    }
}

void BlendData_movieclips_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_movieclips_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_movieclips_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_movieclips_get(&iter); }
    }

    BlendData_movieclips_end(&iter);

    return found;
}

static PointerRNA BlendData_masks_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Mask, rna_iterator_listbase_get(iter));
}

void BlendData_masks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_masks;

    PropCollectionBeginFunc fn = rna_Main_masks_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_masks_get(iter);
    }
}

void BlendData_masks_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_masks_get(iter);
    }
}

void BlendData_masks_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_masks_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_masks_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_masks_get(&iter); }
    }

    BlendData_masks_end(&iter);

    return found;
}

static PointerRNA BlendData_linestyles_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_FreestyleLineStyle, rna_iterator_listbase_get(iter));
}

void BlendData_linestyles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_linestyles;

    PropCollectionBeginFunc fn = rna_Main_linestyles_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_linestyles_get(iter);
    }
}

void BlendData_linestyles_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_linestyles_get(iter);
    }
}

void BlendData_linestyles_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_linestyles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_linestyles_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_linestyles_get(&iter); }
    }

    BlendData_linestyles_end(&iter);

    return found;
}

static PointerRNA BlendData_cache_files_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_CacheFile, rna_iterator_listbase_get(iter));
}

void BlendData_cache_files_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_cache_files;

    PropCollectionBeginFunc fn = rna_Main_cachefiles_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_cache_files_get(iter);
    }
}

void BlendData_cache_files_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_cache_files_get(iter);
    }
}

void BlendData_cache_files_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_cache_files_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_cache_files_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_cache_files_get(&iter); }
    }

    BlendData_cache_files_end(&iter);

    return found;
}

static PointerRNA BlendData_paint_curves_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_PaintCurve, rna_iterator_listbase_get(iter));
}

void BlendData_paint_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_paint_curves;

    PropCollectionBeginFunc fn = rna_Main_paintcurves_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_paint_curves_get(iter);
    }
}

void BlendData_paint_curves_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_paint_curves_get(iter);
    }
}

void BlendData_paint_curves_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_paint_curves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_paint_curves_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_paint_curves_get(&iter); }
    }

    BlendData_paint_curves_end(&iter);

    return found;
}

static PointerRNA BlendData_workspaces_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_WorkSpace, rna_iterator_listbase_get(iter));
}

void BlendData_workspaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_workspaces;

    PropCollectionBeginFunc fn = rna_Main_workspaces_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_workspaces_get(iter);
    }
}

void BlendData_workspaces_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_workspaces_get(iter);
    }
}

void BlendData_workspaces_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_workspaces_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_workspaces_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_workspaces_get(&iter); }
    }

    BlendData_workspaces_end(&iter);

    return found;
}

static PointerRNA BlendData_lightprobes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_LightProbe, rna_iterator_listbase_get(iter));
}

void BlendData_lightprobes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_lightprobes;

    PropCollectionBeginFunc fn = rna_Main_lightprobes_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_lightprobes_get(iter);
    }
}

void BlendData_lightprobes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_lightprobes_get(iter);
    }
}

void BlendData_lightprobes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_lightprobes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_lightprobes_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_lightprobes_get(&iter); }
    }

    BlendData_lightprobes_end(&iter);

    return found;
}

static PointerRNA BlendData_hair_curves_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Curves, rna_iterator_listbase_get(iter));
}

void BlendData_hair_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_hair_curves;

    PropCollectionBeginFunc fn = rna_Main_hair_curves_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_hair_curves_get(iter);
    }
}

void BlendData_hair_curves_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_hair_curves_get(iter);
    }
}

void BlendData_hair_curves_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_hair_curves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_hair_curves_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_hair_curves_get(&iter); }
    }

    BlendData_hair_curves_end(&iter);

    return found;
}

static PointerRNA BlendData_pointclouds_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_PointCloud, rna_iterator_listbase_get(iter));
}

void BlendData_pointclouds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_pointclouds;

    PropCollectionBeginFunc fn = rna_Main_pointclouds_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_pointclouds_get(iter);
    }
}

void BlendData_pointclouds_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_pointclouds_get(iter);
    }
}

void BlendData_pointclouds_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_pointclouds_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_pointclouds_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_pointclouds_get(&iter); }
    }

    BlendData_pointclouds_end(&iter);

    return found;
}

static PointerRNA BlendData_volumes_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_Volume, rna_iterator_listbase_get(iter));
}

void BlendData_volumes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_volumes;

    PropCollectionBeginFunc fn = rna_Main_volumes_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_volumes_get(iter);
    }
}

void BlendData_volumes_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_volumes_get(iter);
    }
}

void BlendData_volumes_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendData_volumes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BlendData_volumes_begin(&iter, ptr);

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
        if (found) { *r_ptr = BlendData_volumes_get(&iter); }
    }

    BlendData_volumes_end(&iter);

    return found;
}

PointerRNA BlendData_colorspace_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Main_colorspace_get;
    return fn(ptr);
}

int BlendData_all_ids_length(PointerRNA *ptr)
{
    PropCollectionLengthFunc fn = rna_iterator_BlendData_all_ids_length;
    return fn(ptr);
}

static PointerRNA BlendData_all_ids_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_iterator_BlendData_all_ids_get;
    return fn(iter);
}

void BlendData_all_ids_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendData_all_ids;

    PropCollectionBeginFunc fn = rna_iterator_BlendData_all_ids_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendData_all_ids_get(iter);
    }
}

void BlendData_all_ids_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_BlendData_all_ids_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendData_all_ids_get(iter);
    }
}

void BlendData_all_ids_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_BlendData_all_ids_end;
    fn(iter);
}

PointerRNA BlendData_project_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Main_blender_project_get;
    return fn(ptr);
}

static PointerRNA BlendDataCameras_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataCameras_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataCameras_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataCameras_rna_properties_get(iter);
    }
}

void BlendDataCameras_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataCameras_rna_properties_get(iter);
    }
}

void BlendDataCameras_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataCameras_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataCameras_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataScenes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataScenes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataScenes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataScenes_rna_properties_get(iter);
    }
}

void BlendDataScenes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataScenes_rna_properties_get(iter);
    }
}

void BlendDataScenes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataScenes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataScenes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataObjects_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataObjects_rna_properties_get(iter);
    }
}

void BlendDataObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataObjects_rna_properties_get(iter);
    }
}

void BlendDataObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataObjects_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataObjects_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataMaterials_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataMaterials_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataMaterials_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMaterials_rna_properties_get(iter);
    }
}

void BlendDataMaterials_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMaterials_rna_properties_get(iter);
    }
}

void BlendDataMaterials_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataMaterials_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataMaterials_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataNodeTrees_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataNodeTrees_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataNodeTrees_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataNodeTrees_rna_properties_get(iter);
    }
}

void BlendDataNodeTrees_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataNodeTrees_rna_properties_get(iter);
    }
}

void BlendDataNodeTrees_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataNodeTrees_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataNodeTrees_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataMeshes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataMeshes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataMeshes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMeshes_rna_properties_get(iter);
    }
}

void BlendDataMeshes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMeshes_rna_properties_get(iter);
    }
}

void BlendDataMeshes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataMeshes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataMeshes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataLights_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataLights_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataLights_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataLights_rna_properties_get(iter);
    }
}

void BlendDataLights_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataLights_rna_properties_get(iter);
    }
}

void BlendDataLights_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataLights_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataLights_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataLibraries_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataLibraries_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataLibraries_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataLibraries_rna_properties_get(iter);
    }
}

void BlendDataLibraries_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataLibraries_rna_properties_get(iter);
    }
}

void BlendDataLibraries_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataLibraries_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataLibraries_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataScreens_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataScreens_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataScreens_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataScreens_rna_properties_get(iter);
    }
}

void BlendDataScreens_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataScreens_rna_properties_get(iter);
    }
}

void BlendDataScreens_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataScreens_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataScreens_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataWindowManagers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataWindowManagers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataWindowManagers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataWindowManagers_rna_properties_get(iter);
    }
}

void BlendDataWindowManagers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataWindowManagers_rna_properties_get(iter);
    }
}

void BlendDataWindowManagers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataWindowManagers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataWindowManagers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataImages_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataImages_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataImages_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataImages_rna_properties_get(iter);
    }
}

void BlendDataImages_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataImages_rna_properties_get(iter);
    }
}

void BlendDataImages_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataImages_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataImages_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataLattices_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataLattices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataLattices_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataLattices_rna_properties_get(iter);
    }
}

void BlendDataLattices_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataLattices_rna_properties_get(iter);
    }
}

void BlendDataLattices_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataLattices_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataLattices_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataCurves_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataCurves_rna_properties_get(iter);
    }
}

void BlendDataCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataCurves_rna_properties_get(iter);
    }
}

void BlendDataCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataCurves_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataMetaBalls_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataMetaBalls_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataMetaBalls_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMetaBalls_rna_properties_get(iter);
    }
}

void BlendDataMetaBalls_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMetaBalls_rna_properties_get(iter);
    }
}

void BlendDataMetaBalls_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataMetaBalls_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataMetaBalls_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataFonts_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataFonts_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataFonts_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataFonts_rna_properties_get(iter);
    }
}

void BlendDataFonts_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataFonts_rna_properties_get(iter);
    }
}

void BlendDataFonts_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataFonts_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataFonts_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataTextures_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataTextures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataTextures_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataTextures_rna_properties_get(iter);
    }
}

void BlendDataTextures_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataTextures_rna_properties_get(iter);
    }
}

void BlendDataTextures_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataTextures_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataTextures_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataBrushes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataBrushes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataBrushes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataBrushes_rna_properties_get(iter);
    }
}

void BlendDataBrushes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataBrushes_rna_properties_get(iter);
    }
}

void BlendDataBrushes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataBrushes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataBrushes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataWorlds_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataWorlds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataWorlds_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataWorlds_rna_properties_get(iter);
    }
}

void BlendDataWorlds_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataWorlds_rna_properties_get(iter);
    }
}

void BlendDataWorlds_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataWorlds_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataWorlds_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataCollections_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataCollections_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataCollections_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataCollections_rna_properties_get(iter);
    }
}

void BlendDataCollections_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataCollections_rna_properties_get(iter);
    }
}

void BlendDataCollections_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataCollections_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataCollections_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataTexts_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataTexts_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataTexts_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataTexts_rna_properties_get(iter);
    }
}

void BlendDataTexts_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataTexts_rna_properties_get(iter);
    }
}

void BlendDataTexts_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataTexts_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataTexts_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataSpeakers_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataSpeakers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataSpeakers_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataSpeakers_rna_properties_get(iter);
    }
}

void BlendDataSpeakers_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataSpeakers_rna_properties_get(iter);
    }
}

void BlendDataSpeakers_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataSpeakers_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataSpeakers_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataSounds_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataSounds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataSounds_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataSounds_rna_properties_get(iter);
    }
}

void BlendDataSounds_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataSounds_rna_properties_get(iter);
    }
}

void BlendDataSounds_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataSounds_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataSounds_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataArmatures_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataArmatures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataArmatures_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataArmatures_rna_properties_get(iter);
    }
}

void BlendDataArmatures_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataArmatures_rna_properties_get(iter);
    }
}

void BlendDataArmatures_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataArmatures_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataArmatures_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataActions_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataActions_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataActions_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataActions_rna_properties_get(iter);
    }
}

void BlendDataActions_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataActions_rna_properties_get(iter);
    }
}

void BlendDataActions_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataActions_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataActions_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataParticles_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataParticles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataParticles_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataParticles_rna_properties_get(iter);
    }
}

void BlendDataParticles_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataParticles_rna_properties_get(iter);
    }
}

void BlendDataParticles_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataParticles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataParticles_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataPalettes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataPalettes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataPalettes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataPalettes_rna_properties_get(iter);
    }
}

void BlendDataPalettes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataPalettes_rna_properties_get(iter);
    }
}

void BlendDataPalettes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataPalettes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataPalettes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataAnnotations_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataAnnotations_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataAnnotations_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataAnnotations_rna_properties_get(iter);
    }
}

void BlendDataAnnotations_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataAnnotations_rna_properties_get(iter);
    }
}

void BlendDataAnnotations_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataAnnotations_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataAnnotations_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataGreasePencilsV3_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataGreasePencilsV3_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataGreasePencilsV3_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataGreasePencilsV3_rna_properties_get(iter);
    }
}

void BlendDataGreasePencilsV3_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataGreasePencilsV3_rna_properties_get(iter);
    }
}

void BlendDataGreasePencilsV3_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataGreasePencilsV3_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataGreasePencilsV3_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataMovieClips_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataMovieClips_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataMovieClips_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMovieClips_rna_properties_get(iter);
    }
}

void BlendDataMovieClips_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMovieClips_rna_properties_get(iter);
    }
}

void BlendDataMovieClips_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataMovieClips_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataMovieClips_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataMasks_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataMasks_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataMasks_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataMasks_rna_properties_get(iter);
    }
}

void BlendDataMasks_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataMasks_rna_properties_get(iter);
    }
}

void BlendDataMasks_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataMasks_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataMasks_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataLineStyles_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataLineStyles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataLineStyles_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataLineStyles_rna_properties_get(iter);
    }
}

void BlendDataLineStyles_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataLineStyles_rna_properties_get(iter);
    }
}

void BlendDataLineStyles_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataLineStyles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataLineStyles_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataCacheFiles_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataCacheFiles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataCacheFiles_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataCacheFiles_rna_properties_get(iter);
    }
}

void BlendDataCacheFiles_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataCacheFiles_rna_properties_get(iter);
    }
}

void BlendDataCacheFiles_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataCacheFiles_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataCacheFiles_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataPaintCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataPaintCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataPaintCurves_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataPaintCurves_rna_properties_get(iter);
    }
}

void BlendDataPaintCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataPaintCurves_rna_properties_get(iter);
    }
}

void BlendDataPaintCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataPaintCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataPaintCurves_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataWorkSpaces_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataWorkSpaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataWorkSpaces_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataWorkSpaces_rna_properties_get(iter);
    }
}

void BlendDataWorkSpaces_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataWorkSpaces_rna_properties_get(iter);
    }
}

void BlendDataWorkSpaces_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataWorkSpaces_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataWorkSpaces_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataProbes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataProbes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataProbes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataProbes_rna_properties_get(iter);
    }
}

void BlendDataProbes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataProbes_rna_properties_get(iter);
    }
}

void BlendDataProbes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataProbes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataProbes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataHairCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataHairCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataHairCurves_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataHairCurves_rna_properties_get(iter);
    }
}

void BlendDataHairCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataHairCurves_rna_properties_get(iter);
    }
}

void BlendDataHairCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataHairCurves_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataHairCurves_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataPointClouds_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataPointClouds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataPointClouds_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataPointClouds_rna_properties_get(iter);
    }
}

void BlendDataPointClouds_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataPointClouds_rna_properties_get(iter);
    }
}

void BlendDataPointClouds_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataPointClouds_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataPointClouds_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendDataVolumes_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendDataVolumes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendDataVolumes_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendDataVolumes_rna_properties_get(iter);
    }
}

void BlendDataVolumes_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendDataVolumes_rna_properties_get(iter);
    }
}

void BlendDataVolumes_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendDataVolumes_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendDataVolumes_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

static PointerRNA BlendFileColorspace_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BlendFileColorspace_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BlendFileColorspace_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BlendFileColorspace_rna_properties_get(iter);
    }
}

void BlendFileColorspace_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BlendFileColorspace_rna_properties_get(iter);
    }
}

void BlendFileColorspace_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BlendFileColorspace_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BlendFileColorspace_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int BlendFileColorspace_working_space_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_MainColorspace_working_space_get;
    return fn(ptr);
}

void BlendFileColorspace_working_space_interop_id_get(PointerRNA *ptr, char *value)
{
    PropStringGetFunc fn = rna_MainColorspace_working_space_interop_id_get;
    fn(ptr, value);
}

int BlendFileColorspace_working_space_interop_id_length(PointerRNA *ptr)
{
    PropStringLengthFunc fn = rna_MainColorspace_working_space_interop_id_length;
    return fn(ptr);
}

bool BlendFileColorspace_is_missing_opencolorio_config_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_MainColorspace_is_missing_opencolorio_config_get;
    return fn(ptr);
}

ID *BlendData_pack_linked_ids_hierarchy_func(BlendData *_self, ReportList *reports, ID *root_id)
{
	return rna_Main_pack_linked_ids_hierarchy(_self, reports, root_id);
}

static void BlendData_pack_linked_ids_hierarchy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	BlendData *_self;
	ID *root_id;
	ID *packed_id;
	char *_data, *_retdata;
	
	_self = (BlendData *)_ptr->data;
	_data = (char *)_parms->data;
	root_id = *((ID **)_data);
	_data += 8;
	_retdata = _data;
	
	packed_id = rna_Main_pack_linked_ids_hierarchy(_self, reports, root_id);
	*((ID **)_retdata) = packed_id;
}

void BlendData_project_init_func(BlendData *_self, ReportList *reports, const char * name, const char * project_root)
{
	rna_Main_blender_project_init(_self, reports, name, project_root);
}

static void BlendData_project_init_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	BlendData *_self;
	const char * name;
	const char * project_root;
	char *_data;
	
	_self = (BlendData *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	project_root = *((const char * *)_data);
	
	rna_Main_blender_project_init(_self, reports, name, project_root);
}

void BlendData_project_clear_func(BlendData *_self, ReportList *reports)
{
	rna_Main_blender_project_clear(_self, reports);
}

static void BlendData_project_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	BlendData *_self;
	_self = (BlendData *)_ptr->data;
	
	rna_Main_blender_project_clear(_self, reports);
}

/* Repeated prototypes to detect errors */

ID *rna_Main_pack_linked_ids_hierarchy(BlendData *_self, ReportList *reports, ID *root_id);
void rna_Main_blender_project_init(BlendData *_self, ReportList *reports, const char * name, const char * project_root);
void rna_Main_blender_project_clear(BlendData *_self, ReportList *reports);

Camera *BlendDataCameras_new_func(Main *_self, const char * name)
{
	return rna_Main_cameras_new(_self, name);
}

static void BlendDataCameras_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Camera *camera;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	camera = rna_Main_cameras_new(_self, name);
	*((Camera **)_retdata) = camera;
}

void BlendDataCameras_remove_func(Main *_self, ReportList *reports, PointerRNA *camera, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, camera, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataCameras_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *camera;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	camera = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, camera, do_unlink, do_id_user, do_ui_user);
}

void BlendDataCameras_tag_func(Main *_self, bool value)
{
	rna_Main_cameras_tag(_self, value);
}

static void BlendDataCameras_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_cameras_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Camera *rna_Main_cameras_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *camera, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_cameras_tag(Main *_self, bool value);

Scene *BlendDataScenes_new_func(Main *_self, const char * name)
{
	return rna_Main_scenes_new(_self, name);
}

static void BlendDataScenes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Scene *scene;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	scene = rna_Main_scenes_new(_self, name);
	*((Scene **)_retdata) = scene;
}

void BlendDataScenes_remove_func(Main *_self, bContext *C, ReportList *reports, PointerRNA *scene, bool do_unlink)
{
	rna_Main_scenes_remove(_self, C, reports, scene, do_unlink);
}

static void BlendDataScenes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *scene;
	bool do_unlink;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	scene = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	
	rna_Main_scenes_remove(_self, C, reports, scene, do_unlink);
}

void BlendDataScenes_tag_func(Main *_self, bool value)
{
	rna_Main_scenes_tag(_self, value);
}

static void BlendDataScenes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_scenes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Scene *rna_Main_scenes_new(Main *_self, const char * name);
void rna_Main_scenes_remove(Main *_self, bContext *C, ReportList *reports, PointerRNA *scene, bool do_unlink);
void rna_Main_scenes_tag(Main *_self, bool value);

Object *BlendDataObjects_new_func(Main *_self, ReportList *reports, const char * name, ID *object_data)
{
	return rna_Main_objects_new(_self, reports, name, object_data);
}

static void BlendDataObjects_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	ID *object_data;
	Object *object;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	object_data = *((ID **)_data);
	_data += 8;
	_retdata = _data;
	
	object = rna_Main_objects_new(_self, reports, name, object_data);
	*((Object **)_retdata) = object;
}

void BlendDataObjects_remove_func(Main *_self, ReportList *reports, PointerRNA *object, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, object, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataObjects_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *object;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, object, do_unlink, do_id_user, do_ui_user);
}

void BlendDataObjects_tag_func(Main *_self, bool value)
{
	rna_Main_objects_tag(_self, value);
}

static void BlendDataObjects_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_objects_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Object *rna_Main_objects_new(Main *_self, ReportList *reports, const char * name, ID *object_data);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *object, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_objects_tag(Main *_self, bool value);

Material *BlendDataMaterials_new_func(Main *_self, const char * name)
{
	return rna_Main_materials_new(_self, name);
}

static void BlendDataMaterials_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Material *material;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	material = rna_Main_materials_new(_self, name);
	*((Material **)_retdata) = material;
}

void BlendDataMaterials_create_gpencil_data_func(Main *_self, PointerRNA *material)
{
	rna_Main_materials_gpencil_data(_self, material);
}

static void BlendDataMaterials_create_gpencil_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *material;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	material = ((PointerRNA *)_data);
	
	rna_Main_materials_gpencil_data(_self, material);
}

void BlendDataMaterials_remove_gpencil_data_func(Main *_self, PointerRNA *material)
{
	rna_Main_materials_gpencil_remove(_self, material);
}

static void BlendDataMaterials_remove_gpencil_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *material;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	material = ((PointerRNA *)_data);
	
	rna_Main_materials_gpencil_remove(_self, material);
}

void BlendDataMaterials_remove_func(Main *_self, ReportList *reports, PointerRNA *material, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, material, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMaterials_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *material;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	material = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, material, do_unlink, do_id_user, do_ui_user);
}

void BlendDataMaterials_tag_func(Main *_self, bool value)
{
	rna_Main_materials_tag(_self, value);
}

static void BlendDataMaterials_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_materials_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Material *rna_Main_materials_new(Main *_self, const char * name);
void rna_Main_materials_gpencil_data(Main *_self, PointerRNA *material);
void rna_Main_materials_gpencil_remove(Main *_self, PointerRNA *material);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *material, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_materials_tag(Main *_self, bool value);

bNodeTree *BlendDataNodeTrees_new_func(Main *_self, const char * name, int type)
{
	return rna_Main_nodetree_new(_self, name, type);
}

static void BlendDataNodeTrees_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	int type;
	bNodeTree *tree;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	tree = rna_Main_nodetree_new(_self, name, type);
	*((bNodeTree **)_retdata) = tree;
}

void BlendDataNodeTrees_remove_func(Main *_self, ReportList *reports, PointerRNA *tree, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, tree, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataNodeTrees_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *tree;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	tree = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, tree, do_unlink, do_id_user, do_ui_user);
}

void BlendDataNodeTrees_tag_func(Main *_self, bool value)
{
	rna_Main_node_groups_tag(_self, value);
}

static void BlendDataNodeTrees_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_node_groups_tag(_self, value);
}

/* Repeated prototypes to detect errors */

bNodeTree *rna_Main_nodetree_new(Main *_self, const char * name, int type);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *tree, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_node_groups_tag(Main *_self, bool value);

Mesh *BlendDataMeshes_new_func(Main *_self, const char * name)
{
	return rna_Main_meshes_new(_self, name);
}

static void BlendDataMeshes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	mesh = rna_Main_meshes_new(_self, name);
	*((Mesh **)_retdata) = mesh;
}

Mesh *BlendDataMeshes_new_from_object_func(Main *_self, ReportList *reports, Object *object, bool preserve_all_data_layers, Depsgraph *depsgraph)
{
	return rna_Main_meshes_new_from_object(_self, reports, object, preserve_all_data_layers, depsgraph);
}

static void BlendDataMeshes_new_from_object_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	Object *object;
	bool preserve_all_data_layers;
	Depsgraph *depsgraph;
	Mesh *mesh;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	object = *((Object **)_data);
	_data += 8;
	preserve_all_data_layers = *((bool *)_data);
	_data += 8;
	depsgraph = *((Depsgraph **)_data);
	_data += 8;
	_retdata = _data;
	
	mesh = rna_Main_meshes_new_from_object(_self, reports, object, preserve_all_data_layers, depsgraph);
	*((Mesh **)_retdata) = mesh;
}

void BlendDataMeshes_remove_func(Main *_self, ReportList *reports, PointerRNA *mesh, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, mesh, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMeshes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *mesh;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	mesh = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, mesh, do_unlink, do_id_user, do_ui_user);
}

void BlendDataMeshes_tag_func(Main *_self, bool value)
{
	rna_Main_meshes_tag(_self, value);
}

static void BlendDataMeshes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_meshes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Mesh *rna_Main_meshes_new(Main *_self, const char * name);
Mesh *rna_Main_meshes_new_from_object(Main *_self, ReportList *reports, Object *object, bool preserve_all_data_layers, Depsgraph *depsgraph);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *mesh, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_meshes_tag(Main *_self, bool value);

Light *BlendDataLights_new_func(Main *_self, const char * name, int type)
{
	return rna_Main_lights_new(_self, name, type);
}

static void BlendDataLights_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	int type;
	Light *light;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	light = rna_Main_lights_new(_self, name, type);
	*((Light **)_retdata) = light;
}

void BlendDataLights_remove_func(Main *_self, ReportList *reports, PointerRNA *light, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, light, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataLights_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *light;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	light = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, light, do_unlink, do_id_user, do_ui_user);
}

void BlendDataLights_tag_func(Main *_self, bool value)
{
	rna_Main_lights_tag(_self, value);
}

static void BlendDataLights_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_lights_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Light *rna_Main_lights_new(Main *_self, const char * name, int type);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *light, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_lights_tag(Main *_self, bool value);

void BlendDataLibraries_tag_func(Main *_self, bool value)
{
	rna_Main_libraries_tag(_self, value);
}

static void BlendDataLibraries_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_libraries_tag(_self, value);
}

void BlendDataLibraries_remove_func(Main *_self, ReportList *reports, PointerRNA *library, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, library, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataLibraries_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *library;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	library = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, library, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_libraries_tag(Main *_self, bool value);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *library, bool do_unlink, bool do_id_user, bool do_ui_user);

void BlendDataScreens_tag_func(Main *_self, bool value)
{
	rna_Main_screens_tag(_self, value);
}

static void BlendDataScreens_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_screens_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_screens_tag(Main *_self, bool value);

void BlendDataWindowManagers_tag_func(Main *_self, bool value)
{
	rna_Main_window_managers_tag(_self, value);
}

static void BlendDataWindowManagers_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_window_managers_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_window_managers_tag(Main *_self, bool value);

Image *BlendDataImages_new_func(Main *_self, const char * name, int width, int height, bool alpha, bool float_buffer, bool stereo3d, bool is_data, bool tiled)
{
	return rna_Main_images_new(_self, name, width, height, alpha, float_buffer, stereo3d, is_data, tiled);
}

static void BlendDataImages_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	int width;
	int height;
	bool alpha;
	bool float_buffer;
	bool stereo3d;
	bool is_data;
	bool tiled;
	Image *image;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	width = *((int *)_data);
	_data += 8;
	height = *((int *)_data);
	_data += 8;
	alpha = *((bool *)_data);
	_data += 8;
	float_buffer = *((bool *)_data);
	_data += 8;
	stereo3d = *((bool *)_data);
	_data += 8;
	is_data = *((bool *)_data);
	_data += 8;
	tiled = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	image = rna_Main_images_new(_self, name, width, height, alpha, float_buffer, stereo3d, is_data, tiled);
	*((Image **)_retdata) = image;
}

Image *BlendDataImages_load_func(Main *_self, ReportList *reports, const char * filepath, bool check_existing)
{
	return rna_Main_images_load(_self, reports, filepath, check_existing);
}

static void BlendDataImages_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * filepath;
	bool check_existing;
	Image *image;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	check_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	image = rna_Main_images_load(_self, reports, filepath, check_existing);
	*((Image **)_retdata) = image;
}

void BlendDataImages_remove_func(Main *_self, ReportList *reports, PointerRNA *image, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, image, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataImages_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *image;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	image = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, image, do_unlink, do_id_user, do_ui_user);
}

void BlendDataImages_tag_func(Main *_self, bool value)
{
	rna_Main_images_tag(_self, value);
}

static void BlendDataImages_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_images_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Image *rna_Main_images_new(Main *_self, const char * name, int width, int height, bool alpha, bool float_buffer, bool stereo3d, bool is_data, bool tiled);
Image *rna_Main_images_load(Main *_self, ReportList *reports, const char * filepath, bool check_existing);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *image, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_images_tag(Main *_self, bool value);

Lattice *BlendDataLattices_new_func(Main *_self, const char * name)
{
	return rna_Main_lattices_new(_self, name);
}

static void BlendDataLattices_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Lattice *lattice;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	lattice = rna_Main_lattices_new(_self, name);
	*((Lattice **)_retdata) = lattice;
}

void BlendDataLattices_remove_func(Main *_self, ReportList *reports, PointerRNA *lattice, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, lattice, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataLattices_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *lattice;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	lattice = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, lattice, do_unlink, do_id_user, do_ui_user);
}

void BlendDataLattices_tag_func(Main *_self, bool value)
{
	rna_Main_lattices_tag(_self, value);
}

static void BlendDataLattices_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_lattices_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Lattice *rna_Main_lattices_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *lattice, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_lattices_tag(Main *_self, bool value);

Curve *BlendDataCurves_new_func(Main *_self, const char * name, int type)
{
	return rna_Main_curves_new(_self, name, type);
}

static void BlendDataCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	int type;
	Curve *curve;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	curve = rna_Main_curves_new(_self, name, type);
	*((Curve **)_retdata) = curve;
}

void BlendDataCurves_remove_func(Main *_self, ReportList *reports, PointerRNA *curve, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, curve, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *curve;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	curve = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, curve, do_unlink, do_id_user, do_ui_user);
}

void BlendDataCurves_tag_func(Main *_self, bool value)
{
	rna_Main_curves_tag(_self, value);
}

static void BlendDataCurves_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_curves_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Curve *rna_Main_curves_new(Main *_self, const char * name, int type);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *curve, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_curves_tag(Main *_self, bool value);

MetaBall *BlendDataMetaBalls_new_func(Main *_self, const char * name)
{
	return rna_Main_metaballs_new(_self, name);
}

static void BlendDataMetaBalls_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	MetaBall *metaball;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	metaball = rna_Main_metaballs_new(_self, name);
	*((MetaBall **)_retdata) = metaball;
}

void BlendDataMetaBalls_remove_func(Main *_self, ReportList *reports, PointerRNA *metaball, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, metaball, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMetaBalls_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *metaball;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	metaball = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, metaball, do_unlink, do_id_user, do_ui_user);
}

void BlendDataMetaBalls_tag_func(Main *_self, bool value)
{
	rna_Main_metaballs_tag(_self, value);
}

static void BlendDataMetaBalls_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_metaballs_tag(_self, value);
}

/* Repeated prototypes to detect errors */

MetaBall *rna_Main_metaballs_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *metaball, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_metaballs_tag(Main *_self, bool value);

VFont *BlendDataFonts_load_func(Main *_self, ReportList *reports, const char * filepath, bool check_existing)
{
	return rna_Main_fonts_load(_self, reports, filepath, check_existing);
}

static void BlendDataFonts_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * filepath;
	bool check_existing;
	VFont *vfont;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	check_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	vfont = rna_Main_fonts_load(_self, reports, filepath, check_existing);
	*((VFont **)_retdata) = vfont;
}

void BlendDataFonts_remove_func(Main *_self, ReportList *reports, PointerRNA *vfont, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, vfont, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataFonts_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *vfont;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	vfont = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, vfont, do_unlink, do_id_user, do_ui_user);
}

void BlendDataFonts_tag_func(Main *_self, bool value)
{
	rna_Main_fonts_tag(_self, value);
}

static void BlendDataFonts_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_fonts_tag(_self, value);
}

/* Repeated prototypes to detect errors */

VFont *rna_Main_fonts_load(Main *_self, ReportList *reports, const char * filepath, bool check_existing);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *vfont, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_fonts_tag(Main *_self, bool value);

Tex *BlendDataTextures_new_func(Main *_self, const char * name, int type)
{
	return rna_Main_textures_new(_self, name, type);
}

static void BlendDataTextures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	int type;
	Tex *texture;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	texture = rna_Main_textures_new(_self, name, type);
	*((Tex **)_retdata) = texture;
}

void BlendDataTextures_remove_func(Main *_self, ReportList *reports, PointerRNA *texture, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, texture, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataTextures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *texture;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	texture = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, texture, do_unlink, do_id_user, do_ui_user);
}

void BlendDataTextures_tag_func(Main *_self, bool value)
{
	rna_Main_textures_tag(_self, value);
}

static void BlendDataTextures_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_textures_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Tex *rna_Main_textures_new(Main *_self, const char * name, int type);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *texture, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_textures_tag(Main *_self, bool value);

Brush *BlendDataBrushes_new_func(Main *_self, const char * name, int mode)
{
	return rna_Main_brushes_new(_self, name, mode);
}

static void BlendDataBrushes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	int mode;
	Brush *brush;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	mode = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	brush = rna_Main_brushes_new(_self, name, mode);
	*((Brush **)_retdata) = brush;
}

void BlendDataBrushes_remove_func(Main *_self, ReportList *reports, PointerRNA *brush, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, brush, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataBrushes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *brush;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	brush = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, brush, do_unlink, do_id_user, do_ui_user);
}

void BlendDataBrushes_tag_func(Main *_self, bool value)
{
	rna_Main_brushes_tag(_self, value);
}

static void BlendDataBrushes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_brushes_tag(_self, value);
}

void BlendDataBrushes_create_gpencil_data_func(Main *_self, PointerRNA *brush)
{
	rna_Main_brush_gpencil_data(_self, brush);
}

static void BlendDataBrushes_create_gpencil_data_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *brush;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	brush = ((PointerRNA *)_data);
	
	rna_Main_brush_gpencil_data(_self, brush);
}

/* Repeated prototypes to detect errors */

Brush *rna_Main_brushes_new(Main *_self, const char * name, int mode);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *brush, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_brushes_tag(Main *_self, bool value);
void rna_Main_brush_gpencil_data(Main *_self, PointerRNA *brush);

World *BlendDataWorlds_new_func(Main *_self, const char * name)
{
	return rna_Main_worlds_new(_self, name);
}

static void BlendDataWorlds_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	World *world;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	world = rna_Main_worlds_new(_self, name);
	*((World **)_retdata) = world;
}

void BlendDataWorlds_remove_func(Main *_self, ReportList *reports, PointerRNA *world, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, world, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataWorlds_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *world;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	world = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, world, do_unlink, do_id_user, do_ui_user);
}

void BlendDataWorlds_tag_func(Main *_self, bool value)
{
	rna_Main_worlds_tag(_self, value);
}

static void BlendDataWorlds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_worlds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

World *rna_Main_worlds_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *world, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_worlds_tag(Main *_self, bool value);

Collection *BlendDataCollections_new_func(Main *_self, const char * name)
{
	return rna_Main_collections_new(_self, name);
}

static void BlendDataCollections_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Collection *collection;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	collection = rna_Main_collections_new(_self, name);
	*((Collection **)_retdata) = collection;
}

void BlendDataCollections_remove_func(Main *_self, ReportList *reports, PointerRNA *collection, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, collection, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataCollections_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *collection;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	collection = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, collection, do_unlink, do_id_user, do_ui_user);
}

void BlendDataCollections_tag_func(Main *_self, bool value)
{
	rna_Main_collections_tag(_self, value);
}

static void BlendDataCollections_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_collections_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Collection *rna_Main_collections_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *collection, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_collections_tag(Main *_self, bool value);

Text *BlendDataTexts_new_func(Main *_self, const char * name)
{
	return rna_Main_texts_new(_self, name);
}

static void BlendDataTexts_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Text *text;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	text = rna_Main_texts_new(_self, name);
	*((Text **)_retdata) = text;
}

void BlendDataTexts_remove_func(Main *_self, ReportList *reports, PointerRNA *text, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, text, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataTexts_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *text;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	text = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, text, do_unlink, do_id_user, do_ui_user);
}

Text *BlendDataTexts_load_func(Main *_self, ReportList *reports, const char * filepath, bool internal)
{
	return rna_Main_texts_load(_self, reports, filepath, internal);
}

static void BlendDataTexts_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * filepath;
	bool internal;
	Text *text;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	internal = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	text = rna_Main_texts_load(_self, reports, filepath, internal);
	*((Text **)_retdata) = text;
}

void BlendDataTexts_tag_func(Main *_self, bool value)
{
	rna_Main_texts_tag(_self, value);
}

static void BlendDataTexts_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_texts_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Text *rna_Main_texts_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *text, bool do_unlink, bool do_id_user, bool do_ui_user);
Text *rna_Main_texts_load(Main *_self, ReportList *reports, const char * filepath, bool internal);
void rna_Main_texts_tag(Main *_self, bool value);

Speaker *BlendDataSpeakers_new_func(Main *_self, const char * name)
{
	return rna_Main_speakers_new(_self, name);
}

static void BlendDataSpeakers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Speaker *speaker;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	speaker = rna_Main_speakers_new(_self, name);
	*((Speaker **)_retdata) = speaker;
}

void BlendDataSpeakers_remove_func(Main *_self, ReportList *reports, PointerRNA *speaker, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, speaker, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataSpeakers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *speaker;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	speaker = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, speaker, do_unlink, do_id_user, do_ui_user);
}

void BlendDataSpeakers_tag_func(Main *_self, bool value)
{
	rna_Main_speakers_tag(_self, value);
}

static void BlendDataSpeakers_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_speakers_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Speaker *rna_Main_speakers_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *speaker, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_speakers_tag(Main *_self, bool value);

bSound *BlendDataSounds_load_func(Main *_self, const char * filepath, bool check_existing)
{
	return rna_Main_sounds_load(_self, filepath, check_existing);
}

static void BlendDataSounds_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * filepath;
	bool check_existing;
	bSound *sound;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	check_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	sound = rna_Main_sounds_load(_self, filepath, check_existing);
	*((bSound **)_retdata) = sound;
}

void BlendDataSounds_remove_func(Main *_self, ReportList *reports, PointerRNA *sound, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, sound, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataSounds_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *sound;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	sound = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, sound, do_unlink, do_id_user, do_ui_user);
}

void BlendDataSounds_tag_func(Main *_self, bool value)
{
	rna_Main_sounds_tag(_self, value);
}

static void BlendDataSounds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_sounds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

bSound *rna_Main_sounds_load(Main *_self, const char * filepath, bool check_existing);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *sound, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_sounds_tag(Main *_self, bool value);

bArmature *BlendDataArmatures_new_func(Main *_self, const char * name)
{
	return rna_Main_armatures_new(_self, name);
}

static void BlendDataArmatures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	bArmature *armature;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	armature = rna_Main_armatures_new(_self, name);
	*((bArmature **)_retdata) = armature;
}

void BlendDataArmatures_remove_func(Main *_self, ReportList *reports, PointerRNA *armature, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, armature, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataArmatures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *armature;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	armature = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, armature, do_unlink, do_id_user, do_ui_user);
}

void BlendDataArmatures_tag_func(Main *_self, bool value)
{
	rna_Main_armatures_tag(_self, value);
}

static void BlendDataArmatures_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_armatures_tag(_self, value);
}

/* Repeated prototypes to detect errors */

bArmature *rna_Main_armatures_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *armature, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_armatures_tag(Main *_self, bool value);

bAction *BlendDataActions_new_func(Main *_self, const char * name)
{
	return rna_Main_actions_new(_self, name);
}

static void BlendDataActions_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	bAction *action;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	action = rna_Main_actions_new(_self, name);
	*((bAction **)_retdata) = action;
}

void BlendDataActions_remove_func(Main *_self, ReportList *reports, PointerRNA *action, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, action, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataActions_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *action;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	action = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, action, do_unlink, do_id_user, do_ui_user);
}

void BlendDataActions_tag_func(Main *_self, bool value)
{
	rna_Main_actions_tag(_self, value);
}

static void BlendDataActions_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_actions_tag(_self, value);
}

/* Repeated prototypes to detect errors */

bAction *rna_Main_actions_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *action, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_actions_tag(Main *_self, bool value);

ParticleSettings *BlendDataParticles_new_func(Main *_self, const char * name)
{
	return rna_Main_particles_new(_self, name);
}

static void BlendDataParticles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	ParticleSettings *particle;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	particle = rna_Main_particles_new(_self, name);
	*((ParticleSettings **)_retdata) = particle;
}

void BlendDataParticles_remove_func(Main *_self, ReportList *reports, PointerRNA *particle, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, particle, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataParticles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *particle;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	particle = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, particle, do_unlink, do_id_user, do_ui_user);
}

void BlendDataParticles_tag_func(Main *_self, bool value)
{
	rna_Main_particles_tag(_self, value);
}

static void BlendDataParticles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_particles_tag(_self, value);
}

/* Repeated prototypes to detect errors */

ParticleSettings *rna_Main_particles_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *particle, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_particles_tag(Main *_self, bool value);

Palette *BlendDataPalettes_new_func(Main *_self, const char * name)
{
	return rna_Main_palettes_new(_self, name);
}

static void BlendDataPalettes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Palette *palette;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	palette = rna_Main_palettes_new(_self, name);
	*((Palette **)_retdata) = palette;
}

void BlendDataPalettes_remove_func(Main *_self, ReportList *reports, PointerRNA *palette, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, palette, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataPalettes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *palette;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	palette = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, palette, do_unlink, do_id_user, do_ui_user);
}

void BlendDataPalettes_tag_func(Main *_self, bool value)
{
	rna_Main_palettes_tag(_self, value);
}

static void BlendDataPalettes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_palettes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Palette *rna_Main_palettes_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *palette, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_palettes_tag(Main *_self, bool value);

void BlendDataAnnotations_tag_func(Main *_self, bool value)
{
	rna_Main_gpencils_tag(_self, value);
}

static void BlendDataAnnotations_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_gpencils_tag(_self, value);
}

bGPdata *BlendDataAnnotations_new_func(Main *_self, const char * name)
{
	return rna_Main_annotations_new(_self, name);
}

static void BlendDataAnnotations_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	bGPdata *annotation;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	annotation = rna_Main_annotations_new(_self, name);
	*((bGPdata **)_retdata) = annotation;
}

void BlendDataAnnotations_remove_func(Main *_self, ReportList *reports, PointerRNA *annotation, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, annotation, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataAnnotations_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *annotation;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	annotation = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, annotation, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_gpencils_tag(Main *_self, bool value);
bGPdata *rna_Main_annotations_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *annotation, bool do_unlink, bool do_id_user, bool do_ui_user);

void BlendDataGreasePencilsV3_tag_func(Main *_self, bool value)
{
	rna_Main_grease_pencils_tag(_self, value);
}

static void BlendDataGreasePencilsV3_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_grease_pencils_tag(_self, value);
}

GreasePencil *BlendDataGreasePencilsV3_new_func(Main *_self, const char * name)
{
	return rna_Main_grease_pencils_new(_self, name);
}

static void BlendDataGreasePencilsV3_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	GreasePencil *grease_pencil;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	grease_pencil = rna_Main_grease_pencils_new(_self, name);
	*((GreasePencil **)_retdata) = grease_pencil;
}

void BlendDataGreasePencilsV3_remove_func(Main *_self, ReportList *reports, PointerRNA *grease_pencil, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, grease_pencil, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataGreasePencilsV3_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *grease_pencil;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	grease_pencil = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, grease_pencil, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_grease_pencils_tag(Main *_self, bool value);
GreasePencil *rna_Main_grease_pencils_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *grease_pencil, bool do_unlink, bool do_id_user, bool do_ui_user);

void BlendDataMovieClips_tag_func(Main *_self, bool value)
{
	rna_Main_movieclips_tag(_self, value);
}

static void BlendDataMovieClips_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_movieclips_tag(_self, value);
}

void BlendDataMovieClips_remove_func(Main *_self, ReportList *reports, PointerRNA *clip, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, clip, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMovieClips_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *clip;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	clip = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, clip, do_unlink, do_id_user, do_ui_user);
}

MovieClip *BlendDataMovieClips_load_func(Main *_self, ReportList *reports, const char * filepath, bool check_existing)
{
	return rna_Main_movieclip_load(_self, reports, filepath, check_existing);
}

static void BlendDataMovieClips_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * filepath;
	bool check_existing;
	MovieClip *clip;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	check_existing = *((bool *)_data);
	_data += 8;
	_retdata = _data;
	
	clip = rna_Main_movieclip_load(_self, reports, filepath, check_existing);
	*((MovieClip **)_retdata) = clip;
}

/* Repeated prototypes to detect errors */

void rna_Main_movieclips_tag(Main *_self, bool value);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *clip, bool do_unlink, bool do_id_user, bool do_ui_user);
MovieClip *rna_Main_movieclip_load(Main *_self, ReportList *reports, const char * filepath, bool check_existing);

void BlendDataMasks_tag_func(Main *_self, bool value)
{
	rna_Main_masks_tag(_self, value);
}

static void BlendDataMasks_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_masks_tag(_self, value);
}

Mask *BlendDataMasks_new_func(Main *_self, const char * name)
{
	return rna_Main_mask_new(_self, name);
}

static void BlendDataMasks_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Mask *mask;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	mask = rna_Main_mask_new(_self, name);
	*((Mask **)_retdata) = mask;
}

void BlendDataMasks_remove_func(Main *_self, ReportList *reports, PointerRNA *mask, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, mask, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataMasks_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *mask;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	mask = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, mask, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_masks_tag(Main *_self, bool value);
Mask *rna_Main_mask_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *mask, bool do_unlink, bool do_id_user, bool do_ui_user);

void BlendDataLineStyles_tag_func(Main *_self, bool value)
{
	rna_Main_linestyle_tag(_self, value);
}

static void BlendDataLineStyles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_linestyle_tag(_self, value);
}

FreestyleLineStyle *BlendDataLineStyles_new_func(Main *_self, const char * name)
{
	return rna_Main_linestyles_new(_self, name);
}

static void BlendDataLineStyles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	FreestyleLineStyle *linestyle;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	linestyle = rna_Main_linestyles_new(_self, name);
	*((FreestyleLineStyle **)_retdata) = linestyle;
}

void BlendDataLineStyles_remove_func(Main *_self, ReportList *reports, PointerRNA *linestyle, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, linestyle, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataLineStyles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *linestyle;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	linestyle = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, linestyle, do_unlink, do_id_user, do_ui_user);
}

/* Repeated prototypes to detect errors */

void rna_Main_linestyle_tag(Main *_self, bool value);
FreestyleLineStyle *rna_Main_linestyles_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *linestyle, bool do_unlink, bool do_id_user, bool do_ui_user);

void BlendDataCacheFiles_tag_func(Main *_self, bool value)
{
	rna_Main_cachefiles_tag(_self, value);
}

static void BlendDataCacheFiles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_cachefiles_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_cachefiles_tag(Main *_self, bool value);

void BlendDataPaintCurves_tag_func(Main *_self, bool value)
{
	rna_Main_paintcurves_tag(_self, value);
}

static void BlendDataPaintCurves_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_paintcurves_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_paintcurves_tag(Main *_self, bool value);

void BlendDataWorkSpaces_tag_func(Main *_self, bool value)
{
	rna_Main_workspaces_tag(_self, value);
}

static void BlendDataWorkSpaces_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_workspaces_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_workspaces_tag(Main *_self, bool value);

LightProbe *BlendDataProbes_new_func(Main *_self, const char * name, int type)
{
	return rna_Main_lightprobe_new(_self, name, type);
}

static void BlendDataProbes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	int type;
	LightProbe *lightprobe;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	lightprobe = rna_Main_lightprobe_new(_self, name, type);
	*((LightProbe **)_retdata) = lightprobe;
}

void BlendDataProbes_remove_func(Main *_self, ReportList *reports, PointerRNA *lightprobe, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, lightprobe, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataProbes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *lightprobe;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	lightprobe = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, lightprobe, do_unlink, do_id_user, do_ui_user);
}

void BlendDataProbes_tag_func(Main *_self, bool value)
{
	rna_Main_lightprobes_tag(_self, value);
}

static void BlendDataProbes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_lightprobes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

LightProbe *rna_Main_lightprobe_new(Main *_self, const char * name, int type);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *lightprobe, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_lightprobes_tag(Main *_self, bool value);

Curves *BlendDataHairCurves_new_func(Main *_self, const char * name)
{
	return rna_Main_hair_curves_new(_self, name);
}

static void BlendDataHairCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Curves *curves;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	curves = rna_Main_hair_curves_new(_self, name);
	*((Curves **)_retdata) = curves;
}

void BlendDataHairCurves_remove_func(Main *_self, ReportList *reports, PointerRNA *curves, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, curves, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataHairCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *curves;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	curves = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, curves, do_unlink, do_id_user, do_ui_user);
}

void BlendDataHairCurves_tag_func(Main *_self, bool value)
{
	rna_Main_hair_curves_tag(_self, value);
}

static void BlendDataHairCurves_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_hair_curves_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Curves *rna_Main_hair_curves_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *curves, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_hair_curves_tag(Main *_self, bool value);

PointCloud *BlendDataPointClouds_new_func(Main *_self, const char * name)
{
	return rna_Main_pointclouds_new(_self, name);
}

static void BlendDataPointClouds_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	PointCloud *pointcloud;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	pointcloud = rna_Main_pointclouds_new(_self, name);
	*((PointCloud **)_retdata) = pointcloud;
}

void BlendDataPointClouds_remove_func(Main *_self, ReportList *reports, PointerRNA *pointcloud, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, pointcloud, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataPointClouds_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *pointcloud;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	pointcloud = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, pointcloud, do_unlink, do_id_user, do_ui_user);
}

void BlendDataPointClouds_tag_func(Main *_self, bool value)
{
	rna_Main_pointclouds_tag(_self, value);
}

static void BlendDataPointClouds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_pointclouds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

PointCloud *rna_Main_pointclouds_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *pointcloud, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_pointclouds_tag(Main *_self, bool value);

Volume *BlendDataVolumes_new_func(Main *_self, const char * name)
{
	return rna_Main_volumes_new(_self, name);
}

static void BlendDataVolumes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	const char * name;
	Volume *volume;
	char *_data, *_retdata;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	name = *((const char * *)_data);
	_data += 8;
	_retdata = _data;
	
	volume = rna_Main_volumes_new(_self, name);
	*((Volume **)_retdata) = volume;
}

void BlendDataVolumes_remove_func(Main *_self, ReportList *reports, PointerRNA *volume, bool do_unlink, bool do_id_user, bool do_ui_user)
{
	rna_Main_ID_remove(_self, reports, volume, do_unlink, do_id_user, do_ui_user);
}

static void BlendDataVolumes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	PointerRNA *volume;
	bool do_unlink;
	bool do_id_user;
	bool do_ui_user;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	volume = *((PointerRNA **)_data);
	_data += 8;
	do_unlink = *((bool *)_data);
	_data += 8;
	do_id_user = *((bool *)_data);
	_data += 8;
	do_ui_user = *((bool *)_data);
	
	rna_Main_ID_remove(_self, reports, volume, do_unlink, do_id_user, do_ui_user);
}

void BlendDataVolumes_tag_func(Main *_self, bool value)
{
	rna_Main_volumes_tag(_self, value);
}

static void BlendDataVolumes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Main *_self;
	bool value;
	char *_data;
	
	_self = (Main *)_ptr->data;
	_data = (char *)_parms->data;
	value = *((bool *)_data);
	
	rna_Main_volumes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

Volume *rna_Main_volumes_new(Main *_self, const char * name);
void rna_Main_ID_remove(Main *_self, ReportList *reports, PointerRNA *volume, bool do_unlink, bool do_id_user, bool do_ui_user);
void rna_Main_volumes_tag(Main *_self, bool value);


/* Blend-File Data */
static CollectionPropertyRNA rna_BlendData_rna_properties_;
PropertyRNA &rna_BlendData_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendData_rna_properties_);

static PointerPropertyRNA rna_BlendData_rna_type_;
PropertyRNA &rna_BlendData_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendData_rna_type_);

static StringPropertyRNA rna_BlendData_filepath_;
PropertyRNA &rna_BlendData_filepath = reinterpret_cast<PropertyRNA &>(rna_BlendData_filepath_);

static BoolPropertyRNA rna_BlendData_is_dirty_;
PropertyRNA &rna_BlendData_is_dirty = reinterpret_cast<PropertyRNA &>(rna_BlendData_is_dirty_);

static BoolPropertyRNA rna_BlendData_is_saved_;
PropertyRNA &rna_BlendData_is_saved = reinterpret_cast<PropertyRNA &>(rna_BlendData_is_saved_);

static BoolPropertyRNA rna_BlendData_use_autopack_;
PropertyRNA &rna_BlendData_use_autopack = reinterpret_cast<PropertyRNA &>(rna_BlendData_use_autopack_);

static IntPropertyRNA rna_BlendData_version_;
PropertyRNA &rna_BlendData_version = reinterpret_cast<PropertyRNA &>(rna_BlendData_version_);

static CollectionPropertyRNA rna_BlendData_cameras_;
PropertyRNA &rna_BlendData_cameras = reinterpret_cast<PropertyRNA &>(rna_BlendData_cameras_);

static CollectionPropertyRNA rna_BlendData_scenes_;
PropertyRNA &rna_BlendData_scenes = reinterpret_cast<PropertyRNA &>(rna_BlendData_scenes_);

static CollectionPropertyRNA rna_BlendData_objects_;
PropertyRNA &rna_BlendData_objects = reinterpret_cast<PropertyRNA &>(rna_BlendData_objects_);

static CollectionPropertyRNA rna_BlendData_materials_;
PropertyRNA &rna_BlendData_materials = reinterpret_cast<PropertyRNA &>(rna_BlendData_materials_);

static CollectionPropertyRNA rna_BlendData_node_groups_;
PropertyRNA &rna_BlendData_node_groups = reinterpret_cast<PropertyRNA &>(rna_BlendData_node_groups_);

static CollectionPropertyRNA rna_BlendData_meshes_;
PropertyRNA &rna_BlendData_meshes = reinterpret_cast<PropertyRNA &>(rna_BlendData_meshes_);

static CollectionPropertyRNA rna_BlendData_lights_;
PropertyRNA &rna_BlendData_lights = reinterpret_cast<PropertyRNA &>(rna_BlendData_lights_);

static CollectionPropertyRNA rna_BlendData_libraries_;
PropertyRNA &rna_BlendData_libraries = reinterpret_cast<PropertyRNA &>(rna_BlendData_libraries_);

static CollectionPropertyRNA rna_BlendData_screens_;
PropertyRNA &rna_BlendData_screens = reinterpret_cast<PropertyRNA &>(rna_BlendData_screens_);

static CollectionPropertyRNA rna_BlendData_window_managers_;
PropertyRNA &rna_BlendData_window_managers = reinterpret_cast<PropertyRNA &>(rna_BlendData_window_managers_);

static CollectionPropertyRNA rna_BlendData_images_;
PropertyRNA &rna_BlendData_images = reinterpret_cast<PropertyRNA &>(rna_BlendData_images_);

static CollectionPropertyRNA rna_BlendData_lattices_;
PropertyRNA &rna_BlendData_lattices = reinterpret_cast<PropertyRNA &>(rna_BlendData_lattices_);

static CollectionPropertyRNA rna_BlendData_curves_;
PropertyRNA &rna_BlendData_curves = reinterpret_cast<PropertyRNA &>(rna_BlendData_curves_);

static CollectionPropertyRNA rna_BlendData_metaballs_;
PropertyRNA &rna_BlendData_metaballs = reinterpret_cast<PropertyRNA &>(rna_BlendData_metaballs_);

static CollectionPropertyRNA rna_BlendData_fonts_;
PropertyRNA &rna_BlendData_fonts = reinterpret_cast<PropertyRNA &>(rna_BlendData_fonts_);

static CollectionPropertyRNA rna_BlendData_textures_;
PropertyRNA &rna_BlendData_textures = reinterpret_cast<PropertyRNA &>(rna_BlendData_textures_);

static CollectionPropertyRNA rna_BlendData_brushes_;
PropertyRNA &rna_BlendData_brushes = reinterpret_cast<PropertyRNA &>(rna_BlendData_brushes_);

static CollectionPropertyRNA rna_BlendData_worlds_;
PropertyRNA &rna_BlendData_worlds = reinterpret_cast<PropertyRNA &>(rna_BlendData_worlds_);

static CollectionPropertyRNA rna_BlendData_collections_;
PropertyRNA &rna_BlendData_collections = reinterpret_cast<PropertyRNA &>(rna_BlendData_collections_);

static CollectionPropertyRNA rna_BlendData_shape_keys_;
PropertyRNA &rna_BlendData_shape_keys = reinterpret_cast<PropertyRNA &>(rna_BlendData_shape_keys_);

static CollectionPropertyRNA rna_BlendData_texts_;
PropertyRNA &rna_BlendData_texts = reinterpret_cast<PropertyRNA &>(rna_BlendData_texts_);

static CollectionPropertyRNA rna_BlendData_speakers_;
PropertyRNA &rna_BlendData_speakers = reinterpret_cast<PropertyRNA &>(rna_BlendData_speakers_);

static CollectionPropertyRNA rna_BlendData_sounds_;
PropertyRNA &rna_BlendData_sounds = reinterpret_cast<PropertyRNA &>(rna_BlendData_sounds_);

static CollectionPropertyRNA rna_BlendData_armatures_;
PropertyRNA &rna_BlendData_armatures = reinterpret_cast<PropertyRNA &>(rna_BlendData_armatures_);

static CollectionPropertyRNA rna_BlendData_actions_;
PropertyRNA &rna_BlendData_actions = reinterpret_cast<PropertyRNA &>(rna_BlendData_actions_);

static CollectionPropertyRNA rna_BlendData_particles_;
PropertyRNA &rna_BlendData_particles = reinterpret_cast<PropertyRNA &>(rna_BlendData_particles_);

static CollectionPropertyRNA rna_BlendData_palettes_;
PropertyRNA &rna_BlendData_palettes = reinterpret_cast<PropertyRNA &>(rna_BlendData_palettes_);

static CollectionPropertyRNA rna_BlendData_annotations_;
PropertyRNA &rna_BlendData_annotations = reinterpret_cast<PropertyRNA &>(rna_BlendData_annotations_);

static CollectionPropertyRNA rna_BlendData_grease_pencils_;
PropertyRNA &rna_BlendData_grease_pencils = reinterpret_cast<PropertyRNA &>(rna_BlendData_grease_pencils_);

static CollectionPropertyRNA rna_BlendData_movieclips_;
PropertyRNA &rna_BlendData_movieclips = reinterpret_cast<PropertyRNA &>(rna_BlendData_movieclips_);

static CollectionPropertyRNA rna_BlendData_masks_;
PropertyRNA &rna_BlendData_masks = reinterpret_cast<PropertyRNA &>(rna_BlendData_masks_);

static CollectionPropertyRNA rna_BlendData_linestyles_;
PropertyRNA &rna_BlendData_linestyles = reinterpret_cast<PropertyRNA &>(rna_BlendData_linestyles_);

static CollectionPropertyRNA rna_BlendData_cache_files_;
PropertyRNA &rna_BlendData_cache_files = reinterpret_cast<PropertyRNA &>(rna_BlendData_cache_files_);

static CollectionPropertyRNA rna_BlendData_paint_curves_;
PropertyRNA &rna_BlendData_paint_curves = reinterpret_cast<PropertyRNA &>(rna_BlendData_paint_curves_);

static CollectionPropertyRNA rna_BlendData_workspaces_;
PropertyRNA &rna_BlendData_workspaces = reinterpret_cast<PropertyRNA &>(rna_BlendData_workspaces_);

static CollectionPropertyRNA rna_BlendData_lightprobes_;
PropertyRNA &rna_BlendData_lightprobes = reinterpret_cast<PropertyRNA &>(rna_BlendData_lightprobes_);

static CollectionPropertyRNA rna_BlendData_hair_curves_;
PropertyRNA &rna_BlendData_hair_curves = reinterpret_cast<PropertyRNA &>(rna_BlendData_hair_curves_);

static CollectionPropertyRNA rna_BlendData_pointclouds_;
PropertyRNA &rna_BlendData_pointclouds = reinterpret_cast<PropertyRNA &>(rna_BlendData_pointclouds_);

static CollectionPropertyRNA rna_BlendData_volumes_;
PropertyRNA &rna_BlendData_volumes = reinterpret_cast<PropertyRNA &>(rna_BlendData_volumes_);

static PointerPropertyRNA rna_BlendData_colorspace_;
PropertyRNA &rna_BlendData_colorspace = reinterpret_cast<PropertyRNA &>(rna_BlendData_colorspace_);

static CollectionPropertyRNA rna_BlendData_all_ids_;
PropertyRNA &rna_BlendData_all_ids = reinterpret_cast<PropertyRNA &>(rna_BlendData_all_ids_);

static PointerPropertyRNA rna_BlendData_project_;
PropertyRNA &rna_BlendData_project = reinterpret_cast<PropertyRNA &>(rna_BlendData_project_);

static PointerPropertyRNA rna_BlendData_pack_linked_ids_hierarchy_root_id_;
PropertyRNA &rna_BlendData_pack_linked_ids_hierarchy_root_id = reinterpret_cast<PropertyRNA &>(rna_BlendData_pack_linked_ids_hierarchy_root_id_);

static PointerPropertyRNA rna_BlendData_pack_linked_ids_hierarchy_packed_id_;
PropertyRNA &rna_BlendData_pack_linked_ids_hierarchy_packed_id = reinterpret_cast<PropertyRNA &>(rna_BlendData_pack_linked_ids_hierarchy_packed_id_);

FunctionRNA *rna_BlendData_pack_linked_ids_hierarchy_func;
static StringPropertyRNA rna_BlendData_project_init_name_;
PropertyRNA &rna_BlendData_project_init_name = reinterpret_cast<PropertyRNA &>(rna_BlendData_project_init_name_);

static StringPropertyRNA rna_BlendData_project_init_project_root_;
PropertyRNA &rna_BlendData_project_init_project_root = reinterpret_cast<PropertyRNA &>(rna_BlendData_project_init_project_root_);

FunctionRNA *rna_BlendData_project_init_func;
FunctionRNA *rna_BlendData_project_clear_func;
StructRNA *RNA_BlendData;
void register_struct_BlendData(BlenderRNA &brna)
{
	rna_BlendData_rna_properties_ = {
		{&rna_BlendData_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_rna_properties_begin, BlendData_rna_properties_next, BlendData_rna_properties_end, BlendData_rna_properties_get, nullptr, nullptr, BlendData_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendData_rna_type_ = {
		{&rna_BlendData_filepath, 	&rna_BlendData_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BlendData_filepath_ = {
		{&rna_BlendData_is_dirty, 	&rna_BlendData_rna_type,
		-1, "filepath", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Filename",
		"Path to the .blend file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_filepath_get, BlendData_filepath_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};

	rna_BlendData_is_dirty_ = {
		{&rna_BlendData_is_saved, 	&rna_BlendData_filepath,
		-1, "is_dirty", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Has Unsaved Changes",
		"Have recent edits been saved to disk",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_is_dirty_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BlendData_is_saved_ = {
		{&rna_BlendData_use_autopack, 	&rna_BlendData_is_dirty,
		-1, "is_saved", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "File is Saved",
		"Has the current session been saved to disk as a .blend file",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_is_saved_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BlendData_use_autopack_ = {
		{&rna_BlendData_version, 	&rna_BlendData_is_saved,
		-1, "use_autopack", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Use Auto-Pack",
		"Automatically pack all external data into .blend file",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_use_autopack_get, BlendData_use_autopack_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	static int rna_BlendData_version_default[3] = {
		0,
		0,
		0
	};
	rna_BlendData_version_ = {
		{&rna_BlendData_cameras, 	&rna_BlendData_use_autopack,
		-1, "version", 8388610, 0, 0, 0, 0, PropertyPathTemplateType(0), "Version",
		"File format version the .blend file was saved with",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_XYZ) | int(PROP_UNIT_NONE)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, BlendData_version_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, INT_MAX, 0, INT_MAX, 1, nullptr, nullptr, 0, rna_BlendData_version_default
	};

	rna_BlendData_cameras_ = {
		{&rna_BlendData_scenes, 	&rna_BlendData_version,
		-1, "cameras", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cameras",
		"Camera data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataCameras},
		BlendData_cameras_begin, BlendData_cameras_next, BlendData_cameras_end, BlendData_cameras_get, nullptr, BlendData_cameras_lookup_int, nullptr, nullptr, RNA_Camera
	};

	rna_BlendData_scenes_ = {
		{&rna_BlendData_objects, 	&rna_BlendData_cameras,
		-1, "scenes", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scenes",
		"Scene data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataScenes},
		BlendData_scenes_begin, BlendData_scenes_next, BlendData_scenes_end, BlendData_scenes_get, nullptr, BlendData_scenes_lookup_int, nullptr, nullptr, RNA_Scene
	};

	rna_BlendData_objects_ = {
		{&rna_BlendData_materials, 	&rna_BlendData_scenes,
		-1, "objects", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Objects",
		"Object data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataObjects},
		BlendData_objects_begin, BlendData_objects_next, BlendData_objects_end, BlendData_objects_get, nullptr, BlendData_objects_lookup_int, nullptr, nullptr, RNA_Object
	};

	rna_BlendData_materials_ = {
		{&rna_BlendData_node_groups, 	&rna_BlendData_objects,
		-1, "materials", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Materials",
		"Material data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataMaterials},
		BlendData_materials_begin, BlendData_materials_next, BlendData_materials_end, BlendData_materials_get, nullptr, BlendData_materials_lookup_int, nullptr, nullptr, RNA_Material
	};

	rna_BlendData_node_groups_ = {
		{&rna_BlendData_meshes, 	&rna_BlendData_materials,
		-1, "node_groups", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Node Groups",
		"Node group data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataNodeTrees},
		BlendData_node_groups_begin, BlendData_node_groups_next, BlendData_node_groups_end, BlendData_node_groups_get, nullptr, BlendData_node_groups_lookup_int, nullptr, nullptr, RNA_NodeTree
	};

	rna_BlendData_meshes_ = {
		{&rna_BlendData_lights, 	&rna_BlendData_node_groups,
		-1, "meshes", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Meshes",
		"Mesh data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataMeshes},
		BlendData_meshes_begin, BlendData_meshes_next, BlendData_meshes_end, BlendData_meshes_get, nullptr, BlendData_meshes_lookup_int, nullptr, nullptr, RNA_Mesh
	};

	rna_BlendData_lights_ = {
		{&rna_BlendData_libraries, 	&rna_BlendData_meshes,
		-1, "lights", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lights",
		"Light data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataLights},
		BlendData_lights_begin, BlendData_lights_next, BlendData_lights_end, BlendData_lights_get, nullptr, BlendData_lights_lookup_int, nullptr, nullptr, RNA_Light
	};

	rna_BlendData_libraries_ = {
		{&rna_BlendData_screens, 	&rna_BlendData_lights,
		-1, "libraries", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Libraries",
		"Library data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataLibraries},
		BlendData_libraries_begin, BlendData_libraries_next, BlendData_libraries_end, BlendData_libraries_get, nullptr, BlendData_libraries_lookup_int, nullptr, nullptr, RNA_Library
	};

	rna_BlendData_screens_ = {
		{&rna_BlendData_window_managers, 	&rna_BlendData_libraries,
		-1, "screens", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Screens",
		"Screen data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataScreens},
		BlendData_screens_begin, BlendData_screens_next, BlendData_screens_end, BlendData_screens_get, nullptr, BlendData_screens_lookup_int, nullptr, nullptr, RNA_Screen
	};

	rna_BlendData_window_managers_ = {
		{&rna_BlendData_images, 	&rna_BlendData_screens,
		-1, "window_managers", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Window Managers",
		"Window manager data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataWindowManagers},
		BlendData_window_managers_begin, BlendData_window_managers_next, BlendData_window_managers_end, BlendData_window_managers_get, nullptr, BlendData_window_managers_lookup_int, nullptr, nullptr, RNA_WindowManager
	};

	rna_BlendData_images_ = {
		{&rna_BlendData_lattices, 	&rna_BlendData_window_managers,
		-1, "images", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Images",
		"Image data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataImages},
		BlendData_images_begin, BlendData_images_next, BlendData_images_end, BlendData_images_get, nullptr, BlendData_images_lookup_int, nullptr, nullptr, RNA_Image
	};

	rna_BlendData_lattices_ = {
		{&rna_BlendData_curves, 	&rna_BlendData_images,
		-1, "lattices", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Lattices",
		"Lattice data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataLattices},
		BlendData_lattices_begin, BlendData_lattices_next, BlendData_lattices_end, BlendData_lattices_get, nullptr, BlendData_lattices_lookup_int, nullptr, nullptr, RNA_Lattice
	};

	rna_BlendData_curves_ = {
		{&rna_BlendData_metaballs, 	&rna_BlendData_lattices,
		-1, "curves", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Curves",
		"Curve data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataCurves},
		BlendData_curves_begin, BlendData_curves_next, BlendData_curves_end, BlendData_curves_get, nullptr, BlendData_curves_lookup_int, nullptr, nullptr, RNA_Curve
	};

	rna_BlendData_metaballs_ = {
		{&rna_BlendData_fonts, 	&rna_BlendData_curves,
		-1, "metaballs", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Metaballs",
		"Metaball data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataMetaBalls},
		BlendData_metaballs_begin, BlendData_metaballs_next, BlendData_metaballs_end, BlendData_metaballs_get, nullptr, BlendData_metaballs_lookup_int, nullptr, nullptr, RNA_MetaBall
	};

	rna_BlendData_fonts_ = {
		{&rna_BlendData_textures, 	&rna_BlendData_metaballs,
		-1, "fonts", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Vector Fonts",
		"Vector font data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataFonts},
		BlendData_fonts_begin, BlendData_fonts_next, BlendData_fonts_end, BlendData_fonts_get, nullptr, BlendData_fonts_lookup_int, nullptr, nullptr, RNA_VectorFont
	};

	rna_BlendData_textures_ = {
		{&rna_BlendData_brushes, 	&rna_BlendData_fonts,
		-1, "textures", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Textures",
		"Texture data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataTextures},
		BlendData_textures_begin, BlendData_textures_next, BlendData_textures_end, BlendData_textures_get, nullptr, BlendData_textures_lookup_int, nullptr, nullptr, RNA_Texture
	};

	rna_BlendData_brushes_ = {
		{&rna_BlendData_worlds, 	&rna_BlendData_textures,
		-1, "brushes", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Brushes",
		"Brush data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataBrushes},
		BlendData_brushes_begin, BlendData_brushes_next, BlendData_brushes_end, BlendData_brushes_get, nullptr, BlendData_brushes_lookup_int, nullptr, nullptr, RNA_Brush
	};

	rna_BlendData_worlds_ = {
		{&rna_BlendData_collections, 	&rna_BlendData_brushes,
		-1, "worlds", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Worlds",
		"World data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataWorlds},
		BlendData_worlds_begin, BlendData_worlds_next, BlendData_worlds_end, BlendData_worlds_get, nullptr, BlendData_worlds_lookup_int, nullptr, nullptr, RNA_World
	};

	rna_BlendData_collections_ = {
		{&rna_BlendData_shape_keys, 	&rna_BlendData_worlds,
		-1, "collections", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Collections",
		"Collection data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataCollections},
		BlendData_collections_begin, BlendData_collections_next, BlendData_collections_end, BlendData_collections_get, nullptr, BlendData_collections_lookup_int, nullptr, nullptr, RNA_Collection
	};

	rna_BlendData_shape_keys_ = {
		{&rna_BlendData_texts, 	&rna_BlendData_collections,
		-1, "shape_keys", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shape Keys",
		"Shape Key data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_shape_keys_begin, BlendData_shape_keys_next, BlendData_shape_keys_end, BlendData_shape_keys_get, nullptr, BlendData_shape_keys_lookup_int, nullptr, nullptr, RNA_Key
	};

	rna_BlendData_texts_ = {
		{&rna_BlendData_speakers, 	&rna_BlendData_shape_keys,
		-1, "texts", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Texts",
		"Text data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataTexts},
		BlendData_texts_begin, BlendData_texts_next, BlendData_texts_end, BlendData_texts_get, nullptr, BlendData_texts_lookup_int, nullptr, nullptr, RNA_Text
	};

	rna_BlendData_speakers_ = {
		{&rna_BlendData_sounds, 	&rna_BlendData_texts,
		-1, "speakers", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Speakers",
		"Speaker data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataSpeakers},
		BlendData_speakers_begin, BlendData_speakers_next, BlendData_speakers_end, BlendData_speakers_get, nullptr, BlendData_speakers_lookup_int, nullptr, nullptr, RNA_Speaker
	};

	rna_BlendData_sounds_ = {
		{&rna_BlendData_armatures, 	&rna_BlendData_speakers,
		-1, "sounds", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Sounds",
		"Sound data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataSounds},
		BlendData_sounds_begin, BlendData_sounds_next, BlendData_sounds_end, BlendData_sounds_get, nullptr, BlendData_sounds_lookup_int, nullptr, nullptr, RNA_Sound
	};

	rna_BlendData_armatures_ = {
		{&rna_BlendData_actions, 	&rna_BlendData_sounds,
		-1, "armatures", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Armatures",
		"Armature data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataArmatures},
		BlendData_armatures_begin, BlendData_armatures_next, BlendData_armatures_end, BlendData_armatures_get, nullptr, BlendData_armatures_lookup_int, nullptr, nullptr, RNA_Armature
	};

	rna_BlendData_actions_ = {
		{&rna_BlendData_particles, 	&rna_BlendData_armatures,
		-1, "actions", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Actions",
		"Action data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataActions},
		BlendData_actions_begin, BlendData_actions_next, BlendData_actions_end, BlendData_actions_get, nullptr, BlendData_actions_lookup_int, nullptr, nullptr, RNA_Action
	};

	rna_BlendData_particles_ = {
		{&rna_BlendData_palettes, 	&rna_BlendData_actions,
		-1, "particles", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Particles",
		"Particle data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataParticles},
		BlendData_particles_begin, BlendData_particles_next, BlendData_particles_end, BlendData_particles_get, nullptr, BlendData_particles_lookup_int, nullptr, nullptr, RNA_ParticleSettings
	};

	rna_BlendData_palettes_ = {
		{&rna_BlendData_annotations, 	&rna_BlendData_particles,
		-1, "palettes", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Palettes",
		"Palette data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataPalettes},
		BlendData_palettes_begin, BlendData_palettes_next, BlendData_palettes_end, BlendData_palettes_get, nullptr, BlendData_palettes_lookup_int, nullptr, nullptr, RNA_Palette
	};

	rna_BlendData_annotations_ = {
		{&rna_BlendData_grease_pencils, 	&rna_BlendData_palettes,
		-1, "annotations", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Annotation",
		"Annotation data-blocks (legacy Grease Pencil)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataAnnotations},
		BlendData_annotations_begin, BlendData_annotations_next, BlendData_annotations_end, BlendData_annotations_get, nullptr, BlendData_annotations_lookup_int, nullptr, nullptr, RNA_Annotation
	};

	rna_BlendData_grease_pencils_ = {
		{&rna_BlendData_movieclips, 	&rna_BlendData_annotations,
		-1, "grease_pencils", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Grease Pencil",
		"Grease Pencil data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataGreasePencilsV3},
		BlendData_grease_pencils_begin, BlendData_grease_pencils_next, BlendData_grease_pencils_end, BlendData_grease_pencils_get, nullptr, BlendData_grease_pencils_lookup_int, nullptr, nullptr, RNA_GreasePencil
	};

	rna_BlendData_movieclips_ = {
		{&rna_BlendData_masks, 	&rna_BlendData_grease_pencils,
		-1, "movieclips", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Movie Clips",
		"Movie Clip data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataMovieClips},
		BlendData_movieclips_begin, BlendData_movieclips_next, BlendData_movieclips_end, BlendData_movieclips_get, nullptr, BlendData_movieclips_lookup_int, nullptr, nullptr, RNA_MovieClip
	};

	rna_BlendData_masks_ = {
		{&rna_BlendData_linestyles, 	&rna_BlendData_movieclips,
		-1, "masks", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Masks",
		"Masks data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataMasks},
		BlendData_masks_begin, BlendData_masks_next, BlendData_masks_end, BlendData_masks_get, nullptr, BlendData_masks_lookup_int, nullptr, nullptr, RNA_Mask
	};

	rna_BlendData_linestyles_ = {
		{&rna_BlendData_cache_files, 	&rna_BlendData_masks,
		-1, "linestyles", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Line Styles",
		"Line Style data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataLineStyles},
		BlendData_linestyles_begin, BlendData_linestyles_next, BlendData_linestyles_end, BlendData_linestyles_get, nullptr, BlendData_linestyles_lookup_int, nullptr, nullptr, RNA_FreestyleLineStyle
	};

	rna_BlendData_cache_files_ = {
		{&rna_BlendData_paint_curves, 	&rna_BlendData_linestyles,
		-1, "cache_files", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Cache Files",
		"Cache Files data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataCacheFiles},
		BlendData_cache_files_begin, BlendData_cache_files_next, BlendData_cache_files_end, BlendData_cache_files_get, nullptr, BlendData_cache_files_lookup_int, nullptr, nullptr, RNA_CacheFile
	};

	rna_BlendData_paint_curves_ = {
		{&rna_BlendData_workspaces, 	&rna_BlendData_cache_files,
		-1, "paint_curves", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Paint Curves",
		"Paint Curves data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataPaintCurves},
		BlendData_paint_curves_begin, BlendData_paint_curves_next, BlendData_paint_curves_end, BlendData_paint_curves_get, nullptr, BlendData_paint_curves_lookup_int, nullptr, nullptr, RNA_PaintCurve
	};

	rna_BlendData_workspaces_ = {
		{&rna_BlendData_lightprobes, 	&rna_BlendData_paint_curves,
		-1, "workspaces", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Workspaces",
		"Workspace data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataWorkSpaces},
		BlendData_workspaces_begin, BlendData_workspaces_next, BlendData_workspaces_end, BlendData_workspaces_get, nullptr, BlendData_workspaces_lookup_int, nullptr, nullptr, RNA_WorkSpace
	};

	rna_BlendData_lightprobes_ = {
		{&rna_BlendData_hair_curves, 	&rna_BlendData_workspaces,
		-1, "lightprobes", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Light Probes",
		"Light Probe data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataProbes},
		BlendData_lightprobes_begin, BlendData_lightprobes_next, BlendData_lightprobes_end, BlendData_lightprobes_get, nullptr, BlendData_lightprobes_lookup_int, nullptr, nullptr, RNA_LightProbe
	};

	rna_BlendData_hair_curves_ = {
		{&rna_BlendData_pointclouds, 	&rna_BlendData_lightprobes,
		-1, "hair_curves", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Hair Curves",
		"Hair curve data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataHairCurves},
		BlendData_hair_curves_begin, BlendData_hair_curves_next, BlendData_hair_curves_end, BlendData_hair_curves_get, nullptr, BlendData_hair_curves_lookup_int, nullptr, nullptr, RNA_Curves
	};

	rna_BlendData_pointclouds_ = {
		{&rna_BlendData_volumes, 	&rna_BlendData_hair_curves,
		-1, "pointclouds", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Point Clouds",
		"Point cloud data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataPointClouds},
		BlendData_pointclouds_begin, BlendData_pointclouds_next, BlendData_pointclouds_end, BlendData_pointclouds_get, nullptr, BlendData_pointclouds_lookup_int, nullptr, nullptr, RNA_PointCloud
	};

	rna_BlendData_volumes_ = {
		{&rna_BlendData_colorspace, 	&rna_BlendData_pointclouds,
		-1, "volumes", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "Volumes",
		"Volume data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, RNA_BlendDataVolumes},
		BlendData_volumes_begin, BlendData_volumes_next, BlendData_volumes_end, BlendData_volumes_get, nullptr, BlendData_volumes_lookup_int, nullptr, nullptr, RNA_Volume
	};

	rna_BlendData_colorspace_ = {
		{&rna_BlendData_all_ids, 	&rna_BlendData_volumes,
		-1, "colorspace", 8650752, 0, 0, 0, 0, PropertyPathTemplateType(0), "Color Space",
		"Information about the color space used for data-blocks in a blend file",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_colorspace_get, nullptr, nullptr, nullptr,RNA_BlendFileColorspace
	};

	rna_BlendData_all_ids_ = {
		{&rna_BlendData_project, 	&rna_BlendData_colorspace,
		-1, "all_ids", 128, 0, 0, 0, 0, PropertyPathTemplateType(0), "All Data-Blocks",
		"Read-only list of all IDs listed in Blender data-base",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_all_ids_begin, BlendData_all_ids_next, BlendData_all_ids_end, BlendData_all_ids_get, BlendData_all_ids_length, nullptr, nullptr, nullptr, RNA_ID
	};

	rna_BlendData_project_ = {
		{nullptr, 	&rna_BlendData_all_ids,
		-1, "project", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Project",
		"The currently active Blender project, if any",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendData_project_get, nullptr, nullptr, nullptr,RNA_BlenderProject
	};

	StructRNA *srna = RNA_BlendData;
	srna->cont.properties = {&rna_BlendData_rna_properties, &rna_BlendData_project};
	srna->identifier = "BlendData";
	srna->flag = 516;
	srna->name = "Blend-File Data";
	srna->description = "Main data structure representing a .blend file and all its data-blocks";
	srna->translation_context = "*";
	srna->icon = 53;
	srna->iteratorproperty = &rna_BlendData_rna_properties;
	{
	rna_BlendData_pack_linked_ids_hierarchy_root_id_ = {
		{&rna_BlendData_pack_linked_ids_hierarchy_packed_id, 	nullptr,
		-1, "root_id", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Root linked ID to pack",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_BlendData_pack_linked_ids_hierarchy_packed_id_ = {
		{nullptr, 	&rna_BlendData_pack_linked_ids_hierarchy_root_id,
		-1, "packed_id", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"The packed ID matching the given root ID",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendData_pack_linked_ids_hierarchy_root_id, &rna_BlendData_pack_linked_ids_hierarchy_packed_id};
		func->identifier = "pack_linked_ids_hierarchy";
		func->flag = 16;
		func->description = "Pack the given linked ID and its dependencies into current blendfile";
		func->call = BlendData_pack_linked_ids_hierarchy_call;
		func->c_ret = &rna_BlendData_pack_linked_ids_hierarchy_packed_id;
		rna_BlendData_pack_linked_ids_hierarchy_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendData_project_init_name_ = {
		{&rna_BlendData_project_init_project_root, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), nullptr,
		"The project\'s name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
	rna_BlendData_project_init_project_root_ = {
		{nullptr, 	&rna_BlendData_project_init_name,
		-1, "project_root", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), nullptr,
		"The filepath of the project\'s root folder",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_DIRPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendData_project_init_name, &rna_BlendData_project_init_project_root};
		func->identifier = "project_init";
		func->flag = 16;
		func->description = "Initialize a new active project";
		func->call = BlendData_project_init_call;
		rna_BlendData_project_init_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "project_clear";
		func->flag = 16;
		func->description = "Clear the currently active project";
		func->call = BlendData_project_clear_call;
		rna_BlendData_project_clear_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Cameras */
static CollectionPropertyRNA rna_BlendDataCameras_rna_properties_;
PropertyRNA &rna_BlendDataCameras_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_rna_properties_);

static PointerPropertyRNA rna_BlendDataCameras_rna_type_;
PropertyRNA &rna_BlendDataCameras_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_rna_type_);

static StringPropertyRNA rna_BlendDataCameras_new_name_;
PropertyRNA &rna_BlendDataCameras_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_new_name_);

static PointerPropertyRNA rna_BlendDataCameras_new_camera_;
PropertyRNA &rna_BlendDataCameras_new_camera = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_new_camera_);

FunctionRNA *rna_BlendDataCameras_new_func;
static PointerPropertyRNA rna_BlendDataCameras_remove_camera_;
PropertyRNA &rna_BlendDataCameras_remove_camera = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_remove_camera_);

static BoolPropertyRNA rna_BlendDataCameras_remove_do_unlink_;
PropertyRNA &rna_BlendDataCameras_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataCameras_remove_do_id_user_;
PropertyRNA &rna_BlendDataCameras_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataCameras_remove_do_ui_user_;
PropertyRNA &rna_BlendDataCameras_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_remove_do_ui_user_);

FunctionRNA *rna_BlendDataCameras_remove_func;
static BoolPropertyRNA rna_BlendDataCameras_tag_value_;
PropertyRNA &rna_BlendDataCameras_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataCameras_tag_value_);

FunctionRNA *rna_BlendDataCameras_tag_func;
StructRNA *RNA_BlendDataCameras;
void register_struct_BlendDataCameras(BlenderRNA &brna)
{
	rna_BlendDataCameras_rna_properties_ = {
		{&rna_BlendDataCameras_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataCameras_rna_properties_begin, BlendDataCameras_rna_properties_next, BlendDataCameras_rna_properties_end, BlendDataCameras_rna_properties_get, nullptr, nullptr, BlendDataCameras_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataCameras_rna_type_ = {
		{nullptr, 	&rna_BlendDataCameras_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataCameras_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataCameras;
	srna->cont.properties = {&rna_BlendDataCameras_rna_properties, &rna_BlendDataCameras_rna_type};
	srna->identifier = "BlendDataCameras";
	srna->flag = 516;
	srna->name = "Main Cameras";
	srna->description = "Collection of cameras";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataCameras_rna_properties;
	{
	rna_BlendDataCameras_new_name_ = {
		{&rna_BlendDataCameras_new_camera, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Camera"
	};
	rna_BlendDataCameras_new_camera_ = {
		{nullptr, 	&rna_BlendDataCameras_new_name,
		-1, "camera", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New camera data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Camera
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCameras_new_name, &rna_BlendDataCameras_new_camera};
		func->identifier = "new";
		func->description = "Add a new camera to the main database";
		func->call = BlendDataCameras_new_call;
		func->c_ret = &rna_BlendDataCameras_new_camera;
		rna_BlendDataCameras_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataCameras_remove_camera_ = {
		{&rna_BlendDataCameras_remove_do_unlink, 	nullptr,
		-1, "camera", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Camera to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Camera
	};
	rna_BlendDataCameras_remove_do_unlink_ = {
		{&rna_BlendDataCameras_remove_do_id_user, 	&rna_BlendDataCameras_remove_camera,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this camera before deleting it (WARNING: will also delete objects instancing that camera data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataCameras_remove_do_id_user_ = {
		{&rna_BlendDataCameras_remove_do_ui_user, 	&rna_BlendDataCameras_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this camera",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataCameras_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataCameras_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this camera",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCameras_remove_camera, &rna_BlendDataCameras_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a camera from the current blendfile";
		func->call = BlendDataCameras_remove_call;
		rna_BlendDataCameras_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataCameras_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCameras_tag_value, &rna_BlendDataCameras_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataCameras_tag_call;
		rna_BlendDataCameras_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Scenes */
static CollectionPropertyRNA rna_BlendDataScenes_rna_properties_;
PropertyRNA &rna_BlendDataScenes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataScenes_rna_properties_);

static PointerPropertyRNA rna_BlendDataScenes_rna_type_;
PropertyRNA &rna_BlendDataScenes_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataScenes_rna_type_);

static StringPropertyRNA rna_BlendDataScenes_new_name_;
PropertyRNA &rna_BlendDataScenes_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataScenes_new_name_);

static PointerPropertyRNA rna_BlendDataScenes_new_scene_;
PropertyRNA &rna_BlendDataScenes_new_scene = reinterpret_cast<PropertyRNA &>(rna_BlendDataScenes_new_scene_);

FunctionRNA *rna_BlendDataScenes_new_func;
static PointerPropertyRNA rna_BlendDataScenes_remove_scene_;
PropertyRNA &rna_BlendDataScenes_remove_scene = reinterpret_cast<PropertyRNA &>(rna_BlendDataScenes_remove_scene_);

static BoolPropertyRNA rna_BlendDataScenes_remove_do_unlink_;
PropertyRNA &rna_BlendDataScenes_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataScenes_remove_do_unlink_);

FunctionRNA *rna_BlendDataScenes_remove_func;
static BoolPropertyRNA rna_BlendDataScenes_tag_value_;
PropertyRNA &rna_BlendDataScenes_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataScenes_tag_value_);

FunctionRNA *rna_BlendDataScenes_tag_func;
StructRNA *RNA_BlendDataScenes;
void register_struct_BlendDataScenes(BlenderRNA &brna)
{
	rna_BlendDataScenes_rna_properties_ = {
		{&rna_BlendDataScenes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataScenes_rna_properties_begin, BlendDataScenes_rna_properties_next, BlendDataScenes_rna_properties_end, BlendDataScenes_rna_properties_get, nullptr, nullptr, BlendDataScenes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataScenes_rna_type_ = {
		{nullptr, 	&rna_BlendDataScenes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataScenes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataScenes;
	srna->cont.properties = {&rna_BlendDataScenes_rna_properties, &rna_BlendDataScenes_rna_type};
	srna->identifier = "BlendDataScenes";
	srna->flag = 516;
	srna->name = "Main Scenes";
	srna->description = "Collection of scenes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataScenes_rna_properties;
	{
	rna_BlendDataScenes_new_name_ = {
		{&rna_BlendDataScenes_new_scene, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Scene"
	};
	rna_BlendDataScenes_new_scene_ = {
		{nullptr, 	&rna_BlendDataScenes_new_name,
		-1, "scene", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New scene data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataScenes_new_name, &rna_BlendDataScenes_new_scene};
		func->identifier = "new";
		func->description = "Add a new scene to the main database";
		func->call = BlendDataScenes_new_call;
		func->c_ret = &rna_BlendDataScenes_new_scene;
		rna_BlendDataScenes_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataScenes_remove_scene_ = {
		{&rna_BlendDataScenes_remove_do_unlink, 	nullptr,
		-1, "scene", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Scene to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Scene
	};
	rna_BlendDataScenes_remove_do_unlink_ = {
		{nullptr, 	&rna_BlendDataScenes_remove_scene,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this scene before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataScenes_remove_scene, &rna_BlendDataScenes_remove_do_unlink};
		func->identifier = "remove";
		func->flag = 24;
		func->description = "Remove a scene from the current blendfile";
		func->call = BlendDataScenes_remove_call;
		rna_BlendDataScenes_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataScenes_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataScenes_tag_value, &rna_BlendDataScenes_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataScenes_tag_call;
		rna_BlendDataScenes_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Objects */
static CollectionPropertyRNA rna_BlendDataObjects_rna_properties_;
PropertyRNA &rna_BlendDataObjects_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_rna_properties_);

static PointerPropertyRNA rna_BlendDataObjects_rna_type_;
PropertyRNA &rna_BlendDataObjects_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_rna_type_);

static StringPropertyRNA rna_BlendDataObjects_new_name_;
PropertyRNA &rna_BlendDataObjects_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_new_name_);

static PointerPropertyRNA rna_BlendDataObjects_new_object_data_;
PropertyRNA &rna_BlendDataObjects_new_object_data = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_new_object_data_);

static PointerPropertyRNA rna_BlendDataObjects_new_object_;
PropertyRNA &rna_BlendDataObjects_new_object = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_new_object_);

FunctionRNA *rna_BlendDataObjects_new_func;
static PointerPropertyRNA rna_BlendDataObjects_remove_object_;
PropertyRNA &rna_BlendDataObjects_remove_object = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_remove_object_);

static BoolPropertyRNA rna_BlendDataObjects_remove_do_unlink_;
PropertyRNA &rna_BlendDataObjects_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataObjects_remove_do_id_user_;
PropertyRNA &rna_BlendDataObjects_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataObjects_remove_do_ui_user_;
PropertyRNA &rna_BlendDataObjects_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_remove_do_ui_user_);

FunctionRNA *rna_BlendDataObjects_remove_func;
static BoolPropertyRNA rna_BlendDataObjects_tag_value_;
PropertyRNA &rna_BlendDataObjects_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataObjects_tag_value_);

FunctionRNA *rna_BlendDataObjects_tag_func;
StructRNA *RNA_BlendDataObjects;
void register_struct_BlendDataObjects(BlenderRNA &brna)
{
	rna_BlendDataObjects_rna_properties_ = {
		{&rna_BlendDataObjects_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataObjects_rna_properties_begin, BlendDataObjects_rna_properties_next, BlendDataObjects_rna_properties_end, BlendDataObjects_rna_properties_get, nullptr, nullptr, BlendDataObjects_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataObjects_rna_type_ = {
		{nullptr, 	&rna_BlendDataObjects_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataObjects_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataObjects;
	srna->cont.properties = {&rna_BlendDataObjects_rna_properties, &rna_BlendDataObjects_rna_type};
	srna->identifier = "BlendDataObjects";
	srna->flag = 516;
	srna->name = "Main Objects";
	srna->description = "Collection of objects";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataObjects_rna_properties;
	{
	rna_BlendDataObjects_new_name_ = {
		{&rna_BlendDataObjects_new_object_data, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Object"
	};
	rna_BlendDataObjects_new_object_data_ = {
		{&rna_BlendDataObjects_new_object, 	&rna_BlendDataObjects_new_name,
		-1, "object_data", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object data or None for an empty object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_BlendDataObjects_new_object_ = {
		{nullptr, 	&rna_BlendDataObjects_new_object_data,
		-1, "object", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New object data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataObjects_new_name, &rna_BlendDataObjects_new_object};
		func->identifier = "new";
		func->flag = 16;
		func->description = "Add a new object to the main database";
		func->call = BlendDataObjects_new_call;
		func->c_ret = &rna_BlendDataObjects_new_object;
		rna_BlendDataObjects_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataObjects_remove_object_ = {
		{&rna_BlendDataObjects_remove_do_unlink, 	nullptr,
		-1, "object", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Object to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_BlendDataObjects_remove_do_unlink_ = {
		{&rna_BlendDataObjects_remove_do_id_user, 	&rna_BlendDataObjects_remove_object,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this object before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataObjects_remove_do_id_user_ = {
		{&rna_BlendDataObjects_remove_do_ui_user, 	&rna_BlendDataObjects_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataObjects_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataObjects_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataObjects_remove_object, &rna_BlendDataObjects_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an object from the current blendfile";
		func->call = BlendDataObjects_remove_call;
		rna_BlendDataObjects_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataObjects_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataObjects_tag_value, &rna_BlendDataObjects_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataObjects_tag_call;
		rna_BlendDataObjects_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Materials */
static CollectionPropertyRNA rna_BlendDataMaterials_rna_properties_;
PropertyRNA &rna_BlendDataMaterials_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_rna_properties_);

static PointerPropertyRNA rna_BlendDataMaterials_rna_type_;
PropertyRNA &rna_BlendDataMaterials_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_rna_type_);

static StringPropertyRNA rna_BlendDataMaterials_new_name_;
PropertyRNA &rna_BlendDataMaterials_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_new_name_);

static PointerPropertyRNA rna_BlendDataMaterials_new_material_;
PropertyRNA &rna_BlendDataMaterials_new_material = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_new_material_);

FunctionRNA *rna_BlendDataMaterials_new_func;
static PointerPropertyRNA rna_BlendDataMaterials_create_gpencil_data_material_;
PropertyRNA &rna_BlendDataMaterials_create_gpencil_data_material = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_create_gpencil_data_material_);

FunctionRNA *rna_BlendDataMaterials_create_gpencil_data_func;
static PointerPropertyRNA rna_BlendDataMaterials_remove_gpencil_data_material_;
PropertyRNA &rna_BlendDataMaterials_remove_gpencil_data_material = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_remove_gpencil_data_material_);

FunctionRNA *rna_BlendDataMaterials_remove_gpencil_data_func;
static PointerPropertyRNA rna_BlendDataMaterials_remove_material_;
PropertyRNA &rna_BlendDataMaterials_remove_material = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_remove_material_);

static BoolPropertyRNA rna_BlendDataMaterials_remove_do_unlink_;
PropertyRNA &rna_BlendDataMaterials_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataMaterials_remove_do_id_user_;
PropertyRNA &rna_BlendDataMaterials_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataMaterials_remove_do_ui_user_;
PropertyRNA &rna_BlendDataMaterials_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_remove_do_ui_user_);

FunctionRNA *rna_BlendDataMaterials_remove_func;
static BoolPropertyRNA rna_BlendDataMaterials_tag_value_;
PropertyRNA &rna_BlendDataMaterials_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataMaterials_tag_value_);

FunctionRNA *rna_BlendDataMaterials_tag_func;
StructRNA *RNA_BlendDataMaterials;
void register_struct_BlendDataMaterials(BlenderRNA &brna)
{
	rna_BlendDataMaterials_rna_properties_ = {
		{&rna_BlendDataMaterials_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMaterials_rna_properties_begin, BlendDataMaterials_rna_properties_next, BlendDataMaterials_rna_properties_end, BlendDataMaterials_rna_properties_get, nullptr, nullptr, BlendDataMaterials_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataMaterials_rna_type_ = {
		{nullptr, 	&rna_BlendDataMaterials_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMaterials_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataMaterials;
	srna->cont.properties = {&rna_BlendDataMaterials_rna_properties, &rna_BlendDataMaterials_rna_type};
	srna->identifier = "BlendDataMaterials";
	srna->flag = 516;
	srna->name = "Main Materials";
	srna->description = "Collection of materials";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataMaterials_rna_properties;
	{
	rna_BlendDataMaterials_new_name_ = {
		{&rna_BlendDataMaterials_new_material, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Material"
	};
	rna_BlendDataMaterials_new_material_ = {
		{nullptr, 	&rna_BlendDataMaterials_new_name,
		-1, "material", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New material data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Material
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMaterials_new_name, &rna_BlendDataMaterials_new_material};
		func->identifier = "new";
		func->description = "Add a new material to the main database";
		func->call = BlendDataMaterials_new_call;
		func->c_ret = &rna_BlendDataMaterials_new_material;
		rna_BlendDataMaterials_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMaterials_create_gpencil_data_material_ = {
		{nullptr, 	nullptr,
		-1, "material", 8650880, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Material",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Material
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMaterials_create_gpencil_data_material, &rna_BlendDataMaterials_create_gpencil_data_material};
		func->identifier = "create_gpencil_data";
		func->description = "Add Grease Pencil material settings";
		func->call = BlendDataMaterials_create_gpencil_data_call;
		rna_BlendDataMaterials_create_gpencil_data_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMaterials_remove_gpencil_data_material_ = {
		{nullptr, 	nullptr,
		-1, "material", 8650880, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Material",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Material
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMaterials_remove_gpencil_data_material, &rna_BlendDataMaterials_remove_gpencil_data_material};
		func->identifier = "remove_gpencil_data";
		func->description = "Remove Grease Pencil material settings";
		func->call = BlendDataMaterials_remove_gpencil_data_call;
		rna_BlendDataMaterials_remove_gpencil_data_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMaterials_remove_material_ = {
		{&rna_BlendDataMaterials_remove_do_unlink, 	nullptr,
		-1, "material", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Material to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Material
	};
	rna_BlendDataMaterials_remove_do_unlink_ = {
		{&rna_BlendDataMaterials_remove_do_id_user, 	&rna_BlendDataMaterials_remove_material,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this material before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMaterials_remove_do_id_user_ = {
		{&rna_BlendDataMaterials_remove_do_ui_user, 	&rna_BlendDataMaterials_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this material",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMaterials_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataMaterials_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this material",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMaterials_remove_material, &rna_BlendDataMaterials_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a material from the current blendfile";
		func->call = BlendDataMaterials_remove_call;
		rna_BlendDataMaterials_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMaterials_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMaterials_tag_value, &rna_BlendDataMaterials_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataMaterials_tag_call;
		rna_BlendDataMaterials_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Node Trees */
static CollectionPropertyRNA rna_BlendDataNodeTrees_rna_properties_;
PropertyRNA &rna_BlendDataNodeTrees_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_rna_properties_);

static PointerPropertyRNA rna_BlendDataNodeTrees_rna_type_;
PropertyRNA &rna_BlendDataNodeTrees_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_rna_type_);

static StringPropertyRNA rna_BlendDataNodeTrees_new_name_;
PropertyRNA &rna_BlendDataNodeTrees_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_new_name_);

static EnumPropertyRNA rna_BlendDataNodeTrees_new_type_;
PropertyRNA &rna_BlendDataNodeTrees_new_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_new_type_);

static PointerPropertyRNA rna_BlendDataNodeTrees_new_tree_;
PropertyRNA &rna_BlendDataNodeTrees_new_tree = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_new_tree_);

FunctionRNA *rna_BlendDataNodeTrees_new_func;
static PointerPropertyRNA rna_BlendDataNodeTrees_remove_tree_;
PropertyRNA &rna_BlendDataNodeTrees_remove_tree = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_remove_tree_);

static BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_unlink_;
PropertyRNA &rna_BlendDataNodeTrees_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_id_user_;
PropertyRNA &rna_BlendDataNodeTrees_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataNodeTrees_remove_do_ui_user_;
PropertyRNA &rna_BlendDataNodeTrees_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_remove_do_ui_user_);

FunctionRNA *rna_BlendDataNodeTrees_remove_func;
static BoolPropertyRNA rna_BlendDataNodeTrees_tag_value_;
PropertyRNA &rna_BlendDataNodeTrees_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataNodeTrees_tag_value_);

FunctionRNA *rna_BlendDataNodeTrees_tag_func;
StructRNA *RNA_BlendDataNodeTrees;
void register_struct_BlendDataNodeTrees(BlenderRNA &brna)
{
	rna_BlendDataNodeTrees_rna_properties_ = {
		{&rna_BlendDataNodeTrees_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataNodeTrees_rna_properties_begin, BlendDataNodeTrees_rna_properties_next, BlendDataNodeTrees_rna_properties_end, BlendDataNodeTrees_rna_properties_get, nullptr, nullptr, BlendDataNodeTrees_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataNodeTrees_rna_type_ = {
		{nullptr, 	&rna_BlendDataNodeTrees_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataNodeTrees_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataNodeTrees;
	srna->cont.properties = {&rna_BlendDataNodeTrees_rna_properties, &rna_BlendDataNodeTrees_rna_type};
	srna->identifier = "BlendDataNodeTrees";
	srna->flag = 516;
	srna->name = "Main Node Trees";
	srna->description = "Collection of node trees";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataNodeTrees_rna_properties;
	{
	rna_BlendDataNodeTrees_new_name_ = {
		{&rna_BlendDataNodeTrees_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "NodeGroup"
	};
	rna_BlendDataNodeTrees_new_type_ = {
		{&rna_BlendDataNodeTrees_new_tree, 	&rna_BlendDataNodeTrees_new_name,
		-1, "type", 16777219, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"The type of node_group to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, rna_Main_nodetree_type_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_DEFAULT_items, 1, 0
	};
	rna_BlendDataNodeTrees_new_tree_ = {
		{nullptr, 	&rna_BlendDataNodeTrees_new_type,
		-1, "tree", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New node tree data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_NodeTree
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataNodeTrees_new_name, &rna_BlendDataNodeTrees_new_tree};
		func->identifier = "new";
		func->description = "Add a new node tree to the main database";
		func->call = BlendDataNodeTrees_new_call;
		func->c_ret = &rna_BlendDataNodeTrees_new_tree;
		rna_BlendDataNodeTrees_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataNodeTrees_remove_tree_ = {
		{&rna_BlendDataNodeTrees_remove_do_unlink, 	nullptr,
		-1, "tree", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Node tree to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_NodeTree
	};
	rna_BlendDataNodeTrees_remove_do_unlink_ = {
		{&rna_BlendDataNodeTrees_remove_do_id_user, 	&rna_BlendDataNodeTrees_remove_tree,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this node tree before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataNodeTrees_remove_do_id_user_ = {
		{&rna_BlendDataNodeTrees_remove_do_ui_user, 	&rna_BlendDataNodeTrees_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this node tree",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataNodeTrees_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataNodeTrees_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this node tree",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataNodeTrees_remove_tree, &rna_BlendDataNodeTrees_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a node tree from the current blendfile";
		func->call = BlendDataNodeTrees_remove_call;
		rna_BlendDataNodeTrees_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataNodeTrees_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataNodeTrees_tag_value, &rna_BlendDataNodeTrees_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataNodeTrees_tag_call;
		rna_BlendDataNodeTrees_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Meshes */
static CollectionPropertyRNA rna_BlendDataMeshes_rna_properties_;
PropertyRNA &rna_BlendDataMeshes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_rna_properties_);

static PointerPropertyRNA rna_BlendDataMeshes_rna_type_;
PropertyRNA &rna_BlendDataMeshes_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_rna_type_);

static StringPropertyRNA rna_BlendDataMeshes_new_name_;
PropertyRNA &rna_BlendDataMeshes_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_new_name_);

static PointerPropertyRNA rna_BlendDataMeshes_new_mesh_;
PropertyRNA &rna_BlendDataMeshes_new_mesh = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_new_mesh_);

FunctionRNA *rna_BlendDataMeshes_new_func;
static PointerPropertyRNA rna_BlendDataMeshes_new_from_object_object_;
PropertyRNA &rna_BlendDataMeshes_new_from_object_object = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_new_from_object_object_);

static BoolPropertyRNA rna_BlendDataMeshes_new_from_object_preserve_all_data_layers_;
PropertyRNA &rna_BlendDataMeshes_new_from_object_preserve_all_data_layers = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_new_from_object_preserve_all_data_layers_);

static PointerPropertyRNA rna_BlendDataMeshes_new_from_object_depsgraph_;
PropertyRNA &rna_BlendDataMeshes_new_from_object_depsgraph = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_new_from_object_depsgraph_);

static PointerPropertyRNA rna_BlendDataMeshes_new_from_object_mesh_;
PropertyRNA &rna_BlendDataMeshes_new_from_object_mesh = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_new_from_object_mesh_);

FunctionRNA *rna_BlendDataMeshes_new_from_object_func;
static PointerPropertyRNA rna_BlendDataMeshes_remove_mesh_;
PropertyRNA &rna_BlendDataMeshes_remove_mesh = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_remove_mesh_);

static BoolPropertyRNA rna_BlendDataMeshes_remove_do_unlink_;
PropertyRNA &rna_BlendDataMeshes_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataMeshes_remove_do_id_user_;
PropertyRNA &rna_BlendDataMeshes_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataMeshes_remove_do_ui_user_;
PropertyRNA &rna_BlendDataMeshes_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_remove_do_ui_user_);

FunctionRNA *rna_BlendDataMeshes_remove_func;
static BoolPropertyRNA rna_BlendDataMeshes_tag_value_;
PropertyRNA &rna_BlendDataMeshes_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataMeshes_tag_value_);

FunctionRNA *rna_BlendDataMeshes_tag_func;
StructRNA *RNA_BlendDataMeshes;
void register_struct_BlendDataMeshes(BlenderRNA &brna)
{
	rna_BlendDataMeshes_rna_properties_ = {
		{&rna_BlendDataMeshes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMeshes_rna_properties_begin, BlendDataMeshes_rna_properties_next, BlendDataMeshes_rna_properties_end, BlendDataMeshes_rna_properties_get, nullptr, nullptr, BlendDataMeshes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataMeshes_rna_type_ = {
		{nullptr, 	&rna_BlendDataMeshes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMeshes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataMeshes;
	srna->cont.properties = {&rna_BlendDataMeshes_rna_properties, &rna_BlendDataMeshes_rna_type};
	srna->identifier = "BlendDataMeshes";
	srna->flag = 516;
	srna->name = "Main Meshes";
	srna->description = "Collection of meshes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataMeshes_rna_properties;
	{
	rna_BlendDataMeshes_new_name_ = {
		{&rna_BlendDataMeshes_new_mesh, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Mesh"
	};
	rna_BlendDataMeshes_new_mesh_ = {
		{nullptr, 	&rna_BlendDataMeshes_new_name,
		-1, "mesh", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New mesh data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mesh
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMeshes_new_name, &rna_BlendDataMeshes_new_mesh};
		func->identifier = "new";
		func->description = "Add a new mesh to the main database";
		func->call = BlendDataMeshes_new_call;
		func->c_ret = &rna_BlendDataMeshes_new_mesh;
		rna_BlendDataMeshes_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMeshes_new_from_object_object_ = {
		{&rna_BlendDataMeshes_new_from_object_preserve_all_data_layers, 	nullptr,
		-1, "object", 8650880, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Object to create mesh from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Object
	};
	rna_BlendDataMeshes_new_from_object_preserve_all_data_layers_ = {
		{&rna_BlendDataMeshes_new_from_object_depsgraph, 	&rna_BlendDataMeshes_new_from_object_object,
		-1, "preserve_all_data_layers", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Preserve all data layers in the mesh, like UV maps and vertex groups. By default Blender only computes the subset of data layers needed for viewport display and rendering, for better performance.",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataMeshes_new_from_object_depsgraph_ = {
		{&rna_BlendDataMeshes_new_from_object_mesh, 	&rna_BlendDataMeshes_new_from_object_preserve_all_data_layers,
		-1, "depsgraph", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Dependency Graph",
		"Evaluated dependency graph which is required when preserve_all_data_layers is true",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Depsgraph
	};
	rna_BlendDataMeshes_new_from_object_mesh_ = {
		{nullptr, 	&rna_BlendDataMeshes_new_from_object_depsgraph,
		-1, "mesh", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Mesh created from object, remove it if it is only used for export",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mesh
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMeshes_new_from_object_object, &rna_BlendDataMeshes_new_from_object_mesh};
		func->identifier = "new_from_object";
		func->flag = 16;
		func->description = "Add a new mesh created from given object (undeformed geometry if object is original, and final evaluated geometry, with all modifiers etc., if object is evaluated)";
		func->call = BlendDataMeshes_new_from_object_call;
		func->c_ret = &rna_BlendDataMeshes_new_from_object_mesh;
		rna_BlendDataMeshes_new_from_object_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMeshes_remove_mesh_ = {
		{&rna_BlendDataMeshes_remove_do_unlink, 	nullptr,
		-1, "mesh", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Mesh to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mesh
	};
	rna_BlendDataMeshes_remove_do_unlink_ = {
		{&rna_BlendDataMeshes_remove_do_id_user, 	&rna_BlendDataMeshes_remove_mesh,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this mesh before deleting it (WARNING: will also delete objects instancing that mesh data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMeshes_remove_do_id_user_ = {
		{&rna_BlendDataMeshes_remove_do_ui_user, 	&rna_BlendDataMeshes_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this mesh data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMeshes_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataMeshes_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this mesh data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMeshes_remove_mesh, &rna_BlendDataMeshes_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a mesh from the current blendfile";
		func->call = BlendDataMeshes_remove_call;
		rna_BlendDataMeshes_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMeshes_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMeshes_tag_value, &rna_BlendDataMeshes_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataMeshes_tag_call;
		rna_BlendDataMeshes_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Lights */
static CollectionPropertyRNA rna_BlendDataLights_rna_properties_;
PropertyRNA &rna_BlendDataLights_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_rna_properties_);

static PointerPropertyRNA rna_BlendDataLights_rna_type_;
PropertyRNA &rna_BlendDataLights_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_rna_type_);

static StringPropertyRNA rna_BlendDataLights_new_name_;
PropertyRNA &rna_BlendDataLights_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_new_name_);

static EnumPropertyRNA rna_BlendDataLights_new_type_;
PropertyRNA &rna_BlendDataLights_new_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_new_type_);

static PointerPropertyRNA rna_BlendDataLights_new_light_;
PropertyRNA &rna_BlendDataLights_new_light = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_new_light_);

FunctionRNA *rna_BlendDataLights_new_func;
static PointerPropertyRNA rna_BlendDataLights_remove_light_;
PropertyRNA &rna_BlendDataLights_remove_light = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_remove_light_);

static BoolPropertyRNA rna_BlendDataLights_remove_do_unlink_;
PropertyRNA &rna_BlendDataLights_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataLights_remove_do_id_user_;
PropertyRNA &rna_BlendDataLights_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataLights_remove_do_ui_user_;
PropertyRNA &rna_BlendDataLights_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_remove_do_ui_user_);

FunctionRNA *rna_BlendDataLights_remove_func;
static BoolPropertyRNA rna_BlendDataLights_tag_value_;
PropertyRNA &rna_BlendDataLights_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataLights_tag_value_);

FunctionRNA *rna_BlendDataLights_tag_func;
StructRNA *RNA_BlendDataLights;
void register_struct_BlendDataLights(BlenderRNA &brna)
{
	rna_BlendDataLights_rna_properties_ = {
		{&rna_BlendDataLights_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataLights_rna_properties_begin, BlendDataLights_rna_properties_next, BlendDataLights_rna_properties_end, BlendDataLights_rna_properties_get, nullptr, nullptr, BlendDataLights_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataLights_rna_type_ = {
		{nullptr, 	&rna_BlendDataLights_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataLights_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataLights;
	srna->cont.properties = {&rna_BlendDataLights_rna_properties, &rna_BlendDataLights_rna_type};
	srna->identifier = "BlendDataLights";
	srna->flag = 516;
	srna->name = "Main Lights";
	srna->description = "Collection of lights";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataLights_rna_properties;
	{
	rna_BlendDataLights_new_name_ = {
		{&rna_BlendDataLights_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Light"
	};
	rna_BlendDataLights_new_type_ = {
		{&rna_BlendDataLights_new_light, 	&rna_BlendDataLights_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"The type of light to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_light_type_items, 4, 0
	};
	rna_BlendDataLights_new_light_ = {
		{nullptr, 	&rna_BlendDataLights_new_type,
		-1, "light", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New light data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Light
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLights_new_name, &rna_BlendDataLights_new_light};
		func->identifier = "new";
		func->description = "Add a new light to the main database";
		func->call = BlendDataLights_new_call;
		func->c_ret = &rna_BlendDataLights_new_light;
		rna_BlendDataLights_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataLights_remove_light_ = {
		{&rna_BlendDataLights_remove_do_unlink, 	nullptr,
		-1, "light", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Light to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Light
	};
	rna_BlendDataLights_remove_do_unlink_ = {
		{&rna_BlendDataLights_remove_do_id_user, 	&rna_BlendDataLights_remove_light,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this light before deleting it (WARNING: will also delete objects instancing that light data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataLights_remove_do_id_user_ = {
		{&rna_BlendDataLights_remove_do_ui_user, 	&rna_BlendDataLights_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this light data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataLights_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataLights_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this light data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLights_remove_light, &rna_BlendDataLights_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a light from the current blendfile";
		func->call = BlendDataLights_remove_call;
		rna_BlendDataLights_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataLights_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLights_tag_value, &rna_BlendDataLights_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataLights_tag_call;
		rna_BlendDataLights_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Libraries */
static CollectionPropertyRNA rna_BlendDataLibraries_rna_properties_;
PropertyRNA &rna_BlendDataLibraries_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataLibraries_rna_properties_);

static PointerPropertyRNA rna_BlendDataLibraries_rna_type_;
PropertyRNA &rna_BlendDataLibraries_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataLibraries_rna_type_);

static BoolPropertyRNA rna_BlendDataLibraries_tag_value_;
PropertyRNA &rna_BlendDataLibraries_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataLibraries_tag_value_);

FunctionRNA *rna_BlendDataLibraries_tag_func;
static PointerPropertyRNA rna_BlendDataLibraries_remove_library_;
PropertyRNA &rna_BlendDataLibraries_remove_library = reinterpret_cast<PropertyRNA &>(rna_BlendDataLibraries_remove_library_);

static BoolPropertyRNA rna_BlendDataLibraries_remove_do_unlink_;
PropertyRNA &rna_BlendDataLibraries_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataLibraries_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataLibraries_remove_do_id_user_;
PropertyRNA &rna_BlendDataLibraries_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataLibraries_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataLibraries_remove_do_ui_user_;
PropertyRNA &rna_BlendDataLibraries_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataLibraries_remove_do_ui_user_);

FunctionRNA *rna_BlendDataLibraries_remove_func;
StructRNA *RNA_BlendDataLibraries;
void register_struct_BlendDataLibraries(BlenderRNA &brna)
{
	rna_BlendDataLibraries_rna_properties_ = {
		{&rna_BlendDataLibraries_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataLibraries_rna_properties_begin, BlendDataLibraries_rna_properties_next, BlendDataLibraries_rna_properties_end, BlendDataLibraries_rna_properties_get, nullptr, nullptr, BlendDataLibraries_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataLibraries_rna_type_ = {
		{nullptr, 	&rna_BlendDataLibraries_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataLibraries_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataLibraries;
	srna->cont.properties = {&rna_BlendDataLibraries_rna_properties, &rna_BlendDataLibraries_rna_type};
	srna->identifier = "BlendDataLibraries";
	srna->flag = 516;
	srna->name = "Main Libraries";
	srna->description = "Collection of libraries";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataLibraries_rna_properties;
	{
	rna_BlendDataLibraries_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLibraries_tag_value, &rna_BlendDataLibraries_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataLibraries_tag_call;
		rna_BlendDataLibraries_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataLibraries_remove_library_ = {
		{&rna_BlendDataLibraries_remove_do_unlink, 	nullptr,
		-1, "library", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Library to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Library
	};
	rna_BlendDataLibraries_remove_do_unlink_ = {
		{&rna_BlendDataLibraries_remove_do_id_user, 	&rna_BlendDataLibraries_remove_library,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this library before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataLibraries_remove_do_id_user_ = {
		{&rna_BlendDataLibraries_remove_do_ui_user, 	&rna_BlendDataLibraries_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this library",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataLibraries_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataLibraries_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this library",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLibraries_remove_library, &rna_BlendDataLibraries_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a library from the current blendfile";
		func->call = BlendDataLibraries_remove_call;
		rna_BlendDataLibraries_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Screens */
static CollectionPropertyRNA rna_BlendDataScreens_rna_properties_;
PropertyRNA &rna_BlendDataScreens_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataScreens_rna_properties_);

static PointerPropertyRNA rna_BlendDataScreens_rna_type_;
PropertyRNA &rna_BlendDataScreens_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataScreens_rna_type_);

static BoolPropertyRNA rna_BlendDataScreens_tag_value_;
PropertyRNA &rna_BlendDataScreens_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataScreens_tag_value_);

FunctionRNA *rna_BlendDataScreens_tag_func;
StructRNA *RNA_BlendDataScreens;
void register_struct_BlendDataScreens(BlenderRNA &brna)
{
	rna_BlendDataScreens_rna_properties_ = {
		{&rna_BlendDataScreens_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataScreens_rna_properties_begin, BlendDataScreens_rna_properties_next, BlendDataScreens_rna_properties_end, BlendDataScreens_rna_properties_get, nullptr, nullptr, BlendDataScreens_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataScreens_rna_type_ = {
		{nullptr, 	&rna_BlendDataScreens_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataScreens_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataScreens;
	srna->cont.properties = {&rna_BlendDataScreens_rna_properties, &rna_BlendDataScreens_rna_type};
	srna->identifier = "BlendDataScreens";
	srna->flag = 516;
	srna->name = "Main Screens";
	srna->description = "Collection of screens";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataScreens_rna_properties;
	{
	rna_BlendDataScreens_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataScreens_tag_value, &rna_BlendDataScreens_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataScreens_tag_call;
		rna_BlendDataScreens_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Window Managers */
static CollectionPropertyRNA rna_BlendDataWindowManagers_rna_properties_;
PropertyRNA &rna_BlendDataWindowManagers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataWindowManagers_rna_properties_);

static PointerPropertyRNA rna_BlendDataWindowManagers_rna_type_;
PropertyRNA &rna_BlendDataWindowManagers_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataWindowManagers_rna_type_);

static BoolPropertyRNA rna_BlendDataWindowManagers_tag_value_;
PropertyRNA &rna_BlendDataWindowManagers_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataWindowManagers_tag_value_);

FunctionRNA *rna_BlendDataWindowManagers_tag_func;
StructRNA *RNA_BlendDataWindowManagers;
void register_struct_BlendDataWindowManagers(BlenderRNA &brna)
{
	rna_BlendDataWindowManagers_rna_properties_ = {
		{&rna_BlendDataWindowManagers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataWindowManagers_rna_properties_begin, BlendDataWindowManagers_rna_properties_next, BlendDataWindowManagers_rna_properties_end, BlendDataWindowManagers_rna_properties_get, nullptr, nullptr, BlendDataWindowManagers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataWindowManagers_rna_type_ = {
		{nullptr, 	&rna_BlendDataWindowManagers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataWindowManagers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataWindowManagers;
	srna->cont.properties = {&rna_BlendDataWindowManagers_rna_properties, &rna_BlendDataWindowManagers_rna_type};
	srna->identifier = "BlendDataWindowManagers";
	srna->flag = 516;
	srna->name = "Main Window Managers";
	srna->description = "Collection of window managers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataWindowManagers_rna_properties;
	{
	rna_BlendDataWindowManagers_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataWindowManagers_tag_value, &rna_BlendDataWindowManagers_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataWindowManagers_tag_call;
		rna_BlendDataWindowManagers_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Images */
static CollectionPropertyRNA rna_BlendDataImages_rna_properties_;
PropertyRNA &rna_BlendDataImages_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_rna_properties_);

static PointerPropertyRNA rna_BlendDataImages_rna_type_;
PropertyRNA &rna_BlendDataImages_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_rna_type_);

static StringPropertyRNA rna_BlendDataImages_new_name_;
PropertyRNA &rna_BlendDataImages_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_name_);

static IntPropertyRNA rna_BlendDataImages_new_width_;
PropertyRNA &rna_BlendDataImages_new_width = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_width_);

static IntPropertyRNA rna_BlendDataImages_new_height_;
PropertyRNA &rna_BlendDataImages_new_height = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_height_);

static BoolPropertyRNA rna_BlendDataImages_new_alpha_;
PropertyRNA &rna_BlendDataImages_new_alpha = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_alpha_);

static BoolPropertyRNA rna_BlendDataImages_new_float_buffer_;
PropertyRNA &rna_BlendDataImages_new_float_buffer = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_float_buffer_);

static BoolPropertyRNA rna_BlendDataImages_new_stereo3d_;
PropertyRNA &rna_BlendDataImages_new_stereo3d = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_stereo3d_);

static BoolPropertyRNA rna_BlendDataImages_new_is_data_;
PropertyRNA &rna_BlendDataImages_new_is_data = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_is_data_);

static BoolPropertyRNA rna_BlendDataImages_new_tiled_;
PropertyRNA &rna_BlendDataImages_new_tiled = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_tiled_);

static PointerPropertyRNA rna_BlendDataImages_new_image_;
PropertyRNA &rna_BlendDataImages_new_image = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_new_image_);

FunctionRNA *rna_BlendDataImages_new_func;
static StringPropertyRNA rna_BlendDataImages_load_filepath_;
PropertyRNA &rna_BlendDataImages_load_filepath = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_load_filepath_);

static BoolPropertyRNA rna_BlendDataImages_load_check_existing_;
PropertyRNA &rna_BlendDataImages_load_check_existing = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_load_check_existing_);

static PointerPropertyRNA rna_BlendDataImages_load_image_;
PropertyRNA &rna_BlendDataImages_load_image = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_load_image_);

FunctionRNA *rna_BlendDataImages_load_func;
static PointerPropertyRNA rna_BlendDataImages_remove_image_;
PropertyRNA &rna_BlendDataImages_remove_image = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_remove_image_);

static BoolPropertyRNA rna_BlendDataImages_remove_do_unlink_;
PropertyRNA &rna_BlendDataImages_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataImages_remove_do_id_user_;
PropertyRNA &rna_BlendDataImages_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataImages_remove_do_ui_user_;
PropertyRNA &rna_BlendDataImages_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_remove_do_ui_user_);

FunctionRNA *rna_BlendDataImages_remove_func;
static BoolPropertyRNA rna_BlendDataImages_tag_value_;
PropertyRNA &rna_BlendDataImages_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataImages_tag_value_);

FunctionRNA *rna_BlendDataImages_tag_func;
StructRNA *RNA_BlendDataImages;
void register_struct_BlendDataImages(BlenderRNA &brna)
{
	rna_BlendDataImages_rna_properties_ = {
		{&rna_BlendDataImages_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataImages_rna_properties_begin, BlendDataImages_rna_properties_next, BlendDataImages_rna_properties_end, BlendDataImages_rna_properties_get, nullptr, nullptr, BlendDataImages_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataImages_rna_type_ = {
		{nullptr, 	&rna_BlendDataImages_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataImages_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataImages;
	srna->cont.properties = {&rna_BlendDataImages_rna_properties, &rna_BlendDataImages_rna_type};
	srna->identifier = "BlendDataImages";
	srna->flag = 516;
	srna->name = "Main Images";
	srna->description = "Collection of images";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataImages_rna_properties;
	{
	rna_BlendDataImages_new_name_ = {
		{&rna_BlendDataImages_new_width, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Image"
	};
	rna_BlendDataImages_new_width_ = {
		{&rna_BlendDataImages_new_height, 	&rna_BlendDataImages_new_name,
		-1, "width", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Width of the image",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 1024, nullptr
	};
	rna_BlendDataImages_new_height_ = {
		{&rna_BlendDataImages_new_alpha, 	&rna_BlendDataImages_new_width,
		-1, "height", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Height of the image",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 1, INT_MAX, 1, INT_MAX, 1, nullptr, nullptr, 1024, nullptr
	};
	rna_BlendDataImages_new_alpha_ = {
		{&rna_BlendDataImages_new_float_buffer, 	&rna_BlendDataImages_new_height,
		-1, "alpha", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Alpha",
		"Use alpha channel",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataImages_new_float_buffer_ = {
		{&rna_BlendDataImages_new_stereo3d, 	&rna_BlendDataImages_new_alpha,
		-1, "float_buffer", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Float Buffer",
		"Create an image with floating-point color",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataImages_new_stereo3d_ = {
		{&rna_BlendDataImages_new_is_data, 	&rna_BlendDataImages_new_float_buffer,
		-1, "stereo3d", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Stereo 3D",
		"Create left and right views",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataImages_new_is_data_ = {
		{&rna_BlendDataImages_new_tiled, 	&rna_BlendDataImages_new_stereo3d,
		-1, "is_data", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Data",
		"Create image with non-color data color space",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataImages_new_tiled_ = {
		{&rna_BlendDataImages_new_image, 	&rna_BlendDataImages_new_is_data,
		-1, "tiled", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Tiled",
		"Create a tiled image",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataImages_new_image_ = {
		{nullptr, 	&rna_BlendDataImages_new_tiled,
		-1, "image", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New image data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Image
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataImages_new_name, &rna_BlendDataImages_new_image};
		func->identifier = "new";
		func->description = "Add a new image to the main database";
		func->call = BlendDataImages_new_call;
		func->c_ret = &rna_BlendDataImages_new_image;
		rna_BlendDataImages_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataImages_load_filepath_ = {
		{&rna_BlendDataImages_load_check_existing, 	nullptr,
		-1, "filepath", 294913, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Path of the file to load",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File Path"
	};
	rna_BlendDataImages_load_check_existing_ = {
		{&rna_BlendDataImages_load_image, 	&rna_BlendDataImages_load_filepath,
		-1, "check_existing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Using existing data-block if this file is already loaded",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataImages_load_image_ = {
		{nullptr, 	&rna_BlendDataImages_load_check_existing,
		-1, "image", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New image data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Image
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataImages_load_filepath, &rna_BlendDataImages_load_image};
		func->identifier = "load";
		func->flag = 16;
		func->description = "Load a new image into the main database";
		func->call = BlendDataImages_load_call;
		func->c_ret = &rna_BlendDataImages_load_image;
		rna_BlendDataImages_load_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataImages_remove_image_ = {
		{&rna_BlendDataImages_remove_do_unlink, 	nullptr,
		-1, "image", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Image to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Image
	};
	rna_BlendDataImages_remove_do_unlink_ = {
		{&rna_BlendDataImages_remove_do_id_user, 	&rna_BlendDataImages_remove_image,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this image before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataImages_remove_do_id_user_ = {
		{&rna_BlendDataImages_remove_do_ui_user, 	&rna_BlendDataImages_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this image",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataImages_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataImages_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this image",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataImages_remove_image, &rna_BlendDataImages_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an image from the current blendfile";
		func->call = BlendDataImages_remove_call;
		rna_BlendDataImages_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataImages_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataImages_tag_value, &rna_BlendDataImages_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataImages_tag_call;
		rna_BlendDataImages_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Lattices */
static CollectionPropertyRNA rna_BlendDataLattices_rna_properties_;
PropertyRNA &rna_BlendDataLattices_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_rna_properties_);

static PointerPropertyRNA rna_BlendDataLattices_rna_type_;
PropertyRNA &rna_BlendDataLattices_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_rna_type_);

static StringPropertyRNA rna_BlendDataLattices_new_name_;
PropertyRNA &rna_BlendDataLattices_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_new_name_);

static PointerPropertyRNA rna_BlendDataLattices_new_lattice_;
PropertyRNA &rna_BlendDataLattices_new_lattice = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_new_lattice_);

FunctionRNA *rna_BlendDataLattices_new_func;
static PointerPropertyRNA rna_BlendDataLattices_remove_lattice_;
PropertyRNA &rna_BlendDataLattices_remove_lattice = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_remove_lattice_);

static BoolPropertyRNA rna_BlendDataLattices_remove_do_unlink_;
PropertyRNA &rna_BlendDataLattices_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataLattices_remove_do_id_user_;
PropertyRNA &rna_BlendDataLattices_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataLattices_remove_do_ui_user_;
PropertyRNA &rna_BlendDataLattices_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_remove_do_ui_user_);

FunctionRNA *rna_BlendDataLattices_remove_func;
static BoolPropertyRNA rna_BlendDataLattices_tag_value_;
PropertyRNA &rna_BlendDataLattices_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataLattices_tag_value_);

FunctionRNA *rna_BlendDataLattices_tag_func;
StructRNA *RNA_BlendDataLattices;
void register_struct_BlendDataLattices(BlenderRNA &brna)
{
	rna_BlendDataLattices_rna_properties_ = {
		{&rna_BlendDataLattices_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataLattices_rna_properties_begin, BlendDataLattices_rna_properties_next, BlendDataLattices_rna_properties_end, BlendDataLattices_rna_properties_get, nullptr, nullptr, BlendDataLattices_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataLattices_rna_type_ = {
		{nullptr, 	&rna_BlendDataLattices_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataLattices_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataLattices;
	srna->cont.properties = {&rna_BlendDataLattices_rna_properties, &rna_BlendDataLattices_rna_type};
	srna->identifier = "BlendDataLattices";
	srna->flag = 516;
	srna->name = "Main Lattices";
	srna->description = "Collection of lattices";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataLattices_rna_properties;
	{
	rna_BlendDataLattices_new_name_ = {
		{&rna_BlendDataLattices_new_lattice, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Lattice"
	};
	rna_BlendDataLattices_new_lattice_ = {
		{nullptr, 	&rna_BlendDataLattices_new_name,
		-1, "lattice", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New lattice data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Lattice
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLattices_new_name, &rna_BlendDataLattices_new_lattice};
		func->identifier = "new";
		func->description = "Add a new lattice to the main database";
		func->call = BlendDataLattices_new_call;
		func->c_ret = &rna_BlendDataLattices_new_lattice;
		rna_BlendDataLattices_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataLattices_remove_lattice_ = {
		{&rna_BlendDataLattices_remove_do_unlink, 	nullptr,
		-1, "lattice", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Lattice to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Lattice
	};
	rna_BlendDataLattices_remove_do_unlink_ = {
		{&rna_BlendDataLattices_remove_do_id_user, 	&rna_BlendDataLattices_remove_lattice,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this lattice before deleting it (WARNING: will also delete objects instancing that lattice data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataLattices_remove_do_id_user_ = {
		{&rna_BlendDataLattices_remove_do_ui_user, 	&rna_BlendDataLattices_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this lattice data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataLattices_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataLattices_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this lattice data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLattices_remove_lattice, &rna_BlendDataLattices_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a lattice from the current blendfile";
		func->call = BlendDataLattices_remove_call;
		rna_BlendDataLattices_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataLattices_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLattices_tag_value, &rna_BlendDataLattices_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataLattices_tag_call;
		rna_BlendDataLattices_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Curves */
static CollectionPropertyRNA rna_BlendDataCurves_rna_properties_;
PropertyRNA &rna_BlendDataCurves_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_rna_properties_);

static PointerPropertyRNA rna_BlendDataCurves_rna_type_;
PropertyRNA &rna_BlendDataCurves_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_rna_type_);

static StringPropertyRNA rna_BlendDataCurves_new_name_;
PropertyRNA &rna_BlendDataCurves_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_new_name_);

static EnumPropertyRNA rna_BlendDataCurves_new_type_;
PropertyRNA &rna_BlendDataCurves_new_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_new_type_);

static PointerPropertyRNA rna_BlendDataCurves_new_curve_;
PropertyRNA &rna_BlendDataCurves_new_curve = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_new_curve_);

FunctionRNA *rna_BlendDataCurves_new_func;
static PointerPropertyRNA rna_BlendDataCurves_remove_curve_;
PropertyRNA &rna_BlendDataCurves_remove_curve = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_remove_curve_);

static BoolPropertyRNA rna_BlendDataCurves_remove_do_unlink_;
PropertyRNA &rna_BlendDataCurves_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataCurves_remove_do_id_user_;
PropertyRNA &rna_BlendDataCurves_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataCurves_remove_do_ui_user_;
PropertyRNA &rna_BlendDataCurves_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_remove_do_ui_user_);

FunctionRNA *rna_BlendDataCurves_remove_func;
static BoolPropertyRNA rna_BlendDataCurves_tag_value_;
PropertyRNA &rna_BlendDataCurves_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataCurves_tag_value_);

FunctionRNA *rna_BlendDataCurves_tag_func;
StructRNA *RNA_BlendDataCurves;
void register_struct_BlendDataCurves(BlenderRNA &brna)
{
	rna_BlendDataCurves_rna_properties_ = {
		{&rna_BlendDataCurves_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataCurves_rna_properties_begin, BlendDataCurves_rna_properties_next, BlendDataCurves_rna_properties_end, BlendDataCurves_rna_properties_get, nullptr, nullptr, BlendDataCurves_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataCurves_rna_type_ = {
		{nullptr, 	&rna_BlendDataCurves_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataCurves_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataCurves;
	srna->cont.properties = {&rna_BlendDataCurves_rna_properties, &rna_BlendDataCurves_rna_type};
	srna->identifier = "BlendDataCurves";
	srna->flag = 516;
	srna->name = "Main Curves";
	srna->description = "Collection of curves";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataCurves_rna_properties;
	{
	rna_BlendDataCurves_new_name_ = {
		{&rna_BlendDataCurves_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Curve"
	};
	rna_BlendDataCurves_new_type_ = {
		{&rna_BlendDataCurves_new_curve, 	&rna_BlendDataCurves_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"The type of curve to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_type_curve_items, 3, 2
	};
	rna_BlendDataCurves_new_curve_ = {
		{nullptr, 	&rna_BlendDataCurves_new_type,
		-1, "curve", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New curve data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Curve
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCurves_new_name, &rna_BlendDataCurves_new_curve};
		func->identifier = "new";
		func->description = "Add a new curve to the main database";
		func->call = BlendDataCurves_new_call;
		func->c_ret = &rna_BlendDataCurves_new_curve;
		rna_BlendDataCurves_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataCurves_remove_curve_ = {
		{&rna_BlendDataCurves_remove_do_unlink, 	nullptr,
		-1, "curve", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Curve to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Curve
	};
	rna_BlendDataCurves_remove_do_unlink_ = {
		{&rna_BlendDataCurves_remove_do_id_user, 	&rna_BlendDataCurves_remove_curve,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this curve before deleting it (WARNING: will also delete objects instancing that curve data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataCurves_remove_do_id_user_ = {
		{&rna_BlendDataCurves_remove_do_ui_user, 	&rna_BlendDataCurves_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this curve data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataCurves_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataCurves_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this curve data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCurves_remove_curve, &rna_BlendDataCurves_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a curve from the current blendfile";
		func->call = BlendDataCurves_remove_call;
		rna_BlendDataCurves_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataCurves_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCurves_tag_value, &rna_BlendDataCurves_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataCurves_tag_call;
		rna_BlendDataCurves_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Metaballs */
static CollectionPropertyRNA rna_BlendDataMetaBalls_rna_properties_;
PropertyRNA &rna_BlendDataMetaBalls_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_rna_properties_);

static PointerPropertyRNA rna_BlendDataMetaBalls_rna_type_;
PropertyRNA &rna_BlendDataMetaBalls_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_rna_type_);

static StringPropertyRNA rna_BlendDataMetaBalls_new_name_;
PropertyRNA &rna_BlendDataMetaBalls_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_new_name_);

static PointerPropertyRNA rna_BlendDataMetaBalls_new_metaball_;
PropertyRNA &rna_BlendDataMetaBalls_new_metaball = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_new_metaball_);

FunctionRNA *rna_BlendDataMetaBalls_new_func;
static PointerPropertyRNA rna_BlendDataMetaBalls_remove_metaball_;
PropertyRNA &rna_BlendDataMetaBalls_remove_metaball = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_remove_metaball_);

static BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_unlink_;
PropertyRNA &rna_BlendDataMetaBalls_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_id_user_;
PropertyRNA &rna_BlendDataMetaBalls_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataMetaBalls_remove_do_ui_user_;
PropertyRNA &rna_BlendDataMetaBalls_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_remove_do_ui_user_);

FunctionRNA *rna_BlendDataMetaBalls_remove_func;
static BoolPropertyRNA rna_BlendDataMetaBalls_tag_value_;
PropertyRNA &rna_BlendDataMetaBalls_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataMetaBalls_tag_value_);

FunctionRNA *rna_BlendDataMetaBalls_tag_func;
StructRNA *RNA_BlendDataMetaBalls;
void register_struct_BlendDataMetaBalls(BlenderRNA &brna)
{
	rna_BlendDataMetaBalls_rna_properties_ = {
		{&rna_BlendDataMetaBalls_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMetaBalls_rna_properties_begin, BlendDataMetaBalls_rna_properties_next, BlendDataMetaBalls_rna_properties_end, BlendDataMetaBalls_rna_properties_get, nullptr, nullptr, BlendDataMetaBalls_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataMetaBalls_rna_type_ = {
		{nullptr, 	&rna_BlendDataMetaBalls_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMetaBalls_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataMetaBalls;
	srna->cont.properties = {&rna_BlendDataMetaBalls_rna_properties, &rna_BlendDataMetaBalls_rna_type};
	srna->identifier = "BlendDataMetaBalls";
	srna->flag = 516;
	srna->name = "Main Metaballs";
	srna->description = "Collection of metaballs";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataMetaBalls_rna_properties;
	{
	rna_BlendDataMetaBalls_new_name_ = {
		{&rna_BlendDataMetaBalls_new_metaball, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "MetaBall"
	};
	rna_BlendDataMetaBalls_new_metaball_ = {
		{nullptr, 	&rna_BlendDataMetaBalls_new_name,
		-1, "metaball", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New metaball data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MetaBall
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMetaBalls_new_name, &rna_BlendDataMetaBalls_new_metaball};
		func->identifier = "new";
		func->description = "Add a new metaball to the main database";
		func->call = BlendDataMetaBalls_new_call;
		func->c_ret = &rna_BlendDataMetaBalls_new_metaball;
		rna_BlendDataMetaBalls_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMetaBalls_remove_metaball_ = {
		{&rna_BlendDataMetaBalls_remove_do_unlink, 	nullptr,
		-1, "metaball", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Metaball to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MetaBall
	};
	rna_BlendDataMetaBalls_remove_do_unlink_ = {
		{&rna_BlendDataMetaBalls_remove_do_id_user, 	&rna_BlendDataMetaBalls_remove_metaball,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this metaball before deleting it (WARNING: will also delete objects instancing that metaball data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMetaBalls_remove_do_id_user_ = {
		{&rna_BlendDataMetaBalls_remove_do_ui_user, 	&rna_BlendDataMetaBalls_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this metaball data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMetaBalls_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataMetaBalls_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this metaball data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMetaBalls_remove_metaball, &rna_BlendDataMetaBalls_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a metaball from the current blendfile";
		func->call = BlendDataMetaBalls_remove_call;
		rna_BlendDataMetaBalls_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMetaBalls_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMetaBalls_tag_value, &rna_BlendDataMetaBalls_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataMetaBalls_tag_call;
		rna_BlendDataMetaBalls_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Fonts */
static CollectionPropertyRNA rna_BlendDataFonts_rna_properties_;
PropertyRNA &rna_BlendDataFonts_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_rna_properties_);

static PointerPropertyRNA rna_BlendDataFonts_rna_type_;
PropertyRNA &rna_BlendDataFonts_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_rna_type_);

static StringPropertyRNA rna_BlendDataFonts_load_filepath_;
PropertyRNA &rna_BlendDataFonts_load_filepath = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_load_filepath_);

static BoolPropertyRNA rna_BlendDataFonts_load_check_existing_;
PropertyRNA &rna_BlendDataFonts_load_check_existing = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_load_check_existing_);

static PointerPropertyRNA rna_BlendDataFonts_load_vfont_;
PropertyRNA &rna_BlendDataFonts_load_vfont = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_load_vfont_);

FunctionRNA *rna_BlendDataFonts_load_func;
static PointerPropertyRNA rna_BlendDataFonts_remove_vfont_;
PropertyRNA &rna_BlendDataFonts_remove_vfont = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_remove_vfont_);

static BoolPropertyRNA rna_BlendDataFonts_remove_do_unlink_;
PropertyRNA &rna_BlendDataFonts_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataFonts_remove_do_id_user_;
PropertyRNA &rna_BlendDataFonts_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataFonts_remove_do_ui_user_;
PropertyRNA &rna_BlendDataFonts_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_remove_do_ui_user_);

FunctionRNA *rna_BlendDataFonts_remove_func;
static BoolPropertyRNA rna_BlendDataFonts_tag_value_;
PropertyRNA &rna_BlendDataFonts_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataFonts_tag_value_);

FunctionRNA *rna_BlendDataFonts_tag_func;
StructRNA *RNA_BlendDataFonts;
void register_struct_BlendDataFonts(BlenderRNA &brna)
{
	rna_BlendDataFonts_rna_properties_ = {
		{&rna_BlendDataFonts_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataFonts_rna_properties_begin, BlendDataFonts_rna_properties_next, BlendDataFonts_rna_properties_end, BlendDataFonts_rna_properties_get, nullptr, nullptr, BlendDataFonts_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataFonts_rna_type_ = {
		{nullptr, 	&rna_BlendDataFonts_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataFonts_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataFonts;
	srna->cont.properties = {&rna_BlendDataFonts_rna_properties, &rna_BlendDataFonts_rna_type};
	srna->identifier = "BlendDataFonts";
	srna->flag = 516;
	srna->name = "Main Fonts";
	srna->description = "Collection of fonts";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataFonts_rna_properties;
	{
	rna_BlendDataFonts_load_filepath_ = {
		{&rna_BlendDataFonts_load_check_existing, 	nullptr,
		-1, "filepath", 294913, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"path of the font to load",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "File Path"
	};
	rna_BlendDataFonts_load_check_existing_ = {
		{&rna_BlendDataFonts_load_vfont, 	&rna_BlendDataFonts_load_filepath,
		-1, "check_existing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Using existing data-block if this file is already loaded",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataFonts_load_vfont_ = {
		{nullptr, 	&rna_BlendDataFonts_load_check_existing,
		-1, "vfont", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New font data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_VectorFont
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataFonts_load_filepath, &rna_BlendDataFonts_load_vfont};
		func->identifier = "load";
		func->flag = 16;
		func->description = "Load a new font into the main database";
		func->call = BlendDataFonts_load_call;
		func->c_ret = &rna_BlendDataFonts_load_vfont;
		rna_BlendDataFonts_load_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataFonts_remove_vfont_ = {
		{&rna_BlendDataFonts_remove_do_unlink, 	nullptr,
		-1, "vfont", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Font to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_VectorFont
	};
	rna_BlendDataFonts_remove_do_unlink_ = {
		{&rna_BlendDataFonts_remove_do_id_user, 	&rna_BlendDataFonts_remove_vfont,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this font before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataFonts_remove_do_id_user_ = {
		{&rna_BlendDataFonts_remove_do_ui_user, 	&rna_BlendDataFonts_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this font",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataFonts_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataFonts_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this font",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataFonts_remove_vfont, &rna_BlendDataFonts_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a font from the current blendfile";
		func->call = BlendDataFonts_remove_call;
		rna_BlendDataFonts_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataFonts_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataFonts_tag_value, &rna_BlendDataFonts_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataFonts_tag_call;
		rna_BlendDataFonts_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Textures */
static CollectionPropertyRNA rna_BlendDataTextures_rna_properties_;
PropertyRNA &rna_BlendDataTextures_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_rna_properties_);

static PointerPropertyRNA rna_BlendDataTextures_rna_type_;
PropertyRNA &rna_BlendDataTextures_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_rna_type_);

static StringPropertyRNA rna_BlendDataTextures_new_name_;
PropertyRNA &rna_BlendDataTextures_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_new_name_);

static EnumPropertyRNA rna_BlendDataTextures_new_type_;
PropertyRNA &rna_BlendDataTextures_new_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_new_type_);

static PointerPropertyRNA rna_BlendDataTextures_new_texture_;
PropertyRNA &rna_BlendDataTextures_new_texture = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_new_texture_);

FunctionRNA *rna_BlendDataTextures_new_func;
static PointerPropertyRNA rna_BlendDataTextures_remove_texture_;
PropertyRNA &rna_BlendDataTextures_remove_texture = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_remove_texture_);

static BoolPropertyRNA rna_BlendDataTextures_remove_do_unlink_;
PropertyRNA &rna_BlendDataTextures_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataTextures_remove_do_id_user_;
PropertyRNA &rna_BlendDataTextures_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataTextures_remove_do_ui_user_;
PropertyRNA &rna_BlendDataTextures_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_remove_do_ui_user_);

FunctionRNA *rna_BlendDataTextures_remove_func;
static BoolPropertyRNA rna_BlendDataTextures_tag_value_;
PropertyRNA &rna_BlendDataTextures_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataTextures_tag_value_);

FunctionRNA *rna_BlendDataTextures_tag_func;
StructRNA *RNA_BlendDataTextures;
void register_struct_BlendDataTextures(BlenderRNA &brna)
{
	rna_BlendDataTextures_rna_properties_ = {
		{&rna_BlendDataTextures_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataTextures_rna_properties_begin, BlendDataTextures_rna_properties_next, BlendDataTextures_rna_properties_end, BlendDataTextures_rna_properties_get, nullptr, nullptr, BlendDataTextures_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataTextures_rna_type_ = {
		{nullptr, 	&rna_BlendDataTextures_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataTextures_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataTextures;
	srna->cont.properties = {&rna_BlendDataTextures_rna_properties, &rna_BlendDataTextures_rna_type};
	srna->identifier = "BlendDataTextures";
	srna->flag = 516;
	srna->name = "Main Textures";
	srna->description = "Collection of textures";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataTextures_rna_properties;
	{
	rna_BlendDataTextures_new_name_ = {
		{&rna_BlendDataTextures_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Texture"
	};
	rna_BlendDataTextures_new_type_ = {
		{&rna_BlendDataTextures_new_texture, 	&rna_BlendDataTextures_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"The type of texture to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_texture_type_items, 12, 0
	};
	rna_BlendDataTextures_new_texture_ = {
		{nullptr, 	&rna_BlendDataTextures_new_type,
		-1, "texture", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New texture data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Texture
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataTextures_new_name, &rna_BlendDataTextures_new_texture};
		func->identifier = "new";
		func->description = "Add a new texture to the main database";
		func->call = BlendDataTextures_new_call;
		func->c_ret = &rna_BlendDataTextures_new_texture;
		rna_BlendDataTextures_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataTextures_remove_texture_ = {
		{&rna_BlendDataTextures_remove_do_unlink, 	nullptr,
		-1, "texture", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Texture to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Texture
	};
	rna_BlendDataTextures_remove_do_unlink_ = {
		{&rna_BlendDataTextures_remove_do_id_user, 	&rna_BlendDataTextures_remove_texture,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this texture before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataTextures_remove_do_id_user_ = {
		{&rna_BlendDataTextures_remove_do_ui_user, 	&rna_BlendDataTextures_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this texture",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataTextures_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataTextures_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this texture",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataTextures_remove_texture, &rna_BlendDataTextures_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a texture from the current blendfile";
		func->call = BlendDataTextures_remove_call;
		rna_BlendDataTextures_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataTextures_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataTextures_tag_value, &rna_BlendDataTextures_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataTextures_tag_call;
		rna_BlendDataTextures_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Brushes */
static CollectionPropertyRNA rna_BlendDataBrushes_rna_properties_;
PropertyRNA &rna_BlendDataBrushes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_rna_properties_);

static PointerPropertyRNA rna_BlendDataBrushes_rna_type_;
PropertyRNA &rna_BlendDataBrushes_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_rna_type_);

static StringPropertyRNA rna_BlendDataBrushes_new_name_;
PropertyRNA &rna_BlendDataBrushes_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_new_name_);

static EnumPropertyRNA rna_BlendDataBrushes_new_mode_;
PropertyRNA &rna_BlendDataBrushes_new_mode = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_new_mode_);

static PointerPropertyRNA rna_BlendDataBrushes_new_brush_;
PropertyRNA &rna_BlendDataBrushes_new_brush = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_new_brush_);

FunctionRNA *rna_BlendDataBrushes_new_func;
static PointerPropertyRNA rna_BlendDataBrushes_remove_brush_;
PropertyRNA &rna_BlendDataBrushes_remove_brush = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_remove_brush_);

static BoolPropertyRNA rna_BlendDataBrushes_remove_do_unlink_;
PropertyRNA &rna_BlendDataBrushes_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataBrushes_remove_do_id_user_;
PropertyRNA &rna_BlendDataBrushes_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataBrushes_remove_do_ui_user_;
PropertyRNA &rna_BlendDataBrushes_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_remove_do_ui_user_);

FunctionRNA *rna_BlendDataBrushes_remove_func;
static BoolPropertyRNA rna_BlendDataBrushes_tag_value_;
PropertyRNA &rna_BlendDataBrushes_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_tag_value_);

FunctionRNA *rna_BlendDataBrushes_tag_func;
static PointerPropertyRNA rna_BlendDataBrushes_create_gpencil_data_brush_;
PropertyRNA &rna_BlendDataBrushes_create_gpencil_data_brush = reinterpret_cast<PropertyRNA &>(rna_BlendDataBrushes_create_gpencil_data_brush_);

FunctionRNA *rna_BlendDataBrushes_create_gpencil_data_func;
StructRNA *RNA_BlendDataBrushes;
void register_struct_BlendDataBrushes(BlenderRNA &brna)
{
	rna_BlendDataBrushes_rna_properties_ = {
		{&rna_BlendDataBrushes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataBrushes_rna_properties_begin, BlendDataBrushes_rna_properties_next, BlendDataBrushes_rna_properties_end, BlendDataBrushes_rna_properties_get, nullptr, nullptr, BlendDataBrushes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataBrushes_rna_type_ = {
		{nullptr, 	&rna_BlendDataBrushes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataBrushes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataBrushes;
	srna->cont.properties = {&rna_BlendDataBrushes_rna_properties, &rna_BlendDataBrushes_rna_type};
	srna->identifier = "BlendDataBrushes";
	srna->flag = 516;
	srna->name = "Main Brushes";
	srna->description = "Collection of brushes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataBrushes_rna_properties;
	{
	rna_BlendDataBrushes_new_name_ = {
		{&rna_BlendDataBrushes_new_mode, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Brush"
	};
	rna_BlendDataBrushes_new_mode_ = {
		{&rna_BlendDataBrushes_new_brush, 	&rna_BlendDataBrushes_new_name,
		-1, "mode", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Paint Mode for the new brush",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_object_mode_items, 14, 16
	};
	rna_BlendDataBrushes_new_brush_ = {
		{nullptr, 	&rna_BlendDataBrushes_new_mode,
		-1, "brush", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New brush data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Brush
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataBrushes_new_name, &rna_BlendDataBrushes_new_brush};
		func->identifier = "new";
		func->description = "Add a new brush to the main database";
		func->call = BlendDataBrushes_new_call;
		func->c_ret = &rna_BlendDataBrushes_new_brush;
		rna_BlendDataBrushes_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataBrushes_remove_brush_ = {
		{&rna_BlendDataBrushes_remove_do_unlink, 	nullptr,
		-1, "brush", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Brush to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Brush
	};
	rna_BlendDataBrushes_remove_do_unlink_ = {
		{&rna_BlendDataBrushes_remove_do_id_user, 	&rna_BlendDataBrushes_remove_brush,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this brush before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataBrushes_remove_do_id_user_ = {
		{&rna_BlendDataBrushes_remove_do_ui_user, 	&rna_BlendDataBrushes_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this brush",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataBrushes_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataBrushes_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this brush",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataBrushes_remove_brush, &rna_BlendDataBrushes_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a brush from the current blendfile";
		func->call = BlendDataBrushes_remove_call;
		rna_BlendDataBrushes_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataBrushes_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataBrushes_tag_value, &rna_BlendDataBrushes_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataBrushes_tag_call;
		rna_BlendDataBrushes_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataBrushes_create_gpencil_data_brush_ = {
		{nullptr, 	nullptr,
		-1, "brush", 8650880, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Brush",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Brush
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataBrushes_create_gpencil_data_brush, &rna_BlendDataBrushes_create_gpencil_data_brush};
		func->identifier = "create_gpencil_data";
		func->description = "Add Grease Pencil brush settings";
		func->call = BlendDataBrushes_create_gpencil_data_call;
		rna_BlendDataBrushes_create_gpencil_data_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Worlds */
static CollectionPropertyRNA rna_BlendDataWorlds_rna_properties_;
PropertyRNA &rna_BlendDataWorlds_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_rna_properties_);

static PointerPropertyRNA rna_BlendDataWorlds_rna_type_;
PropertyRNA &rna_BlendDataWorlds_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_rna_type_);

static StringPropertyRNA rna_BlendDataWorlds_new_name_;
PropertyRNA &rna_BlendDataWorlds_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_new_name_);

static PointerPropertyRNA rna_BlendDataWorlds_new_world_;
PropertyRNA &rna_BlendDataWorlds_new_world = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_new_world_);

FunctionRNA *rna_BlendDataWorlds_new_func;
static PointerPropertyRNA rna_BlendDataWorlds_remove_world_;
PropertyRNA &rna_BlendDataWorlds_remove_world = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_remove_world_);

static BoolPropertyRNA rna_BlendDataWorlds_remove_do_unlink_;
PropertyRNA &rna_BlendDataWorlds_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataWorlds_remove_do_id_user_;
PropertyRNA &rna_BlendDataWorlds_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataWorlds_remove_do_ui_user_;
PropertyRNA &rna_BlendDataWorlds_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_remove_do_ui_user_);

FunctionRNA *rna_BlendDataWorlds_remove_func;
static BoolPropertyRNA rna_BlendDataWorlds_tag_value_;
PropertyRNA &rna_BlendDataWorlds_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorlds_tag_value_);

FunctionRNA *rna_BlendDataWorlds_tag_func;
StructRNA *RNA_BlendDataWorlds;
void register_struct_BlendDataWorlds(BlenderRNA &brna)
{
	rna_BlendDataWorlds_rna_properties_ = {
		{&rna_BlendDataWorlds_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataWorlds_rna_properties_begin, BlendDataWorlds_rna_properties_next, BlendDataWorlds_rna_properties_end, BlendDataWorlds_rna_properties_get, nullptr, nullptr, BlendDataWorlds_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataWorlds_rna_type_ = {
		{nullptr, 	&rna_BlendDataWorlds_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataWorlds_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataWorlds;
	srna->cont.properties = {&rna_BlendDataWorlds_rna_properties, &rna_BlendDataWorlds_rna_type};
	srna->identifier = "BlendDataWorlds";
	srna->flag = 516;
	srna->name = "Main Worlds";
	srna->description = "Collection of worlds";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataWorlds_rna_properties;
	{
	rna_BlendDataWorlds_new_name_ = {
		{&rna_BlendDataWorlds_new_world, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "World"
	};
	rna_BlendDataWorlds_new_world_ = {
		{nullptr, 	&rna_BlendDataWorlds_new_name,
		-1, "world", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New world data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_World
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataWorlds_new_name, &rna_BlendDataWorlds_new_world};
		func->identifier = "new";
		func->description = "Add a new world to the main database";
		func->call = BlendDataWorlds_new_call;
		func->c_ret = &rna_BlendDataWorlds_new_world;
		rna_BlendDataWorlds_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataWorlds_remove_world_ = {
		{&rna_BlendDataWorlds_remove_do_unlink, 	nullptr,
		-1, "world", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"World to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_World
	};
	rna_BlendDataWorlds_remove_do_unlink_ = {
		{&rna_BlendDataWorlds_remove_do_id_user, 	&rna_BlendDataWorlds_remove_world,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this world before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataWorlds_remove_do_id_user_ = {
		{&rna_BlendDataWorlds_remove_do_ui_user, 	&rna_BlendDataWorlds_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this world",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataWorlds_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataWorlds_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this world",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataWorlds_remove_world, &rna_BlendDataWorlds_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a world from the current blendfile";
		func->call = BlendDataWorlds_remove_call;
		rna_BlendDataWorlds_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataWorlds_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataWorlds_tag_value, &rna_BlendDataWorlds_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataWorlds_tag_call;
		rna_BlendDataWorlds_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Collections */
static CollectionPropertyRNA rna_BlendDataCollections_rna_properties_;
PropertyRNA &rna_BlendDataCollections_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_rna_properties_);

static PointerPropertyRNA rna_BlendDataCollections_rna_type_;
PropertyRNA &rna_BlendDataCollections_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_rna_type_);

static StringPropertyRNA rna_BlendDataCollections_new_name_;
PropertyRNA &rna_BlendDataCollections_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_new_name_);

static PointerPropertyRNA rna_BlendDataCollections_new_collection_;
PropertyRNA &rna_BlendDataCollections_new_collection = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_new_collection_);

FunctionRNA *rna_BlendDataCollections_new_func;
static PointerPropertyRNA rna_BlendDataCollections_remove_collection_;
PropertyRNA &rna_BlendDataCollections_remove_collection = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_remove_collection_);

static BoolPropertyRNA rna_BlendDataCollections_remove_do_unlink_;
PropertyRNA &rna_BlendDataCollections_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataCollections_remove_do_id_user_;
PropertyRNA &rna_BlendDataCollections_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataCollections_remove_do_ui_user_;
PropertyRNA &rna_BlendDataCollections_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_remove_do_ui_user_);

FunctionRNA *rna_BlendDataCollections_remove_func;
static BoolPropertyRNA rna_BlendDataCollections_tag_value_;
PropertyRNA &rna_BlendDataCollections_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataCollections_tag_value_);

FunctionRNA *rna_BlendDataCollections_tag_func;
StructRNA *RNA_BlendDataCollections;
void register_struct_BlendDataCollections(BlenderRNA &brna)
{
	rna_BlendDataCollections_rna_properties_ = {
		{&rna_BlendDataCollections_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataCollections_rna_properties_begin, BlendDataCollections_rna_properties_next, BlendDataCollections_rna_properties_end, BlendDataCollections_rna_properties_get, nullptr, nullptr, BlendDataCollections_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataCollections_rna_type_ = {
		{nullptr, 	&rna_BlendDataCollections_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataCollections_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataCollections;
	srna->cont.properties = {&rna_BlendDataCollections_rna_properties, &rna_BlendDataCollections_rna_type};
	srna->identifier = "BlendDataCollections";
	srna->flag = 516;
	srna->name = "Main Collections";
	srna->description = "Collection of collections";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataCollections_rna_properties;
	{
	rna_BlendDataCollections_new_name_ = {
		{&rna_BlendDataCollections_new_collection, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Collection"
	};
	rna_BlendDataCollections_new_collection_ = {
		{nullptr, 	&rna_BlendDataCollections_new_name,
		-1, "collection", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New collection data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Collection
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCollections_new_name, &rna_BlendDataCollections_new_collection};
		func->identifier = "new";
		func->description = "Add a new collection to the main database";
		func->call = BlendDataCollections_new_call;
		func->c_ret = &rna_BlendDataCollections_new_collection;
		rna_BlendDataCollections_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataCollections_remove_collection_ = {
		{&rna_BlendDataCollections_remove_do_unlink, 	nullptr,
		-1, "collection", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Collection to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Collection
	};
	rna_BlendDataCollections_remove_do_unlink_ = {
		{&rna_BlendDataCollections_remove_do_id_user, 	&rna_BlendDataCollections_remove_collection,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this collection before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataCollections_remove_do_id_user_ = {
		{&rna_BlendDataCollections_remove_do_ui_user, 	&rna_BlendDataCollections_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this collection",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataCollections_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataCollections_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this collection",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCollections_remove_collection, &rna_BlendDataCollections_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a collection from the current blendfile";
		func->call = BlendDataCollections_remove_call;
		rna_BlendDataCollections_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataCollections_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCollections_tag_value, &rna_BlendDataCollections_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataCollections_tag_call;
		rna_BlendDataCollections_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Texts */
static CollectionPropertyRNA rna_BlendDataTexts_rna_properties_;
PropertyRNA &rna_BlendDataTexts_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_rna_properties_);

static PointerPropertyRNA rna_BlendDataTexts_rna_type_;
PropertyRNA &rna_BlendDataTexts_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_rna_type_);

static StringPropertyRNA rna_BlendDataTexts_new_name_;
PropertyRNA &rna_BlendDataTexts_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_new_name_);

static PointerPropertyRNA rna_BlendDataTexts_new_text_;
PropertyRNA &rna_BlendDataTexts_new_text = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_new_text_);

FunctionRNA *rna_BlendDataTexts_new_func;
static PointerPropertyRNA rna_BlendDataTexts_remove_text_;
PropertyRNA &rna_BlendDataTexts_remove_text = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_remove_text_);

static BoolPropertyRNA rna_BlendDataTexts_remove_do_unlink_;
PropertyRNA &rna_BlendDataTexts_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataTexts_remove_do_id_user_;
PropertyRNA &rna_BlendDataTexts_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataTexts_remove_do_ui_user_;
PropertyRNA &rna_BlendDataTexts_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_remove_do_ui_user_);

FunctionRNA *rna_BlendDataTexts_remove_func;
static StringPropertyRNA rna_BlendDataTexts_load_filepath_;
PropertyRNA &rna_BlendDataTexts_load_filepath = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_load_filepath_);

static BoolPropertyRNA rna_BlendDataTexts_load_internal_;
PropertyRNA &rna_BlendDataTexts_load_internal = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_load_internal_);

static PointerPropertyRNA rna_BlendDataTexts_load_text_;
PropertyRNA &rna_BlendDataTexts_load_text = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_load_text_);

FunctionRNA *rna_BlendDataTexts_load_func;
static BoolPropertyRNA rna_BlendDataTexts_tag_value_;
PropertyRNA &rna_BlendDataTexts_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataTexts_tag_value_);

FunctionRNA *rna_BlendDataTexts_tag_func;
StructRNA *RNA_BlendDataTexts;
void register_struct_BlendDataTexts(BlenderRNA &brna)
{
	rna_BlendDataTexts_rna_properties_ = {
		{&rna_BlendDataTexts_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataTexts_rna_properties_begin, BlendDataTexts_rna_properties_next, BlendDataTexts_rna_properties_end, BlendDataTexts_rna_properties_get, nullptr, nullptr, BlendDataTexts_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataTexts_rna_type_ = {
		{nullptr, 	&rna_BlendDataTexts_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataTexts_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataTexts;
	srna->cont.properties = {&rna_BlendDataTexts_rna_properties, &rna_BlendDataTexts_rna_type};
	srna->identifier = "BlendDataTexts";
	srna->flag = 516;
	srna->name = "Main Texts";
	srna->description = "Collection of texts";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataTexts_rna_properties;
	{
	rna_BlendDataTexts_new_name_ = {
		{&rna_BlendDataTexts_new_text, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Text"
	};
	rna_BlendDataTexts_new_text_ = {
		{nullptr, 	&rna_BlendDataTexts_new_name,
		-1, "text", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New text data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Text
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataTexts_new_name, &rna_BlendDataTexts_new_text};
		func->identifier = "new";
		func->description = "Add a new text to the main database";
		func->call = BlendDataTexts_new_call;
		func->c_ret = &rna_BlendDataTexts_new_text;
		rna_BlendDataTexts_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataTexts_remove_text_ = {
		{&rna_BlendDataTexts_remove_do_unlink, 	nullptr,
		-1, "text", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Text to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Text
	};
	rna_BlendDataTexts_remove_do_unlink_ = {
		{&rna_BlendDataTexts_remove_do_id_user, 	&rna_BlendDataTexts_remove_text,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this text before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataTexts_remove_do_id_user_ = {
		{&rna_BlendDataTexts_remove_do_ui_user, 	&rna_BlendDataTexts_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this text",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataTexts_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataTexts_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this text",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataTexts_remove_text, &rna_BlendDataTexts_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a text from the current blendfile";
		func->call = BlendDataTexts_remove_call;
		rna_BlendDataTexts_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataTexts_load_filepath_ = {
		{&rna_BlendDataTexts_load_internal, 	nullptr,
		-1, "filepath", 294913, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"path for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, "Path"
	};
	rna_BlendDataTexts_load_internal_ = {
		{&rna_BlendDataTexts_load_text, 	&rna_BlendDataTexts_load_filepath,
		-1, "internal", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Make internal",
		"Make text file internal after loading",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataTexts_load_text_ = {
		{nullptr, 	&rna_BlendDataTexts_load_internal,
		-1, "text", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New text data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Text
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataTexts_load_filepath, &rna_BlendDataTexts_load_text};
		func->identifier = "load";
		func->flag = 16;
		func->description = "Add a new text to the main database from a file";
		func->call = BlendDataTexts_load_call;
		func->c_ret = &rna_BlendDataTexts_load_text;
		rna_BlendDataTexts_load_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataTexts_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataTexts_tag_value, &rna_BlendDataTexts_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataTexts_tag_call;
		rna_BlendDataTexts_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Speakers */
static CollectionPropertyRNA rna_BlendDataSpeakers_rna_properties_;
PropertyRNA &rna_BlendDataSpeakers_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_rna_properties_);

static PointerPropertyRNA rna_BlendDataSpeakers_rna_type_;
PropertyRNA &rna_BlendDataSpeakers_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_rna_type_);

static StringPropertyRNA rna_BlendDataSpeakers_new_name_;
PropertyRNA &rna_BlendDataSpeakers_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_new_name_);

static PointerPropertyRNA rna_BlendDataSpeakers_new_speaker_;
PropertyRNA &rna_BlendDataSpeakers_new_speaker = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_new_speaker_);

FunctionRNA *rna_BlendDataSpeakers_new_func;
static PointerPropertyRNA rna_BlendDataSpeakers_remove_speaker_;
PropertyRNA &rna_BlendDataSpeakers_remove_speaker = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_remove_speaker_);

static BoolPropertyRNA rna_BlendDataSpeakers_remove_do_unlink_;
PropertyRNA &rna_BlendDataSpeakers_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataSpeakers_remove_do_id_user_;
PropertyRNA &rna_BlendDataSpeakers_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataSpeakers_remove_do_ui_user_;
PropertyRNA &rna_BlendDataSpeakers_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_remove_do_ui_user_);

FunctionRNA *rna_BlendDataSpeakers_remove_func;
static BoolPropertyRNA rna_BlendDataSpeakers_tag_value_;
PropertyRNA &rna_BlendDataSpeakers_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataSpeakers_tag_value_);

FunctionRNA *rna_BlendDataSpeakers_tag_func;
StructRNA *RNA_BlendDataSpeakers;
void register_struct_BlendDataSpeakers(BlenderRNA &brna)
{
	rna_BlendDataSpeakers_rna_properties_ = {
		{&rna_BlendDataSpeakers_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataSpeakers_rna_properties_begin, BlendDataSpeakers_rna_properties_next, BlendDataSpeakers_rna_properties_end, BlendDataSpeakers_rna_properties_get, nullptr, nullptr, BlendDataSpeakers_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataSpeakers_rna_type_ = {
		{nullptr, 	&rna_BlendDataSpeakers_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataSpeakers_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataSpeakers;
	srna->cont.properties = {&rna_BlendDataSpeakers_rna_properties, &rna_BlendDataSpeakers_rna_type};
	srna->identifier = "BlendDataSpeakers";
	srna->flag = 516;
	srna->name = "Main Speakers";
	srna->description = "Collection of speakers";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataSpeakers_rna_properties;
	{
	rna_BlendDataSpeakers_new_name_ = {
		{&rna_BlendDataSpeakers_new_speaker, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Speaker"
	};
	rna_BlendDataSpeakers_new_speaker_ = {
		{nullptr, 	&rna_BlendDataSpeakers_new_name,
		-1, "speaker", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New speaker data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Speaker
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataSpeakers_new_name, &rna_BlendDataSpeakers_new_speaker};
		func->identifier = "new";
		func->description = "Add a new speaker to the main database";
		func->call = BlendDataSpeakers_new_call;
		func->c_ret = &rna_BlendDataSpeakers_new_speaker;
		rna_BlendDataSpeakers_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataSpeakers_remove_speaker_ = {
		{&rna_BlendDataSpeakers_remove_do_unlink, 	nullptr,
		-1, "speaker", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Speaker to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Speaker
	};
	rna_BlendDataSpeakers_remove_do_unlink_ = {
		{&rna_BlendDataSpeakers_remove_do_id_user, 	&rna_BlendDataSpeakers_remove_speaker,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this speaker before deleting it (WARNING: will also delete objects instancing that speaker data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataSpeakers_remove_do_id_user_ = {
		{&rna_BlendDataSpeakers_remove_do_ui_user, 	&rna_BlendDataSpeakers_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this speaker data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataSpeakers_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataSpeakers_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this speaker data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataSpeakers_remove_speaker, &rna_BlendDataSpeakers_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a speaker from the current blendfile";
		func->call = BlendDataSpeakers_remove_call;
		rna_BlendDataSpeakers_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataSpeakers_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataSpeakers_tag_value, &rna_BlendDataSpeakers_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataSpeakers_tag_call;
		rna_BlendDataSpeakers_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Sounds */
static CollectionPropertyRNA rna_BlendDataSounds_rna_properties_;
PropertyRNA &rna_BlendDataSounds_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_rna_properties_);

static PointerPropertyRNA rna_BlendDataSounds_rna_type_;
PropertyRNA &rna_BlendDataSounds_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_rna_type_);

static StringPropertyRNA rna_BlendDataSounds_load_filepath_;
PropertyRNA &rna_BlendDataSounds_load_filepath = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_load_filepath_);

static BoolPropertyRNA rna_BlendDataSounds_load_check_existing_;
PropertyRNA &rna_BlendDataSounds_load_check_existing = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_load_check_existing_);

static PointerPropertyRNA rna_BlendDataSounds_load_sound_;
PropertyRNA &rna_BlendDataSounds_load_sound = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_load_sound_);

FunctionRNA *rna_BlendDataSounds_load_func;
static PointerPropertyRNA rna_BlendDataSounds_remove_sound_;
PropertyRNA &rna_BlendDataSounds_remove_sound = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_remove_sound_);

static BoolPropertyRNA rna_BlendDataSounds_remove_do_unlink_;
PropertyRNA &rna_BlendDataSounds_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataSounds_remove_do_id_user_;
PropertyRNA &rna_BlendDataSounds_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataSounds_remove_do_ui_user_;
PropertyRNA &rna_BlendDataSounds_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_remove_do_ui_user_);

FunctionRNA *rna_BlendDataSounds_remove_func;
static BoolPropertyRNA rna_BlendDataSounds_tag_value_;
PropertyRNA &rna_BlendDataSounds_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataSounds_tag_value_);

FunctionRNA *rna_BlendDataSounds_tag_func;
StructRNA *RNA_BlendDataSounds;
void register_struct_BlendDataSounds(BlenderRNA &brna)
{
	rna_BlendDataSounds_rna_properties_ = {
		{&rna_BlendDataSounds_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataSounds_rna_properties_begin, BlendDataSounds_rna_properties_next, BlendDataSounds_rna_properties_end, BlendDataSounds_rna_properties_get, nullptr, nullptr, BlendDataSounds_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataSounds_rna_type_ = {
		{nullptr, 	&rna_BlendDataSounds_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataSounds_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataSounds;
	srna->cont.properties = {&rna_BlendDataSounds_rna_properties, &rna_BlendDataSounds_rna_type};
	srna->identifier = "BlendDataSounds";
	srna->flag = 516;
	srna->name = "Main Sounds";
	srna->description = "Collection of sounds";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataSounds_rna_properties;
	{
	rna_BlendDataSounds_load_filepath_ = {
		{&rna_BlendDataSounds_load_check_existing, 	nullptr,
		-1, "filepath", 294913, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"path for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, "Path"
	};
	rna_BlendDataSounds_load_check_existing_ = {
		{&rna_BlendDataSounds_load_sound, 	&rna_BlendDataSounds_load_filepath,
		-1, "check_existing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Using existing data-block if this file is already loaded",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataSounds_load_sound_ = {
		{nullptr, 	&rna_BlendDataSounds_load_check_existing,
		-1, "sound", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New text data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Sound
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataSounds_load_filepath, &rna_BlendDataSounds_load_sound};
		func->identifier = "load";
		func->description = "Add a new sound to the main database from a file";
		func->call = BlendDataSounds_load_call;
		func->c_ret = &rna_BlendDataSounds_load_sound;
		rna_BlendDataSounds_load_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataSounds_remove_sound_ = {
		{&rna_BlendDataSounds_remove_do_unlink, 	nullptr,
		-1, "sound", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Sound to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Sound
	};
	rna_BlendDataSounds_remove_do_unlink_ = {
		{&rna_BlendDataSounds_remove_do_id_user, 	&rna_BlendDataSounds_remove_sound,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this sound before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataSounds_remove_do_id_user_ = {
		{&rna_BlendDataSounds_remove_do_ui_user, 	&rna_BlendDataSounds_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this sound",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataSounds_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataSounds_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this sound",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataSounds_remove_sound, &rna_BlendDataSounds_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a sound from the current blendfile";
		func->call = BlendDataSounds_remove_call;
		rna_BlendDataSounds_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataSounds_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataSounds_tag_value, &rna_BlendDataSounds_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataSounds_tag_call;
		rna_BlendDataSounds_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Armatures */
static CollectionPropertyRNA rna_BlendDataArmatures_rna_properties_;
PropertyRNA &rna_BlendDataArmatures_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_rna_properties_);

static PointerPropertyRNA rna_BlendDataArmatures_rna_type_;
PropertyRNA &rna_BlendDataArmatures_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_rna_type_);

static StringPropertyRNA rna_BlendDataArmatures_new_name_;
PropertyRNA &rna_BlendDataArmatures_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_new_name_);

static PointerPropertyRNA rna_BlendDataArmatures_new_armature_;
PropertyRNA &rna_BlendDataArmatures_new_armature = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_new_armature_);

FunctionRNA *rna_BlendDataArmatures_new_func;
static PointerPropertyRNA rna_BlendDataArmatures_remove_armature_;
PropertyRNA &rna_BlendDataArmatures_remove_armature = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_remove_armature_);

static BoolPropertyRNA rna_BlendDataArmatures_remove_do_unlink_;
PropertyRNA &rna_BlendDataArmatures_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataArmatures_remove_do_id_user_;
PropertyRNA &rna_BlendDataArmatures_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataArmatures_remove_do_ui_user_;
PropertyRNA &rna_BlendDataArmatures_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_remove_do_ui_user_);

FunctionRNA *rna_BlendDataArmatures_remove_func;
static BoolPropertyRNA rna_BlendDataArmatures_tag_value_;
PropertyRNA &rna_BlendDataArmatures_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataArmatures_tag_value_);

FunctionRNA *rna_BlendDataArmatures_tag_func;
StructRNA *RNA_BlendDataArmatures;
void register_struct_BlendDataArmatures(BlenderRNA &brna)
{
	rna_BlendDataArmatures_rna_properties_ = {
		{&rna_BlendDataArmatures_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataArmatures_rna_properties_begin, BlendDataArmatures_rna_properties_next, BlendDataArmatures_rna_properties_end, BlendDataArmatures_rna_properties_get, nullptr, nullptr, BlendDataArmatures_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataArmatures_rna_type_ = {
		{nullptr, 	&rna_BlendDataArmatures_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataArmatures_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataArmatures;
	srna->cont.properties = {&rna_BlendDataArmatures_rna_properties, &rna_BlendDataArmatures_rna_type};
	srna->identifier = "BlendDataArmatures";
	srna->flag = 516;
	srna->name = "Main Armatures";
	srna->description = "Collection of armatures";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataArmatures_rna_properties;
	{
	rna_BlendDataArmatures_new_name_ = {
		{&rna_BlendDataArmatures_new_armature, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Armature"
	};
	rna_BlendDataArmatures_new_armature_ = {
		{nullptr, 	&rna_BlendDataArmatures_new_name,
		-1, "armature", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New armature data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Armature
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataArmatures_new_name, &rna_BlendDataArmatures_new_armature};
		func->identifier = "new";
		func->description = "Add a new armature to the main database";
		func->call = BlendDataArmatures_new_call;
		func->c_ret = &rna_BlendDataArmatures_new_armature;
		rna_BlendDataArmatures_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataArmatures_remove_armature_ = {
		{&rna_BlendDataArmatures_remove_do_unlink, 	nullptr,
		-1, "armature", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Armature to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Armature
	};
	rna_BlendDataArmatures_remove_do_unlink_ = {
		{&rna_BlendDataArmatures_remove_do_id_user, 	&rna_BlendDataArmatures_remove_armature,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this armature before deleting it (WARNING: will also delete objects instancing that armature data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataArmatures_remove_do_id_user_ = {
		{&rna_BlendDataArmatures_remove_do_ui_user, 	&rna_BlendDataArmatures_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this armature data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataArmatures_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataArmatures_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this armature data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataArmatures_remove_armature, &rna_BlendDataArmatures_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an armature from the current blendfile";
		func->call = BlendDataArmatures_remove_call;
		rna_BlendDataArmatures_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataArmatures_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataArmatures_tag_value, &rna_BlendDataArmatures_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataArmatures_tag_call;
		rna_BlendDataArmatures_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Actions */
static CollectionPropertyRNA rna_BlendDataActions_rna_properties_;
PropertyRNA &rna_BlendDataActions_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_rna_properties_);

static PointerPropertyRNA rna_BlendDataActions_rna_type_;
PropertyRNA &rna_BlendDataActions_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_rna_type_);

static StringPropertyRNA rna_BlendDataActions_new_name_;
PropertyRNA &rna_BlendDataActions_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_new_name_);

static PointerPropertyRNA rna_BlendDataActions_new_action_;
PropertyRNA &rna_BlendDataActions_new_action = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_new_action_);

FunctionRNA *rna_BlendDataActions_new_func;
static PointerPropertyRNA rna_BlendDataActions_remove_action_;
PropertyRNA &rna_BlendDataActions_remove_action = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_remove_action_);

static BoolPropertyRNA rna_BlendDataActions_remove_do_unlink_;
PropertyRNA &rna_BlendDataActions_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataActions_remove_do_id_user_;
PropertyRNA &rna_BlendDataActions_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataActions_remove_do_ui_user_;
PropertyRNA &rna_BlendDataActions_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_remove_do_ui_user_);

FunctionRNA *rna_BlendDataActions_remove_func;
static BoolPropertyRNA rna_BlendDataActions_tag_value_;
PropertyRNA &rna_BlendDataActions_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataActions_tag_value_);

FunctionRNA *rna_BlendDataActions_tag_func;
StructRNA *RNA_BlendDataActions;
void register_struct_BlendDataActions(BlenderRNA &brna)
{
	rna_BlendDataActions_rna_properties_ = {
		{&rna_BlendDataActions_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataActions_rna_properties_begin, BlendDataActions_rna_properties_next, BlendDataActions_rna_properties_end, BlendDataActions_rna_properties_get, nullptr, nullptr, BlendDataActions_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataActions_rna_type_ = {
		{nullptr, 	&rna_BlendDataActions_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataActions_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataActions;
	srna->cont.properties = {&rna_BlendDataActions_rna_properties, &rna_BlendDataActions_rna_type};
	srna->identifier = "BlendDataActions";
	srna->flag = 516;
	srna->name = "Main Actions";
	srna->description = "Collection of actions";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataActions_rna_properties;
	{
	rna_BlendDataActions_new_name_ = {
		{&rna_BlendDataActions_new_action, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Action"
	};
	rna_BlendDataActions_new_action_ = {
		{nullptr, 	&rna_BlendDataActions_new_name,
		-1, "action", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New action data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Action
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataActions_new_name, &rna_BlendDataActions_new_action};
		func->identifier = "new";
		func->description = "Add a new action to the main database";
		func->call = BlendDataActions_new_call;
		func->c_ret = &rna_BlendDataActions_new_action;
		rna_BlendDataActions_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataActions_remove_action_ = {
		{&rna_BlendDataActions_remove_do_unlink, 	nullptr,
		-1, "action", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Action to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Action
	};
	rna_BlendDataActions_remove_do_unlink_ = {
		{&rna_BlendDataActions_remove_do_id_user, 	&rna_BlendDataActions_remove_action,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this action before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataActions_remove_do_id_user_ = {
		{&rna_BlendDataActions_remove_do_ui_user, 	&rna_BlendDataActions_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this action",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataActions_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataActions_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this action",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataActions_remove_action, &rna_BlendDataActions_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove an action from the current blendfile";
		func->call = BlendDataActions_remove_call;
		rna_BlendDataActions_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataActions_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataActions_tag_value, &rna_BlendDataActions_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataActions_tag_call;
		rna_BlendDataActions_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Particle Settings */
static CollectionPropertyRNA rna_BlendDataParticles_rna_properties_;
PropertyRNA &rna_BlendDataParticles_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_rna_properties_);

static PointerPropertyRNA rna_BlendDataParticles_rna_type_;
PropertyRNA &rna_BlendDataParticles_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_rna_type_);

static StringPropertyRNA rna_BlendDataParticles_new_name_;
PropertyRNA &rna_BlendDataParticles_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_new_name_);

static PointerPropertyRNA rna_BlendDataParticles_new_particle_;
PropertyRNA &rna_BlendDataParticles_new_particle = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_new_particle_);

FunctionRNA *rna_BlendDataParticles_new_func;
static PointerPropertyRNA rna_BlendDataParticles_remove_particle_;
PropertyRNA &rna_BlendDataParticles_remove_particle = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_remove_particle_);

static BoolPropertyRNA rna_BlendDataParticles_remove_do_unlink_;
PropertyRNA &rna_BlendDataParticles_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataParticles_remove_do_id_user_;
PropertyRNA &rna_BlendDataParticles_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataParticles_remove_do_ui_user_;
PropertyRNA &rna_BlendDataParticles_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_remove_do_ui_user_);

FunctionRNA *rna_BlendDataParticles_remove_func;
static BoolPropertyRNA rna_BlendDataParticles_tag_value_;
PropertyRNA &rna_BlendDataParticles_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataParticles_tag_value_);

FunctionRNA *rna_BlendDataParticles_tag_func;
StructRNA *RNA_BlendDataParticles;
void register_struct_BlendDataParticles(BlenderRNA &brna)
{
	rna_BlendDataParticles_rna_properties_ = {
		{&rna_BlendDataParticles_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataParticles_rna_properties_begin, BlendDataParticles_rna_properties_next, BlendDataParticles_rna_properties_end, BlendDataParticles_rna_properties_get, nullptr, nullptr, BlendDataParticles_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataParticles_rna_type_ = {
		{nullptr, 	&rna_BlendDataParticles_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataParticles_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataParticles;
	srna->cont.properties = {&rna_BlendDataParticles_rna_properties, &rna_BlendDataParticles_rna_type};
	srna->identifier = "BlendDataParticles";
	srna->flag = 516;
	srna->name = "Main Particle Settings";
	srna->description = "Collection of particle settings";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataParticles_rna_properties;
	{
	rna_BlendDataParticles_new_name_ = {
		{&rna_BlendDataParticles_new_particle, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "ParticleSettings"
	};
	rna_BlendDataParticles_new_particle_ = {
		{nullptr, 	&rna_BlendDataParticles_new_name,
		-1, "particle", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New particle settings data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSettings
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataParticles_new_name, &rna_BlendDataParticles_new_particle};
		func->identifier = "new";
		func->description = "Add a new particle settings instance to the main database";
		func->call = BlendDataParticles_new_call;
		func->c_ret = &rna_BlendDataParticles_new_particle;
		rna_BlendDataParticles_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataParticles_remove_particle_ = {
		{&rna_BlendDataParticles_remove_do_unlink, 	nullptr,
		-1, "particle", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Particle Settings to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ParticleSettings
	};
	rna_BlendDataParticles_remove_do_unlink_ = {
		{&rna_BlendDataParticles_remove_do_id_user, 	&rna_BlendDataParticles_remove_particle,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of those particle settings before deleting them",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataParticles_remove_do_id_user_ = {
		{&rna_BlendDataParticles_remove_do_ui_user, 	&rna_BlendDataParticles_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this particle settings",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataParticles_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataParticles_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this particle settings",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataParticles_remove_particle, &rna_BlendDataParticles_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a particle settings instance from the current blendfile";
		func->call = BlendDataParticles_remove_call;
		rna_BlendDataParticles_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataParticles_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataParticles_tag_value, &rna_BlendDataParticles_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataParticles_tag_call;
		rna_BlendDataParticles_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Palettes */
static CollectionPropertyRNA rna_BlendDataPalettes_rna_properties_;
PropertyRNA &rna_BlendDataPalettes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_rna_properties_);

static PointerPropertyRNA rna_BlendDataPalettes_rna_type_;
PropertyRNA &rna_BlendDataPalettes_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_rna_type_);

static StringPropertyRNA rna_BlendDataPalettes_new_name_;
PropertyRNA &rna_BlendDataPalettes_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_new_name_);

static PointerPropertyRNA rna_BlendDataPalettes_new_palette_;
PropertyRNA &rna_BlendDataPalettes_new_palette = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_new_palette_);

FunctionRNA *rna_BlendDataPalettes_new_func;
static PointerPropertyRNA rna_BlendDataPalettes_remove_palette_;
PropertyRNA &rna_BlendDataPalettes_remove_palette = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_remove_palette_);

static BoolPropertyRNA rna_BlendDataPalettes_remove_do_unlink_;
PropertyRNA &rna_BlendDataPalettes_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataPalettes_remove_do_id_user_;
PropertyRNA &rna_BlendDataPalettes_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataPalettes_remove_do_ui_user_;
PropertyRNA &rna_BlendDataPalettes_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_remove_do_ui_user_);

FunctionRNA *rna_BlendDataPalettes_remove_func;
static BoolPropertyRNA rna_BlendDataPalettes_tag_value_;
PropertyRNA &rna_BlendDataPalettes_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataPalettes_tag_value_);

FunctionRNA *rna_BlendDataPalettes_tag_func;
StructRNA *RNA_BlendDataPalettes;
void register_struct_BlendDataPalettes(BlenderRNA &brna)
{
	rna_BlendDataPalettes_rna_properties_ = {
		{&rna_BlendDataPalettes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataPalettes_rna_properties_begin, BlendDataPalettes_rna_properties_next, BlendDataPalettes_rna_properties_end, BlendDataPalettes_rna_properties_get, nullptr, nullptr, BlendDataPalettes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataPalettes_rna_type_ = {
		{nullptr, 	&rna_BlendDataPalettes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataPalettes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataPalettes;
	srna->cont.properties = {&rna_BlendDataPalettes_rna_properties, &rna_BlendDataPalettes_rna_type};
	srna->identifier = "BlendDataPalettes";
	srna->flag = 516;
	srna->name = "Main Palettes";
	srna->description = "Collection of palettes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataPalettes_rna_properties;
	{
	rna_BlendDataPalettes_new_name_ = {
		{&rna_BlendDataPalettes_new_palette, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Palette"
	};
	rna_BlendDataPalettes_new_palette_ = {
		{nullptr, 	&rna_BlendDataPalettes_new_name,
		-1, "palette", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New palette data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Palette
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataPalettes_new_name, &rna_BlendDataPalettes_new_palette};
		func->identifier = "new";
		func->description = "Add a new palette to the main database";
		func->call = BlendDataPalettes_new_call;
		func->c_ret = &rna_BlendDataPalettes_new_palette;
		rna_BlendDataPalettes_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataPalettes_remove_palette_ = {
		{&rna_BlendDataPalettes_remove_do_unlink, 	nullptr,
		-1, "palette", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Palette to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Palette
	};
	rna_BlendDataPalettes_remove_do_unlink_ = {
		{&rna_BlendDataPalettes_remove_do_id_user, 	&rna_BlendDataPalettes_remove_palette,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this palette before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataPalettes_remove_do_id_user_ = {
		{&rna_BlendDataPalettes_remove_do_ui_user, 	&rna_BlendDataPalettes_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this palette",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataPalettes_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataPalettes_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this palette",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataPalettes_remove_palette, &rna_BlendDataPalettes_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a palette from the current blendfile";
		func->call = BlendDataPalettes_remove_call;
		rna_BlendDataPalettes_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataPalettes_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataPalettes_tag_value, &rna_BlendDataPalettes_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataPalettes_tag_call;
		rna_BlendDataPalettes_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Annotations */
static CollectionPropertyRNA rna_BlendDataAnnotations_rna_properties_;
PropertyRNA &rna_BlendDataAnnotations_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_rna_properties_);

static PointerPropertyRNA rna_BlendDataAnnotations_rna_type_;
PropertyRNA &rna_BlendDataAnnotations_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_rna_type_);

static BoolPropertyRNA rna_BlendDataAnnotations_tag_value_;
PropertyRNA &rna_BlendDataAnnotations_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_tag_value_);

FunctionRNA *rna_BlendDataAnnotations_tag_func;
static StringPropertyRNA rna_BlendDataAnnotations_new_name_;
PropertyRNA &rna_BlendDataAnnotations_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_new_name_);

static PointerPropertyRNA rna_BlendDataAnnotations_new_annotation_;
PropertyRNA &rna_BlendDataAnnotations_new_annotation = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_new_annotation_);

FunctionRNA *rna_BlendDataAnnotations_new_func;
static PointerPropertyRNA rna_BlendDataAnnotations_remove_annotation_;
PropertyRNA &rna_BlendDataAnnotations_remove_annotation = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_remove_annotation_);

static BoolPropertyRNA rna_BlendDataAnnotations_remove_do_unlink_;
PropertyRNA &rna_BlendDataAnnotations_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataAnnotations_remove_do_id_user_;
PropertyRNA &rna_BlendDataAnnotations_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataAnnotations_remove_do_ui_user_;
PropertyRNA &rna_BlendDataAnnotations_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataAnnotations_remove_do_ui_user_);

FunctionRNA *rna_BlendDataAnnotations_remove_func;
StructRNA *RNA_BlendDataAnnotations;
void register_struct_BlendDataAnnotations(BlenderRNA &brna)
{
	rna_BlendDataAnnotations_rna_properties_ = {
		{&rna_BlendDataAnnotations_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataAnnotations_rna_properties_begin, BlendDataAnnotations_rna_properties_next, BlendDataAnnotations_rna_properties_end, BlendDataAnnotations_rna_properties_get, nullptr, nullptr, BlendDataAnnotations_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataAnnotations_rna_type_ = {
		{nullptr, 	&rna_BlendDataAnnotations_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataAnnotations_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataAnnotations;
	srna->cont.properties = {&rna_BlendDataAnnotations_rna_properties, &rna_BlendDataAnnotations_rna_type};
	srna->identifier = "BlendDataAnnotations";
	srna->flag = 516;
	srna->name = "Main Annotations";
	srna->description = "Collection of annotations";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataAnnotations_rna_properties;
	{
	rna_BlendDataAnnotations_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataAnnotations_tag_value, &rna_BlendDataAnnotations_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataAnnotations_tag_call;
		rna_BlendDataAnnotations_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataAnnotations_new_name_ = {
		{&rna_BlendDataAnnotations_new_annotation, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Annotation"
	};
	rna_BlendDataAnnotations_new_annotation_ = {
		{nullptr, 	&rna_BlendDataAnnotations_new_name,
		-1, "annotation", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New annotation data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Annotation
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataAnnotations_new_name, &rna_BlendDataAnnotations_new_annotation};
		func->identifier = "new";
		func->description = "Add a new annotation data-block to the main database";
		func->call = BlendDataAnnotations_new_call;
		func->c_ret = &rna_BlendDataAnnotations_new_annotation;
		rna_BlendDataAnnotations_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataAnnotations_remove_annotation_ = {
		{&rna_BlendDataAnnotations_remove_do_unlink, 	nullptr,
		-1, "annotation", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Grease Pencil to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Annotation
	};
	rna_BlendDataAnnotations_remove_do_unlink_ = {
		{&rna_BlendDataAnnotations_remove_do_id_user, 	&rna_BlendDataAnnotations_remove_annotation,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this annotation before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataAnnotations_remove_do_id_user_ = {
		{&rna_BlendDataAnnotations_remove_do_ui_user, 	&rna_BlendDataAnnotations_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this annotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataAnnotations_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataAnnotations_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this annotation",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataAnnotations_remove_annotation, &rna_BlendDataAnnotations_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove annotation instance from the current blendfile";
		func->call = BlendDataAnnotations_remove_call;
		rna_BlendDataAnnotations_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Grease Pencils */
static CollectionPropertyRNA rna_BlendDataGreasePencilsV3_rna_properties_;
PropertyRNA &rna_BlendDataGreasePencilsV3_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_rna_properties_);

static PointerPropertyRNA rna_BlendDataGreasePencilsV3_rna_type_;
PropertyRNA &rna_BlendDataGreasePencilsV3_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_rna_type_);

static BoolPropertyRNA rna_BlendDataGreasePencilsV3_tag_value_;
PropertyRNA &rna_BlendDataGreasePencilsV3_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_tag_value_);

FunctionRNA *rna_BlendDataGreasePencilsV3_tag_func;
static StringPropertyRNA rna_BlendDataGreasePencilsV3_new_name_;
PropertyRNA &rna_BlendDataGreasePencilsV3_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_new_name_);

static PointerPropertyRNA rna_BlendDataGreasePencilsV3_new_grease_pencil_;
PropertyRNA &rna_BlendDataGreasePencilsV3_new_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_new_grease_pencil_);

FunctionRNA *rna_BlendDataGreasePencilsV3_new_func;
static PointerPropertyRNA rna_BlendDataGreasePencilsV3_remove_grease_pencil_;
PropertyRNA &rna_BlendDataGreasePencilsV3_remove_grease_pencil = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_remove_grease_pencil_);

static BoolPropertyRNA rna_BlendDataGreasePencilsV3_remove_do_unlink_;
PropertyRNA &rna_BlendDataGreasePencilsV3_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataGreasePencilsV3_remove_do_id_user_;
PropertyRNA &rna_BlendDataGreasePencilsV3_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataGreasePencilsV3_remove_do_ui_user_;
PropertyRNA &rna_BlendDataGreasePencilsV3_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataGreasePencilsV3_remove_do_ui_user_);

FunctionRNA *rna_BlendDataGreasePencilsV3_remove_func;
StructRNA *RNA_BlendDataGreasePencilsV3;
void register_struct_BlendDataGreasePencilsV3(BlenderRNA &brna)
{
	rna_BlendDataGreasePencilsV3_rna_properties_ = {
		{&rna_BlendDataGreasePencilsV3_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataGreasePencilsV3_rna_properties_begin, BlendDataGreasePencilsV3_rna_properties_next, BlendDataGreasePencilsV3_rna_properties_end, BlendDataGreasePencilsV3_rna_properties_get, nullptr, nullptr, BlendDataGreasePencilsV3_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataGreasePencilsV3_rna_type_ = {
		{nullptr, 	&rna_BlendDataGreasePencilsV3_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataGreasePencilsV3_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataGreasePencilsV3;
	srna->cont.properties = {&rna_BlendDataGreasePencilsV3_rna_properties, &rna_BlendDataGreasePencilsV3_rna_type};
	srna->identifier = "BlendDataGreasePencilsV3";
	srna->flag = 516;
	srna->name = "Main Grease Pencils";
	srna->description = "Collection of Grease Pencils";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataGreasePencilsV3_rna_properties;
	{
	rna_BlendDataGreasePencilsV3_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataGreasePencilsV3_tag_value, &rna_BlendDataGreasePencilsV3_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataGreasePencilsV3_tag_call;
		rna_BlendDataGreasePencilsV3_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataGreasePencilsV3_new_name_ = {
		{&rna_BlendDataGreasePencilsV3_new_grease_pencil, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "GreasePencil"
	};
	rna_BlendDataGreasePencilsV3_new_grease_pencil_ = {
		{nullptr, 	&rna_BlendDataGreasePencilsV3_new_name,
		-1, "grease_pencil", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New Grease Pencil data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencil
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataGreasePencilsV3_new_name, &rna_BlendDataGreasePencilsV3_new_grease_pencil};
		func->identifier = "new";
		func->description = "Add a new Grease Pencil data-block to the main database";
		func->call = BlendDataGreasePencilsV3_new_call;
		func->c_ret = &rna_BlendDataGreasePencilsV3_new_grease_pencil;
		rna_BlendDataGreasePencilsV3_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataGreasePencilsV3_remove_grease_pencil_ = {
		{&rna_BlendDataGreasePencilsV3_remove_do_unlink, 	nullptr,
		-1, "grease_pencil", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Grease Pencil to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_GreasePencil
	};
	rna_BlendDataGreasePencilsV3_remove_do_unlink_ = {
		{&rna_BlendDataGreasePencilsV3_remove_do_id_user, 	&rna_BlendDataGreasePencilsV3_remove_grease_pencil,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this Grease Pencil before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataGreasePencilsV3_remove_do_id_user_ = {
		{&rna_BlendDataGreasePencilsV3_remove_do_ui_user, 	&rna_BlendDataGreasePencilsV3_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this Grease Pencil",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataGreasePencilsV3_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataGreasePencilsV3_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this Grease Pencil",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataGreasePencilsV3_remove_grease_pencil, &rna_BlendDataGreasePencilsV3_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a Grease Pencil instance from the current blendfile";
		func->call = BlendDataGreasePencilsV3_remove_call;
		rna_BlendDataGreasePencilsV3_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Movie Clips */
static CollectionPropertyRNA rna_BlendDataMovieClips_rna_properties_;
PropertyRNA &rna_BlendDataMovieClips_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_rna_properties_);

static PointerPropertyRNA rna_BlendDataMovieClips_rna_type_;
PropertyRNA &rna_BlendDataMovieClips_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_rna_type_);

static BoolPropertyRNA rna_BlendDataMovieClips_tag_value_;
PropertyRNA &rna_BlendDataMovieClips_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_tag_value_);

FunctionRNA *rna_BlendDataMovieClips_tag_func;
static PointerPropertyRNA rna_BlendDataMovieClips_remove_clip_;
PropertyRNA &rna_BlendDataMovieClips_remove_clip = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_remove_clip_);

static BoolPropertyRNA rna_BlendDataMovieClips_remove_do_unlink_;
PropertyRNA &rna_BlendDataMovieClips_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataMovieClips_remove_do_id_user_;
PropertyRNA &rna_BlendDataMovieClips_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataMovieClips_remove_do_ui_user_;
PropertyRNA &rna_BlendDataMovieClips_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_remove_do_ui_user_);

FunctionRNA *rna_BlendDataMovieClips_remove_func;
static StringPropertyRNA rna_BlendDataMovieClips_load_filepath_;
PropertyRNA &rna_BlendDataMovieClips_load_filepath = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_load_filepath_);

static BoolPropertyRNA rna_BlendDataMovieClips_load_check_existing_;
PropertyRNA &rna_BlendDataMovieClips_load_check_existing = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_load_check_existing_);

static PointerPropertyRNA rna_BlendDataMovieClips_load_clip_;
PropertyRNA &rna_BlendDataMovieClips_load_clip = reinterpret_cast<PropertyRNA &>(rna_BlendDataMovieClips_load_clip_);

FunctionRNA *rna_BlendDataMovieClips_load_func;
StructRNA *RNA_BlendDataMovieClips;
void register_struct_BlendDataMovieClips(BlenderRNA &brna)
{
	rna_BlendDataMovieClips_rna_properties_ = {
		{&rna_BlendDataMovieClips_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMovieClips_rna_properties_begin, BlendDataMovieClips_rna_properties_next, BlendDataMovieClips_rna_properties_end, BlendDataMovieClips_rna_properties_get, nullptr, nullptr, BlendDataMovieClips_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataMovieClips_rna_type_ = {
		{nullptr, 	&rna_BlendDataMovieClips_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMovieClips_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataMovieClips;
	srna->cont.properties = {&rna_BlendDataMovieClips_rna_properties, &rna_BlendDataMovieClips_rna_type};
	srna->identifier = "BlendDataMovieClips";
	srna->flag = 516;
	srna->name = "Main Movie Clips";
	srna->description = "Collection of movie clips";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataMovieClips_rna_properties;
	{
	rna_BlendDataMovieClips_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMovieClips_tag_value, &rna_BlendDataMovieClips_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataMovieClips_tag_call;
		rna_BlendDataMovieClips_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMovieClips_remove_clip_ = {
		{&rna_BlendDataMovieClips_remove_do_unlink, 	nullptr,
		-1, "clip", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Movie clip to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieClip
	};
	rna_BlendDataMovieClips_remove_do_unlink_ = {
		{&rna_BlendDataMovieClips_remove_do_id_user, 	&rna_BlendDataMovieClips_remove_clip,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this movie clip before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMovieClips_remove_do_id_user_ = {
		{&rna_BlendDataMovieClips_remove_do_ui_user, 	&rna_BlendDataMovieClips_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this movie clip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMovieClips_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataMovieClips_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this movie clip",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMovieClips_remove_clip, &rna_BlendDataMovieClips_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a movie clip from the current blendfile.";
		func->call = BlendDataMovieClips_remove_call;
		rna_BlendDataMovieClips_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMovieClips_load_filepath_ = {
		{&rna_BlendDataMovieClips_load_check_existing, 	nullptr,
		-1, "filepath", 294913, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"path for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, "Path"
	};
	rna_BlendDataMovieClips_load_check_existing_ = {
		{&rna_BlendDataMovieClips_load_clip, 	&rna_BlendDataMovieClips_load_filepath,
		-1, "check_existing", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Using existing data-block if this file is already loaded",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
	rna_BlendDataMovieClips_load_clip_ = {
		{nullptr, 	&rna_BlendDataMovieClips_load_check_existing,
		-1, "clip", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New movie clip data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_MovieClip
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMovieClips_load_filepath, &rna_BlendDataMovieClips_load_clip};
		func->identifier = "load";
		func->flag = 16;
		func->description = "Add a new movie clip to the main database from a file (while ``check_existing`` is disabled for consistency with other load functions, behavior with multiple movie-clips using the same file may incorrectly generate proxies)";
		func->call = BlendDataMovieClips_load_call;
		func->c_ret = &rna_BlendDataMovieClips_load_clip;
		rna_BlendDataMovieClips_load_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Masks */
static CollectionPropertyRNA rna_BlendDataMasks_rna_properties_;
PropertyRNA &rna_BlendDataMasks_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_rna_properties_);

static PointerPropertyRNA rna_BlendDataMasks_rna_type_;
PropertyRNA &rna_BlendDataMasks_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_rna_type_);

static BoolPropertyRNA rna_BlendDataMasks_tag_value_;
PropertyRNA &rna_BlendDataMasks_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_tag_value_);

FunctionRNA *rna_BlendDataMasks_tag_func;
static StringPropertyRNA rna_BlendDataMasks_new_name_;
PropertyRNA &rna_BlendDataMasks_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_new_name_);

static PointerPropertyRNA rna_BlendDataMasks_new_mask_;
PropertyRNA &rna_BlendDataMasks_new_mask = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_new_mask_);

FunctionRNA *rna_BlendDataMasks_new_func;
static PointerPropertyRNA rna_BlendDataMasks_remove_mask_;
PropertyRNA &rna_BlendDataMasks_remove_mask = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_remove_mask_);

static BoolPropertyRNA rna_BlendDataMasks_remove_do_unlink_;
PropertyRNA &rna_BlendDataMasks_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataMasks_remove_do_id_user_;
PropertyRNA &rna_BlendDataMasks_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataMasks_remove_do_ui_user_;
PropertyRNA &rna_BlendDataMasks_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataMasks_remove_do_ui_user_);

FunctionRNA *rna_BlendDataMasks_remove_func;
StructRNA *RNA_BlendDataMasks;
void register_struct_BlendDataMasks(BlenderRNA &brna)
{
	rna_BlendDataMasks_rna_properties_ = {
		{&rna_BlendDataMasks_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMasks_rna_properties_begin, BlendDataMasks_rna_properties_next, BlendDataMasks_rna_properties_end, BlendDataMasks_rna_properties_get, nullptr, nullptr, BlendDataMasks_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataMasks_rna_type_ = {
		{nullptr, 	&rna_BlendDataMasks_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataMasks_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataMasks;
	srna->cont.properties = {&rna_BlendDataMasks_rna_properties, &rna_BlendDataMasks_rna_type};
	srna->identifier = "BlendDataMasks";
	srna->flag = 516;
	srna->name = "Main Masks";
	srna->description = "Collection of masks";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataMasks_rna_properties;
	{
	rna_BlendDataMasks_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMasks_tag_value, &rna_BlendDataMasks_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataMasks_tag_call;
		rna_BlendDataMasks_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMasks_new_name_ = {
		{&rna_BlendDataMasks_new_mask, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Mask",
		"Name of new mask data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 256, ""
	};
	rna_BlendDataMasks_new_mask_ = {
		{nullptr, 	&rna_BlendDataMasks_new_name,
		-1, "mask", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New mask data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mask
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMasks_new_name, &rna_BlendDataMasks_new_mask};
		func->identifier = "new";
		func->description = "Add a new mask with a given name to the main database";
		func->call = BlendDataMasks_new_call;
		func->c_ret = &rna_BlendDataMasks_new_mask;
		rna_BlendDataMasks_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataMasks_remove_mask_ = {
		{&rna_BlendDataMasks_remove_do_unlink, 	nullptr,
		-1, "mask", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Mask to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Mask
	};
	rna_BlendDataMasks_remove_do_unlink_ = {
		{&rna_BlendDataMasks_remove_do_id_user, 	&rna_BlendDataMasks_remove_mask,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this mask before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMasks_remove_do_id_user_ = {
		{&rna_BlendDataMasks_remove_do_ui_user, 	&rna_BlendDataMasks_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this mask",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataMasks_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataMasks_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this mask",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataMasks_remove_mask, &rna_BlendDataMasks_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a mask from the current blendfile";
		func->call = BlendDataMasks_remove_call;
		rna_BlendDataMasks_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Line Styles */
static CollectionPropertyRNA rna_BlendDataLineStyles_rna_properties_;
PropertyRNA &rna_BlendDataLineStyles_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_rna_properties_);

static PointerPropertyRNA rna_BlendDataLineStyles_rna_type_;
PropertyRNA &rna_BlendDataLineStyles_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_rna_type_);

static BoolPropertyRNA rna_BlendDataLineStyles_tag_value_;
PropertyRNA &rna_BlendDataLineStyles_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_tag_value_);

FunctionRNA *rna_BlendDataLineStyles_tag_func;
static StringPropertyRNA rna_BlendDataLineStyles_new_name_;
PropertyRNA &rna_BlendDataLineStyles_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_new_name_);

static PointerPropertyRNA rna_BlendDataLineStyles_new_linestyle_;
PropertyRNA &rna_BlendDataLineStyles_new_linestyle = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_new_linestyle_);

FunctionRNA *rna_BlendDataLineStyles_new_func;
static PointerPropertyRNA rna_BlendDataLineStyles_remove_linestyle_;
PropertyRNA &rna_BlendDataLineStyles_remove_linestyle = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_remove_linestyle_);

static BoolPropertyRNA rna_BlendDataLineStyles_remove_do_unlink_;
PropertyRNA &rna_BlendDataLineStyles_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataLineStyles_remove_do_id_user_;
PropertyRNA &rna_BlendDataLineStyles_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataLineStyles_remove_do_ui_user_;
PropertyRNA &rna_BlendDataLineStyles_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataLineStyles_remove_do_ui_user_);

FunctionRNA *rna_BlendDataLineStyles_remove_func;
StructRNA *RNA_BlendDataLineStyles;
void register_struct_BlendDataLineStyles(BlenderRNA &brna)
{
	rna_BlendDataLineStyles_rna_properties_ = {
		{&rna_BlendDataLineStyles_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataLineStyles_rna_properties_begin, BlendDataLineStyles_rna_properties_next, BlendDataLineStyles_rna_properties_end, BlendDataLineStyles_rna_properties_get, nullptr, nullptr, BlendDataLineStyles_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataLineStyles_rna_type_ = {
		{nullptr, 	&rna_BlendDataLineStyles_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataLineStyles_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataLineStyles;
	srna->cont.properties = {&rna_BlendDataLineStyles_rna_properties, &rna_BlendDataLineStyles_rna_type};
	srna->identifier = "BlendDataLineStyles";
	srna->flag = 516;
	srna->name = "Main Line Styles";
	srna->description = "Collection of line styles";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataLineStyles_rna_properties;
	{
	rna_BlendDataLineStyles_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLineStyles_tag_value, &rna_BlendDataLineStyles_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataLineStyles_tag_call;
		rna_BlendDataLineStyles_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataLineStyles_new_name_ = {
		{&rna_BlendDataLineStyles_new_linestyle, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "FreestyleLineStyle"
	};
	rna_BlendDataLineStyles_new_linestyle_ = {
		{nullptr, 	&rna_BlendDataLineStyles_new_name,
		-1, "linestyle", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New line style data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FreestyleLineStyle
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLineStyles_new_name, &rna_BlendDataLineStyles_new_linestyle};
		func->identifier = "new";
		func->description = "Add a new line style instance to the main database";
		func->call = BlendDataLineStyles_new_call;
		func->c_ret = &rna_BlendDataLineStyles_new_linestyle;
		rna_BlendDataLineStyles_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataLineStyles_remove_linestyle_ = {
		{&rna_BlendDataLineStyles_remove_do_unlink, 	nullptr,
		-1, "linestyle", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Line style to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_FreestyleLineStyle
	};
	rna_BlendDataLineStyles_remove_do_unlink_ = {
		{&rna_BlendDataLineStyles_remove_do_id_user, 	&rna_BlendDataLineStyles_remove_linestyle,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this line style before deleting it",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataLineStyles_remove_do_id_user_ = {
		{&rna_BlendDataLineStyles_remove_do_ui_user, 	&rna_BlendDataLineStyles_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this line style",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataLineStyles_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataLineStyles_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this line style",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataLineStyles_remove_linestyle, &rna_BlendDataLineStyles_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a line style instance from the current blendfile";
		func->call = BlendDataLineStyles_remove_call;
		rna_BlendDataLineStyles_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Cache Files */
static CollectionPropertyRNA rna_BlendDataCacheFiles_rna_properties_;
PropertyRNA &rna_BlendDataCacheFiles_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataCacheFiles_rna_properties_);

static PointerPropertyRNA rna_BlendDataCacheFiles_rna_type_;
PropertyRNA &rna_BlendDataCacheFiles_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataCacheFiles_rna_type_);

static BoolPropertyRNA rna_BlendDataCacheFiles_tag_value_;
PropertyRNA &rna_BlendDataCacheFiles_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataCacheFiles_tag_value_);

FunctionRNA *rna_BlendDataCacheFiles_tag_func;
StructRNA *RNA_BlendDataCacheFiles;
void register_struct_BlendDataCacheFiles(BlenderRNA &brna)
{
	rna_BlendDataCacheFiles_rna_properties_ = {
		{&rna_BlendDataCacheFiles_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataCacheFiles_rna_properties_begin, BlendDataCacheFiles_rna_properties_next, BlendDataCacheFiles_rna_properties_end, BlendDataCacheFiles_rna_properties_get, nullptr, nullptr, BlendDataCacheFiles_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataCacheFiles_rna_type_ = {
		{nullptr, 	&rna_BlendDataCacheFiles_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataCacheFiles_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataCacheFiles;
	srna->cont.properties = {&rna_BlendDataCacheFiles_rna_properties, &rna_BlendDataCacheFiles_rna_type};
	srna->identifier = "BlendDataCacheFiles";
	srna->flag = 516;
	srna->name = "Main Cache Files";
	srna->description = "Collection of cache files";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataCacheFiles_rna_properties;
	{
	rna_BlendDataCacheFiles_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataCacheFiles_tag_value, &rna_BlendDataCacheFiles_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataCacheFiles_tag_call;
		rna_BlendDataCacheFiles_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Paint Curves */
static CollectionPropertyRNA rna_BlendDataPaintCurves_rna_properties_;
PropertyRNA &rna_BlendDataPaintCurves_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataPaintCurves_rna_properties_);

static PointerPropertyRNA rna_BlendDataPaintCurves_rna_type_;
PropertyRNA &rna_BlendDataPaintCurves_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataPaintCurves_rna_type_);

static BoolPropertyRNA rna_BlendDataPaintCurves_tag_value_;
PropertyRNA &rna_BlendDataPaintCurves_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataPaintCurves_tag_value_);

FunctionRNA *rna_BlendDataPaintCurves_tag_func;
StructRNA *RNA_BlendDataPaintCurves;
void register_struct_BlendDataPaintCurves(BlenderRNA &brna)
{
	rna_BlendDataPaintCurves_rna_properties_ = {
		{&rna_BlendDataPaintCurves_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataPaintCurves_rna_properties_begin, BlendDataPaintCurves_rna_properties_next, BlendDataPaintCurves_rna_properties_end, BlendDataPaintCurves_rna_properties_get, nullptr, nullptr, BlendDataPaintCurves_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataPaintCurves_rna_type_ = {
		{nullptr, 	&rna_BlendDataPaintCurves_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataPaintCurves_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataPaintCurves;
	srna->cont.properties = {&rna_BlendDataPaintCurves_rna_properties, &rna_BlendDataPaintCurves_rna_type};
	srna->identifier = "BlendDataPaintCurves";
	srna->flag = 516;
	srna->name = "Main Paint Curves";
	srna->description = "Collection of paint curves";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataPaintCurves_rna_properties;
	{
	rna_BlendDataPaintCurves_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataPaintCurves_tag_value, &rna_BlendDataPaintCurves_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataPaintCurves_tag_call;
		rna_BlendDataPaintCurves_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Workspaces */
static CollectionPropertyRNA rna_BlendDataWorkSpaces_rna_properties_;
PropertyRNA &rna_BlendDataWorkSpaces_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorkSpaces_rna_properties_);

static PointerPropertyRNA rna_BlendDataWorkSpaces_rna_type_;
PropertyRNA &rna_BlendDataWorkSpaces_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorkSpaces_rna_type_);

static BoolPropertyRNA rna_BlendDataWorkSpaces_tag_value_;
PropertyRNA &rna_BlendDataWorkSpaces_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataWorkSpaces_tag_value_);

FunctionRNA *rna_BlendDataWorkSpaces_tag_func;
StructRNA *RNA_BlendDataWorkSpaces;
void register_struct_BlendDataWorkSpaces(BlenderRNA &brna)
{
	rna_BlendDataWorkSpaces_rna_properties_ = {
		{&rna_BlendDataWorkSpaces_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataWorkSpaces_rna_properties_begin, BlendDataWorkSpaces_rna_properties_next, BlendDataWorkSpaces_rna_properties_end, BlendDataWorkSpaces_rna_properties_get, nullptr, nullptr, BlendDataWorkSpaces_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataWorkSpaces_rna_type_ = {
		{nullptr, 	&rna_BlendDataWorkSpaces_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataWorkSpaces_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataWorkSpaces;
	srna->cont.properties = {&rna_BlendDataWorkSpaces_rna_properties, &rna_BlendDataWorkSpaces_rna_type};
	srna->identifier = "BlendDataWorkSpaces";
	srna->flag = 516;
	srna->name = "Main Workspaces";
	srna->description = "Collection of workspaces";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataWorkSpaces_rna_properties;
	{
	rna_BlendDataWorkSpaces_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataWorkSpaces_tag_value, &rna_BlendDataWorkSpaces_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataWorkSpaces_tag_call;
		rna_BlendDataWorkSpaces_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Light Probes */
static CollectionPropertyRNA rna_BlendDataProbes_rna_properties_;
PropertyRNA &rna_BlendDataProbes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_rna_properties_);

static PointerPropertyRNA rna_BlendDataProbes_rna_type_;
PropertyRNA &rna_BlendDataProbes_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_rna_type_);

static StringPropertyRNA rna_BlendDataProbes_new_name_;
PropertyRNA &rna_BlendDataProbes_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_new_name_);

static EnumPropertyRNA rna_BlendDataProbes_new_type_;
PropertyRNA &rna_BlendDataProbes_new_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_new_type_);

static PointerPropertyRNA rna_BlendDataProbes_new_lightprobe_;
PropertyRNA &rna_BlendDataProbes_new_lightprobe = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_new_lightprobe_);

FunctionRNA *rna_BlendDataProbes_new_func;
static PointerPropertyRNA rna_BlendDataProbes_remove_lightprobe_;
PropertyRNA &rna_BlendDataProbes_remove_lightprobe = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_remove_lightprobe_);

static BoolPropertyRNA rna_BlendDataProbes_remove_do_unlink_;
PropertyRNA &rna_BlendDataProbes_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataProbes_remove_do_id_user_;
PropertyRNA &rna_BlendDataProbes_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataProbes_remove_do_ui_user_;
PropertyRNA &rna_BlendDataProbes_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_remove_do_ui_user_);

FunctionRNA *rna_BlendDataProbes_remove_func;
static BoolPropertyRNA rna_BlendDataProbes_tag_value_;
PropertyRNA &rna_BlendDataProbes_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataProbes_tag_value_);

FunctionRNA *rna_BlendDataProbes_tag_func;
StructRNA *RNA_BlendDataProbes;
void register_struct_BlendDataProbes(BlenderRNA &brna)
{
	rna_BlendDataProbes_rna_properties_ = {
		{&rna_BlendDataProbes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataProbes_rna_properties_begin, BlendDataProbes_rna_properties_next, BlendDataProbes_rna_properties_end, BlendDataProbes_rna_properties_get, nullptr, nullptr, BlendDataProbes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataProbes_rna_type_ = {
		{nullptr, 	&rna_BlendDataProbes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataProbes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataProbes;
	srna->cont.properties = {&rna_BlendDataProbes_rna_properties, &rna_BlendDataProbes_rna_type};
	srna->identifier = "BlendDataProbes";
	srna->flag = 516;
	srna->name = "Main Light Probes";
	srna->description = "Collection of light probes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataProbes_rna_properties;
	{
	rna_BlendDataProbes_new_name_ = {
		{&rna_BlendDataProbes_new_type, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Probe"
	};
	rna_BlendDataProbes_new_type_ = {
		{&rna_BlendDataProbes_new_lightprobe, 	&rna_BlendDataProbes_new_name,
		-1, "type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Type",
		"The type of light probe to add",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_lightprobes_type_items, 3, 0
	};
	rna_BlendDataProbes_new_lightprobe_ = {
		{nullptr, 	&rna_BlendDataProbes_new_type,
		-1, "lightprobe", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New light probe data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_LightProbe
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataProbes_new_name, &rna_BlendDataProbes_new_lightprobe};
		func->identifier = "new";
		func->description = "Add a new light probe to the main database";
		func->call = BlendDataProbes_new_call;
		func->c_ret = &rna_BlendDataProbes_new_lightprobe;
		rna_BlendDataProbes_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataProbes_remove_lightprobe_ = {
		{&rna_BlendDataProbes_remove_do_unlink, 	nullptr,
		-1, "lightprobe", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Light probe to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_LightProbe
	};
	rna_BlendDataProbes_remove_do_unlink_ = {
		{&rna_BlendDataProbes_remove_do_id_user, 	&rna_BlendDataProbes_remove_lightprobe,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this light probe before deleting it (WARNING: will also delete objects instancing that light probe data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataProbes_remove_do_id_user_ = {
		{&rna_BlendDataProbes_remove_do_ui_user, 	&rna_BlendDataProbes_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this light probe",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataProbes_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataProbes_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this light probe",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataProbes_remove_lightprobe, &rna_BlendDataProbes_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a light probe from the current blendfile";
		func->call = BlendDataProbes_remove_call;
		rna_BlendDataProbes_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataProbes_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataProbes_tag_value, &rna_BlendDataProbes_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataProbes_tag_call;
		rna_BlendDataProbes_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Hair Curves */
static CollectionPropertyRNA rna_BlendDataHairCurves_rna_properties_;
PropertyRNA &rna_BlendDataHairCurves_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_rna_properties_);

static PointerPropertyRNA rna_BlendDataHairCurves_rna_type_;
PropertyRNA &rna_BlendDataHairCurves_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_rna_type_);

static StringPropertyRNA rna_BlendDataHairCurves_new_name_;
PropertyRNA &rna_BlendDataHairCurves_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_new_name_);

static PointerPropertyRNA rna_BlendDataHairCurves_new_curves_;
PropertyRNA &rna_BlendDataHairCurves_new_curves = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_new_curves_);

FunctionRNA *rna_BlendDataHairCurves_new_func;
static PointerPropertyRNA rna_BlendDataHairCurves_remove_curves_;
PropertyRNA &rna_BlendDataHairCurves_remove_curves = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_remove_curves_);

static BoolPropertyRNA rna_BlendDataHairCurves_remove_do_unlink_;
PropertyRNA &rna_BlendDataHairCurves_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataHairCurves_remove_do_id_user_;
PropertyRNA &rna_BlendDataHairCurves_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataHairCurves_remove_do_ui_user_;
PropertyRNA &rna_BlendDataHairCurves_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_remove_do_ui_user_);

FunctionRNA *rna_BlendDataHairCurves_remove_func;
static BoolPropertyRNA rna_BlendDataHairCurves_tag_value_;
PropertyRNA &rna_BlendDataHairCurves_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataHairCurves_tag_value_);

FunctionRNA *rna_BlendDataHairCurves_tag_func;
StructRNA *RNA_BlendDataHairCurves;
void register_struct_BlendDataHairCurves(BlenderRNA &brna)
{
	rna_BlendDataHairCurves_rna_properties_ = {
		{&rna_BlendDataHairCurves_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataHairCurves_rna_properties_begin, BlendDataHairCurves_rna_properties_next, BlendDataHairCurves_rna_properties_end, BlendDataHairCurves_rna_properties_get, nullptr, nullptr, BlendDataHairCurves_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataHairCurves_rna_type_ = {
		{nullptr, 	&rna_BlendDataHairCurves_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataHairCurves_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataHairCurves;
	srna->cont.properties = {&rna_BlendDataHairCurves_rna_properties, &rna_BlendDataHairCurves_rna_type};
	srna->identifier = "BlendDataHairCurves";
	srna->flag = 516;
	srna->name = "Main Hair Curves";
	srna->description = "Collection of hair curves";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataHairCurves_rna_properties;
	{
	rna_BlendDataHairCurves_new_name_ = {
		{&rna_BlendDataHairCurves_new_curves, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Curves"
	};
	rna_BlendDataHairCurves_new_curves_ = {
		{nullptr, 	&rna_BlendDataHairCurves_new_name,
		-1, "curves", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New curves data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Curves
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataHairCurves_new_name, &rna_BlendDataHairCurves_new_curves};
		func->identifier = "new";
		func->description = "Add a new hair to the main database";
		func->call = BlendDataHairCurves_new_call;
		func->c_ret = &rna_BlendDataHairCurves_new_curves;
		rna_BlendDataHairCurves_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataHairCurves_remove_curves_ = {
		{&rna_BlendDataHairCurves_remove_do_unlink, 	nullptr,
		-1, "curves", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Curves data-block to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Curves
	};
	rna_BlendDataHairCurves_remove_do_unlink_ = {
		{&rna_BlendDataHairCurves_remove_do_id_user, 	&rna_BlendDataHairCurves_remove_curves,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this curves before deleting it (WARNING: will also delete objects instancing that curves data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataHairCurves_remove_do_id_user_ = {
		{&rna_BlendDataHairCurves_remove_do_ui_user, 	&rna_BlendDataHairCurves_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this curves data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataHairCurves_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataHairCurves_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this curves data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataHairCurves_remove_curves, &rna_BlendDataHairCurves_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a curves data-block from the current blendfile";
		func->call = BlendDataHairCurves_remove_call;
		rna_BlendDataHairCurves_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataHairCurves_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataHairCurves_tag_value, &rna_BlendDataHairCurves_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataHairCurves_tag_call;
		rna_BlendDataHairCurves_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Point Clouds */
static CollectionPropertyRNA rna_BlendDataPointClouds_rna_properties_;
PropertyRNA &rna_BlendDataPointClouds_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_rna_properties_);

static PointerPropertyRNA rna_BlendDataPointClouds_rna_type_;
PropertyRNA &rna_BlendDataPointClouds_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_rna_type_);

static StringPropertyRNA rna_BlendDataPointClouds_new_name_;
PropertyRNA &rna_BlendDataPointClouds_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_new_name_);

static PointerPropertyRNA rna_BlendDataPointClouds_new_pointcloud_;
PropertyRNA &rna_BlendDataPointClouds_new_pointcloud = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_new_pointcloud_);

FunctionRNA *rna_BlendDataPointClouds_new_func;
static PointerPropertyRNA rna_BlendDataPointClouds_remove_pointcloud_;
PropertyRNA &rna_BlendDataPointClouds_remove_pointcloud = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_remove_pointcloud_);

static BoolPropertyRNA rna_BlendDataPointClouds_remove_do_unlink_;
PropertyRNA &rna_BlendDataPointClouds_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataPointClouds_remove_do_id_user_;
PropertyRNA &rna_BlendDataPointClouds_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataPointClouds_remove_do_ui_user_;
PropertyRNA &rna_BlendDataPointClouds_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_remove_do_ui_user_);

FunctionRNA *rna_BlendDataPointClouds_remove_func;
static BoolPropertyRNA rna_BlendDataPointClouds_tag_value_;
PropertyRNA &rna_BlendDataPointClouds_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataPointClouds_tag_value_);

FunctionRNA *rna_BlendDataPointClouds_tag_func;
StructRNA *RNA_BlendDataPointClouds;
void register_struct_BlendDataPointClouds(BlenderRNA &brna)
{
	rna_BlendDataPointClouds_rna_properties_ = {
		{&rna_BlendDataPointClouds_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataPointClouds_rna_properties_begin, BlendDataPointClouds_rna_properties_next, BlendDataPointClouds_rna_properties_end, BlendDataPointClouds_rna_properties_get, nullptr, nullptr, BlendDataPointClouds_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataPointClouds_rna_type_ = {
		{nullptr, 	&rna_BlendDataPointClouds_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataPointClouds_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataPointClouds;
	srna->cont.properties = {&rna_BlendDataPointClouds_rna_properties, &rna_BlendDataPointClouds_rna_type};
	srna->identifier = "BlendDataPointClouds";
	srna->flag = 516;
	srna->name = "Main Point Clouds";
	srna->description = "Collection of point clouds";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataPointClouds_rna_properties;
	{
	rna_BlendDataPointClouds_new_name_ = {
		{&rna_BlendDataPointClouds_new_pointcloud, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "PointCloud"
	};
	rna_BlendDataPointClouds_new_pointcloud_ = {
		{nullptr, 	&rna_BlendDataPointClouds_new_name,
		-1, "pointcloud", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New point cloud data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PointCloud
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataPointClouds_new_name, &rna_BlendDataPointClouds_new_pointcloud};
		func->identifier = "new";
		func->description = "Add a new point cloud to the main database";
		func->call = BlendDataPointClouds_new_call;
		func->c_ret = &rna_BlendDataPointClouds_new_pointcloud;
		rna_BlendDataPointClouds_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataPointClouds_remove_pointcloud_ = {
		{&rna_BlendDataPointClouds_remove_do_unlink, 	nullptr,
		-1, "pointcloud", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Point cloud to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_PointCloud
	};
	rna_BlendDataPointClouds_remove_do_unlink_ = {
		{&rna_BlendDataPointClouds_remove_do_id_user, 	&rna_BlendDataPointClouds_remove_pointcloud,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this point cloud before deleting it (WARNING: will also delete objects instancing that point cloud data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataPointClouds_remove_do_id_user_ = {
		{&rna_BlendDataPointClouds_remove_do_ui_user, 	&rna_BlendDataPointClouds_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this point cloud data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataPointClouds_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataPointClouds_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this point cloud data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataPointClouds_remove_pointcloud, &rna_BlendDataPointClouds_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a point cloud from the current blendfile";
		func->call = BlendDataPointClouds_remove_call;
		rna_BlendDataPointClouds_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataPointClouds_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataPointClouds_tag_value, &rna_BlendDataPointClouds_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataPointClouds_tag_call;
		rna_BlendDataPointClouds_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Main Volumes */
static CollectionPropertyRNA rna_BlendDataVolumes_rna_properties_;
PropertyRNA &rna_BlendDataVolumes_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_rna_properties_);

static PointerPropertyRNA rna_BlendDataVolumes_rna_type_;
PropertyRNA &rna_BlendDataVolumes_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_rna_type_);

static StringPropertyRNA rna_BlendDataVolumes_new_name_;
PropertyRNA &rna_BlendDataVolumes_new_name = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_new_name_);

static PointerPropertyRNA rna_BlendDataVolumes_new_volume_;
PropertyRNA &rna_BlendDataVolumes_new_volume = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_new_volume_);

FunctionRNA *rna_BlendDataVolumes_new_func;
static PointerPropertyRNA rna_BlendDataVolumes_remove_volume_;
PropertyRNA &rna_BlendDataVolumes_remove_volume = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_remove_volume_);

static BoolPropertyRNA rna_BlendDataVolumes_remove_do_unlink_;
PropertyRNA &rna_BlendDataVolumes_remove_do_unlink = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_remove_do_unlink_);

static BoolPropertyRNA rna_BlendDataVolumes_remove_do_id_user_;
PropertyRNA &rna_BlendDataVolumes_remove_do_id_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_remove_do_id_user_);

static BoolPropertyRNA rna_BlendDataVolumes_remove_do_ui_user_;
PropertyRNA &rna_BlendDataVolumes_remove_do_ui_user = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_remove_do_ui_user_);

FunctionRNA *rna_BlendDataVolumes_remove_func;
static BoolPropertyRNA rna_BlendDataVolumes_tag_value_;
PropertyRNA &rna_BlendDataVolumes_tag_value = reinterpret_cast<PropertyRNA &>(rna_BlendDataVolumes_tag_value_);

FunctionRNA *rna_BlendDataVolumes_tag_func;
StructRNA *RNA_BlendDataVolumes;
void register_struct_BlendDataVolumes(BlenderRNA &brna)
{
	rna_BlendDataVolumes_rna_properties_ = {
		{&rna_BlendDataVolumes_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataVolumes_rna_properties_begin, BlendDataVolumes_rna_properties_next, BlendDataVolumes_rna_properties_end, BlendDataVolumes_rna_properties_get, nullptr, nullptr, BlendDataVolumes_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendDataVolumes_rna_type_ = {
		{nullptr, 	&rna_BlendDataVolumes_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendDataVolumes_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	StructRNA *srna = RNA_BlendDataVolumes;
	srna->cont.properties = {&rna_BlendDataVolumes_rna_properties, &rna_BlendDataVolumes_rna_type};
	srna->identifier = "BlendDataVolumes";
	srna->flag = 516;
	srna->name = "Main Volumes";
	srna->description = "Collection of volumes";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendDataVolumes_rna_properties;
	{
	rna_BlendDataVolumes_new_name_ = {
		{&rna_BlendDataVolumes_new_volume, 	nullptr,
		-1, "name", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"New name for the data-block",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, "Volume"
	};
	rna_BlendDataVolumes_new_volume_ = {
		{nullptr, 	&rna_BlendDataVolumes_new_name,
		-1, "volume", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"New volume data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Volume
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataVolumes_new_name, &rna_BlendDataVolumes_new_volume};
		func->identifier = "new";
		func->description = "Add a new volume to the main database";
		func->call = BlendDataVolumes_new_call;
		func->c_ret = &rna_BlendDataVolumes_new_volume;
		rna_BlendDataVolumes_new_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataVolumes_remove_volume_ = {
		{&rna_BlendDataVolumes_remove_do_unlink, 	nullptr,
		-1, "volume", 262272, 0, 5, 0, 0, PropertyPathTemplateType(0), "",
		"Volume to remove",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_Volume
	};
	rna_BlendDataVolumes_remove_do_unlink_ = {
		{&rna_BlendDataVolumes_remove_do_id_user, 	&rna_BlendDataVolumes_remove_volume,
		-1, "do_unlink", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Unlink all usages of this volume before deleting it (WARNING: will also delete objects instancing that volume data)",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataVolumes_remove_do_id_user_ = {
		{&rna_BlendDataVolumes_remove_do_ui_user, 	&rna_BlendDataVolumes_remove_do_unlink,
		-1, "do_id_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Decrement user counter of all data-blocks used by this volume data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
	rna_BlendDataVolumes_remove_do_ui_user_ = {
		{nullptr, 	&rna_BlendDataVolumes_remove_do_id_user,
		-1, "do_ui_user", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "",
		"Make sure interface does not reference this volume data",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 1, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataVolumes_remove_volume, &rna_BlendDataVolumes_remove_do_ui_user};
		func->identifier = "remove";
		func->flag = 16;
		func->description = "Remove a volume from the current blendfile";
		func->call = BlendDataVolumes_remove_call;
		rna_BlendDataVolumes_remove_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_BlendDataVolumes_tag_value_ = {
		{nullptr, 	nullptr,
		-1, "value", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "Value",
		"",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_BlendDataVolumes_tag_value, &rna_BlendDataVolumes_tag_value};
		func->identifier = "tag";
		func->description = "tag";
		func->call = BlendDataVolumes_tag_call;
		rna_BlendDataVolumes_tag_func = func.get();
		srna->functions.append(std::move(func));
	}
};

/* Blend-File Color Space */
static CollectionPropertyRNA rna_BlendFileColorspace_rna_properties_;
PropertyRNA &rna_BlendFileColorspace_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BlendFileColorspace_rna_properties_);

static PointerPropertyRNA rna_BlendFileColorspace_rna_type_;
PropertyRNA &rna_BlendFileColorspace_rna_type = reinterpret_cast<PropertyRNA &>(rna_BlendFileColorspace_rna_type_);

static EnumPropertyRNA rna_BlendFileColorspace_working_space_;
PropertyRNA &rna_BlendFileColorspace_working_space = reinterpret_cast<PropertyRNA &>(rna_BlendFileColorspace_working_space_);

static StringPropertyRNA rna_BlendFileColorspace_working_space_interop_id_;
PropertyRNA &rna_BlendFileColorspace_working_space_interop_id = reinterpret_cast<PropertyRNA &>(rna_BlendFileColorspace_working_space_interop_id_);

static BoolPropertyRNA rna_BlendFileColorspace_is_missing_opencolorio_config_;
PropertyRNA &rna_BlendFileColorspace_is_missing_opencolorio_config = reinterpret_cast<PropertyRNA &>(rna_BlendFileColorspace_is_missing_opencolorio_config_);

StructRNA *RNA_BlendFileColorspace;
void register_struct_BlendFileColorspace(BlenderRNA &brna)
{
	rna_BlendFileColorspace_rna_properties_ = {
		{&rna_BlendFileColorspace_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendFileColorspace_rna_properties_begin, BlendFileColorspace_rna_properties_next, BlendFileColorspace_rna_properties_end, BlendFileColorspace_rna_properties_get, nullptr, nullptr, BlendFileColorspace_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BlendFileColorspace_rna_type_ = {
		{&rna_BlendFileColorspace_working_space, 	&rna_BlendFileColorspace_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendFileColorspace_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BlendFileColorspace_working_space_ = {
		{&rna_BlendFileColorspace_working_space_interop_id, 	&rna_BlendFileColorspace_rna_type,
		-1, "working_space", 16777218, 0, 0, 0, 0, PropertyPathTemplateType(0), "Working Space",
		"Color space used for all scene linear colors in this file, and for compositing, shader and geometry nodes processing",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendFileColorspace_working_space_get, nullptr, rna_MainColorspace_working_space_itemf, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_dummy_NULL_items, 0, 0
	};

	rna_BlendFileColorspace_working_space_interop_id_ = {
		{&rna_BlendFileColorspace_is_missing_opencolorio_config, 	&rna_BlendFileColorspace_working_space,
		-1, "working_space_interop_id", 262144, 0, 0, 0, 0, PropertyPathTemplateType(0), "Working Space Interop ID",
		"Unique identifier for common color spaces, as defined by the Color Interop Forum. May be empty if there is no interop ID for the working space. Common values are lin_rec709_scene, lin_rec2020_scene and lin_ap1_scene (for ACEScg)",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendFileColorspace_working_space_interop_id_get, BlendFileColorspace_working_space_interop_id_length, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 0, ""
	};

	rna_BlendFileColorspace_is_missing_opencolorio_config_ = {
		{nullptr, 	&rna_BlendFileColorspace_working_space_interop_id,
		-1, "is_missing_opencolorio_config", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Missing OpenColorIO Configuration",
		"A color space, view or display was not found, which likely means the OpenColorIO config used to create this blend file is missing",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BlendFileColorspace_is_missing_opencolorio_config_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BlendFileColorspace;
	srna->cont.properties = {&rna_BlendFileColorspace_rna_properties, &rna_BlendFileColorspace_is_missing_opencolorio_config};
	srna->identifier = "BlendFileColorspace";
	srna->flag = 516;
	srna->name = "Blend-File Color Space";
	srna->description = "Information about the color space used for data-blocks in a blend file";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BlendFileColorspace_rna_properties;
};


}  // namespace blender
