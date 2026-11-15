	THUMB_FUNC_START sub_080780D0
sub_080780D0: @ 0x080780D0
	push {r4,lr}
	ldr r0, _08078104  @ =gUnknown_02018000
	ldr r1, _08078108  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807810C  @ =gUnknown_02018800
	ldr r1, _08078110  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078114  @ =gUnknown_02020000
	ldr r1, _08078118  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807811C  @ =gUnknown_02020800
	ldr r1, _08078120  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_08078104:
	.4byte gUnknown_02018000
_08078108:
	.4byte 0x0600C000
_0807810C:
	.4byte gUnknown_02018800
_08078110:
	.4byte 0x0600C800
_08078114:
	.4byte gUnknown_02020000
_08078118:
	.4byte 0x0600A000
_0807811C:
	.4byte gUnknown_02020800
_08078120:
	.4byte 0x0600A800
	THUMB_FUNC_END sub_080780D0

