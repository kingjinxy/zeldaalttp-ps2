	THUMB_FUNC_START sub_08078178
sub_08078178: @ 0x08078178
	push {r4,lr}
	ldr r0, _080781AC  @ =gUnknown_02018800
	ldr r1, _080781B0  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080781B4  @ =gUnknown_02019800
	ldr r1, _080781B8  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080781BC  @ =gUnknown_02020800
	ldr r1, _080781C0  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080781C4  @ =gUnknown_02021800
	ldr r1, _080781C8  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_080781AC:
	.4byte gUnknown_02018800
_080781B0:
	.4byte 0x0600C800
_080781B4:
	.4byte gUnknown_02019800
_080781B8:
	.4byte 0x0600D800
_080781BC:
	.4byte gUnknown_02020800
_080781C0:
	.4byte 0x0600A800
_080781C4:
	.4byte gUnknown_02021800
_080781C8:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08078178

