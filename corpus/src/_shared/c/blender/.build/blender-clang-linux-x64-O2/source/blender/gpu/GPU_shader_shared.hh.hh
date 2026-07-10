static void metadata_GPU_shader_shared_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("GPU_shader_shared_utils.hh");
  source.add_printf_format(uint32_t(2739498870), "SeqStripDrawData UBO must not exceed minspec UBO size (16384)", g_formats);
  source.add_printf_format(uint32_t(2594197499), "SeqStripThumbData UBO must not exceed minspec UBO size (16384)", g_formats);
  UNUSED_VARS(source, g_functions, g_formats);
}
