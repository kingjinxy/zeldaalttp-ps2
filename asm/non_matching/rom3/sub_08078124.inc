	THUMB_FUNC_START sub_08078124
sub_08078124: @ 0x08078124
	push {r4,lr}
	ldr r0, _08078158  @ =gUnknown_02018000
	ldr r1, _0807815C  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078160  @ =gUnknown_02019000
	ldr r1, _08078164  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078168  @ =gUnknown_02020000
	ldr r1, _0807816C  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08078170  @ =gUnknown_02021000
	ldr r1, _08078174  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	pop {r4}
	pop {r0}
	bx r0
_08078158:
	.4byte gUnknown_02018000
_0807815C:
	.4byte 0x0600C000
_08078160:
	.4byte gUnknown_02019000
_08078164:
	.4byte 0x0600D000
_08078168:
	.4byte gUnknown_02020000
_0807816C:
	.4byte 0x0600A000
_08078170:
	.4byte gUnknown_02021000
_08078174:
	.4byte 0x0600B000
	THUMB_FUNC_END sub_08078124

