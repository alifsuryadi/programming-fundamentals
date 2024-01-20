<!DOCTYPE html>
<html lang="en">
<head>
    
    @include('includes.meta')

    <title>@yield('title') | Landing Page</title>

    {{-- Standar favicon yang wajib ada --}}
    <link rel="apple-touch-icon" href="">
    <link rel="shortcut icon" type="image/x-icon" href="">

    {{-- Stack ngeload yang di perlukan saja --}}
    @stack('before-style')
    {{-- Style --}}
    @include('includes.style')
    @stack('after-style')

</head>

<body>
    
    @include('includes.header')
        @yield('content')
    @include('includes.footer')

    @stack('before-script')
    {{-- Script --}}
    @include('includes.script')

    @stack('after-script')

</body>
</html>