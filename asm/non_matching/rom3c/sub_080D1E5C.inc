	THUMB_FUNC_START sub_080D1E5C
sub_080D1E5C: @ 0x080D1E5C
	push {r4-r7,lr}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r6, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _080D1EC4
	ldr r0, _080D1ECC  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _080D1ED0  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	ldr r3, _080D1ED4  @ =gUnknown_08174B7C
	ldr r5, _080D1ED8  @ =0x00000FB2
	add r2, r4, r5
	add r2, r6, r2
	ldrb r5, [r2]
	add r3, r5, r3
	ldrb r2, [r3]
	add r1, r1, r2
	ldr r3, _080D1EDC  @ =0x00000964
	add r2, r4, r3
	ldrb r2, [r2]
	add r3, r3, #5
	add r4, r4, r3
	mov r3, #0
	ldrsb r3, [r4, r3]
	ldr r4, _080D1EE0  @ =gUnknown_08174B7E
	add r5, r5, r4
	ldrb r4, [r5]
	orr r3, r3, r4
	lsl r3, r3, #8
	add r3, r3, #206
	lsl r3, r3, #16
	lsr r3, r3, #16
	str r7, [sp]
	bl sub_080C6004
	add r0, r6, #0
	mov r1, #0
	mov r2, #0
	bl sub_080C6350
_080D1EC4:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
_080D1ECC:
	.4byte gUnknown_03003E74
_080D1ED0:
	.4byte gRam
_080D1ED4:
	.4byte gUnknown_08174B7C
_080D1ED8:
	.4byte 0x00000FB2
_080D1EDC:
	.4byte 0x00000964
_080D1EE0:
	.4byte gUnknown_08174B7E
	THUMB_FUNC_END sub_080D1E5C

