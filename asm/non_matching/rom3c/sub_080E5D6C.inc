	THUMB_FUNC_START sub_080E5D6C
sub_080E5D6C: @ 0x080E5D6C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r3, _080E5E68  @ =gRam
	ldr r1, _080E5E6C  @ =0x00001082
	add r0, r3, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E5E62
	ldr r2, _080E5E70  @ =0x00000FA2
	add r0, r3, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080E5E36
	ldr r4, _080E5E74  @ =0x000009AD
	add r0, r3, r4
	ldr r2, _080E5E78  @ =0x00001605
	add r1, r3, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080E5E36
	ldr r4, _080E5E7C  @ =0x00001622
	add r0, r3, r4
	ldrb r1, [r0]
	ldr r2, _080E5E80  @ =0x00001623
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r4, r4, #162
	add r0, r3, r4
	ldrb r2, [r0]
	add r4, r4, #1
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #192
	lsl r0, r0, #13
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #47
	bhi _080E5E36
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080E5E84  @ =0x000016C1
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	sub r4, r4, #161
	add r0, r3, r4
	ldrb r2, [r0]
	add r4, r4, #1
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #128
	lsl r0, r0, #14
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #47
	bhi _080E5E36
	ldr r1, _080E5E88  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080E5E8C  @ =0x00000546
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080E5E36
	ldr r2, _080E5E90  @ =0x00001002
	add r1, r3, r2
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #1
	and r0, r0, r2
	add r2, r2, #1
	strb r2, [r1]
	ldr r4, _080E5E94  @ =0x0000017D
	add r0, r0, r4
	bl sub_080C95C0
_080E5E36:
	ldr r4, _080E5E68  @ =gRam
	ldr r0, _080E5E98  @ =0x00001122
	add r4, r4, r0
	add r4, r6, r4
	ldrb r1, [r4]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r4]
	ldrb r5, [r4]
	mov r1, #8
	add r0, r5, #0
	orr r0, r0, r1
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080E5F00
	mov r0, #13
	orr r5, r5, r0
	strb r5, [r4]
	mov r0, #16
	bl sub_080CF370
_080E5E62:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E5E68:
	.4byte gRam
_080E5E6C:
	.4byte 0x00001082
_080E5E70:
	.4byte 0x00000FA2
_080E5E74:
	.4byte 0x000009AD
_080E5E78:
	.4byte 0x00001605
_080E5E7C:
	.4byte 0x00001622
_080E5E80:
	.4byte 0x00001623
_080E5E84:
	.4byte 0x000016C1
_080E5E88:
	.4byte gUnknown_03003E70
_080E5E8C:
	.4byte 0x00000546
_080E5E90:
	.4byte 0x00001002
_080E5E94:
	.4byte 0x0000017D
_080E5E98:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080E5D6C

