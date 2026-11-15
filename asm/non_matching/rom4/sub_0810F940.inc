	THUMB_FUNC_START sub_0810F940
sub_0810F940: @ 0x0810F940
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _0810F97C  @ =gRam
	ldr r0, _0810F980  @ =0x0000096C
	add r1, r2, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _0810F984  @ =0x00000FF2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #233
	bne _0810F98C
	sub r1, r1, #96
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _0810F988  @ =gUnknown_0817D2E4
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	mov r1, #128
	lsl r1, r1, #2
	mov r0, #2
	bl sub_080C6174
	b _0810F9A6
_0810F97C:
	.4byte gRam
_0810F980:
	.4byte 0x0000096C
_0810F984:
	.4byte 0x00000FF2
_0810F988:
	.4byte gUnknown_0817D2E4
_0810F98C:
	ldr r1, _0810F9AC  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _0810F9B0  @ =gUnknown_0817D2C4
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
_0810F9A6:
	pop {r4}
	pop {r0}
	bx r0
_0810F9AC:
	.4byte 0x00000F92
_0810F9B0:
	.4byte gUnknown_0817D2C4
	THUMB_FUNC_END sub_0810F940

