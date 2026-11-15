	THUMB_FUNC_START sub_08115D30
sub_08115D30: @ 0x08115D30
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldrb r7, [r0, #1]
	ldrb r5, [r0]
	cmp r5, r7
	beq _08115DA8
	ldr r6, _08115D90  @ =gRam
	ldr r0, _08115D94  @ =0x00000968
	add r0, r0, r6
	mov r8, r0
	lsl r0, r5, #2
	add r0, r0, r5
	lsl r0, r0, #1
	add r4, r0, r1
_08115D4E:
	ldr r2, _08115D98  @ =0x00000974
	add r1, r6, r2
	mov r0, #0
	strh r0, [r1]
	ldr r0, _08115D9C  @ =0x00001663
	add r1, r6, r0
	ldrh r0, [r4, #8]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08115DA0
	ldrh r1, [r4]
	sub r2, r2, #20
	add r0, r6, r2
	strh r1, [r0]
	ldrh r1, [r4, #2]
	add r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	ldrh r1, [r4, #4]
	add r2, r2, #8
	add r0, r6, r2
	strh r1, [r0]
	ldrh r0, [r4, #6]
	mov r1, r8
	strh r0, [r1]
	bl sub_08115E34
	cmp r0, #0
	beq _08115DA0
	bl sub_08115DB4
	b _08115DA8
	.byte 0x00
	.byte 0x00
_08115D90:
	.4byte gRam
_08115D94:
	.4byte 0x00000968
_08115D98:
	.4byte 0x00000974
_08115D9C:
	.4byte 0x00001663
_08115DA0:
	add r4, r4, #10
	add r5, r5, #1
	cmp r5, r7
	bne _08115D4E
_08115DA8:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08115D30

	.byte 0x00
	.byte 0x00
