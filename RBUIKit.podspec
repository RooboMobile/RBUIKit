

Pod::Spec.new do |s|
  s.name             = 'RBUIKit'
  s.version="1.0.1"
  s.summary          = 'A short description of RBUIKit.'
  s.description      =  'UIKit '
  s.homepage         = 'https://github.com/RooboMobile/RBUIKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'baxiang' => 'baxiang@roobo.com' }
  s.source           = { :git => 'https://github.com/RooboMobile/RBUIKit.git', :branch => 'master' }
  s.ios.deployment_target = '7.0'
  s.source_files = 'RBUIKit/RBUIKit.h'
  s.frameworks       = 'Foundation', 'UIKit', 'CoreGraphics', 'Photos'
  s.resource         = 'RBUIKit/**/*.bundle'
s.subspec 'QMUICore' do |sss|
    sss.source_files = 'RBUIKit/QMUIKit.h', 'RBUIKit/QMUICore', 'RBUIKit/UIKitExtensions'
  end

end
