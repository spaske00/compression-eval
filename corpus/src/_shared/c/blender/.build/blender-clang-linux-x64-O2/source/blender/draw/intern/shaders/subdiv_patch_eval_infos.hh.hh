static void metadata_subdiv_patch_eval_infos_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("draw_subdiv_shader_shared.hh");
  source.add_dependency("osd_patch_defines.glsl");
  source.add_dependency("osd_patch_basis.glsl");
  source.add_dependency("draw_subdiv_defines.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
