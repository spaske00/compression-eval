
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

#include "rna_depsgraph.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_DepsgraphObjectInstance_rna_properties;
extern PropertyRNA &rna_DepsgraphObjectInstance_rna_type;
extern PropertyRNA &rna_DepsgraphObjectInstance_object;
extern PropertyRNA &rna_DepsgraphObjectInstance_show_self;
extern PropertyRNA &rna_DepsgraphObjectInstance_show_particles;
extern PropertyRNA &rna_DepsgraphObjectInstance_is_instance;
extern PropertyRNA &rna_DepsgraphObjectInstance_instance_object;
extern PropertyRNA &rna_DepsgraphObjectInstance_parent;
extern PropertyRNA &rna_DepsgraphObjectInstance_particle_system;
extern PropertyRNA &rna_DepsgraphObjectInstance_persistent_id;
extern PropertyRNA &rna_DepsgraphObjectInstance_random_id;
extern PropertyRNA &rna_DepsgraphObjectInstance_matrix_world;
extern PropertyRNA &rna_DepsgraphObjectInstance_orco;
extern PropertyRNA &rna_DepsgraphObjectInstance_uv;


extern PropertyRNA &rna_DepsgraphUpdate_rna_properties;
extern PropertyRNA &rna_DepsgraphUpdate_rna_type;
extern PropertyRNA &rna_DepsgraphUpdate_id;
extern PropertyRNA &rna_DepsgraphUpdate_is_updated_transform;
extern PropertyRNA &rna_DepsgraphUpdate_is_updated_geometry;
extern PropertyRNA &rna_DepsgraphUpdate_is_updated_shading;


extern PropertyRNA &rna_Depsgraph_rna_properties;
extern PropertyRNA &rna_Depsgraph_rna_type;
extern PropertyRNA &rna_Depsgraph_mode;
extern PropertyRNA &rna_Depsgraph_scene;
extern PropertyRNA &rna_Depsgraph_view_layer;
extern PropertyRNA &rna_Depsgraph_scene_eval;
extern PropertyRNA &rna_Depsgraph_view_layer_eval;
extern PropertyRNA &rna_Depsgraph_ids;
extern PropertyRNA &rna_Depsgraph_objects;
extern PropertyRNA &rna_Depsgraph_object_instances;
extern PropertyRNA &rna_Depsgraph_updates;

extern FunctionRNA *rna_Depsgraph_debug_relations_graphviz_func;
extern PropertyRNA &rna_Depsgraph_debug_relations_graphviz_filepath;
extern PropertyRNA &rna_Depsgraph_debug_relations_graphviz_dot_graph;

extern FunctionRNA *rna_Depsgraph_debug_stats_gnuplot_func;
extern PropertyRNA &rna_Depsgraph_debug_stats_gnuplot_filepath;
extern PropertyRNA &rna_Depsgraph_debug_stats_gnuplot_output_filepath;

extern FunctionRNA *rna_Depsgraph_debug_tag_update_func;
extern FunctionRNA *rna_Depsgraph_debug_stats_func;
extern PropertyRNA &rna_Depsgraph_debug_stats_result;

extern FunctionRNA *rna_Depsgraph_update_func;
extern FunctionRNA *rna_Depsgraph_id_eval_get_func;
extern PropertyRNA &rna_Depsgraph_id_eval_get_id;
extern PropertyRNA &rna_Depsgraph_id_eval_get_id_eval;

extern FunctionRNA *rna_Depsgraph_id_type_updated_func;
extern PropertyRNA &rna_Depsgraph_id_type_updated_id_type;
extern PropertyRNA &rna_Depsgraph_id_type_updated_updated;


static PointerRNA DepsgraphObjectInstance_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DepsgraphObjectInstance_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DepsgraphObjectInstance_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DepsgraphObjectInstance_rna_properties_get(iter);
    }
}

void DepsgraphObjectInstance_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DepsgraphObjectInstance_rna_properties_get(iter);
    }
}

void DepsgraphObjectInstance_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DepsgraphObjectInstance_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DepsgraphObjectInstance_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA DepsgraphObjectInstance_object_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_DepsgraphObjectInstance_object_get;
    return fn(ptr);
}

bool DepsgraphObjectInstance_show_self_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_DepsgraphObjectInstance_show_self_get;
    return fn(ptr);
}

bool DepsgraphObjectInstance_show_particles_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_DepsgraphObjectInstance_show_particles_get;
    return fn(ptr);
}

bool DepsgraphObjectInstance_is_instance_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_DepsgraphObjectInstance_is_instance_get;
    return fn(ptr);
}

PointerRNA DepsgraphObjectInstance_instance_object_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_DepsgraphObjectInstance_instance_object_get;
    return fn(ptr);
}

PointerRNA DepsgraphObjectInstance_parent_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_DepsgraphObjectInstance_parent_get;
    return fn(ptr);
}

PointerRNA DepsgraphObjectInstance_particle_system_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_DepsgraphObjectInstance_particle_system_get;
    return fn(ptr);
}

