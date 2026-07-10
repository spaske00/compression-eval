static void metadata_eevee_lightprobe_shared_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("GPU_shader_shared_utils.hh");
  source.add_dependency("eevee_camera_shared.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
