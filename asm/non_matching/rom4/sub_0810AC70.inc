	THUMB_FUNC_START sub_0810AC70
sub_0810AC70: @ 0x0810AC70
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _0810ACA0  @ =gRam
	ldr r1, _0810ACA4  @ =0x00000F92
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #11
	bls _0810ACC8
	mov r1, #0
	ldr r2, _0810ACA8  @ =0x000009DA
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #205
	bne _0810AC92
	mov r1, #1
_0810AC92:
	cmp r1, #0
	beq _0810ACB0
	ldrb r1, [r4]
	sub r1, r1, #12
	lsl r1, r1, #5
	ldr r0, _0810ACAC  @ =gUnknown_0817C9AC
	b _0810ACB8
_0810ACA0:
	.4byte gRam
_0810ACA4:
	.4byte 0x00000F92
_0810ACA8:
	.4byte 0x000009DA
_0810ACAC:
	.4byte gUnknown_0817C9AC
_0810ACB0:
	ldrb r1, [r4]
	sub r1, r1, #12
	lsl r1, r1, #5
	ldr r0, _0810ACC4  @ =gUnknown_0817C8CC
_0810ACB8:
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #4
	bl sub_080C9480
	b _0810AD70
_0810ACC4:
	.4byte gUnknown_0817C8CC
_0810ACC8:
	ldr r0, _0810AD30  @ =0x00001122
	add r2, r6, r0
	add r2, r5, r2
	ldrb r7, [r2]
	mov r1, #63
	and r1, r1, r7
	ldr r3, _0810AD34  @ =gUnknown_0817CA8C
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	mov r0, #0
	ldr r1, _0810AD38  @ =0x000009DA
	add r2, r6, r1
	ldrh r1, [r2]
	cmp r1, #205
	bne _0810ACEE
	mov r0, #1
_0810ACEE:
	cmp r0, #0
	beq _0810AD3C
	ldrb r0, [r4]
	add r0, r0, #12
	strb r0, [r4]
	ldrb r1, [r4]
	mov r3, #0
	ldrh r0, [r2]
	cmp r0, #205
	bne _0810AD04
	mov r3, #1
_0810AD04:
	cmp r3, #0
	beq _0810AD10
	add r0, r1, #0
	sub r0, r0, #12
	lsl r0, r0, #24
	lsr r1, r0, #24
_0810AD10:
	add r0, r1, #0
	sub r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _0810AD22
	add r0, r5, #0
	bl sub_0810ABE8
_0810AD22:
	add r0, r5, #0
	bl sub_080C6240
	ldrb r0, [r4]
	sub r0, r0, #12
	strb r0, [r4]
	b _0810AD66
_0810AD30:
	.4byte 0x00001122
_0810AD34:
	.4byte gUnknown_0817CA8C
_0810AD38:
	.4byte 0x000009DA
_0810AD3C:
	ldrb r0, [r4]
	mov r2, #0
	cmp r1, #205
	bne _0810AD46
	mov r2, #1
_0810AD46:
	cmp r2, #0
	beq _0810AD50
	sub r0, r0, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
_0810AD50:
	sub r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _0810AD60
	add r0, r5, #0
	bl sub_0810ABE8
_0810AD60:
	add r0, r5, #0
	bl sub_080C6240
_0810AD66:
	ldr r0, _0810AD78  @ =gRam
	ldr r2, _0810AD7C  @ =0x00001122
	add r0, r0, r2
	add r0, r5, r0
	strb r7, [r0]
_0810AD70:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810AD78:
	.4byte gRam
_0810AD7C:
	.4byte 0x00001122
	THUMB_FUNC_END sub_0810AC70