void DepsgraphObjectInstance_persistent_id_get(PointerRNA *ptr, int values[8])
{
    PropIntArrayGetFunc fn = rna_DepsgraphObjectInstance_persistent_id_get;
    fn(ptr, values);
}

int DepsgraphObjectInstance_random_id_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_DepsgraphObjectInstance_random_id_get;
    return fn(ptr);
}

void DepsgraphObjectInstance_matrix_world_get(PointerRNA *ptr, float values[16])
{
    PropFloatArrayGetFunc fn = rna_DepsgraphObjectInstance_matrix_world_get;
    fn(ptr, values);
}

void DepsgraphObjectInstance_orco_get(PointerRNA *ptr, float values[3])
{
    PropFloatArrayGetFunc fn = rna_DepsgraphObjectInstance_orco_get;
    fn(ptr, values);
}

void DepsgraphObjectInstance_uv_get(PointerRNA *ptr, float values[2])
{
    PropFloatArrayGetFunc fn = rna_DepsgraphObjectInstance_uv_get;
    fn(ptr, values);
}

static PointerRNA DepsgraphUpdate_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void DepsgraphUpdate_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_DepsgraphUpdate_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = DepsgraphUpdate_rna_properties_get(iter);
    }
}

void DepsgraphUpdate_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = DepsgraphUpdate_rna_properties_get(iter);
    }
}

void DepsgraphUpdate_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool DepsgraphUpdate_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA DepsgraphUpdate_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

PointerRNA DepsgraphUpdate_id_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_DepsgraphUpdate_id_get;
    return fn(ptr);
}

bool DepsgraphUpdate_is_updated_transform_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_DepsgraphUpdate_is_updated_transform_get;
    return fn(ptr);
}

bool DepsgraphUpdate_is_updated_geometry_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_DepsgraphUpdate_is_updated_geometry_get;
    return fn(ptr);
}

bool DepsgraphUpdate_is_updated_shading_get(PointerRNA *ptr)
{
    PropBooleanGetFunc fn = rna_DepsgraphUpdate_is_updated_shading_get;
    return fn(ptr);
}

static PointerRNA Depsgraph_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void Depsgraph_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Depsgraph_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_rna_properties_get(iter);
    }
}

void Depsgraph_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_rna_properties_get(iter);
    }
}

void Depsgraph_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool Depsgraph_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA Depsgraph_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

int Depsgraph_mode_get(PointerRNA *ptr)
{
    PropEnumGetFunc fn = rna_Depsgraph_mode_get;
    return fn(ptr);
}

PointerRNA Depsgraph_scene_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Depsgraph_scene_get;
    return fn(ptr);
}

PointerRNA Depsgraph_view_layer_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Depsgraph_view_layer_get;
    return fn(ptr);
}

PointerRNA Depsgraph_scene_eval_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Depsgraph_scene_eval_get;
    return fn(ptr);
}

PointerRNA Depsgraph_view_layer_eval_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_Depsgraph_view_layer_eval_get;
    return fn(ptr);
}

static PointerRNA Depsgraph_ids_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Depsgraph_ids_get;
    return fn(iter);
}

void Depsgraph_ids_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Depsgraph_ids;

    PropCollectionBeginFunc fn = rna_Depsgraph_ids_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_ids_get(iter);
    }
}

void Depsgraph_ids_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Depsgraph_ids_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_ids_get(iter);
    }
}

void Depsgraph_ids_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_Depsgraph_ids_end;
    fn(iter);
}

static PointerRNA Depsgraph_objects_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Depsgraph_objects_get;
    return fn(iter);
}

void Depsgraph_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Depsgraph_objects;

    PropCollectionBeginFunc fn = rna_Depsgraph_objects_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_objects_get(iter);
    }
}

void Depsgraph_objects_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Depsgraph_objects_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_objects_get(iter);
    }
}

void Depsgraph_objects_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_Depsgraph_objects_end;
    fn(iter);
}

static PointerRNA Depsgraph_object_instances_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Depsgraph_object_instances_get;
    return fn(iter);
}

void Depsgraph_object_instances_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Depsgraph_object_instances;

    PropCollectionBeginFunc fn = rna_Depsgraph_object_instances_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_object_instances_get(iter);
    }
}

void Depsgraph_object_instances_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Depsgraph_object_instances_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_object_instances_get(iter);
    }
}

void Depsgraph_object_instances_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_Depsgraph_object_instances_end;
    fn(iter);
}

static PointerRNA Depsgraph_updates_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_Depsgraph_updates_get;
    return fn(iter);
}

void Depsgraph_updates_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_Depsgraph_updates;

    PropCollectionBeginFunc fn = rna_Depsgraph_updates_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = Depsgraph_updates_get(iter);
    }
}

void Depsgraph_updates_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_Depsgraph_ids_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = Depsgraph_updates_get(iter);
    }
}

void Depsgraph_updates_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_Depsgraph_ids_end;
    fn(iter);
}



void Depsgraph_debug_relations_graphviz_func(Depsgraph *_self, const char * filepath, int *dot_graph_num, const char * *dot_graph)
{
	rna_Depsgraph_debug_relations_graphviz(_self, filepath, dot_graph, dot_graph_num);
}

