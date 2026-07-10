static void metadata_workbench_transparent_accum_frag_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(15153218239913697414LLU));
  source.add_dependency("workbench_prepass_infos.hh");
  source.add_dependency("draw_view_lib.glsl");
  source.add_dependency("workbench_common_lib.glsl");
  source.add_dependency("workbench_image_lib.glsl");
  source.add_dependency("workbench_matcap_lib.glsl");
  source.add_dependency("workbench_world_light_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
