	THUMB_FUNC_START sub_080645EC
sub_080645EC: @ 0x080645EC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	ldr r0, [r7]
	bl 0x080037EC
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #12]
	add r1, r2, #0
	sub r1, r1, #20
	str r1, [r0, #12]
	ldr r0, [r7]
	mov r2, #50
	ldrsh r1, [r0, r2]
	cmp r1, #176
	ble _0806468C
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #176
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #1
	ldrb r2, [r0, #21]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #21]
	ldr r0, _08064694  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _08064698  @ =0x000001AB
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #8]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r1, #254
	lsl r1, r1, #1
	add r0, r1, #0
	bl play_sound
_0806468C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08064694:
	.4byte gUnknown_03006A30
_08064698:
	.4byte 0x000001AB
	THUMB_FUNC_END sub_080645EC

