
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

#include "rna_boid.cc"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Auto-generated Functions. */

namespace blender {


extern PropertyRNA &rna_BoidRule_rna_properties;
extern PropertyRNA &rna_BoidRule_rna_type;
extern PropertyRNA &rna_BoidRule_name;
extern PropertyRNA &rna_BoidRule_type;
extern PropertyRNA &rna_BoidRule_use_in_air;
extern PropertyRNA &rna_BoidRule_use_on_land;


extern PropertyRNA &rna_BoidRule_rna_properties;
extern PropertyRNA &rna_BoidRule_rna_type;
extern PropertyRNA &rna_BoidRule_name;
extern PropertyRNA &rna_BoidRule_type;
extern PropertyRNA &rna_BoidRule_use_in_air;
extern PropertyRNA &rna_BoidRule_use_on_land;

extern PropertyRNA &rna_BoidRuleGoal_object;
extern PropertyRNA &rna_BoidRuleGoal_use_predict;


extern PropertyRNA &rna_BoidRule_rna_properties;
extern PropertyRNA &rna_BoidRule_rna_type;
extern PropertyRNA &rna_BoidRule_name;
extern PropertyRNA &rna_BoidRule_type;
extern PropertyRNA &rna_BoidRule_use_in_air;
extern PropertyRNA &rna_BoidRule_use_on_land;

extern PropertyRNA &rna_BoidRuleAvoid_object;
extern PropertyRNA &rna_BoidRuleAvoid_use_predict;
extern PropertyRNA &rna_BoidRuleAvoid_fear_factor;


extern PropertyRNA &rna_BoidRule_rna_properties;
extern PropertyRNA &rna_BoidRule_rna_type;
extern PropertyRNA &rna_BoidRule_name;
extern PropertyRNA &rna_BoidRule_type;
extern PropertyRNA &rna_BoidRule_use_in_air;
extern PropertyRNA &rna_BoidRule_use_on_land;

extern PropertyRNA &rna_BoidRuleAvoidCollision_use_avoid;
extern PropertyRNA &rna_BoidRuleAvoidCollision_use_avoid_collision;
extern PropertyRNA &rna_BoidRuleAvoidCollision_look_ahead;


extern PropertyRNA &rna_BoidRule_rna_properties;
extern PropertyRNA &rna_BoidRule_rna_type;
extern PropertyRNA &rna_BoidRule_name;
extern PropertyRNA &rna_BoidRule_type;
extern PropertyRNA &rna_BoidRule_use_in_air;
extern PropertyRNA &rna_BoidRule_use_on_land;

extern PropertyRNA &rna_BoidRuleFollowLeader_object;
extern PropertyRNA &rna_BoidRuleFollowLeader_distance;
extern PropertyRNA &rna_BoidRuleFollowLeader_queue_count;
extern PropertyRNA &rna_BoidRuleFollowLeader_use_line;


extern PropertyRNA &rna_BoidRule_rna_properties;
extern PropertyRNA &rna_BoidRule_rna_type;
extern PropertyRNA &rna_BoidRule_name;
extern PropertyRNA &rna_BoidRule_type;
extern PropertyRNA &rna_BoidRule_use_in_air;
extern PropertyRNA &rna_BoidRule_use_on_land;

extern PropertyRNA &rna_BoidRuleAverageSpeed_wander;
extern PropertyRNA &rna_BoidRuleAverageSpeed_level;
extern PropertyRNA &rna_BoidRuleAverageSpeed_speed;


extern PropertyRNA &rna_BoidRule_rna_properties;
extern PropertyRNA &rna_BoidRule_rna_type;
extern PropertyRNA &rna_BoidRule_name;
extern PropertyRNA &rna_BoidRule_type;
extern PropertyRNA &rna_BoidRule_use_in_air;
extern PropertyRNA &rna_BoidRule_use_on_land;

extern PropertyRNA &rna_BoidRuleFight_distance;
extern PropertyRNA &rna_BoidRuleFight_flee_distance;


extern PropertyRNA &rna_BoidState_rna_properties;
extern PropertyRNA &rna_BoidState_rna_type;
extern PropertyRNA &rna_BoidState_name;
extern PropertyRNA &rna_BoidState_ruleset_type;
extern PropertyRNA &rna_BoidState_rules;
extern PropertyRNA &rna_BoidState_active_boid_rule;
extern PropertyRNA &rna_BoidState_active_boid_rule_index;
extern PropertyRNA &rna_BoidState_rule_fuzzy;
extern PropertyRNA &rna_BoidState_volume;
extern PropertyRNA &rna_BoidState_falloff;


extern PropertyRNA &rna_BoidSettings_rna_properties;
extern PropertyRNA &rna_BoidSettings_rna_type;
extern PropertyRNA &rna_BoidSettings_land_smooth;
extern PropertyRNA &rna_BoidSettings_bank;
extern PropertyRNA &rna_BoidSettings_pitch;
extern PropertyRNA &rna_BoidSettings_height;
extern PropertyRNA &rna_BoidSettings_states;
extern PropertyRNA &rna_BoidSettings_active_boid_state;
extern PropertyRNA &rna_BoidSettings_active_boid_state_index;
extern PropertyRNA &rna_BoidSettings_health;
extern PropertyRNA &rna_BoidSettings_strength;
extern PropertyRNA &rna_BoidSettings_aggression;
extern PropertyRNA &rna_BoidSettings_accuracy;
extern PropertyRNA &rna_BoidSettings_range;
extern PropertyRNA &rna_BoidSettings_air_speed_min;
extern PropertyRNA &rna_BoidSettings_air_speed_max;
extern PropertyRNA &rna_BoidSettings_air_acc_max;
extern PropertyRNA &rna_BoidSettings_air_ave_max;
extern PropertyRNA &rna_BoidSettings_air_personal_space;
extern PropertyRNA &rna_BoidSettings_land_jump_speed;
extern PropertyRNA &rna_BoidSettings_land_speed_max;
extern PropertyRNA &rna_BoidSettings_land_acc_max;
extern PropertyRNA &rna_BoidSettings_land_ave_max;
extern PropertyRNA &rna_BoidSettings_land_personal_space;
extern PropertyRNA &rna_BoidSettings_land_stick_force;
extern PropertyRNA &rna_BoidSettings_use_flight;
extern PropertyRNA &rna_BoidSettings_use_land;
extern PropertyRNA &rna_BoidSettings_use_climb;

static PointerRNA BoidRule_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BoidRule_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoidRule_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidRule_rna_properties_get(iter);
    }
}

void BoidRule_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoidRule_rna_properties_get(iter);
    }
}

void BoidRule_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoidRule_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BoidRule_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void BoidRule_name_get(PointerRNA *ptr, char *value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    BLI_assert(strlen(data->name) < 32);
    strcpy(value, data->name);
}

int BoidRule_name_length(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return strlen(data->name);
}

void BoidRule_name_set(PointerRNA *ptr, const char *value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 32);
}

int BoidRule_type_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return (int)(data->type);
}

bool BoidRule_use_in_air_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return ((uint64_t(data->flag) & 4) != 0);
}

void BoidRule_use_in_air_set(PointerRNA *ptr, bool value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 4); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(4)); }
}

bool BoidRule_use_on_land_get(PointerRNA *ptr)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    return ((uint64_t(data->flag) & 8) != 0);
}

void BoidRule_use_on_land_set(PointerRNA *ptr, bool value)
{
    BoidRule *data = (BoidRule *)(ptr->data);
    if (value) { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) | 8); }
    else { data->flag = std::remove_reference_t<decltype(data->flag)>(uint64_t(data->flag) & ~uint64_t(8)); }
}

PointerRNA BoidRuleGoal_object_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->ob);
}

