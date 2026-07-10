static void metadata_subdiv_patch_evaluation_comp_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("subdiv_patch_eval_infos.hh");
  source.add_dependency("subdiv_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