static void Depsgraph_debug_relations_graphviz_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Depsgraph *_self;
	const char * filepath;
	int *dot_graph_num;
	const char * *dot_graph;
	char *_data;
	
	_self = (Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	dot_graph_num = (int *)&((ParameterDynAlloc *)_data)->array_tot;
	dot_graph = ((const char * *)(&(((ParameterDynAlloc *)_data)->array)));
	
	rna_Depsgraph_debug_relations_graphviz(_self, filepath, dot_graph, dot_graph_num);
}

void Depsgraph_debug_stats_gnuplot_func(Depsgraph *_self, const char * filepath, const char * output_filepath)
{
	rna_Depsgraph_debug_stats_gnuplot(_self, filepath, output_filepath);
}

static void Depsgraph_debug_stats_gnuplot_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Depsgraph *_self;
	const char * filepath;
	const char * output_filepath;
	char *_data;
	
	_self = (Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	filepath = *((const char * *)_data);
	_data += 8;
	output_filepath = *((const char * *)_data);
	
	rna_Depsgraph_debug_stats_gnuplot(_self, filepath, output_filepath);
}

void Depsgraph_debug_tag_update_func(Depsgraph *_self)
{
	rna_Depsgraph_debug_tag_update(_self);
}

static void Depsgraph_debug_tag_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Depsgraph *_self;
	_self = (Depsgraph *)_ptr->data;
	
	rna_Depsgraph_debug_tag_update(_self);
}

void Depsgraph_debug_stats_func(Depsgraph *_self, char * result)
{
	rna_Depsgraph_debug_stats(_self, result);
}

static void Depsgraph_debug_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Depsgraph *_self;
	char * result;
	char *_data;
	
	_self = (Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	result = ((char * )_data);
	
	rna_Depsgraph_debug_stats(_self, result);
}

void Depsgraph_update_func(Depsgraph *_self, Main *bmain, ReportList *reports)
{
	rna_Depsgraph_update(_self, bmain, reports);
}

static void Depsgraph_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Depsgraph *_self;
	_self = (Depsgraph *)_ptr->data;
	
	rna_Depsgraph_update(_self, CTX_data_main(C), reports);
}

ID *Depsgraph_id_eval_get_func(Depsgraph *_self, ID *id)
{
	return rna_Depsgraph_id_eval_get(_self, id);
}

static void Depsgraph_id_eval_get_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Depsgraph *_self;
	ID *id;
	ID *id_eval;
	char *_data, *_retdata;
	
	_self = (Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	id = *((ID **)_data);
	_data += 8;
	_retdata = _data;
	
	id_eval = rna_Depsgraph_id_eval_get(_self, id);
	*((ID **)_retdata) = id_eval;
}

bool Depsgraph_id_type_updated_func(Depsgraph *_self, int id_type)
{
	return rna_Depsgraph_id_type_updated(_self, id_type);
}

static void Depsgraph_id_type_updated_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	Depsgraph *_self;
	int id_type;
	bool updated;
	char *_data, *_retdata;
	
	_self = (Depsgraph *)_ptr->data;
	_data = (char *)_parms->data;
	id_type = *((int *)_data);
	_data += 8;
	_retdata = _data;
	
	updated = rna_Depsgraph_id_type_updated(_self, id_type);
	*((bool *)_retdata) = updated;
}

/* Repeated prototypes to detect errors */

void rna_Depsgraph_debug_relations_graphviz(Depsgraph *_self, const char * filepath, int *dot_graph_num, const char * *dot_graph);
void rna_Depsgraph_debug_stats_gnuplot(Depsgraph *_self, const char * filepath, const char * output_filepath);
void rna_Depsgraph_debug_tag_update(Depsgraph *_self);
void rna_Depsgraph_debug_stats(Depsgraph *_self, char * result);
void rna_Depsgraph_update(Depsgraph *_self, Main *bmain, ReportList *reports);
ID *rna_Depsgraph_id_eval_get(Depsgraph *_self, ID *id);
bool rna_Depsgraph_id_type_updated(Depsgraph *_self, int id_type);

/* Dependency Graph Object Instance */
static CollectionPropertyRNA rna_DepsgraphObjectInstance_rna_properties_;
PropertyRNA &rna_DepsgraphObjectInstance_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_rna_properties_);

static PointerPropertyRNA rna_DepsgraphObjectInstance_rna_type_;
PropertyRNA &rna_DepsgraphObjectInstance_rna_type = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_rna_type_);

static PointerPropertyRNA rna_DepsgraphObjectInstance_object_;
PropertyRNA &rna_DepsgraphObjectInstance_object = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_object_);

static BoolPropertyRNA rna_DepsgraphObjectInstance_show_self_;
PropertyRNA &rna_DepsgraphObjectInstance_show_self = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_show_self_);

static BoolPropertyRNA rna_DepsgraphObjectInstance_show_particles_;
PropertyRNA &rna_DepsgraphObjectInstance_show_particles = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_show_particles_);

