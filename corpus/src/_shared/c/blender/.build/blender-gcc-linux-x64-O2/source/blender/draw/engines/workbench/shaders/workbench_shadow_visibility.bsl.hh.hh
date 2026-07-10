static void metadata_workbench_shadow_visibility_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_view_infos.hh");
  source.add_dependency("gpu_index_load_infos.hh");
  source.add_dependency("draw_intersect_lib.glsl");
  source.add_dependency("workbench_shader_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
