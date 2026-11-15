	THUMB_FUNC_START sub_0805293C
sub_0805293C: @ 0x0805293C
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #20]
	cmp r0, #0
	beq _08052952
	cmp r0, #1
	beq _0805297C
	b _08052A7E
_08052952:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	add r0, r1, #0
	bl sub_08013D20
	ldr r1, [r7]
	str r0, [r1, #96]
	b _08052A7E
_0805297C:
	ldr r0, _080529AC  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r7]
	ldr r0, [r0]
	ldr r1, [r1, #96]
	and r0, r0, r1
	ldr r1, [r7]
	ldr r2, [r1, #96]
	cmp r0, r2
	beq _0805299E
	b _08052A7C
_0805299E:
	ldr r1, [r7]
	ldrb r0, [r1, #23]
	cmp r0, #0
	beq _080529B0
	cmp r0, #1
	beq _08052A02
	b _080529B0
_080529AC:
	.4byte gUnknown_0201F000
_080529B0:
	ldr r0, [r7]
	bl sub_0804C9C8
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	ldr r0, [r7]
	bl sub_0804CABC
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08052A00
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #5
	beq _08052A00
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #11]
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
_08052A00:
	b _08052A70
_08052A02:
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	ldr r0, [r7]
	bl sub_0804CABC
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08052A6E
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #11]
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	ldr r0, [r7, #4]
	mov r1, #1
	str r1, [r0, #16]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #5
	beq _08052A6E
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #11]
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
_08052A6E:
	b _08052A70
_08052A70:
	mov r0, #16
	bl play_sound
	ldr r0, [r7]
	bl DeleteThisEntity
_08052A7C:
	b _08052A7E
_08052A7E:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805293C

	.byte 0x00
	.byte 0x00
