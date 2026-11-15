	THUMB_FUNC_START sub_080FA724
sub_080FA724: @ 0x080FA724
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r6, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FA7A8
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FA7A8
	ldr r5, _080FA7B0  @ =gRam
	ldr r1, _080FA7B4  @ =0x0000176C
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FA7A8
	ldr r2, _080FA7B8  @ =0x0000180D
	add r0, r5, r2
	sub r2, r2, #99
	add r1, r5, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080FA7A8
	ldr r0, _080FA7BC  @ =0x00001663
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #10
	beq _080FA7A8
	ldr r1, _080FA7C0  @ =0x000009C6
	add r0, r5, r1
	ldrh r0, [r0]
	ldr r2, _080FA7C4  @ =gUnknown_02002280
	add r0, r0, r2
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _080FA7A8
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FA7A8
	mov r0, #10
	strb r0, [r7]
	ldr r1, _080FA7C8  @ =0x00001787
	add r0, r5, r1
	strb r4, [r0]
	bl sub_0812F9A8
	bl sub_08114600
_080FA7A8:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080FA7B0:
	.4byte gRam
_080FA7B4:
	.4byte 0x0000176C
_080FA7B8:
	.4byte 0x0000180D
_080FA7BC:
	.4byte 0x00001663
_080FA7C0:
	.4byte 0x000009C6
_080FA7C4:
	.4byte gUnknown_02002280
_080FA7C8:
	.4byte 0x00001787
	THUMB_FUNC_END sub_080FA724

