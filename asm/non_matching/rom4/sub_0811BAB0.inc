	THUMB_FUNC_START sub_0811BAB0
sub_0811BAB0: @ 0x0811BAB0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r4, r0, #24
	cmp r4, #0
	bne _0811BB76
	mov r0, #23
	mov r1, #1
	bl sub_080BEA28
	ldr r2, _0811BB80  @ =gRam
	mov r1, sp
	mov r3, #196
	lsl r3, r3, #5
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	mov r1, sp
	ldr r5, _0811BB84  @ =0x00000E1F
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	mov r1, sp
	sub r3, r3, #43
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	mov r1, sp
	ldr r5, _0811BB88  @ =0x00001818
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	mov r1, sp
	sub r3, r3, #35
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r1, _0811BB8C  @ =gUnknown_0817F593
	ldrb r1, [r1, #1]
	strb r1, [r0]
	mov r1, sp
	ldr r5, _0811BB90  @ =0x00000E29
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	ldr r0, _0811BB94  @ =0x00001754
	add r3, r2, r0
	ldrb r0, [r3]
	ldr r1, _0811BB98  @ =gUnknown_0200EBA0
	add r0, r0, r1
	ldrb r0, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r4, r2, r5
	strb r0, [r4]
	ldrb r0, [r3]
	add r1, r1, #20
	add r0, r0, r1
	ldrb r1, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r1, [r0]
	ldrb r0, [r3]
	ldr r1, _0811BB9C  @ =gUnknown_0200EBC8
	add r0, r0, r1
	ldrb r0, [r0]
	add r5, r5, #3
	add r1, r2, r5
	strb r0, [r1]
	ldrb r0, [r3]
	ldr r3, _0811BBA0  @ =gUnknown_0200EBDC
	add r0, r0, r3
	ldrb r0, [r0]
	add r5, r5, #1
	add r2, r2, r5
	strb r0, [r2]
	ldrh r0, [r4]
	add r0, r0, #16
	strh r0, [r4]
	ldrh r0, [r1]
	add r0, r0, #8
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_0811BB76:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811BB80:
	.4byte gRam
_0811BB84:
	.4byte 0x00000E1F
_0811BB88:
	.4byte 0x00001818
_0811BB8C:
	.4byte gUnknown_0817F593
_0811BB90:
	.4byte 0x00000E29
_0811BB94:
	.4byte 0x00001754
_0811BB98:
	.4byte gUnknown_0200EBA0
_0811BB9C:
	.4byte gUnknown_0200EBC8
_0811BBA0:
	.4byte gUnknown_0200EBDC
	THUMB_FUNC_END sub_0811BAB0

