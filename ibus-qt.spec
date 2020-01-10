%define ibus_version 1.3.7

Name:       ibus-qt
Version:    1.3.2
Release:    2%{?dist}
Summary:    Qt IBus library and Qt input method plugin
License:    GPLv2+
Group:      System Environment/Libraries
URL:        http://code.google.com/p/ibus/
Source0:    http://ibus.googlecode.com/files/%{name}-%{version}-Source.tar.gz

Patch0:     ibus-qt-HEAD.patch

BuildRequires:  cmake
BuildRequires:  qt4-devel >= 4.5
BuildRequires:  dbus-devel >= 1.2
BuildRequires:  ibus-devel >= %ibus_version
BuildRequires:  libicu-devel >= 4.0
BuildRequires:  doxygen >= 1.6
Requires:   ibus >= %ibus_version

%description
Qt IBus library and Qt input method plugin.

%package devel
Summary:    Development tools for ibus qt
Group:      Development/Libraries
Requires:   %{name} = %{version}-%{release}

%description devel
The ibus-qt-devel package contains the header files for ibus qt library.

%package docs
Summary:    Development documents for ibus qt
Group:      Development/Libraries
Requires:   %{name} = %{version}-%{release}

%description docs
The ibus-qt-docs package contains developer documentation for ibus qt library.

%prep
%setup -q -n %{name}-%{version}-Source
# %%patch0 -p1
%patch0 -p1

%build
%cmake \
    -DCMAKE_INSTALL_PREFIX=%{_usr} \
    -DLIBDIR=%{_libdir}
make \
    VERBOSE=1 \
    C_DEFINES="$RPM_OPT_FLAGS" \
    CXX_DEFINES="$RPM_OPT_FLAGS" \
    %{?_smp_mflags}
make docs

%install
make install DESTDIR=$RPM_BUILD_ROOT
# find_lang {name}

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
# -f {name}.lang
%doc AUTHORS README INSTALL
%{_libdir}/libibus-qt.so.*
%{_libdir}/qt4/plugins/inputmethods/libqtim-ibus.so

%files devel
%{_includedir}/*
%{_libdir}/libibus-qt.so

%files docs
%doc docs/html

%changelog
* Thu Mar 21 2013 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.2-2
- Added ibus-qt-HEAD.patch to fix bug 921164.

* Mon Mar 11 2013 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.2-1
- Updated to 1.3.2.

* Fri Feb 01 2013 Parag Nemade <paragn AT fedoraproject DOT org> - 1.3.1-13
- Rebuild for icu 50

* Wed Nov 21 2012 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.1-12
- Bumped for a misc issue.

* Tue Jul 31 2012 Than Ngo <than@redhat.com> - 1.3.1-11
- rebuild for icu-49.1.1

* Thu Jul 19 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 1.3.1-10
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Tue Apr 24 2012 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.1-9
- Rebuilt for icu-49.1.1

* Tue Mar 06 2012 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.1-8
- Rebuilt for ibus 1.4.99.20120304

* Fri Jan 13 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 1.3.1-7
- Rebuilt for https://fedoraproject.org/wiki/Fedora_17_Mass_Rebuild

* Sat Sep 10 2011 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.1-6
- Rebuilt for icu 4.8

* Mon Mar 07 2011 Caolán McNamara <caolanm@redhat.com> - 1.3.1-5
- rebuild for icu 4.6

* Wed Feb 09 2011 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 1.3.1-4
- Rebuilt for https://fedoraproject.org/wiki/Fedora_15_Mass_Rebuild

* Thu Nov 25 2010 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.1-3
- Fixed Bug 631043 - s/qt-devel/qt4-devel/ in BuildRequires
- Added ibus-qt-HEAD.patch
  Fixed Bug 655530 - Selected text gets deleted in KDE

* Mon Aug 23 2010 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.1-1
- Update to 1.3.1.

* Fri Jul 23 2010 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.0-2
- Fix Bug 616277 - hangul text color is not properly set in kwrite

* Fri Jul 16 2010 Takao Fujiwara <tfujiwar@redhat.com> - 1.3.0-1
- Update to 1.3.0.

* Fri Apr 02 2010 Caolán McNamara <caolanm@redhat.com> - 1.2.0.20091217-2
- rebuild for icu 4.4

* Thu Dec 17 2009 Peng Huang <shawn.p.huang@gmail.com> - 1.2.0.20091217-1
- Update to 1.2.0.20091217.

* Sun Dec 06 2009 Peng Huang <shawn.p.huang@gmail.com> - 1.2.0.20091206-1
- Update to 1.2.0.20091206.

* Mon Nov 23 2009 Rex Dieter <rdieter@fedoraproject.org> - 1.2.0.20091014-2
- rebuild (for qt-4.6.0-rc1, f13+)

* Wed Oct 14 2009 Peng Huang <shawn.p.huang@gmail.com> - 1.2.0.20091014-1
- Update to 1.2.0.20091014.

* Sat Aug 22 2009 Peng Huang <shawn.p.huang@gmail.com> - 1.2.0.20090822-2
- Update the tarball
- Link qt immodule with libicu

* Sat Aug 22 2009 Peng Huang <shawn.p.huang@gmail.com> - 1.2.0.20090822-1
- Update to 1.2.0.2009822
- Fix compose key problem.

* Mon Jul 27 2009 Peng Huang <shawn.p.huang@gmail.com> - 1.2.0.20090728-1
- The first version.
