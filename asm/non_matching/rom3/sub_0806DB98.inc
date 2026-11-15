	THUMB_FUNC_START sub_0806DB98
sub_0806DB98: @ 0x0806DB98
	push {r4,r5,lr}
	ldr r4, _0806DBE0  @ =gRam
	ldr r0, _0806DBE4  @ =0x000009E8
	add r5, r4, r0
	ldrh r0, [r5]
	cmp r0, #2
	bls _0806DBAA
	bl sub_08089E94
_0806DBAA:
	ldrh r0, [r5]
	cmp r0, #12
	bls _0806DC08
	ldr r1, _0806DBE8  @ =0x00000B0C
	add r2, r4, r1
	ldrh r1, [r2]
	cmp r1, #0
	beq _0806DC0C
	sub r0, r1, #1
	strh r0, [r2]
	cmp r1, #16
	bne _0806DBCA
	ldr r2, _0806DBEC  @ =0x00001712
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
_0806DBCA:
	ldr r1, _0806DBF0  @ =0x00000B0A
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806DBF8
	ldr r2, _0806DBF4  @ =0x00001727
	add r1, r4, r2
	mov r0, #4
	b _0806DBFE
_0806DBE0:
	.4byte gRam
_0806DBE4:
	.4byte 0x000009E8
_0806DBE8:
	.4byte 0x00000B0C
_0806DBEC:
	.4byte 0x00001712
_0806DBF0:
	.4byte 0x00000B0A
_0806DBF4:
	.4byte 0x00001727
_0806DBF8:
	ldr r0, _0806DC28  @ =0x00001727
	add r1, r4, r0
	mov r0, #8
_0806DBFE:
	strb r0, [r1]
	bl sub_080975B4
	bl sub_0806C988
_0806DC08:
	bl sub_08096F30
_0806DC0C:
	ldr r1, _0806DC2C  @ =gUnknown_0814CBD8
	ldr r0, _0806DC30  @ =gRam
	ldr r2, _0806DC34  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806DC28:
	.4byte 0x00001727
_0806DC2C:
	.4byte gUnknown_0814CBD8
_0806DC30:
	.4byte gRam
_0806DC34:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806DB98

