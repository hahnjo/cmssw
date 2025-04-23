#ifndef HeterogeneousCore_MPIServices_interface_MPIService_h
#define HeterogeneousCore_MPIServices_interface_MPIService_h

#include "FWCore/ParameterSet/interface/ParameterSetfwd.h"
#include "FWCore/ServiceRegistry/interface/ActivityRegistry.h"

class MPIService {
public:
  MPIService(edm::ParameterSet const& config, edm::ActivityRegistry& registry);
  ~MPIService();

  void preBeginJob(edm::ProcessContext const&);
  void endProcessing();

  static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);
  static void required();
};

#endif  // HeterogeneousCore_MPIServices_interface_MPIService_h
