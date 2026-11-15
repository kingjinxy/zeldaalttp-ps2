	THUMB_FUNC_START sub_08078028
sub_08078028: @ 0x08078028
	push {r4,lr}
	ldr r0, _0807805C  @ =gUnknown_02018000
	ldr r1, _08078060  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078064  @ =gUnknown_02019000
	ldr r1, _08078068  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807806C  @ =gUnknown_02020000
	ldr r1, _08078070  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078074  @ =gUnknown_02021000
	ldr r1, _08078078  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_0807805C:
	.4byte gUnknown_02018000
_08078060:
	.4byte 0x0600C000
_08078064:
	.4byte gUnknown_02019000
_08078068:
	.4byte 0x0600D000
_0807806C:
	.4byte gUnknown_02020000
_08078070:
	.4byte 0x0600A000
_08078074:
	.4byte gUnknown_02021000
_08078078:
	.4byte 0x0600B000
	THUMB_FUNC_END sub_08078028

