    <section>
      <title>Old Crypto API</title>
      <p>The <seeguide marker="crypto:new_api#the-old-api">Old API</seeguide> will be
      removed as of OTP 24. The support was formally deprecated as of OTP 23.</p>
      <p>For replacement functions see the
      <seeguide marker="crypto:new_api#the-new-api">New API</seeguide>.</p>
    </section>
    <section>
      <title>Distributed Disk Logs</title>
      <p>
	The distributed
	<seeerl marker="kernel:disk_log"><c>disk_log</c></seeerl>
	feature is as of
	<seeguide marker="deprecations#otp-23">OTP 23 deprecated</seeguide>
	and will be removed in OTP 24.
      </p>
    </section>
    <section>
      <title>Megaco version 3 encoding config</title>
      <p>As of OTP 24, the pre-release version 3 encoding configs;
      <c>prev3a</c>, <c>prev3b</c> and <c>prev3c</c> will be removed.
      Use the full version instead. </p>
      <p>The (encoding) config option for the full version, <c>{version3, 3}</c>,
      will still be supported, even though its no longer necessary to specify
      it this way. </p>
    </section>
