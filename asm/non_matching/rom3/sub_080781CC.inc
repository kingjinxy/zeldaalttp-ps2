	THUMB_FUNC_START sub_080781CC
sub_080781CC: @ 0x080781CC
	push {r4,lr}
	ldr r0, _08078200  @ =gUnknown_02018000
	ldr r1, _08078204  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078208  @ =gUnknown_02018800
	ldr r1, _0807820C  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078210  @ =gUnknown_02020000
	ldr r1, _08078214  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078218  @ =gUnknown_02020800
	ldr r1, _0807821C  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_08078200:
	.4byte gUnknown_02018000
_08078204:
	.4byte 0x0600C000
_08078208:
	.4byte gUnknown_02018800
_0807820C:
	.4byte 0x0600C800
_08078210:
	.4byte gUnknown_02020000
_08078214:
	.4byte 0x0600A000
_08078218:
	.4byte gUnknown_02020800
_0807821C:
	.4byte 0x0600A800
	THUMB_FUNC_END sub_080781CC