void BoidRuleGoal_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob = value.data;
}

bool BoidRuleGoal_use_predict_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return ((uint64_t(data->options) & 1) != 0);
}

void BoidRuleGoal_use_predict_set(PointerRNA *ptr, bool value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 1); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(1)); }
}

PointerRNA BoidRuleAvoid_object_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->ob);
}

void BoidRuleAvoid_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob = value.data;
}

bool BoidRuleAvoid_use_predict_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return ((uint64_t(data->options) & 1) != 0);
}

void BoidRuleAvoid_use_predict_set(PointerRNA *ptr, bool value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 1); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(1)); }
}

float BoidRuleAvoid_fear_factor_get(PointerRNA *ptr)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    return (float)(data->fear_factor);
}

void BoidRuleAvoid_fear_factor_set(PointerRNA *ptr, float value)
{
    BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
    data->fear_factor = (std::remove_reference_t<decltype(data->fear_factor)>)std::clamp(value, 0.0f, 100.0f);
}

bool BoidRuleAvoidCollision_use_avoid_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return ((uint64_t(data->options) & 1) != 0);
}

void BoidRuleAvoidCollision_use_avoid_set(PointerRNA *ptr, bool value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 1); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(1)); }
}

bool BoidRuleAvoidCollision_use_avoid_collision_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return ((uint64_t(data->options) & 2) != 0);
}

void BoidRuleAvoidCollision_use_avoid_collision_set(PointerRNA *ptr, bool value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 2); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(2)); }
}

float BoidRuleAvoidCollision_look_ahead_get(PointerRNA *ptr)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    return (float)(data->look_ahead);
}

void BoidRuleAvoidCollision_look_ahead_set(PointerRNA *ptr, float value)
{
    BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
    data->look_ahead = (std::remove_reference_t<decltype(data->look_ahead)>)std::clamp(value, 0.0f, 100.0f);
}

PointerRNA BoidRuleFollowLeader_object_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return RNA_pointer_create_with_parent(*ptr, RNA_Object, data->ob);
}

void BoidRuleFollowLeader_object_set(PointerRNA *ptr, PointerRNA value, ReportList *reports)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    if (value.data && ptr->owner_id && value.owner_id && !BKE_id_can_use_id(*ptr->owner_id, *value.owner_id)) {
      return;
    }
    if (value.data) {
        id_lib_extern((ID *)value.data);
    }
    *(void **)&data->ob = value.data;
}

float BoidRuleFollowLeader_distance_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return (float)(data->distance);
}

void BoidRuleFollowLeader_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    data->distance = (std::remove_reference_t<decltype(data->distance)>)std::clamp(value, 0.0f, 100.0f);
}

int BoidRuleFollowLeader_queue_count_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return (int)(data->queue_size);
}

void BoidRuleFollowLeader_queue_count_set(PointerRNA *ptr, int value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    data->queue_size = (std::remove_reference_t<decltype(data->queue_size)>)std::clamp(value, 0, 100);
}

bool BoidRuleFollowLeader_use_line_get(PointerRNA *ptr)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    return ((uint64_t(data->options) & 1) != 0);
}

void BoidRuleFollowLeader_use_line_set(PointerRNA *ptr, bool value)
{
    BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 1); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(1)); }
}

float BoidRuleAverageSpeed_wander_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->wander);
}

void BoidRuleAverageSpeed_wander_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    data->wander = (std::remove_reference_t<decltype(data->wander)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidRuleAverageSpeed_level_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->level);
}

void BoidRuleAverageSpeed_level_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    data->level = (std::remove_reference_t<decltype(data->level)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidRuleAverageSpeed_speed_get(PointerRNA *ptr)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    return (float)(data->speed);
}

void BoidRuleAverageSpeed_speed_set(PointerRNA *ptr, float value)
{
    BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
    data->speed = (std::remove_reference_t<decltype(data->speed)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidRuleFight_distance_get(PointerRNA *ptr)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    return (float)(data->distance);
}

void BoidRuleFight_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    data->distance = (std::remove_reference_t<decltype(data->distance)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidRuleFight_flee_distance_get(PointerRNA *ptr)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    return (float)(data->flee_distance);
}

void BoidRuleFight_flee_distance_set(PointerRNA *ptr, float value)
{
    BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
    data->flee_distance = (std::remove_reference_t<decltype(data->flee_distance)>)std::clamp(value, 0.0f, 100.0f);
}

static PointerRNA BoidState_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BoidState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoidState_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidState_rna_properties_get(iter);
    }
}

void BoidState_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoidState_rna_properties_get(iter);
    }
}

void BoidState_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoidState_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BoidState_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

void BoidState_name_get(PointerRNA *ptr, char *value)
{
    BoidState *data = (BoidState *)(ptr->data);
    BLI_assert(strlen(data->name) < 32);
    strcpy(value, data->name);
}

int BoidState_name_length(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return strlen(data->name);
}

void BoidState_name_set(PointerRNA *ptr, const char *value)
{
    BoidState *data = (BoidState *)(ptr->data);
    BLI_strncpy_utf8(data->name, value, 32);
}

int BoidState_ruleset_type_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (int)(data->ruleset_type);
}

void BoidState_ruleset_type_set(PointerRNA *ptr, int value)
{
    BoidState *data = (BoidState *)(ptr->data);
    data->ruleset_type = (std::remove_reference_t<decltype(data->ruleset_type)>)value;
}

static PointerRNA BoidState_rules_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_BoidRule, rna_iterator_listbase_get(iter));
}

void BoidState_rules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoidState_rules;

    rna_iterator_listbase_begin(iter, ptr, &data->rules, nullptr);

    if (iter->valid) {
        iter->ptr = BoidState_rules_get(iter);
    }
}

void BoidState_rules_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoidState_rules_get(iter);
    }
}

void BoidState_rules_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoidState_rules_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BoidState_rules_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoidState_rules_get(&iter); }
    }

    BoidState_rules_end(&iter);

    return found;
}

int BoidRule_name_length(PointerRNA *);
void BoidRule_name_get(PointerRNA *, char *);

bool BoidState_rules_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    BoidState_rules_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = BoidRule_name_length(&iter.ptr);
            if (namelen < 1024) {
                BoidRule_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                BoidRule_name_get(&iter.ptr, name);
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
        BoidState_rules_next(&iter);
    }
    BoidState_rules_end(&iter);

    return found;
}

PointerRNA BoidState_active_boid_rule_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_BoidState_active_boid_rule_get;
    return fn(ptr);
}

int BoidState_active_boid_rule_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_BoidState_active_boid_rule_index_get;
    return fn(ptr);
}

void BoidState_active_boid_rule_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_BoidState_active_boid_rule_index_set;
    fn(ptr, value);
}

float BoidState_rule_fuzzy_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->rule_fuzziness);
}

void BoidState_rule_fuzzy_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
    data->rule_fuzziness = (std::remove_reference_t<decltype(data->rule_fuzziness)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidState_volume_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->volume);
}

void BoidState_volume_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
    data->volume = (std::remove_reference_t<decltype(data->volume)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidState_falloff_get(PointerRNA *ptr)
{
    BoidState *data = (BoidState *)(ptr->data);
    return (float)(data->falloff);
}

void BoidState_falloff_set(PointerRNA *ptr, float value)
{
    BoidState *data = (BoidState *)(ptr->data);
    data->falloff = (std::remove_reference_t<decltype(data->falloff)>)std::clamp(value, 0.0f, 10.0f);
}

static PointerRNA BoidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
    PropCollectionGetFunc fn = rna_builtin_properties_get;
    return fn(iter);
}

void BoidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoidSettings_rna_properties;

    PropCollectionBeginFunc fn = rna_builtin_properties_begin;
    fn(iter, ptr);

    if (iter->valid) {
        iter->ptr = BoidSettings_rna_properties_get(iter);
    }
}

void BoidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_builtin_properties_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoidSettings_rna_properties_get(iter);
    }
}

void BoidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoidSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    PropCollectionLookupStringFunc fn = rna_builtin_properties_lookup_string;
    return fn(ptr, key, r_ptr);
}

PointerRNA BoidSettings_rna_type_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_builtin_type_get;
    return fn(ptr);
}

float BoidSettings_land_smooth_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->landing_smoothness);
}

void BoidSettings_land_smooth_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->landing_smoothness = (std::remove_reference_t<decltype(data->landing_smoothness)>)std::clamp(value, 0.0f, 10.0f);
}

float BoidSettings_bank_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->banking);
}

void BoidSettings_bank_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->banking = (std::remove_reference_t<decltype(data->banking)>)std::clamp(value, 0.0f, 2.0f);
}

float BoidSettings_pitch_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->pitch);
}

void BoidSettings_pitch_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->pitch = (std::remove_reference_t<decltype(data->pitch)>)std::clamp(value, 0.0f, 2.0f);
}

float BoidSettings_height_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->height);
}

void BoidSettings_height_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->height = (std::remove_reference_t<decltype(data->height)>)std::clamp(value, 0.0f, 2.0f);
}

static PointerRNA BoidSettings_states_get(CollectionPropertyIterator *iter)
{
    return RNA_pointer_create_with_parent(iter->parent, RNA_BoidState, rna_iterator_listbase_get(iter));
}

void BoidSettings_states_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);

    *iter = {};
    iter->parent = *ptr;
    iter->prop = &rna_BoidSettings_states;

    rna_iterator_listbase_begin(iter, ptr, &data->states, nullptr);

    if (iter->valid) {
        iter->ptr = BoidSettings_states_get(iter);
    }
}

void BoidSettings_states_next(CollectionPropertyIterator *iter)
{
    PropCollectionNextFunc fn = rna_iterator_listbase_next;
    fn(iter);

    if (iter->valid) {
        iter->ptr = BoidSettings_states_get(iter);
    }
}

void BoidSettings_states_end(CollectionPropertyIterator *iter)
{
    PropCollectionEndFunc fn = rna_iterator_listbase_end;
    fn(iter);
}

bool BoidSettings_states_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;

    BoidSettings_states_begin(&iter, ptr);

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
        if (found) { *r_ptr = BoidSettings_states_get(&iter); }
    }

    BoidSettings_states_end(&iter);

    return found;
}

int BoidState_name_length(PointerRNA *);
void BoidState_name_get(PointerRNA *, char *);

bool BoidSettings_states_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
    bool found = false;
    CollectionPropertyIterator iter;
    char namebuf[1024];
    char *name;

    BoidSettings_states_begin(&iter, ptr);

    while (iter.valid) {
        if (iter.ptr.data) {
            int namelen = BoidState_name_length(&iter.ptr);
            if (namelen < 1024) {
                BoidState_name_get(&iter.ptr, namebuf);
                if (strcmp(namebuf, key) == 0) {
                    found = true;
                    *r_ptr = iter.ptr;
                    break;
                }
            }
            else {
                name = MEM_new_array_uninitialized<char>(size_t(namelen) + 1,
                                               "name string");
                BoidState_name_get(&iter.ptr, name);
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
        BoidSettings_states_next(&iter);
    }
    BoidSettings_states_end(&iter);

    return found;
}

PointerRNA BoidSettings_active_boid_state_get(PointerRNA *ptr)
{
    PropPointerGetFunc fn = rna_BoidSettings_active_boid_state_get;
    return fn(ptr);
}

int BoidSettings_active_boid_state_index_get(PointerRNA *ptr)
{
    PropIntGetFunc fn = rna_BoidSettings_active_boid_state_index_get;
    return fn(ptr);
}

void BoidSettings_active_boid_state_index_set(PointerRNA *ptr, int value)
{
    PropIntSetFunc fn = rna_BoidSettings_active_boid_state_index_set;
    fn(ptr, value);
}

float BoidSettings_health_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->health);
}

void BoidSettings_health_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->health = (std::remove_reference_t<decltype(data->health)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidSettings_strength_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->strength);
}

void BoidSettings_strength_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->strength = (std::remove_reference_t<decltype(data->strength)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidSettings_aggression_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->aggression);
}

void BoidSettings_aggression_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->aggression = (std::remove_reference_t<decltype(data->aggression)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidSettings_accuracy_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->accuracy);
}

void BoidSettings_accuracy_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->accuracy = (std::remove_reference_t<decltype(data->accuracy)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidSettings_range_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->range);
}

void BoidSettings_range_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->range = (std::remove_reference_t<decltype(data->range)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidSettings_air_speed_min_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_min_speed);
}

void BoidSettings_air_speed_min_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_min_speed = (std::remove_reference_t<decltype(data->air_min_speed)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidSettings_air_speed_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_speed);
}

void BoidSettings_air_speed_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_max_speed = (std::remove_reference_t<decltype(data->air_max_speed)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidSettings_air_acc_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_acc);
}

void BoidSettings_air_acc_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_max_acc = (std::remove_reference_t<decltype(data->air_max_acc)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidSettings_air_ave_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_max_ave);
}

void BoidSettings_air_ave_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_max_ave = (std::remove_reference_t<decltype(data->air_max_ave)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidSettings_air_personal_space_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->air_personal_space);
}

void BoidSettings_air_personal_space_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->air_personal_space = (std::remove_reference_t<decltype(data->air_personal_space)>)std::clamp(value, 0.0f, 10.0f);
}

float BoidSettings_land_jump_speed_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_jump_speed);
}

void BoidSettings_land_jump_speed_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_jump_speed = (std::remove_reference_t<decltype(data->land_jump_speed)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidSettings_land_speed_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_speed);
}

void BoidSettings_land_speed_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_max_speed = (std::remove_reference_t<decltype(data->land_max_speed)>)std::clamp(value, 0.0f, 100.0f);
}

float BoidSettings_land_acc_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_acc);
}

void BoidSettings_land_acc_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_max_acc = (std::remove_reference_t<decltype(data->land_max_acc)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidSettings_land_ave_max_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_max_ave);
}

void BoidSettings_land_ave_max_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_max_ave = (std::remove_reference_t<decltype(data->land_max_ave)>)std::clamp(value, 0.0f, 1.0f);
}

float BoidSettings_land_personal_space_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_personal_space);
}

void BoidSettings_land_personal_space_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_personal_space = (std::remove_reference_t<decltype(data->land_personal_space)>)std::clamp(value, 0.0f, 10.0f);
}

float BoidSettings_land_stick_force_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return (float)(data->land_stick_force);
}

void BoidSettings_land_stick_force_set(PointerRNA *ptr, float value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    data->land_stick_force = (std::remove_reference_t<decltype(data->land_stick_force)>)std::clamp(value, 0.0f, 1000.0f);
}

bool BoidSettings_use_flight_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return ((uint64_t(data->options) & 1) != 0);
}

void BoidSettings_use_flight_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 1); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(1)); }
}

bool BoidSettings_use_land_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return ((uint64_t(data->options) & 2) != 0);
}

void BoidSettings_use_land_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 2); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(2)); }
}

bool BoidSettings_use_climb_get(PointerRNA *ptr)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    return ((uint64_t(data->options) & 4) != 0);
}

void BoidSettings_use_climb_set(PointerRNA *ptr, bool value)
{
    BoidSettings *data = (BoidSettings *)(ptr->data);
    if (value) { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) | 4); }
    else { data->options = std::remove_reference_t<decltype(data->options)>(uint64_t(data->options) & ~uint64_t(4)); }
}










