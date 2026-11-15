	THUMB_FUNC_START sub_08078220
sub_08078220: @ 0x08078220
	push {r4,lr}
	ldr r0, _08078254  @ =gUnknown_02019000
	ldr r1, _08078258  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807825C  @ =gUnknown_02019800
	ldr r1, _08078260  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078264  @ =gUnknown_02021000
	ldr r1, _08078268  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807826C  @ =gUnknown_02021800
	ldr r1, _08078270  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_08078254:
	.4byte gUnknown_02019000
_08078258:
	.4byte 0x0600D000
_0807825C:
	.4byte gUnknown_02019800
_08078260:
	.4byte 0x0600D800
_08078264:
	.4byte gUnknown_02021000
_08078268:
	.4byte 0x0600B000
_0807826C:
	.4byte gUnknown_02021800
_08078270:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08078220