static BoolPropertyRNA rna_DepsgraphObjectInstance_is_instance_;
PropertyRNA &rna_DepsgraphObjectInstance_is_instance = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_is_instance_);

static PointerPropertyRNA rna_DepsgraphObjectInstance_instance_object_;
PropertyRNA &rna_DepsgraphObjectInstance_instance_object = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_instance_object_);

static PointerPropertyRNA rna_DepsgraphObjectInstance_parent_;
PropertyRNA &rna_DepsgraphObjectInstance_parent = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_parent_);

static PointerPropertyRNA rna_DepsgraphObjectInstance_particle_system_;
PropertyRNA &rna_DepsgraphObjectInstance_particle_system = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_particle_system_);

static IntPropertyRNA rna_DepsgraphObjectInstance_persistent_id_;
PropertyRNA &rna_DepsgraphObjectInstance_persistent_id = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_persistent_id_);

static IntPropertyRNA rna_DepsgraphObjectInstance_random_id_;
PropertyRNA &rna_DepsgraphObjectInstance_random_id = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_random_id_);

static FloatPropertyRNA rna_DepsgraphObjectInstance_matrix_world_;
PropertyRNA &rna_DepsgraphObjectInstance_matrix_world = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_matrix_world_);

static FloatPropertyRNA rna_DepsgraphObjectInstance_orco_;
PropertyRNA &rna_DepsgraphObjectInstance_orco = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_orco_);

static FloatPropertyRNA rna_DepsgraphObjectInstance_uv_;
PropertyRNA &rna_DepsgraphObjectInstance_uv = reinterpret_cast<PropertyRNA &>(rna_DepsgraphObjectInstance_uv_);

