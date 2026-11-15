	THUMB_FUNC_START sub_0806EB34
sub_0806EB34: @ 0x0806EB34
	push {r4,lr}
	ldr r4, _0806EB78  @ =gRam
	ldr r1, _0806EB7C  @ =0x000009E8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #2
	bls _0806EB46
	bl sub_08089E94
_0806EB46:
	ldr r2, _0806EB80  @ =0x00000B0C
	add r1, r4, r2
	ldrh r0, [r1]
	cmp r0, #0
	beq _0806EB9C
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #15
	bne _0806EB64
	ldr r0, _0806EB84  @ =0x00001712
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
_0806EB64:
	ldr r1, _0806EB88  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #19
	bne _0806EB90
	ldr r2, _0806EB8C  @ =0x00001727
	add r1, r4, r2
	mov r0, #8
	b _0806EB96
	.byte 0x00
	.byte 0x00
_0806EB78:
	.4byte gRam
_0806EB7C:
	.4byte 0x000009E8
_0806EB80:
	.4byte 0x00000B0C
_0806EB84:
	.4byte 0x00001712
_0806EB88:
	.4byte 0x000009AD
_0806EB8C:
	.4byte 0x00001727
_0806EB90:
	ldr r0, _0806EBBC  @ =0x00001727
	add r1, r4, r0
	mov r0, #4
_0806EB96:
	strb r0, [r1]
	bl sub_080975B4
_0806EB9C:
	bl sub_08096F30
	ldr r1, _0806EBC0  @ =gUnknown_0814CCFC
	ldr r0, _0806EBC4  @ =gRam
	ldr r2, _0806EBC8  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806EBBC:
	.4byte 0x00001727
_0806EBC0:
	.4byte gUnknown_0814CCFC
_0806EBC4:
	.4byte gRam
_0806EBC8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806EB34

