static void metadata_eevee_surf_volume_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_geom_infos.hh");
  source.add_dependency("eevee_nodetree_infos.hh");
  source.add_dependency("eevee_volume_lib.bsl.hh");
  source.add_dependency("eevee_attributes_volume_lib.glsl");
  source.add_dependency("eevee_nodetree_frag_lib.glsl");
  source.add_dependency("eevee_occupancy_lib.bsl.hh");
  source.add_dependency("eevee_sampling_lib.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
