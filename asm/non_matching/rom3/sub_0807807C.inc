	THUMB_FUNC_START sub_0807807C
sub_0807807C: @ 0x0807807C
	push {r4,lr}
	ldr r0, _080780B0  @ =gUnknown_02019000
	ldr r1, _080780B4  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080780B8  @ =gUnknown_02019800
	ldr r1, _080780BC  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080780C0  @ =gUnknown_02021000
	ldr r1, _080780C4  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080780C8  @ =gUnknown_02021800
	ldr r1, _080780CC  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_080780B0:
	.4byte gUnknown_02019000
_080780B4:
	.4byte 0x0600D000
_080780B8:
	.4byte gUnknown_02019800
_080780BC:
	.4byte 0x0600D800
_080780C0:
	.4byte gUnknown_02021000
_080780C4:
	.4byte 0x0600B000
_080780C8:
	.4byte gUnknown_02021800
_080780CC:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_0807807C

