	THUMB_FUNC_START sub_0805893C
sub_0805893C: @ 0x0805893C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08058960  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	cmp r1, #1
	bls _08058964
	mov r1, #128
	lsl r1, r1, #2
	add r0, r1, #0
	bl play_sound
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080589C0
	.byte 0x00
	.byte 0x00
_08058960:
	.4byte gUnknown_02016D60
_08058964:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08058996
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _08058994
	mov r0, #126
	bl play_sound
_08058994:
	b _080589C0
_08058996:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #96
	ldr r1, _080589C8  @ =gUnknown_02016D60
	ldrb r2, [r2]
	ldrb r3, [r1, #10]
	add r1, r2, r3
	add r2, r0, #0
	add r0, r0, #96
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	bl sub_08058734
_080589C0:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_080589C8:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0805893C

