	THUMB_FUNC_START sub_080D6754
sub_080D6754: @ 0x080D6754
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r5, _080D6854  @ =gRam
	ldr r1, _080D6858  @ =0x00000F92
	add r0, r5, r1
	mov r2, r9
	add r4, r2, r0
	ldrb r0, [r4]
	cmp r0, #8
	bhi _080D677C
	mov r0, r9
	bl sub_080C5D18
_080D677C:
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D6844
	ldr r1, _080D685C  @ =gUnknown_08175366
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r0, [r0]
	str r0, [sp, #8]
	lsl r2, r0, #24
	cmp r2, #0
	blt _080D6844
	mov r10, r5
	add r3, sp, #4
	mov r8, r3
_080D67A4:
	ldr r0, _080D6858  @ =0x00000F92
	add r0, r0, r10
	add r0, r0, r9
	ldrb r1, [r0]
	lsl r1, r1, #2
	asr r0, r2, #24
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _080D6860  @ =gUnknown_08175454
	add r0, r5, r0
	ldr r7, _080D6864  @ =gUnknown_03002B99
	ldrb r4, [r7]
	ldrb r6, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080D67D2
	cmp r6, #72
	beq _080D67D2
	cmp r6, #104
	bne _080D67D6
_080D67D2:
	mov r0, #240
	and r4, r4, r0
_080D67D6:
	ldr r0, _080D6868  @ =gUnknown_03003E74
	mov r2, r8
	ldrb r1, [r2]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r10
	ldr r1, _080D686C  @ =gUnknown_08175374
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080D6870  @ =gUnknown_081753E4
	add r3, r3, r2
	ldrh r2, [r3]
	ldr r3, _080D6874  @ =gUnknown_03002B94
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080D6878  @ =gUnknown_0817548C
	add r3, r5, r3
	ldrb r3, [r3]
	orr r4, r4, r3
	lsl r3, r4, #8
	add r3, r6, r3
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080D687C  @ =gUnknown_081754C4
	add r4, r5, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	ldr r7, [sp, #8]
	lsl r0, r7, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r0, r0, #24
	str r0, [sp, #8]
	mov r2, r8
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r3, [sp, #8]
	lsl r2, r3, #24
	cmp r2, #0
	bge _080D67A4
_080D6844:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080D6854:
	.4byte gRam
_080D6858:
	.4byte 0x00000F92
_080D685C:
	.4byte gUnknown_08175366
_080D6860:
	.4byte gUnknown_08175454
_080D6864:
	.4byte gUnknown_03002B99
_080D6868:
	.4byte gUnknown_03003E74
_080D686C:
	.4byte gUnknown_08175374
_080D6870:
	.4byte gUnknown_081753E4
_080D6874:
	.4byte gUnknown_03002B94
_080D6878:
	.4byte gUnknown_0817548C
_080D687C:
	.4byte gUnknown_081754C4
	THUMB_FUNC_END sub_080D6754

