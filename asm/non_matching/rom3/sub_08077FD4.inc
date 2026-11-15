	THUMB_FUNC_START sub_08077FD4
sub_08077FD4: @ 0x08077FD4
	push {r4,lr}
	ldr r0, _08078008  @ =gUnknown_02018800
	ldr r1, _0807800C  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078010  @ =gUnknown_02019800
	ldr r1, _08078014  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078018  @ =gUnknown_02020800
	ldr r1, _0807801C  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078020  @ =gUnknown_02021800
	ldr r1, _08078024  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_08078008:
	.4byte gUnknown_02018800
_0807800C:
	.4byte 0x0600C800
_08078010:
	.4byte gUnknown_02019800
_08078014:
	.4byte 0x0600D800
_08078018:
	.4byte gUnknown_02020800
_0807801C:
	.4byte 0x0600A800
_08078020:
	.4byte gUnknown_02021800
_08078024:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08077FD4

