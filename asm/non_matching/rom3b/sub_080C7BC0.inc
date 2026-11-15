	THUMB_FUNC_START sub_080C7BC0
sub_080C7BC0: @ 0x080C7BC0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080C7C5C  @ =gUnknown_0822A8C8
	ldr r0, _080C7C60  @ =gUnknown_0822A860
	sub r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_080C7490
	ldr r1, _080C7C64  @ =gUnknown_0822788F
	ldr r3, _080C7C68  @ =gRam
	ldr r2, _080C7C6C  @ =0x00000FF2
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080C7C0C
	ldr r0, _080C7C70  @ =0x00001032
	add r1, r3, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #16
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080C7C74  @ =0x000015E2
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #32
	bne _080C7C0C
	add r0, r4, #0
	bl sub_080C8764
_080C7C0C:
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r2, _080C7C68  @ =gRam
	ldr r0, _080C7C78  @ =0x00001152
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	ldr r1, _080C7C7C  @ =0x00001142
	add r2, r2, r1
	add r2, r4, r2
	ldrb r0, [r2]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #239
	bls _080C7C3E
	add r0, r4, #0
	bl sub_080C7CB4
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C7C58
_080C7C3E:
	ldr r1, _080C7C68  @ =gRam
	ldr r2, _080C7C80  @ =0x00000FA2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	bne _080C7C88
	ldr r2, _080C7C84  @ =0x0000142C
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C7C88
_080C7C58:
	mov r0, #1
	b _080C7CA4
_080C7C5C:
	.4byte gUnknown_0822A8C8
_080C7C60:
	.4byte gUnknown_0822A860
_080C7C64:
	.4byte gUnknown_0822788F
_080C7C68:
	.4byte gRam
_080C7C6C:
	.4byte 0x00000FF2
_080C7C70:
	.4byte 0x00001032
_080C7C74:
	.4byte 0x000015E2
_080C7C78:
	.4byte 0x00001152
_080C7C7C:
	.4byte 0x00001142
_080C7C80:
	.4byte 0x00000FA2
_080C7C84:
	.4byte 0x0000142C
_080C7C88:
	add r0, r4, #0
	bl sub_080C3094
	ldr r0, _080C7CAC  @ =gRam
	ldr r1, _080C7CB0  @ =0x00000FF2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #74
	beq _080C7CA2
	add r0, r4, #0
	bl sub_080C4C98
_080C7CA2:
	mov r0, #0
_080C7CA4:
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C7CAC:
	.4byte gRam
_080C7CB0:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080C7BC0

