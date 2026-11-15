	THUMB_FUNC_START sub_080159F4
sub_080159F4: @ 0x080159F4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	add r5, r1, #0
	add r1, r5, #4
	mov r0, #0
	ldr r6, _08015AC0  @ =0x00007004
	mov r2, #128
	lsl r2, r2, #1
	mov r8, r2
_08015A0A:
	mov r7, #0
	add r0, r0, #1
	mov r12, r0
	mov r0, #128
	lsl r0, r0, #1
	add r3, r4, r0
_08015A16:
	ldrh r0, [r1]
	lsl r0, r0, #3
	add r0, r0, r6
	add r2, r5, r0
	ldrh r0, [r2]
	strh r0, [r4]
	add r2, r2, #2
	ldrh r0, [r2]
	strh r0, [r4, #2]
	add r2, r2, #2
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2, #2]
	strh r0, [r3, #2]
	add r3, r3, #4
	add r4, r4, #4
	add r1, r1, #2
	ldrh r0, [r1]
	lsl r0, r0, #3
	add r0, r0, r6
	add r2, r5, r0
	ldrh r0, [r2]
	strh r0, [r4]
	add r2, r2, #2
	ldrh r0, [r2]
	strh r0, [r4, #2]
	add r2, r2, #2
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2, #2]
	strh r0, [r3, #2]
	add r3, r3, #4
	add r4, r4, #4
	add r1, r1, #2
	ldrh r0, [r1]
	lsl r0, r0, #3
	add r0, r0, r6
	add r2, r5, r0
	ldrh r0, [r2]
	strh r0, [r4]
	add r2, r2, #2
	ldrh r0, [r2]
	strh r0, [r4, #2]
	add r2, r2, #2
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2, #2]
	strh r0, [r3, #2]
	add r3, r3, #4
	add r4, r4, #4
	add r1, r1, #2
	ldrh r0, [r1]
	lsl r0, r0, #3
	add r0, r0, r6
	add r2, r5, r0
	ldrh r0, [r2]
	strh r0, [r4]
	add r2, r2, #2
	ldrh r0, [r2]
	strh r0, [r4, #2]
	add r2, r2, #2
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2, #2]
	strh r0, [r3, #2]
	add r3, r3, #4
	add r4, r4, #4
	add r1, r1, #2
	add r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	cmp r7, #15
	bls _08015A16
	add r4, r4, r8
	mov r2, r12
	lsl r0, r2, #16
	lsr r0, r0, #16
	cmp r0, #63
	bls _08015A0A
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08015AC0:
	.4byte 0x00007004
	THUMB_FUNC_END sub_080159F4

