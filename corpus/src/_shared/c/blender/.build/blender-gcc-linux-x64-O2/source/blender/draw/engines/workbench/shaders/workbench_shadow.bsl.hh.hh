static void metadata_workbench_shadow_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("gpu_index_load_infos.hh");
  source.add_dependency("draw_model_lib.glsl");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("gpu_shader_attribute_load_lib.glsl");
  source.add_dependency("gpu_shader_index_load_lib.glsl");
  source.add_dependency("gpu_shader_utildefines_lib.glsl");
  source.add_dependency("workbench_shader_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