/* Boid Rule */
static CollectionPropertyRNA rna_BoidRule_rna_properties_;
PropertyRNA &rna_BoidRule_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BoidRule_rna_properties_);

static PointerPropertyRNA rna_BoidRule_rna_type_;
PropertyRNA &rna_BoidRule_rna_type = reinterpret_cast<PropertyRNA &>(rna_BoidRule_rna_type_);

static StringPropertyRNA rna_BoidRule_name_;
PropertyRNA &rna_BoidRule_name = reinterpret_cast<PropertyRNA &>(rna_BoidRule_name_);

static EnumPropertyRNA rna_BoidRule_type_;
PropertyRNA &rna_BoidRule_type = reinterpret_cast<PropertyRNA &>(rna_BoidRule_type_);

static BoolPropertyRNA rna_BoidRule_use_in_air_;
PropertyRNA &rna_BoidRule_use_in_air = reinterpret_cast<PropertyRNA &>(rna_BoidRule_use_in_air_);

static BoolPropertyRNA rna_BoidRule_use_on_land_;
PropertyRNA &rna_BoidRule_use_on_land = reinterpret_cast<PropertyRNA &>(rna_BoidRule_use_on_land_);

StructRNA *RNA_BoidRule;
void register_struct_BoidRule(BlenderRNA &brna)
{
	rna_BoidRule_rna_properties_ = {
		{&rna_BoidRule_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRule_rna_properties_begin, BoidRule_rna_properties_next, BoidRule_rna_properties_end, BoidRule_rna_properties_get, nullptr, nullptr, BoidRule_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BoidRule_rna_type_ = {
		{&rna_BoidRule_name, 	&rna_BoidRule_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRule_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BoidRule_name_ = {
		{&rna_BoidRule_type, 	&rna_BoidRule_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Boid rule name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {32, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRule_name_get, BoidRule_name_length, BoidRule_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 32, ""
	};

	rna_BoidRule_type_ = {
		{&rna_BoidRule_use_in_air, 	&rna_BoidRule_name,
		-1, "type", 2, 0, 0, 4, 0, PropertyPathTemplateType(0), "Type",
		"",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRule, type), RawPropertyType(0), nullptr},
		BoidRule_type_get, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_enum_boidrule_type_items, 8, 1
	};

	rna_BoidRule_use_in_air_ = {
		{&rna_BoidRule_use_on_land, 	&rna_BoidRule_type,
		-1, "use_in_air", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "In Air",
		"Use rule when boid is flying",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRule_use_in_air_get, BoidRule_use_in_air_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoidRule_use_on_land_ = {
		{nullptr, 	&rna_BoidRule_use_in_air,
		-1, "use_on_land", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "On Land",
		"Use rule when boid is on land",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRule_use_on_land_get, BoidRule_use_on_land_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BoidRule;
	srna->cont.properties = {&rna_BoidRule_rna_properties, &rna_BoidRule_use_on_land};
	srna->identifier = "BoidRule";
	srna->flag = 516;
	srna->name = "Boid Rule";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoidRule_name;
	srna->iteratorproperty = &rna_BoidRule_rna_properties;
	srna->refine = rna_BoidRule_refine;
	srna->path = rna_BoidRule_path;
};

/* Goal */
static PointerPropertyRNA rna_BoidRuleGoal_object_;
PropertyRNA &rna_BoidRuleGoal_object = reinterpret_cast<PropertyRNA &>(rna_BoidRuleGoal_object_);

static BoolPropertyRNA rna_BoidRuleGoal_use_predict_;
PropertyRNA &rna_BoidRuleGoal_use_predict = reinterpret_cast<PropertyRNA &>(rna_BoidRuleGoal_use_predict_);

StructRNA *RNA_BoidRuleGoal;
void register_struct_BoidRuleGoal(BlenderRNA &brna)
{
	rna_BoidRuleGoal_object_ = {
		{&rna_BoidRuleGoal_use_predict, 	nullptr,
		-1, "object", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Goal object",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset_deps, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRuleGoal_object_get, BoidRuleGoal_object_set, nullptr, nullptr,RNA_Object
	};

	rna_BoidRuleGoal_use_predict_ = {
		{nullptr, 	&rna_BoidRuleGoal_object,
		-1, "use_predict", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Predict",
		"Predict target movement",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRuleGoal_use_predict_get, BoidRuleGoal_use_predict_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BoidRuleGoal;
	srna->cont.properties = {&rna_BoidRuleGoal_object, &rna_BoidRuleGoal_use_predict};
	srna->identifier = "BoidRuleGoal";
	srna->flag = 516;
	srna->name = "Goal";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoidRule_name;
	srna->iteratorproperty = &rna_BoidRule_rna_properties;
	srna->base = RNA_BoidRule;
	srna->refine = rna_BoidRule_refine;
	srna->path = rna_BoidRule_path;
};

/* Avoid */
static PointerPropertyRNA rna_BoidRuleAvoid_object_;
PropertyRNA &rna_BoidRuleAvoid_object = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAvoid_object_);

static BoolPropertyRNA rna_BoidRuleAvoid_use_predict_;
PropertyRNA &rna_BoidRuleAvoid_use_predict = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAvoid_use_predict_);

static FloatPropertyRNA rna_BoidRuleAvoid_fear_factor_;
PropertyRNA &rna_BoidRuleAvoid_fear_factor = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAvoid_fear_factor_);

StructRNA *RNA_BoidRuleAvoid;
void register_struct_BoidRuleAvoid(BlenderRNA &brna)
{
	rna_BoidRuleAvoid_object_ = {
		{&rna_BoidRuleAvoid_use_predict, 	nullptr,
		-1, "object", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Object to avoid",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset_deps, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRuleAvoid_object_get, BoidRuleAvoid_object_set, nullptr, nullptr,RNA_Object
	};

	rna_BoidRuleAvoid_use_predict_ = {
		{&rna_BoidRuleAvoid_fear_factor, 	&rna_BoidRuleAvoid_object,
		-1, "use_predict", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Predict",
		"Predict target movement",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRuleAvoid_use_predict_get, BoidRuleAvoid_use_predict_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoidRuleAvoid_fear_factor_ = {
		{nullptr, 	&rna_BoidRuleAvoid_use_predict,
		-1, "fear_factor", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fear Factor",
		"Avoid object if danger from it is above this threshold",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleGoalAvoid, fear_factor), RawPropertyType(5), nullptr},
		BoidRuleAvoid_fear_factor_get, BoidRuleAvoid_fear_factor_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_BoidRuleAvoid;
	srna->cont.properties = {&rna_BoidRuleAvoid_object, &rna_BoidRuleAvoid_fear_factor};
	srna->identifier = "BoidRuleAvoid";
	srna->flag = 516;
	srna->name = "Avoid";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoidRule_name;
	srna->iteratorproperty = &rna_BoidRule_rna_properties;
	srna->base = RNA_BoidRule;
	srna->refine = rna_BoidRule_refine;
	srna->path = rna_BoidRule_path;
};

/* Avoid Collision */
static BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_;
PropertyRNA &rna_BoidRuleAvoidCollision_use_avoid = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAvoidCollision_use_avoid_);

static BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision_;
PropertyRNA &rna_BoidRuleAvoidCollision_use_avoid_collision = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAvoidCollision_use_avoid_collision_);

static FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead_;
PropertyRNA &rna_BoidRuleAvoidCollision_look_ahead = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAvoidCollision_look_ahead_);

StructRNA *RNA_BoidRuleAvoidCollision;
void register_struct_BoidRuleAvoidCollision(BlenderRNA &brna)
{
	rna_BoidRuleAvoidCollision_use_avoid_ = {
		{&rna_BoidRuleAvoidCollision_use_avoid_collision, 	nullptr,
		-1, "use_avoid", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Boids",
		"Avoid collision with other boids",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRuleAvoidCollision_use_avoid_get, BoidRuleAvoidCollision_use_avoid_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoidRuleAvoidCollision_use_avoid_collision_ = {
		{&rna_BoidRuleAvoidCollision_look_ahead, 	&rna_BoidRuleAvoidCollision_use_avoid,
		-1, "use_avoid_collision", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Deflectors",
		"Avoid collision with deflector objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRuleAvoidCollision_use_avoid_collision_get, BoidRuleAvoidCollision_use_avoid_collision_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoidRuleAvoidCollision_look_ahead_ = {
		{nullptr, 	&rna_BoidRuleAvoidCollision_use_avoid_collision,
		-1, "look_ahead", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Look Ahead",
		"Time to look ahead in seconds",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleAvoidCollision, look_ahead), RawPropertyType(5), nullptr},
		BoidRuleAvoidCollision_look_ahead_get, BoidRuleAvoidCollision_look_ahead_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_BoidRuleAvoidCollision;
	srna->cont.properties = {&rna_BoidRuleAvoidCollision_use_avoid, &rna_BoidRuleAvoidCollision_look_ahead};
	srna->identifier = "BoidRuleAvoidCollision";
	srna->flag = 516;
	srna->name = "Avoid Collision";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoidRule_name;
	srna->iteratorproperty = &rna_BoidRule_rna_properties;
	srna->base = RNA_BoidRule;
	srna->refine = rna_BoidRule_refine;
	srna->path = rna_BoidRule_path;
};

/* Follow Leader */
static PointerPropertyRNA rna_BoidRuleFollowLeader_object_;
PropertyRNA &rna_BoidRuleFollowLeader_object = reinterpret_cast<PropertyRNA &>(rna_BoidRuleFollowLeader_object_);

static FloatPropertyRNA rna_BoidRuleFollowLeader_distance_;
PropertyRNA &rna_BoidRuleFollowLeader_distance = reinterpret_cast<PropertyRNA &>(rna_BoidRuleFollowLeader_distance_);

static IntPropertyRNA rna_BoidRuleFollowLeader_queue_count_;
PropertyRNA &rna_BoidRuleFollowLeader_queue_count = reinterpret_cast<PropertyRNA &>(rna_BoidRuleFollowLeader_queue_count_);

static BoolPropertyRNA rna_BoidRuleFollowLeader_use_line_;
PropertyRNA &rna_BoidRuleFollowLeader_use_line = reinterpret_cast<PropertyRNA &>(rna_BoidRuleFollowLeader_use_line_);

StructRNA *RNA_BoidRuleFollowLeader;
void register_struct_BoidRuleFollowLeader(BlenderRNA &brna)
{
	rna_BoidRuleFollowLeader_object_ = {
		{&rna_BoidRuleFollowLeader_distance, 	nullptr,
		-1, "object", 8388737, 0, 0, 0, 0, PropertyPathTemplateType(0), "Object",
		"Follow this object instead of a boid",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset_deps, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRuleFollowLeader_object_get, BoidRuleFollowLeader_object_set, nullptr, nullptr,RNA_Object
	};

	rna_BoidRuleFollowLeader_distance_ = {
		{&rna_BoidRuleFollowLeader_queue_count, 	&rna_BoidRuleFollowLeader_object,
		-1, "distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Distance",
		"Distance behind leader to follow",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleFollowLeader, distance), RawPropertyType(5), nullptr},
		BoidRuleFollowLeader_distance_get, BoidRuleFollowLeader_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidRuleFollowLeader_queue_count_ = {
		{&rna_BoidRuleFollowLeader_use_line, 	&rna_BoidRuleFollowLeader_distance,
		-1, "queue_count", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Queue Size",
		"How many boids in a line",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleFollowLeader, queue_size), RawPropertyType(0), nullptr},
		BoidRuleFollowLeader_queue_count_get, BoidRuleFollowLeader_queue_count_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 100, 0, 100, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BoidRuleFollowLeader_use_line_ = {
		{nullptr, 	&rna_BoidRuleFollowLeader_queue_count,
		-1, "use_line", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Line",
		"Follow leader in a line",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidRuleFollowLeader_use_line_get, BoidRuleFollowLeader_use_line_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BoidRuleFollowLeader;
	srna->cont.properties = {&rna_BoidRuleFollowLeader_object, &rna_BoidRuleFollowLeader_use_line};
	srna->identifier = "BoidRuleFollowLeader";
	srna->flag = 516;
	srna->name = "Follow Leader";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoidRule_name;
	srna->iteratorproperty = &rna_BoidRule_rna_properties;
	srna->base = RNA_BoidRule;
	srna->refine = rna_BoidRule_refine;
	srna->path = rna_BoidRule_path;
};

/* Average Speed */
static FloatPropertyRNA rna_BoidRuleAverageSpeed_wander_;
PropertyRNA &rna_BoidRuleAverageSpeed_wander = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAverageSpeed_wander_);

static FloatPropertyRNA rna_BoidRuleAverageSpeed_level_;
PropertyRNA &rna_BoidRuleAverageSpeed_level = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAverageSpeed_level_);

static FloatPropertyRNA rna_BoidRuleAverageSpeed_speed_;
PropertyRNA &rna_BoidRuleAverageSpeed_speed = reinterpret_cast<PropertyRNA &>(rna_BoidRuleAverageSpeed_speed_);

StructRNA *RNA_BoidRuleAverageSpeed;
void register_struct_BoidRuleAverageSpeed(BlenderRNA &brna)
{
	rna_BoidRuleAverageSpeed_wander_ = {
		{&rna_BoidRuleAverageSpeed_level, 	nullptr,
		-1, "wander", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Wander",
		"How fast velocity\'s direction is randomized",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleAverageSpeed, wander), RawPropertyType(5), nullptr},
		BoidRuleAverageSpeed_wander_get, BoidRuleAverageSpeed_wander_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidRuleAverageSpeed_level_ = {
		{&rna_BoidRuleAverageSpeed_speed, 	&rna_BoidRuleAverageSpeed_wander,
		-1, "level", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Level",
		"How much velocity\'s z-component is kept constant",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleAverageSpeed, level), RawPropertyType(5), nullptr},
		BoidRuleAverageSpeed_level_get, BoidRuleAverageSpeed_level_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidRuleAverageSpeed_speed_ = {
		{nullptr, 	&rna_BoidRuleAverageSpeed_level,
		-1, "speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Speed",
		"Percentage of maximum speed",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_FACTOR) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleAverageSpeed, speed), RawPropertyType(5), nullptr},
		BoidRuleAverageSpeed_speed_get, BoidRuleAverageSpeed_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_BoidRuleAverageSpeed;
	srna->cont.properties = {&rna_BoidRuleAverageSpeed_wander, &rna_BoidRuleAverageSpeed_speed};
	srna->identifier = "BoidRuleAverageSpeed";
	srna->flag = 516;
	srna->name = "Average Speed";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoidRule_name;
	srna->iteratorproperty = &rna_BoidRule_rna_properties;
	srna->base = RNA_BoidRule;
	srna->refine = rna_BoidRule_refine;
	srna->path = rna_BoidRule_path;
};

/* Fight */
static FloatPropertyRNA rna_BoidRuleFight_distance_;
PropertyRNA &rna_BoidRuleFight_distance = reinterpret_cast<PropertyRNA &>(rna_BoidRuleFight_distance_);

static FloatPropertyRNA rna_BoidRuleFight_flee_distance_;
PropertyRNA &rna_BoidRuleFight_flee_distance = reinterpret_cast<PropertyRNA &>(rna_BoidRuleFight_flee_distance_);

StructRNA *RNA_BoidRuleFight;
void register_struct_BoidRuleFight(BlenderRNA &brna)
{
	rna_BoidRuleFight_distance_ = {
		{&rna_BoidRuleFight_flee_distance, 	nullptr,
		-1, "distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Fight Distance",
		"Attack boids at max this distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleFight, distance), RawPropertyType(5), nullptr},
		BoidRuleFight_distance_get, BoidRuleFight_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidRuleFight_flee_distance_ = {
		{nullptr, 	&rna_BoidRuleFight_distance,
		-1, "flee_distance", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Flee Distance",
		"Flee to this distance",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidRuleFight, flee_distance), RawPropertyType(5), nullptr},
		BoidRuleFight_flee_distance_get, BoidRuleFight_flee_distance_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_BoidRuleFight;
	srna->cont.properties = {&rna_BoidRuleFight_distance, &rna_BoidRuleFight_flee_distance};
	srna->identifier = "BoidRuleFight";
	srna->flag = 516;
	srna->name = "Fight";
	srna->description = "";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoidRule_name;
	srna->iteratorproperty = &rna_BoidRule_rna_properties;
	srna->base = RNA_BoidRule;
	srna->refine = rna_BoidRule_refine;
	srna->path = rna_BoidRule_path;
};

/* Boid State */
static CollectionPropertyRNA rna_BoidState_rna_properties_;
PropertyRNA &rna_BoidState_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BoidState_rna_properties_);

static PointerPropertyRNA rna_BoidState_rna_type_;
PropertyRNA &rna_BoidState_rna_type = reinterpret_cast<PropertyRNA &>(rna_BoidState_rna_type_);

static StringPropertyRNA rna_BoidState_name_;
PropertyRNA &rna_BoidState_name = reinterpret_cast<PropertyRNA &>(rna_BoidState_name_);

static EnumPropertyRNA rna_BoidState_ruleset_type_;
PropertyRNA &rna_BoidState_ruleset_type = reinterpret_cast<PropertyRNA &>(rna_BoidState_ruleset_type_);

static CollectionPropertyRNA rna_BoidState_rules_;
PropertyRNA &rna_BoidState_rules = reinterpret_cast<PropertyRNA &>(rna_BoidState_rules_);

static PointerPropertyRNA rna_BoidState_active_boid_rule_;
PropertyRNA &rna_BoidState_active_boid_rule = reinterpret_cast<PropertyRNA &>(rna_BoidState_active_boid_rule_);

static IntPropertyRNA rna_BoidState_active_boid_rule_index_;
PropertyRNA &rna_BoidState_active_boid_rule_index = reinterpret_cast<PropertyRNA &>(rna_BoidState_active_boid_rule_index_);

static FloatPropertyRNA rna_BoidState_rule_fuzzy_;
PropertyRNA &rna_BoidState_rule_fuzzy = reinterpret_cast<PropertyRNA &>(rna_BoidState_rule_fuzzy_);

static FloatPropertyRNA rna_BoidState_volume_;
PropertyRNA &rna_BoidState_volume = reinterpret_cast<PropertyRNA &>(rna_BoidState_volume_);

static FloatPropertyRNA rna_BoidState_falloff_;
PropertyRNA &rna_BoidState_falloff = reinterpret_cast<PropertyRNA &>(rna_BoidState_falloff_);

StructRNA *RNA_BoidState;
void register_struct_BoidState(BlenderRNA &brna)
{
	rna_BoidState_rna_properties_ = {
		{&rna_BoidState_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidState_rna_properties_begin, BoidState_rna_properties_next, BoidState_rna_properties_end, BoidState_rna_properties_get, nullptr, nullptr, BoidState_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BoidState_rna_type_ = {
		{&rna_BoidState_name, 	&rna_BoidState_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidState_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BoidState_name_ = {
		{&rna_BoidState_ruleset_type, 	&rna_BoidState_rna_type,
		-1, "name", 262145, 0, 0, 0, 0, PropertyPathTemplateType(0), "Name",
		"Boid state name",
		0, "*",
		nullptr,
		PROP_STRING, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {32, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidState_name_get, BoidState_name_length, BoidState_name_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, eStringPropertySearchFlag(0), nullptr, 32, ""
	};

	static const EnumPropertyItem rna_BoidState_ruleset_type_items[4] = {
		{0, "FUZZY", 0, "Fuzzy", "Rules are gone through top to bottom (only the first rule which effect is above fuzziness threshold is evaluated)"	},
		{1, "RANDOM", 0, "Random", "A random rule is selected for each boid"	},
		{2, "AVERAGE", 0, "Average", "All rules are averaged"	},
			{0, nullptr, 0, nullptr, nullptr}
	};
	rna_BoidState_ruleset_type_ = {
		{&rna_BoidState_rules, 	&rna_BoidState_name,
		-1, "ruleset_type", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rule Evaluation",
		"How the rules in the list are evaluated",
		0, "*",
		nullptr,
		PROP_ENUM, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidState, ruleset_type), RawPropertyType(0), nullptr},
		BoidState_ruleset_type_get, BoidState_ruleset_type_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, rna_BoidState_ruleset_type_items, 3, 0
	};

	rna_BoidState_rules_ = {
		{&rna_BoidState_active_boid_rule, 	&rna_BoidState_ruleset_type,
		-1, "rules", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Boid Rules",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidState_rules_begin, BoidState_rules_next, BoidState_rules_end, BoidState_rules_get, nullptr, BoidState_rules_lookup_int, BoidState_rules_lookup_string, nullptr, RNA_BoidRule
	};

	rna_BoidState_active_boid_rule_ = {
		{&rna_BoidState_active_boid_rule_index, 	&rna_BoidState_rules,
		-1, "active_boid_rule", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Boid Rule",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidState_active_boid_rule_get, nullptr, nullptr, nullptr,RNA_BoidRule
	};

	rna_BoidState_active_boid_rule_index_ = {
		{&rna_BoidState_rule_fuzzy, 	&rna_BoidState_active_boid_rule,
		-1, "active_boid_rule_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Boid Rule Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidState_active_boid_rule_index_get, BoidState_active_boid_rule_index_set, nullptr, nullptr, rna_BoidState_active_boid_rule_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BoidState_rule_fuzzy_ = {
		{&rna_BoidState_volume, 	&rna_BoidState_active_boid_rule_index,
		-1, "rule_fuzzy", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Rule Fuzziness",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidState, rule_fuzziness), RawPropertyType(5), nullptr},
		BoidState_rule_fuzzy_get, BoidState_rule_fuzzy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidState_volume_ = {
		{&rna_BoidState_falloff, 	&rna_BoidState_rule_fuzzy,
		-1, "volume", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Volume",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidState, volume), RawPropertyType(5), nullptr},
		BoidState_volume_get, BoidState_volume_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidState_falloff_ = {
		{nullptr, 	&rna_BoidState_volume,
		-1, "falloff", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Falloff",
		"",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidState, falloff), RawPropertyType(5), nullptr},
		BoidState_falloff_get, BoidState_falloff_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	StructRNA *srna = RNA_BoidState;
	srna->cont.properties = {&rna_BoidState_rna_properties, &rna_BoidState_falloff};
	srna->identifier = "BoidState";
	srna->flag = 516;
	srna->name = "Boid State";
	srna->description = "Boid state for boid physics";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->nameproperty = &rna_BoidState_name;
	srna->iteratorproperty = &rna_BoidState_rna_properties;
};

/* Boid Settings */
static CollectionPropertyRNA rna_BoidSettings_rna_properties_;
PropertyRNA &rna_BoidSettings_rna_properties = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_rna_properties_);

static PointerPropertyRNA rna_BoidSettings_rna_type_;
PropertyRNA &rna_BoidSettings_rna_type = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_rna_type_);

static FloatPropertyRNA rna_BoidSettings_land_smooth_;
PropertyRNA &rna_BoidSettings_land_smooth = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_land_smooth_);

static FloatPropertyRNA rna_BoidSettings_bank_;
PropertyRNA &rna_BoidSettings_bank = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_bank_);

static FloatPropertyRNA rna_BoidSettings_pitch_;
PropertyRNA &rna_BoidSettings_pitch = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_pitch_);

static FloatPropertyRNA rna_BoidSettings_height_;
PropertyRNA &rna_BoidSettings_height = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_height_);

static CollectionPropertyRNA rna_BoidSettings_states_;
PropertyRNA &rna_BoidSettings_states = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_states_);

static PointerPropertyRNA rna_BoidSettings_active_boid_state_;
PropertyRNA &rna_BoidSettings_active_boid_state = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_active_boid_state_);

static IntPropertyRNA rna_BoidSettings_active_boid_state_index_;
PropertyRNA &rna_BoidSettings_active_boid_state_index = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_active_boid_state_index_);

static FloatPropertyRNA rna_BoidSettings_health_;
PropertyRNA &rna_BoidSettings_health = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_health_);

static FloatPropertyRNA rna_BoidSettings_strength_;
PropertyRNA &rna_BoidSettings_strength = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_strength_);

static FloatPropertyRNA rna_BoidSettings_aggression_;
PropertyRNA &rna_BoidSettings_aggression = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_aggression_);

static FloatPropertyRNA rna_BoidSettings_accuracy_;
PropertyRNA &rna_BoidSettings_accuracy = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_accuracy_);

static FloatPropertyRNA rna_BoidSettings_range_;
PropertyRNA &rna_BoidSettings_range = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_range_);

static FloatPropertyRNA rna_BoidSettings_air_speed_min_;
PropertyRNA &rna_BoidSettings_air_speed_min = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_air_speed_min_);

static FloatPropertyRNA rna_BoidSettings_air_speed_max_;
PropertyRNA &rna_BoidSettings_air_speed_max = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_air_speed_max_);

static FloatPropertyRNA rna_BoidSettings_air_acc_max_;
PropertyRNA &rna_BoidSettings_air_acc_max = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_air_acc_max_);

static FloatPropertyRNA rna_BoidSettings_air_ave_max_;
PropertyRNA &rna_BoidSettings_air_ave_max = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_air_ave_max_);

static FloatPropertyRNA rna_BoidSettings_air_personal_space_;
PropertyRNA &rna_BoidSettings_air_personal_space = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_air_personal_space_);

static FloatPropertyRNA rna_BoidSettings_land_jump_speed_;
PropertyRNA &rna_BoidSettings_land_jump_speed = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_land_jump_speed_);

static FloatPropertyRNA rna_BoidSettings_land_speed_max_;
PropertyRNA &rna_BoidSettings_land_speed_max = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_land_speed_max_);

static FloatPropertyRNA rna_BoidSettings_land_acc_max_;
PropertyRNA &rna_BoidSettings_land_acc_max = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_land_acc_max_);

static FloatPropertyRNA rna_BoidSettings_land_ave_max_;
PropertyRNA &rna_BoidSettings_land_ave_max = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_land_ave_max_);

static FloatPropertyRNA rna_BoidSettings_land_personal_space_;
PropertyRNA &rna_BoidSettings_land_personal_space = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_land_personal_space_);

static FloatPropertyRNA rna_BoidSettings_land_stick_force_;
PropertyRNA &rna_BoidSettings_land_stick_force = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_land_stick_force_);

