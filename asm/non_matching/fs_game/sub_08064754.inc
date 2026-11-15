	THUMB_FUNC_START sub_08064754
sub_08064754: @ 0x08064754
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	ldr r0, [r7]
	bl 0x080037EC
	mov r1, #128
	lsl r1, r1, #7
	ldr r0, [r7]
	bl 0x08003594
	cmp r0, #0
	bne _0806479C
	mov r0, #14
	bl play_sound
	ldr r0, _080647A4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
_0806479C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_080647A4:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08064754

