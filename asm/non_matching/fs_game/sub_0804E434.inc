	THUMB_FUNC_START sub_0804E434
sub_0804E434: @ 0x0804E434
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08000580
	add r1, r7, #4
	strb r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804E464
	ldr r0, _0804E4E0  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	ldr r0, [r7]
	bl sub_0804E364
_0804E464:
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804E488
	ldr r1, _0804E4E0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_0804E364
_0804E488:
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804E4B0
	ldr r1, _0804E4E0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_0804E364
_0804E4B0:
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804E4D8
	ldr r1, _0804E4E0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_0804E364
_0804E4D8:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
_0804E4E0:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0804E434

