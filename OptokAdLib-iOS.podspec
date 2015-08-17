#
# Be sure to run `pod lib lint OptokAdLib-iOS.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "OptokAdLib-iOS"
  s.version          = "0.0.7"
  s.summary          = "An SDK for integrationg OPTok Ad services into your iOS application."
  s.description      = ""
  s.homepage         = "https://github.com/Optok/OptokAdLib-iOS"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Jib" => "jib@jindatheme.com" }
  s.source           = { :git => "https://github.com/Optok/OptokAdLib-iOS.git", :tag => s.version.to_s }

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  # s.source_files = 'Pod/Classes/**/*'
  # s.resource_bundles = {
  #   'OptokAdLib-iOS' => ['Pod/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.framework  = "MediaPlayer", 

  s.requires_arc = true
  
  s.dependency 'AFNetworking', '~> 2.5'
  s.dependency 'Reachability', '~> 3.2'
end
