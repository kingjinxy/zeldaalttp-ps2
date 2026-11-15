	THUMB_FUNC_START sub_080F7CC0
sub_080F7CC0: @ 0x080F7CC0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r6, r1, #0
	add r0, r4, #0
	bl sub_080C9268
	cmp r0, #0
	bne _080F7D7E
	ldr r5, _080F7D58  @ =gRam
	ldr r1, _080F7D5C  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r3, _080F7D60  @ =0x00000F02
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	sub r1, r1, #16
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	sub r2, r2, #16
	sub r1, r1, #24
	ldr r3, _080F7D64  @ =0x00000968
	add r0, r5, r3
	strb r2, [r0]
	lsr r2, r2, #8
	add r3, r3, #12
	add r0, r5, r3
	strb r2, [r0]
	ldr r2, _080F7D68  @ =0x00000969
	add r0, r5, r2
	strb r1, [r0]
	lsr r1, r1, #8
	add r3, r3, #1
	add r0, r5, r3
	strb r1, [r0]
	ldr r0, _080F7D6C  @ =0x0000096C
	add r1, r5, r0
	mov r0, #48
	strb r0, [r1]
	add r2, r2, #4
	add r1, r5, r2
	mov r0, #56
	strb r0, [r1]
	bl sub_080C44FC
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F7D54
	ldr r1, _080F7D70  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r3, _080F7D74  @ =0x00000546
	add r0, r5, r3
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080F7D78
_080F7D54:
	mov r0, #0
	b _080F7D80
_080F7D58:
	.4byte gRam
_080F7D5C:
	.4byte 0x00000EE2
_080F7D60:
	.4byte 0x00000F02
_080F7D64:
	.4byte 0x00000968
_080F7D68:
	.4byte 0x00000969
_080F7D6C:
	.4byte 0x0000096C
_080F7D70:
	.4byte gUnknown_03003E70
_080F7D74:
	.4byte 0x00000546
_080F7D78:
	add r0, r6, #0
	bl sub_080C95C0
_080F7D7E:
	mov r0, #1
_080F7D80:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080F7CC0

	.byte 0x00
	.byte 0x00