StructRNA *RNA_DepsgraphObjectInstance;
void register_struct_DepsgraphObjectInstance(BlenderRNA &brna)
{
	rna_DepsgraphObjectInstance_rna_properties_ = {
		{&rna_DepsgraphObjectInstance_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_rna_properties_begin, DepsgraphObjectInstance_rna_properties_next, DepsgraphObjectInstance_rna_properties_end, DepsgraphObjectInstance_rna_properties_get, nullptr, nullptr, DepsgraphObjectInstance_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DepsgraphObjectInstance_rna_type_ = {
		{&rna_DepsgraphObjectInstance_object, 	&rna_DepsgraphObjectInstance_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_DepsgraphObjectInstance_object_ = {
		{&rna_DepsgraphObjectInstance_show_self, 	&rna_DepsgraphObjectInstance_rna_type,
		-1, "object", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Evaluated object the iterator points to",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_object_get, nullptr, nullptr, nullptr,RNA_Object
	};

	rna_DepsgraphObjectInstance_show_self_ = {
		{&rna_DepsgraphObjectInstance_show_particles, 	&rna_DepsgraphObjectInstance_object,
		-1, "show_self", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Self",
		"The object geometry itself should be visible in the render",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_show_self_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DepsgraphObjectInstance_show_particles_ = {
		{&rna_DepsgraphObjectInstance_is_instance, 	&rna_DepsgraphObjectInstance_show_self,
		-1, "show_particles", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Show Particles",
		"Particles part of the object should be visible in the render",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_show_particles_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DepsgraphObjectInstance_is_instance_ = {
		{&rna_DepsgraphObjectInstance_instance_object, 	&rna_DepsgraphObjectInstance_show_particles,
		-1, "is_instance", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Is Instance",
		"Denotes if the object is generated by another object",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_is_instance_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DepsgraphObjectInstance_instance_object_ = {
		{&rna_DepsgraphObjectInstance_parent, 	&rna_DepsgraphObjectInstance_is_instance,
		-1, "instance_object", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Instance Object",
		"Evaluated object which is being instanced by this iterator",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_instance_object_get, nullptr, nullptr, nullptr,RNA_Object
	};

	rna_DepsgraphObjectInstance_parent_ = {
		{&rna_DepsgraphObjectInstance_particle_system, 	&rna_DepsgraphObjectInstance_instance_object,
		-1, "parent", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Parent",
		"If the object is an instance, the parent object that generated it",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_parent_get, nullptr, nullptr, nullptr,RNA_Object
	};

	rna_DepsgraphObjectInstance_particle_system_ = {
		{&rna_DepsgraphObjectInstance_persistent_id, 	&rna_DepsgraphObjectInstance_parent,
		-1, "particle_system", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Particle System",
		"Evaluated particle system that this object was instanced from",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_particle_system_get, nullptr, nullptr, nullptr,RNA_ParticleSystem
	};

	static int rna_DepsgraphObjectInstance_persistent_id_default[8] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	rna_DepsgraphObjectInstance_persistent_id_ = {
		{&rna_DepsgraphObjectInstance_random_id, 	&rna_DepsgraphObjectInstance_particle_system,
		-1, "persistent_id", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Persistent ID",
		"Persistent identifier for inter-frame matching of objects with motion blur",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {8, 0, 0}, 8,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, DepsgraphObjectInstance_persistent_id_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, -10000, 10000, INT_MIN, INT_MAX, 1, nullptr, nullptr, 0, rna_DepsgraphObjectInstance_persistent_id_default
	};

	rna_DepsgraphObjectInstance_random_id_ = {
		{&rna_DepsgraphObjectInstance_matrix_world, 	&rna_DepsgraphObjectInstance_persistent_id,
		-1, "random_id", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Instance Random ID",
		"Random id for this instance, typically for randomized shading",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphObjectInstance_random_id_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	static float rna_DepsgraphObjectInstance_matrix_world_default[16] = {
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
	rna_DepsgraphObjectInstance_matrix_world_ = {
		{&rna_DepsgraphObjectInstance_orco, 	&rna_DepsgraphObjectInstance_random_id,
		-1, "matrix_world", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Generated Matrix",
		"Generated transform matrix in world space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_MATRIX) | int(PROP_UNIT_NONE)), nullptr, 2, {4, 4, 0}, 16,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, DepsgraphObjectInstance_matrix_world_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_DepsgraphObjectInstance_matrix_world_default
	};

	static float rna_DepsgraphObjectInstance_orco_default[3] = {
		0.0f,
		0.0f,
		0.0f
	};
	rna_DepsgraphObjectInstance_orco_ = {
		{&rna_DepsgraphObjectInstance_uv, 	&rna_DepsgraphObjectInstance_matrix_world,
		-1, "orco", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Generated Coordinates",
		"Generated coordinates in parent object space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_TRANSLATION) | int(PROP_UNIT_LENGTH)), nullptr, 1, {3, 0, 0}, 3,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, DepsgraphObjectInstance_orco_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_DepsgraphObjectInstance_orco_default
	};

	static float rna_DepsgraphObjectInstance_uv_default[2] = {
		0.0f,
		0.0f
	};
	rna_DepsgraphObjectInstance_uv_ = {
		{nullptr, 	&rna_DepsgraphObjectInstance_orco,
		-1, "uv", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "UV Coordinates",
		"UV coordinates in parent object space",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 1, {2, 0, 0}, 2,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, DepsgraphObjectInstance_uv_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, nullptr, nullptr, 0.0f, rna_DepsgraphObjectInstance_uv_default
	};

	StructRNA *srna = RNA_DepsgraphObjectInstance;
	srna->cont.properties = {&rna_DepsgraphObjectInstance_rna_properties, &rna_DepsgraphObjectInstance_uv};
	srna->identifier = "DepsgraphObjectInstance";
	srna->flag = 516;
	srna->name = "Dependency Graph Object Instance";
	srna->description = "Extended information about dependency graph object iterator (Warning: All data here is \'evaluated\' one, not original .blend IDs)";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_DepsgraphObjectInstance_rna_properties;
	srna->instance = rna_DepsgraphIterator_instance;
};

/* Dependency Graph Update */
static CollectionPropertyRNA rna_DepsgraphUpdate_rna_properties_;
PropertyRNA &rna_DepsgraphUpdate_rna_properties = reinterpret_cast<PropertyRNA &>(rna_DepsgraphUpdate_rna_properties_);

static PointerPropertyRNA rna_DepsgraphUpdate_rna_type_;
PropertyRNA &rna_DepsgraphUpdate_rna_type = reinterpret_cast<PropertyRNA &>(rna_DepsgraphUpdate_rna_type_);

static PointerPropertyRNA rna_DepsgraphUpdate_id_;
PropertyRNA &rna_DepsgraphUpdate_id = reinterpret_cast<PropertyRNA &>(rna_DepsgraphUpdate_id_);

static BoolPropertyRNA rna_DepsgraphUpdate_is_updated_transform_;
PropertyRNA &rna_DepsgraphUpdate_is_updated_transform = reinterpret_cast<PropertyRNA &>(rna_DepsgraphUpdate_is_updated_transform_);

static BoolPropertyRNA rna_DepsgraphUpdate_is_updated_geometry_;
PropertyRNA &rna_DepsgraphUpdate_is_updated_geometry = reinterpret_cast<PropertyRNA &>(rna_DepsgraphUpdate_is_updated_geometry_);

static BoolPropertyRNA rna_DepsgraphUpdate_is_updated_shading_;
PropertyRNA &rna_DepsgraphUpdate_is_updated_shading = reinterpret_cast<PropertyRNA &>(rna_DepsgraphUpdate_is_updated_shading_);

StructRNA *RNA_DepsgraphUpdate;
void register_struct_DepsgraphUpdate(BlenderRNA &brna)
{
	rna_DepsgraphUpdate_rna_properties_ = {
		{&rna_DepsgraphUpdate_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphUpdate_rna_properties_begin, DepsgraphUpdate_rna_properties_next, DepsgraphUpdate_rna_properties_end, DepsgraphUpdate_rna_properties_get, nullptr, nullptr, DepsgraphUpdate_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_DepsgraphUpdate_rna_type_ = {
		{&rna_DepsgraphUpdate_id, 	&rna_DepsgraphUpdate_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphUpdate_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_DepsgraphUpdate_id_ = {
		{&rna_DepsgraphUpdate_is_updated_transform, 	&rna_DepsgraphUpdate_rna_type,
		-1, "id", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "ID",
		"Updated data-block",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphUpdate_id_get, nullptr, nullptr, nullptr,RNA_ID
	};

	rna_DepsgraphUpdate_is_updated_transform_ = {
		{&rna_DepsgraphUpdate_is_updated_geometry, 	&rna_DepsgraphUpdate_id,
		-1, "is_updated_transform", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Transform",
		"Object transformation is updated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphUpdate_is_updated_transform_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DepsgraphUpdate_is_updated_geometry_ = {
		{&rna_DepsgraphUpdate_is_updated_shading, 	&rna_DepsgraphUpdate_is_updated_transform,
		-1, "is_updated_geometry", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Geometry",
		"Object geometry is updated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphUpdate_is_updated_geometry_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_DepsgraphUpdate_is_updated_shading_ = {
		{nullptr, 	&rna_DepsgraphUpdate_is_updated_geometry,
		-1, "is_updated_shading", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Shading",
		"Object shading is updated",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		DepsgraphUpdate_is_updated_shading_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_DepsgraphUpdate;
	srna->cont.properties = {&rna_DepsgraphUpdate_rna_properties, &rna_DepsgraphUpdate_is_updated_shading};
	srna->identifier = "DepsgraphUpdate";
	srna->flag = 516;
	srna->name = "Dependency Graph Update";
	srna->description = "Information about ID that was updated";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_DepsgraphUpdate_rna_properties;
};

/* Dependency Graph */
static CollectionPropertyRNA rna_Depsgraph_rna_properties_;
PropertyRNA &rna_Depsgraph_rna_properties = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_rna_properties_);

static PointerPropertyRNA rna_Depsgraph_rna_type_;
PropertyRNA &rna_Depsgraph_rna_type = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_rna_type_);

static EnumPropertyRNA rna_Depsgraph_mode_;
PropertyRNA &rna_Depsgraph_mode = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_mode_);

static PointerPropertyRNA rna_Depsgraph_scene_;
PropertyRNA &rna_Depsgraph_scene = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_scene_);

static PointerPropertyRNA rna_Depsgraph_view_layer_;
PropertyRNA &rna_Depsgraph_view_layer = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_view_layer_);

static PointerPropertyRNA rna_Depsgraph_scene_eval_;
PropertyRNA &rna_Depsgraph_scene_eval = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_scene_eval_);

static PointerPropertyRNA rna_Depsgraph_view_layer_eval_;
PropertyRNA &rna_Depsgraph_view_layer_eval = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_view_layer_eval_);

static CollectionPropertyRNA rna_Depsgraph_ids_;
PropertyRNA &rna_Depsgraph_ids = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_ids_);

static CollectionPropertyRNA rna_Depsgraph_objects_;
PropertyRNA &rna_Depsgraph_objects = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_objects_);

static CollectionPropertyRNA rna_Depsgraph_object_instances_;
PropertyRNA &rna_Depsgraph_object_instances = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_object_instances_);

static CollectionPropertyRNA rna_Depsgraph_updates_;
PropertyRNA &rna_Depsgraph_updates = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_updates_);

static StringPropertyRNA rna_Depsgraph_debug_relations_graphviz_filepath_;
PropertyRNA &rna_Depsgraph_debug_relations_graphviz_filepath = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_debug_relations_graphviz_filepath_);

static StringPropertyRNA rna_Depsgraph_debug_relations_graphviz_dot_graph_;
PropertyRNA &rna_Depsgraph_debug_relations_graphviz_dot_graph = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_debug_relations_graphviz_dot_graph_);

FunctionRNA *rna_Depsgraph_debug_relations_graphviz_func;
static StringPropertyRNA rna_Depsgraph_debug_stats_gnuplot_filepath_;
PropertyRNA &rna_Depsgraph_debug_stats_gnuplot_filepath = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_debug_stats_gnuplot_filepath_);

static StringPropertyRNA rna_Depsgraph_debug_stats_gnuplot_output_filepath_;
PropertyRNA &rna_Depsgraph_debug_stats_gnuplot_output_filepath = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_debug_stats_gnuplot_output_filepath_);

FunctionRNA *rna_Depsgraph_debug_stats_gnuplot_func;
FunctionRNA *rna_Depsgraph_debug_tag_update_func;
static StringPropertyRNA rna_Depsgraph_debug_stats_result_;
PropertyRNA &rna_Depsgraph_debug_stats_result = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_debug_stats_result_);

FunctionRNA *rna_Depsgraph_debug_stats_func;
FunctionRNA *rna_Depsgraph_update_func;
static PointerPropertyRNA rna_Depsgraph_id_eval_get_id_;
PropertyRNA &rna_Depsgraph_id_eval_get_id = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_id_eval_get_id_);

static PointerPropertyRNA rna_Depsgraph_id_eval_get_id_eval_;
PropertyRNA &rna_Depsgraph_id_eval_get_id_eval = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_id_eval_get_id_eval_);

FunctionRNA *rna_Depsgraph_id_eval_get_func;
static EnumPropertyRNA rna_Depsgraph_id_type_updated_id_type_;
PropertyRNA &rna_Depsgraph_id_type_updated_id_type = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_id_type_updated_id_type_);

static BoolPropertyRNA rna_Depsgraph_id_type_updated_updated_;
PropertyRNA &rna_Depsgraph_id_type_updated_updated = reinterpret_cast<PropertyRNA &>(rna_Depsgraph_id_type_updated_updated_);

FunctionRNA *rna_Depsgraph_id_type_updated_func;
StructRNA *RNA_Depsgraph;
void register_struct_Depsgraph(BlenderRNA &brna)
{
	rna_Depsgraph_rna_properties_ = {
		{&rna_Depsgraph_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_rna_properties_begin, Depsgraph_rna_properties_next, Depsgraph_rna_properties_end, Depsgraph_rna_properties_get, nullptr, nullptr, Depsgraph_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_Depsgraph_rna_type_ = {
		{&rna_Depsgraph_mode, 	&rna_Depsgraph_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	static const EnumPropertyItem rna_Depsgraph_mode_items[3] = {
		{0, "VIEWPORT", 0, "Viewport", "Viewport non-rendered mode"	},
		{1, "RENDER", 0, "Render", "Render"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_Depsgraph_mode_ = {
		{&rna_Depsgraph_scene, 	&rna_Depsgraph_rna_type,
		-1, "mode", 2, 0, 0, 0, 0, PropertyPathTemplateType(0), "Mode",
		"Evaluation mode",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_mode_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_Depsgraph_mode_items, 2, 0
	};

	rna_Depsgraph_scene_ = {
		{&rna_Depsgraph_view_layer, 	&rna_Depsgraph_mode,
		-1, "scene", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scene",
		"Original scene dependency graph is built for",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_scene_get, nullptr, nullptr, nullptr,RNA_Scene
	};

	rna_Depsgraph_view_layer_ = {
		{&rna_Depsgraph_scene_eval, 	&rna_Depsgraph_scene,
		-1, "view_layer", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "View Layer",
		"Original view layer dependency graph is built for",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_view_layer_get, nullptr, nullptr, nullptr,RNA_ViewLayer
	};

	rna_Depsgraph_scene_eval_ = {
		{&rna_Depsgraph_view_layer_eval, 	&rna_Depsgraph_view_layer,
		-1, "scene_eval", 8388736, 0, 0, 0, 0, PropertyPathTemplateType(0), "Scene",
		"Scene at its evaluated state",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_scene_eval_get, nullptr, nullptr, nullptr,RNA_Scene
	};

	rna_Depsgraph_view_layer_eval_ = {
		{&rna_Depsgraph_ids, 	&rna_Depsgraph_scene_eval,
		-1, "view_layer_eval", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "View Layer",
		"View layer at its evaluated state",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_view_layer_eval_get, nullptr, nullptr, nullptr,RNA_ViewLayer
	};

	rna_Depsgraph_ids_ = {
		{&rna_Depsgraph_objects, 	&rna_Depsgraph_view_layer_eval,
		-1, "ids", 524416, 0, 0, 0, 0, PropertyPathTemplateType(0), "IDs",
		"All evaluated data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_ids_begin, Depsgraph_ids_next, Depsgraph_ids_end, Depsgraph_ids_get, nullptr, nullptr, nullptr, nullptr, RNA_ID
	};

	rna_Depsgraph_objects_ = {
		{&rna_Depsgraph_object_instances, 	&rna_Depsgraph_ids,
		-1, "objects", 524416, 0, 0, 0, 0, PropertyPathTemplateType(0), "Objects",
		"Evaluated objects in the dependency graph",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_objects_begin, Depsgraph_objects_next, Depsgraph_objects_end, Depsgraph_objects_get, nullptr, nullptr, nullptr, nullptr, RNA_Object
	};

	rna_Depsgraph_object_instances_ = {
		{&rna_Depsgraph_updates, 	&rna_Depsgraph_objects,
		-1, "object_instances", 524288, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object Instances",
		"All object instances to display or render (Warning: Only use this as an iterator, never as a sequence, and do not keep any references to its items)",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_object_instances_begin, Depsgraph_object_instances_next, Depsgraph_object_instances_end, Depsgraph_object_instances_get, nullptr, nullptr, nullptr, nullptr, RNA_DepsgraphObjectInstance
	};

	rna_Depsgraph_updates_ = {
		{nullptr, 	&rna_Depsgraph_object_instances,
		-1, "updates", 524288, 0, 0, 0, 0, PropertyPathTemplateType(0), "Updates",
		"Updates to data-blocks",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		Depsgraph_updates_begin, Depsgraph_updates_next, Depsgraph_updates_end, Depsgraph_updates_get, nullptr, nullptr, nullptr, nullptr, RNA_DepsgraphUpdate
	};

	StructRNA *srna = RNA_Depsgraph;
	srna->cont.properties = {&rna_Depsgraph_rna_properties, &rna_Depsgraph_updates};
	srna->identifier = "Depsgraph";
	srna->flag = 516;
	srna->name = "Dependency Graph";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_Depsgraph_rna_properties;
	{
	rna_Depsgraph_debug_relations_graphviz_filepath_ = {
		{&rna_Depsgraph_debug_relations_graphviz_dot_graph, 	nullptr,
		-1, "filepath", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "File Name",
		"Optional output path for the graphviz debug file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};
	rna_Depsgraph_debug_relations_graphviz_dot_graph_ = {
		{nullptr, 	&rna_Depsgraph_debug_relations_graphviz_filepath,
		-1, "dot_graph", 131073, 0, 2, 0, 0, PropertyPathTemplateType(0), "Dot Graph",
		"Graph in dot format",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 2147483647, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Depsgraph_debug_relations_graphviz_filepath, &rna_Depsgraph_debug_relations_graphviz_dot_graph};
		func->identifier = "debug_relations_graphviz";
		func->description = "debug_relations_graphviz";
		func->call = Depsgraph_debug_relations_graphviz_call;
		rna_Depsgraph_debug_relations_graphviz_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Depsgraph_debug_stats_gnuplot_filepath_ = {
		{&rna_Depsgraph_debug_stats_gnuplot_output_filepath, 	nullptr,
		-1, "filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "File Name",
		"Output path for the gnuplot debug file",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};
	rna_Depsgraph_debug_stats_gnuplot_output_filepath_ = {
		{nullptr, 	&rna_Depsgraph_debug_stats_gnuplot_filepath,
		-1, "output_filepath", 262145, 0, 1, 0, 0, PropertyPathTemplateType(0), "Output File Name",
		"File name where gnuplot script will save the result",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_FILEPATH) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 1024, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Depsgraph_debug_stats_gnuplot_filepath, &rna_Depsgraph_debug_stats_gnuplot_output_filepath};
		func->identifier = "debug_stats_gnuplot";
		func->description = "debug_stats_gnuplot";
		func->call = Depsgraph_debug_stats_gnuplot_call;
		rna_Depsgraph_debug_stats_gnuplot_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "debug_tag_update";
		func->description = "debug_tag_update";
		func->call = Depsgraph_debug_tag_update_call;
		rna_Depsgraph_debug_tag_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Depsgraph_debug_stats_result_ = {
		{nullptr, 	nullptr,
		-1, "result", 8650753, 0, 2, 0, 0, PropertyPathTemplateType(0), "result",
		"",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 16384, ""
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Depsgraph_debug_stats_result, &rna_Depsgraph_debug_stats_result};
		func->identifier = "debug_stats";
		func->description = "Report the number of elements in the Dependency Graph";
		func->call = Depsgraph_debug_stats_call;
		rna_Depsgraph_debug_stats_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
		auto func = std::make_unique<FunctionRNA>();
		func->identifier = "update";
		func->flag = 20;
		func->description = "Re-evaluate any modified data-blocks, for example for animation or modifiers. This invalidates all references to evaluated data-blocks from this dependency graph.";
		func->call = Depsgraph_update_call;
		rna_Depsgraph_update_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Depsgraph_id_eval_get_id_ = {
		{&rna_Depsgraph_id_eval_get_id_eval, 	nullptr,
		-1, "id", 8388736, 0, 1, 0, 0, PropertyPathTemplateType(0), "",
		"Original ID to get evaluated complementary part for",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
	rna_Depsgraph_id_eval_get_id_eval_ = {
		{nullptr, 	&rna_Depsgraph_id_eval_get_id,
		-1, "id_eval", 8388736, 0, 2, 0, 0, PropertyPathTemplateType(0), "",
		"Evaluated ID for the given original one",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr,RNA_ID
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Depsgraph_id_eval_get_id, &rna_Depsgraph_id_eval_get_id_eval};
		func->identifier = "id_eval_get";
		func->description = "id_eval_get";
		func->call = Depsgraph_id_eval_get_call;
		func->c_ret = &rna_Depsgraph_id_eval_get_id_eval;
		rna_Depsgraph_id_eval_get_func = func.get();
		srna->functions.append(std::move(func));
	}
	{
	rna_Depsgraph_id_type_updated_id_type_ = {
		{&rna_Depsgraph_id_type_updated_updated, 	nullptr,
		-1, "id_type", 3, 0, 1, 0, 0, PropertyPathTemplateType(0), "ID Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_id_type_items, 39, 17217
	};
	rna_Depsgraph_id_type_updated_updated_ = {
		{nullptr, 	&rna_Depsgraph_id_type_updated_id_type,
		-1, "updated", 3, 0, 2, 0, 0, PropertyPathTemplateType(0), "Updated",
		"True if any data-block with this type was added, updated or removed",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};
		auto func = std::make_unique<FunctionRNA>();
		func->cont.properties = {&rna_Depsgraph_id_type_updated_id_type, &rna_Depsgraph_id_type_updated_updated};
		func->identifier = "id_type_updated";
		func->description = "id_type_updated";
		func->call = Depsgraph_id_type_updated_call;
		func->c_ret = &rna_Depsgraph_id_type_updated_updated;
		rna_Depsgraph_id_type_updated_func = func.get();
		srna->functions.append(std::move(func));
	}
};


}  // namespace blender
