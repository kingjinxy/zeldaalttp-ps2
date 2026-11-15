	THUMB_FUNC_START sub_080528B4
sub_080528B4: @ 0x080528B4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #152
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, _08052914  @ =gUnknown_0201F000
	ldr r1, [r0]
	cmp r1, #0
	beq _08052918
	ldr r0, [r7]
	mov r2, #54
	ldrsh r1, [r0, r2]
	cmp r1, #104
	ble _08052910
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #1
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08052910:
	b _08052930
	.byte 0x00
	.byte 0x00
_08052914:
	.4byte gUnknown_0201F000
_08052918:
	ldr r0, [r7]
	ldr r2, _08052938  @ =gUnknown_03006A30
	ldr r1, [r2, #40]
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08052930:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08052938:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_080528B4

