static void metadata_workbench_effect_smaa_vert_glsl_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("workbench_effect_antialiasing_infos.hh");
  source.add_dependency("gpu_shader_smaa_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
