	THUMB_FUNC_START sub_0810FFBC
sub_0810FFBC: @ 0x0810FFBC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _0811001C  @ =gRam
	ldr r1, _08110020  @ =0x00000FC2
	add r0, r3, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	bne _0810FFD8
	ldr r5, _08110024  @ =0x00000F52
	add r0, r3, r5
	add r0, r4, r0
	strb r1, [r0]
_0810FFD8:
	ldrb r1, [r2]
	add r0, r1, #0
	sub r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r5, #4
	cmp r0, #47
	bls _0810FFEA
	mov r5, #0
_0810FFEA:
	cmp r5, #4
	bne _0810FFFC
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0810FFFC
	add r0, r4, #0
	bl sub_08110034
_0810FFFC:
	ldr r0, _0811001C  @ =gRam
	ldr r1, _08110028  @ =0x00000F92
	add r2, r0, r1
	add r2, r4, r2
	ldr r1, _0811002C  @ =gUnknown_0817D3C2
	ldr r3, _08110030  @ =0x00000FB2
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	orr r5, r5, r0
	add r1, r5, r1
	ldrb r0, [r1]
	strb r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_0811001C:
	.4byte gRam
_08110020:
	.4byte 0x00000FC2
_08110024:
	.4byte 0x00000F52
_08110028:
	.4byte 0x00000F92
_0811002C:
	.4byte gUnknown_0817D3C2
_08110030:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_0810FFBC

