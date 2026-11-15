	THUMB_FUNC_START sub_08054A38
sub_08054A38: @ 0x08054A38
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08054A46:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #11
	bls _08054A50
	b _08054A84
_08054A50:
	ldr r0, _08054A80  @ =0x0000010D
	ldr r1, [r7]
	add r2, r7, #4
	ldrb r3, [r2]
	add r4, r3, #0
	lsl r2, r4, #1
	add r3, r1, #0
	add r1, r1, #96
	add r2, r1, r2
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08054A46
_08054A80:
	.4byte 0x0000010D
_08054A84:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08054A38

