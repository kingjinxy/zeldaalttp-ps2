	THUMB_FUNC_START sub_08017ADC
sub_08017ADC: @ 0x08017ADC
	push {r4,lr}
	add r4, r0, #0
	bl sub_08017DFC
	add r0, r4, #0
	bl 0x08009624
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017ADC