static BoolPropertyRNA rna_BoidSettings_use_flight_;
PropertyRNA &rna_BoidSettings_use_flight = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_use_flight_);

static BoolPropertyRNA rna_BoidSettings_use_land_;
PropertyRNA &rna_BoidSettings_use_land = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_use_land_);

static BoolPropertyRNA rna_BoidSettings_use_climb_;
PropertyRNA &rna_BoidSettings_use_climb = reinterpret_cast<PropertyRNA &>(rna_BoidSettings_use_climb_);

StructRNA *RNA_BoidSettings;
void register_struct_BoidSettings(BlenderRNA &brna)
{
	rna_BoidSettings_rna_properties_ = {
		{&rna_BoidSettings_rna_type, 	nullptr,
		-1, "rna_properties", 0, 0, 0, 1, 0, PropertyPathTemplateType(0), "Properties",
		"RNA property collection",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidSettings_rna_properties_begin, BoidSettings_rna_properties_next, BoidSettings_rna_properties_end, BoidSettings_rna_properties_get, nullptr, nullptr, BoidSettings_rna_properties_lookup_string, nullptr, RNA_Property
	};

	rna_BoidSettings_rna_type_ = {
		{&rna_BoidSettings_land_smooth, 	&rna_BoidSettings_rna_properties,
		-1, "rna_type", 8912896, 0, 0, 0, 0, PropertyPathTemplateType(0), "RNA",
		"RNA type definition",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidSettings_rna_type_get, nullptr, nullptr, nullptr,RNA_Struct
	};

	rna_BoidSettings_land_smooth_ = {
		{&rna_BoidSettings_bank, 	&rna_BoidSettings_rna_type,
		-1, "land_smooth", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Landing Smoothness",
		"How smoothly the boids land",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, landing_smoothness), RawPropertyType(5), nullptr},
		BoidSettings_land_smooth_get, BoidSettings_land_smooth_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_bank_ = {
		{&rna_BoidSettings_pitch, 	&rna_BoidSettings_land_smooth,
		-1, "bank", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Banking",
		"Amount of rotation around velocity vector on turns",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, banking), RawPropertyType(5), nullptr},
		BoidSettings_bank_get, BoidSettings_bank_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_pitch_ = {
		{&rna_BoidSettings_height, 	&rna_BoidSettings_bank,
		-1, "pitch", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Pitch",
		"Amount of rotation around side vector",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, pitch), RawPropertyType(5), nullptr},
		BoidSettings_pitch_get, BoidSettings_pitch_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_height_ = {
		{&rna_BoidSettings_states, 	&rna_BoidSettings_pitch,
		-1, "height", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Height",
		"Boid height relative to particle size",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, height), RawPropertyType(5), nullptr},
		BoidSettings_height_get, BoidSettings_height_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_states_ = {
		{&rna_BoidSettings_active_boid_state, 	&rna_BoidSettings_height,
		-1, "states", 0, 0, 0, 0, 0, PropertyPathTemplateType(0), "Boid States",
		"",
		0, "*",
		nullptr,
		PROP_COLLECTION, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidSettings_states_begin, BoidSettings_states_next, BoidSettings_states_end, BoidSettings_states_get, nullptr, BoidSettings_states_lookup_int, BoidSettings_states_lookup_string, nullptr, RNA_BoidState
	};

	rna_BoidSettings_active_boid_state_ = {
		{&rna_BoidSettings_active_boid_state_index, 	&rna_BoidSettings_states,
		-1, "active_boid_state", 8388608, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Boid Rule",
		"",
		0, "*",
		nullptr,
		PROP_POINTER, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidSettings_active_boid_state_get, nullptr, nullptr, nullptr,RNA_BoidRule
	};

	rna_BoidSettings_active_boid_state_index_ = {
		{&rna_BoidSettings_health, 	&rna_BoidSettings_active_boid_state,
		-1, "active_boid_state_index", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Active Boid State Index",
		"",
		0, "*",
		nullptr,
		PROP_INT, PropertySubType(int(PROP_UNSIGNED) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		nullptr, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidSettings_active_boid_state_index_get, BoidSettings_active_boid_state_index_set, nullptr, nullptr, rna_BoidSettings_active_boid_state_index_range, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		PROP_SCALE_LINEAR, 0, 10000, 0, INT_MAX, 1, nullptr, nullptr, 0, nullptr
	};

	rna_BoidSettings_health_ = {
		{&rna_BoidSettings_strength, 	&rna_BoidSettings_active_boid_state_index,
		-1, "health", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Health",
		"Initial boid health when born",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, health), RawPropertyType(5), nullptr},
		BoidSettings_health_get, BoidSettings_health_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_strength_ = {
		{&rna_BoidSettings_aggression, 	&rna_BoidSettings_health,
		-1, "strength", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Strength",
		"Maximum caused damage on attack per second",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, strength), RawPropertyType(5), nullptr},
		BoidSettings_strength_get, BoidSettings_strength_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_aggression_ = {
		{&rna_BoidSettings_accuracy, 	&rna_BoidSettings_strength,
		-1, "aggression", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Aggression",
		"Boid will fight this times stronger enemy",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, aggression), RawPropertyType(5), nullptr},
		BoidSettings_aggression_get, BoidSettings_aggression_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_accuracy_ = {
		{&rna_BoidSettings_range, 	&rna_BoidSettings_aggression,
		-1, "accuracy", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Accuracy",
		"Accuracy of attack",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, accuracy), RawPropertyType(5), nullptr},
		BoidSettings_accuracy_get, BoidSettings_accuracy_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_range_ = {
		{&rna_BoidSettings_air_speed_min, 	&rna_BoidSettings_accuracy,
		-1, "range", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Range",
		"Maximum distance from which a boid can attack",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, range), RawPropertyType(5), nullptr},
		BoidSettings_range_get, BoidSettings_range_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_air_speed_min_ = {
		{&rna_BoidSettings_air_speed_max, 	&rna_BoidSettings_range,
		-1, "air_speed_min", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Min Air Speed",
		"Minimum speed in air (relative to maximum speed)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, air_min_speed), RawPropertyType(5), nullptr},
		BoidSettings_air_speed_min_get, BoidSettings_air_speed_min_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_air_speed_max_ = {
		{&rna_BoidSettings_air_acc_max, 	&rna_BoidSettings_air_speed_min,
		-1, "air_speed_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Air Speed",
		"Maximum speed in air",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, air_max_speed), RawPropertyType(5), nullptr},
		BoidSettings_air_speed_max_get, BoidSettings_air_speed_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_air_acc_max_ = {
		{&rna_BoidSettings_air_ave_max, 	&rna_BoidSettings_air_speed_max,
		-1, "air_acc_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Air Acceleration",
		"Maximum acceleration in air (relative to maximum speed)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, air_max_acc), RawPropertyType(5), nullptr},
		BoidSettings_air_acc_max_get, BoidSettings_air_acc_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_air_ave_max_ = {
		{&rna_BoidSettings_air_personal_space, 	&rna_BoidSettings_air_acc_max,
		-1, "air_ave_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Air Angular Velocity",
		"Maximum angular velocity in air (relative to 180 degrees)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, air_max_ave), RawPropertyType(5), nullptr},
		BoidSettings_air_ave_max_get, BoidSettings_air_ave_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_air_personal_space_ = {
		{&rna_BoidSettings_land_jump_speed, 	&rna_BoidSettings_air_ave_max,
		-1, "air_personal_space", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Air Personal Space",
		"Radius of boids personal space in air (% of particle size)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, air_personal_space), RawPropertyType(5), nullptr},
		BoidSettings_air_personal_space_get, BoidSettings_air_personal_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_land_jump_speed_ = {
		{&rna_BoidSettings_land_speed_max, 	&rna_BoidSettings_air_personal_space,
		-1, "land_jump_speed", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Jump Speed",
		"Maximum speed for jumping",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, land_jump_speed), RawPropertyType(5), nullptr},
		BoidSettings_land_jump_speed_get, BoidSettings_land_jump_speed_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_land_speed_max_ = {
		{&rna_BoidSettings_land_acc_max, 	&rna_BoidSettings_land_jump_speed,
		-1, "land_speed_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Land Speed",
		"Maximum speed on land",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, land_max_speed), RawPropertyType(5), nullptr},
		BoidSettings_land_speed_max_get, BoidSettings_land_speed_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_land_acc_max_ = {
		{&rna_BoidSettings_land_ave_max, 	&rna_BoidSettings_land_speed_max,
		-1, "land_acc_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Land Acceleration",
		"Maximum acceleration on land (relative to maximum speed)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, land_max_acc), RawPropertyType(5), nullptr},
		BoidSettings_land_acc_max_get, BoidSettings_land_acc_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_land_ave_max_ = {
		{&rna_BoidSettings_land_personal_space, 	&rna_BoidSettings_land_acc_max,
		-1, "land_ave_max", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Max Land Angular Velocity",
		"Maximum angular velocity on land (relative to 180 degrees)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, land_max_ave), RawPropertyType(5), nullptr},
		BoidSettings_land_ave_max_get, BoidSettings_land_ave_max_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_land_personal_space_ = {
		{&rna_BoidSettings_land_stick_force, 	&rna_BoidSettings_land_ave_max,
		-1, "land_personal_space", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Land Personal Space",
		"Radius of boids personal space on land (% of particle size)",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, land_personal_space), RawPropertyType(5), nullptr},
		BoidSettings_land_personal_space_get, BoidSettings_land_personal_space_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_land_stick_force_ = {
		{&rna_BoidSettings_use_flight, 	&rna_BoidSettings_land_personal_space,
		-1, "land_stick_force", 3, 0, 0, 4, 0, PropertyPathTemplateType(0), "Land Stick Force",
		"How strong a force must be to start effecting a boid on land",
		0, "*",
		nullptr,
		PROP_FLOAT, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
		offsetof(BoidSettings, land_stick_force), RawPropertyType(5), nullptr},
		BoidSettings_land_stick_force_get, BoidSettings_land_stick_force_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, PROP_SCALE_LINEAR, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, nullptr, nullptr, 0.0f, nullptr
	};

	rna_BoidSettings_use_flight_ = {
		{&rna_BoidSettings_use_land, 	&rna_BoidSettings_land_stick_force,
		-1, "use_flight", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Allow Flight",
		"Allow boids to move in air",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidSettings_use_flight_get, BoidSettings_use_flight_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoidSettings_use_land_ = {
		{&rna_BoidSettings_use_climb, 	&rna_BoidSettings_use_flight,
		-1, "use_land", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Allow Land",
		"Allow boids to move on land",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidSettings_use_land_get, BoidSettings_use_land_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	rna_BoidSettings_use_climb_ = {
		{nullptr, 	&rna_BoidSettings_use_land,
		-1, "use_climb", 3, 0, 0, 0, 0, PropertyPathTemplateType(0), "Allow Climbing",
		"Allow boids to climb goal objects",
		0, "*",
		nullptr,
		PROP_BOOLEAN, PropertySubType(int(PROP_NONE) | int(PROP_UNIT_NONE)), nullptr, 0, {0, 0, 0}, 0,
		rna_Boids_reset, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr,
			0, PROP_RAW_UNSET, nullptr},
		BoidSettings_use_climb_get, BoidSettings_use_climb_set, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, nullptr
	};

	StructRNA *srna = RNA_BoidSettings;
	srna->cont.properties = {&rna_BoidSettings_rna_properties, &rna_BoidSettings_use_climb};
	srna->identifier = "BoidSettings";
	srna->flag = 516;
	srna->name = "Boid Settings";
	srna->description = "Settings for boid physics";
	srna->translation_context = "*";
	srna->icon = 63;
	srna->iteratorproperty = &rna_BoidSettings_rna_properties;
	srna->path = rna_BoidSettings_path;
};


}  // namespace blender
