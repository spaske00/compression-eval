static void metadata_gpu_shader_3D_point_infos_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("GPU_shader_shared.hh");
  source.add_dependency("gpu_clip_planes_infos.hh");
  source.add_dependency("gpu_interface_infos.hh");
  source.add_dependency("gpu_srgb_to_framebuffer_space_infos.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
