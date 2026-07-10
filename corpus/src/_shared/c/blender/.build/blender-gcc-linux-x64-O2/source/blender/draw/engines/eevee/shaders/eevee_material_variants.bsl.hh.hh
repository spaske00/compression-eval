static void metadata_eevee_material_variants_bsl_hh_tmp(GPUSource &source, GPUFunctionDictionary *g_functions, GPUPrintFormatMap *g_formats) {
  source.add_dependency("eevee_geom_curves.bsl.hh");
  source.add_dependency("eevee_geom_mesh.bsl.hh");
  source.add_dependency("eevee_geom_pointcloud.bsl.hh");
  source.add_dependency("eevee_geom_volume.bsl.hh");
  source.add_dependency("eevee_geom_world.bsl.hh");
  source.add_dependency("eevee_surf_capture.bsl.hh");
  source.add_dependency("eevee_surf_deferred.bsl.hh");
  source.add_dependency("eevee_surf_depth.bsl.hh");
  source.add_dependency("eevee_surf_forward.bsl.hh");
  source.add_dependency("eevee_surf_hybrid.bsl.hh");
  source.add_dependency("eevee_surf_occupancy.bsl.hh");
  source.add_dependency("eevee_surf_shadow.bsl.hh");
  source.add_dependency("eevee_surf_volume.bsl.hh");
  source.add_dependency("eevee_surf_world.bsl.hh");
  UNUSED_VARS(source, g_functions, g_formats);
}
