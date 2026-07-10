static void metadata_eevee_occupancy_convert_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_builtin(metadata::Builtin(10639428544751590930LLU));
  source.add_dependency("eevee_common_infos.hh");
  source.add_dependency("eevee_occupancy_lib.bsl.hh");
  source.add_dependency("eevee_uniform.bsl.hh");
  source.add_dependency("gpu_shader_fullscreen_lib.glsl");
  UNUSED_VARS(source, g_functions, g_formats);
}
